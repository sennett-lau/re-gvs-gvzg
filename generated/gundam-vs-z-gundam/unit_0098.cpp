#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0098[4096] = {
    1, 2, 3, 4, 5, 0, 6, 7, 0, 0, 0, 0, 8, 9, 10, 0, 0, 11, 12, 0, 13, 0, 0, 14, 0, 15, 0, 16, 17, 0, 0, 0,
    0, 18, 0, 19, 0, 0, 20, 0, 0, 0, 21, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 25, 0, 0, 26, 0, 0, 0, 27, 0,
    28, 0, 0, 0, 0, 0, 0, 29, 30, 0, 31, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 35, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0,
    0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 49, 50, 0, 0, 0,
    0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0,
    55, 0, 56, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60,
    0, 0, 0, 0, 61, 0, 62, 0, 63, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 69, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 75, 0, 76, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 79, 0, 80, 0, 81, 0, 0, 82, 0, 0, 0, 83, 0, 84, 0, 85, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0,
    0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 92, 0, 93, 0, 94, 0,
    95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0,
    0, 0, 0, 0, 0, 98, 0, 99, 0, 100, 0, 101, 0, 102, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 106, 0,
    107, 0, 108, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0,
    112, 0, 113, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 117, 0, 118, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 121, 0, 122, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0, 0, 0, 127, 0, 128, 0, 129, 0,
    0, 0, 0, 0, 130, 0, 131, 0, 0, 0, 132, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 141, 0, 0,
    142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 148, 0,
    149, 0, 150, 0, 151, 0, 152, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 159, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0,
    0, 0, 0, 162, 0, 163, 0, 164, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 168, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0,
    0, 0, 176, 0, 177, 0, 0, 0, 0, 0, 0, 178, 179, 0, 180, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 187, 0, 188, 0, 189, 0, 0, 0,
    190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0,
    0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 198, 0, 199, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 204, 0, 205, 0, 206, 0, 207, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209,
    0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0,
    213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 221, 0,
    0, 0, 0, 0, 0, 222, 0, 223, 0, 224, 0, 0, 225, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 228, 0, 229, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 231, 0, 232, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 240, 241,
    242, 0, 0, 0, 0, 0, 0, 243, 244, 0, 245, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 250, 0, 251, 0, 0, 0, 0, 0, 0, 252, 253, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 259, 0, 260, 0, 261, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 263, 0, 0, 0, 264, 0, 265, 0, 0, 0, 266, 0, 0, 0, 267, 0, 268, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 270, 0, 271, 0, 0, 0, 0, 0, 0, 272, 273, 0, 0, 0,
    0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 281, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 284, 0,
    285, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 288, 0, 0, 0, 289, 0, 290, 0, 0, 0, 291, 0, 0, 0, 292, 0, 293, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0,
    298, 0, 299, 0, 0, 0, 0, 0, 0, 300, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 305, 0, 306, 0, 307, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 312,
    0, 0, 0, 0, 0, 0, 0, 313, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 316, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 324, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 329, 0, 0, 0, 330, 0, 331, 0,
    332, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    334, 0, 335, 0, 0, 0, 0, 0, 336, 0, 337, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0,
    340, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 346, 0,
    0, 0, 0, 0, 347, 0, 348, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 353, 0, 354, 0, 0, 0, 0, 0, 0, 355, 356, 0, 357, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0,
    361, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 365, 0,
    0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 368, 0, 0, 369, 0, 0, 0, 370, 0, 0,
    371, 0, 372, 0, 373, 0, 374, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 377, 0,
    378, 0, 379, 0, 380, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 384, 0,
    0, 0, 385, 0, 386, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0,
    389, 0, 390, 0, 391, 0, 0, 0, 0, 0, 0, 0, 392, 0, 393, 0, 394, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 396, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 399, 0, 0, 400, 0, 401, 0,
    402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 404, 0, 405, 0, 406, 0, 407, 0, 408, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411,
    0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 414, 0, 0,
    415, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 420, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0,
    428, 0, 429, 0, 430, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 434, 0, 435, 0,
    436, 0, 437, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0,
    441, 0, 442, 0, 443, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 449, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 456, 0, 457, 0, 458, 0, 459, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 462, 0, 0,
    463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 468, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 470, 0, 471, 0, 472, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 474, 0, 475, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 478, 0, 479, 0, 0, 0, 480, 0, 481, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 485, 0, 486, 0, 487, 0, 0, 0, 0, 0, 0, 0, 488, 0, 489, 0, 0, 0,
    0, 0, 0, 490, 0, 0, 491, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 495, 0, 496, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 499, 0, 500, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 503, 0, 504, 0, 0, 0, 505, 0, 506, 0, 507, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 510, 0, 511, 0, 512, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 514, 0, 0, 515, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0,
    0, 0, 0, 0, 518, 0, 0, 0, 519, 0, 0, 0, 520, 0, 0, 0, 521, 0, 0, 0, 522, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 525, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 528, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 532, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 535, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 0,
    0, 0, 537, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 540, 0, 0, 0, 541, 0, 0, 0, 542, 0, 0, 0,
    543, 0, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0,
    0, 0, 0, 0, 547, 0, 0, 0, 0, 548, 0, 0, 549, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 553, 0, 0, 554, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    556, 0, 0, 0, 557, 0, 0, 0, 558, 0, 0, 0, 559, 0, 0, 0, 560, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 0,
    0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 564, 0, 0, 0, 0, 0, 565, 0, 0, 566, 0, 0, 567, 0, 0, 0, 568, 0, 569, 0, 0, 570,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 573, 0, 574, 0,
    0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 576, 0, 0, 577, 0, 578, 0, 0, 0, 579, 0, 0, 0, 0, 0, 580, 0, 0, 581, 0, 0,
    0, 582, 0, 0, 583, 0, 0, 0, 0, 584, 0, 0, 585, 0, 0, 0, 0, 586, 0, 0, 587, 0, 0, 0, 0, 0, 588, 0, 589, 0, 0, 0,
    590, 0, 0, 0, 0, 591, 0, 0, 0, 592, 0, 0, 0, 0, 593, 0, 0, 594, 0, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0, 0, 596, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 0, 599, 0, 0, 600, 0, 0, 0, 0, 0,
    601, 0, 0, 0, 602, 0, 0, 0, 603, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 604,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 605, 0, 0, 0, 606, 0, 0, 0, 0, 0, 0, 0, 607, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 608, 0, 0, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0, 0, 0, 610, 0, 0, 0,
    0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 613, 0, 0, 0,
    0, 0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0,
};

void unit_0098(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00360000;
    case 2u: goto L_00360004;
    case 3u: goto L_00360008;
    case 4u: goto L_0036000C;
    case 5u: goto L_00360010;
    case 6u: goto L_00360018;
    case 7u: goto L_0036001C;
    case 8u: goto L_00360030;
    case 9u: goto L_00360034;
    case 10u: goto L_00360038;
    case 11u: goto L_00360044;
    case 12u: goto L_00360048;
    case 13u: goto L_00360050;
    case 14u: goto L_0036005C;
    case 15u: goto L_00360064;
    case 16u: goto L_0036006C;
    case 17u: goto L_00360070;
    case 18u: goto L_00360084;
    case 19u: goto L_0036008C;
    case 20u: goto L_00360098;
    case 21u: goto L_003600A8;
    case 22u: goto L_003600B0;
    case 23u: goto L_003600CC;
    case 24u: goto L_003600D4;
    case 25u: goto L_003600DC;
    case 26u: goto L_003600E8;
    case 27u: goto L_003600F8;
    case 28u: goto L_00360100;
    case 29u: goto L_0036011C;
    case 30u: goto L_00360120;
    case 31u: goto L_00360128;
    case 32u: goto L_00360130;
    case 33u: goto L_00360150;
    case 34u: goto L_00360158;
    case 35u: goto L_00360160;
    case 36u: goto L_0036019C;
    case 37u: goto L_003601A8;
    case 38u: goto L_003601D4;
    case 39u: goto L_003601DC;
    case 40u: goto L_0036021C;
    case 41u: goto L_0036022C;
    case 42u: goto L_00360240;
    case 43u: goto L_00360248;
    case 44u: goto L_00360278;
    case 45u: goto L_00360288;
    case 46u: goto L_00360290;
    case 47u: goto L_003602DC;
    case 48u: goto L_003602E4;
    case 49u: goto L_003602EC;
    case 50u: goto L_003602F0;
    case 51u: goto L_00360310;
    case 52u: goto L_00360350;
    case 53u: goto L_00360358;
    case 54u: goto L_00360378;
    case 55u: goto L_00360380;
    case 56u: goto L_00360388;
    case 57u: goto L_00360390;
    case 58u: goto L_003603BC;
    case 59u: goto L_003603E0;
    case 60u: goto L_003603FC;
    case 61u: goto L_00360410;
    case 62u: goto L_00360418;
    case 63u: goto L_00360420;
    case 64u: goto L_00360428;
    case 65u: goto L_00360458;
    case 66u: goto L_003604A0;
    case 67u: goto L_003604C0;
    case 68u: goto L_003604F0;
    case 69u: goto L_003604F8;
    case 70u: goto L_00360528;
    case 71u: goto L_00360550;
    case 72u: goto L_00360590;
    case 73u: goto L_00360598;
    case 74u: goto L_003605B8;
    case 75u: goto L_003605C0;
    case 76u: goto L_003605C8;
    case 77u: goto L_003605D0;
    case 78u: goto L_003605D8;
    case 79u: goto L_0036060C;
    case 80u: goto L_00360614;
    case 81u: goto L_0036061C;
    case 82u: goto L_00360628;
    case 83u: goto L_00360638;
    case 84u: goto L_00360640;
    case 85u: goto L_00360648;
    case 86u: goto L_00360650;
    case 87u: goto L_00360668;
    case 88u: goto L_00360688;
    case 89u: goto L_003606BC;
    case 90u: goto L_003606D0;
    case 91u: goto L_003606E0;
    case 92u: goto L_003606E8;
    case 93u: goto L_003606F0;
    case 94u: goto L_003606F8;
    case 95u: goto L_00360700;
    case 96u: goto L_0036075C;
    case 97u: goto L_00360770;
    case 98u: goto L_00360794;
    case 99u: goto L_0036079C;
    case 100u: goto L_003607A4;
    case 101u: goto L_003607AC;
    case 102u: goto L_003607B4;
    case 103u: goto L_003607BC;
    case 104u: goto L_003607D8;
    case 105u: goto L_003607F0;
    case 106u: goto L_003607F8;
    case 107u: goto L_00360800;
    case 108u: goto L_00360808;
    case 109u: goto L_00360828;
    case 110u: goto L_0036085C;
    case 111u: goto L_00360870;
    case 112u: goto L_00360880;
    case 113u: goto L_00360888;
    case 114u: goto L_00360890;
    case 115u: goto L_003608C0;
    case 116u: goto L_003608E4;
    case 117u: goto L_003608EC;
    case 118u: goto L_003608F4;
    case 119u: goto L_00360924;
    case 120u: goto L_00360930;
    case 121u: goto L_00360938;
    case 122u: goto L_00360940;
    case 123u: goto L_00360948;
    case 124u: goto L_00360974;
    case 125u: goto L_003609C8;
    case 126u: goto L_003609D0;
    case 127u: goto L_003609E8;
    case 128u: goto L_003609F0;
    case 129u: goto L_003609F8;
    case 130u: goto L_00360A10;
    case 131u: goto L_00360A18;
    case 132u: goto L_00360A28;
    case 133u: goto L_00360A30;
    case 134u: goto L_00360A3C;
    case 135u: goto L_00360A60;
    case 136u: goto L_00360AA0;
    case 137u: goto L_00360AB8;
    case 138u: goto L_00360AC8;
    case 139u: goto L_00360AD0;
    case 140u: goto L_00360AEC;
    case 141u: goto L_00360AF4;
    case 142u: goto L_00360B00;
    case 143u: goto L_00360B18;
    case 144u: goto L_00360B28;
    case 145u: goto L_00360B30;
    case 146u: goto L_00360B64;
    case 147u: goto L_00360B70;
    case 148u: goto L_00360B78;
    case 149u: goto L_00360B80;
    case 150u: goto L_00360B88;
    case 151u: goto L_00360B90;
    case 152u: goto L_00360B98;
    case 153u: goto L_00360BA0;
    case 154u: goto L_00360BB8;
    case 155u: goto L_00360BDC;
    case 156u: goto L_00360C10;
    case 157u: goto L_00360C20;
    case 158u: goto L_00360C4C;
    case 159u: goto L_00360C54;
    case 160u: goto L_00360C5C;
    case 161u: goto L_00360C70;
    case 162u: goto L_00360C8C;
    case 163u: goto L_00360C94;
    case 164u: goto L_00360C9C;
    case 165u: goto L_00360CA4;
    case 166u: goto L_00360CC0;
    case 167u: goto L_00360CC8;
    case 168u: goto L_00360CD0;
    case 169u: goto L_00360CD8;
    case 170u: goto L_00360D10;
    case 171u: goto L_00360D34;
    case 172u: goto L_00360D44;
    case 173u: goto L_00360D54;
    case 174u: goto L_00360D64;
    case 175u: goto L_00360D78;
    case 176u: goto L_00360D88;
    case 177u: goto L_00360D90;
    case 178u: goto L_00360DAC;
    case 179u: goto L_00360DB0;
    case 180u: goto L_00360DB8;
    case 181u: goto L_00360DC0;
    case 182u: goto L_00360DD8;
    case 183u: goto L_00360E00;
    case 184u: goto L_00360E20;
    case 185u: goto L_00360E70;
    case 186u: goto L_00360F40;
    case 187u: goto L_00360F60;
    case 188u: goto L_00360F68;
    case 189u: goto L_00360F70;
    case 190u: goto L_00360F80;
    case 191u: goto L_00360FC0;
    case 192u: goto L_00360FE8;
    case 193u: goto L_00360FF8;
    case 194u: goto L_00361004;
    case 195u: goto L_0036101C;
    case 196u: goto L_00361054;
    case 197u: goto L_0036105C;
    case 198u: goto L_00361064;
    case 199u: goto L_0036106C;
    case 200u: goto L_003610CC;
    case 201u: goto L_003610FC;
    case 202u: goto L_00361138;
    case 203u: goto L_003611C8;
    case 204u: goto L_003611D0;
    case 205u: goto L_003611D8;
    case 206u: goto L_003611E0;
    case 207u: goto L_003611E8;
    case 208u: goto L_00361230;
    case 209u: goto L_0036127C;
    case 210u: goto L_00361284;
    case 211u: goto L_00361334;
    case 212u: goto L_0036135C;
    case 213u: goto L_00361380;
    case 214u: goto L_0036139C;
    case 215u: goto L_003613B4;
    case 216u: goto L_003613D8;
    case 217u: goto L_003613F4;
    case 218u: goto L_00361420;
    case 219u: goto L_00361430;
    case 220u: goto L_00361470;
    case 221u: goto L_00361478;
    case 222u: goto L_00361494;
    case 223u: goto L_0036149C;
    case 224u: goto L_003614A4;
    case 225u: goto L_003614B0;
    case 226u: goto L_003614B8;
    case 227u: goto L_003614E0;
    case 228u: goto L_003614E8;
    case 229u: goto L_003614F0;
    case 230u: goto L_00361520;
    case 231u: goto L_00361528;
    case 232u: goto L_00361530;
    case 233u: goto L_00361538;
    case 234u: goto L_003615A4;
    case 235u: goto L_003615D0;
    case 236u: goto L_003615D8;
    case 237u: goto L_0036161C;
    case 238u: goto L_00361644;
    case 239u: goto L_0036166C;
    case 240u: goto L_00361678;
    case 241u: goto L_0036167C;
    case 242u: goto L_00361680;
    case 243u: goto L_0036169C;
    case 244u: goto L_003616A0;
    case 245u: goto L_003616A8;
    case 246u: goto L_003616B0;
    case 247u: goto L_003616F4;
    case 248u: goto L_0036171C;
    case 249u: goto L_00361744;
    case 250u: goto L_00361750;
    case 251u: goto L_00361758;
    case 252u: goto L_00361774;
    case 253u: goto L_00361778;
    case 254u: goto L_003617A0;
    case 255u: goto L_003617E0;
    case 256u: goto L_00361830;
    case 257u: goto L_00361838;
    case 258u: goto L_00361860;
    case 259u: goto L_00361868;
    case 260u: goto L_00361870;
    case 261u: goto L_00361878;
    case 262u: goto L_003618A0;
    case 263u: goto L_003618A8;
    case 264u: goto L_003618B8;
    case 265u: goto L_003618C0;
    case 266u: goto L_003618D0;
    case 267u: goto L_003618E0;
    case 268u: goto L_003618E8;
    case 269u: goto L_0036193C;
    case 270u: goto L_00361948;
    case 271u: goto L_00361950;
    case 272u: goto L_0036196C;
    case 273u: goto L_00361970;
    case 274u: goto L_00361990;
    case 275u: goto L_003619D0;
    case 276u: goto L_00361A1C;
    case 277u: goto L_00361A40;
    case 278u: goto L_00361A50;
    case 279u: goto L_00361A60;
    case 280u: goto L_00361ABC;
    case 281u: goto L_00361AC0;
    case 282u: goto L_00361AC8;
    case 283u: goto L_00361AF0;
    case 284u: goto L_00361AF8;
    case 285u: goto L_00361B00;
    case 286u: goto L_00361B08;
    case 287u: goto L_00361B30;
    case 288u: goto L_00361B38;
    case 289u: goto L_00361B48;
    case 290u: goto L_00361B50;
    case 291u: goto L_00361B60;
    case 292u: goto L_00361B70;
    case 293u: goto L_00361B78;
    case 294u: goto L_00361BC4;
    case 295u: goto L_00361BD4;
    case 296u: goto L_00361BE4;
    case 297u: goto L_00361BF4;
    case 298u: goto L_00361C00;
    case 299u: goto L_00361C08;
    case 300u: goto L_00361C24;
    case 301u: goto L_00361C28;
    case 302u: goto L_00361C50;
    case 303u: goto L_00361C70;
    case 304u: goto L_00361CB0;
    case 305u: goto L_00361D0C;
    case 306u: goto L_00361D14;
    case 307u: goto L_00361D1C;
    case 308u: goto L_00361D24;
    case 309u: goto L_00361D3C;
    case 310u: goto L_00361D50;
    case 311u: goto L_00361D78;
    case 312u: goto L_00361D7C;
    case 313u: goto L_00361D9C;
    case 314u: goto L_00361DA4;
    case 315u: goto L_00361DB8;
    case 316u: goto L_00361E10;
    case 317u: goto L_00361E18;
    case 318u: goto L_00361E58;
    case 319u: goto L_00361E84;
    case 320u: goto L_00361EB0;
    case 321u: goto L_00361EF8;
    case 322u: goto L_00361F20;
    case 323u: goto L_00361F30;
    case 324u: goto L_00361F3C;
    case 325u: goto L_00361F58;
    case 326u: goto L_00361F80;
    case 327u: goto L_00361FA8;
    case 328u: goto L_00361FD8;
    case 329u: goto L_00361FE0;
    case 330u: goto L_00361FF0;
    case 331u: goto L_00361FF8;
    case 332u: goto L_00362000;
    case 333u: goto L_00362008;
    case 334u: goto L_00362080;
    case 335u: goto L_00362088;
    case 336u: goto L_003620A0;
    case 337u: goto L_003620A8;
    case 338u: goto L_003620B8;
    case 339u: goto L_003620E0;
    case 340u: goto L_00362100;
    case 341u: goto L_00362114;
    case 342u: goto L_0036212C;
    case 343u: goto L_00362144;
    case 344u: goto L_0036215C;
    case 345u: goto L_003621EC;
    case 346u: goto L_003621F8;
    case 347u: goto L_00362210;
    case 348u: goto L_00362218;
    case 349u: goto L_00362228;
    case 350u: goto L_0036226C;
    case 351u: goto L_00362294;
    case 352u: goto L_003622BC;
    case 353u: goto L_003622C8;
    case 354u: goto L_003622D0;
    case 355u: goto L_003622EC;
    case 356u: goto L_003622F0;
    case 357u: goto L_003622F8;
    case 358u: goto L_00362328;
    case 359u: goto L_00362350;
    case 360u: goto L_00362374;
    case 361u: goto L_00362380;
    case 362u: goto L_00362388;
    case 363u: goto L_003623C0;
    case 364u: goto L_003623E8;
    case 365u: goto L_003623F8;
    case 366u: goto L_00362418;
    case 367u: goto L_00362450;
    case 368u: goto L_00362458;
    case 369u: goto L_00362464;
    case 370u: goto L_00362474;
    case 371u: goto L_00362480;
    case 372u: goto L_00362488;
    case 373u: goto L_00362490;
    case 374u: goto L_00362498;
    case 375u: goto L_003624A0;
    case 376u: goto L_003624F0;
    case 377u: goto L_003624F8;
    case 378u: goto L_00362500;
    case 379u: goto L_00362508;
    case 380u: goto L_00362510;
    case 381u: goto L_00362518;
    case 382u: goto L_0036253C;
    case 383u: goto L_00362570;
    case 384u: goto L_00362578;
    case 385u: goto L_00362588;
    case 386u: goto L_00362590;
    case 387u: goto L_00362598;
    case 388u: goto L_003625F0;
    case 389u: goto L_00362600;
    case 390u: goto L_00362608;
    case 391u: goto L_00362610;
    case 392u: goto L_00362630;
    case 393u: goto L_00362638;
    case 394u: goto L_00362640;
    case 395u: goto L_00362648;
    case 396u: goto L_00362690;
    case 397u: goto L_00362698;
    case 398u: goto L_003626D8;
    case 399u: goto L_003626E4;
    case 400u: goto L_003626F0;
    case 401u: goto L_003626F8;
    case 402u: goto L_00362700;
    case 403u: goto L_00362730;
    case 404u: goto L_00362750;
    case 405u: goto L_00362758;
    case 406u: goto L_00362760;
    case 407u: goto L_00362768;
    case 408u: goto L_00362770;
    case 409u: goto L_003627E4;
    case 410u: goto L_00362840;
    case 411u: goto L_0036287C;
    case 412u: goto L_00362888;
    case 413u: goto L_003628EC;
    case 414u: goto L_003628F4;
    case 415u: goto L_00362900;
    case 416u: goto L_0036290C;
    case 417u: goto L_0036293C;
    case 418u: goto L_00362980;
    case 419u: goto L_003629E8;
    case 420u: goto L_003629F0;
    case 421u: goto L_00362A20;
    case 422u: goto L_00362A48;
    case 423u: goto L_00362A70;
    case 424u: goto L_00362A98;
    case 425u: goto L_00362B2C;
    case 426u: goto L_00362B38;
    case 427u: goto L_00362B78;
    case 428u: goto L_00362B80;
    case 429u: goto L_00362B88;
    case 430u: goto L_00362B90;
    case 431u: goto L_00362B98;
    case 432u: goto L_00362BBC;
    case 433u: goto L_00362BE8;
    case 434u: goto L_00362BF0;
    case 435u: goto L_00362BF8;
    case 436u: goto L_00362C00;
    case 437u: goto L_00362C08;
    case 438u: goto L_00362C10;
    case 439u: goto L_00362C50;
    case 440u: goto L_00362C68;
    case 441u: goto L_00362C80;
    case 442u: goto L_00362C88;
    case 443u: goto L_00362C90;
    case 444u: goto L_00362C98;
    case 445u: goto L_00362CFC;
    case 446u: goto L_00362D38;
    case 447u: goto L_00362D88;
    case 448u: goto L_00362DD8;
    case 449u: goto L_00362DEC;
    case 450u: goto L_00362E44;
    case 451u: goto L_00362E68;
    case 452u: goto L_00362EB0;
    case 453u: goto L_00362EF8;
    case 454u: goto L_00362F48;
    case 455u: goto L_00362F50;
    case 456u: goto L_00362F90;
    case 457u: goto L_00362F98;
    case 458u: goto L_00362FA0;
    case 459u: goto L_00362FA8;
    case 460u: goto L_00362FB0;
    case 461u: goto L_00362FEC;
    case 462u: goto L_00362FF4;
    case 463u: goto L_00363000;
    case 464u: goto L_00363050;
    case 465u: goto L_00363098;
    case 466u: goto L_003630C4;
    case 467u: goto L_003630F0;
    case 468u: goto L_003630F8;
    case 469u: goto L_00363144;
    case 470u: goto L_00363150;
    case 471u: goto L_00363158;
    case 472u: goto L_00363160;
    case 473u: goto L_003631A8;
    case 474u: goto L_003631B0;
    case 475u: goto L_003631B8;
    case 476u: goto L_003631C0;
    case 477u: goto L_003631E4;
    case 478u: goto L_00363218;
    case 479u: goto L_00363220;
    case 480u: goto L_00363230;
    case 481u: goto L_00363238;
    case 482u: goto L_00363240;
    case 483u: goto L_00363278;
    case 484u: goto L_003632A8;
    case 485u: goto L_003632B8;
    case 486u: goto L_003632C0;
    case 487u: goto L_003632C8;
    case 488u: goto L_003632E8;
    case 489u: goto L_003632F0;
    case 490u: goto L_0036330C;
    case 491u: goto L_00363318;
    case 492u: goto L_00363320;
    case 493u: goto L_00363368;
    case 494u: goto L_003633BC;
    case 495u: goto L_003633C8;
    case 496u: goto L_003633D0;
    case 497u: goto L_003633D8;
    case 498u: goto L_00363420;
    case 499u: goto L_00363428;
    case 500u: goto L_00363430;
    case 501u: goto L_00363438;
    case 502u: goto L_0036345C;
    case 503u: goto L_00363490;
    case 504u: goto L_00363498;
    case 505u: goto L_003634A8;
    case 506u: goto L_003634B0;
    case 507u: goto L_003634B8;
    case 508u: goto L_003634D0;
    case 509u: goto L_00363520;
    case 510u: goto L_00363530;
    case 511u: goto L_00363538;
    case 512u: goto L_00363540;
    case 513u: goto L_00363560;
    case 514u: goto L_00363594;
    case 515u: goto L_003635A0;
    case 516u: goto L_003635A8;
    case 517u: goto L_003635F0;
    case 518u: goto L_00363610;
    case 519u: goto L_00363620;
    case 520u: goto L_00363630;
    case 521u: goto L_00363640;
    case 522u: goto L_00363650;
    case 523u: goto L_00363660;
    case 524u: goto L_003636A0;
    case 525u: goto L_003636B0;
    case 526u: goto L_003636C0;
    case 527u: goto L_003636E8;
    case 528u: goto L_003636F8;
    case 529u: goto L_00363720;
    case 530u: goto L_00363748;
    case 531u: goto L_00363760;
    case 532u: goto L_00363788;
    case 533u: goto L_00363798;
    case 534u: goto L_003637C0;
    case 535u: goto L_003637D0;
    case 536u: goto L_003637E8;
    case 537u: goto L_00363808;
    case 538u: goto L_00363810;
    case 539u: goto L_00363838;
    case 540u: goto L_00363850;
    case 541u: goto L_00363860;
    case 542u: goto L_00363870;
    case 543u: goto L_00363880;
    case 544u: goto L_0036389C;
    case 545u: goto L_003638B0;
    case 546u: goto L_003638F4;
    case 547u: goto L_00363910;
    case 548u: goto L_00363924;
    case 549u: goto L_00363930;
    case 550u: goto L_0036394C;
    case 551u: goto L_00363970;
    case 552u: goto L_003639A0;
    case 553u: goto L_003639B4;
    case 554u: goto L_003639C0;
    case 555u: goto L_003639D8;
    case 556u: goto L_00363A00;
    case 557u: goto L_00363A10;
    case 558u: goto L_00363A20;
    case 559u: goto L_00363A30;
    case 560u: goto L_00363A40;
    case 561u: goto L_00363A50;
    case 562u: goto L_00363A74;
    case 563u: goto L_00363A98;
    case 564u: goto L_00363AA8;
    case 565u: goto L_00363AC0;
    case 566u: goto L_00363ACC;
    case 567u: goto L_00363AD8;
    case 568u: goto L_00363AE8;
    case 569u: goto L_00363AF0;
    case 570u: goto L_00363AFC;
    case 571u: goto L_00363B38;
    case 572u: goto L_00363B54;
    case 573u: goto L_00363B70;
    case 574u: goto L_00363B78;
    case 575u: goto L_00363B94;
    case 576u: goto L_00363BAC;
    case 577u: goto L_00363BB8;
    case 578u: goto L_00363BC0;
    case 579u: goto L_00363BD0;
    case 580u: goto L_00363BE8;
    case 581u: goto L_00363BF4;
    case 582u: goto L_00363C04;
    case 583u: goto L_00363C10;
    case 584u: goto L_00363C24;
    case 585u: goto L_00363C30;
    case 586u: goto L_00363C44;
    case 587u: goto L_00363C50;
    case 588u: goto L_00363C68;
    case 589u: goto L_00363C70;
    case 590u: goto L_00363C80;
    case 591u: goto L_00363C94;
    case 592u: goto L_00363CA4;
    case 593u: goto L_00363CB8;
    case 594u: goto L_00363CC4;
    case 595u: goto L_00363CE0;
    case 596u: goto L_00363CF8;
    case 597u: goto L_00363D20;
    case 598u: goto L_00363D3C;
    case 599u: goto L_00363D5C;
    case 600u: goto L_00363D68;
    case 601u: goto L_00363D80;
    case 602u: goto L_00363D90;
    case 603u: goto L_00363DA0;
    case 604u: goto L_00363DFC;
    case 605u: goto L_00363E40;
    case 606u: goto L_00363E50;
    case 607u: goto L_00363E70;
    case 608u: goto L_00363EB0;
    case 609u: goto L_00363ED0;
    case 610u: goto L_00363EF0;
    case 611u: goto L_00363F10;
    case 612u: goto L_00363F40;
    case 613u: goto L_00363F70;
    case 614u: goto L_00363F90;
    case 615u: goto L_00363FF0;
    default: bad_entry(c, 0x00360000u); return;
    }
L_00360000:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.budget -= 1;
L_00360004:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003602F0; } }
    goto L_0036000C;
L_00360008:
    c.budget -= 1;
L_0036000C:
    c.budget -= 1;
L_00360010:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.budget -= 2;
L_00360018:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0036001C:
    set32(c.r[5], 0u + 20u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360030u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 545u, depth + 1u); else { c.pc = 0x003638B0u; return; } if (c.pc != 0x00360030u) [[unlikely]] return; }
L_00360030:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003602F0; } }
    goto L_00360038;
L_00360034:
    c.budget -= 1;
L_00360038:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
L_00360044:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00360048:
    set32(c.r[6], 0u + 128u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 2;
L_00360050:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036005Cu); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0036005Cu) [[unlikely]] return; }
L_0036005C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 2;
L_00360064:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036006Cu); set32(c.r[5], c.r[5].w[0] + 4982u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0036006Cu) [[unlikely]] return; }
L_0036006C:
    set32(c.r[4], 0u + 76u);
    c.budget -= 1;
L_00360070:
    set32(c.r[5], 0u + 298u);
    set32(c.r[6], c.r[29].w[0] + 32u);
    set32(c.r[7], 0u + 12u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360084u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 32u, depth + 1u); else { c.pc = 0x00364630u; return; } if (c.pc != 0x00360084u) [[unlikely]] return; }
L_00360084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036008Cu);  if (depth < kMaxDepth) unit_0099(c, 14u, depth + 1u); else { c.pc = 0x00364290u; return; } if (c.pc != 0x0036008Cu) [[unlikely]] return; }
L_0036008C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003602F0; } }
    c.budget -= 1;
L_00360098:
    set32(c.r[2], 0u + 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003602F0; } }
L_003600A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003600B0u);  if (depth < kMaxDepth) unit_0098(c, 531u, depth + 1u); else { c.pc = 0x00363760u; return; } if (c.pc != 0x003600B0u) [[unlikely]] return; }
L_003600B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003602F0; } }
    set32(c.r[2], 0u + 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003600CCu); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x003600CCu) [[unlikely]] return; }
L_003600CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003600D4u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x003600D4u) [[unlikely]] return; }
L_003600D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003600DCu); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 606u, depth + 1u); else { c.pc = 0x00363E50u; return; } if (c.pc != 0x003600DCu) [[unlikely]] return; }
L_003600DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003602F0; } }
    c.budget -= 1;
L_003600E8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003602F0; } }
L_003600F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360100u);  if (depth < kMaxDepth) unit_0098(c, 542u, depth + 1u); else { c.pc = 0x00363870u; return; } if (c.pc != 0x00360100u) [[unlikely]] return; }
L_00360100:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003602F0; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036011Cu); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 601u, depth + 1u); else { c.pc = 0x00363D80u; return; } if (c.pc != 0x0036011Cu) [[unlikely]] return; }
L_0036011C:
    c.budget -= 1;
L_00360120:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_003602F0; } }
L_00360128:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360130u);  if (depth < kMaxDepth) unit_0098(c, 542u, depth + 1u); else { c.pc = 0x00363870u; return; } if (c.pc != 0x00360130u) [[unlikely]] return; }
L_00360130:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003602F0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360150u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x00360150u) [[unlikely]] return; }
L_00360150:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360158u); set32(c.r[4], 0u + 1024u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x00360158u) [[unlikely]] return; }
L_00360158:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_003602F0; } }
L_00360160:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[3], c.r[4].w[0] + 1u);  if (t) { goto L_003602F0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 300u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036019Cu); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 612u, depth + 1u); else { c.pc = 0x00363F40u; return; } if (c.pc != 0x0036019Cu) [[unlikely]] return; }
L_0036019C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003602F0; } }
    c.budget -= 1;
L_003601A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00040000u);  if (t) { goto L_00360200; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003601D4u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x003601D4u) [[unlikely]] return; }
L_003601D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003601DCu); set32(c.r[4], 0u + 1024u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x003601DCu) [[unlikely]] return; }
L_003601DC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], 0u + 20u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003602F0; } }
L_00360200:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.r[1].d[0] = c.r[2].sd[0] < 240ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00360280; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036021Cu);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x0036021Cu) [[unlikely]] return; }
L_0036021C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00360238; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036022Cu);  if (depth < kMaxDepth) unit_0098(c, 531u, depth + 1u); else { c.pc = 0x00363760u; return; } if (c.pc != 0x0036022Cu) [[unlikely]] return; }
L_0036022C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00360270; } }
    c.budget -= 1;
L_00360238:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360240u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00040000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x00360240u) [[unlikely]] return; }
L_00360240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360248u); set32(c.r[4], 0u + 1024u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x00360248u) [[unlikely]] return; }
L_00360248:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], 0u + 20u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003602F0; } }
    c.budget -= 1;
L_00360270:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360278u); set32(c.r[4], 0u + 30u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x00360278u) [[unlikely]] return; }
L_00360278:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003602F0; } }
L_00360280:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360288u); set32(c.r[4], 0u + 30u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x00360288u) [[unlikely]] return; }
L_00360288:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003602F0; } }
L_00360290:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[3], 0u + 2u);  if (t) { goto L_003602F0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 45u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], c.r[4].w[0] + 4982u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003602DCu); set32(c.r[6], 0u + 13u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003602DCu) [[unlikely]] return; }
L_003602DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003602E4u);  if (depth < kMaxDepth) unit_0098(c, 610u, depth + 1u); else { c.pc = 0x00363EF0u; return; } if (c.pc != 0x003602E4u) [[unlikely]] return; }
L_003602E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003602ECu);  if (depth < kMaxDepth) unit_0099(c, 11u, depth + 1u); else { c.pc = 0x00364230u; return; } if (c.pc != 0x003602ECu) [[unlikely]] return; }
L_003602EC:
    c.budget -= 1;
L_003602F0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00360310:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00360530; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 7568u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00360000u < 16384u) { entry = entries_0098[(t - 0x00360000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00360350:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360358u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0097(c, 62u, depth + 1u); else { c.pc = 0x0035CE00u; return; } if (c.pc != 0x00360358u) [[unlikely]] return; }
L_00360358:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00360530; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360378u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 557u, depth + 1u); else { c.pc = 0x00363A10u; return; } if (c.pc != 0x00360378u) [[unlikely]] return; }
L_00360378:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360380u);  if (depth < kMaxDepth) unit_0098(c, 543u, depth + 1u); else { c.pc = 0x00363880u; return; } if (c.pc != 0x00360380u) [[unlikely]] return; }
L_00360380:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360530; } }
L_00360388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360390u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0097(c, 69u, depth + 1u); else { c.pc = 0x0035CEC0u; return; } if (c.pc != 0x00360390u) [[unlikely]] return; }
L_00360390:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00360530; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[4], c.r[4].w[0] + 18288u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 256u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003603BCu); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003603BCu) [[unlikely]] return; }
L_003603BC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 12u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4960u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00900000u);  if (t) { goto L_003603E8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 18288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003603E0u); set32(c.r[5], c.r[5].w[0] + 7528u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x003603E0u) [[unlikely]] return; }
L_003603E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360400; } }
L_003603E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 18288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003603FCu); set32(c.r[5], c.r[5].w[0] + 7544u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x003603FCu) [[unlikely]] return; }
L_003603FC:
    c.budget -= 1;
L_00360400:
    set32(c.r[4], 0u + 1u);
    st8((c.r[28].w[0] - 23720u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360410u); st8((c.r[28].w[0] - 22084u), static_cast<std::uint8_t>(0u));  call(c, 0x011902A0u, depth + 1u); if (c.pc != 0x00360410u) [[unlikely]] return; }
L_00360410:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360530; } }
L_00360418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360420u);  if (depth < kMaxDepth) unit_00A4(c, 232u, depth + 1u); else { c.pc = 0x00392DA0u; return; } if (c.pc != 0x00360420u) [[unlikely]] return; }
L_00360420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360428u);  call(c, 0x01190820u, depth + 1u); if (c.pc != 0x00360428u) [[unlikely]] return; }
L_00360428:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00360498; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00360450; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00360530; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360530; } }
    c.budget -= 1;
L_00360450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360458u);  call(c, 0x01190570u, depth + 1u); if (c.pc != 0x00360458u) [[unlikely]] return; }
L_00360458:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 22952u));
    set32(c.r[2], 0u + 60u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00360488; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00360530; } }
L_00360488:
    set32(c.r[2], 0u + 5u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00360530; } }
L_00360498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003604A0u);  call(c, 0x01190570u, depth + 1u); if (c.pc != 0x003604A0u) [[unlikely]] return; }
L_003604A0:
    set32(c.r[3], 0u + 5u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 60u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00360530; } }
    c.budget -= 1;
L_003604C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[2], c.r[4].w[0] + 1u);  if (t) { goto L_00360530; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_003604F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_00360530; } }
L_003604F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[2], c.r[4].w[0] + 1u);  if (t) { goto L_00360530; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00360528:
    set32(c.r[16], 0u - 1u);
    c.budget -= 2;
L_00360530:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00360550:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00360A40; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 7600u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00360000u < 16384u) { entry = entries_0098[(t - 0x00360000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00360590:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360598u);  if (depth < kMaxDepth) unit_0097(c, 71u, depth + 1u); else { c.pc = 0x0035CF00u; return; } if (c.pc != 0x00360598u) [[unlikely]] return; }
L_00360598:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00360A40; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003605B8u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 557u, depth + 1u); else { c.pc = 0x00363A10u; return; } if (c.pc != 0x003605B8u) [[unlikely]] return; }
L_003605B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003605C0u);  if (depth < kMaxDepth) unit_0098(c, 601u, depth + 1u); else { c.pc = 0x00363D80u; return; } if (c.pc != 0x003605C0u) [[unlikely]] return; }
L_003605C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003605C8u);  if (depth < kMaxDepth) unit_0098(c, 543u, depth + 1u); else { c.pc = 0x00363880u; return; } if (c.pc != 0x003605C8u) [[unlikely]] return; }
L_003605C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360A40; } }
L_003605D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003605D8u);  if (depth < kMaxDepth) unit_0097(c, 75u, depth + 1u); else { c.pc = 0x0035CF60u; return; } if (c.pc != 0x003605D8u) [[unlikely]] return; }
L_003605D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00360A40; } }
    set32(c.r[2], 0u + 45u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036060Cu); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 608u, depth + 1u); else { c.pc = 0x00363EB0u; return; } if (c.pc != 0x0036060Cu) [[unlikely]] return; }
L_0036060C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360614u);  if (depth < kMaxDepth) unit_0098(c, 610u, depth + 1u); else { c.pc = 0x00363EF0u; return; } if (c.pc != 0x00360614u) [[unlikely]] return; }
L_00360614:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036061Cu);  if (depth < kMaxDepth) unit_0099(c, 13u, depth + 1u); else { c.pc = 0x00364270u; return; } if (c.pc != 0x0036061Cu) [[unlikely]] return; }
L_0036061C:
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360628u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0099(c, 2u, depth + 1u); else { c.pc = 0x00364020u; return; } if (c.pc != 0x00360628u) [[unlikely]] return; }
L_00360628:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360638u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 545u, depth + 1u); else { c.pc = 0x003638B0u; return; } if (c.pc != 0x00360638u) [[unlikely]] return; }
L_00360638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360640u);  if (depth < kMaxDepth) unit_0097(c, 59u, depth + 1u); else { c.pc = 0x0035CDD0u; return; } if (c.pc != 0x00360640u) [[unlikely]] return; }
L_00360640:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360A40; } }
L_00360648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360650u); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x00360650u) [[unlikely]] return; }
L_00360650:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003607C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360668u);  if (depth < kMaxDepth) unit_0098(c, 521u, depth + 1u); else { c.pc = 0x00363640u; return; } if (c.pc != 0x00360668u) [[unlikely]] return; }
L_00360668:
    c.r[3].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00360698; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003606C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360688u);  if (depth < kMaxDepth) unit_0098(c, 518u, depth + 1u); else { c.pc = 0x00363610u; return; } if (c.pc != 0x00360688u) [[unlikely]] return; }
L_00360688:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(0u));  if (t) { goto L_003606C8; } }
    c.budget -= 1;
L_00360698:
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003606C8; } }
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003606C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003606BCu);  if (depth < kMaxDepth) unit_0098(c, 518u, depth + 1u); else { c.pc = 0x00363610u; return; } if (c.pc != 0x003606BCu) [[unlikely]] return; }
L_003606BC:
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_003606C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003606D0u);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x003606D0u) [[unlikely]] return; }
L_003606D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);  if (t) { goto L_00360768; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003606E0u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x003606E0u) [[unlikely]] return; }
L_003606E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003606E8u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x003606E8u) [[unlikely]] return; }
L_003606E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003606F0u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x003606F0u) [[unlikely]] return; }
L_003606F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003606F8u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00020000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x003606F8u) [[unlikely]] return; }
L_003606F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360700u); set32(c.r[4], 0u + 1024u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x00360700u) [[unlikely]] return; }
L_00360700:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00360740; } }
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4968u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 45u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00360A40; } }
    c.budget -= 1;
L_00360740:
    set32(c.r[2], 0u + 7u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 20u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036075Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0098(c, 545u, depth + 1u); else { c.pc = 0x003638B0u; return; } if (c.pc != 0x0036075Cu) [[unlikely]] return; }
L_0036075C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360A40; } }
    c.budget -= 1;
L_00360768:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360770u);  if (depth < kMaxDepth) unit_0098(c, 531u, depth + 1u); else { c.pc = 0x00363760u; return; } if (c.pc != 0x00360770u) [[unlikely]] return; }
L_00360770:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00360A40; } }
    set32(c.r[2], 0u + 7u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 20u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360794u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0098(c, 545u, depth + 1u); else { c.pc = 0x003638B0u; return; } if (c.pc != 0x00360794u) [[unlikely]] return; }
L_00360794:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036079Cu); c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0036079Cu) [[unlikely]] return; }
L_0036079C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003607A4u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x003607A4u) [[unlikely]] return; }
L_003607A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003607ACu); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x003607ACu) [[unlikely]] return; }
L_003607AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003607B4u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00020000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x003607B4u) [[unlikely]] return; }
L_003607B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003607BCu); set32(c.r[4], 0u + 1024u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x003607BCu) [[unlikely]] return; }
L_003607BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360A40; } }
    c.budget -= 1;
L_003607C8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00360A40; } }
L_003607D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 34u);  if (t) { goto L_00360900; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003607F0u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x003607F0u) [[unlikely]] return; }
L_003607F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003607F8u); set32(c.r[4], 0u + 35u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x003607F8u) [[unlikely]] return; }
L_003607F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360800u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x00360800u) [[unlikely]] return; }
L_00360800:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360808u);  if (depth < kMaxDepth) unit_0098(c, 521u, depth + 1u); else { c.pc = 0x00363640u; return; } if (c.pc != 0x00360808u) [[unlikely]] return; }
L_00360808:
    c.r[3].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00360838; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00360868; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360828u);  if (depth < kMaxDepth) unit_0098(c, 518u, depth + 1u); else { c.pc = 0x00363610u; return; } if (c.pc != 0x00360828u) [[unlikely]] return; }
L_00360828:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4968u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00360868; } }
    c.budget -= 1;
L_00360838:
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00360868; } }
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00360868; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036085Cu);  if (depth < kMaxDepth) unit_0098(c, 518u, depth + 1u); else { c.pc = 0x00363610u; return; } if (c.pc != 0x0036085Cu) [[unlikely]] return; }
L_0036085C:
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4968u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00360868:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360870u);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x00360870u) [[unlikely]] return; }
L_00360870:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);  if (t) { goto L_003608B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360880u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x00360880u) [[unlikely]] return; }
L_00360880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360888u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x00360888u) [[unlikely]] return; }
L_00360888:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360890u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x00360890u) [[unlikely]] return; }
L_00360890:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], 0u + 30u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00360A40; } }
    c.budget -= 1;
L_003608B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003608C0u);  if (depth < kMaxDepth) unit_0098(c, 531u, depth + 1u); else { c.pc = 0x00363760u; return; } if (c.pc != 0x003608C0u) [[unlikely]] return; }
L_003608C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 45u);  if (t) { goto L_00360A40; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 9u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003608E4u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x003608E4u) [[unlikely]] return; }
L_003608E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003608ECu); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x003608ECu) [[unlikely]] return; }
L_003608EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003608F4u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x003608F4u) [[unlikely]] return; }
L_003608F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360A40; } }
    c.budget -= 1;
L_00360900:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00360A40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360924u);  if (depth < kMaxDepth) unit_0098(c, 611u, depth + 1u); else { c.pc = 0x00363F10u; return; } if (c.pc != 0x00360924u) [[unlikely]] return; }
L_00360924:
    set32(c.r[4], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360930u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0099(c, 2u, depth + 1u); else { c.pc = 0x00364020u; return; } if (c.pc != 0x00360930u) [[unlikely]] return; }
L_00360930:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360A40; } }
L_00360938:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360940u); set32(c.r[4], 0u + 34u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x00360940u) [[unlikely]] return; }
L_00360940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360948u); set32(c.r[4], 0u + 35u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x00360948u) [[unlikely]] return; }
L_00360948:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[4], 0u + 1024u);  if (t) { goto L_00360A40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360974u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x00360974u) [[unlikely]] return; }
L_00360974:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003609A8; } }
    set32(c.r[2], 0u + 45u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00360A40; } }
    c.budget -= 1;
L_003609A8:
    set32(c.r[2], 0u + 45u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 9u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00360A40; } }
    c.budget -= 1;
L_003609C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003609D0u);  if (depth < kMaxDepth) unit_0098(c, 542u, depth + 1u); else { c.pc = 0x00363870u; return; } if (c.pc != 0x003609D0u) [[unlikely]] return; }
L_003609D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00360A40; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_003609E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_00360A40; } }
L_003609F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003609F8u);  if (depth < kMaxDepth) unit_0098(c, 542u, depth + 1u); else { c.pc = 0x00363870u; return; } if (c.pc != 0x003609F8u) [[unlikely]] return; }
L_003609F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00360A40; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00360A10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_00360A40; } }
L_00360A18:
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360A28u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 610u, depth + 1u); else { c.pc = 0x00363EF0u; return; } if (c.pc != 0x00360A28u) [[unlikely]] return; }
L_00360A28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360A30u);  if (depth < kMaxDepth) unit_0099(c, 13u, depth + 1u); else { c.pc = 0x00364270u; return; } if (c.pc != 0x00360A30u) [[unlikely]] return; }
L_00360A30:
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360A3Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0099(c, 2u, depth + 1u); else { c.pc = 0x00364020u; return; } if (c.pc != 0x00360A3Cu) [[unlikely]] return; }
L_00360A3C:
    c.budget -= 1;
L_00360A40:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00360A60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00360DE0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 7648u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00360000u < 16384u) { entry = entries_0098[(t - 0x00360000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00360AA0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4976u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 54u);  if (t) { goto L_00360AC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360AB8u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x00360AB8u) [[unlikely]] return; }
L_00360AB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360AC8; } }
L_00360AC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360AC8u); set32(c.r[4], 0u + 53u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x00360AC8u) [[unlikely]] return; }
L_00360AC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360AD0u);  if (depth < kMaxDepth) unit_0097(c, 71u, depth + 1u); else { c.pc = 0x0035CF00u; return; } if (c.pc != 0x00360AD0u) [[unlikely]] return; }
L_00360AD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00360DE0; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360AECu); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 543u, depth + 1u); else { c.pc = 0x00363880u; return; } if (c.pc != 0x00360AECu) [[unlikely]] return; }
L_00360AEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360AF4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 557u, depth + 1u); else { c.pc = 0x00363A10u; return; } if (c.pc != 0x00360AF4u) [[unlikely]] return; }
L_00360AF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360DE0; } }
    c.budget -= 1;
L_00360B00:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4976u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 54u);  if (t) { goto L_00360B20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360B18u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x00360B18u) [[unlikely]] return; }
L_00360B18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360B28; } }
L_00360B20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360B28u); set32(c.r[4], 0u + 53u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x00360B28u) [[unlikely]] return; }
L_00360B28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360B30u);  if (depth < kMaxDepth) unit_0097(c, 75u, depth + 1u); else { c.pc = 0x0035CF60u; return; } if (c.pc != 0x00360B30u) [[unlikely]] return; }
L_00360B30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00360DE0; } }
    set32(c.r[2], 0u + 45u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4968u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360B64u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 610u, depth + 1u); else { c.pc = 0x00363EF0u; return; } if (c.pc != 0x00360B64u) [[unlikely]] return; }
L_00360B64:
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360B70u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0099(c, 2u, depth + 1u); else { c.pc = 0x00364020u; return; } if (c.pc != 0x00360B70u) [[unlikely]] return; }
L_00360B70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360B78u);  if (depth < kMaxDepth) unit_0097(c, 59u, depth + 1u); else { c.pc = 0x0035CDD0u; return; } if (c.pc != 0x00360B78u) [[unlikely]] return; }
L_00360B78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360DE0; } }
L_00360B80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360B88u); set32(c.r[4], 0u + 19u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x00360B88u) [[unlikely]] return; }
L_00360B88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360B90u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x00360B90u) [[unlikely]] return; }
L_00360B90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360B98u); set32(c.r[4], 0u + 22u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x00360B98u) [[unlikely]] return; }
L_00360B98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360BA0u); set32(c.r[4], 0u + 21u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x00360BA0u) [[unlikely]] return; }
L_00360BA0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00360CB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360BB8u);  if (depth < kMaxDepth) unit_0098(c, 521u, depth + 1u); else { c.pc = 0x00363640u; return; } if (c.pc != 0x00360BB8u) [[unlikely]] return; }
L_00360BB8:
    c.r[3].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00360BF0; } }
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00360C18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360BDCu);  if (depth < kMaxDepth) unit_0098(c, 518u, depth + 1u); else { c.pc = 0x00363610u; return; } if (c.pc != 0x00360BDCu) [[unlikely]] return; }
L_00360BDC:
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4968u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00360C18; } }
    c.budget -= 1;
L_00360BF0:
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00360C18; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00360C18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360C10u);  if (depth < kMaxDepth) unit_0098(c, 518u, depth + 1u); else { c.pc = 0x00363610u; return; } if (c.pc != 0x00360C10u) [[unlikely]] return; }
L_00360C10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4968u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_00360C18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360C20u);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x00360C20u) [[unlikely]] return; }
L_00360C20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00360C68; } }
    set32(c.r[2], 0u + 30u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360C4Cu); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x00360C4Cu) [[unlikely]] return; }
L_00360C4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360C54u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x00360C54u) [[unlikely]] return; }
L_00360C54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360C5Cu); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x00360C5Cu) [[unlikely]] return; }
L_00360C5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360DE0; } }
    c.budget -= 1;
L_00360C68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360C70u);  if (depth < kMaxDepth) unit_0098(c, 531u, depth + 1u); else { c.pc = 0x00363760u; return; } if (c.pc != 0x00360C70u) [[unlikely]] return; }
L_00360C70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00360DE0; } }
    set32(c.r[2], 0u + 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], 0u + 1024u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360C8Cu); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x00360C8Cu) [[unlikely]] return; }
L_00360C8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360C94u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x00360C94u) [[unlikely]] return; }
L_00360C94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360C9Cu); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x00360C9Cu) [[unlikely]] return; }
L_00360C9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360CA4u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x00360CA4u) [[unlikely]] return; }
L_00360CA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360DE0; } }
    c.budget -= 1;
L_00360CB0:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00360DE0; } }
L_00360CC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360CC8u); set32(c.r[4], 0u + 19u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x00360CC8u) [[unlikely]] return; }
L_00360CC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360CD0u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x00360CD0u) [[unlikely]] return; }
L_00360CD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360CD8u); set32(c.r[4], 0u + 22u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x00360CD8u) [[unlikely]] return; }
L_00360CD8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00360DE0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00360D70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360D10u);  if (depth < kMaxDepth) unit_0098(c, 602u, depth + 1u); else { c.pc = 0x00363D90u; return; } if (c.pc != 0x00360D10u) [[unlikely]] return; }
L_00360D10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[5], 0u + 20u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360D34u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 545u, depth + 1u); else { c.pc = 0x003638B0u; return; } if (c.pc != 0x00360D34u) [[unlikely]] return; }
L_00360D34:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360D44u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x00360D44u) [[unlikely]] return; }
L_00360D44:
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360D54u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x00360D54u) [[unlikely]] return; }
L_00360D54:
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360D64u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x00360D64u) [[unlikely]] return; }
L_00360D64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360DE0; } }
    c.budget -= 1;
L_00360D70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360D78u); set32(c.r[4], 0u + 1024u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x00360D78u) [[unlikely]] return; }
L_00360D78:
    set32(c.r[2], 0u + 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00360DE0; } }
L_00360D88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360D90u);  if (depth < kMaxDepth) unit_0098(c, 542u, depth + 1u); else { c.pc = 0x00363870u; return; } if (c.pc != 0x00360D90u) [[unlikely]] return; }
L_00360D90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00360DE0; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360DACu); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 601u, depth + 1u); else { c.pc = 0x00363D80u; return; } if (c.pc != 0x00360DACu) [[unlikely]] return; }
L_00360DAC:
    c.budget -= 1;
L_00360DB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_00360DE0; } }
L_00360DB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360DC0u);  if (depth < kMaxDepth) unit_0098(c, 542u, depth + 1u); else { c.pc = 0x00363870u; return; } if (c.pc != 0x00360DC0u) [[unlikely]] return; }
L_00360DC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00360DE0; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00360DD8:
    set32(c.r[16], 0u - 1u);
    c.budget -= 2;
L_00360DE0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00360E00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360E20u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 523u, depth + 1u); else { c.pc = 0x00363660u; return; } if (c.pc != 0x00360E20u) [[unlikely]] return; }
L_00360E20:
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00360E50; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.r[2].d[0] = c.r[2].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00360E58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_00360E58; } }
L_00360E50:
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_00360E58:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00360E70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u + 22u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003613F8; } }
    set32(c.r[2], 0u + 21u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; set32(c.r[5], 0u + 20u);  if (t) { goto L_003613D0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[2], 0u + 103u);  if (t) { goto L_003613A8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_003613A0; } }
    set32(c.r[2], 0u + 102u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 101u);  if (t) { goto L_00361378; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 100u);  if (t) { goto L_00361350; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[4].d[0]; set32(c.r[2], 0u + 15u);  if (t) { goto L_003612E0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 8u);  if (t) { goto L_00361290; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 11u);  if (t) { goto L_00361238; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_003611F0; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_00361188; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 10u);  if (t) { goto L_003610C0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_00361078; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_00361010; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_00360FE0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_00360FB8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_00360F78; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00360F38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00361400; } }
L_00360F38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360F40u);  if (depth < kMaxDepth) unit_0097(c, 62u, depth + 1u); else { c.pc = 0x0035CE00u; return; } if (c.pc != 0x00360F40u) [[unlikely]] return; }
L_00360F40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00361400; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360F60u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 557u, depth + 1u); else { c.pc = 0x00363A10u; return; } if (c.pc != 0x00360F60u) [[unlikely]] return; }
L_00360F60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360F68u);  if (depth < kMaxDepth) unit_0098(c, 543u, depth + 1u); else { c.pc = 0x00363880u; return; } if (c.pc != 0x00360F68u) [[unlikely]] return; }
L_00360F68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360F70u);  if (depth < kMaxDepth) unit_004E(c, 43u, depth + 1u); else { c.pc = 0x00238470u; return; } if (c.pc != 0x00360F70u) [[unlikely]] return; }
L_00360F70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00361400; } }
L_00360F78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360F80u);  if (depth < kMaxDepth) unit_0097(c, 69u, depth + 1u); else { c.pc = 0x0035CEC0u; return; } if (c.pc != 0x00360F80u) [[unlikely]] return; }
L_00360F80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00361400; } }
    st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4981u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00361400; } }
    c.budget -= 1;
L_00360FB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360FC0u);  if (depth < kMaxDepth) unit_0097(c, 71u, depth + 1u); else { c.pc = 0x0035CF00u; return; } if (c.pc != 0x00360FC0u) [[unlikely]] return; }
L_00360FC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00361400; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00361400; } }
    c.budget -= 1;
L_00360FE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360FE8u);  if (depth < kMaxDepth) unit_0097(c, 75u, depth + 1u); else { c.pc = 0x0035CF60u; return; } if (c.pc != 0x00360FE8u) [[unlikely]] return; }
L_00360FE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00361400; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 2;
L_00360FF8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361004u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 5u, depth + 1u); else { c.pc = 0x00238040u; return; } if (c.pc != 0x00361004u) [[unlikely]] return; }
L_00361004:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00361400; } }
    c.budget -= 1;
L_00361010:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036101Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 545u, depth + 1u); else { c.pc = 0x003638B0u; return; } if (c.pc != 0x0036101Cu) [[unlikely]] return; }
L_0036101C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00361400; } }
    set32(c.r[2], 0u + 10u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 45u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361054u); st32((c.r[1].w[0] + 5088u), 0u);  if (depth < kMaxDepth) unit_0098(c, 608u, depth + 1u); else { c.pc = 0x00363EB0u; return; } if (c.pc != 0x00361054u) [[unlikely]] return; }
L_00361054:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036105Cu);  if (depth < kMaxDepth) unit_0098(c, 610u, depth + 1u); else { c.pc = 0x00363EF0u; return; } if (c.pc != 0x0036105Cu) [[unlikely]] return; }
L_0036105C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361064u);  if (depth < kMaxDepth) unit_0099(c, 5u, depth + 1u); else { c.pc = 0x00364100u; return; } if (c.pc != 0x00361064u) [[unlikely]] return; }
L_00361064:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036106Cu);  if (depth < kMaxDepth) unit_0099(c, 4u, depth + 1u); else { c.pc = 0x003640E0u; return; } if (c.pc != 0x0036106Cu) [[unlikely]] return; }
L_0036106C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00361400; } }
    c.budget -= 1;
L_00361078:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00361400; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4981u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00361400; } }
L_003610C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003610CCu); set32(c.r[4], c.r[4].w[0] + 4970u);  if (depth < kMaxDepth) unit_0098(c, 183u, depth + 1u); else { c.pc = 0x00360E00u; return; } if (c.pc != 0x003610CCu) [[unlikely]] return; }
L_003610CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003610E0; } }
    set32(c.r[2], 0u + 61u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_003610E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], c.r[4].w[0] + 4963u);
    set32(c.r[5], c.r[5].w[0] + 4966u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003610FCu); set32(c.r[6], c.r[6].w[0] + 4964u);  call(c, 0x011EF7C0u, depth + 1u); if (c.pc != 0x003610FCu) [[unlikely]] return; }
L_003610FC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00361148; } }
    set32(c.r[2], 0u + 15u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4981u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361138u); st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));  call(c, 0x011EF7B0u, depth + 1u); if (c.pc != 0x00361138u) [[unlikely]] return; }
L_00361138:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 5088u), c.r[2].w[0]);  if (t) { goto L_00361400; } }
    c.budget -= 1;
L_00361148:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00361400; } }
    set32(c.r[2], 0u + 11u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4981u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00361400; } }
    c.budget -= 1;
L_00361188:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00361400; } }
    set32(c.r[4], 0u + 16384u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003611C8u); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x003611C8u) [[unlikely]] return; }
L_003611C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003611D0u); c.r[4].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x003611D0u) [[unlikely]] return; }
L_003611D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003611D8u); c.r[4].sd[0] = static_cast<std::int32_t>(0x02000000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x003611D8u) [[unlikely]] return; }
L_003611D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003611E0u); set32(c.r[4], 0u + 8192u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x003611E0u) [[unlikely]] return; }
L_003611E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003611E8u); set32(c.r[4], 0u + 1024u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x003611E8u) [[unlikely]] return; }
L_003611E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00361400; } }
L_003611F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00361400; } }
    set32(c.r[4], 0u + 8192u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361230u); st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x00361230u) [[unlikely]] return; }
L_00361230:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00361400; } }
L_00361238:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00361400; } }
    set32(c.r[2], 0u + 630u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 420u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036127Cu); st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 610u, depth + 1u); else { c.pc = 0x00363EF0u; return; } if (c.pc != 0x0036127Cu) [[unlikely]] return; }
L_0036127C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361284u);  if (depth < kMaxDepth) unit_0099(c, 6u, depth + 1u); else { c.pc = 0x00364180u; return; } if (c.pc != 0x00361284u) [[unlikely]] return; }
L_00361284:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00361400; } }
    c.budget -= 1;
L_00361290:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00361400; } }
    set32(c.r[2], 0u + 9u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 90u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4981u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00361400; } }
L_003612E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[2], c.r[6].w[0] + 1u);  if (t) { goto L_00361310; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00361400; } }
L_00361310:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00361400; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361334u);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x00361334u) [[unlikely]] return; }
L_00361334:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00361400; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00361400; } }
L_00361350:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036135Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0098(c, 545u, depth + 1u); else { c.pc = 0x003638B0u; return; } if (c.pc != 0x0036135Cu) [[unlikely]] return; }
L_0036135C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00361400; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00361400; } }
L_00361378:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361380u);  if (depth < kMaxDepth) unit_0098(c, 542u, depth + 1u); else { c.pc = 0x00363870u; return; } if (c.pc != 0x00361380u) [[unlikely]] return; }
L_00361380:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00361400; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036139Cu); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 601u, depth + 1u); else { c.pc = 0x00363D80u; return; } if (c.pc != 0x0036139Cu) [[unlikely]] return; }
L_0036139C:
    c.budget -= 1;
L_003613A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_00361400; } }
L_003613A8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003613B4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0098(c, 545u, depth + 1u); else { c.pc = 0x003638B0u; return; } if (c.pc != 0x003613B4u) [[unlikely]] return; }
L_003613B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00361400; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00361400; } }
L_003613D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003613D8u);  if (depth < kMaxDepth) unit_0098(c, 542u, depth + 1u); else { c.pc = 0x00363870u; return; } if (c.pc != 0x003613D8u) [[unlikely]] return; }
L_003613D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00361400; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003613F4u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 601u, depth + 1u); else { c.pc = 0x00363D80u; return; } if (c.pc != 0x003613F4u) [[unlikely]] return; }
L_003613F4:
    c.budget -= 1;
L_003613F8:
    set32(c.r[16], 0u + 1u);
    c.budget -= 2;
L_00361400:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00361420:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00360E70u | kUnwind; return; } goto L_00360E70; }
L_00361430:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00361780; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 7680u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00360000u < 16384u) { entry = entries_0098[(t - 0x00360000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00361470:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361478u);  if (depth < kMaxDepth) unit_0097(c, 71u, depth + 1u); else { c.pc = 0x0035CF00u; return; } if (c.pc != 0x00361478u) [[unlikely]] return; }
L_00361478:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00361780; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361494u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 560u, depth + 1u); else { c.pc = 0x00363A40u; return; } if (c.pc != 0x00361494u) [[unlikely]] return; }
L_00361494:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036149Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 557u, depth + 1u); else { c.pc = 0x00363A10u; return; } if (c.pc != 0x0036149Cu) [[unlikely]] return; }
L_0036149C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003614A4u);  if (depth < kMaxDepth) unit_0098(c, 543u, depth + 1u); else { c.pc = 0x00363880u; return; } if (c.pc != 0x003614A4u) [[unlikely]] return; }
L_003614A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00361780; } }
    c.budget -= 1;
L_003614B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003614B8u);  if (depth < kMaxDepth) unit_0097(c, 75u, depth + 1u); else { c.pc = 0x0035CF60u; return; } if (c.pc != 0x003614B8u) [[unlikely]] return; }
L_003614B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00361780; } }
    set32(c.r[2], 0u + 45u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003614E0u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 611u, depth + 1u); else { c.pc = 0x00363F10u; return; } if (c.pc != 0x003614E0u) [[unlikely]] return; }
L_003614E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003614E8u);  if (depth < kMaxDepth) unit_0097(c, 59u, depth + 1u); else { c.pc = 0x0035CDD0u; return; } if (c.pc != 0x003614E8u) [[unlikely]] return; }
L_003614E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00361780; } }
L_003614F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[2], c.r[4].w[0] + 1u);  if (t) { goto L_00361780; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361520u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008B(c, 268u, depth + 1u); else { c.pc = 0x0032F890u; return; } if (c.pc != 0x00361520u) [[unlikely]] return; }
L_00361520:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00361780; } }
L_00361528:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361530u); set32(c.r[4], 0u + 36u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x00361530u) [[unlikely]] return; }
L_00361530:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361538u);  if (depth < kMaxDepth) unit_008B(c, 269u, depth + 1u); else { c.pc = 0x0032F8A0u; return; } if (c.pc != 0x00361538u) [[unlikely]] return; }
L_00361538:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_003615B0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00361588; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00361560; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00361780; } }
L_00361560:
    set32(c.r[2], 0u + 300u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00361780; } }
    c.budget -= 1;
L_00361588:
    set32(c.r[2], 0u + 5u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 10u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003615A4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0098(c, 545u, depth + 1u); else { c.pc = 0x003638B0u; return; } if (c.pc != 0x003615A4u) [[unlikely]] return; }
L_003615A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00361780; } }
    c.budget -= 1;
L_003615B0:
    set32(c.r[2], 0u + 7u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 300u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00361780; } }
    c.budget -= 1;
L_003615D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003615D8u); set32(c.r[4], 0u + 37u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x003615D8u) [[unlikely]] return; }
L_003615D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00361628; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036161Cu); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 545u, depth + 1u); else { c.pc = 0x003638B0u; return; } if (c.pc != 0x0036161Cu) [[unlikely]] return; }
L_0036161C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00361780; } }
    c.budget -= 1;
L_00361628:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.r[1].d[0] = c.r[2].sd[0] < 241ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00361780; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361644u);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x00361644u) [[unlikely]] return; }
L_00361644:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00361780; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036166Cu); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 545u, depth + 1u); else { c.pc = 0x003638B0u; return; } if (c.pc != 0x0036166Cu) [[unlikely]] return; }
L_0036166C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00361780; } }
    c.budget -= 1;
L_00361678:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361680u);  if (depth < kMaxDepth) unit_0098(c, 542u, depth + 1u); else { c.pc = 0x00363870u; return; } if (c.pc != 0x00361680u) [[unlikely]] return; }
    goto L_00361680;
L_0036167C:
    c.budget -= 1;
L_00361680:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00361780; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036169Cu); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 601u, depth + 1u); else { c.pc = 0x00363D80u; return; } if (c.pc != 0x0036169Cu) [[unlikely]] return; }
L_0036169C:
    c.budget -= 1;
L_003616A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_00361780; } }
L_003616A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003616B0u); set32(c.r[4], 0u + 38u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x003616B0u) [[unlikely]] return; }
L_003616B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00361700; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003616F4u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 545u, depth + 1u); else { c.pc = 0x003638B0u; return; } if (c.pc != 0x003616F4u) [[unlikely]] return; }
L_003616F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00361780; } }
    c.budget -= 1;
L_00361700:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.r[1].d[0] = c.r[2].sd[0] < 241ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00361780; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036171Cu);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x0036171Cu) [[unlikely]] return; }
L_0036171C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00361780; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361744u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 545u, depth + 1u); else { c.pc = 0x003638B0u; return; } if (c.pc != 0x00361744u) [[unlikely]] return; }
L_00361744:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00361780; } }
    c.budget -= 1;
L_00361750:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361758u);  if (depth < kMaxDepth) unit_0098(c, 542u, depth + 1u); else { c.pc = 0x00363870u; return; } if (c.pc != 0x00361758u) [[unlikely]] return; }
L_00361758:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00361780; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361774u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 602u, depth + 1u); else { c.pc = 0x00363D90u; return; } if (c.pc != 0x00361774u) [[unlikely]] return; }
L_00361774:
    c.budget -= 1;
L_00361778:
    set32(c.r[16], 0u - 1u);
    c.budget -= 2;
L_00361780:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003617A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00361978; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 7728u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00360000u < 16384u) { entry = entries_0098[(t - 0x00360000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003617E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00F80000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 4990u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00361810; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5000u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_00361810; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00361978; } }
    c.budget -= 1;
L_00361810:
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00F80000u);
    st8((c.r[1].w[0] - 4990u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
L_00361830:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361838u);  if (depth < kMaxDepth) unit_0097(c, 71u, depth + 1u); else { c.pc = 0x0035CF00u; return; } if (c.pc != 0x00361838u) [[unlikely]] return; }
L_00361838:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00361978; } }
    c.r[4].d[0] = 0ull + 0ull;
    st16((c.r[1].w[0] + 4968u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361860u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 557u, depth + 1u); else { c.pc = 0x00363A10u; return; } if (c.pc != 0x00361860u) [[unlikely]] return; }
L_00361860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361868u);  if (depth < kMaxDepth) unit_0098(c, 543u, depth + 1u); else { c.pc = 0x00363880u; return; } if (c.pc != 0x00361868u) [[unlikely]] return; }
L_00361868:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00361978; } }
L_00361870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361878u);  if (depth < kMaxDepth) unit_0097(c, 75u, depth + 1u); else { c.pc = 0x0035CF60u; return; } if (c.pc != 0x00361878u) [[unlikely]] return; }
L_00361878:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00361978; } }
    set32(c.r[2], 0u + 45u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003618A0u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 608u, depth + 1u); else { c.pc = 0x00363EB0u; return; } if (c.pc != 0x003618A0u) [[unlikely]] return; }
L_003618A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003618A8u);  if (depth < kMaxDepth) unit_0098(c, 610u, depth + 1u); else { c.pc = 0x00363EF0u; return; } if (c.pc != 0x003618A8u) [[unlikely]] return; }
L_003618A8:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003618B8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 545u, depth + 1u); else { c.pc = 0x003638B0u; return; } if (c.pc != 0x003618B8u) [[unlikely]] return; }
L_003618B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00361978; } }
L_003618C0:
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00361978; } }
L_003618D0:
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00361978; } }
L_003618E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003618E8u);  if (depth < kMaxDepth) unit_009F(c, 229u, depth + 1u); else { c.pc = 0x0037DD00u; return; } if (c.pc != 0x003618E8u) [[unlikely]] return; }
L_003618E8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00361918; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00361910; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00361978; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00361978; } }
    c.budget -= 1;
L_00361910:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5000u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00361918:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 20u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036193Cu); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 545u, depth + 1u); else { c.pc = 0x003638B0u; return; } if (c.pc != 0x0036193Cu) [[unlikely]] return; }
L_0036193C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00361978; } }
    c.budget -= 1;
L_00361948:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361950u);  if (depth < kMaxDepth) unit_0098(c, 542u, depth + 1u); else { c.pc = 0x00363870u; return; } if (c.pc != 0x00361950u) [[unlikely]] return; }
L_00361950:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00361978; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036196Cu); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 601u, depth + 1u); else { c.pc = 0x00363D80u; return; } if (c.pc != 0x0036196Cu) [[unlikely]] return; }
L_0036196C:
    c.budget -= 1;
L_00361970:
    set32(c.r[16], 0u + 1u);
    c.budget -= 2;
L_00361978:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00361990:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00361C30; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 7760u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00360000u < 16384u) { entry = entries_0098[(t - 0x00360000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003619D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00F80000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 4990u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00F80000u);  if (t) { goto L_00361A68; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 22844u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 4996u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00361A68; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 4980u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00F80000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 5002u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00361A68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F70000u);
    set32(c.r[4], c.r[4].w[0] + 4995u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361A1Cu); c.r[5].d[0] = c.r[2].d[0] | 60535ull;  if (depth < kMaxDepth) unit_0007(c, 117u, depth + 1u); else { c.pc = 0x0011DB40u; return; } if (c.pc != 0x00361A1Cu) [[unlikely]] return; }
L_00361A1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00361A68; } }
    set32(c.r[2], 0u + 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 8u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361A40u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x00361A40u) [[unlikely]] return; }
L_00361A40:
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361A50u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x00361A50u) [[unlikely]] return; }
L_00361A50:
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361A60u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x00361A60u) [[unlikely]] return; }
L_00361A60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00361C30; } }
L_00361A68:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[7].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F70000u);
    c.r[4].d[0] = c.r[2].d[0] | 60535ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[5], c.r[5].w[0] + 4995u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[2], c.r[7].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00F80000u);
    st8((c.r[1].w[0] - 4990u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 22844u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00F80000u);
    st8((c.r[1].w[0] - 4996u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 4980u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00F80000u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361ABCu); st8((c.r[1].w[0] - 5002u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00361ABCu) [[unlikely]] return; }
L_00361ABC:
    c.budget -= 1;
L_00361AC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361AC8u);  if (depth < kMaxDepth) unit_0097(c, 71u, depth + 1u); else { c.pc = 0x0035CF00u; return; } if (c.pc != 0x00361AC8u) [[unlikely]] return; }
L_00361AC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00361C30; } }
    c.r[4].d[0] = 0ull + 0ull;
    st16((c.r[1].w[0] + 4968u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361AF0u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 557u, depth + 1u); else { c.pc = 0x00363A10u; return; } if (c.pc != 0x00361AF0u) [[unlikely]] return; }
L_00361AF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361AF8u);  if (depth < kMaxDepth) unit_0098(c, 543u, depth + 1u); else { c.pc = 0x00363880u; return; } if (c.pc != 0x00361AF8u) [[unlikely]] return; }
L_00361AF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00361C30; } }
L_00361B00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361B08u);  if (depth < kMaxDepth) unit_0097(c, 75u, depth + 1u); else { c.pc = 0x0035CF60u; return; } if (c.pc != 0x00361B08u) [[unlikely]] return; }
L_00361B08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00361C30; } }
    set32(c.r[2], 0u + 45u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361B30u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 608u, depth + 1u); else { c.pc = 0x00363EB0u; return; } if (c.pc != 0x00361B30u) [[unlikely]] return; }
L_00361B30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361B38u);  if (depth < kMaxDepth) unit_0098(c, 610u, depth + 1u); else { c.pc = 0x00363EF0u; return; } if (c.pc != 0x00361B38u) [[unlikely]] return; }
L_00361B38:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361B48u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 545u, depth + 1u); else { c.pc = 0x003638B0u; return; } if (c.pc != 0x00361B48u) [[unlikely]] return; }
L_00361B48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00361C30; } }
L_00361B50:
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00361C30; } }
L_00361B60:
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00361C30; } }
L_00361B70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361B78u);  if (depth < kMaxDepth) unit_009F(c, 229u, depth + 1u); else { c.pc = 0x0037DD00u; return; } if (c.pc != 0x00361B78u) [[unlikely]] return; }
L_00361B78:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00361BA0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00361BA0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00361C30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00361C30; } }
    c.budget -= 1;
L_00361BA0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 20u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361BC4u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 545u, depth + 1u); else { c.pc = 0x003638B0u; return; } if (c.pc != 0x00361BC4u) [[unlikely]] return; }
L_00361BC4:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361BD4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x00361BD4u) [[unlikely]] return; }
L_00361BD4:
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361BE4u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x00361BE4u) [[unlikely]] return; }
L_00361BE4:
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361BF4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x00361BF4u) [[unlikely]] return; }
L_00361BF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00361C30; } }
    c.budget -= 1;
L_00361C00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361C08u);  if (depth < kMaxDepth) unit_0098(c, 542u, depth + 1u); else { c.pc = 0x00363870u; return; } if (c.pc != 0x00361C08u) [[unlikely]] return; }
L_00361C08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00361C30; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361C24u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 601u, depth + 1u); else { c.pc = 0x00363D80u; return; } if (c.pc != 0x00361C24u) [[unlikely]] return; }
L_00361C24:
    c.budget -= 1;
L_00361C28:
    set32(c.r[16], 0u + 1u);
    c.budget -= 2;
L_00361C30:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00361C50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5098u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(c.r[2].w[0]));  [[clang::musttail]] return unit_00A0(c, 270u, depth); }
L_00361C70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5097u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(56ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003635F0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 7792u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00360000u < 16384u) { entry = entries_0098[(t - 0x00360000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00361CB0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 5098u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00361D70; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00361D48; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00361CE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003635F0; } }
    c.budget -= 1;
L_00361CE0:
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[1].w[0] + 5098u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4981u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5086u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361D0Cu); st32((c.r[1].w[0] + 5088u), 0u);  if (depth < kMaxDepth) unit_0098(c, 552u, depth + 1u); else { c.pc = 0x003639A0u; return; } if (c.pc != 0x00361D0Cu) [[unlikely]] return; }
L_00361D0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361D14u);  if (depth < kMaxDepth) unit_0098(c, 556u, depth + 1u); else { c.pc = 0x00363A00u; return; } if (c.pc != 0x00361D14u) [[unlikely]] return; }
L_00361D14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361D1Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 557u, depth + 1u); else { c.pc = 0x00363A10u; return; } if (c.pc != 0x00361D1Cu) [[unlikely]] return; }
L_00361D1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361D24u);  if (depth < kMaxDepth) unit_0098(c, 543u, depth + 1u); else { c.pc = 0x00363880u; return; } if (c.pc != 0x00361D24u) [[unlikely]] return; }
L_00361D24:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01CE0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01CD0000u);
    c.r[4].d[0] = c.r[3].d[0] | 8192ull;
    c.r[5].d[0] = c.r[2].d[0] | 8192ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361D3Cu); c.r[6].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00361D3Cu) [[unlikely]] return; }
L_00361D3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003635F0; } }
    c.budget -= 1;
L_00361D48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361D50u);  if (depth < kMaxDepth) unit_0097(c, 71u, depth + 1u); else { c.pc = 0x0035CF00u; return; } if (c.pc != 0x00361D50u) [[unlikely]] return; }
L_00361D50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003635F0; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5098u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5098u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003635F0; } }
    c.budget -= 1;
L_00361D70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361D78u);  if (depth < kMaxDepth) unit_0097(c, 75u, depth + 1u); else { c.pc = 0x0035CF60u; return; } if (c.pc != 0x00361D78u) [[unlikely]] return; }
L_00361D78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003635F0; } }
    goto L_00361D80;
L_00361D7C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 1;
L_00361D80:
    st8((c.r[1].w[0] + 5098u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5097u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361D9Cu); st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 608u, depth + 1u); else { c.pc = 0x00363EB0u; return; } if (c.pc != 0x00361D9Cu) [[unlikely]] return; }
L_00361D9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361DA4u);  if (depth < kMaxDepth) unit_0098(c, 610u, depth + 1u); else { c.pc = 0x00363EF0u; return; } if (c.pc != 0x00361DA4u) [[unlikely]] return; }
L_00361DA4:
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003635F0; } }
    c.budget -= 1;
L_00361DB8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003635F0; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[1].w[0] + 5098u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5099u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(0u));  if (t) { goto L_003635F0; } }
L_00361E10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361E18u);  if (depth < kMaxDepth) unit_00AA(c, 293u, depth + 1u); else { c.pc = 0x003ABB30u; return; } if (c.pc != 0x00361E18u) [[unlikely]] return; }
L_00361E18:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[6], 0u + 1u);  if (t) { goto L_00361E90; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_00361E40; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003635F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003635F0; } }
    c.budget -= 1;
L_00361E40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5087u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[2], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[5], 0u + 20u);
    st8((c.r[1].w[0] + 5098u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_00361E58:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5081u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361E84u); st32((c.r[28].w[0] - 22512u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0098(c, 545u, depth + 1u); else { c.pc = 0x003638B0u; return; } if (c.pc != 0x00361E84u) [[unlikely]] return; }
L_00361E84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003635F0; } }
    c.budget -= 1;
L_00361E90:
    set32(c.r[2], 0u + 40u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003635F0; } }
    c.budget -= 1;
L_00361EB0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 5098u));
    set32(c.r[2], 0u + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_00361FA0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_00361F78; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00361F50; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00361F28; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00361EF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003635F0; } }
    c.budget -= 1;
L_00361EF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361EF8u);  if (depth < kMaxDepth) unit_0098(c, 542u, depth + 1u); else { c.pc = 0x00363870u; return; } if (c.pc != 0x00361EF8u) [[unlikely]] return; }
L_00361EF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003635F0; } }
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 5098u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361F20u); st8((c.r[1].w[0] + 5098u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 601u, depth + 1u); else { c.pc = 0x00363D80u; return; } if (c.pc != 0x00361F20u) [[unlikely]] return; }
L_00361F20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003635F0; } }
L_00361F28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361F30u);  if (depth < kMaxDepth) unit_0097(c, 62u, depth + 1u); else { c.pc = 0x0035CE00u; return; } if (c.pc != 0x00361F30u) [[unlikely]] return; }
L_00361F30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003635F0; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5098u));
    c.budget -= 1;
L_00361F3C:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5098u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003635F0; } }
    c.budget -= 1;
L_00361F50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361F58u);  if (depth < kMaxDepth) unit_0097(c, 69u, depth + 1u); else { c.pc = 0x0035CEC0u; return; } if (c.pc != 0x00361F58u) [[unlikely]] return; }
L_00361F58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003635F0; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5098u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5098u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003635F0; } }
    c.budget -= 1;
L_00361F78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361F80u);  if (depth < kMaxDepth) unit_0097(c, 71u, depth + 1u); else { c.pc = 0x0035CF00u; return; } if (c.pc != 0x00361F80u) [[unlikely]] return; }
L_00361F80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003635F0; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5098u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5098u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003635F0; } }
    c.budget -= 1;
L_00361FA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361FA8u);  if (depth < kMaxDepth) unit_0097(c, 75u, depth + 1u); else { c.pc = 0x0035CF60u; return; } if (c.pc != 0x00361FA8u) [[unlikely]] return; }
L_00361FA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003635F0; } }
    set32(c.r[2], 0u + 20u);
    st8((c.r[1].w[0] + 5098u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5097u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361FD8u); st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 608u, depth + 1u); else { c.pc = 0x00363EB0u; return; } if (c.pc != 0x00361FD8u) [[unlikely]] return; }
L_00361FD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361FE0u);  if (depth < kMaxDepth) unit_0098(c, 610u, depth + 1u); else { c.pc = 0x00363EF0u; return; } if (c.pc != 0x00361FE0u) [[unlikely]] return; }
L_00361FE0:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361FF0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 545u, depth + 1u); else { c.pc = 0x003638B0u; return; } if (c.pc != 0x00361FF0u) [[unlikely]] return; }
L_00361FF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003635F0; } }
L_00361FF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362000u); set32(c.r[4], 0u + 88u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x00362000u) [[unlikely]] return; }
L_00362000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362008u); set32(c.r[4], 0u + 9u);  if (depth < kMaxDepth) unit_0099(c, 22u, depth + 1u); else { c.pc = 0x00364460u; return; } if (c.pc != 0x00362008u) [[unlikely]] return; }
L_00362008:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003635F0; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00E50000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00E60000u);
    st8((c.r[1].w[0] + 4981u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st32((c.r[1].w[0] + 5088u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00900000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] + 1784u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362080u); st32((c.r[1].w[0] + 5092u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00362080u) [[unlikely]] return; }
L_00362080:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003635F0; } }
L_00362088:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5087u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 88u);  if (t) { goto L_003620B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003620A0u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x003620A0u) [[unlikely]] return; }
L_003620A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003620A8u); set32(c.r[4], 0u + 9u);  if (depth < kMaxDepth) unit_0099(c, 22u, depth + 1u); else { c.pc = 0x00364460u; return; } if (c.pc != 0x003620A8u) [[unlikely]] return; }
L_003620A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003620B8; } }
L_003620B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003620B8u); set32(c.r[4], 0u + 98u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x003620B8u) [[unlikely]] return; }
L_003620B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[7], ld32((c.r[1].w[0] + 5092u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01CE0000u);
    set32(c.r[4], c.r[4].w[0] + 5099u);
    set32(c.r[5], c.r[5].w[0] + 4966u);
    c.r[6].d[0] = c.r[2].d[0] | 8192ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003620E0u); c.r[8].sd[0] = static_cast<std::int32_t>(0x00010000u);  call(c, 0x01D1DB30u, depth + 1u); if (c.pc != 0x003620E0u) [[unlikely]] return; }
L_003620E0:
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003621A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01CD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00E60000u);
    c.r[5].d[0] = c.r[2].d[0] | 8192ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362100u); c.r[6].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00362100u) [[unlikely]] return; }
L_00362100:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01CE0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00E50000u);
    c.r[5].d[0] = c.r[2].d[0] | 8192ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362114u); c.r[6].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00362114u) [[unlikely]] return; }
L_00362114:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01CF0000u);
    set32(c.r[4], c.r[4].w[0] + 1768u);
    c.r[5].d[0] = c.r[2].d[0] | 8200ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036212Cu); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x0036212Cu) [[unlikely]] return; }
L_0036212C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01CF0000u);
    set32(c.r[4], c.r[4].w[0] + 1780u);
    c.r[5].d[0] = c.r[2].d[0] | 8212ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362144u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x00362144u) [[unlikely]] return; }
L_00362144:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01CF0000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] + 8216u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036215Cu); st32((c.r[1].w[0] + 1784u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_007F(c, 170u, depth + 1u); else { c.pc = 0x002FEDB0u; return; } if (c.pc != 0x0036215Cu) [[unlikely]] return; }
L_0036215C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 180u);
    st8((c.r[1].w[0] + 5098u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4981u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5099u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5097u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003635F0; } }
    c.budget -= 1;
L_003621A8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003635F0; } }
    set32(c.r[2], 0u + 34u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4981u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5098u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003621ECu); st8((c.r[1].w[0] + 5099u), static_cast<std::uint8_t>(0u));  call(c, 0x01D1D9C0u, depth + 1u); if (c.pc != 0x003621ECu) [[unlikely]] return; }
L_003621EC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 5088u), c.r[2].w[0]);  if (t) { goto L_003635F0; } }
L_003621F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5087u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 88u);  if (t) { goto L_00362220; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362210u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x00362210u) [[unlikely]] return; }
L_00362210:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362218u); set32(c.r[4], 0u + 9u);  if (depth < kMaxDepth) unit_0099(c, 22u, depth + 1u); else { c.pc = 0x00364460u; return; } if (c.pc != 0x00362218u) [[unlikely]] return; }
L_00362218:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00362228; } }
L_00362220:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362228u); set32(c.r[4], 0u + 98u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x00362228u) [[unlikely]] return; }
L_00362228:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00362278; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5097u));
    set32(c.r[5], 0u + 20u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036226Cu); st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 545u, depth + 1u); else { c.pc = 0x003638B0u; return; } if (c.pc != 0x0036226Cu) [[unlikely]] return; }
L_0036226C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003635F0; } }
    c.budget -= 1;
L_00362278:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.r[1].d[0] = c.r[2].sd[0] < 120ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003635F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362294u);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x00362294u) [[unlikely]] return; }
L_00362294:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003635F0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5097u));
    set32(c.r[5], 0u + 20u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003622BCu); st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 545u, depth + 1u); else { c.pc = 0x003638B0u; return; } if (c.pc != 0x003622BCu) [[unlikely]] return; }
L_003622BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003635F0; } }
    c.budget -= 1;
L_003622C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003622D0u);  if (depth < kMaxDepth) unit_0098(c, 542u, depth + 1u); else { c.pc = 0x00363870u; return; } if (c.pc != 0x003622D0u) [[unlikely]] return; }
L_003622D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003635F0; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5097u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003622ECu); st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 601u, depth + 1u); else { c.pc = 0x00363D80u; return; } if (c.pc != 0x003622ECu) [[unlikely]] return; }
L_003622EC:
    c.budget -= 1;
L_003622F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_003635F0; } }
L_003622F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5098u));
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_00362348; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362320; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003635F0; } }
    c.budget -= 1;
L_00362320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362328u);  if (depth < kMaxDepth) unit_0097(c, 62u, depth + 1u); else { c.pc = 0x0035CE00u; return; } if (c.pc != 0x00362328u) [[unlikely]] return; }
L_00362328:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003635F0; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5098u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5098u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003635F0; } }
    c.budget -= 1;
L_00362348:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362350u);  if (depth < kMaxDepth) unit_0097(c, 69u, depth + 1u); else { c.pc = 0x0035CEC0u; return; } if (c.pc != 0x00362350u) [[unlikely]] return; }
L_00362350:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003635F0; } }
    set32(c.r[2], 0u + 11u);
    st8((c.r[1].w[0] + 5098u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362374u); st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0098(c, 610u, depth + 1u); else { c.pc = 0x00363EF0u; return; } if (c.pc != 0x00362374u) [[unlikely]] return; }
L_00362374:
    set32(c.r[4], 0u + 11u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362380u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0099(c, 2u, depth + 1u); else { c.pc = 0x00364020u; return; } if (c.pc != 0x00362380u) [[unlikely]] return; }
L_00362380:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003635F0; } }
L_00362388:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 5098u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_00362410; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_003623F0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003623B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003635F0; } }
    c.budget -= 1;
L_003623B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003623C0u);  if (depth < kMaxDepth) unit_0098(c, 542u, depth + 1u); else { c.pc = 0x00363870u; return; } if (c.pc != 0x003623C0u) [[unlikely]] return; }
L_003623C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003635F0; } }
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 5098u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003623E8u); st8((c.r[1].w[0] + 5098u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 601u, depth + 1u); else { c.pc = 0x00363D80u; return; } if (c.pc != 0x003623E8u) [[unlikely]] return; }
L_003623E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003635F0; } }
L_003623F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003623F8u);  if (depth < kMaxDepth) unit_0097(c, 62u, depth + 1u); else { c.pc = 0x0035CE00u; return; } if (c.pc != 0x003623F8u) [[unlikely]] return; }
L_003623F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00362410; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5098u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5098u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00362410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362418u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0097(c, 69u, depth + 1u); else { c.pc = 0x0035CEC0u; return; } if (c.pc != 0x00362418u) [[unlikely]] return; }
L_00362418:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003635F0; } }
    set32(c.r[2], 0u + 30u);
    st8((c.r[1].w[0] + 5098u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5097u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362450u); st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 608u, depth + 1u); else { c.pc = 0x00363EB0u; return; } if (c.pc != 0x00362450u) [[unlikely]] return; }
L_00362450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362458u);  if (depth < kMaxDepth) unit_0098(c, 610u, depth + 1u); else { c.pc = 0x00363EF0u; return; } if (c.pc != 0x00362458u) [[unlikely]] return; }
L_00362458:
    set32(c.r[4], 0u + 11u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362464u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0099(c, 2u, depth + 1u); else { c.pc = 0x00364020u; return; } if (c.pc != 0x00362464u) [[unlikely]] return; }
L_00362464:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362474u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 545u, depth + 1u); else { c.pc = 0x003638B0u; return; } if (c.pc != 0x00362474u) [[unlikely]] return; }
L_00362474:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003635F0; } }
    c.budget -= 1;
L_00362480:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362488u); set32(c.r[4], 0u + 89u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x00362488u) [[unlikely]] return; }
L_00362488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362490u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x00362490u) [[unlikely]] return; }
L_00362490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362498u); set32(c.r[4], 0u + 10u);  if (depth < kMaxDepth) unit_0099(c, 22u, depth + 1u); else { c.pc = 0x00364460u; return; } if (c.pc != 0x00362498u) [[unlikely]] return; }
L_00362498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003624A0u); set32(c.r[4], 0u + 11u);  if (depth < kMaxDepth) unit_0099(c, 22u, depth + 1u); else { c.pc = 0x00364460u; return; } if (c.pc != 0x003624A0u) [[unlikely]] return; }
L_003624A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003635F0; } }
    set32(c.r[2], 0u + 7200u);
    st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5097u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003635F0; } }
    c.budget -= 1;
L_003624F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003624F8u); set32(c.r[4], 0u + 89u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x003624F8u) [[unlikely]] return; }
L_003624F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362500u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x00362500u) [[unlikely]] return; }
L_00362500:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362508u); set32(c.r[4], 0u + 10u);  if (depth < kMaxDepth) unit_0099(c, 22u, depth + 1u); else { c.pc = 0x00364460u; return; } if (c.pc != 0x00362508u) [[unlikely]] return; }
L_00362508:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362510u); set32(c.r[4], 0u + 11u);  if (depth < kMaxDepth) unit_0099(c, 22u, depth + 1u); else { c.pc = 0x00364460u; return; } if (c.pc != 0x00362510u) [[unlikely]] return; }
L_00362510:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362518u);  if (depth < kMaxDepth) unit_0098(c, 521u, depth + 1u); else { c.pc = 0x00363640u; return; } if (c.pc != 0x00362518u) [[unlikely]] return; }
L_00362518:
    c.r[3].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00362548; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362570; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036253Cu); st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0098(c, 518u, depth + 1u); else { c.pc = 0x00363610u; return; } if (c.pc != 0x0036253Cu) [[unlikely]] return; }
L_0036253C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00362570; } }
    c.budget -= 1;
L_00362548:
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00362570; } }
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00362570; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362570u); st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 518u, depth + 1u); else { c.pc = 0x00363610u; return; } if (c.pc != 0x00362570u) [[unlikely]] return; }
L_00362570:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362578u);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x00362578u) [[unlikely]] return; }
L_00362578:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);  if (t) { goto L_003625E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362588u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x00362588u) [[unlikely]] return; }
L_00362588:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362590u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x00362590u) [[unlikely]] return; }
L_00362590:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362598u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x00362598u) [[unlikely]] return; }
L_00362598:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003625C8; } }
    set32(c.r[2], 0u + 20u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 5097u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003635F0; } }
L_003625C8:
    set32(c.r[2], 0u + 50u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003635F0; } }
    c.budget -= 1;
L_003625E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003625F0u);  if (depth < kMaxDepth) unit_0098(c, 531u, depth + 1u); else { c.pc = 0x00363760u; return; } if (c.pc != 0x003625F0u) [[unlikely]] return; }
L_003625F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);  if (t) { goto L_003635F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362600u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x00362600u) [[unlikely]] return; }
L_00362600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362608u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x00362608u) [[unlikely]] return; }
L_00362608:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362610u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 606u, depth + 1u); else { c.pc = 0x00363E50u; return; } if (c.pc != 0x00362610u) [[unlikely]] return; }
L_00362610:
    set32(c.r[3], 0u + 50u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003635F0; } }
    c.budget -= 1;
L_00362630:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362638u); set32(c.r[4], 0u + 89u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x00362638u) [[unlikely]] return; }
L_00362638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362640u); set32(c.r[4], 0u + 10u);  if (depth < kMaxDepth) unit_0099(c, 22u, depth + 1u); else { c.pc = 0x00364460u; return; } if (c.pc != 0x00362640u) [[unlikely]] return; }
L_00362640:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362648u); set32(c.r[4], 0u + 11u);  if (depth < kMaxDepth) unit_0099(c, 22u, depth + 1u); else { c.pc = 0x00364460u; return; } if (c.pc != 0x00362648u) [[unlikely]] return; }
L_00362648:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003635F0; } }
    set32(c.r[2], 0u + 20u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 5097u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003635F0; } }
    c.budget -= 1;
L_00362690:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362698u); set32(c.r[4], 0u + 90u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x00362698u) [[unlikely]] return; }
L_00362698:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003635F0; } }
    st8((c.r[1].w[0] + 5099u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5097u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003626D8u); st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 558u, depth + 1u); else { c.pc = 0x00363A20u; return; } if (c.pc != 0x003626D8u) [[unlikely]] return; }
L_003626D8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003626E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008E(c, 337u, depth + 1u); else { c.pc = 0x0033B920u; return; } if (c.pc != 0x003626E4u) [[unlikely]] return; }
L_003626E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003635F0; } }
    c.budget -= 1;
L_003626F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003626F8u); set32(c.r[4], 0u + 90u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x003626F8u) [[unlikely]] return; }
L_003626F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362700u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_009F(c, 225u, depth + 1u); else { c.pc = 0x0037DC40u; return; } if (c.pc != 0x00362700u) [[unlikely]] return; }
L_00362700:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003635F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F50000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 5097u));
    c.r[4].d[0] = c.r[2].d[0] | 59392ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 22512u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362730u); st8((c.r[1].w[0] + 5081u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008F(c, 83u, depth + 1u); else { c.pc = 0x0033D350u; return; } if (c.pc != 0x00362730u) [[unlikely]] return; }
L_00362730:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[6].d[0] = 0ull + 0ull;
    st16((c.r[1].w[0] + 5082u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5081u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362750u); c.r[5].d[0] = c.r[2].d[0] | 12288ull;  if (depth < kMaxDepth) unit_008F(c, 18u, depth + 1u); else { c.pc = 0x0033C490u; return; } if (c.pc != 0x00362750u) [[unlikely]] return; }
L_00362750:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003635F0; } }
L_00362758:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362760u); set32(c.r[4], 0u + 90u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x00362760u) [[unlikely]] return; }
L_00362760:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362768u);  if (depth < kMaxDepth) unit_008E(c, 341u, depth + 1u); else { c.pc = 0x0033B9D0u; return; } if (c.pc != 0x00362768u) [[unlikely]] return; }
L_00362768:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362770u);  if (depth < kMaxDepth) unit_008F(c, 78u, depth + 1u); else { c.pc = 0x0033D2E0u; return; } if (c.pc != 0x00362770u) [[unlikely]] return; }
L_00362770:
    set32(c.r[3], 0u - 255u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 252u);  if (t) { goto L_00362818; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003627F0; } }
    set32(c.r[3], 0u - 253u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 256u);  if (t) { goto L_003627F0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003627F0; } }
    set32(c.r[3], 0u - 254u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003627F0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u - 251u);  if (t) { goto L_003627C0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003627C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003635F0; } }
    c.budget -= 1;
L_003627C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 5097u));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003627E4u); st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 602u, depth + 1u); else { c.pc = 0x00363D90u; return; } if (c.pc != 0x003627E4u) [[unlikely]] return; }
L_003627E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003635F0; } }
    c.budget -= 1;
L_003627F0:
    set32(c.r[2], 0u + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5086u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003635F0; } }
L_00362818:
    set32(c.r[2], 0u + 30u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 5u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5086u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003635F0; } }
L_00362840:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[3], c.r[2].w[0] + 1u);  if (t) { goto L_003635F0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036287Cu); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 610u, depth + 1u); else { c.pc = 0x00363EF0u; return; } if (c.pc != 0x0036287Cu) [[unlikely]] return; }
L_0036287C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003635F0; } }
    c.budget -= 1;
L_00362888:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003635F0; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[1].w[0] + 5099u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4981u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003628ECu); st32((c.r[1].w[0] + 5088u), 0u);  if (depth < kMaxDepth) unit_0099(c, 5u, depth + 1u); else { c.pc = 0x00364100u; return; } if (c.pc != 0x003628ECu) [[unlikely]] return; }
L_003628EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003628F4u);  if (depth < kMaxDepth) unit_0099(c, 4u, depth + 1u); else { c.pc = 0x003640E0u; return; } if (c.pc != 0x003628F4u) [[unlikely]] return; }
L_003628F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003635F0; } }
    c.budget -= 1;
L_00362900:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036290Cu); set32(c.r[4], c.r[4].w[0] + 4970u);  if (depth < kMaxDepth) unit_0098(c, 183u, depth + 1u); else { c.pc = 0x00360E00u; return; } if (c.pc != 0x0036290Cu) [[unlikely]] return; }
L_0036290C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362920; } }
    set32(c.r[2], 0u + 61u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00362920:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], c.r[4].w[0] + 5099u);
    set32(c.r[5], c.r[5].w[0] + 4966u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036293Cu); set32(c.r[6], c.r[6].w[0] + 4964u);  call(c, 0x011EF7D0u, depth + 1u); if (c.pc != 0x0036293Cu) [[unlikely]] return; }
L_0036293C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00362990; } }
    set32(c.r[2], 0u + 34u);
    st8((c.r[1].w[0] + 5098u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4981u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5099u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362980u); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(0u));  call(c, 0x011EF7B0u, depth + 1u); if (c.pc != 0x00362980u) [[unlikely]] return; }
L_00362980:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 5088u), c.r[2].w[0]);  if (t) { goto L_003635F0; } }
    c.budget -= 1;
L_00362990:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003635F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01CD0000u);
    st8((c.r[1].w[0] + 5098u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[2].d[0] | 8192ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01CE0000u);
    st8((c.r[1].w[0] + 5099u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = c.r[2].d[0] | 8192ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 5097u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] - 4504u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003629E8u); st32((c.r[1].w[0] + 5092u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x003629E8u) [[unlikely]] return; }
L_003629E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003635F0; } }
L_003629F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 5098u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00362A40; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00362A18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003635F0; } }
    c.budget -= 1;
L_00362A18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362A20u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0097(c, 62u, depth + 1u); else { c.pc = 0x0035CE00u; return; } if (c.pc != 0x00362A20u) [[unlikely]] return; }
L_00362A20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003635F0; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5098u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5098u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003635F0; } }
    c.budget -= 1;
L_00362A40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362A48u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0097(c, 69u, depth + 1u); else { c.pc = 0x0035CEC0u; return; } if (c.pc != 0x00362A48u) [[unlikely]] return; }
L_00362A48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003635F0; } }
    st8((c.r[1].w[0] + 5098u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5097u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003635F0; } }
    c.budget -= 1;
L_00362A70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[7], ld32((c.r[1].w[0] + 5092u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01CD0000u);
    set32(c.r[4], c.r[4].w[0] + 5099u);
    set32(c.r[5], c.r[5].w[0] + 4966u);
    c.r[6].d[0] = c.r[2].d[0] | 8192ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362A98u); c.r[8].sd[0] = static_cast<std::int32_t>(0x00010000u);  call(c, 0x01D1D9D0u, depth + 1u); if (c.pc != 0x00362A98u) [[unlikely]] return; }
L_00362A98:
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00362AE8; } }
    set32(c.r[3], 0u + 22u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 228u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4981u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5098u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5099u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01CF0000u);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 8216u), c.r[2].w[0]);  if (t) { goto L_003635F0; } }
L_00362AE8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003635F0; } }
    set32(c.r[2], 0u + 34u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4981u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5098u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362B2Cu); st8((c.r[1].w[0] + 5099u), static_cast<std::uint8_t>(0u));  call(c, 0x01D1D9C0u, depth + 1u); if (c.pc != 0x00362B2Cu) [[unlikely]] return; }
L_00362B2C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 5088u), c.r[2].w[0]);  if (t) { goto L_003635F0; } }
L_00362B38:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[3], c.r[2].w[0] + 1u);  if (t) { goto L_00362BA0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], 0u + 16384u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362B78u); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x00362B78u) [[unlikely]] return; }
L_00362B78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362B80u); c.r[4].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x00362B80u) [[unlikely]] return; }
L_00362B80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362B88u); c.r[4].sd[0] = static_cast<std::int32_t>(0x02000000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x00362B88u) [[unlikely]] return; }
L_00362B88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362B90u); set32(c.r[4], 0u + 8192u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x00362B90u) [[unlikely]] return; }
L_00362B90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362B98u); set32(c.r[4], 0u + 1024u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x00362B98u) [[unlikely]] return; }
L_00362B98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003635F0; } }
L_00362BA0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    c.r[1].d[0] = c.r[2].sd[0] < 121ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003635F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362BBCu);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x00362BBCu) [[unlikely]] return; }
L_00362BBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003635F0; } }
    set32(c.r[2], 0u + 20u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 5097u));
    set32(c.r[4], 0u + 16384u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362BE8u); st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x00362BE8u) [[unlikely]] return; }
L_00362BE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362BF0u); c.r[4].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x00362BF0u) [[unlikely]] return; }
L_00362BF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362BF8u); c.r[4].sd[0] = static_cast<std::int32_t>(0x02000000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x00362BF8u) [[unlikely]] return; }
L_00362BF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362C00u); set32(c.r[4], 0u + 8192u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x00362C00u) [[unlikely]] return; }
L_00362C00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362C08u); set32(c.r[4], 0u + 1024u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x00362C08u) [[unlikely]] return; }
L_00362C08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003635F0; } }
L_00362C10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003635F0; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362C50u); st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0098(c, 610u, depth + 1u); else { c.pc = 0x00363EF0u; return; } if (c.pc != 0x00362C50u) [[unlikely]] return; }
L_00362C50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01CF0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[5], c.r[5].w[0] - 4500u);
    c.r[4].d[0] = c.r[2].d[0] | 8200ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362C68u); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x00362C68u) [[unlikely]] return; }
L_00362C68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01CF0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[5], c.r[5].w[0] - 4484u);
    c.r[4].d[0] = c.r[2].d[0] | 8212ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362C80u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x00362C80u) [[unlikely]] return; }
L_00362C80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362C88u);  if (depth < kMaxDepth) unit_00A0(c, 270u, depth + 1u); else { c.pc = 0x00382700u; return; } if (c.pc != 0x00362C88u) [[unlikely]] return; }
L_00362C88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003635F0; } }
L_00362C90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362C98u);  if (depth < kMaxDepth) unit_00A0(c, 221u, depth + 1u); else { c.pc = 0x00381EC0u; return; } if (c.pc != 0x00362C98u) [[unlikely]] return; }
L_00362C98:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00362D18; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00362CB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003635F0; } }
    c.budget -= 1;
L_00362CB8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5099u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01CE0000u);
    set32(c.r[3], 0u + 5u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[2].d[0] | 8192ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01CF0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01CD0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 8216u)));
    c.r[5].d[0] = c.r[2].d[0] | 8192ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st32((c.r[1].w[0] + 5092u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362CFCu); st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00362CFCu) [[unlikely]] return; }
L_00362CFC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[1].w[0] + 5088u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4981u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003635F0; } }
    c.budget -= 1;
L_00362D18:
    set32(c.r[2], 0u + 25u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003635F0; } }
    c.budget -= 1;
L_00362D38:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003635F0; } }
    set32(c.r[2], 0u + 9u);
    st8((c.r[1].w[0] + 5098u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(0u));  if (t) { goto L_003635F0; } }
    c.budget -= 1;
L_00362D88:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003635F0; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 300u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 5u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5086u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003635F0; } }
    c.budget -= 1;
L_00362DD8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5086u)));
    set32(c.r[2], c.r[2].w[0] + 88u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362DECu); c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x00362DECu) [[unlikely]] return; }
L_00362DEC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[3], 0u + 40u);  if (t) { goto L_00362E28; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003635F0; } }
L_00362E28:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.r[1].d[0] = c.r[2].sd[0] < 181ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003635F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362E44u);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x00362E44u) [[unlikely]] return; }
L_00362E44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 40u);  if (t) { goto L_003635F0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003635F0; } }
    c.budget -= 1;
L_00362E68:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[2], 0u + 31u);  if (t) { goto L_003635F0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 300u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 6u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5086u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003635F0; } }
L_00362EB0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[2], 0u + 31u);  if (t) { goto L_003635F0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 300u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 7u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5086u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003635F0; } }
L_00362EF8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003635F0; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 90u);
    st8((c.r[1].w[0] + 4981u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 8192u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362F48u); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x00362F48u) [[unlikely]] return; }
L_00362F48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003635F0; } }
L_00362F50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[3], c.r[2].w[0] + 1u);  if (t) { goto L_003635F0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], 0u + 16384u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362F90u); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x00362F90u) [[unlikely]] return; }
L_00362F90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362F98u); c.r[4].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x00362F98u) [[unlikely]] return; }
L_00362F98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362FA0u); c.r[4].sd[0] = static_cast<std::int32_t>(0x02000000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x00362FA0u) [[unlikely]] return; }
L_00362FA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362FA8u); set32(c.r[4], 0u + 1024u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x00362FA8u) [[unlikely]] return; }
L_00362FA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003635F0; } }
L_00362FB0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[3], c.r[2].w[0] + 1u);  if (t) { goto L_003635F0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362FECu); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 610u, depth + 1u); else { c.pc = 0x00363EF0u; return; } if (c.pc != 0x00362FECu) [[unlikely]] return; }
L_00362FEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362FF4u);  if (depth < kMaxDepth) unit_0099(c, 6u, depth + 1u); else { c.pc = 0x00364180u; return; } if (c.pc != 0x00362FF4u) [[unlikely]] return; }
L_00362FF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003635F0; } }
    c.budget -= 1;
L_00363000:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003635F0; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 630u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 420u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003635F0; } }
    c.budget -= 1;
L_00363050:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003630A0; } }
    set32(c.r[2], 0u + 50u);
    st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(0u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x04000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363098u); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x00363098u) [[unlikely]] return; }
L_00363098:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003635F0; } }
L_003630A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003635F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003630C4u);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x003630C4u) [[unlikely]] return; }
L_003630C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003635F0; } }
    set32(c.r[2], 0u + 50u);
    st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(0u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x04000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003630F0u); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x003630F0u) [[unlikely]] return; }
L_003630F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003635F0; } }
L_003630F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[3], c.r[2].w[0] + 1u);  if (t) { goto L_003635F0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[5], 0u + 1u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 11u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363144u); st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_0099(c, 2u, depth + 1u); else { c.pc = 0x00364020u; return; } if (c.pc != 0x00363144u) [[unlikely]] return; }
L_00363144:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003635F0; } }
    c.budget -= 1;
L_00363150:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363158u); set32(c.r[4], 0u + 92u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x00363158u) [[unlikely]] return; }
L_00363158:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363160u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x00363160u) [[unlikely]] return; }
L_00363160:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003635F0; } }
    set32(c.r[2], 0u + 7200u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 5097u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003635F0; } }
    c.budget -= 1;
L_003631A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003631B0u); set32(c.r[4], 0u + 92u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x003631B0u) [[unlikely]] return; }
L_003631B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003631B8u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x003631B8u) [[unlikely]] return; }
L_003631B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003631C0u);  if (depth < kMaxDepth) unit_0098(c, 521u, depth + 1u); else { c.pc = 0x00363640u; return; } if (c.pc != 0x003631C0u) [[unlikely]] return; }
L_003631C0:
    c.r[3].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003631F0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00363218; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003631E4u); st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0098(c, 518u, depth + 1u); else { c.pc = 0x00363610u; return; } if (c.pc != 0x003631E4u) [[unlikely]] return; }
L_003631E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00363218; } }
    c.budget -= 1;
L_003631F0:
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00363218; } }
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00363218; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363218u); st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 518u, depth + 1u); else { c.pc = 0x00363610u; return; } if (c.pc != 0x00363218u) [[unlikely]] return; }
L_00363218:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363220u);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x00363220u) [[unlikely]] return; }
L_00363220:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);  if (t) { goto L_003632A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363230u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x00363230u) [[unlikely]] return; }
L_00363230:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363238u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x00363238u) [[unlikely]] return; }
L_00363238:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363240u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x00363240u) [[unlikely]] return; }
L_00363240:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00363280; } }
    set32(c.r[5], 0u + 20u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5097u));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363278u); st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 545u, depth + 1u); else { c.pc = 0x003638B0u; return; } if (c.pc != 0x00363278u) [[unlikely]] return; }
L_00363278:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003635F0; } }
L_00363280:
    set32(c.r[2], 0u + 45u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003635F0; } }
    c.budget -= 1;
L_003632A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003632A8u);  if (depth < kMaxDepth) unit_0098(c, 531u, depth + 1u); else { c.pc = 0x00363760u; return; } if (c.pc != 0x003632A8u) [[unlikely]] return; }
L_003632A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);  if (t) { goto L_003635F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003632B8u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x003632B8u) [[unlikely]] return; }
L_003632B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003632C0u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x003632C0u) [[unlikely]] return; }
L_003632C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003632C8u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 606u, depth + 1u); else { c.pc = 0x00363E50u; return; } if (c.pc != 0x003632C8u) [[unlikely]] return; }
L_003632C8:
    set32(c.r[3], 0u + 45u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003635F0; } }
    c.budget -= 1;
L_003632E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003632F0u);  if (depth < kMaxDepth) unit_0098(c, 542u, depth + 1u); else { c.pc = 0x00363870u; return; } if (c.pc != 0x003632F0u) [[unlikely]] return; }
L_003632F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003635F0; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5097u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036330Cu); st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 601u, depth + 1u); else { c.pc = 0x00363D80u; return; } if (c.pc != 0x0036330Cu) [[unlikely]] return; }
L_0036330C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003635F0; } }
    c.budget -= 1;
L_00363318:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_003635F0; } }
L_00363320:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003635F0; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003635F0; } }
    c.budget -= 1;
L_00363368:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003635F0; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 1u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 11u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003633BCu); st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0099(c, 2u, depth + 1u); else { c.pc = 0x00364020u; return; } if (c.pc != 0x003633BCu) [[unlikely]] return; }
L_003633BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003635F0; } }
    c.budget -= 1;
L_003633C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003633D0u); set32(c.r[4], 0u + 91u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x003633D0u) [[unlikely]] return; }
L_003633D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003633D8u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x003633D8u) [[unlikely]] return; }
L_003633D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003635F0; } }
    set32(c.r[2], 0u + 7200u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 5097u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003635F0; } }
    c.budget -= 1;
L_00363420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363428u); set32(c.r[4], 0u + 91u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x00363428u) [[unlikely]] return; }
L_00363428:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363430u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x00363430u) [[unlikely]] return; }
L_00363430:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363438u);  if (depth < kMaxDepth) unit_0098(c, 521u, depth + 1u); else { c.pc = 0x00363640u; return; } if (c.pc != 0x00363438u) [[unlikely]] return; }
L_00363438:
    c.r[3].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00363468; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00363490; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036345Cu); st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0098(c, 518u, depth + 1u); else { c.pc = 0x00363610u; return; } if (c.pc != 0x0036345Cu) [[unlikely]] return; }
L_0036345C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00363490; } }
    c.budget -= 1;
L_00363468:
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00363490; } }
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00363490; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363490u); st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 518u, depth + 1u); else { c.pc = 0x00363610u; return; } if (c.pc != 0x00363490u) [[unlikely]] return; }
L_00363490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363498u);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x00363498u) [[unlikely]] return; }
L_00363498:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);  if (t) { goto L_00363518; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003634A8u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x003634A8u) [[unlikely]] return; }
L_003634A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003634B0u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x003634B0u) [[unlikely]] return; }
L_003634B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003634B8u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x003634B8u) [[unlikely]] return; }
L_003634B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 1024u);  if (t) { goto L_003634F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003634D0u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x003634D0u) [[unlikely]] return; }
L_003634D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 20u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 5097u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003635F0; } }
    c.budget -= 1;
L_003634F8:
    set32(c.r[2], 0u + 55u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003635F0; } }
    c.budget -= 1;
L_00363518:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363520u);  if (depth < kMaxDepth) unit_0098(c, 531u, depth + 1u); else { c.pc = 0x00363760u; return; } if (c.pc != 0x00363520u) [[unlikely]] return; }
L_00363520:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);  if (t) { goto L_003635F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363530u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x00363530u) [[unlikely]] return; }
L_00363530:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363538u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x00363538u) [[unlikely]] return; }
L_00363538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363540u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 606u, depth + 1u); else { c.pc = 0x00363E50u; return; } if (c.pc != 0x00363540u) [[unlikely]] return; }
L_00363540:
    set32(c.r[3], 0u + 55u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003635F0; } }
    c.budget -= 1;
L_00363560:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003635F0; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363594u); st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 601u, depth + 1u); else { c.pc = 0x00363D80u; return; } if (c.pc != 0x00363594u) [[unlikely]] return; }
L_00363594:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003635F0; } }
    c.budget -= 1;
L_003635A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_003635F0; } }
L_003635A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003635F0; } }
    set32(c.r[2], 0u + 9u);
    st8((c.r[1].w[0] + 5098u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
L_003635F0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00363610:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { set32(c.r[5], 0u + 166u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002393D0u | kUnwind; return; } [[clang::musttail]] return unit_004E(c, 106u, depth); }
L_00363620:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { set32(c.r[5], 0u + 165u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002393D0u | kUnwind; return; } [[clang::musttail]] return unit_004E(c, 106u, depth); }
L_00363630:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { set32(c.r[5], 0u + 167u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002393D0u | kUnwind; return; } [[clang::musttail]] return unit_004E(c, 106u, depth); }
L_00363640:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363650u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x00363650u) [[unlikely]] return; }
L_00363650:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00363660:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 28344u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00363698; } }
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + 9536u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
L_00363698:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003636A0:
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.budget -= 3;
    { c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002276D0u | kUnwind; return; } [[clang::musttail]] return unit_0049(c, 381u, depth); }
L_003636B0:
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.budget -= 3;
    { c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00227750u | kUnwind; return; } [[clang::musttail]] return unit_0049(c, 383u, depth); }
L_003636C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 28344u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00363700; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003636E8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0098(c, 524u, depth + 1u); else { c.pc = 0x003636A0u; return; } if (c.pc != 0x003636E8u) [[unlikely]] return; }
L_003636E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00363700; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003636F8u);  if (depth < kMaxDepth) unit_0098(c, 519u, depth + 1u); else { c.pc = 0x00363620u; return; } if (c.pc != 0x003636F8u) [[unlikely]] return; }
L_003636F8:
    set32(c.r[16], 0u + 1u);
    c.budget -= 2;
L_00363700:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00363720:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 28344u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0036374C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363748u);  if (depth < kMaxDepth) unit_0098(c, 524u, depth + 1u); else { c.pc = 0x003636A0u; return; } if (c.pc != 0x00363748u) [[unlikely]] return; }
L_00363748:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0036374C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00363760:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 28344u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003637A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363788u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0098(c, 525u, depth + 1u); else { c.pc = 0x003636B0u; return; } if (c.pc != 0x00363788u) [[unlikely]] return; }
L_00363788:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003637A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363798u);  if (depth < kMaxDepth) unit_0098(c, 520u, depth + 1u); else { c.pc = 0x00363630u; return; } if (c.pc != 0x00363798u) [[unlikely]] return; }
L_00363798:
    set32(c.r[16], 0u + 1u);
    c.budget -= 2;
L_003637A0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003637C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003637D0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0098(c, 521u, depth + 1u); else { c.pc = 0x00363640u; return; } if (c.pc != 0x003637D0u) [[unlikely]] return; }
L_003637D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.r[16].d[0] = ld8((c.r[1].w[0] + 5001u));
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003637E8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 389u, depth + 1u); else { c.pc = 0x002278E0u; return; } if (c.pc != 0x003637E8u) [[unlikely]] return; }
L_003637E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5001u));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00363808; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363808u);  if (depth < kMaxDepth) unit_0098(c, 518u, depth + 1u); else { c.pc = 0x00363610u; return; } if (c.pc != 0x00363808u) [[unlikely]] return; }
L_00363808:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363810u);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x00363810u) [[unlikely]] return; }
L_00363810:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00363830; } }
    set32(c.r[2], 0u - 1u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 5001u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; if (c.r[4].d[0] == 0) c.r[2].d[0] = c.r[3].d[0];  if (t) { goto L_00363840; } }
    c.budget -= 1;
L_00363830:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363838u);  if (depth < kMaxDepth) unit_0098(c, 531u, depth + 1u); else { c.pc = 0x00363760u; return; } if (c.pc != 0x00363838u) [[unlikely]] return; }
L_00363838:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 2;
L_00363840:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00363850:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00363860:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0099(c, 58u, depth); }
L_00363870:
    set32(c.r[2], ld32((c.r[28].w[0] - 22508u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_00363880:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 22508u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_003638A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036389Cu); set32(c.r[5], 0u + 255u);  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x0036389Cu) [[unlikely]] return; }
L_0036389C:
    c.budget -= 1;
L_003638A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003638B0:
    set32(c.r[3], 0u + 255u);
    c.r[2].d[0] = c.r[4].d[0] << 48;
    mmi::div(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 24664u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.lo.d[0];
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003638F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 196u, depth + 1u); else { c.pc = 0x0021B320u; return; } if (c.pc != 0x003638F4u) [[unlikely]] return; }
L_003638F4:
    set32(c.r[3], c.r[16].w[0] + 1u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[28].w[0] - 22508u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00363910:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363924u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0098(c, 601u, depth + 1u); else { c.pc = 0x00363D80u; return; } if (c.pc != 0x00363924u) [[unlikely]] return; }
L_00363924:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] + 4880u);
    c.budget -= 3;
L_00363930:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_00363978; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00363950; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036394Cu);  if (depth < kMaxDepth) unit_008A(c, 60u, depth + 1u); else { c.pc = 0x003290E0u; return; } if (c.pc != 0x0036394Cu) [[unlikely]] return; }
L_0036394C:
    c.budget -= 1;
L_00363950:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[4], c.r[3].w[0] >> 16);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00363970; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363970u);  if (depth < kMaxDepth) unit_008A(c, 64u, depth + 1u); else { c.pc = 0x003291C0u; return; } if (c.pc != 0x00363970u) [[unlikely]] return; }
L_00363970:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 2;
L_00363978:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00363930u | kUnwind; return; } goto L_00363930; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003639A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003639B4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0098(c, 547u, depth + 1u); else { c.pc = 0x00363910u; return; } if (c.pc != 0x003639B4u) [[unlikely]] return; }
L_003639B4:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[16], 0u + 1u);
    set32(c.r[17], c.r[17].w[0] + 24672u);
    c.budget -= 3;
L_003639C0:
    set32(c.r[6], ld32((c.r[17].w[0])));
    set32(c.r[7], ld32((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003639D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 43u, depth + 1u); else { c.pc = 0x003A85D0u; return; } if (c.pc != 0x003639D8u) [[unlikely]] return; }
L_003639D8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003639C0u | kUnwind; return; } goto L_003639C0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00363A00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00363A10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00363A20:
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[5].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033B920u | kUnwind; return; } [[clang::musttail]] return unit_008E(c, 337u, depth); }
L_00363A30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00363A40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00363A50:
    set32(c.r[29], c.r[29].w[0] - 256u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], 0u + 128u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363A74u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00363A74u) [[unlikely]] return; }
L_00363A74:
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_00363CC8; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 8080u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00360000u < 16384u) { entry = entries_0098[(t - 0x00360000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00363A98:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363AA8u); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00363AA8u) [[unlikely]] return; }
L_00363AA8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] + 8016u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363AC0u); set32(c.r[6], c.r[6].w[0] + 4982u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x00363AC0u) [[unlikely]] return; }
L_00363AC0:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363ACCu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0099(c, 26u, depth + 1u); else { c.pc = 0x00364550u; return; } if (c.pc != 0x00363ACCu) [[unlikely]] return; }
L_00363ACC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00363CC8; } }
    c.budget -= 1;
L_00363AD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F70000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363AE8u); c.r[5].d[0] = c.r[2].d[0] | 59744ull;  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00363AE8u) [[unlikely]] return; }
L_00363AE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00363CC8; } }
L_00363AF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F70000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363AFCu); c.r[4].d[0] = c.r[2].d[0] | 59755ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00363AFCu) [[unlikely]] return; }
L_00363AFC:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00363CC8; } }
    set32(c.r[2], 0u + 42u);
    st8((c.r[29].w[0] + 80u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 81u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 82u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 83u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 84u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 85u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 86u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 87u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00363CC8; } }
    c.budget -= 1;
L_00363B38:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 4980u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_00363B60; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363B54u); set32(c.r[5], c.r[5].w[0] + 8024u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00363B54u) [[unlikely]] return; }
L_00363B54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00363CC8; } }
    c.budget -= 1;
L_00363B60:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363B70u); set32(c.r[5], c.r[5].w[0] + 8032u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00363B70u) [[unlikely]] return; }
L_00363B70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00363CC8; } }
L_00363B78:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 4980u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 240u);  if (t) { goto L_00363CC8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363B94u); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00363B94u) [[unlikely]] return; }
L_00363B94:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[5].w[0] + 8016u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363BACu); set32(c.r[6], c.r[6].w[0] + 4995u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x00363BACu) [[unlikely]] return; }
L_00363BAC:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363BB8u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0099(c, 26u, depth + 1u); else { c.pc = 0x00364550u; return; } if (c.pc != 0x00363BB8u) [[unlikely]] return; }
L_00363BB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00363CC8; } }
L_00363BC0:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363BD0u); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00363BD0u) [[unlikely]] return; }
L_00363BD0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363BE8u); set32(c.r[5], c.r[5].w[0] + 8040u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x00363BE8u) [[unlikely]] return; }
L_00363BE8:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363BF4u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0099(c, 26u, depth + 1u); else { c.pc = 0x00364550u; return; } if (c.pc != 0x00363BF4u) [[unlikely]] return; }
L_00363BF4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363C04u); set32(c.r[5], c.r[5].w[0] + 8048u);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011D880u; return; } if (c.pc != 0x00363C04u) [[unlikely]] return; }
L_00363C04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00363CC8; } }
    c.budget -= 1;
L_00363C10:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[6], 0u + 21u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363C24u); set32(c.r[5], c.r[2].w[0] + 92u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00363C24u) [[unlikely]] return; }
L_00363C24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00363CC8; } }
    c.budget -= 1;
L_00363C30:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[5].w[0] + 5060u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363C44u); set32(c.r[6], 0u + 21u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00363C44u) [[unlikely]] return; }
L_00363C44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00363CC8; } }
    c.budget -= 1;
L_00363C50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[6], ld32((c.r[1].w[0] + 5088u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363C68u); set32(c.r[5], c.r[5].w[0] + 8056u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x00363C68u) [[unlikely]] return; }
L_00363C68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00363CC8; } }
L_00363C70:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363C80u); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00363C80u) [[unlikely]] return; }
L_00363C80:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], c.r[5].w[0] - 4484u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363C94u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x00363C94u) [[unlikely]] return; }
L_00363C94:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363CA4u); set32(c.r[5], c.r[5].w[0] + 8072u);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011D880u; return; } if (c.pc != 0x00363CA4u) [[unlikely]] return; }
L_00363CA4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[29].w[0] + 210u);
    set32(c.r[5], c.r[5].w[0] - 4483u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363CB8u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x00363CB8u) [[unlikely]] return; }
L_00363CB8:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363CC4u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0099(c, 26u, depth + 1u); else { c.pc = 0x00364550u; return; } if (c.pc != 0x00363CC4u) [[unlikely]] return; }
L_00363CC4:
    c.budget -= 1;
L_00363CC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[16], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 24726u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363CE0u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00AA(c, 48u, depth + 1u); else { c.pc = 0x003A8750u; return; } if (c.pc != 0x00363CE0u) [[unlikely]] return; }
L_00363CE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 24724u);
    set32(c.r[17], c.r[2].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363CF8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 45u, depth + 1u); else { c.pc = 0x003A8700u; return; } if (c.pc != 0x00363CF8u) [[unlikely]] return; }
L_00363CF8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + 24720u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00363D48; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363D20u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_009A(c, 9u, depth + 1u); else { c.pc = 0x00368180u; return; } if (c.pc != 0x00363D20u) [[unlikely]] return; }
L_00363D20:
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 24722u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363D3Cu); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_00AA(c, 46u, depth + 1u); else { c.pc = 0x003A8720u; return; } if (c.pc != 0x00363D3Cu) [[unlikely]] return; }
L_00363D3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00363D60; } }
    c.budget -= 1;
L_00363D48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 24722u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363D5Cu); c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00AA(c, 46u, depth + 1u); else { c.pc = 0x003A8720u; return; } if (c.pc != 0x00363D5Cu) [[unlikely]] return; }
L_00363D5C:
    c.budget -= 1;
L_00363D60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363D68u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_00AA(c, 51u, depth + 1u); else { c.pc = 0x003A87A0u; return; } if (c.pc != 0x00363D68u) [[unlikely]] return; }
L_00363D68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_00363D80:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 5004u), 0u);  c.pc = t; return; }
L_00363D90:
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 5004u), c.r[3].w[0]);  c.pc = t; return; }
L_00363DA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].d[0] = ~(c.r[4].d[0] | 0ull);
    set32(c.r[5], ld32((c.r[1].w[0] + 5004u)));
    set32(c.r[3], 0u + 512u);
    c.r[5].d[0] = c.r[5].d[0] & c.r[6].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[1].w[0] + 5004u), c.r[5].w[0]);  if (t) { goto L_00363E08; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[1].w[0] + 5022u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[1].w[0] + 5004u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5023u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363DFCu); st32((c.r[1].w[0] + 5004u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0099(c, 44u, depth + 1u); else { c.pc = 0x003647A0u; return; } if (c.pc != 0x00363DFCu) [[unlikely]] return; }
L_00363DFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00363E40; } }
    c.budget -= 1;
L_00363E08:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00363E40; } }
    set32(c.r[4], 0u + 1u);
    st8((c.r[1].w[0] + 5022u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 5004u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[1].w[0] + 5023u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363E40u); st32((c.r[1].w[0] + 5004u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0099(c, 44u, depth + 1u); else { c.pc = 0x003647A0u; return; } if (c.pc != 0x00363E40u) [[unlikely]] return; }
L_00363E40:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00363E50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].d[0] = ~(c.r[4].d[0] | 0ull);
    set32(c.r[3], ld32((c.r[1].w[0] + 5004u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 5004u), c.r[3].w[0]);  c.pc = t; return; }
L_00363E70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], 0u - 4097u);
    set32(c.r[5], ld32((c.r[1].w[0] + 5004u)));
    set32(c.r[3], 0u - 8193u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st32((c.r[1].w[0] + 5004u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 5004u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 5004u), c.r[3].w[0]);  c.pc = t; return; }
L_00363EB0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 5004u)));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 5004u), c.r[3].w[0]);  c.pc = t; return; }
L_00363ED0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 5004u)));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 5004u), c.r[3].w[0]);  c.pc = t; return; }
L_00363EF0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5008u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 5004u)));
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 5004u), c.r[3].w[0]);  c.pc = t; return; }
L_00363F10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[1].w[0] + 5004u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5008u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[4].d[0] | 1024ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 5004u), c.r[3].w[0]);  c.pc = t; return; }
L_00363F40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], ld32((c.r[1].w[0] + 5004u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5008u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[4].d[0] | 1024ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 5004u), c.r[3].w[0]);  c.pc = t; return; }
L_00363F70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 5004u)));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 5004u), c.r[3].w[0]);  c.pc = t; return; }
L_00363F90:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5012u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5013u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5002u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5003u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 5004u)));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st32((c.r[1].w[0] + 5004u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 5004u)));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st32((c.r[1].w[0] + 5004u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 5004u)));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 5004u), c.r[3].w[0]);  c.pc = t; return; }
L_00363FF0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5002u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5003u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    [[clang::musttail]] return unit_0099(c, 1u, depth);
}

}
