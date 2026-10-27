#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0146[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0,
    0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0,
    12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0,
    17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0,
    0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0,
    28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0,
    33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0,
    0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0,
    44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0,
    49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0,
    0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0,
    60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0,
    65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0,
    0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0,
    76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0,
    81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0,
    0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0,
    92, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0,
    97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0,
    0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0,
    108, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0,
    113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0,
    0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0,
    124, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0,
    129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0,
    0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0,
    140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0,
    145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0,
    0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0,
    156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0,
    161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0,
    0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0,
    172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0,
    177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0,
    0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0,
    188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0,
    193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0,
    0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0,
    204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0,
    209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0,
    0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0,
    220, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0,
    225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0,
    0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0,
    236, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0,
    241, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0,
    0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0,
    252, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0,
    257, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0,
    0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0,
    268, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0,
    273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0,
    0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0,
    284, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0,
    289, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0,
    0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0,
    300, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0,
    305, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0,
    0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0,
    316, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0,
    321, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0,
    0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0,
    332, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0,
    337, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 0,
    0, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0,
    348, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0,
    353, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0,
    0, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0,
    364, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0,
    369, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0,
    0, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0,
    380, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0,
    385, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 0,
    0, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0,
    396, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0,
    401, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 406, 0, 0, 0,
    0, 0, 0, 0, 407, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0,
    412, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0,
    417, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 0,
    0, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0,
    428, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0, 435, 0, 0, 0,
    0, 0, 0, 0, 436, 0, 0, 0, 437, 0, 0, 0, 438, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0, 441, 0, 0, 0, 442, 0, 0, 0,
    0, 0, 0, 0, 443, 0, 0, 0, 444, 0, 0, 0, 445, 0, 0, 0, 446, 0, 0, 0, 447, 0, 0, 0, 448, 0, 0, 0, 449, 0, 0, 0,
    450, 0, 0, 0, 451, 0, 0, 0, 452, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 455, 0, 0, 0, 456, 0, 0, 0,
    457, 0, 0, 0, 458, 0, 0, 0, 459, 0, 0, 0, 460, 0, 0, 0, 461, 0, 0, 0, 462, 0, 0, 0, 463, 0, 0, 0, 464, 0, 0, 0,
    465, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0,
    0, 0, 0, 0, 470, 0, 0, 0, 471, 0, 0, 0, 472, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 475, 0, 0, 0,
    0, 0, 0, 0, 476, 0, 0, 0, 477, 0, 0, 0, 478, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 480, 0, 0, 0, 481, 0, 0, 0,
    482, 0, 0, 0, 483, 0, 0, 0, 484, 0, 0, 0, 485, 0, 0, 0, 486, 0, 0, 0, 487, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0,
    489, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 492, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0,
    495, 0, 0, 0, 496, 0, 0, 0, 497, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 499, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0,
    501, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0,
    506, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 508, 0, 0, 0, 509, 0, 0, 0, 510, 0, 0, 0, 511, 0, 0, 0, 512, 0, 0, 0,
    513, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 515, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 518, 0, 0, 0,
    519, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 522, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0,
    525, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 528, 0, 0, 0, 529, 0, 0, 0, 530, 0, 0, 0, 531, 0, 0, 0,
    532, 0, 0, 0, 533, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 536, 0, 0, 0, 537, 0, 0, 0, 538, 0, 0, 0,
    539, 0, 0, 0, 540, 0, 0, 0, 541, 0, 0, 0, 542, 0, 0, 0, 543, 0, 0, 0, 544, 0, 0, 0, 545, 0, 0, 0, 546, 0, 0, 0,
    547, 0, 0, 0, 548, 0, 0, 0, 549, 0, 0, 0, 550, 0, 0, 0, 551, 0, 0, 0, 552, 0, 0, 0, 553, 0, 0, 0, 554, 0, 0, 0,
    555, 0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 0, 557, 0, 0, 0, 558, 0, 0, 0, 559, 0, 0, 0, 560, 0, 0, 0, 561, 0, 0, 0,
    562, 0, 0, 0, 563, 0, 0, 0, 564, 0, 0, 0, 565, 0, 0, 0, 566, 0, 0, 0, 567, 0, 0, 0, 568, 0, 0, 0, 0, 0, 0, 0,
    569, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 0, 573, 0, 0, 0,
    0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 0, 577, 0, 0, 0, 578, 0, 0, 0,
    579, 0, 0, 0, 580, 0, 0, 0, 581, 0, 0, 0, 582, 0, 0, 0, 583, 0, 0, 0, 584, 0, 0, 0, 585, 0, 0, 0, 586, 0, 0, 0,
    587, 0, 0, 0, 588, 0, 0, 0, 589, 0, 0, 0, 590, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 0, 592, 0, 0, 0, 593, 0, 0, 0,
    0, 0, 0, 0, 594, 0, 0, 0, 595, 0, 0, 0, 596, 0, 0, 0, 0, 0, 0, 0, 597, 0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 0,
    599, 0, 0, 0, 600, 0, 0, 0, 601, 0, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 603, 0, 0, 0, 604, 0, 0, 0, 605, 0, 0, 0,
    606, 0, 0, 0, 607, 0, 0, 0, 608, 0, 0, 0, 0, 0, 0, 0, 609, 0, 0, 0, 610, 0, 0, 0, 611, 0, 0, 0, 612, 0, 0, 0,
    613, 0, 0, 0, 614, 0, 0, 0, 615, 0, 0, 0, 616, 0, 0, 0, 617, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 0, 619, 0, 0, 0,
    620, 0, 0, 0, 621, 0, 0, 0, 622, 0, 0, 0, 623, 0, 0, 0, 624, 0, 0, 0, 625, 0, 0, 0, 626, 0, 0, 0, 627, 0, 0, 0,
    628, 0, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 630, 0, 0, 0, 631, 0, 0, 0, 632, 0, 0, 0, 633, 0, 0, 0, 634, 0, 0, 0,
    635, 0, 0, 0, 636, 0, 0, 0, 637, 0, 0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 639, 0, 0, 0, 640, 0, 0, 0, 641, 0, 0, 0,
    642, 0, 0, 0, 643, 0, 0, 0, 644, 0, 0, 0, 645, 0, 0, 0, 646, 0, 0, 0, 0, 0, 0, 0, 647, 0, 0, 0, 648, 0, 0, 0,
    649, 0, 0, 0, 650, 0, 0, 0, 651, 0, 0, 0, 0, 0, 0, 0, 652, 0, 0, 0, 653, 0, 0, 0, 654, 0, 0, 0, 0, 0, 0, 0,
    655, 0, 0, 0, 656, 0, 0, 0, 657, 0, 0, 0, 658, 0, 0, 0, 659, 0, 0, 0, 660, 0, 0, 0, 661, 0, 0, 0, 0, 0, 0, 0,
    662, 0, 0, 0, 663, 0, 0, 0, 664, 0, 0, 0, 0, 0, 0, 0, 665, 0, 0, 0, 666, 0, 0, 0, 667, 0, 0, 0, 0, 0, 0, 0,
    668, 0, 0, 0, 669, 0, 0, 0, 0, 0, 0, 0, 670, 0, 0, 0, 671, 0, 0, 0, 672, 0, 0, 0, 0, 0, 0, 0, 673, 0, 0, 0,
    674, 0, 0, 0, 0, 0, 0, 0, 675, 0, 0, 0, 676, 0, 0, 0, 677, 0, 0, 0, 678, 0, 0, 0, 679, 0, 0, 0, 680, 0, 0, 0,
};

void unit_0146(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00618000;
    case 2u: goto L_00618010;
    case 3u: goto L_00618030;
    case 4u: goto L_00618040;
    case 5u: goto L_00618060;
    case 6u: goto L_00618070;
    case 7u: goto L_00618090;
    case 8u: goto L_006180A0;
    case 9u: goto L_006180C0;
    case 10u: goto L_006180D0;
    case 11u: goto L_006180F0;
    case 12u: goto L_00618100;
    case 13u: goto L_00618120;
    case 14u: goto L_00618130;
    case 15u: goto L_00618150;
    case 16u: goto L_00618160;
    case 17u: goto L_00618180;
    case 18u: goto L_00618190;
    case 19u: goto L_006181B0;
    case 20u: goto L_006181C0;
    case 21u: goto L_006181E0;
    case 22u: goto L_006181F0;
    case 23u: goto L_00618210;
    case 24u: goto L_00618220;
    case 25u: goto L_00618240;
    case 26u: goto L_00618250;
    case 27u: goto L_00618270;
    case 28u: goto L_00618280;
    case 29u: goto L_006182A0;
    case 30u: goto L_006182B0;
    case 31u: goto L_006182D0;
    case 32u: goto L_006182E0;
    case 33u: goto L_00618300;
    case 34u: goto L_00618310;
    case 35u: goto L_00618330;
    case 36u: goto L_00618340;
    case 37u: goto L_00618360;
    case 38u: goto L_00618370;
    case 39u: goto L_00618390;
    case 40u: goto L_006183A0;
    case 41u: goto L_006183C0;
    case 42u: goto L_006183D0;
    case 43u: goto L_006183F0;
    case 44u: goto L_00618400;
    case 45u: goto L_00618420;
    case 46u: goto L_00618430;
    case 47u: goto L_00618450;
    case 48u: goto L_00618460;
    case 49u: goto L_00618480;
    case 50u: goto L_00618490;
    case 51u: goto L_006184B0;
    case 52u: goto L_006184C0;
    case 53u: goto L_006184E0;
    case 54u: goto L_006184F0;
    case 55u: goto L_00618510;
    case 56u: goto L_00618520;
    case 57u: goto L_00618540;
    case 58u: goto L_00618550;
    case 59u: goto L_00618570;
    case 60u: goto L_00618580;
    case 61u: goto L_006185A0;
    case 62u: goto L_006185B0;
    case 63u: goto L_006185D0;
    case 64u: goto L_006185E0;
    case 65u: goto L_00618600;
    case 66u: goto L_00618610;
    case 67u: goto L_00618630;
    case 68u: goto L_00618640;
    case 69u: goto L_00618660;
    case 70u: goto L_00618670;
    case 71u: goto L_00618690;
    case 72u: goto L_006186A0;
    case 73u: goto L_006186C0;
    case 74u: goto L_006186D0;
    case 75u: goto L_006186F0;
    case 76u: goto L_00618700;
    case 77u: goto L_00618720;
    case 78u: goto L_00618730;
    case 79u: goto L_00618750;
    case 80u: goto L_00618760;
    case 81u: goto L_00618780;
    case 82u: goto L_00618790;
    case 83u: goto L_006187B0;
    case 84u: goto L_006187C0;
    case 85u: goto L_006187E0;
    case 86u: goto L_006187F0;
    case 87u: goto L_00618810;
    case 88u: goto L_00618820;
    case 89u: goto L_00618840;
    case 90u: goto L_00618850;
    case 91u: goto L_00618870;
    case 92u: goto L_00618880;
    case 93u: goto L_006188A0;
    case 94u: goto L_006188B0;
    case 95u: goto L_006188D0;
    case 96u: goto L_006188E0;
    case 97u: goto L_00618900;
    case 98u: goto L_00618910;
    case 99u: goto L_00618930;
    case 100u: goto L_00618940;
    case 101u: goto L_00618960;
    case 102u: goto L_00618970;
    case 103u: goto L_00618990;
    case 104u: goto L_006189A0;
    case 105u: goto L_006189C0;
    case 106u: goto L_006189D0;
    case 107u: goto L_006189F0;
    case 108u: goto L_00618A00;
    case 109u: goto L_00618A20;
    case 110u: goto L_00618A30;
    case 111u: goto L_00618A50;
    case 112u: goto L_00618A60;
    case 113u: goto L_00618A80;
    case 114u: goto L_00618A90;
    case 115u: goto L_00618AB0;
    case 116u: goto L_00618AC0;
    case 117u: goto L_00618AE0;
    case 118u: goto L_00618AF0;
    case 119u: goto L_00618B10;
    case 120u: goto L_00618B20;
    case 121u: goto L_00618B40;
    case 122u: goto L_00618B50;
    case 123u: goto L_00618B70;
    case 124u: goto L_00618B80;
    case 125u: goto L_00618BA0;
    case 126u: goto L_00618BB0;
    case 127u: goto L_00618BD0;
    case 128u: goto L_00618BE0;
    case 129u: goto L_00618C00;
    case 130u: goto L_00618C10;
    case 131u: goto L_00618C30;
    case 132u: goto L_00618C40;
    case 133u: goto L_00618C60;
    case 134u: goto L_00618C70;
    case 135u: goto L_00618C90;
    case 136u: goto L_00618CA0;
    case 137u: goto L_00618CC0;
    case 138u: goto L_00618CD0;
    case 139u: goto L_00618CF0;
    case 140u: goto L_00618D00;
    case 141u: goto L_00618D20;
    case 142u: goto L_00618D30;
    case 143u: goto L_00618D50;
    case 144u: goto L_00618D60;
    case 145u: goto L_00618D80;
    case 146u: goto L_00618D90;
    case 147u: goto L_00618DB0;
    case 148u: goto L_00618DC0;
    case 149u: goto L_00618DE0;
    case 150u: goto L_00618DF0;
    case 151u: goto L_00618E10;
    case 152u: goto L_00618E20;
    case 153u: goto L_00618E40;
    case 154u: goto L_00618E50;
    case 155u: goto L_00618E70;
    case 156u: goto L_00618E80;
    case 157u: goto L_00618EA0;
    case 158u: goto L_00618EB0;
    case 159u: goto L_00618ED0;
    case 160u: goto L_00618EE0;
    case 161u: goto L_00618F00;
    case 162u: goto L_00618F10;
    case 163u: goto L_00618F30;
    case 164u: goto L_00618F40;
    case 165u: goto L_00618F60;
    case 166u: goto L_00618F70;
    case 167u: goto L_00618F90;
    case 168u: goto L_00618FA0;
    case 169u: goto L_00618FC0;
    case 170u: goto L_00618FD0;
    case 171u: goto L_00618FF0;
    case 172u: goto L_00619000;
    case 173u: goto L_00619020;
    case 174u: goto L_00619030;
    case 175u: goto L_00619050;
    case 176u: goto L_00619060;
    case 177u: goto L_00619080;
    case 178u: goto L_00619090;
    case 179u: goto L_006190B0;
    case 180u: goto L_006190C0;
    case 181u: goto L_006190E0;
    case 182u: goto L_006190F0;
    case 183u: goto L_00619110;
    case 184u: goto L_00619120;
    case 185u: goto L_00619140;
    case 186u: goto L_00619150;
    case 187u: goto L_00619170;
    case 188u: goto L_00619180;
    case 189u: goto L_006191A0;
    case 190u: goto L_006191B0;
    case 191u: goto L_006191D0;
    case 192u: goto L_006191E0;
    case 193u: goto L_00619200;
    case 194u: goto L_00619210;
    case 195u: goto L_00619230;
    case 196u: goto L_00619240;
    case 197u: goto L_00619260;
    case 198u: goto L_00619270;
    case 199u: goto L_00619290;
    case 200u: goto L_006192A0;
    case 201u: goto L_006192C0;
    case 202u: goto L_006192D0;
    case 203u: goto L_006192F0;
    case 204u: goto L_00619300;
    case 205u: goto L_00619320;
    case 206u: goto L_00619330;
    case 207u: goto L_00619350;
    case 208u: goto L_00619360;
    case 209u: goto L_00619380;
    case 210u: goto L_00619390;
    case 211u: goto L_006193B0;
    case 212u: goto L_006193C0;
    case 213u: goto L_006193E0;
    case 214u: goto L_006193F0;
    case 215u: goto L_00619410;
    case 216u: goto L_00619420;
    case 217u: goto L_00619440;
    case 218u: goto L_00619450;
    case 219u: goto L_00619470;
    case 220u: goto L_00619480;
    case 221u: goto L_006194A0;
    case 222u: goto L_006194B0;
    case 223u: goto L_006194D0;
    case 224u: goto L_006194E0;
    case 225u: goto L_00619500;
    case 226u: goto L_00619510;
    case 227u: goto L_00619530;
    case 228u: goto L_00619540;
    case 229u: goto L_00619560;
    case 230u: goto L_00619570;
    case 231u: goto L_00619590;
    case 232u: goto L_006195A0;
    case 233u: goto L_006195C0;
    case 234u: goto L_006195D0;
    case 235u: goto L_006195F0;
    case 236u: goto L_00619600;
    case 237u: goto L_00619620;
    case 238u: goto L_00619630;
    case 239u: goto L_00619650;
    case 240u: goto L_00619660;
    case 241u: goto L_00619680;
    case 242u: goto L_00619690;
    case 243u: goto L_006196B0;
    case 244u: goto L_006196C0;
    case 245u: goto L_006196E0;
    case 246u: goto L_006196F0;
    case 247u: goto L_00619710;
    case 248u: goto L_00619720;
    case 249u: goto L_00619740;
    case 250u: goto L_00619750;
    case 251u: goto L_00619770;
    case 252u: goto L_00619780;
    case 253u: goto L_006197A0;
    case 254u: goto L_006197B0;
    case 255u: goto L_006197D0;
    case 256u: goto L_006197E0;
    case 257u: goto L_00619800;
    case 258u: goto L_00619810;
    case 259u: goto L_00619830;
    case 260u: goto L_00619840;
    case 261u: goto L_00619860;
    case 262u: goto L_00619870;
    case 263u: goto L_00619890;
    case 264u: goto L_006198A0;
    case 265u: goto L_006198C0;
    case 266u: goto L_006198D0;
    case 267u: goto L_006198F0;
    case 268u: goto L_00619900;
    case 269u: goto L_00619920;
    case 270u: goto L_00619930;
    case 271u: goto L_00619950;
    case 272u: goto L_00619960;
    case 273u: goto L_00619980;
    case 274u: goto L_00619990;
    case 275u: goto L_006199B0;
    case 276u: goto L_006199C0;
    case 277u: goto L_006199E0;
    case 278u: goto L_006199F0;
    case 279u: goto L_00619A10;
    case 280u: goto L_00619A20;
    case 281u: goto L_00619A40;
    case 282u: goto L_00619A50;
    case 283u: goto L_00619A70;
    case 284u: goto L_00619A80;
    case 285u: goto L_00619AA0;
    case 286u: goto L_00619AB0;
    case 287u: goto L_00619AD0;
    case 288u: goto L_00619AE0;
    case 289u: goto L_00619B00;
    case 290u: goto L_00619B10;
    case 291u: goto L_00619B30;
    case 292u: goto L_00619B40;
    case 293u: goto L_00619B60;
    case 294u: goto L_00619B70;
    case 295u: goto L_00619B90;
    case 296u: goto L_00619BA0;
    case 297u: goto L_00619BC0;
    case 298u: goto L_00619BD0;
    case 299u: goto L_00619BF0;
    case 300u: goto L_00619C00;
    case 301u: goto L_00619C20;
    case 302u: goto L_00619C30;
    case 303u: goto L_00619C50;
    case 304u: goto L_00619C60;
    case 305u: goto L_00619C80;
    case 306u: goto L_00619C90;
    case 307u: goto L_00619CB0;
    case 308u: goto L_00619CC0;
    case 309u: goto L_00619CE0;
    case 310u: goto L_00619CF0;
    case 311u: goto L_00619D10;
    case 312u: goto L_00619D20;
    case 313u: goto L_00619D40;
    case 314u: goto L_00619D50;
    case 315u: goto L_00619D70;
    case 316u: goto L_00619D80;
    case 317u: goto L_00619DA0;
    case 318u: goto L_00619DB0;
    case 319u: goto L_00619DD0;
    case 320u: goto L_00619DE0;
    case 321u: goto L_00619E00;
    case 322u: goto L_00619E10;
    case 323u: goto L_00619E30;
    case 324u: goto L_00619E40;
    case 325u: goto L_00619E60;
    case 326u: goto L_00619E70;
    case 327u: goto L_00619E90;
    case 328u: goto L_00619EA0;
    case 329u: goto L_00619EC0;
    case 330u: goto L_00619ED0;
    case 331u: goto L_00619EF0;
    case 332u: goto L_00619F00;
    case 333u: goto L_00619F20;
    case 334u: goto L_00619F30;
    case 335u: goto L_00619F50;
    case 336u: goto L_00619F60;
    case 337u: goto L_00619F80;
    case 338u: goto L_00619F90;
    case 339u: goto L_00619FB0;
    case 340u: goto L_00619FC0;
    case 341u: goto L_00619FE0;
    case 342u: goto L_00619FF0;
    case 343u: goto L_0061A010;
    case 344u: goto L_0061A020;
    case 345u: goto L_0061A040;
    case 346u: goto L_0061A050;
    case 347u: goto L_0061A070;
    case 348u: goto L_0061A080;
    case 349u: goto L_0061A0A0;
    case 350u: goto L_0061A0B0;
    case 351u: goto L_0061A0D0;
    case 352u: goto L_0061A0E0;
    case 353u: goto L_0061A100;
    case 354u: goto L_0061A110;
    case 355u: goto L_0061A130;
    case 356u: goto L_0061A140;
    case 357u: goto L_0061A160;
    case 358u: goto L_0061A170;
    case 359u: goto L_0061A190;
    case 360u: goto L_0061A1A0;
    case 361u: goto L_0061A1C0;
    case 362u: goto L_0061A1D0;
    case 363u: goto L_0061A1F0;
    case 364u: goto L_0061A200;
    case 365u: goto L_0061A220;
    case 366u: goto L_0061A230;
    case 367u: goto L_0061A250;
    case 368u: goto L_0061A260;
    case 369u: goto L_0061A280;
    case 370u: goto L_0061A290;
    case 371u: goto L_0061A2B0;
    case 372u: goto L_0061A2C0;
    case 373u: goto L_0061A2E0;
    case 374u: goto L_0061A2F0;
    case 375u: goto L_0061A310;
    case 376u: goto L_0061A320;
    case 377u: goto L_0061A340;
    case 378u: goto L_0061A350;
    case 379u: goto L_0061A370;
    case 380u: goto L_0061A380;
    case 381u: goto L_0061A3A0;
    case 382u: goto L_0061A3B0;
    case 383u: goto L_0061A3D0;
    case 384u: goto L_0061A3E0;
    case 385u: goto L_0061A400;
    case 386u: goto L_0061A410;
    case 387u: goto L_0061A430;
    case 388u: goto L_0061A440;
    case 389u: goto L_0061A460;
    case 390u: goto L_0061A470;
    case 391u: goto L_0061A490;
    case 392u: goto L_0061A4A0;
    case 393u: goto L_0061A4C0;
    case 394u: goto L_0061A4D0;
    case 395u: goto L_0061A4F0;
    case 396u: goto L_0061A500;
    case 397u: goto L_0061A520;
    case 398u: goto L_0061A530;
    case 399u: goto L_0061A550;
    case 400u: goto L_0061A560;
    case 401u: goto L_0061A580;
    case 402u: goto L_0061A590;
    case 403u: goto L_0061A5B0;
    case 404u: goto L_0061A5C0;
    case 405u: goto L_0061A5E0;
    case 406u: goto L_0061A5F0;
    case 407u: goto L_0061A610;
    case 408u: goto L_0061A620;
    case 409u: goto L_0061A640;
    case 410u: goto L_0061A650;
    case 411u: goto L_0061A670;
    case 412u: goto L_0061A680;
    case 413u: goto L_0061A6A0;
    case 414u: goto L_0061A6B0;
    case 415u: goto L_0061A6D0;
    case 416u: goto L_0061A6E0;
    case 417u: goto L_0061A700;
    case 418u: goto L_0061A710;
    case 419u: goto L_0061A730;
    case 420u: goto L_0061A740;
    case 421u: goto L_0061A760;
    case 422u: goto L_0061A770;
    case 423u: goto L_0061A790;
    case 424u: goto L_0061A7A0;
    case 425u: goto L_0061A7C0;
    case 426u: goto L_0061A7D0;
    case 427u: goto L_0061A7F0;
    case 428u: goto L_0061A800;
    case 429u: goto L_0061A820;
    case 430u: goto L_0061A830;
    case 431u: goto L_0061AD20;
    case 432u: goto L_0061AD40;
    case 433u: goto L_0061AD50;
    case 434u: goto L_0061AD60;
    case 435u: goto L_0061AD70;
    case 436u: goto L_0061AD90;
    case 437u: goto L_0061ADA0;
    case 438u: goto L_0061ADB0;
    case 439u: goto L_0061ADC0;
    case 440u: goto L_0061ADD0;
    case 441u: goto L_0061ADE0;
    case 442u: goto L_0061ADF0;
    case 443u: goto L_0061AE10;
    case 444u: goto L_0061AE20;
    case 445u: goto L_0061AE30;
    case 446u: goto L_0061AE40;
    case 447u: goto L_0061AE50;
    case 448u: goto L_0061AE60;
    case 449u: goto L_0061AE70;
    case 450u: goto L_0061AE80;
    case 451u: goto L_0061AE90;
    case 452u: goto L_0061AEA0;
    case 453u: goto L_0061AEB0;
    case 454u: goto L_0061AED0;
    case 455u: goto L_0061AEE0;
    case 456u: goto L_0061AEF0;
    case 457u: goto L_0061AF00;
    case 458u: goto L_0061AF10;
    case 459u: goto L_0061AF20;
    case 460u: goto L_0061AF30;
    case 461u: goto L_0061AF40;
    case 462u: goto L_0061AF50;
    case 463u: goto L_0061AF60;
    case 464u: goto L_0061AF70;
    case 465u: goto L_0061AF80;
    case 466u: goto L_0061AFA0;
    case 467u: goto L_0061AFB0;
    case 468u: goto L_0061AFD0;
    case 469u: goto L_0061AFF0;
    case 470u: goto L_0061B010;
    case 471u: goto L_0061B020;
    case 472u: goto L_0061B030;
    case 473u: goto L_0061B040;
    case 474u: goto L_0061B060;
    case 475u: goto L_0061B070;
    case 476u: goto L_0061B090;
    case 477u: goto L_0061B0A0;
    case 478u: goto L_0061B0B0;
    case 479u: goto L_0061B0C8;
    case 480u: goto L_0061B0E0;
    case 481u: goto L_0061B0F0;
    case 482u: goto L_0061B100;
    case 483u: goto L_0061B110;
    case 484u: goto L_0061B120;
    case 485u: goto L_0061B130;
    case 486u: goto L_0061B140;
    case 487u: goto L_0061B150;
    case 488u: goto L_0061B160;
    case 489u: goto L_0061B180;
    case 490u: goto L_0061B190;
    case 491u: goto L_0061B1B0;
    case 492u: goto L_0061B1C0;
    case 493u: goto L_0061B1D0;
    case 494u: goto L_0061B1F0;
    case 495u: goto L_0061B200;
    case 496u: goto L_0061B210;
    case 497u: goto L_0061B220;
    case 498u: goto L_0061B238;
    case 499u: goto L_0061B250;
    case 500u: goto L_0061B260;
    case 501u: goto L_0061B280;
    case 502u: goto L_0061B290;
    case 503u: goto L_0061B2B0;
    case 504u: goto L_0061B2D0;
    case 505u: goto L_0061B2F0;
    case 506u: goto L_0061B300;
    case 507u: goto L_0061B320;
    case 508u: goto L_0061B330;
    case 509u: goto L_0061B340;
    case 510u: goto L_0061B350;
    case 511u: goto L_0061B360;
    case 512u: goto L_0061B370;
    case 513u: goto L_0061B380;
    case 514u: goto L_0061B3A0;
    case 515u: goto L_0061B3B0;
    case 516u: goto L_0061B3C0;
    case 517u: goto L_0061B3E0;
    case 518u: goto L_0061B3F0;
    case 519u: goto L_0061B400;
    case 520u: goto L_0061B410;
    case 521u: goto L_0061B430;
    case 522u: goto L_0061B440;
    case 523u: goto L_0061B450;
    case 524u: goto L_0061B470;
    case 525u: goto L_0061B480;
    case 526u: goto L_0061B490;
    case 527u: goto L_0061B4B0;
    case 528u: goto L_0061B4C0;
    case 529u: goto L_0061B4D0;
    case 530u: goto L_0061B4E0;
    case 531u: goto L_0061B4F0;
    case 532u: goto L_0061B500;
    case 533u: goto L_0061B510;
    case 534u: goto L_0061B520;
    case 535u: goto L_0061B540;
    case 536u: goto L_0061B550;
    case 537u: goto L_0061B560;
    case 538u: goto L_0061B570;
    case 539u: goto L_0061B580;
    case 540u: goto L_0061B590;
    case 541u: goto L_0061B5A0;
    case 542u: goto L_0061B5B0;
    case 543u: goto L_0061B5C0;
    case 544u: goto L_0061B5D0;
    case 545u: goto L_0061B5E0;
    case 546u: goto L_0061B5F0;
    case 547u: goto L_0061B600;
    case 548u: goto L_0061B610;
    case 549u: goto L_0061B620;
    case 550u: goto L_0061B630;
    case 551u: goto L_0061B640;
    case 552u: goto L_0061B650;
    case 553u: goto L_0061B660;
    case 554u: goto L_0061B670;
    case 555u: goto L_0061B680;
    case 556u: goto L_0061B690;
    case 557u: goto L_0061B6B0;
    case 558u: goto L_0061B6C0;
    case 559u: goto L_0061B6D0;
    case 560u: goto L_0061B6E0;
    case 561u: goto L_0061B6F0;
    case 562u: goto L_0061B700;
    case 563u: goto L_0061B710;
    case 564u: goto L_0061B720;
    case 565u: goto L_0061B730;
    case 566u: goto L_0061B740;
    case 567u: goto L_0061B750;
    case 568u: goto L_0061B760;
    case 569u: goto L_0061B780;
    case 570u: goto L_0061B790;
    case 571u: goto L_0061B7B0;
    case 572u: goto L_0061B7D0;
    case 573u: goto L_0061B7F0;
    case 574u: goto L_0061B810;
    case 575u: goto L_0061B830;
    case 576u: goto L_0061B850;
    case 577u: goto L_0061B860;
    case 578u: goto L_0061B870;
    case 579u: goto L_0061B880;
    case 580u: goto L_0061B890;
    case 581u: goto L_0061B8A0;
    case 582u: goto L_0061B8B0;
    case 583u: goto L_0061B8C0;
    case 584u: goto L_0061B8D0;
    case 585u: goto L_0061B8E0;
    case 586u: goto L_0061B8F0;
    case 587u: goto L_0061B900;
    case 588u: goto L_0061B910;
    case 589u: goto L_0061B920;
    case 590u: goto L_0061B930;
    case 591u: goto L_0061B950;
    case 592u: goto L_0061B960;
    case 593u: goto L_0061B970;
    case 594u: goto L_0061B990;
    case 595u: goto L_0061B9A0;
    case 596u: goto L_0061B9B0;
    case 597u: goto L_0061B9D0;
    case 598u: goto L_0061B9E0;
    case 599u: goto L_0061BA00;
    case 600u: goto L_0061BA10;
    case 601u: goto L_0061BA20;
    case 602u: goto L_0061BA40;
    case 603u: goto L_0061BA50;
    case 604u: goto L_0061BA60;
    case 605u: goto L_0061BA70;
    case 606u: goto L_0061BA80;
    case 607u: goto L_0061BA90;
    case 608u: goto L_0061BAA0;
    case 609u: goto L_0061BAC0;
    case 610u: goto L_0061BAD0;
    case 611u: goto L_0061BAE0;
    case 612u: goto L_0061BAF0;
    case 613u: goto L_0061BB00;
    case 614u: goto L_0061BB10;
    case 615u: goto L_0061BB20;
    case 616u: goto L_0061BB30;
    case 617u: goto L_0061BB40;
    case 618u: goto L_0061BB50;
    case 619u: goto L_0061BB70;
    case 620u: goto L_0061BB80;
    case 621u: goto L_0061BB90;
    case 622u: goto L_0061BBA0;
    case 623u: goto L_0061BBB0;
    case 624u: goto L_0061BBC0;
    case 625u: goto L_0061BBD0;
    case 626u: goto L_0061BBE0;
    case 627u: goto L_0061BBF0;
    case 628u: goto L_0061BC00;
    case 629u: goto L_0061BC20;
    case 630u: goto L_0061BC30;
    case 631u: goto L_0061BC40;
    case 632u: goto L_0061BC50;
    case 633u: goto L_0061BC60;
    case 634u: goto L_0061BC70;
    case 635u: goto L_0061BC80;
    case 636u: goto L_0061BC90;
    case 637u: goto L_0061BCA0;
    case 638u: goto L_0061BCB0;
    case 639u: goto L_0061BCD0;
    case 640u: goto L_0061BCE0;
    case 641u: goto L_0061BCF0;
    case 642u: goto L_0061BD00;
    case 643u: goto L_0061BD10;
    case 644u: goto L_0061BD20;
    case 645u: goto L_0061BD30;
    case 646u: goto L_0061BD40;
    case 647u: goto L_0061BD60;
    case 648u: goto L_0061BD70;
    case 649u: goto L_0061BD80;
    case 650u: goto L_0061BD90;
    case 651u: goto L_0061BDA0;
    case 652u: goto L_0061BDC0;
    case 653u: goto L_0061BDD0;
    case 654u: goto L_0061BDE0;
    case 655u: goto L_0061BE00;
    case 656u: goto L_0061BE10;
    case 657u: goto L_0061BE20;
    case 658u: goto L_0061BE30;
    case 659u: goto L_0061BE40;
    case 660u: goto L_0061BE50;
    case 661u: goto L_0061BE60;
    case 662u: goto L_0061BE80;
    case 663u: goto L_0061BE90;
    case 664u: goto L_0061BEA0;
    case 665u: goto L_0061BEC0;
    case 666u: goto L_0061BED0;
    case 667u: goto L_0061BEE0;
    case 668u: goto L_0061BF00;
    case 669u: goto L_0061BF10;
    case 670u: goto L_0061BF30;
    case 671u: goto L_0061BF40;
    case 672u: goto L_0061BF50;
    case 673u: goto L_0061BF70;
    case 674u: goto L_0061BF80;
    case 675u: goto L_0061BFA0;
    case 676u: goto L_0061BFB0;
    case 677u: goto L_0061BFC0;
    case 678u: goto L_0061BFD0;
    case 679u: goto L_0061BFE0;
    case 680u: goto L_0061BFF0;
    default: bad_entry(c, 0x00618000u); return;
    }
L_00618000:
    set32(c.r[15], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618010:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00618010u);
    set32(c.r[17], c.r[3].w[0] + c.r[11].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618030:
    c.r[16].d[0] = c.hi.d[0];
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618040:
    c.r[17].d[0] = c.hi.d[0];
    set32(c.r[16], c.r[3].w[0] + c.r[11].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618060:
    set32(c.r[16], c.r[1].w[0] << 1);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618070:
    c.r[17].d[0] = c.hi.d[0];
    set32(c.r[16], c.r[11].w[0] << 16);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618090:
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x00618090u);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_006180A0:
    c.r[17].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x006180A4u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_006180C0:
    set32(c.r[16], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_006180D0:
    c.r[17].d[0] = c.hi.d[0];
    set32(c.r[17], c.r[11].w[0] << 9);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_006180F0:
    c.r[16].d[0] = c.hi.d[0];
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618100:
    c.r[17].d[0] = c.hi.d[0];
    set32(c.r[16], c.r[11].w[0] << 19);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618120:
    set32(c.r[16], c.r[1].w[0] << 4);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618130:
    c.r[17].d[0] = c.hi.d[0];
    set32(c.r[16], c.r[3].w[0] + c.r[11].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618150:
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x00618150u);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618160:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00618160u);
    set32(c.r[16], c.r[11].w[0] << 19);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618180:
    set32(c.r[16], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618190:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00618190u);
    c.r[16].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_006181B0:
    c.r[16].d[0] = c.hi.d[0];
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_006181C0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x006181C0u);
    set32(c.r[16], c.r[11].w[0] << 16);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_006181E0:
    set32(c.r[16], c.r[1].w[0] << 7);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_006181F0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x006181F0u);
    set32(c.r[16], c.r[3].w[0] + c.r[11].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618210:
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x00618210u);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618220:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00618220u);
    c.r[16].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618240:
    set32(c.r[16], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618250:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00618250u);
    c.r[17].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618270:
    c.r[16].d[0] = c.hi.d[0];
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618280:
    set32(c.r[17], c.r[3].w[0] + c.r[11].w[0]);
    c.r[16].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_006182A0:
    set32(c.r[16], c.r[1].w[0] << 10);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_006182B0:
    set32(c.r[17], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[17], c.r[3].w[0] + c.r[11].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_006182D0:
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x006182D0u);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_006182E0:
    c.r[17].d[0] = c.hi.d[0];
    c.r[15].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618300:
    set32(c.r[16], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618310:
    c.r[17].d[0] = c.hi.d[0];
    set32(c.r[16], c.r[11].w[0] << 16);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618330:
    c.r[16].d[0] = c.hi.d[0];
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618340:
    c.r[17].d[0] = c.hi.d[0];
    set32(c.r[17], c.r[11].w[0] << 12);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618360:
    set32(c.r[16], c.r[1].w[0] << 13);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618370:
    c.r[17].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00618374u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618390:
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x00618390u);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_006183A0:
    c.r[17].d[0] = c.hi.d[0];
    c.r[17].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_006183C0:
    set32(c.r[16], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_006183D0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x006183D0u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x006183D4u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_006183F0:
    c.r[16].d[0] = c.hi.d[0];
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618400:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00618400u);
    set32(c.r[17], c.r[3].w[0] + c.r[11].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618420:
    set32(c.r[16], c.r[1].w[0] << 16);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618430:
    c.r[17].d[0] = c.hi.d[0];
    c.r[16].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618450:
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x00618450u);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618460:
    set32(c.r[17], c.r[11].w[0] << 15);
    c.r[16].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618480:
    set32(c.r[16], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618490:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00618490u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00618494u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_006184B0:
    c.r[16].d[0] = c.hi.d[0];
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_006184C0:
    set32(c.r[17], c.r[3].w[0] + c.r[11].w[0]);
    c.r[17].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_006184E0:
    set32(c.r[16], c.r[1].w[0] << 19);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_006184F0:
    set32(c.r[17], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[17], c.r[11].w[0] << 18);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618510:
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x00618510u);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618520:
    set32(c.r[17], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00618524u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618540:
    set32(c.r[16], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618550:
    set32(c.r[17], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[15], c.r[3].w[0] + c.r[11].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618570:
    c.r[16].d[0] = c.hi.d[0];
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618580:
    set32(c.r[17], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[17], c.r[3].w[0] + c.r[11].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_006185A0:
    set32(c.r[16], c.r[1].w[0] << 22);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_006185B0:
    set32(c.r[17], c.r[3].w[0] + c.r[11].w[0]);
    c.r[17].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_006185D0:
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x006185D0u);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_006185E0:
    set32(c.r[17], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[17], c.r[11].w[0] << 21);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618600:
    set32(c.r[16], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618610:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00618610u);
    set32(c.r[17], c.r[3].w[0] + c.r[11].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618630:
    c.r[16].d[0] = c.hi.d[0];
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618640:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00618640u);
    c.r[17].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618660:
    set32(c.r[16], c.r[1].w[0] << 25);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618670:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00618670u);
    set32(c.r[17], c.r[11].w[0] << 24);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618690:
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x00618690u);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_006186A0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x006186A0u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x006186A4u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_006186C0:
    set32(c.r[16], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_006186D0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x006186D0u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x006186D4u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_006186F0:
    c.r[16].d[0] = c.hi.d[0];
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618700:
    set32(c.r[17], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[17], c.r[3].w[0] + c.r[11].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618720:
    set32(c.r[16], c.r[1].w[0] << 28);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618730:
    set32(c.r[17], c.r[3].w[0] + c.r[11].w[0]);
    c.r[17].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618750:
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x00618750u);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618760:
    set32(c.r[17], c.r[3].w[0] + c.r[11].w[0]);
    c.r[17].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618780:
    set32(c.r[16], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618790:
    set32(c.r[17], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[17], c.r[11].w[0] << 27);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_006187B0:
    c.r[16].d[0] = c.hi.d[0];
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_006187C0:
    set32(c.r[17], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x006187C4u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_006187E0:
    set32(c.r[16], c.r[1].w[0] << 31);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_006187F0:
    set32(c.r[17], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[17], c.r[11].w[0] << 24);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618810:
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x00618810u);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618820:
    set32(c.r[17], c.r[3].w[0] + c.r[11].w[0]);
    c.r[15].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618840:
    set32(c.r[17], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618850:
    set32(c.r[17], c.r[3].w[0] + c.r[11].w[0]);
    c.r[17].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618870:
    c.r[17].d[0] = c.hi.d[0];
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618880:
    set32(c.r[17], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00618884u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_006188A0:
    set32(c.r[17], c.r[1].w[0] << 2);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_006188B0:
    set32(c.r[17], c.r[3].w[0] + c.r[11].w[0]);
    c.r[17].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_006188D0:
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x006188D0u);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_006188E0:
    set32(c.r[17], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x006188E4u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618900:
    set32(c.r[17], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618910:
    set32(c.r[17], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[17], c.r[11].w[0] << 31);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618930:
    c.r[17].d[0] = c.hi.d[0];
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618940:
    set32(c.r[17], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00618944u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618960:
    set32(c.r[17], c.r[1].w[0] << 5);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618970:
    set32(c.r[17], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618990:
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x00618990u);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_006189A0:
    c.r[18].d[0] = c.hi.d[0];
    set32(c.r[18], c.r[11].w[0] << 2);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_006189C0:
    set32(c.r[17], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_006189D0:
    c.r[18].d[0] = c.hi.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_006189F0:
    c.r[17].d[0] = c.hi.d[0];
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618A00:
    c.r[18].d[0] = c.hi.d[0];
    c.r[18].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618A20:
    set32(c.r[17], c.r[1].w[0] << 8);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618A30:
    c.r[18].d[0] = c.hi.d[0];
    set32(c.r[18], c.r[11].w[0] << 4);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618A50:
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x00618A50u);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618A60:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00618A60u);
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618A80:
    set32(c.r[17], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618A90:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00618A90u);
    set32(c.r[18], c.r[11].w[0] << 6);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618AB0:
    c.r[17].d[0] = c.hi.d[0];
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618AC0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00618AC0u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00618AC4u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618AE0:
    set32(c.r[17], c.r[1].w[0] << 11);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618AF0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00618AF0u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00618AF4u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618B10:
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x00618B10u);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618B20:
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.r[18].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618B40:
    set32(c.r[17], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618B50:
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[18], c.r[11].w[0] << 6);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618B70:
    c.r[17].d[0] = c.hi.d[0];
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618B80:
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00618B84u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618BA0:
    set32(c.r[17], c.r[1].w[0] << 14);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618BB0:
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[18], c.r[11].w[0] << 4);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618BD0:
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x00618BD0u);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618BE0:
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.r[18].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618C00:
    set32(c.r[17], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618C10:
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00618C14u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618C30:
    c.r[17].d[0] = c.hi.d[0];
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618C40:
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00618C44u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618C60:
    set32(c.r[17], c.r[1].w[0] << 17);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618C70:
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.r[17].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618C90:
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x00618C90u);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618CA0:
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.r[18].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618CC0:
    set32(c.r[17], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618CD0:
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.r[18].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618CF0:
    c.r[17].d[0] = c.hi.d[0];
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618D00:
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[18], c.r[11].w[0] << 13);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618D20:
    set32(c.r[17], c.r[1].w[0] << 20);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618D30:
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00618D34u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618D50:
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x00618D50u);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618D60:
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618D80:
    set32(c.r[17], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618D90:
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.r[18].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618DB0:
    c.r[17].d[0] = c.hi.d[0];
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618DC0:
    set32(c.r[18], c.r[11].w[0] << 16);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00618DC4u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618DE0:
    set32(c.r[17], c.r[1].w[0] << 23);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618DF0:
    set32(c.r[18], c.r[11].w[0] << 16);
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618E10:
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x00618E10u);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618E20:
    set32(c.r[18], c.r[11].w[0] << 16);
    set32(c.r[17], c.r[11].w[0] << 18);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618E40:
    set32(c.r[17], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618E50:
    set32(c.r[18], c.r[11].w[0] << 16);
    c.r[18].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618E70:
    c.r[17].d[0] = c.hi.d[0];
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618E80:
    set32(c.r[18], c.r[11].w[0] << 16);
    set32(c.r[17], c.r[11].w[0] << 6);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618EA0:
    set32(c.r[17], c.r[1].w[0] << 26);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618EB0:
    set32(c.r[18], c.r[11].w[0] << 16);
    set32(c.r[18], c.r[11].w[0] << 19);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_00618ED0:
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x00618ED0u);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618EE0:
    set32(c.r[15], c.r[11].w[0] << 12);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00618EE4u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00618F00:
    set32(c.r[17], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618F10:
    set32(c.r[15], c.r[11].w[0] << 12);
    c.r[18].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00618F30:
    c.r[17].d[0] = c.hi.d[0];
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618F40:
    c.r[15].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00618F44u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00618F60:
    set32(c.r[17], c.r[1].w[0] << 29);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618F70:
    c.r[15].d[0] = c.hi.d[0];
    set32(c.r[18], c.r[11].w[0] << 22);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00618F90:
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x00618F90u);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618FA0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00618FA0u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00618FA4u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00618FC0:
    set32(c.r[17], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00618FD0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00618FD0u);
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00618FF0:
    c.r[17].d[0] = c.hi.d[0];
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619000:
    set32(c.r[16], c.r[11].w[0] << 10);
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619020:
    set32(c.r[18], c.r[1].w[0] << 0);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619030:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00619030u);
    c.r[18].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619050:
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x00619050u);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619060:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00619060u);
    set32(c.r[18], c.r[11].w[0] << 25);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619080:
    set32(c.r[18], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619090:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00619090u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00619094u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_006190B0:
    c.r[18].d[0] = c.hi.d[0];
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_006190C0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x006190C0u);
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_006190E0:
    set32(c.r[18], c.r[1].w[0] << 3);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_006190F0:
    set32(c.r[16], c.r[11].w[0] << 27);
    c.r[18].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619110:
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x00619110u);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619120:
    set32(c.r[16], c.r[11].w[0] << 27);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00619124u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619140:
    set32(c.r[18], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619150:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00619150u);
    c.r[18].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619170:
    c.r[18].d[0] = c.hi.d[0];
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619180:
    set32(c.r[17], c.r[3].w[0] + c.r[11].w[0]);
    c.r[18].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_006191A0:
    set32(c.r[18], c.r[1].w[0] << 6);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_006191B0:
    set32(c.r[18], c.r[11].w[0] << 28);
    c.r[18].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_006191D0:
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x006191D0u);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_006191E0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x006191E0u);
    c.r[18].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619200:
    set32(c.r[18], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619210:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00619210u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00619214u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619230:
    c.r[18].d[0] = c.hi.d[0];
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619240:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00619240u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00619244u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619260:
    set32(c.r[18], c.r[1].w[0] << 9);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619270:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00619270u);
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619290:
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x00619290u);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_006192A0:
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_006192C0:
    set32(c.r[18], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_006192D0:
    set32(c.r[15], c.r[3].w[0] + c.r[11].w[0]);
    c.r[18].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_006192F0:
    c.r[18].d[0] = c.hi.d[0];
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619300:
    set32(c.r[18], c.r[11].w[0] << 31);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00619304u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619320:
    set32(c.r[18], c.r[1].w[0] << 12);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619330:
    set32(c.r[18], c.r[11].w[0] << 31);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00619334u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619350:
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x00619350u);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619360:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00619360u);
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619380:
    set32(c.r[18], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619390:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00619390u);
    c.r[19].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_006193B0:
    c.r[18].d[0] = c.hi.d[0];
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_006193C0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x006193C0u);
    set32(c.r[19], c.r[11].w[0] << 2);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_006193E0:
    set32(c.r[18], c.r[1].w[0] << 15);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_006193F0:
    set32(c.r[17], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x006193F4u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619410:
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x00619410u);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619420:
    set32(c.r[17], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619440:
    set32(c.r[18], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619450:
    set32(c.r[17], c.r[3].w[0] + c.r[11].w[0]);
    c.r[19].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619470:
    c.r[18].d[0] = c.hi.d[0];
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619480:
    set32(c.r[17], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[19], c.r[11].w[0] << 2);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_006194A0:
    set32(c.r[18], c.r[1].w[0] << 18);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_006194B0:
    set32(c.r[17], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_006194D0:
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x006194D0u);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_006194E0:
    set32(c.r[17], c.r[3].w[0] + c.r[11].w[0]);
    c.r[19].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619500:
    set32(c.r[18], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619510:
    set32(c.r[17], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[19], c.r[11].w[0] << 2);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619530:
    c.r[18].d[0] = c.hi.d[0];
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619540:
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619560:
    set32(c.r[18], c.r[1].w[0] << 21);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619570:
    set32(c.r[18], c.r[11].w[0] << 16);
    set32(c.r[19], c.r[11].w[0] << 2);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619590:
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x00619590u);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_006195A0:
    set32(c.r[15], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x006195A4u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_006195C0:
    set32(c.r[18], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_006195D0:
    set32(c.r[19], c.r[11].w[0] << 5);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x006195D4u);
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    c.r[19].d[0] = c.hi.d[0];
    c.budget -= 8;
L_006195F0:
    c.r[18].d[0] = c.hi.d[0];
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619600:
    c.r[19].d[0] = c.hi.d[0];
    set32(c.r[19], c.r[11].w[0] << 9);
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[19], c.r[11].w[0] << 10);
    c.budget -= 8;
L_00619620:
    set32(c.r[18], c.r[1].w[0] << 24);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619630:
    set32(c.r[19], c.r[11].w[0] << 5);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00619634u);
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    c.r[19].d[0] = c.hi.d[0];
    c.budget -= 8;
L_00619650:
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x00619650u);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619660:
    set32(c.r[19], c.r[11].w[0] << 11);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00619664u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619680:
    set32(c.r[18], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619690:
    set32(c.r[19], c.r[11].w[0] << 11);
    c.r[19].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_006196B0:
    c.r[18].d[0] = c.hi.d[0];
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_006196C0:
    set32(c.r[19], c.r[11].w[0] << 11);
    set32(c.r[19], c.r[11].w[0] << 14);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_006196E0:
    set32(c.r[18], c.r[1].w[0] << 27);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_006196F0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x006196F0u);
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619710:
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x00619710u);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619720:
    set32(c.r[19], c.r[11].w[0] << 11);
    c.r[19].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619740:
    set32(c.r[18], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619750:
    set32(c.r[19], c.r[11].w[0] << 11);
    set32(c.r[19], c.r[11].w[0] << 17);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619770:
    c.r[18].d[0] = c.hi.d[0];
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619780:
    set32(c.r[19], c.r[11].w[0] << 11);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00619784u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_006197A0:
    set32(c.r[18], c.r[1].w[0] << 30);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_006197B0:
    set32(c.r[19], c.r[11].w[0] << 11);
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_006197D0:
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x006197D0u);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_006197E0:
    set32(c.r[19], c.r[11].w[0] << 11);
    c.r[19].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619800:
    set32(c.r[18], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619810:
    set32(c.r[19], c.r[11].w[0] << 11);
    set32(c.r[19], c.r[11].w[0] << 20);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619830:
    c.r[19].d[0] = c.hi.d[0];
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619840:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00619840u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00619844u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619860:
    set32(c.r[19], c.r[1].w[0] << 1);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619870:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00619870u);
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619890:
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x00619890u);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_006198A0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x006198A0u);
    c.r[19].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_006198C0:
    set32(c.r[19], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_006198D0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x006198D0u);
    set32(c.r[19], c.r[11].w[0] << 23);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_006198F0:
    c.r[19].d[0] = c.hi.d[0];
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619900:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00619900u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00619904u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619920:
    set32(c.r[19], c.r[1].w[0] << 4);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619930:
    set32(c.r[19], c.r[11].w[0] << 11);
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619950:
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x00619950u);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619960:
    set32(c.r[19], c.r[11].w[0] << 11);
    c.r[19].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619980:
    set32(c.r[19], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619990:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00619990u);
    set32(c.r[19], c.r[11].w[0] << 26);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_006199B0:
    c.r[19].d[0] = c.hi.d[0];
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_006199C0:
    set32(c.r[19], c.r[11].w[0] << 11);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x006199C4u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_006199E0:
    set32(c.r[19], c.r[1].w[0] << 7);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_006199F0:
    set32(c.r[19], c.r[11].w[0] << 11);
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619A10:
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x00619A10u);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619A20:
    set32(c.r[19], c.r[11].w[0] << 11);
    c.r[19].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619A40:
    set32(c.r[19], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619A50:
    set32(c.r[19], c.r[11].w[0] << 11);
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619A70:
    c.r[19].d[0] = c.hi.d[0];
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619A80:
    set32(c.r[19], c.r[11].w[0] << 11);
    set32(c.r[19], c.r[11].w[0] << 29);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619AA0:
    set32(c.r[19], c.r[1].w[0] << 10);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619AB0:
    set32(c.r[19], c.r[11].w[0] << 11);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00619AB4u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619AD0:
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x00619AD0u);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619AE0:
    set32(c.r[19], c.r[11].w[0] << 11);
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619B00:
    set32(c.r[19], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619B10:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00619B10u);
    c.r[19].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619B30:
    c.r[19].d[0] = c.hi.d[0];
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619B40:
    set32(c.r[19], c.r[11].w[0] << 11);
    set32(c.r[20], c.r[11].w[0] << 0);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619B60:
    set32(c.r[19], c.r[1].w[0] << 13);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619B70:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00619B70u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00619B74u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619B90:
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x00619B90u);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619BA0:
    set32(c.r[19], c.r[11].w[0] << 11);
    set32(c.r[20], c.r[3].w[0] + c.r[11].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619BC0:
    set32(c.r[19], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619BD0:
    set32(c.r[19], c.r[11].w[0] << 11);
    c.r[20].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619BF0:
    c.r[19].d[0] = c.hi.d[0];
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619C00:
    set32(c.r[19], c.r[11].w[0] << 11);
    set32(c.r[20], c.r[11].w[0] << 3);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619C20:
    set32(c.r[19], c.r[1].w[0] << 16);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619C30:
    set32(c.r[19], c.r[11].w[0] << 11);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00619C34u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619C50:
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x00619C50u);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619C60:
    set32(c.r[19], c.r[11].w[0] << 11);
    set32(c.r[20], c.r[3].w[0] + c.r[11].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619C80:
    set32(c.r[19], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619C90:
    set32(c.r[19], c.r[11].w[0] << 11);
    c.r[20].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619CB0:
    c.r[19].d[0] = c.hi.d[0];
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619CC0:
    set32(c.r[19], c.r[11].w[0] << 11);
    set32(c.r[20], c.r[11].w[0] << 6);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619CE0:
    set32(c.r[19], c.r[1].w[0] << 19);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619CF0:
    set32(c.r[19], c.r[11].w[0] << 11);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00619CF4u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619D10:
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x00619D10u);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619D20:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00619D20u);
    set32(c.r[20], c.r[3].w[0] + c.r[11].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619D40:
    set32(c.r[19], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619D50:
    set32(c.r[19], c.r[11].w[0] << 11);
    c.r[20].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619D70:
    c.r[19].d[0] = c.hi.d[0];
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619D80:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00619D80u);
    set32(c.r[20], c.r[11].w[0] << 9);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619DA0:
    set32(c.r[19], c.r[1].w[0] << 22);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619DB0:
    set32(c.r[19], c.r[11].w[0] << 11);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00619DB4u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619DD0:
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x00619DD0u);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619DE0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00619DE0u);
    set32(c.r[20], c.r[3].w[0] + c.r[11].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619E00:
    set32(c.r[19], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619E10:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00619E10u);
    c.r[20].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619E30:
    c.r[19].d[0] = c.hi.d[0];
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619E40:
    set32(c.r[19], c.r[11].w[0] << 11);
    set32(c.r[20], c.r[11].w[0] << 12);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619E60:
    set32(c.r[19], c.r[1].w[0] << 25);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619E70:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00619E70u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00619E74u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619E90:
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x00619E90u);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619EA0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00619EA0u);
    set32(c.r[20], c.r[3].w[0] + c.r[11].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619EC0:
    set32(c.r[19], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619ED0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00619ED0u);
    c.r[20].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619EF0:
    c.r[19].d[0] = c.hi.d[0];
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619F00:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00619F00u);
    set32(c.r[20], c.r[11].w[0] << 15);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619F20:
    set32(c.r[19], c.r[1].w[0] << 28);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619F30:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00619F30u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00619F34u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619F50:
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x00619F50u);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619F60:
    set32(c.r[15], c.r[11].w[0] << 12);
    set32(c.r[20], c.r[3].w[0] + c.r[11].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619F80:
    set32(c.r[19], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619F90:
    c.r[15].d[0] = c.hi.d[0];
    set32(c.r[20], c.r[3].w[0] + c.r[11].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619FB0:
    c.r[19].d[0] = c.hi.d[0];
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619FC0:
    c.r[20].d[0] = c.hi.d[0];
    set32(c.r[20], c.r[11].w[0] << 18);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_00619FE0:
    set32(c.r[19], c.r[1].w[0] << 31);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_00619FF0:
    c.r[20].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x00619FF4u);
    set32(c.r[20], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061A010:
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061A010u);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_0061A020:
    c.r[20].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061A024u);
    c.r[20].d[0] = c.hi.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061A040:
    set32(c.r[20], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_0061A050:
    set32(c.r[20], c.r[11].w[0] << 21);
    set32(c.r[19], c.r[3].w[0] + c.r[11].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061A070:
    c.r[20].d[0] = c.hi.d[0];
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_0061A080:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061A080u);
    set32(c.r[20], c.r[3].w[0] + c.r[11].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061A0A0:
    set32(c.r[20], c.r[1].w[0] << 2);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_0061A0B0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061A0B0u);
    c.r[20].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061A0D0:
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061A0D0u);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_0061A0E0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061A0E0u);
    set32(c.r[20], c.r[11].w[0] << 24);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061A100:
    set32(c.r[20], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_0061A110:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061A110u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061A114u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061A130:
    c.r[20].d[0] = c.hi.d[0];
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_0061A140:
    set32(c.r[20], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061A144u);
    c.r[20].d[0] = c.hi.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061A160:
    set32(c.r[20], c.r[1].w[0] << 5);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_0061A170:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061A170u);
    set32(c.r[20], c.r[11].w[0] << 27);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061A190:
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061A190u);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_0061A1A0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061A1A0u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061A1A4u);
    set32(c.r[20], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061A1C0:
    set32(c.r[20], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_0061A1D0:
    set32(c.r[17], c.r[3].w[0] + c.r[11].w[0]);
    c.r[20].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061A1F0:
    c.r[20].d[0] = c.hi.d[0];
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_0061A200:
    set32(c.r[17], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[20], c.r[11].w[0] << 30);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061A220:
    set32(c.r[20], c.r[1].w[0] << 8);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_0061A230:
    set32(c.r[20], c.r[11].w[0] << 21);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061A234u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061A250:
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061A250u);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_0061A260:
    set32(c.r[20], c.r[11].w[0] << 21);
    set32(c.r[20], c.r[3].w[0] + c.r[11].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061A280:
    set32(c.r[20], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_0061A290:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061A290u);
    set32(c.r[16], c.r[11].w[0] << 19);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_0061A2B0:
    c.r[20].d[0] = c.hi.d[0];
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_0061A2C0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061A2C0u);
    set32(c.r[16], c.r[3].w[0] + c.r[11].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_0061A2E0:
    set32(c.r[20], c.r[1].w[0] << 11);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_0061A2F0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061A2F0u);
    c.r[21].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_0061A310:
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061A310u);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_0061A320:
    set32(c.r[15], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[11].w[0] << 1);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_0061A340:
    set32(c.r[20], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_0061A350:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061A350u);
    c.r[15].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_0061A370:
    c.r[20].d[0] = c.hi.d[0];
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_0061A380:
    set32(c.r[15], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061A384u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_0061A3A0:
    set32(c.r[20], c.r[1].w[0] << 14);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_0061A3B0:
    set32(c.r[15], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_0061A3D0:
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061A3D0u);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_0061A3E0:
    c.r[15].d[0] = c.hi.d[0];
    c.r[15].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_0061A400:
    set32(c.r[20], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_0061A410:
    c.r[15].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061A414u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_0061A430:
    c.r[20].d[0] = c.hi.d[0];
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_0061A440:
    c.r[15].d[0] = c.hi.d[0];
    c.r[21].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_0061A460:
    set32(c.r[20], c.r[1].w[0] << 17);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_0061A470:
    c.r[15].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061A474u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_0061A490:
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061A490u);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_0061A4A0:
    c.r[15].d[0] = c.hi.d[0];
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_0061A4C0:
    set32(c.r[20], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_0061A4D0:
    c.r[15].d[0] = c.hi.d[0];
    c.r[21].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_0061A4F0:
    c.r[20].d[0] = c.hi.d[0];
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_0061A500:
    c.r[15].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061A504u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_0061A520:
    set32(c.r[20], c.r[1].w[0] << 20);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_0061A530:
    c.r[15].d[0] = c.hi.d[0];
    c.r[21].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_0061A550:
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061A550u);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_0061A560:
    c.r[15].d[0] = c.hi.d[0];
    set32(c.r[17], c.r[3].w[0] + c.r[11].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_0061A580:
    set32(c.r[20], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_0061A590:
    set32(c.r[16], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[11].w[0] << 6);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_0061A5B0:
    c.r[20].d[0] = c.hi.d[0];
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_0061A5C0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061A5C0u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061A5C4u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_0061A5E0:
    set32(c.r[20], c.r[1].w[0] << 23);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_0061A5F0:
    c.r[17].d[0] = c.hi.d[0];
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_0061A610:
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061A610u);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_0061A620:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061A620u);
    set32(c.r[17], c.r[3].w[0] + c.r[11].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_0061A640:
    set32(c.r[20], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_0061A650:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061A650u);
    c.r[21].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_0061A670:
    c.r[20].d[0] = c.hi.d[0];
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_0061A680:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061A680u);
    set32(c.r[17], c.r[11].w[0] << 18);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_0061A6A0:
    set32(c.r[20], c.r[1].w[0] << 26);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_0061A6B0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061A6B0u);
    set32(c.r[18], c.r[11].w[0] << 19);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_0061A6D0:
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061A6D0u);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_0061A6E0:
    set32(c.r[17], c.r[3].w[0] + c.r[11].w[0]);
    c.r[16].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_0061A700:
    set32(c.r[20], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_0061A710:
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_0061A730:
    c.r[20].d[0] = c.hi.d[0];
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_0061A740:
    set32(c.r[18], c.r[11].w[0] << 16);
    set32(c.r[16], c.r[3].w[0] + c.r[11].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[11].w[0] << 9);
    c.budget -= 8;
L_0061A760:
    set32(c.r[20], c.r[1].w[0] << 29);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_0061A770:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061A770u);
    c.r[18].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061A790:
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061A790u);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_0061A7A0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061A7A0u);
    c.r[18].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061A7C0:
    set32(c.r[20], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_0061A7D0:
    set32(c.r[21], c.r[11].w[0] << 9);
    set32(c.r[20], c.r[3].w[0] + c.r[11].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061A7F0:
    c.r[20].d[0] = c.hi.d[0];
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_0061A800:
    set32(c.r[21], c.r[11].w[0] << 9);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061A804u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061A820:
    set32(c.r[21], c.r[1].w[0] << 0);
    st64((c.r[31].w[0] + 255u), c.r[31].d[0]);
    c.budget -= 4;
L_0061A830:
    set32(c.r[13], c.r[1].w[0] << 22);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061A834u);
    set32(c.r[13], c.r[3].w[0] + c.r[1].w[0]);
    c.r[13].d[0] = c.hi.d[0];
    set32(c.r[13], c.r[1].w[0] << 25);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061A844u);
    set32(c.r[13], c.r[3].w[0] + c.r[1].w[0]);
    c.r[13].d[0] = c.hi.d[0];
    set32(c.r[13], c.r[1].w[0] << 28);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061A854u);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061A858u);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061A85Cu);
    set32(c.r[13], c.r[3].w[0] + c.r[1].w[0]);
    c.r[14].d[0] = c.hi.d[0];
    set32(c.r[14], c.r[1].w[0] << 1);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061A86Cu);
    set32(c.r[14], c.r[3].w[0] + c.r[1].w[0]);
    c.r[14].d[0] = c.hi.d[0];
    set32(c.r[14], c.r[1].w[0] << 4);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061A87Cu);
    set32(c.r[14], c.r[3].w[0] + c.r[1].w[0]);
    c.r[14].d[0] = c.hi.d[0];
    set32(c.r[14], c.r[1].w[0] << 7);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061A88Cu);
    set32(c.r[14], c.r[3].w[0] + c.r[1].w[0]);
    c.r[14].d[0] = c.hi.d[0];
    set32(c.r[14], c.r[1].w[0] << 10);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061A89Cu);
    set32(c.r[14], c.r[3].w[0] + c.r[1].w[0]);
    c.r[14].d[0] = c.hi.d[0];
    set32(c.r[14], c.r[1].w[0] << 13);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061A8ACu);
    set32(c.r[14], c.r[3].w[0] + c.r[1].w[0]);
    c.r[14].d[0] = c.hi.d[0];
    set32(c.r[14], c.r[1].w[0] << 16);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061A8BCu);
    set32(c.r[14], c.r[3].w[0] + c.r[1].w[0]);
    c.r[14].d[0] = c.hi.d[0];
    set32(c.r[14], c.r[1].w[0] << 19);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061A8CCu);
    set32(c.r[14], c.r[3].w[0] + c.r[1].w[0]);
    c.r[14].d[0] = c.hi.d[0];
    set32(c.r[14], c.r[1].w[0] << 22);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061A8DCu);
    set32(c.r[14], c.r[3].w[0] + c.r[1].w[0]);
    c.r[14].d[0] = c.hi.d[0];
    set32(c.r[14], c.r[1].w[0] << 25);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061A8ECu);
    set32(c.r[14], c.r[3].w[0] + c.r[1].w[0]);
    c.r[14].d[0] = c.hi.d[0];
    set32(c.r[14], c.r[1].w[0] << 28);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061A8FCu);
    set32(c.r[14], c.r[3].w[0] + c.r[1].w[0]);
    c.r[14].d[0] = c.hi.d[0];
    set32(c.r[14], c.r[1].w[0] << 31);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061A90Cu);
    set32(c.r[15], c.r[3].w[0] + c.r[1].w[0]);
    c.r[15].d[0] = c.hi.d[0];
    set32(c.r[15], c.r[1].w[0] << 2);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061A91Cu);
    set32(c.r[15], c.r[3].w[0] + c.r[1].w[0]);
    c.r[15].d[0] = c.hi.d[0];
    set32(c.r[15], c.r[1].w[0] << 5);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061A92Cu);
    set32(c.r[15], c.r[3].w[0] + c.r[1].w[0]);
    c.r[15].d[0] = c.hi.d[0];
    set32(c.r[15], c.r[1].w[0] << 8);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061A93Cu);
    set32(c.r[15], c.r[3].w[0] + c.r[1].w[0]);
    c.r[15].d[0] = c.hi.d[0];
    set32(c.r[15], c.r[1].w[0] << 11);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061A94Cu);
    set32(c.r[15], c.r[3].w[0] + c.r[1].w[0]);
    c.r[15].d[0] = c.hi.d[0];
    set32(c.r[15], c.r[1].w[0] << 14);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061A95Cu);
    set32(c.r[15], c.r[3].w[0] + c.r[1].w[0]);
    c.r[15].d[0] = c.hi.d[0];
    set32(c.r[15], c.r[1].w[0] << 17);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061A96Cu);
    set32(c.r[15], c.r[3].w[0] + c.r[1].w[0]);
    c.r[15].d[0] = c.hi.d[0];
    set32(c.r[15], c.r[1].w[0] << 20);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061A97Cu);
    set32(c.r[15], c.r[3].w[0] + c.r[1].w[0]);
    c.r[15].d[0] = c.hi.d[0];
    set32(c.r[15], c.r[1].w[0] << 23);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061A98Cu);
    set32(c.r[15], c.r[3].w[0] + c.r[1].w[0]);
    c.r[15].d[0] = c.hi.d[0];
    set32(c.r[15], c.r[1].w[0] << 26);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061A99Cu);
    set32(c.r[15], c.r[3].w[0] + c.r[1].w[0]);
    c.r[15].d[0] = c.hi.d[0];
    set32(c.r[15], c.r[1].w[0] << 29);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061A9ACu);
    set32(c.r[15], c.r[3].w[0] + c.r[1].w[0]);
    c.r[15].d[0] = c.hi.d[0];
    set32(c.r[16], c.r[1].w[0] << 0);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061A9BCu);
    set32(c.r[16], c.r[3].w[0] + c.r[1].w[0]);
    c.r[16].d[0] = c.hi.d[0];
    set32(c.r[16], c.r[1].w[0] << 3);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061A9CCu);
    set32(c.r[16], c.r[3].w[0] + c.r[1].w[0]);
    c.r[16].d[0] = c.hi.d[0];
    set32(c.r[16], c.r[1].w[0] << 6);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061A9DCu);
    set32(c.r[16], c.r[3].w[0] + c.r[1].w[0]);
    c.r[16].d[0] = c.hi.d[0];
    set32(c.r[16], c.r[1].w[0] << 9);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061A9ECu);
    set32(c.r[16], c.r[3].w[0] + c.r[1].w[0]);
    c.r[16].d[0] = c.hi.d[0];
    set32(c.r[16], c.r[1].w[0] << 12);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061A9FCu);
    set32(c.r[16], c.r[3].w[0] + c.r[1].w[0]);
    c.r[16].d[0] = c.hi.d[0];
    set32(c.r[16], c.r[1].w[0] << 15);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061AA0Cu);
    set32(c.r[16], c.r[3].w[0] + c.r[1].w[0]);
    c.r[16].d[0] = c.hi.d[0];
    set32(c.r[16], c.r[1].w[0] << 18);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061AA1Cu);
    set32(c.r[16], c.r[3].w[0] + c.r[1].w[0]);
    c.r[16].d[0] = c.hi.d[0];
    set32(c.r[16], c.r[1].w[0] << 21);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061AA2Cu);
    set32(c.r[16], c.r[3].w[0] + c.r[1].w[0]);
    c.r[16].d[0] = c.hi.d[0];
    set32(c.r[16], c.r[1].w[0] << 24);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061AA3Cu);
    set32(c.r[16], c.r[3].w[0] + c.r[1].w[0]);
    c.r[16].d[0] = c.hi.d[0];
    set32(c.r[16], c.r[1].w[0] << 27);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061AA4Cu);
    set32(c.r[16], c.r[3].w[0] + c.r[1].w[0]);
    c.r[16].d[0] = c.hi.d[0];
    set32(c.r[16], c.r[1].w[0] << 30);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061AA5Cu);
    set32(c.r[16], c.r[3].w[0] + c.r[1].w[0]);
    c.r[17].d[0] = c.hi.d[0];
    set32(c.r[17], c.r[1].w[0] << 1);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061AA6Cu);
    set32(c.r[17], c.r[3].w[0] + c.r[1].w[0]);
    c.r[17].d[0] = c.hi.d[0];
    set32(c.r[17], c.r[1].w[0] << 4);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061AA7Cu);
    set32(c.r[17], c.r[3].w[0] + c.r[1].w[0]);
    c.r[17].d[0] = c.hi.d[0];
    set32(c.r[17], c.r[1].w[0] << 7);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061AA8Cu);
    set32(c.r[17], c.r[3].w[0] + c.r[1].w[0]);
    c.r[17].d[0] = c.hi.d[0];
    set32(c.r[17], c.r[1].w[0] << 10);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061AA9Cu);
    set32(c.r[17], c.r[3].w[0] + c.r[1].w[0]);
    c.r[17].d[0] = c.hi.d[0];
    set32(c.r[17], c.r[1].w[0] << 13);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061AAACu);
    set32(c.r[17], c.r[3].w[0] + c.r[1].w[0]);
    c.r[17].d[0] = c.hi.d[0];
    set32(c.r[17], c.r[1].w[0] << 16);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061AABCu);
    set32(c.r[17], c.r[3].w[0] + c.r[1].w[0]);
    c.r[17].d[0] = c.hi.d[0];
    set32(c.r[17], c.r[1].w[0] << 19);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061AACCu);
    set32(c.r[17], c.r[3].w[0] + c.r[1].w[0]);
    c.r[17].d[0] = c.hi.d[0];
    set32(c.r[17], c.r[1].w[0] << 22);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061AADCu);
    set32(c.r[17], c.r[3].w[0] + c.r[1].w[0]);
    c.r[17].d[0] = c.hi.d[0];
    set32(c.r[17], c.r[1].w[0] << 25);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061AAECu);
    set32(c.r[17], c.r[3].w[0] + c.r[1].w[0]);
    c.r[17].d[0] = c.hi.d[0];
    set32(c.r[17], c.r[1].w[0] << 28);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061AAFCu);
    set32(c.r[17], c.r[3].w[0] + c.r[1].w[0]);
    c.r[17].d[0] = c.hi.d[0];
    set32(c.r[17], c.r[1].w[0] << 31);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061AB0Cu);
    set32(c.r[18], c.r[3].w[0] + c.r[1].w[0]);
    c.r[18].d[0] = c.hi.d[0];
    set32(c.r[18], c.r[1].w[0] << 2);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061AB1Cu);
    set32(c.r[18], c.r[3].w[0] + c.r[1].w[0]);
    c.r[18].d[0] = c.hi.d[0];
    set32(c.r[18], c.r[1].w[0] << 5);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061AB2Cu);
    set32(c.r[18], c.r[3].w[0] + c.r[1].w[0]);
    c.r[18].d[0] = c.hi.d[0];
    set32(c.r[18], c.r[1].w[0] << 8);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061AB3Cu);
    set32(c.r[18], c.r[3].w[0] + c.r[1].w[0]);
    c.r[18].d[0] = c.hi.d[0];
    set32(c.r[18], c.r[1].w[0] << 11);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061AB4Cu);
    set32(c.r[18], c.r[3].w[0] + c.r[1].w[0]);
    c.r[18].d[0] = c.hi.d[0];
    set32(c.r[18], c.r[1].w[0] << 14);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061AB5Cu);
    set32(c.r[18], c.r[3].w[0] + c.r[1].w[0]);
    c.r[18].d[0] = c.hi.d[0];
    set32(c.r[18], c.r[1].w[0] << 17);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061AB6Cu);
    set32(c.r[18], c.r[3].w[0] + c.r[1].w[0]);
    c.r[18].d[0] = c.hi.d[0];
    set32(c.r[18], c.r[1].w[0] << 20);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061AB7Cu);
    set32(c.r[18], c.r[3].w[0] + c.r[1].w[0]);
    c.r[18].d[0] = c.hi.d[0];
    set32(c.r[18], c.r[1].w[0] << 23);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061AB8Cu);
    set32(c.r[18], c.r[3].w[0] + c.r[1].w[0]);
    c.r[18].d[0] = c.hi.d[0];
    set32(c.r[18], c.r[1].w[0] << 26);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061AB9Cu);
    set32(c.r[18], c.r[3].w[0] + c.r[1].w[0]);
    c.r[18].d[0] = c.hi.d[0];
    set32(c.r[18], c.r[1].w[0] << 29);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061ABACu);
    set32(c.r[18], c.r[3].w[0] + c.r[1].w[0]);
    c.r[18].d[0] = c.hi.d[0];
    set32(c.r[19], c.r[1].w[0] << 0);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061ABBCu);
    set32(c.r[19], c.r[3].w[0] + c.r[1].w[0]);
    c.r[19].d[0] = c.hi.d[0];
    set32(c.r[19], c.r[1].w[0] << 3);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061ABCCu);
    set32(c.r[19], c.r[3].w[0] + c.r[1].w[0]);
    c.r[19].d[0] = c.hi.d[0];
    set32(c.r[19], c.r[1].w[0] << 6);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061ABDCu);
    set32(c.r[19], c.r[3].w[0] + c.r[1].w[0]);
    c.r[19].d[0] = c.hi.d[0];
    set32(c.r[19], c.r[1].w[0] << 9);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061ABECu);
    set32(c.r[19], c.r[3].w[0] + c.r[1].w[0]);
    c.r[19].d[0] = c.hi.d[0];
    set32(c.r[19], c.r[1].w[0] << 12);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061ABFCu);
    set32(c.r[19], c.r[3].w[0] + c.r[1].w[0]);
    c.r[19].d[0] = c.hi.d[0];
    set32(c.r[19], c.r[1].w[0] << 15);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061AC0Cu);
    set32(c.r[19], c.r[3].w[0] + c.r[1].w[0]);
    c.r[19].d[0] = c.hi.d[0];
    set32(c.r[19], c.r[1].w[0] << 18);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061AC1Cu);
    set32(c.r[19], c.r[3].w[0] + c.r[1].w[0]);
    c.r[19].d[0] = c.hi.d[0];
    set32(c.r[19], c.r[1].w[0] << 21);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061AC2Cu);
    set32(c.r[19], c.r[3].w[0] + c.r[1].w[0]);
    c.r[19].d[0] = c.hi.d[0];
    set32(c.r[19], c.r[1].w[0] << 24);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061AC3Cu);
    set32(c.r[19], c.r[3].w[0] + c.r[1].w[0]);
    c.r[19].d[0] = c.hi.d[0];
    set32(c.r[19], c.r[1].w[0] << 27);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061AC4Cu);
    set32(c.r[19], c.r[3].w[0] + c.r[1].w[0]);
    c.r[19].d[0] = c.hi.d[0];
    set32(c.r[19], c.r[1].w[0] << 30);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061AC5Cu);
    set32(c.r[19], c.r[3].w[0] + c.r[1].w[0]);
    c.r[20].d[0] = c.hi.d[0];
    set32(c.r[20], c.r[1].w[0] << 1);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061AC6Cu);
    set32(c.r[20], c.r[3].w[0] + c.r[1].w[0]);
    c.r[20].d[0] = c.hi.d[0];
    set32(c.r[20], c.r[1].w[0] << 4);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061AC7Cu);
    set32(c.r[20], c.r[3].w[0] + c.r[1].w[0]);
    c.r[20].d[0] = c.hi.d[0];
    set32(c.r[20], c.r[1].w[0] << 7);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061AC8Cu);
    set32(c.r[20], c.r[3].w[0] + c.r[1].w[0]);
    c.r[20].d[0] = c.hi.d[0];
    set32(c.r[20], c.r[1].w[0] << 10);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061AC9Cu);
    set32(c.r[20], c.r[3].w[0] + c.r[1].w[0]);
    c.r[20].d[0] = c.hi.d[0];
    set32(c.r[20], c.r[1].w[0] << 13);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061ACACu);
    set32(c.r[20], c.r[3].w[0] + c.r[1].w[0]);
    c.r[20].d[0] = c.hi.d[0];
    set32(c.r[20], c.r[1].w[0] << 16);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061ACBCu);
    set32(c.r[20], c.r[3].w[0] + c.r[1].w[0]);
    c.r[20].d[0] = c.hi.d[0];
    set32(c.r[20], c.r[1].w[0] << 19);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061ACCCu);
    set32(c.r[20], c.r[3].w[0] + c.r[1].w[0]);
    c.r[20].d[0] = c.hi.d[0];
    set32(c.r[20], c.r[1].w[0] << 22);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061ACDCu);
    set32(c.r[20], c.r[3].w[0] + c.r[1].w[0]);
    c.r[20].d[0] = c.hi.d[0];
    set32(c.r[20], c.r[1].w[0] << 25);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061ACECu);
    set32(c.r[20], c.r[3].w[0] + c.r[1].w[0]);
    c.r[20].d[0] = c.hi.d[0];
    set32(c.r[20], c.r[1].w[0] << 28);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061ACFCu);
    set32(c.r[20], c.r[3].w[0] + c.r[1].w[0]);
    c.r[20].d[0] = c.hi.d[0];
    set32(c.r[20], c.r[1].w[0] << 31);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061AD0Cu);
    set32(c.r[21], c.r[3].w[0] + c.r[1].w[0]);
    c.budget -= 316;
L_0061AD20:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[11].w[0] << 11);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[11].w[0] << 12);
    c.budget -= 8;
L_0061AD40:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061AD44u);
    c.r[21].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061AD50:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061AD54u);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061AD60:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[11].w[0] << 15);
    c.budget -= 4;
L_0061AD70:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[11].w[0] << 16);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061AD90:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[11].w[0] << 17);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061ADA0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[11].w[0] << 18);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061ADA8u);
    c.budget -= 4;
L_0061ADB0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[11].w[0] << 20);
    c.budget -= 4;
L_0061ADC0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[21].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061ADD0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061ADD4u);
    c.budget -= 4;
L_0061ADE0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[21].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061ADF0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061ADF0u);
    c.r[21].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061ADF8u);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061AE10:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061AE10u);
    c.r[21].d[0] = c.hi.d[0];
    set32(c.r[21], c.r[11].w[0] << 27);
    c.budget -= 4;
L_0061AE20:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061AE20u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061AE24u);
    c.r[21].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061AE30:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061AE30u);
    set32(c.r[21], c.r[11].w[0] << 29);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061AE40:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[21].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061AE50:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061AE50u);
    c.r[21].d[0] = c.hi.d[0];
    set32(c.r[21], c.r[11].w[0] << 27);
    c.budget -= 4;
L_0061AE60:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061AE60u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061AE64u);
    c.r[21].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061AE70:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061AE70u);
    set32(c.r[21], c.r[11].w[0] << 29);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061AE80:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061AE84u);
    c.r[21].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061AE90:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061AE94u);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061AEA0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[11].w[0] << 15);
    c.budget -= 4;
L_0061AEB0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061AEB8u);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061AED0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[11].w[0] << 17);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061AEE0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[11].w[0] << 18);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061AEE8u);
    c.budget -= 4;
L_0061AEF0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[11].w[0] << 20);
    c.budget -= 4;
L_0061AF00:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[21].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061AF10:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061AF14u);
    c.budget -= 4;
L_0061AF20:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[21].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061AF30:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061AF30u);
    c.r[21].d[0] = c.hi.d[0];
    set32(c.r[21], c.r[11].w[0] << 27);
    c.budget -= 4;
L_0061AF40:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061AF40u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061AF44u);
    c.r[21].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061AF50:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061AF50u);
    c.r[21].d[0] = c.hi.d[0];
    set32(c.r[21], c.r[11].w[0] << 31);
    c.budget -= 4;
L_0061AF60:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061AF64u);
    c.budget -= 4;
L_0061AF70:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061AF74u);
    set32(c.r[22], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061AF80:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[22].d[0] = c.hi.d[0];
    set32(c.r[22], c.r[11].w[0] << 2);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061AF8Cu);
    c.budget -= 8;
L_0061AFA0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[22].d[0] = c.hi.d[0];
    set32(c.r[22], c.r[11].w[0] << 4);
    c.budget -= 4;
L_0061AFB0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061AFB0u);
    set32(c.r[22], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[22], c.r[11].w[0] << 5);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061AFBCu);
    c.budget -= 8;
L_0061AFD0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061AFD0u);
    c.r[22].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061AFD8u);
    c.r[22].d[0] = c.hi.d[0];
    c.budget -= 8;
L_0061AFF0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[22], c.r[11].w[0] << 8);
    set32(c.r[22], c.r[3].w[0] + c.r[11].w[0]);
    c.r[22].d[0] = c.hi.d[0];
    c.budget -= 8;
L_0061B010:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[22], c.r[11].w[0] << 10);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B018u);
    c.budget -= 4;
L_0061B020:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B024u);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061B030:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[11].w[0] << 15);
    c.budget -= 4;
L_0061B040:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B048u);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061B060:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[11].w[0] << 18);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B068u);
    c.budget -= 4;
L_0061B070:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[22].d[0] = c.hi.d[0];
    set32(c.r[22], c.r[11].w[0] << 12);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B07Cu);
    c.budget -= 8;
L_0061B090:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[21].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061B0A0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B0A4u);
    c.budget -= 4;
L_0061B0B0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[22], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[22], c.r[11].w[0] << 14);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B0BCu);
    c.budget -= 6;
L_0061B0C8:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B0C8u);
    set32(c.r[22], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 6;
L_0061B0E0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B0E0u);
    c.r[21].d[0] = c.hi.d[0];
    set32(c.r[21], c.r[11].w[0] << 27);
    c.budget -= 4;
L_0061B0F0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B0F0u);
    c.r[21].d[0] = c.hi.d[0];
    set32(c.r[21], c.r[11].w[0] << 31);
    c.budget -= 4;
L_0061B100:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B100u);
    c.r[21].d[0] = c.hi.d[0];
    set32(c.r[21], c.r[11].w[0] << 27);
    c.budget -= 4;
L_0061B110:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B110u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B114u);
    c.r[21].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061B120:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B120u);
    set32(c.r[21], c.r[11].w[0] << 29);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061B130:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[22], c.r[11].w[0] << 10);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B138u);
    c.budget -= 4;
L_0061B140:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B144u);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061B150:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[11].w[0] << 15);
    c.budget -= 4;
L_0061B160:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B168u);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061B180:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[11].w[0] << 18);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B188u);
    c.budget -= 4;
L_0061B190:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[22].d[0] = c.hi.d[0];
    set32(c.r[22], c.r[11].w[0] << 17);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B19Cu);
    c.budget -= 8;
L_0061B1B0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[21].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061B1C0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B1C4u);
    c.budget -= 4;
L_0061B1D0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[22], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[22], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B1DCu);
    c.budget -= 8;
L_0061B1F0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B1F0u);
    c.r[21].d[0] = c.hi.d[0];
    set32(c.r[21], c.r[11].w[0] << 27);
    c.budget -= 4;
L_0061B200:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B200u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B204u);
    c.r[21].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061B210:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B210u);
    set32(c.r[21], c.r[11].w[0] << 29);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061B220:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[22].d[0] = c.hi.d[0];
    set32(c.r[22], c.r[11].w[0] << 20);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B22Cu);
    c.budget -= 6;
L_0061B238:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B23Cu);
    c.budget -= 6;
L_0061B250:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B254u);
    set32(c.r[22], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061B260:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[22].d[0] = c.hi.d[0];
    set32(c.r[22], c.r[11].w[0] << 2);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B26Cu);
    c.budget -= 8;
L_0061B280:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[22].d[0] = c.hi.d[0];
    set32(c.r[22], c.r[11].w[0] << 4);
    c.budget -= 4;
L_0061B290:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B290u);
    set32(c.r[22], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[22], c.r[11].w[0] << 5);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B29Cu);
    c.budget -= 8;
L_0061B2B0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B2B0u);
    set32(c.r[22], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B2B8u);
    c.r[22].d[0] = c.hi.d[0];
    c.budget -= 8;
L_0061B2D0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[22], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[22], c.r[11].w[0] << 14);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B2DCu);
    c.budget -= 8;
L_0061B2F0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[22], c.r[11].w[0] << 22);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B2F8u);
    c.budget -= 4;
L_0061B300:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[22].d[0] = c.lo.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B308u);
    c.r[22].d[0] = c.hi.d[0];
    c.budget -= 8;
L_0061B320:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[22], c.r[11].w[0] << 10);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B328u);
    c.budget -= 4;
L_0061B330:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B334u);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061B340:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[11].w[0] << 15);
    c.budget -= 4;
L_0061B350:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[22], c.r[11].w[0] << 25);
    c.budget -= 4;
L_0061B360:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[11].w[0] << 18);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B368u);
    c.budget -= 4;
L_0061B370:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[21].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061B380:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B380u);
    c.r[21].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B388u);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061B3A0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B3A0u);
    c.r[21].d[0] = c.hi.d[0];
    set32(c.r[21], c.r[11].w[0] << 27);
    c.budget -= 4;
L_0061B3B0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B3B0u);
    c.r[21].d[0] = c.hi.d[0];
    set32(c.r[21], c.r[11].w[0] << 31);
    c.budget -= 4;
L_0061B3C0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[22].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B3C8u);
    set32(c.r[22], c.r[11].w[0] << 26);
    c.budget -= 8;
L_0061B3E0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[22], c.r[11].w[0] << 10);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B3E8u);
    c.budget -= 4;
L_0061B3F0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B3F4u);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061B400:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[11].w[0] << 15);
    c.budget -= 4;
L_0061B410:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B418u);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061B430:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[11].w[0] << 18);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B438u);
    c.budget -= 4;
L_0061B440:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[21].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061B450:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B450u);
    c.r[21].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B458u);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061B470:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B470u);
    c.r[21].d[0] = c.hi.d[0];
    set32(c.r[21], c.r[11].w[0] << 27);
    c.budget -= 4;
L_0061B480:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B480u);
    c.r[21].d[0] = c.hi.d[0];
    set32(c.r[21], c.r[11].w[0] << 31);
    c.budget -= 4;
L_0061B490:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[22].d[0] = c.sa;
    set32(c.r[22], c.r[11].w[0] << 27);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B49Cu);
    c.budget -= 8;
L_0061B4B0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B4B4u);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061B4C0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[11].w[0] << 18);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B4C8u);
    c.budget -= 4;
L_0061B4D0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[11].w[0] << 20);
    c.budget -= 4;
L_0061B4E0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[21].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061B4F0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B4F0u);
    set32(c.r[22], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[22], c.r[11].w[0] << 29);
    c.budget -= 4;
L_0061B500:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B500u);
    c.r[21].d[0] = c.hi.d[0];
    set32(c.r[21], c.r[11].w[0] << 27);
    c.budget -= 4;
L_0061B510:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B510u);
    set32(c.r[21], c.r[11].w[0] << 29);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061B520:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[22].d[0] = c.sa;
    set32(c.r[22], c.r[11].w[0] << 30);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B52Cu);
    c.budget -= 8;
L_0061B540:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[22], c.r[3].w[0] + c.r[11].w[0]);
    c.r[23].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061B550:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[11].w[0] << 17);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061B560:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B564u);
    c.budget -= 4;
L_0061B570:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[21].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061B580:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B580u);
    c.r[23].d[0] = c.hi.d[0];
    set32(c.r[23], c.r[11].w[0] << 2);
    c.budget -= 4;
L_0061B590:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B590u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B594u);
    c.r[23].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061B5A0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B5A0u);
    set32(c.r[23], c.r[11].w[0] << 4);
    set32(c.r[23], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061B5B0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B5B0u);
    c.r[23].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061B5C0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B5C0u);
    set32(c.r[23], c.r[11].w[0] << 6);
    set32(c.r[23], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061B5D0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B5D0u);
    set32(c.r[23], c.r[11].w[0] << 7);
    set32(c.r[23], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061B5E0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B5E0u);
    set32(c.r[23], c.r[11].w[0] << 8);
    set32(c.r[23], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061B5F0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B5F0u);
    c.r[23].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B5F8u);
    c.budget -= 4;
L_0061B600:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B600u);
    set32(c.r[23], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061B610:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B610u);
    c.r[23].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061B620:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B620u);
    set32(c.r[23], c.r[11].w[0] << 12);
    set32(c.r[23], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061B630:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B630u);
    set32(c.r[23], c.r[11].w[0] << 13);
    set32(c.r[23], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061B640:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B640u);
    set32(c.r[23], c.r[11].w[0] << 13);
    set32(c.r[23], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061B650:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[23], c.r[11].w[0] << 14);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B658u);
    c.budget -= 4;
L_0061B660:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[22], c.r[11].w[0] << 10);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B668u);
    c.budget -= 4;
L_0061B670:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B674u);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061B680:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[11].w[0] << 15);
    c.budget -= 4;
L_0061B690:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B698u);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061B6B0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[11].w[0] << 17);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061B6C0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[11].w[0] << 18);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B6C8u);
    c.budget -= 4;
L_0061B6D0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[11].w[0] << 20);
    c.budget -= 4;
L_0061B6E0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[21].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061B6F0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B6F4u);
    c.budget -= 4;
L_0061B700:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[21].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061B710:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B710u);
    c.r[21].d[0] = c.hi.d[0];
    set32(c.r[21], c.r[11].w[0] << 27);
    c.budget -= 4;
L_0061B720:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B720u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B724u);
    c.r[21].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061B730:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B730u);
    set32(c.r[21], c.r[11].w[0] << 29);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061B740:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B744u);
    c.budget -= 4;
L_0061B750:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B754u);
    set32(c.r[22], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061B760:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[22].d[0] = c.hi.d[0];
    set32(c.r[22], c.r[11].w[0] << 2);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B76Cu);
    c.budget -= 8;
L_0061B780:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[22].d[0] = c.hi.d[0];
    set32(c.r[22], c.r[11].w[0] << 4);
    c.budget -= 4;
L_0061B790:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B790u);
    set32(c.r[22], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[22], c.r[11].w[0] << 5);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B79Cu);
    c.budget -= 8;
L_0061B7B0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B7B0u);
    c.r[22].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B7B8u);
    c.r[22].d[0] = c.hi.d[0];
    c.budget -= 8;
L_0061B7D0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[23], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[23], c.r[11].w[0] << 16);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B7DCu);
    c.budget -= 8;
L_0061B7F0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[23].d[0] = c.hi.d[0];
    set32(c.r[23], c.r[11].w[0] << 18);
    set32(c.r[23], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061B810:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[23], c.r[11].w[0] << 19);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B818u);
    set32(c.r[23], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061B830:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[23].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B838u);
    set32(c.r[23], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061B850:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[23].d[0] = c.hi.d[0];
    c.r[23].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061B860:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B864u);
    set32(c.r[23], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061B870:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[23].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061B880:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[23], c.r[11].w[0] << 7);
    set32(c.r[23], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061B890:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[23], c.r[11].w[0] << 8);
    set32(c.r[23], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061B8A0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[23].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B8A8u);
    c.budget -= 4;
L_0061B8B0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[23], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061B8C0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[23].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061B8D0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[23], c.r[11].w[0] << 12);
    set32(c.r[23], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061B8E0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[23], c.r[11].w[0] << 13);
    set32(c.r[23], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061B8F0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B8F0u);
    c.r[23].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B8F8u);
    c.budget -= 4;
L_0061B900:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B900u);
    set32(c.r[23], c.r[11].w[0] << 13);
    set32(c.r[23], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061B910:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[23].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B918u);
    c.budget -= 4;
L_0061B920:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[23], c.r[3].w[0] + c.r[11].w[0]);
    c.r[23].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061B930:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[23], c.r[11].w[0] << 19);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B938u);
    set32(c.r[23], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061B950:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[23], c.r[11].w[0] << 28);
    set32(c.r[23], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061B960:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[23].d[0] = c.hi.d[0];
    set32(c.r[23], c.r[11].w[0] << 30);
    c.budget -= 4;
L_0061B970:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B974u);
    c.r[23].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B97Cu);
    c.budget -= 8;
L_0061B990:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[24].d[0] = c.hi.d[0];
    set32(c.r[24], c.r[11].w[0] << 1);
    c.budget -= 4;
L_0061B9A0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[21].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061B9B0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[11].w[0] << 2);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061B9D0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[11].w[0] << 18);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B9D8u);
    c.budget -= 4;
L_0061B9E0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B9E0u);
    c.r[21].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061B9E8u);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061BA00:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BA00u);
    c.r[21].d[0] = c.hi.d[0];
    set32(c.r[21], c.r[11].w[0] << 27);
    c.budget -= 4;
L_0061BA10:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BA10u);
    set32(c.r[21], c.r[11].w[0] << 29);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061BA20:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[24].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BA28u);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061BA40:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[24].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BA48u);
    c.budget -= 4;
L_0061BA50:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[11].w[0] << 7);
    c.budget -= 4;
L_0061BA60:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[21].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061BA70:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BA70u);
    set32(c.r[22], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[22], c.r[11].w[0] << 29);
    c.budget -= 4;
L_0061BA80:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BA80u);
    c.r[21].d[0] = c.hi.d[0];
    set32(c.r[21], c.r[11].w[0] << 27);
    c.budget -= 4;
L_0061BA90:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BA90u);
    set32(c.r[21], c.r[11].w[0] << 29);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061BAA0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BAA0u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BAA4u);
    c.r[24].d[0] = c.hi.d[0];
    set32(c.r[24], c.r[11].w[0] << 9);
    c.budget -= 8;
L_0061BAC0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BAC0u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BAC4u);
    c.r[23].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061BAD0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BAD0u);
    c.r[23].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061BAE0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BAE0u);
    set32(c.r[23], c.r[11].w[0] << 6);
    set32(c.r[23], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061BAF0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BAF0u);
    set32(c.r[23], c.r[11].w[0] << 7);
    set32(c.r[23], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061BB00:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BB00u);
    set32(c.r[23], c.r[11].w[0] << 8);
    set32(c.r[23], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061BB10:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BB10u);
    c.r[23].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BB18u);
    c.budget -= 4;
L_0061BB20:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BB20u);
    set32(c.r[23], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061BB30:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BB30u);
    c.r[23].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061BB40:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BB40u);
    set32(c.r[23], c.r[11].w[0] << 13);
    set32(c.r[23], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061BB50:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BB50u);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BB58u);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061BB70:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BB70u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BB74u);
    c.r[23].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061BB80:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BB80u);
    c.r[23].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061BB90:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BB90u);
    set32(c.r[23], c.r[11].w[0] << 6);
    set32(c.r[23], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061BBA0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BBA0u);
    set32(c.r[23], c.r[11].w[0] << 7);
    set32(c.r[23], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061BBB0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BBB0u);
    set32(c.r[23], c.r[11].w[0] << 8);
    set32(c.r[23], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061BBC0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BBC0u);
    c.r[23].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BBC8u);
    c.budget -= 4;
L_0061BBD0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BBD0u);
    set32(c.r[23], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061BBE0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BBE0u);
    c.r[23].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061BBF0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BBF0u);
    set32(c.r[23], c.r[11].w[0] << 13);
    set32(c.r[23], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061BC00:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BC00u);
    set32(c.r[24], c.r[11].w[0] << 11);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BC08u);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061BC20:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BC20u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BC24u);
    c.r[23].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061BC30:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BC30u);
    c.r[23].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061BC40:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BC40u);
    set32(c.r[23], c.r[11].w[0] << 6);
    set32(c.r[23], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061BC50:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BC50u);
    set32(c.r[23], c.r[11].w[0] << 7);
    set32(c.r[23], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061BC60:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BC60u);
    set32(c.r[23], c.r[11].w[0] << 8);
    set32(c.r[23], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061BC70:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BC70u);
    c.r[23].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BC78u);
    c.budget -= 4;
L_0061BC80:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BC80u);
    set32(c.r[23], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061BC90:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BC90u);
    c.r[23].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061BCA0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BCA0u);
    set32(c.r[23], c.r[11].w[0] << 13);
    set32(c.r[23], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061BCB0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BCB0u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[24].d[0] = c.lo.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BCB8u);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061BCD0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BCD0u);
    set32(c.r[23], c.r[11].w[0] << 7);
    set32(c.r[23], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061BCE0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BCE0u);
    set32(c.r[23], c.r[11].w[0] << 12);
    set32(c.r[23], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061BCF0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BCF0u);
    set32(c.r[23], c.r[11].w[0] << 13);
    set32(c.r[23], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061BD00:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BD00u);
    set32(c.r[23], c.r[11].w[0] << 13);
    set32(c.r[23], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061BD10:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BD10u);
    c.r[24].d[0] = c.hi.d[0];
    set32(c.r[24], c.r[11].w[0] << 14);
    c.budget -= 4;
L_0061BD20:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BD20u);
    c.r[23].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061BD30:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BD30u);
    set32(c.r[23], c.r[11].w[0] << 13);
    set32(c.r[23], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061BD40:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BD44u);
    c.r[24].d[0] = c.hi.d[0];
    set32(c.r[24], c.r[11].w[0] << 16);
    c.budget -= 8;
L_0061BD60:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00618000u < 16384u) { entry = entries_0146[(t - 0x00618000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0061BD70:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[11].w[0] << 18);
    c.budget -= 4;
L_0061BD80:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.r[24].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061BD90:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[11].w[0] << 20);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061BDA0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[24].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BDA8u);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061BDC0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[11].w[0] << 23);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BDC8u);
    c.budget -= 4;
L_0061BDD0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[11].w[0] << 25);
    c.budget -= 4;
L_0061BDE0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[11].w[0] << 26);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061BE00:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[24].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BE08u);
    c.budget -= 4;
L_0061BE10:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BE10u);
    c.r[24].d[0] = c.hi.d[0];
    set32(c.r[24], c.r[11].w[0] << 29);
    c.budget -= 4;
L_0061BE20:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BE20u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BE24u);
    c.r[15].d[0] = c.r[11].d[0] << 8;
    c.budget -= 4;
L_0061BE30:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BE30u);
    c.r[24].d[0] = c.hi.d[0];
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061BE40:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BE48u);
    c.budget -= 4;
L_0061BE50:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[11].w[0] << 20);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061BE60:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[24].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BE68u);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061BE80:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[11].w[0] << 23);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BE88u);
    c.budget -= 4;
L_0061BE90:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[11].w[0] << 25);
    c.budget -= 4;
L_0061BEA0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[11].w[0] << 26);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061BEC0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[24].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BEC8u);
    c.budget -= 4;
L_0061BED0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BED0u);
    c.r[24].d[0] = c.hi.d[0];
    set32(c.r[24], c.r[11].w[0] << 29);
    c.budget -= 4;
L_0061BEE0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BEE0u);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[11].w[0] << 0);
    set32(c.r[25], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061BF00:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BF00u);
    c.r[24].d[0] = c.hi.d[0];
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061BF10:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[11].w[0] << 26);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061BF30:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[24].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BF38u);
    c.budget -= 4;
L_0061BF40:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BF40u);
    c.r[24].d[0] = c.hi.d[0];
    set32(c.r[24], c.r[11].w[0] << 29);
    c.budget -= 4;
L_0061BF50:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BF50u);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[11].w[0] << 0);
    set32(c.r[25], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061BF70:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BF70u);
    c.r[24].d[0] = c.hi.d[0];
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061BF80:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[11].w[0] << 1);
    set32(c.r[25], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[11].w[0] << 2);
    c.budget -= 8;
L_0061BFA0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[3].w[0] + c.r[11].w[0]);
    c.r[25].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061BFB0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.r[24].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061BFC0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[11].w[0] << 20);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061BFD0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BFD4u);
    c.r[25].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061BFE0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[11].w[0] << 5);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BFE8u);
    c.budget -= 4;
L_0061BFF0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[25].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061BFF8u);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
    [[clang::musttail]] return unit_0147(c, 1u, depth);
}

}
