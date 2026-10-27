#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0147[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0,
    0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0,
    14, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0,
    21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0,
    27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0,
    34, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0,
    0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0,
    47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0,
    53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0,
    58, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0,
    65, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0,
    0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0,
    76, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0,
    83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0,
    90, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0,
    0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0,
    104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0,
    111, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0,
    0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0,
    125, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0,
    133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0,
    139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0,
    146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0,
    153, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0,
    159, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0,
    165, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0,
    171, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0,
    178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0,
    184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0,
    0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0,
    197, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0,
    205, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0,
    212, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0,
    218, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0,
    226, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0,
    233, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0,
    0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0,
    246, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0,
    252, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0,
    257, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0,
    263, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0,
    269, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0,
    274, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0,
    280, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0,
    285, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0,
    291, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0,
    297, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0,
    303, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0,
    0, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0,
    314, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0,
    0, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0,
    326, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0,
    332, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0,
    0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0,
    344, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0,
    0, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0,
    0, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0,
    362, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 0, 365, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0,
    369, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0,
    375, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0,
    380, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0,
    0, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 0,
    391, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0,
    397, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0,
    402, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0,
    408, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0,
    0, 0, 0, 0, 414, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 418, 0, 0, 0,
    419, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0,
    425, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 0, 429, 0, 0, 0, 430, 0, 0, 0, 431, 0, 0, 0,
    432, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 0,
    437, 0, 0, 0, 438, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0, 441, 0, 0, 0, 442, 0, 0, 0, 443, 0, 0, 0, 444, 0, 0, 0,
    445, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0,
    449, 0, 0, 0, 450, 0, 0, 0, 451, 0, 0, 0, 452, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0,
    455, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 459, 0, 0, 0, 460, 0, 0, 0,
    461, 0, 0, 0, 462, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 465, 0, 0, 0, 466, 0, 0, 0, 467, 0, 0, 0,
    0, 0, 0, 0, 468, 0, 0, 0, 469, 0, 0, 0, 470, 0, 0, 0, 471, 0, 0, 0, 472, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0,
    474, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 477, 0, 0, 0, 478, 0, 0, 0, 479, 0, 0, 0,
    480, 0, 0, 0, 481, 0, 0, 0, 482, 0, 0, 0, 483, 0, 0, 0, 484, 0, 0, 0, 485, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0,
    487, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 490, 0, 0, 0, 491, 0, 0, 0, 492, 0, 0, 0,
    0, 0, 0, 0, 493, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0,
    497, 0, 0, 0, 498, 0, 0, 0, 499, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0,
    503, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 506, 0, 0, 0, 507, 0, 0, 0, 508, 0, 0, 0,
    0, 0, 0, 0, 509, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0,
    0, 0, 0, 0, 514, 0, 0, 0, 515, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0,
    519, 0, 0, 0, 520, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0,
    525, 0, 0, 0, 526, 0, 0, 0, 527, 0, 0, 0, 528, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 531, 0, 0, 0,
    0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 534, 0, 0, 0, 535, 0, 0, 0, 536, 0, 0, 0, 537, 0, 0, 0,
    0, 0, 0, 0, 538, 0, 0, 0, 539, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 542, 0, 0, 0, 543, 0, 0, 0,
    544, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 546, 0, 0, 0, 547, 0, 0, 0, 548, 0, 0, 0, 549, 0, 0, 0, 550, 0, 0, 0,
    0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 0, 554, 0, 0, 0, 555, 0, 0, 0,
    556, 0, 0, 0, 557, 0, 0, 0, 558, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 561, 0, 0, 0, 562, 0, 0, 0,
    0, 0, 0, 0, 563, 0, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0,
    567, 0, 0, 0, 568, 0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 570, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0, 0, 572, 0, 0, 0,
    0, 0, 0, 0, 573, 0, 0, 0, 0, 0, 0, 0, 574, 0, 0, 0, 575, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 577, 0, 578, 0, 579, 0, 580, 0, 581, 0, 582, 0, 583, 0, 584, 0, 585, 0, 586, 0,
    587, 0, 588, 0, 589, 0, 590, 0, 591, 0, 592, 0, 593, 0, 594, 0, 595, 0, 596, 0, 597, 0, 598, 0, 599, 0, 600, 0, 601, 0, 602, 0,
    603, 0, 604, 0, 605, 0, 606, 0, 607, 0, 608, 0, 609, 0, 610, 0, 611, 0, 612, 0, 613, 0, 614, 0, 615, 0, 616, 0, 617, 0, 618, 0,
    619, 0, 620, 0, 621, 0, 622, 0, 623, 0, 624, 0, 625, 0, 626, 0, 627, 0, 628, 0, 629, 0, 630, 0, 631, 0, 632, 0, 633, 0, 634, 0,
    635, 0, 636, 0, 637, 0, 638, 0, 639, 0, 640, 0, 641, 0, 642, 0, 643, 0, 644, 0, 645, 0, 646, 0, 647, 0, 648, 0, 649, 0, 650, 0,
    651, 0, 652, 0, 653, 0, 654, 0, 655, 0, 656, 0, 657, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0147(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0061C000;
    case 2u: goto L_0061C010;
    case 3u: goto L_0061C020;
    case 4u: goto L_0061C030;
    case 5u: goto L_0061C040;
    case 6u: goto L_0061C060;
    case 7u: goto L_0061C070;
    case 8u: goto L_0061C090;
    case 9u: goto L_0061C0A0;
    case 10u: goto L_0061C0B0;
    case 11u: goto L_0061C0D0;
    case 12u: goto L_0061C0E0;
    case 13u: goto L_0061C0F0;
    case 14u: goto L_0061C100;
    case 15u: goto L_0061C110;
    case 16u: goto L_0061C120;
    case 17u: goto L_0061C140;
    case 18u: goto L_0061C150;
    case 19u: goto L_0061C160;
    case 20u: goto L_0061C170;
    case 21u: goto L_0061C180;
    case 22u: goto L_0061C1A0;
    case 23u: goto L_0061C1B0;
    case 24u: goto L_0061C1C0;
    case 25u: goto L_0061C1E0;
    case 26u: goto L_0061C1F0;
    case 27u: goto L_0061C200;
    case 28u: goto L_0061C220;
    case 29u: goto L_0061C230;
    case 30u: goto L_0061C240;
    case 31u: goto L_0061C250;
    case 32u: goto L_0061C260;
    case 33u: goto L_0061C270;
    case 34u: goto L_0061C280;
    case 35u: goto L_0061C290;
    case 36u: goto L_0061C2A0;
    case 37u: goto L_0061C2B0;
    case 38u: goto L_0061C2C0;
    case 39u: goto L_0061C2D0;
    case 40u: goto L_0061C2E0;
    case 41u: goto L_0061C2F0;
    case 42u: goto L_0061C310;
    case 43u: goto L_0061C330;
    case 44u: goto L_0061C340;
    case 45u: goto L_0061C350;
    case 46u: goto L_0061C370;
    case 47u: goto L_0061C380;
    case 48u: goto L_0061C390;
    case 49u: goto L_0061C3B0;
    case 50u: goto L_0061C3C0;
    case 51u: goto L_0061C3D0;
    case 52u: goto L_0061C3F0;
    case 53u: goto L_0061C400;
    case 54u: goto L_0061C418;
    case 55u: goto L_0061C430;
    case 56u: goto L_0061C450;
    case 57u: goto L_0061C470;
    case 58u: goto L_0061C480;
    case 59u: goto L_0061C490;
    case 60u: goto L_0061C4A0;
    case 61u: goto L_0061C4B0;
    case 62u: goto L_0061C4C0;
    case 63u: goto L_0061C4D0;
    case 64u: goto L_0061C4F0;
    case 65u: goto L_0061C500;
    case 66u: goto L_0061C510;
    case 67u: goto L_0061C520;
    case 68u: goto L_0061C540;
    case 69u: goto L_0061C550;
    case 70u: goto L_0061C570;
    case 71u: goto L_0061C590;
    case 72u: goto L_0061C5A0;
    case 73u: goto L_0061C5C0;
    case 74u: goto L_0061C5D0;
    case 75u: goto L_0061C5F0;
    case 76u: goto L_0061C600;
    case 77u: goto L_0061C610;
    case 78u: goto L_0061C620;
    case 79u: goto L_0061C630;
    case 80u: goto L_0061C640;
    case 81u: goto L_0061C660;
    case 82u: goto L_0061C670;
    case 83u: goto L_0061C680;
    case 84u: goto L_0061C690;
    case 85u: goto L_0061C6B0;
    case 86u: goto L_0061C6C0;
    case 87u: goto L_0061C6D0;
    case 88u: goto L_0061C6E0;
    case 89u: goto L_0061C6F0;
    case 90u: goto L_0061C700;
    case 91u: goto L_0061C710;
    case 92u: goto L_0061C720;
    case 93u: goto L_0061C730;
    case 94u: goto L_0061C750;
    case 95u: goto L_0061C760;
    case 96u: goto L_0061C770;
    case 97u: goto L_0061C790;
    case 98u: goto L_0061C7A0;
    case 99u: goto L_0061C7B0;
    case 100u: goto L_0061C7C0;
    case 101u: goto L_0061C7D0;
    case 102u: goto L_0061C7E0;
    case 103u: goto L_0061C7F0;
    case 104u: goto L_0061C800;
    case 105u: goto L_0061C810;
    case 106u: goto L_0061C830;
    case 107u: goto L_0061C840;
    case 108u: goto L_0061C850;
    case 109u: goto L_0061C860;
    case 110u: goto L_0061C870;
    case 111u: goto L_0061C880;
    case 112u: goto L_0061C890;
    case 113u: goto L_0061C8A0;
    case 114u: goto L_0061C8B0;
    case 115u: goto L_0061C8C0;
    case 116u: goto L_0061C8D0;
    case 117u: goto L_0061C8E8;
    case 118u: goto L_0061C8F8;
    case 119u: goto L_0061C908;
    case 120u: goto L_0061C920;
    case 121u: goto L_0061C930;
    case 122u: goto L_0061C940;
    case 123u: goto L_0061C950;
    case 124u: goto L_0061C960;
    case 125u: goto L_0061C980;
    case 126u: goto L_0061C990;
    case 127u: goto L_0061C9A0;
    case 128u: goto L_0061C9B0;
    case 129u: goto L_0061C9C0;
    case 130u: goto L_0061C9D0;
    case 131u: goto L_0061C9E0;
    case 132u: goto L_0061C9F0;
    case 133u: goto L_0061CA00;
    case 134u: goto L_0061CA20;
    case 135u: goto L_0061CA30;
    case 136u: goto L_0061CA50;
    case 137u: goto L_0061CA60;
    case 138u: goto L_0061CA70;
    case 139u: goto L_0061CA80;
    case 140u: goto L_0061CA98;
    case 141u: goto L_0061CAA8;
    case 142u: goto L_0061CAC0;
    case 143u: goto L_0061CAD0;
    case 144u: goto L_0061CAE0;
    case 145u: goto L_0061CAF0;
    case 146u: goto L_0061CB00;
    case 147u: goto L_0061CB20;
    case 148u: goto L_0061CB30;
    case 149u: goto L_0061CB40;
    case 150u: goto L_0061CB50;
    case 151u: goto L_0061CB60;
    case 152u: goto L_0061CB70;
    case 153u: goto L_0061CB80;
    case 154u: goto L_0061CB90;
    case 155u: goto L_0061CBA0;
    case 156u: goto L_0061CBC0;
    case 157u: goto L_0061CBD0;
    case 158u: goto L_0061CBF0;
    case 159u: goto L_0061CC00;
    case 160u: goto L_0061CC10;
    case 161u: goto L_0061CC20;
    case 162u: goto L_0061CC40;
    case 163u: goto L_0061CC50;
    case 164u: goto L_0061CC60;
    case 165u: goto L_0061CC80;
    case 166u: goto L_0061CC90;
    case 167u: goto L_0061CCA0;
    case 168u: goto L_0061CCC0;
    case 169u: goto L_0061CCD0;
    case 170u: goto L_0061CCF0;
    case 171u: goto L_0061CD00;
    case 172u: goto L_0061CD10;
    case 173u: goto L_0061CD20;
    case 174u: goto L_0061CD30;
    case 175u: goto L_0061CD40;
    case 176u: goto L_0061CD60;
    case 177u: goto L_0061CD70;
    case 178u: goto L_0061CD80;
    case 179u: goto L_0061CD90;
    case 180u: goto L_0061CDB0;
    case 181u: goto L_0061CDC0;
    case 182u: goto L_0061CDE0;
    case 183u: goto L_0061CDF0;
    case 184u: goto L_0061CE00;
    case 185u: goto L_0061CE20;
    case 186u: goto L_0061CE30;
    case 187u: goto L_0061CE40;
    case 188u: goto L_0061CE50;
    case 189u: goto L_0061CE60;
    case 190u: goto L_0061CE70;
    case 191u: goto L_0061CE90;
    case 192u: goto L_0061CEB0;
    case 193u: goto L_0061CEC0;
    case 194u: goto L_0061CED0;
    case 195u: goto L_0061CEE0;
    case 196u: goto L_0061CEF0;
    case 197u: goto L_0061CF00;
    case 198u: goto L_0061CF10;
    case 199u: goto L_0061CF20;
    case 200u: goto L_0061CF30;
    case 201u: goto L_0061CF40;
    case 202u: goto L_0061CF50;
    case 203u: goto L_0061CF60;
    case 204u: goto L_0061CF70;
    case 205u: goto L_0061CF80;
    case 206u: goto L_0061CF90;
    case 207u: goto L_0061CFA0;
    case 208u: goto L_0061CFB0;
    case 209u: goto L_0061CFD0;
    case 210u: goto L_0061CFE0;
    case 211u: goto L_0061CFF0;
    case 212u: goto L_0061D000;
    case 213u: goto L_0061D010;
    case 214u: goto L_0061D020;
    case 215u: goto L_0061D040;
    case 216u: goto L_0061D050;
    case 217u: goto L_0061D060;
    case 218u: goto L_0061D080;
    case 219u: goto L_0061D090;
    case 220u: goto L_0061D0A0;
    case 221u: goto L_0061D0B0;
    case 222u: goto L_0061D0C0;
    case 223u: goto L_0061D0D0;
    case 224u: goto L_0061D0E0;
    case 225u: goto L_0061D0F0;
    case 226u: goto L_0061D100;
    case 227u: goto L_0061D110;
    case 228u: goto L_0061D120;
    case 229u: goto L_0061D130;
    case 230u: goto L_0061D140;
    case 231u: goto L_0061D150;
    case 232u: goto L_0061D160;
    case 233u: goto L_0061D180;
    case 234u: goto L_0061D1A0;
    case 235u: goto L_0061D1B0;
    case 236u: goto L_0061D1C0;
    case 237u: goto L_0061D1D0;
    case 238u: goto L_0061D1E0;
    case 239u: goto L_0061D1F0;
    case 240u: goto L_0061D210;
    case 241u: goto L_0061D220;
    case 242u: goto L_0061D240;
    case 243u: goto L_0061D250;
    case 244u: goto L_0061D260;
    case 245u: goto L_0061D270;
    case 246u: goto L_0061D280;
    case 247u: goto L_0061D2A0;
    case 248u: goto L_0061D2B0;
    case 249u: goto L_0061D2C0;
    case 250u: goto L_0061D2E0;
    case 251u: goto L_0061D2F0;
    case 252u: goto L_0061D300;
    case 253u: goto L_0061D320;
    case 254u: goto L_0061D330;
    case 255u: goto L_0061D350;
    case 256u: goto L_0061D360;
    case 257u: goto L_0061D380;
    case 258u: goto L_0061D390;
    case 259u: goto L_0061D3A0;
    case 260u: goto L_0061D3C0;
    case 261u: goto L_0061D3D0;
    case 262u: goto L_0061D3E0;
    case 263u: goto L_0061D400;
    case 264u: goto L_0061D410;
    case 265u: goto L_0061D420;
    case 266u: goto L_0061D438;
    case 267u: goto L_0061D450;
    case 268u: goto L_0061D460;
    case 269u: goto L_0061D480;
    case 270u: goto L_0061D4A0;
    case 271u: goto L_0061D4C0;
    case 272u: goto L_0061D4E0;
    case 273u: goto L_0061D4F0;
    case 274u: goto L_0061D500;
    case 275u: goto L_0061D510;
    case 276u: goto L_0061D520;
    case 277u: goto L_0061D540;
    case 278u: goto L_0061D550;
    case 279u: goto L_0061D570;
    case 280u: goto L_0061D580;
    case 281u: goto L_0061D5A0;
    case 282u: goto L_0061D5B0;
    case 283u: goto L_0061D5D0;
    case 284u: goto L_0061D5F0;
    case 285u: goto L_0061D600;
    case 286u: goto L_0061D610;
    case 287u: goto L_0061D620;
    case 288u: goto L_0061D640;
    case 289u: goto L_0061D650;
    case 290u: goto L_0061D660;
    case 291u: goto L_0061D680;
    case 292u: goto L_0061D690;
    case 293u: goto L_0061D6A0;
    case 294u: goto L_0061D6C0;
    case 295u: goto L_0061D6D0;
    case 296u: goto L_0061D6E8;
    case 297u: goto L_0061D700;
    case 298u: goto L_0061D710;
    case 299u: goto L_0061D720;
    case 300u: goto L_0061D730;
    case 301u: goto L_0061D750;
    case 302u: goto L_0061D760;
    case 303u: goto L_0061D780;
    case 304u: goto L_0061D7A0;
    case 305u: goto L_0061D7C0;
    case 306u: goto L_0061D7E0;
    case 307u: goto L_0061D7F0;
    case 308u: goto L_0061D810;
    case 309u: goto L_0061D820;
    case 310u: goto L_0061D830;
    case 311u: goto L_0061D840;
    case 312u: goto L_0061D860;
    case 313u: goto L_0061D870;
    case 314u: goto L_0061D880;
    case 315u: goto L_0061D890;
    case 316u: goto L_0061D8A0;
    case 317u: goto L_0061D8B0;
    case 318u: goto L_0061D8D0;
    case 319u: goto L_0061D8F0;
    case 320u: goto L_0061D910;
    case 321u: goto L_0061D920;
    case 322u: goto L_0061D930;
    case 323u: goto L_0061D940;
    case 324u: goto L_0061D950;
    case 325u: goto L_0061D970;
    case 326u: goto L_0061D980;
    case 327u: goto L_0061D990;
    case 328u: goto L_0061D9A0;
    case 329u: goto L_0061D9B0;
    case 330u: goto L_0061D9D0;
    case 331u: goto L_0061D9E0;
    case 332u: goto L_0061DA00;
    case 333u: goto L_0061DA20;
    case 334u: goto L_0061DA40;
    case 335u: goto L_0061DA50;
    case 336u: goto L_0061DA60;
    case 337u: goto L_0061DA70;
    case 338u: goto L_0061DA90;
    case 339u: goto L_0061DAA0;
    case 340u: goto L_0061DAB0;
    case 341u: goto L_0061DAC0;
    case 342u: goto L_0061DAE0;
    case 343u: goto L_0061DAF0;
    case 344u: goto L_0061DB00;
    case 345u: goto L_0061DB10;
    case 346u: goto L_0061DB20;
    case 347u: goto L_0061DB30;
    case 348u: goto L_0061DB50;
    case 349u: goto L_0061DB70;
    case 350u: goto L_0061DB90;
    case 351u: goto L_0061DBA0;
    case 352u: goto L_0061DBB0;
    case 353u: goto L_0061DBC0;
    case 354u: goto L_0061DBD0;
    case 355u: goto L_0061DBE0;
    case 356u: goto L_0061DBF0;
    case 357u: goto L_0061DC10;
    case 358u: goto L_0061DC20;
    case 359u: goto L_0061DC30;
    case 360u: goto L_0061DC50;
    case 361u: goto L_0061DC60;
    case 362u: goto L_0061DC80;
    case 363u: goto L_0061DCA0;
    case 364u: goto L_0061DCB0;
    case 365u: goto L_0061DCC0;
    case 366u: goto L_0061DCD0;
    case 367u: goto L_0061DCE0;
    case 368u: goto L_0061DCF0;
    case 369u: goto L_0061DD00;
    case 370u: goto L_0061DD10;
    case 371u: goto L_0061DD20;
    case 372u: goto L_0061DD30;
    case 373u: goto L_0061DD50;
    case 374u: goto L_0061DD60;
    case 375u: goto L_0061DD80;
    case 376u: goto L_0061DDA0;
    case 377u: goto L_0061DDC0;
    case 378u: goto L_0061DDE0;
    case 379u: goto L_0061DDF0;
    case 380u: goto L_0061DE00;
    case 381u: goto L_0061DE20;
    case 382u: goto L_0061DE40;
    case 383u: goto L_0061DE50;
    case 384u: goto L_0061DE70;
    case 385u: goto L_0061DE90;
    case 386u: goto L_0061DEA0;
    case 387u: goto L_0061DEB0;
    case 388u: goto L_0061DEC0;
    case 389u: goto L_0061DEE0;
    case 390u: goto L_0061DEF0;
    case 391u: goto L_0061DF00;
    case 392u: goto L_0061DF10;
    case 393u: goto L_0061DF30;
    case 394u: goto L_0061DF50;
    case 395u: goto L_0061DF60;
    case 396u: goto L_0061DF70;
    case 397u: goto L_0061DF80;
    case 398u: goto L_0061DFA0;
    case 399u: goto L_0061DFB0;
    case 400u: goto L_0061DFD0;
    case 401u: goto L_0061DFF0;
    case 402u: goto L_0061E000;
    case 403u: goto L_0061E010;
    case 404u: goto L_0061E020;
    case 405u: goto L_0061E040;
    case 406u: goto L_0061E050;
    case 407u: goto L_0061E070;
    case 408u: goto L_0061E080;
    case 409u: goto L_0061E090;
    case 410u: goto L_0061E0A0;
    case 411u: goto L_0061E0C0;
    case 412u: goto L_0061E0D0;
    case 413u: goto L_0061E0F0;
    case 414u: goto L_0061E110;
    case 415u: goto L_0061E120;
    case 416u: goto L_0061E140;
    case 417u: goto L_0061E160;
    case 418u: goto L_0061E170;
    case 419u: goto L_0061E180;
    case 420u: goto L_0061E190;
    case 421u: goto L_0061E1B0;
    case 422u: goto L_0061E1C0;
    case 423u: goto L_0061E1E0;
    case 424u: goto L_0061E1F0;
    case 425u: goto L_0061E200;
    case 426u: goto L_0061E210;
    case 427u: goto L_0061E230;
    case 428u: goto L_0061E240;
    case 429u: goto L_0061E250;
    case 430u: goto L_0061E260;
    case 431u: goto L_0061E270;
    case 432u: goto L_0061E280;
    case 433u: goto L_0061E2A0;
    case 434u: goto L_0061E2C0;
    case 435u: goto L_0061E2E0;
    case 436u: goto L_0061E2F0;
    case 437u: goto L_0061E300;
    case 438u: goto L_0061E310;
    case 439u: goto L_0061E320;
    case 440u: goto L_0061E330;
    case 441u: goto L_0061E340;
    case 442u: goto L_0061E350;
    case 443u: goto L_0061E360;
    case 444u: goto L_0061E370;
    case 445u: goto L_0061E380;
    case 446u: goto L_0061E3A0;
    case 447u: goto L_0061E3C0;
    case 448u: goto L_0061E3E0;
    case 449u: goto L_0061E400;
    case 450u: goto L_0061E410;
    case 451u: goto L_0061E420;
    case 452u: goto L_0061E430;
    case 453u: goto L_0061E440;
    case 454u: goto L_0061E460;
    case 455u: goto L_0061E480;
    case 456u: goto L_0061E490;
    case 457u: goto L_0061E4B0;
    case 458u: goto L_0061E4D0;
    case 459u: goto L_0061E4E0;
    case 460u: goto L_0061E4F0;
    case 461u: goto L_0061E500;
    case 462u: goto L_0061E510;
    case 463u: goto L_0061E520;
    case 464u: goto L_0061E540;
    case 465u: goto L_0061E550;
    case 466u: goto L_0061E560;
    case 467u: goto L_0061E570;
    case 468u: goto L_0061E590;
    case 469u: goto L_0061E5A0;
    case 470u: goto L_0061E5B0;
    case 471u: goto L_0061E5C0;
    case 472u: goto L_0061E5D0;
    case 473u: goto L_0061E5E0;
    case 474u: goto L_0061E600;
    case 475u: goto L_0061E620;
    case 476u: goto L_0061E640;
    case 477u: goto L_0061E650;
    case 478u: goto L_0061E660;
    case 479u: goto L_0061E670;
    case 480u: goto L_0061E680;
    case 481u: goto L_0061E690;
    case 482u: goto L_0061E6A0;
    case 483u: goto L_0061E6B0;
    case 484u: goto L_0061E6C0;
    case 485u: goto L_0061E6D0;
    case 486u: goto L_0061E6E0;
    case 487u: goto L_0061E700;
    case 488u: goto L_0061E720;
    case 489u: goto L_0061E740;
    case 490u: goto L_0061E750;
    case 491u: goto L_0061E760;
    case 492u: goto L_0061E770;
    case 493u: goto L_0061E790;
    case 494u: goto L_0061E7A0;
    case 495u: goto L_0061E7C0;
    case 496u: goto L_0061E7E0;
    case 497u: goto L_0061E800;
    case 498u: goto L_0061E810;
    case 499u: goto L_0061E820;
    case 500u: goto L_0061E830;
    case 501u: goto L_0061E850;
    case 502u: goto L_0061E860;
    case 503u: goto L_0061E880;
    case 504u: goto L_0061E8A0;
    case 505u: goto L_0061E8C0;
    case 506u: goto L_0061E8D0;
    case 507u: goto L_0061E8E0;
    case 508u: goto L_0061E8F0;
    case 509u: goto L_0061E910;
    case 510u: goto L_0061E920;
    case 511u: goto L_0061E940;
    case 512u: goto L_0061E950;
    case 513u: goto L_0061E970;
    case 514u: goto L_0061E990;
    case 515u: goto L_0061E9A0;
    case 516u: goto L_0061E9B0;
    case 517u: goto L_0061E9D0;
    case 518u: goto L_0061E9F0;
    case 519u: goto L_0061EA00;
    case 520u: goto L_0061EA10;
    case 521u: goto L_0061EA20;
    case 522u: goto L_0061EA40;
    case 523u: goto L_0061EA50;
    case 524u: goto L_0061EA70;
    case 525u: goto L_0061EA80;
    case 526u: goto L_0061EA90;
    case 527u: goto L_0061EAA0;
    case 528u: goto L_0061EAB0;
    case 529u: goto L_0061EAC0;
    case 530u: goto L_0061EAE0;
    case 531u: goto L_0061EAF0;
    case 532u: goto L_0061EB10;
    case 533u: goto L_0061EB30;
    case 534u: goto L_0061EB40;
    case 535u: goto L_0061EB50;
    case 536u: goto L_0061EB60;
    case 537u: goto L_0061EB70;
    case 538u: goto L_0061EB90;
    case 539u: goto L_0061EBA0;
    case 540u: goto L_0061EBB0;
    case 541u: goto L_0061EBD0;
    case 542u: goto L_0061EBE0;
    case 543u: goto L_0061EBF0;
    case 544u: goto L_0061EC00;
    case 545u: goto L_0061EC20;
    case 546u: goto L_0061EC30;
    case 547u: goto L_0061EC40;
    case 548u: goto L_0061EC50;
    case 549u: goto L_0061EC60;
    case 550u: goto L_0061EC70;
    case 551u: goto L_0061EC90;
    case 552u: goto L_0061ECB0;
    case 553u: goto L_0061ECD0;
    case 554u: goto L_0061ECE0;
    case 555u: goto L_0061ECF0;
    case 556u: goto L_0061ED00;
    case 557u: goto L_0061ED10;
    case 558u: goto L_0061ED20;
    case 559u: goto L_0061ED30;
    case 560u: goto L_0061ED50;
    case 561u: goto L_0061ED60;
    case 562u: goto L_0061ED70;
    case 563u: goto L_0061ED90;
    case 564u: goto L_0061EDA0;
    case 565u: goto L_0061EDC0;
    case 566u: goto L_0061EDE0;
    case 567u: goto L_0061EE00;
    case 568u: goto L_0061EE10;
    case 569u: goto L_0061EE20;
    case 570u: goto L_0061EE40;
    case 571u: goto L_0061EE50;
    case 572u: goto L_0061EE70;
    case 573u: goto L_0061EE90;
    case 574u: goto L_0061EEB0;
    case 575u: goto L_0061EEC0;
    case 576u: goto L_0061EED0;
    case 577u: goto L_0061FBB0;
    case 578u: goto L_0061FBB8;
    case 579u: goto L_0061FBC0;
    case 580u: goto L_0061FBC8;
    case 581u: goto L_0061FBD0;
    case 582u: goto L_0061FBD8;
    case 583u: goto L_0061FBE0;
    case 584u: goto L_0061FBE8;
    case 585u: goto L_0061FBF0;
    case 586u: goto L_0061FBF8;
    case 587u: goto L_0061FC00;
    case 588u: goto L_0061FC08;
    case 589u: goto L_0061FC10;
    case 590u: goto L_0061FC18;
    case 591u: goto L_0061FC20;
    case 592u: goto L_0061FC28;
    case 593u: goto L_0061FC30;
    case 594u: goto L_0061FC38;
    case 595u: goto L_0061FC40;
    case 596u: goto L_0061FC48;
    case 597u: goto L_0061FC50;
    case 598u: goto L_0061FC58;
    case 599u: goto L_0061FC60;
    case 600u: goto L_0061FC68;
    case 601u: goto L_0061FC70;
    case 602u: goto L_0061FC78;
    case 603u: goto L_0061FC80;
    case 604u: goto L_0061FC88;
    case 605u: goto L_0061FC90;
    case 606u: goto L_0061FC98;
    case 607u: goto L_0061FCA0;
    case 608u: goto L_0061FCA8;
    case 609u: goto L_0061FCB0;
    case 610u: goto L_0061FCB8;
    case 611u: goto L_0061FCC0;
    case 612u: goto L_0061FCC8;
    case 613u: goto L_0061FCD0;
    case 614u: goto L_0061FCD8;
    case 615u: goto L_0061FCE0;
    case 616u: goto L_0061FCE8;
    case 617u: goto L_0061FCF0;
    case 618u: goto L_0061FCF8;
    case 619u: goto L_0061FD00;
    case 620u: goto L_0061FD08;
    case 621u: goto L_0061FD10;
    case 622u: goto L_0061FD18;
    case 623u: goto L_0061FD20;
    case 624u: goto L_0061FD28;
    case 625u: goto L_0061FD30;
    case 626u: goto L_0061FD38;
    case 627u: goto L_0061FD40;
    case 628u: goto L_0061FD48;
    case 629u: goto L_0061FD50;
    case 630u: goto L_0061FD58;
    case 631u: goto L_0061FD60;
    case 632u: goto L_0061FD68;
    case 633u: goto L_0061FD70;
    case 634u: goto L_0061FD78;
    case 635u: goto L_0061FD80;
    case 636u: goto L_0061FD88;
    case 637u: goto L_0061FD90;
    case 638u: goto L_0061FD98;
    case 639u: goto L_0061FDA0;
    case 640u: goto L_0061FDA8;
    case 641u: goto L_0061FDB0;
    case 642u: goto L_0061FDB8;
    case 643u: goto L_0061FDC0;
    case 644u: goto L_0061FDC8;
    case 645u: goto L_0061FDD0;
    case 646u: goto L_0061FDD8;
    case 647u: goto L_0061FDE0;
    case 648u: goto L_0061FDE8;
    case 649u: goto L_0061FDF0;
    case 650u: goto L_0061FDF8;
    case 651u: goto L_0061FE00;
    case 652u: goto L_0061FE08;
    case 653u: goto L_0061FE10;
    case 654u: goto L_0061FE18;
    case 655u: goto L_0061FE20;
    case 656u: goto L_0061FE28;
    case 657u: goto L_0061FE30;
    case 658u: goto L_0061FF98;
    default: bad_entry(c, 0x0061C000u); return;
    }
L_0061C000:
    c.budget -= 4;
L_0061C010:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C014u);
    set32(c.r[25], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061C020:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[25].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C028u);
    c.budget -= 4;
L_0061C030:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[11].w[0] << 23);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C038u);
    c.budget -= 4;
L_0061C040:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[11].w[0] << 26);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061C060:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C060u);
    c.r[24].d[0] = c.hi.d[0];
    set32(c.r[24], c.r[11].w[0] << 29);
    c.budget -= 4;
L_0061C070:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C070u);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[11].w[0] << 0);
    set32(c.r[25], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061C090:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C090u);
    c.r[24].d[0] = c.hi.d[0];
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061C0A0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[11].w[0] << 10);
    c.budget -= 4;
L_0061C0B0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C0B4u);
    c.r[25].d[0] = c.hi.d[0];
    set32(c.r[25], c.r[11].w[0] << 12);
    c.budget -= 8;
L_0061C0D0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C0D4u);
    set32(c.r[25], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061C0E0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[11].w[0] << 14);
    set32(c.r[25], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061C0F0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C0F0u);
    set32(c.r[25], c.r[11].w[0] << 15);
    set32(c.r[25], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061C100:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C100u);
    c.r[25].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C108u);
    c.budget -= 4;
L_0061C110:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C110u);
    c.r[25].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C118u);
    c.budget -= 4;
L_0061C120:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[25].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C128u);
    c.r[25].d[0] = c.hi.d[0];
    c.budget -= 8;
L_0061C140:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0061C000u < 16384u) { entry = entries_0147[(t - 0x0061C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0061C150:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[3].w[0] + c.r[11].w[0]);
    c.r[25].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061C160:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.r[24].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061C170:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[11].w[0] << 20);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061C180:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[24].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C188u);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061C1A0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[11].w[0] << 23);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C1A8u);
    c.budget -= 4;
L_0061C1B0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[11].w[0] << 25);
    c.budget -= 4;
L_0061C1C0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[11].w[0] << 26);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061C1E0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[24].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C1E8u);
    c.budget -= 4;
L_0061C1F0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C1F0u);
    c.r[24].d[0] = c.hi.d[0];
    set32(c.r[24], c.r[11].w[0] << 29);
    c.budget -= 4;
L_0061C200:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C200u);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[11].w[0] << 0);
    set32(c.r[25], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061C220:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C220u);
    c.r[24].d[0] = c.hi.d[0];
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061C230:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C230u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C234u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C238u);
    c.budget -= 4;
L_0061C240:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C240u);
    set32(c.r[25], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[11].w[0] << 21);
    c.budget -= 4;
L_0061C250:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C250u);
    set32(c.r[25], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061C260:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C260u);
    c.r[25].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061C270:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C270u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C274u);
    c.r[25].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061C280:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C280u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C284u);
    set32(c.r[25], c.r[11].w[0] << 24);
    c.budget -= 4;
L_0061C290:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C290u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C294u);
    c.budget -= 4;
L_0061C2A0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C2A0u);
    set32(c.r[25], c.r[3].w[0] + c.r[11].w[0]);
    c.r[15].d[0] = c.r[11].d[0] << 8;
    c.budget -= 4;
L_0061C2B0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C2B0u);
    c.r[25].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C2B8u);
    c.budget -= 4;
L_0061C2C0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C2C0u);
    c.r[25].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C2C8u);
    c.budget -= 4;
L_0061C2D0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C2D0u);
    c.r[25].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C2D8u);
    c.budget -= 4;
L_0061C2E0:
    set32(c.r[25], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[11].w[0] << 30);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C2E8u);
    c.budget -= 4;
L_0061C2F0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[3].w[0] + c.r[11].w[0]);
    c.r[24].d[0] = c.hi.d[0];
    set32(c.r[24], c.r[11].w[0] << 16);
    c.budget -= 8;
L_0061C310:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[11].w[0] << 1);
    set32(c.r[25], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[11].w[0] << 2);
    c.budget -= 8;
L_0061C330:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.r[24].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061C340:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[11].w[0] << 20);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061C350:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[24].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C358u);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061C370:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[11].w[0] << 23);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C378u);
    c.budget -= 4;
L_0061C380:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[11].w[0] << 25);
    c.budget -= 4;
L_0061C390:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[11].w[0] << 26);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061C3B0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[24].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C3B8u);
    c.budget -= 4;
L_0061C3C0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C3C0u);
    c.r[24].d[0] = c.hi.d[0];
    set32(c.r[24], c.r[11].w[0] << 29);
    c.budget -= 4;
L_0061C3D0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C3D0u);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[11].w[0] << 0);
    set32(c.r[25], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061C3F0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C3F0u);
    c.r[24].d[0] = c.hi.d[0];
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061C400:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[26], c.r[11].w[0] << 0);
    set32(c.r[26], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[26], c.r[11].w[0] << 1);
    c.budget -= 6;
L_0061C418:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[26], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 6;
L_0061C430:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C434u);
    c.r[26].d[0] = c.hi.d[0];
    set32(c.r[26], c.r[11].w[0] << 3);
    c.budget -= 8;
L_0061C450:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C450u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C454u);
    c.r[26].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C45Cu);
    c.budget -= 8;
L_0061C470:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C470u);
    c.r[26].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C478u);
    c.budget -= 4;
L_0061C480:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C480u);
    c.r[24].d[0] = c.hi.d[0];
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061C490:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.r[24].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061C4A0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[11].w[0] << 20);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061C4B0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C4B4u);
    c.r[25].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061C4C0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[11].w[0] << 5);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C4C8u);
    c.budget -= 4;
L_0061C4D0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[25].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C4D8u);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061C4F0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C4F4u);
    set32(c.r[25], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061C500:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[25].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C508u);
    c.budget -= 4;
L_0061C510:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[11].w[0] << 23);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C518u);
    c.budget -= 4;
L_0061C520:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[11].w[0] << 26);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061C540:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C540u);
    c.r[24].d[0] = c.hi.d[0];
    set32(c.r[24], c.r[11].w[0] << 29);
    c.budget -= 4;
L_0061C550:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C550u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C554u);
    c.r[26].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C55Cu);
    c.budget -= 8;
L_0061C570:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C570u);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[11].w[0] << 0);
    set32(c.r[25], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061C590:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C590u);
    c.r[24].d[0] = c.hi.d[0];
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061C5A0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C5A0u);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[11].w[0] << 0);
    set32(c.r[25], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061C5C0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[11].w[0] << 10);
    c.budget -= 4;
L_0061C5D0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C5D4u);
    c.r[25].d[0] = c.hi.d[0];
    set32(c.r[25], c.r[11].w[0] << 12);
    c.budget -= 8;
L_0061C5F0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C5F4u);
    set32(c.r[25], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061C600:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[11].w[0] << 14);
    set32(c.r[25], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061C610:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C610u);
    set32(c.r[25], c.r[11].w[0] << 15);
    set32(c.r[25], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061C620:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C620u);
    c.r[25].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C628u);
    c.budget -= 4;
L_0061C630:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C630u);
    c.r[25].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C638u);
    c.budget -= 4;
L_0061C640:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[26].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C648u);
    c.r[26].d[0] = c.hi.d[0];
    c.budget -= 8;
L_0061C660:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C664u);
    c.r[25].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061C670:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C674u);
    c.r[26].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061C680:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[11].w[0] << 5);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C688u);
    c.budget -= 4;
L_0061C690:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[11].w[0] << 26);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061C6B0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[24].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C6B8u);
    c.budget -= 4;
L_0061C6C0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C6C0u);
    c.r[26].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C6C8u);
    c.budget -= 4;
L_0061C6D0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C6D0u);
    c.r[25].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C6D8u);
    c.budget -= 4;
L_0061C6E0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C6E0u);
    set32(c.r[25], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[11].w[0] << 21);
    c.budget -= 4;
L_0061C6F0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C6F0u);
    set32(c.r[25], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061C700:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C700u);
    set32(c.r[26], c.r[11].w[0] << 9);
    set32(c.r[23], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061C710:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C710u);
    c.r[25].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061C720:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C720u);
    c.r[25].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061C730:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[26], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[11].w[0] << 20);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061C750:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C754u);
    c.r[25].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061C760:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[26], c.r[11].w[0] << 10);
    set32(c.r[26], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061C770:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[26].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C778u);
    set32(c.r[26], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061C790:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[26].d[0] = c.hi.d[0];
    c.r[23].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061C7A0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[11].w[0] << 5);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C7A8u);
    c.budget -= 4;
L_0061C7B0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C7B4u);
    c.r[26].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061C7C0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[26], c.r[11].w[0] << 15);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C7C8u);
    c.budget -= 4;
L_0061C7D0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C7D0u);
    c.r[26].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C7D8u);
    c.budget -= 4;
L_0061C7E0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C7E0u);
    c.r[26].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C7E8u);
    c.budget -= 4;
L_0061C7F0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C7F0u);
    c.r[26].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C7F8u);
    c.budget -= 4;
L_0061C800:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[26].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061C810:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[11].w[0] << 26);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061C830:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[24].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C838u);
    c.budget -= 4;
L_0061C840:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C840u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C844u);
    c.r[25].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061C850:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C850u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C854u);
    set32(c.r[25], c.r[11].w[0] << 24);
    c.budget -= 4;
L_0061C860:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C860u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C864u);
    c.budget -= 4;
L_0061C870:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C870u);
    set32(c.r[26], c.r[11].w[0] << 20);
    set32(c.r[26], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061C880:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C880u);
    set32(c.r[26], c.r[11].w[0] << 21);
    set32(c.r[26], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061C890:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C890u);
    set32(c.r[26], c.r[11].w[0] << 22);
    c.r[15].d[0] = c.r[11].d[0] << 8;
    c.budget -= 4;
L_0061C8A0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C8A0u);
    c.r[25].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C8A8u);
    c.budget -= 4;
L_0061C8B0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C8B0u);
    c.r[25].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C8B8u);
    c.budget -= 4;
L_0061C8C0:
    set32(c.r[25], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[11].w[0] << 30);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C8C8u);
    c.budget -= 4;
L_0061C8D0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C8D4u);
    c.r[26].d[0] = c.hi.d[0];
    c.r[26].d[0] = c.hi.d[0];
    c.budget -= 6;
L_0061C8E8:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[26], c.r[11].w[0] << 24);
    c.budget -= 4;
L_0061C8F8:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C8FCu);
    c.budget -= 4;
L_0061C908:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[26], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 6;
L_0061C920:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C920u);
    c.r[26].d[0] = c.hi.d[0];
    set32(c.r[26], c.r[11].w[0] << 27);
    c.budget -= 4;
L_0061C930:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[11].w[0] << 20);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061C940:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C944u);
    c.r[25].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061C950:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[26], c.r[11].w[0] << 10);
    set32(c.r[26], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061C960:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[26].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C968u);
    set32(c.r[26], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061C980:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[26].d[0] = c.hi.d[0];
    c.r[23].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061C990:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[11].w[0] << 5);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C998u);
    c.budget -= 4;
L_0061C9A0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C9A4u);
    c.r[26].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061C9B0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[26], c.r[11].w[0] << 15);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C9B8u);
    c.budget -= 4;
L_0061C9C0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C9C0u);
    c.r[26].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C9C8u);
    c.budget -= 4;
L_0061C9D0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C9D0u);
    c.r[26].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C9D8u);
    c.budget -= 4;
L_0061C9E0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C9E0u);
    c.r[26].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061C9E8u);
    c.budget -= 4;
L_0061C9F0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[26].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061CA00:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[11].w[0] << 26);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061CA20:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[24].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CA28u);
    c.budget -= 4;
L_0061CA30:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[26], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[26], c.r[11].w[0] << 28);
    set32(c.r[26], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061CA50:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[11].w[0] << 5);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CA58u);
    c.budget -= 4;
L_0061CA60:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[26].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CA68u);
    c.budget -= 4;
L_0061CA70:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[26].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061CA80:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[11].w[0] << 26);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 6;
L_0061CA98:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CA9Cu);
    c.budget -= 4;
L_0061CAA8:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[26], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 6;
L_0061CAC0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CAC0u);
    c.r[26].d[0] = c.hi.d[0];
    set32(c.r[26], c.r[11].w[0] << 27);
    c.budget -= 4;
L_0061CAD0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[11].w[0] << 20);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061CAE0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CAE4u);
    c.r[25].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061CAF0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[26], c.r[11].w[0] << 10);
    set32(c.r[26], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061CB00:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[26].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CB08u);
    set32(c.r[26], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061CB20:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[26].d[0] = c.hi.d[0];
    c.r[23].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061CB30:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[11].w[0] << 5);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CB38u);
    c.budget -= 4;
L_0061CB40:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CB44u);
    c.r[26].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061CB50:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[26], c.r[11].w[0] << 15);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CB58u);
    c.budget -= 4;
L_0061CB60:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CB60u);
    c.r[26].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CB68u);
    c.budget -= 4;
L_0061CB70:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CB70u);
    c.r[26].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CB78u);
    c.budget -= 4;
L_0061CB80:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CB80u);
    c.r[26].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CB88u);
    c.budget -= 4;
L_0061CB90:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[26].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061CBA0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[11].w[0] << 26);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061CBC0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[24].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CBC8u);
    c.budget -= 4;
L_0061CBD0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[11].w[0] << 1);
    set32(c.r[25], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[11].w[0] << 2);
    c.budget -= 8;
L_0061CBF0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[26], c.r[11].w[0] << 31);
    set32(c.r[26], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061CC00:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[11].w[0] << 20);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061CC10:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[27].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CC18u);
    c.budget -= 4;
L_0061CC20:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[24].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CC28u);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061CC40:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[11].w[0] << 23);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CC48u);
    c.budget -= 4;
L_0061CC50:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[11].w[0] << 25);
    c.budget -= 4;
L_0061CC60:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[11].w[0] << 26);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061CC80:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[24].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CC88u);
    c.budget -= 4;
L_0061CC90:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CC90u);
    c.r[24].d[0] = c.hi.d[0];
    set32(c.r[24], c.r[11].w[0] << 29);
    c.budget -= 4;
L_0061CCA0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CCA0u);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[11].w[0] << 0);
    set32(c.r[25], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061CCC0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CCC0u);
    c.r[24].d[0] = c.hi.d[0];
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061CCD0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[11].w[0] << 1);
    set32(c.r[25], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[11].w[0] << 2);
    c.budget -= 8;
L_0061CCF0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[3].w[0] + c.r[11].w[0]);
    c.r[25].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061CD00:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.r[24].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061CD10:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[11].w[0] << 20);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061CD20:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CD24u);
    c.r[25].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061CD30:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[11].w[0] << 5);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CD38u);
    c.budget -= 4;
L_0061CD40:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[25].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CD48u);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061CD60:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CD64u);
    set32(c.r[25], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061CD70:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[25].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CD78u);
    c.budget -= 4;
L_0061CD80:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[11].w[0] << 23);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CD88u);
    c.budget -= 4;
L_0061CD90:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[11].w[0] << 26);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061CDB0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CDB0u);
    c.r[24].d[0] = c.hi.d[0];
    set32(c.r[24], c.r[11].w[0] << 29);
    c.budget -= 4;
L_0061CDC0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CDC0u);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[11].w[0] << 0);
    set32(c.r[25], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061CDE0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CDE0u);
    c.r[24].d[0] = c.hi.d[0];
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061CDF0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[11].w[0] << 10);
    c.budget -= 4;
L_0061CE00:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CE04u);
    c.r[25].d[0] = c.hi.d[0];
    set32(c.r[25], c.r[11].w[0] << 12);
    c.budget -= 8;
L_0061CE20:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CE24u);
    set32(c.r[25], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061CE30:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[11].w[0] << 14);
    set32(c.r[25], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061CE40:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CE40u);
    set32(c.r[25], c.r[11].w[0] << 15);
    set32(c.r[25], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061CE50:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CE50u);
    c.r[25].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CE58u);
    c.budget -= 4;
L_0061CE60:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CE60u);
    c.r[25].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CE68u);
    c.budget -= 4;
L_0061CE70:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[27].d[0] = c.hi.d[0];
    c.r[24].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CE7Cu);
    c.budget -= 8;
L_0061CE90:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[24].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CE98u);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061CEB0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[25].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CEB8u);
    c.budget -= 4;
L_0061CEC0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[27].d[0] = c.hi.d[0];
    set32(c.r[27], c.r[11].w[0] << 3);
    c.budget -= 4;
L_0061CED0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CED0u);
    c.r[24].d[0] = c.hi.d[0];
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061CEE0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CEE0u);
    c.r[27].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CEE8u);
    c.budget -= 4;
L_0061CEF0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CEF0u);
    c.r[25].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CEF8u);
    c.budget -= 4;
L_0061CF00:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CF00u);
    set32(c.r[25], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[11].w[0] << 21);
    c.budget -= 4;
L_0061CF10:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CF10u);
    set32(c.r[25], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061CF20:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CF20u);
    set32(c.r[26], c.r[11].w[0] << 9);
    set32(c.r[23], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061CF30:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CF30u);
    c.r[25].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061CF40:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CF40u);
    c.r[25].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061CF50:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CF54u);
    c.r[27].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061CF60:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[3].w[0] + c.r[11].w[0]);
    c.r[25].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061CF70:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.r[24].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061CF80:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[11].w[0] << 20);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061CF90:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CF94u);
    c.r[25].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061CFA0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[11].w[0] << 5);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CFA8u);
    c.budget -= 4;
L_0061CFB0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[25].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CFB8u);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061CFD0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CFD4u);
    set32(c.r[25], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061CFE0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[25].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CFE8u);
    c.budget -= 4;
L_0061CFF0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[11].w[0] << 23);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061CFF8u);
    c.budget -= 4;
L_0061D000:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[27].d[0] = c.hi.d[0];
    set32(c.r[27], c.r[11].w[0] << 3);
    c.budget -= 4;
L_0061D010:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D010u);
    c.r[24].d[0] = c.hi.d[0];
    set32(c.r[24], c.r[11].w[0] << 29);
    c.budget -= 4;
L_0061D020:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D020u);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[11].w[0] << 0);
    set32(c.r[25], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061D040:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D040u);
    c.r[24].d[0] = c.hi.d[0];
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061D050:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[11].w[0] << 10);
    c.budget -= 4;
L_0061D060:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D064u);
    c.r[25].d[0] = c.hi.d[0];
    set32(c.r[25], c.r[11].w[0] << 12);
    c.budget -= 8;
L_0061D080:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D084u);
    set32(c.r[25], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061D090:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[11].w[0] << 14);
    set32(c.r[25], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061D0A0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D0A0u);
    set32(c.r[25], c.r[11].w[0] << 15);
    set32(c.r[25], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061D0B0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D0B0u);
    c.r[25].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D0B8u);
    c.budget -= 4;
L_0061D0C0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D0C0u);
    c.r[25].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D0C8u);
    c.budget -= 4;
L_0061D0D0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D0D0u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D0D4u);
    c.r[25].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061D0E0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D0E0u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D0E4u);
    set32(c.r[25], c.r[11].w[0] << 24);
    c.budget -= 4;
L_0061D0F0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D0F0u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D0F4u);
    c.budget -= 4;
L_0061D100:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D100u);
    set32(c.r[26], c.r[11].w[0] << 20);
    set32(c.r[26], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061D110:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D110u);
    set32(c.r[26], c.r[11].w[0] << 21);
    set32(c.r[26], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061D120:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D120u);
    set32(c.r[26], c.r[11].w[0] << 22);
    c.r[15].d[0] = c.r[11].d[0] << 8;
    c.budget -= 4;
L_0061D130:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D130u);
    c.r[25].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D138u);
    c.budget -= 4;
L_0061D140:
    set32(c.r[25], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[11].w[0] << 30);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D148u);
    c.budget -= 4;
L_0061D150:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D150u);
    c.r[25].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D158u);
    c.budget -= 4;
L_0061D160:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[27], c.r[11].w[0] << 5);
    set32(c.r[27], c.r[3].w[0] + c.r[11].w[0]);
    c.r[27].d[0] = c.hi.d[0];
    c.budget -= 8;
L_0061D180:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[24].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D188u);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061D1A0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D1A4u);
    set32(c.r[27], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061D1B0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[27].d[0] = c.hi.d[0];
    set32(c.r[27], c.r[11].w[0] << 9);
    c.budget -= 4;
L_0061D1C0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D1C0u);
    set32(c.r[27], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[27], c.r[11].w[0] << 10);
    c.budget -= 4;
L_0061D1D0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D1D0u);
    set32(c.r[27], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[27], c.r[11].w[0] << 11);
    c.budget -= 4;
L_0061D1E0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D1E0u);
    c.r[24].d[0] = c.hi.d[0];
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061D1F0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[22].d[0] = c.sa;
    c.r[24].d[0] = c.hi.d[0];
    set32(c.r[24], c.r[11].w[0] << 16);
    c.budget -= 8;
L_0061D210:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[22], c.r[11].w[0] << 27);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D218u);
    c.budget -= 4;
L_0061D220:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[11].w[0] << 1);
    set32(c.r[25], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[11].w[0] << 2);
    c.budget -= 8;
L_0061D240:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0061C000u < 16384u) { entry = entries_0147[(t - 0x0061C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0061D250:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[3].w[0] + c.r[11].w[0]);
    c.r[25].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061D260:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.r[24].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061D270:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[11].w[0] << 20);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061D280:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[24].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D288u);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061D2A0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[11].w[0] << 23);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D2A8u);
    c.budget -= 4;
L_0061D2B0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[11].w[0] << 25);
    c.budget -= 4;
L_0061D2C0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[11].w[0] << 26);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061D2E0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[24].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D2E8u);
    c.budget -= 4;
L_0061D2F0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D2F0u);
    c.r[24].d[0] = c.hi.d[0];
    set32(c.r[24], c.r[11].w[0] << 29);
    c.budget -= 4;
L_0061D300:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D300u);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[11].w[0] << 0);
    set32(c.r[25], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061D320:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D320u);
    c.r[24].d[0] = c.hi.d[0];
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061D330:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[23], c.r[11].w[0] << 28);
    set32(c.r[27], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[27], c.r[11].w[0] << 12);
    c.budget -= 8;
L_0061D350:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D354u);
    c.r[27].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061D360:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D360u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D364u);
    c.r[27].d[0] = c.hi.d[0];
    set32(c.r[27], c.r[11].w[0] << 15);
    c.budget -= 8;
L_0061D380:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D380u);
    set32(c.r[27], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[27], c.r[11].w[0] << 11);
    c.budget -= 4;
L_0061D390:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D390u);
    c.r[24].d[0] = c.hi.d[0];
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061D3A0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[27], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[27], c.r[11].w[0] << 16);
    set32(c.r[27], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061D3C0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[27].d[0] = c.hi.d[0];
    set32(c.r[27], c.r[11].w[0] << 3);
    c.budget -= 4;
L_0061D3D0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D3D0u);
    c.r[24].d[0] = c.hi.d[0];
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061D3E0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[27].d[0] = c.hi.d[0];
    set32(c.r[27], c.r[11].w[0] << 16);
    set32(c.r[27], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061D400:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[27].d[0] = c.hi.d[0];
    set32(c.r[27], c.r[11].w[0] << 3);
    c.budget -= 4;
L_0061D410:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D410u);
    c.r[24].d[0] = c.hi.d[0];
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061D420:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D424u);
    c.r[27].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D42Cu);
    c.budget -= 6;
L_0061D438:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[26], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 6;
L_0061D450:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D450u);
    c.r[26].d[0] = c.hi.d[0];
    set32(c.r[26], c.r[11].w[0] << 27);
    c.budget -= 4;
L_0061D460:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D460u);
    c.r[23].d[0] = c.hi.d[0];
    set32(c.r[23], c.r[11].w[0] << 2);
    c.r[27].d[0] = c.hi.d[0];
    c.budget -= 8;
L_0061D480:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D480u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D484u);
    c.r[27].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D48Cu);
    c.budget -= 8;
L_0061D4A0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D4A0u);
    set32(c.r[27], c.r[3].w[0] + c.r[11].w[0]);
    c.r[27].d[0] = c.hi.d[0];
    c.r[27].d[0] = c.hi.d[0];
    c.budget -= 8;
L_0061D4C0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D4C4u);
    set32(c.r[27], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[27], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061D4E0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[27], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[27], c.r[11].w[0] << 27);
    c.budget -= 4;
L_0061D4F0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.r[24].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061D500:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[11].w[0] << 20);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061D510:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[11].w[0] << 5);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D518u);
    c.budget -= 4;
L_0061D520:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[11].w[0] << 26);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061D540:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[24].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D548u);
    c.budget -= 4;
L_0061D550:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D550u);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[11].w[0] << 0);
    set32(c.r[25], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061D570:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D570u);
    c.r[24].d[0] = c.hi.d[0];
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061D580:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[27], c.r[3].w[0] + c.r[11].w[0]);
    c.r[27].d[0] = c.hi.d[0];
    c.r[27].d[0] = c.hi.d[0];
    c.budget -= 8;
L_0061D5A0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[27].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D5A8u);
    c.budget -= 4;
L_0061D5B0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[27], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[28], c.r[11].w[0] << 0);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D5BCu);
    c.budget -= 8;
L_0061D5D0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[28], c.r[3].w[0] + c.r[11].w[0]);
    c.r[25].d[0] = c.hi.d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0061C000u < 16384u) { entry = entries_0147[(t - 0x0061C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0061D5F0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.r[24].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061D600:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[11].w[0] << 20);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061D610:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[11].w[0] << 5);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D618u);
    c.budget -= 4;
L_0061D620:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[25].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D628u);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061D640:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[11].w[0] << 23);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D648u);
    c.budget -= 4;
L_0061D650:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[11].w[0] << 25);
    c.budget -= 4;
L_0061D660:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[24], c.r[11].w[0] << 26);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061D680:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[24].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D688u);
    c.budget -= 4;
L_0061D690:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D690u);
    c.r[24].d[0] = c.hi.d[0];
    set32(c.r[24], c.r[11].w[0] << 29);
    c.budget -= 4;
L_0061D6A0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D6A0u);
    set32(c.r[24], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[11].w[0] << 0);
    set32(c.r[25], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061D6C0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D6C0u);
    c.r[24].d[0] = c.hi.d[0];
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061D6D0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[28], c.r[3].w[0] + c.r[11].w[0]);
    c.r[28].d[0] = c.hi.d[0];
    set32(c.r[28], c.r[11].w[0] << 4);
    c.budget -= 6;
L_0061D6E8:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[23].d[0] = c.hi.d[0];
    c.budget -= 6;
L_0061D700:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[23], c.r[11].w[0] << 12);
    set32(c.r[23], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061D710:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[23], c.r[11].w[0] << 13);
    set32(c.r[23], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061D720:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D720u);
    c.r[23].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D728u);
    c.budget -= 4;
L_0061D730:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[28], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[28], c.r[11].w[0] << 5);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D73Cu);
    c.budget -= 8;
L_0061D750:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[28].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D758u);
    c.budget -= 4;
L_0061D760:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D760u);
    set32(c.r[28], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[28], c.r[11].w[0] << 8);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D76Cu);
    c.budget -= 8;
L_0061D780:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D780u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D784u);
    c.r[28].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D78Cu);
    c.budget -= 8;
L_0061D7A0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D7A0u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D7A4u);
    set32(c.r[28], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[27], c.r[11].w[0] << 15);
    c.budget -= 8;
L_0061D7C0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D7C0u);
    c.r[28].d[0] = c.hi.d[0];
    set32(c.r[28], c.r[11].w[0] << 12);
    set32(c.r[28], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061D7E0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D7E0u);
    c.r[28].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D7E8u);
    c.budget -= 4;
L_0061D7F0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[28].d[0] = c.hi.d[0];
    set32(c.r[28], c.r[11].w[0] << 15);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D7FCu);
    c.budget -= 8;
L_0061D810:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[22], c.r[11].w[0] << 10);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D818u);
    c.budget -= 4;
L_0061D820:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D824u);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061D830:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[11].w[0] << 15);
    c.budget -= 4;
L_0061D840:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[11].w[0] << 16);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061D860:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[11].w[0] << 17);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061D870:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[11].w[0] << 18);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D878u);
    c.budget -= 4;
L_0061D880:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[11].w[0] << 20);
    c.budget -= 4;
L_0061D890:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[28].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D898u);
    c.budget -= 4;
L_0061D8A0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[28].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D8A8u);
    c.budget -= 4;
L_0061D8B0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D8B0u);
    c.r[28].d[0] = c.hi.d[0];
    set32(c.r[28], c.r[11].w[0] << 19);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D8BCu);
    c.budget -= 8;
L_0061D8D0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D8D0u);
    c.r[28].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D8D8u);
    set32(c.r[28], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061D8F0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D8F0u);
    set32(c.r[28], c.r[11].w[0] << 22);
    set32(c.r[28], c.r[3].w[0] + c.r[11].w[0]);
    c.r[28].d[0] = c.hi.d[0];
    c.budget -= 8;
L_0061D910:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D914u);
    c.r[28].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061D920:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[28], c.r[11].w[0] << 25);
    set32(c.r[28], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061D930:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[28], c.r[11].w[0] << 26);
    set32(c.r[28], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061D940:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[28], c.r[11].w[0] << 27);
    set32(c.r[28], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061D950:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[28], c.r[11].w[0] << 28);
    set32(c.r[28], c.r[3].w[0] + c.r[11].w[0]);
    c.r[28].d[0] = c.hi.d[0];
    c.budget -= 8;
L_0061D970:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[28], c.r[11].w[0] << 30);
    set32(c.r[28], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061D980:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[23].d[0] = c.hi.d[0];
    c.r[28].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061D990:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D990u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D994u);
    c.r[29].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061D9A0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D9A0u);
    set32(c.r[21], c.r[11].w[0] << 29);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061D9B0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D9B0u);
    set32(c.r[22], c.r[11].w[0] << 8);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D9B8u);
    c.r[29].d[0] = c.hi.d[0];
    c.budget -= 8;
L_0061D9D0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D9D0u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D9D4u);
    c.r[29].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061D9E0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D9E0u);
    set32(c.r[29], c.r[11].w[0] << 3);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061D9E8u);
    set32(c.r[29], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061DA00:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DA00u);
    set32(c.r[29], c.r[11].w[0] << 5);
    set32(c.r[29], c.r[3].w[0] + c.r[11].w[0]);
    c.r[29].d[0] = c.hi.d[0];
    c.budget -= 8;
L_0061DA20:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DA20u);
    set32(c.r[29], c.r[11].w[0] << 7);
    set32(c.r[29], c.r[3].w[0] + c.r[11].w[0]);
    c.r[29].d[0] = c.hi.d[0];
    c.budget -= 8;
L_0061DA40:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DA40u);
    set32(c.r[29], c.r[11].w[0] << 9);
    set32(c.r[29], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061DA50:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DA50u);
    set32(c.r[29], c.r[11].w[0] << 10);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DA58u);
    c.budget -= 4;
L_0061DA60:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DA60u);
    set32(c.r[29], c.r[11].w[0] << 10);
    c.r[29].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061DA70:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[28].d[0] = c.hi.d[0];
    set32(c.r[28], c.r[11].w[0] << 15);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DA7Cu);
    c.budget -= 8;
L_0061DA90:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[22], c.r[11].w[0] << 10);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DA98u);
    c.budget -= 4;
L_0061DAA0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DAA4u);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061DAB0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[11].w[0] << 15);
    c.budget -= 4;
L_0061DAC0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[11].w[0] << 16);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061DAE0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[11].w[0] << 17);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061DAF0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[11].w[0] << 18);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DAF8u);
    c.budget -= 4;
L_0061DB00:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[11].w[0] << 20);
    c.budget -= 4;
L_0061DB10:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[28].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DB18u);
    c.budget -= 4;
L_0061DB20:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[28].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DB28u);
    c.budget -= 4;
L_0061DB30:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DB30u);
    c.r[28].d[0] = c.hi.d[0];
    set32(c.r[28], c.r[11].w[0] << 19);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DB3Cu);
    c.budget -= 8;
L_0061DB50:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DB50u);
    c.r[28].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DB58u);
    set32(c.r[28], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061DB70:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DB70u);
    set32(c.r[28], c.r[11].w[0] << 22);
    set32(c.r[28], c.r[3].w[0] + c.r[11].w[0]);
    c.r[28].d[0] = c.hi.d[0];
    c.budget -= 8;
L_0061DB90:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DB94u);
    c.r[28].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061DBA0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[28], c.r[11].w[0] << 25);
    set32(c.r[28], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061DBB0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[28], c.r[11].w[0] << 26);
    set32(c.r[28], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061DBC0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[28], c.r[11].w[0] << 27);
    set32(c.r[28], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061DBD0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[28], c.r[11].w[0] << 30);
    set32(c.r[28], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061DBE0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[23].d[0] = c.hi.d[0];
    c.r[28].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061DBF0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[28], c.r[11].w[0] << 28);
    set32(c.r[28], c.r[3].w[0] + c.r[11].w[0]);
    c.r[28].d[0] = c.hi.d[0];
    c.budget -= 8;
L_0061DC10:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DC10u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DC14u);
    c.r[29].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061DC20:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DC20u);
    set32(c.r[21], c.r[11].w[0] << 29);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061DC30:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DC30u);
    set32(c.r[29], c.r[11].w[0] << 3);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DC38u);
    set32(c.r[29], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061DC50:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DC50u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DC54u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DC58u);
    c.budget -= 4;
L_0061DC60:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DC60u);
    c.r[29].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DC68u);
    c.r[29].d[0] = c.hi.d[0];
    c.budget -= 8;
L_0061DC80:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DC80u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DC84u);
    c.r[29].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DC8Cu);
    c.budget -= 8;
L_0061DCA0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DCA0u);
    set32(c.r[29], c.r[11].w[0] << 5);
    c.r[29].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061DCB0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DCB0u);
    set32(c.r[29], c.r[11].w[0] << 16);
    set32(c.r[29], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061DCC0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DCC0u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DCC4u);
    c.r[29].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061DCD0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DCD0u);
    set32(c.r[29], c.r[11].w[0] << 19);
    set32(c.r[29], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061DCE0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DCE0u);
    set32(c.r[29], c.r[11].w[0] << 10);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DCE8u);
    c.budget -= 4;
L_0061DCF0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DCF0u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DCF4u);
    c.r[29].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061DD00:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DD00u);
    set32(c.r[29], c.r[11].w[0] << 19);
    set32(c.r[29], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061DD10:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DD10u);
    set32(c.r[29], c.r[11].w[0] << 10);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DD18u);
    c.budget -= 4;
L_0061DD20:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DD20u);
    set32(c.r[29], c.r[11].w[0] << 9);
    set32(c.r[29], c.r[11].w[0] << 20);
    c.budget -= 4;
L_0061DD30:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[29], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[29], c.r[11].w[0] << 21);
    set32(c.r[29], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061DD50:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[23].d[0] = c.hi.d[0];
    c.r[29].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061DD60:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[23], c.r[11].w[0] << 19);
    set32(c.r[29], c.r[11].w[0] << 23);
    set32(c.r[29], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061DD80:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[29].d[0] = c.hi.d[0];
    c.r[29].d[0] = c.hi.d[0];
    set32(c.r[29], c.r[11].w[0] << 26);
    c.budget -= 8;
L_0061DDA0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[29], c.r[11].w[0] << 3);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DDA8u);
    set32(c.r[29], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061DDC0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DDC0u);
    c.r[29].d[0] = c.r[11].d[0] << 26;
    c.r[29].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DDCCu);
    c.budget -= 8;
L_0061DDE0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DDE0u);
    set32(c.r[29], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[29], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061DDF0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DDF0u);
    c.r[29].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DDF8u);
    c.budget -= 4;
L_0061DE00:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DE00u);
    set32(c.r[29], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[29], c.r[11].w[0] << 31);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DE0Cu);
    c.budget -= 8;
L_0061DE20:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DE20u);
    set32(c.r[30], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[30], c.r[11].w[0] << 1);
    set32(c.r[30], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061DE40:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DE40u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DE44u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DE48u);
    c.budget -= 4;
L_0061DE50:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DE50u);
    c.r[29].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DE58u);
    c.r[29].d[0] = c.hi.d[0];
    c.budget -= 8;
L_0061DE70:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DE70u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DE74u);
    c.r[29].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DE7Cu);
    c.budget -= 8;
L_0061DE90:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DE90u);
    set32(c.r[29], c.r[11].w[0] << 5);
    c.r[29].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061DEA0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DEA0u);
    set32(c.r[29], c.r[11].w[0] << 16);
    set32(c.r[29], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061DEB0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DEB0u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DEB4u);
    c.r[29].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061DEC0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DEC0u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DEC4u);
    c.r[29].d[0] = c.hi.d[0];
    c.r[29].d[0] = c.sa;
    c.budget -= 8;
L_0061DEE0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DEE0u);
    set32(c.r[29], c.r[11].w[0] << 19);
    set32(c.r[29], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061DEF0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DEF0u);
    set32(c.r[29], c.r[11].w[0] << 10);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DEF8u);
    c.budget -= 4;
L_0061DF00:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DF00u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DF04u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DF08u);
    c.budget -= 4;
L_0061DF10:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DF10u);
    c.r[29].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DF18u);
    c.r[29].d[0] = c.hi.d[0];
    c.budget -= 8;
L_0061DF30:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DF30u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DF34u);
    c.r[29].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DF3Cu);
    c.budget -= 8;
L_0061DF50:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DF50u);
    set32(c.r[29], c.r[11].w[0] << 5);
    c.r[29].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061DF60:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DF60u);
    set32(c.r[29], c.r[11].w[0] << 16);
    set32(c.r[29], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061DF70:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DF70u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DF74u);
    c.r[29].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061DF80:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DF80u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DF84u);
    c.r[29].d[0] = c.hi.d[0];
    c.r[29].d[0] = c.sa;
    c.budget -= 8;
L_0061DFA0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DFA0u);
    set32(c.r[29], c.r[11].w[0] << 10);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DFA8u);
    c.budget -= 4;
L_0061DFB0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DFB0u);
    c.r[29].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DFB8u);
    c.r[29].d[0] = c.hi.d[0];
    c.budget -= 8;
L_0061DFD0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DFD0u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DFD4u);
    c.r[29].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DFDCu);
    c.budget -= 8;
L_0061DFF0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061DFF0u);
    set32(c.r[29], c.r[11].w[0] << 5);
    c.r[29].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061E000:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E000u);
    set32(c.r[29], c.r[11].w[0] << 16);
    set32(c.r[29], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061E010:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E010u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E014u);
    c.r[29].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061E020:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E020u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E024u);
    c.r[29].d[0] = c.hi.d[0];
    c.r[29].d[0] = c.sa;
    c.budget -= 8;
L_0061E040:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E040u);
    set32(c.r[29], c.r[11].w[0] << 10);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E048u);
    c.budget -= 4;
L_0061E050:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E050u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E054u);
    c.r[29].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E05Cu);
    c.budget -= 8;
L_0061E070:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E070u);
    set32(c.r[29], c.r[11].w[0] << 5);
    c.r[29].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061E080:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E080u);
    set32(c.r[29], c.r[11].w[0] << 16);
    set32(c.r[29], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061E090:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E090u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E094u);
    c.r[29].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061E0A0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E0A0u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E0A4u);
    c.r[29].d[0] = c.hi.d[0];
    c.r[29].d[0] = c.sa;
    c.budget -= 8;
L_0061E0C0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E0C0u);
    set32(c.r[29], c.r[11].w[0] << 10);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E0C8u);
    c.budget -= 4;
L_0061E0D0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E0D0u);
    set32(c.r[30], c.r[11].w[0] << 2);
    set32(c.r[30], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[30], c.r[11].w[0] << 3);
    c.budget -= 8;
L_0061E0F0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E0F0u);
    set32(c.r[30], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[30], c.r[11].w[0] << 1);
    set32(c.r[30], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061E110:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E110u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E114u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E118u);
    c.budget -= 4;
L_0061E120:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E120u);
    c.r[29].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E128u);
    c.r[29].d[0] = c.hi.d[0];
    c.budget -= 8;
L_0061E140:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E140u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E144u);
    c.r[29].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E14Cu);
    c.budget -= 8;
L_0061E160:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E160u);
    set32(c.r[29], c.r[11].w[0] << 5);
    c.r[29].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061E170:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E170u);
    set32(c.r[29], c.r[11].w[0] << 16);
    set32(c.r[29], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061E180:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E180u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E184u);
    c.r[29].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061E190:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E190u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E194u);
    c.r[29].d[0] = c.hi.d[0];
    c.r[29].d[0] = c.sa;
    c.budget -= 8;
L_0061E1B0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E1B0u);
    set32(c.r[29], c.r[11].w[0] << 10);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E1B8u);
    c.budget -= 4;
L_0061E1C0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[28].d[0] = c.hi.d[0];
    set32(c.r[28], c.r[11].w[0] << 15);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E1CCu);
    c.budget -= 8;
L_0061E1E0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[22], c.r[11].w[0] << 10);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E1E8u);
    c.budget -= 4;
L_0061E1F0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E1F4u);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061E200:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[11].w[0] << 15);
    c.budget -= 4;
L_0061E210:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[11].w[0] << 16);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061E230:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[11].w[0] << 17);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061E240:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[11].w[0] << 18);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E248u);
    c.budget -= 4;
L_0061E250:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[11].w[0] << 20);
    c.budget -= 4;
L_0061E260:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[28].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E268u);
    c.budget -= 4;
L_0061E270:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[28].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E278u);
    c.budget -= 4;
L_0061E280:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E280u);
    c.r[28].d[0] = c.hi.d[0];
    set32(c.r[28], c.r[11].w[0] << 19);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E28Cu);
    c.budget -= 8;
L_0061E2A0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E2A0u);
    c.r[28].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E2A8u);
    set32(c.r[28], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061E2C0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E2C0u);
    set32(c.r[28], c.r[11].w[0] << 22);
    set32(c.r[28], c.r[3].w[0] + c.r[11].w[0]);
    c.r[28].d[0] = c.hi.d[0];
    c.budget -= 8;
L_0061E2E0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E2E4u);
    set32(c.r[30], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061E2F0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[29].d[0] = c.hi.d[0];
    c.r[30].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061E300:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[30], c.r[11].w[0] << 5);
    set32(c.r[30], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061E310:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[30].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E318u);
    c.budget -= 4;
L_0061E320:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[30].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E328u);
    c.budget -= 4;
L_0061E330:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[28].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E338u);
    c.budget -= 4;
L_0061E340:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[28], c.r[11].w[0] << 30);
    set32(c.r[28], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061E350:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[23].d[0] = c.hi.d[0];
    c.r[28].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061E360:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E360u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E364u);
    c.r[29].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061E370:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E370u);
    set32(c.r[21], c.r[11].w[0] << 29);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061E380:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E380u);
    set32(c.r[30], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E388u);
    c.r[30].d[0] = c.hi.d[0];
    c.budget -= 8;
L_0061E3A0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E3A0u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E3A4u);
    c.r[30].d[0] = c.hi.d[0];
    set32(c.r[30], c.r[11].w[0] << 11);
    c.budget -= 8;
L_0061E3C0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E3C0u);
    c.r[29].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E3C8u);
    c.r[29].d[0] = c.hi.d[0];
    c.budget -= 8;
L_0061E3E0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E3E0u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E3E4u);
    c.r[29].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E3ECu);
    c.budget -= 8;
L_0061E400:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E400u);
    set32(c.r[29], c.r[11].w[0] << 5);
    c.r[29].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061E410:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E410u);
    set32(c.r[29], c.r[11].w[0] << 16);
    set32(c.r[29], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061E420:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E420u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E424u);
    c.r[29].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061E430:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E430u);
    set32(c.r[29], c.r[11].w[0] << 10);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E438u);
    c.budget -= 4;
L_0061E440:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E440u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E444u);
    set32(c.r[30], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[30], c.r[11].w[0] << 12);
    c.budget -= 8;
L_0061E460:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E460u);
    set32(c.r[30], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[30], c.r[11].w[0] << 1);
    set32(c.r[30], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061E480:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E480u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E484u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E488u);
    c.budget -= 4;
L_0061E490:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E490u);
    c.r[29].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E498u);
    c.r[29].d[0] = c.hi.d[0];
    c.budget -= 8;
L_0061E4B0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E4B0u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E4B4u);
    c.r[29].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E4BCu);
    c.budget -= 8;
L_0061E4D0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E4D0u);
    set32(c.r[29], c.r[11].w[0] << 5);
    c.r[29].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061E4E0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E4E0u);
    set32(c.r[29], c.r[11].w[0] << 16);
    set32(c.r[29], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061E4F0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E4F0u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E4F4u);
    c.r[29].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061E500:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E500u);
    set32(c.r[29], c.r[11].w[0] << 10);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E508u);
    c.budget -= 4;
L_0061E510:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E510u);
    set32(c.r[29], c.r[11].w[0] << 10);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E518u);
    c.budget -= 4;
L_0061E520:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[28].d[0] = c.hi.d[0];
    set32(c.r[28], c.r[11].w[0] << 15);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E52Cu);
    c.budget -= 8;
L_0061E540:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[22], c.r[11].w[0] << 10);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E548u);
    c.budget -= 4;
L_0061E550:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E554u);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061E560:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[11].w[0] << 15);
    c.budget -= 4;
L_0061E570:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[11].w[0] << 16);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061E590:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[11].w[0] << 17);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061E5A0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[11].w[0] << 18);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E5A8u);
    c.budget -= 4;
L_0061E5B0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[11].w[0] << 20);
    c.budget -= 4;
L_0061E5C0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[28].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E5C8u);
    c.budget -= 4;
L_0061E5D0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[28].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E5D8u);
    c.budget -= 4;
L_0061E5E0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E5E0u);
    c.r[28].d[0] = c.hi.d[0];
    set32(c.r[28], c.r[11].w[0] << 19);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E5ECu);
    c.budget -= 8;
L_0061E600:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E600u);
    c.r[28].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E608u);
    set32(c.r[28], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061E620:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E620u);
    set32(c.r[28], c.r[11].w[0] << 22);
    set32(c.r[28], c.r[3].w[0] + c.r[11].w[0]);
    c.r[28].d[0] = c.hi.d[0];
    c.budget -= 8;
L_0061E640:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E644u);
    set32(c.r[30], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061E650:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[29].d[0] = c.hi.d[0];
    c.r[30].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061E660:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[30], c.r[11].w[0] << 5);
    set32(c.r[30], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061E670:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[30].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E678u);
    c.budget -= 4;
L_0061E680:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[30].d[0] = c.hi.d[0];
    set32(c.r[30], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061E690:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[28].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E698u);
    c.budget -= 4;
L_0061E6A0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[28], c.r[11].w[0] << 30);
    set32(c.r[28], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061E6B0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[23].d[0] = c.hi.d[0];
    c.r[28].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061E6C0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E6C0u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E6C4u);
    c.r[29].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061E6D0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E6D0u);
    set32(c.r[21], c.r[11].w[0] << 29);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061E6E0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E6E0u);
    c.r[30].d[0] = c.hi.d[0];
    set32(c.r[30], c.r[3].w[0] + c.r[11].w[0]);
    c.r[30].d[0] = c.hi.d[0];
    c.budget -= 8;
L_0061E700:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E700u);
    c.r[29].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E708u);
    c.r[29].d[0] = c.hi.d[0];
    c.budget -= 8;
L_0061E720:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E720u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E724u);
    c.r[29].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E72Cu);
    c.budget -= 8;
L_0061E740:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E740u);
    set32(c.r[29], c.r[11].w[0] << 5);
    c.r[29].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061E750:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E750u);
    set32(c.r[29], c.r[11].w[0] << 16);
    set32(c.r[29], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061E760:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E760u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E764u);
    c.r[29].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061E770:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E770u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E774u);
    c.r[29].d[0] = c.hi.d[0];
    c.r[29].d[0] = c.sa;
    c.budget -= 8;
L_0061E790:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E790u);
    set32(c.r[29], c.r[11].w[0] << 10);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E798u);
    c.budget -= 4;
L_0061E7A0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E7A0u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E7A4u);
    set32(c.r[30], c.r[11].w[0] << 15);
    set32(c.r[30], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061E7C0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E7C0u);
    c.r[29].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E7C8u);
    c.r[29].d[0] = c.hi.d[0];
    c.budget -= 8;
L_0061E7E0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E7E0u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E7E4u);
    c.r[29].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E7ECu);
    c.budget -= 8;
L_0061E800:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E800u);
    set32(c.r[29], c.r[11].w[0] << 5);
    c.r[29].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061E810:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E810u);
    set32(c.r[29], c.r[11].w[0] << 16);
    set32(c.r[29], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061E820:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E820u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E824u);
    c.r[29].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061E830:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E830u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E834u);
    c.r[29].d[0] = c.hi.d[0];
    c.r[29].d[0] = c.sa;
    c.budget -= 8;
L_0061E850:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E850u);
    set32(c.r[29], c.r[11].w[0] << 10);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E858u);
    c.budget -= 4;
L_0061E860:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E860u);
    c.r[30].d[0] = c.r[11].d[0] << 15;
    set32(c.r[30], c.r[11].w[0] << 15);
    set32(c.r[30], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061E880:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E880u);
    c.r[29].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E888u);
    c.r[29].d[0] = c.hi.d[0];
    c.budget -= 8;
L_0061E8A0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E8A0u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E8A4u);
    c.r[29].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E8ACu);
    c.budget -= 8;
L_0061E8C0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E8C0u);
    set32(c.r[29], c.r[11].w[0] << 5);
    c.r[29].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061E8D0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E8D0u);
    set32(c.r[29], c.r[11].w[0] << 16);
    set32(c.r[29], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061E8E0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E8E0u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E8E4u);
    c.r[29].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061E8F0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E8F0u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E8F4u);
    c.r[29].d[0] = c.hi.d[0];
    c.r[29].d[0] = c.sa;
    c.budget -= 8;
L_0061E910:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E910u);
    set32(c.r[29], c.r[11].w[0] << 10);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E918u);
    c.budget -= 4;
L_0061E920:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E920u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; set32(c.r[30], c.r[3].w[0] + c.r[11].w[0]);  c.pc = t; if (t - 0x0061C000u < 16384u) { entry = entries_0147[(t - 0x0061C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0061E940:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E940u);
    set32(c.r[30], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[30], c.r[11].w[0] << 18);
    c.budget -= 4;
L_0061E950:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E950u);
    set32(c.r[30], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[30], c.r[11].w[0] << 19);
    set32(c.r[30], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061E970:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E970u);
    set32(c.r[30], c.r[11].w[0] << 20);
    set32(c.r[30], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0061C000u < 16384u) { entry = entries_0147[(t - 0x0061C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0061E990:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E990u);
    set32(c.r[29], c.r[11].w[0] << 10);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E998u);
    c.budget -= 4;
L_0061E9A0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E9A0u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E9A4u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E9A8u);
    c.budget -= 4;
L_0061E9B0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E9B0u);
    c.r[29].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E9B8u);
    c.r[29].d[0] = c.hi.d[0];
    c.budget -= 8;
L_0061E9D0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E9D0u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E9D4u);
    c.r[29].d[0] = c.hi.d[0];
    set32(c.r[30], c.r[11].w[0] << 21);
    c.budget -= 8;
L_0061E9F0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061E9F0u);
    set32(c.r[29], c.r[11].w[0] << 5);
    c.r[29].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061EA00:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EA00u);
    set32(c.r[29], c.r[11].w[0] << 16);
    set32(c.r[29], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061EA10:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EA10u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EA14u);
    c.r[29].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061EA20:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EA20u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EA24u);
    c.r[29].d[0] = c.hi.d[0];
    c.r[29].d[0] = c.sa;
    c.budget -= 8;
L_0061EA40:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EA40u);
    set32(c.r[29], c.r[11].w[0] << 10);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EA48u);
    c.budget -= 4;
L_0061EA50:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EA50u);
    set32(c.r[30], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EA58u);
    c.r[30].d[0] = c.hi.d[0];
    c.budget -= 8;
L_0061EA70:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EA70u);
    c.r[30].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EA78u);
    c.budget -= 4;
L_0061EA80:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EA80u);
    set32(c.r[30], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[30], c.r[11].w[0] << 24);
    c.budget -= 4;
L_0061EA90:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EA90u);
    set32(c.r[30], c.r[3].w[0] + c.r[11].w[0]);
    c.r[30].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061EAA0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EAA0u);
    set32(c.r[29], c.r[11].w[0] << 10);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EAA8u);
    c.budget -= 4;
L_0061EAB0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EAB0u);
    set32(c.r[30], c.r[11].w[0] << 26);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EAB8u);
    c.budget -= 4;
L_0061EAC0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EAC0u);
    set32(c.r[30], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[30], c.r[11].w[0] << 1);
    set32(c.r[30], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061EAE0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EAE0u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EAE4u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EAE8u);
    c.budget -= 4;
L_0061EAF0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EAF0u);
    c.r[29].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EAF8u);
    c.r[29].d[0] = c.hi.d[0];
    c.budget -= 8;
L_0061EB10:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EB10u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EB14u);
    c.r[29].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EB1Cu);
    c.budget -= 8;
L_0061EB30:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EB30u);
    set32(c.r[29], c.r[11].w[0] << 5);
    c.r[29].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061EB40:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EB40u);
    set32(c.r[29], c.r[11].w[0] << 16);
    set32(c.r[29], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061EB50:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EB50u);
    set32(c.r[30], c.r[3].w[0] + c.r[11].w[0]);
    c.r[30].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061EB60:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EB60u);
    set32(c.r[29], c.r[11].w[0] << 10);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EB68u);
    c.budget -= 4;
L_0061EB70:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EB70u);
    c.r[30].d[0] = c.hi.d[0];
    set32(c.r[30], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[30], c.r[11].w[0] << 28);
    c.budget -= 8;
L_0061EB90:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EB90u);
    set32(c.r[29], c.r[11].w[0] << 19);
    set32(c.r[29], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061EBA0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EBA0u);
    set32(c.r[29], c.r[11].w[0] << 10);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EBA8u);
    c.budget -= 4;
L_0061EBB0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[28].d[0] = c.hi.d[0];
    set32(c.r[28], c.r[11].w[0] << 15);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EBBCu);
    c.budget -= 8;
L_0061EBD0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[22], c.r[11].w[0] << 10);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EBD8u);
    c.budget -= 4;
L_0061EBE0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EBE4u);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061EBF0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[11].w[0] << 15);
    c.budget -= 4;
L_0061EC00:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[11].w[0] << 16);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061EC20:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[11].w[0] << 17);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061EC30:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[11].w[0] << 18);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EC38u);
    c.budget -= 4;
L_0061EC40:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[21], c.r[11].w[0] << 20);
    c.budget -= 4;
L_0061EC50:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[28].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EC58u);
    c.budget -= 4;
L_0061EC60:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[28].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EC68u);
    c.budget -= 4;
L_0061EC70:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EC70u);
    c.r[28].d[0] = c.hi.d[0];
    set32(c.r[28], c.r[11].w[0] << 19);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EC7Cu);
    c.budget -= 8;
L_0061EC90:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EC90u);
    c.r[28].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EC98u);
    set32(c.r[28], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061ECB0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061ECB0u);
    set32(c.r[28], c.r[11].w[0] << 22);
    set32(c.r[28], c.r[3].w[0] + c.r[11].w[0]);
    c.r[28].d[0] = c.hi.d[0];
    c.budget -= 8;
L_0061ECD0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061ECD4u);
    c.r[28].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061ECE0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[28], c.r[11].w[0] << 25);
    set32(c.r[28], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061ECF0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[28], c.r[11].w[0] << 26);
    set32(c.r[28], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061ED00:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[28], c.r[11].w[0] << 27);
    set32(c.r[28], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061ED10:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[28], c.r[11].w[0] << 30);
    set32(c.r[28], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061ED20:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    c.r[23].d[0] = c.hi.d[0];
    c.r[28].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061ED30:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[28], c.r[11].w[0] << 28);
    set32(c.r[28], c.r[3].w[0] + c.r[11].w[0]);
    c.r[28].d[0] = c.hi.d[0];
    c.budget -= 8;
L_0061ED50:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061ED50u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061ED54u);
    c.r[29].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061ED60:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061ED60u);
    set32(c.r[21], c.r[11].w[0] << 29);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061ED68u);
    c.budget -= 4;
L_0061ED70:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061ED70u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[22].d[0] = c.lo.d[0];
    c.r[30].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061ED7Cu);
    c.budget -= 8;
L_0061ED90:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061ED90u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061ED94u);
    c.r[29].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061EDA0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EDA0u);
    set32(c.r[29], c.r[11].w[0] << 3);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EDA8u);
    set32(c.r[29], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061EDC0:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[29], c.r[11].w[0] << 5);
    set32(c.r[29], c.r[3].w[0] + c.r[11].w[0]);
    c.r[29].d[0] = c.hi.d[0];
    c.budget -= 8;
L_0061EDE0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EDE0u);
    set32(c.r[29], c.r[11].w[0] << 7);
    set32(c.r[29], c.r[3].w[0] + c.r[11].w[0]);
    c.r[29].d[0] = c.hi.d[0];
    c.budget -= 8;
L_0061EE00:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EE00u);
    set32(c.r[29], c.r[11].w[0] << 9);
    set32(c.r[29], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061EE10:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EE10u);
    set32(c.r[29], c.r[11].w[0] << 10);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EE18u);
    c.budget -= 4;
L_0061EE20:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EE20u);
    c.r[22].d[0] = c.sa;
    c.r[30].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EE2Cu);
    c.budget -= 8;
L_0061EE40:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EE40u);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EE44u);
    c.r[29].d[0] = c.hi.d[0];
    c.budget -= 4;
L_0061EE50:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EE50u);
    set32(c.r[29], c.r[11].w[0] << 3);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EE58u);
    set32(c.r[29], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 8;
L_0061EE70:
    set32(c.r[21], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[29], c.r[11].w[0] << 5);
    set32(c.r[29], c.r[3].w[0] + c.r[11].w[0]);
    c.r[29].d[0] = c.hi.d[0];
    c.budget -= 8;
L_0061EE90:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EE90u);
    set32(c.r[29], c.r[11].w[0] << 7);
    set32(c.r[29], c.r[3].w[0] + c.r[11].w[0]);
    c.r[29].d[0] = c.hi.d[0];
    c.budget -= 8;
L_0061EEB0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EEB0u);
    set32(c.r[29], c.r[11].w[0] << 9);
    set32(c.r[29], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0061EEC0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EEC0u);
    set32(c.r[29], c.r[11].w[0] << 10);
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061EEC8u);
    c.budget -= 4;
L_0061EED0:
    set32(c.r[21], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[21], c.r[1].w[0] << 21);
    c.r[21].d[0] = c.hi.d[0];
    set32(c.r[21], c.r[3].w[0] + c.r[1].w[0]);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061EEE0u);
    c.r[21].d[0] = c.hi.d[0];
    set32(c.r[21], c.r[3].w[0] + c.r[1].w[0]);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061EEECu);
    set32(c.r[21], c.r[1].w[0] << 23);
    c.r[21].d[0] = c.hi.d[0];
    set32(c.r[21], c.r[3].w[0] + c.r[1].w[0]);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061EEFCu);
    c.r[21].d[0] = c.hi.d[0];
    set32(c.r[21], c.r[3].w[0] + c.r[1].w[0]);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061EF08u);
    set32(c.r[21], c.r[1].w[0] << 25);
    c.r[21].d[0] = c.hi.d[0];
    set32(c.r[21], c.r[3].w[0] + c.r[1].w[0]);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061EF18u);
    set32(c.r[21], c.r[1].w[0] << 26);
    c.r[21].d[0] = c.hi.d[0];
    set32(c.r[21], c.r[3].w[0] + c.r[1].w[0]);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061EF28u);
    c.r[21].d[0] = c.hi.d[0];
    set32(c.r[21], c.r[3].w[0] + c.r[1].w[0]);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061EF34u);
    set32(c.r[21], c.r[1].w[0] << 28);
    c.r[21].d[0] = c.hi.d[0];
    set32(c.r[21], c.r[3].w[0] + c.r[1].w[0]);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061EF44u);
    set32(c.r[21], c.r[1].w[0] << 29);
    c.r[21].d[0] = c.hi.d[0];
    set32(c.r[21], c.r[3].w[0] + c.r[1].w[0]);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061EF54u);
    set32(c.r[21], c.r[1].w[0] << 30);
    set32(c.r[21], c.r[3].w[0] + c.r[1].w[0]);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061EF60u);
    c.r[21].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061EF68u);
    c.r[22].d[0] = c.hi.d[0];
    set32(c.r[22], c.r[3].w[0] + c.r[1].w[0]);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061EF74u);
    set32(c.r[22], c.r[1].w[0] << 1);
    set32(c.r[22], c.r[3].w[0] + c.r[1].w[0]);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061EF80u);
    c.r[22].d[0] = c.hi.d[0];
    set32(c.r[22], c.r[3].w[0] + c.r[1].w[0]);
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061EF8Cu);
    c.budget -= 50;
    { const std::uint32_t t = c.r[3].w[0]; set32(c.r[22], c.r[3].w[0] + c.r[1].w[0]);  c.pc = t; if (t - 0x0061C000u < 16384u) { entry = entries_0147[(t - 0x0061C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0061FBB0:
    c.r[30].d[0] = c.hi.d[0];
    c.budget -= 2;
L_0061FBB8:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061FBB8u);
    c.budget -= 2;
L_0061FBC0:
    c.r[30].d[0] = c.hi.d[0];
    c.budget -= 2;
L_0061FBC8:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061FBC8u);
    c.budget -= 2;
L_0061FBD0:
    c.r[31].d[0] = c.hi.d[0];
    c.budget -= 2;
L_0061FBD8:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061FBD8u);
    c.budget -= 2;
L_0061FBE0:
    c.r[31].d[0] = c.hi.d[0];
    c.budget -= 2;
L_0061FBE8:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061FBE8u);
    c.budget -= 2;
L_0061FBF0:
    c.r[31].d[0] = c.hi.d[0];
    c.budget -= 2;
L_0061FBF8:
    c.r[31].d[0] = c.sa;
    c.budget -= 2;
L_0061FC00:
    set32(c.r[31], c.r[11].w[0] << 3);
    c.budget -= 2;
L_0061FC08:
    set32(c.r[31], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 2;
L_0061FC10:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061FC10u);
    c.budget -= 2;
L_0061FC18:
    c.r[31].d[0] = c.hi.d[0];
    c.budget -= 2;
L_0061FC20:
    set32(c.r[31], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 2;
L_0061FC28:
    c.r[31].d[0] = c.r[11].d[0] << 4;
    c.budget -= 2;
L_0061FC30:
    c.r[31].d[0] = c.hi.d[0];
    c.budget -= 2;
L_0061FC38:
    c.r[31].d[0] = c.sa;
    c.budget -= 2;
L_0061FC40:
    set32(c.r[31], c.r[11].w[0] << 6);
    c.budget -= 2;
L_0061FC48:
    set32(c.r[31], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 2;
L_0061FC50:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061FC50u);
    c.budget -= 2;
L_0061FC58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0061C000u < 16384u) { entry = entries_0147[(t - 0x0061C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0061FC60:
    set32(c.r[31], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 2;
L_0061FC68:
    set32(c.r[31], c.r[11].w[0] << 8);
    c.budget -= 2;
L_0061FC70:
    c.r[31].d[0] = c.hi.d[0];
    c.budget -= 2;
L_0061FC78:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061FC78u);
    c.budget -= 2;
L_0061FC80:
    set32(c.r[31], c.r[11].w[0] << 9);
    c.budget -= 2;
L_0061FC88:
    set32(c.r[31], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 2;
L_0061FC90:
    set32(c.r[31], c.r[11].w[0] << 10);
    c.budget -= 2;
L_0061FC98:
    set32(c.r[31], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 2;
L_0061FCA0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061FCA0u);
    c.budget -= 2;
L_0061FCA8:
    c.r[31].d[0] = c.hi.d[0];
    c.budget -= 2;
L_0061FCB0:
    set32(c.r[31], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 2;
L_0061FCB8:
    set32(c.r[31], c.r[11].w[0] << 12);
    c.budget -= 2;
L_0061FCC0:
    set32(c.r[31], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 2;
L_0061FCC8:
    c.r[31].d[0] = c.r[11].d[0] << 12;
    c.budget -= 2;
L_0061FCD0:
    c.r[31].d[0] = c.hi.d[0];
    c.budget -= 2;
L_0061FCD8:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061FCD8u);
    c.budget -= 2;
L_0061FCE0:
    set32(c.r[31], c.r[11].w[0] << 14);
    c.budget -= 2;
L_0061FCE8:
    set32(c.r[31], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 2;
L_0061FCF0:
    set32(c.r[31], c.r[11].w[0] << 15);
    c.budget -= 2;
L_0061FCF8:
    set32(c.r[31], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 2;
L_0061FD00:
    set32(c.r[31], c.r[11].w[0] << 16);
    c.budget -= 2;
L_0061FD08:
    set32(c.r[31], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 2;
L_0061FD10:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061FD10u);
    c.budget -= 2;
L_0061FD18:
    c.r[31].d[0] = c.hi.d[0];
    c.budget -= 2;
L_0061FD20:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061FD20u);
    c.budget -= 2;
L_0061FD28:
    c.r[31].d[0] = c.hi.d[0];
    c.budget -= 2;
L_0061FD30:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061FD30u);
    c.budget -= 2;
L_0061FD38:
    c.r[31].d[0] = c.hi.d[0];
    c.budget -= 2;
L_0061FD40:
    set32(c.r[31], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 2;
L_0061FD48:
    set32(c.r[31], c.r[11].w[0] << 20);
    c.budget -= 2;
L_0061FD50:
    set32(c.r[31], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 2;
L_0061FD58:
    set32(c.r[31], c.r[11].w[0] << 21);
    c.budget -= 2;
L_0061FD60:
    set32(c.r[31], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 2;
L_0061FD68:
    set32(c.r[31], c.r[11].w[0] << 22);
    c.budget -= 2;
L_0061FD70:
    c.r[31].d[0] = c.hi.d[0];
    c.budget -= 2;
L_0061FD78:
    c.r[31].d[0] = c.sa;
    c.budget -= 2;
L_0061FD80:
    set32(c.r[31], c.r[11].w[0] << 23);
    c.budget -= 2;
L_0061FD88:
    set32(c.r[31], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 2;
L_0061FD90:
    set32(c.r[31], c.r[11].w[0] << 24);
    c.budget -= 2;
L_0061FD98:
    set32(c.r[31], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 2;
L_0061FDA0:
    set32(c.r[31], c.r[11].w[0] << 25);
    c.budget -= 2;
L_0061FDA8:
    set32(c.r[31], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 2;
L_0061FDB0:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061FDB0u);
    c.budget -= 2;
L_0061FDB8:
    c.r[31].d[0] = c.hi.d[0];
    c.budget -= 2;
L_0061FDC0:
    set32(c.r[31], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 2;
L_0061FDC8:
    set32(c.r[31], c.r[11].w[0] << 27);
    c.budget -= 2;
L_0061FDD0:
    set32(c.r[31], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 2;
L_0061FDD8:
    set32(c.r[31], c.r[11].w[0] << 28);
    c.budget -= 2;
L_0061FDE0:
    c.r[31].d[0] = c.hi.d[0];
    c.budget -= 2;
L_0061FDE8:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061FDE8u);
    c.budget -= 2;
L_0061FDF0:
    c.r[31].d[0] = c.hi.d[0];
    c.budget -= 2;
L_0061FDF8:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061FDF8u);
    c.budget -= 2;
L_0061FE00:
    c.r[31].d[0] = c.hi.d[0];
    c.budget -= 2;
L_0061FE08:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061FE08u);
    c.budget -= 2;
L_0061FE10:
    c.r[31].d[0] = c.hi.d[0];
    c.budget -= 2;
L_0061FE18:
    if (c.r[3].sd[0] >= c.r[11].sd[0]) trap(c, 0x0061FE18u);
    c.budget -= 2;
L_0061FE20:
    c.budget -= 2;
L_0061FE28:
    c.budget -= 2;
L_0061FE30:
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061FE30u);
    c.r[31].d[0] = c.r[1].d[0] << 14;
    set32(c.r[31], c.r[1].w[0] << 15);
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].d[0] = c.hi.d[0];  c.pc = t; if (t - 0x0061C000u < 16384u) { entry = entries_0147[(t - 0x0061C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0061FF98:
    c.r[31].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[1].w[0]);
    c.r[31].d[0] = c.lo.d[0];
    set32(c.r[31], c.r[3].w[0] + c.r[1].w[0]);
    c.r[31].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[1].sd[0]) trap(c, 0x0061FFA8u);
    c.r[31].d[0] = c.r[1].d[0] << 23;
    set32(c.r[31], c.r[1].w[0] << 24);
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].d[0] = c.hi.d[0];  c.pc = t; if (t - 0x0061C000u < 16384u) { entry = entries_0147[(t - 0x0061C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
}

}
