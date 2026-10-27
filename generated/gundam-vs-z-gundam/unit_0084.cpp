#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0084[4096] = {
    1, 2, 3, 4, 0, 5, 6, 7, 8, 0, 9, 10, 11, 12, 13, 14, 0, 15, 0, 16, 0, 0, 17, 18, 19, 20, 21, 22, 0, 23, 24, 0,
    25, 0, 26, 27, 28, 0, 29, 0, 0, 0, 30, 31, 0, 0, 32, 0, 0, 33, 34, 35, 36, 37, 38, 0, 0, 39, 40, 41, 0, 42, 43, 0,
    44, 45, 46, 0, 0, 47, 48, 0, 49, 0, 50, 0, 0, 51, 52, 0, 53, 0, 0, 0, 54, 0, 0, 0, 55, 56, 0, 57, 0, 0, 58, 0,
    0, 0, 59, 60, 0, 0, 61, 0, 62, 63, 0, 64, 65, 0, 0, 0, 0, 66, 0, 0, 67, 68, 0, 0, 69, 0, 0, 0, 70, 0, 0, 71,
    0, 72, 0, 73, 0, 0, 0, 0, 74, 75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 78, 0, 79, 0, 80, 0, 0, 0,
    0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 83, 0, 84, 0, 0, 0, 0, 0, 85, 0, 86, 0, 87, 0, 0, 0, 0, 88, 89, 0,
    90, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0,
    94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0,
    97, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0,
    101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0,
    103, 0, 0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0,
    0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    118, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0,
    0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 131, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0,
    134, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 140, 0, 141, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 147, 0,
    0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0,
    155, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0,
    160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0,
    0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0,
    181, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0,
    0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0,
    193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0,
    200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 207, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 212, 0,
    0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    220, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 229, 0, 0,
    0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 237,
    0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 242, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 254, 0, 0, 0, 255, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 260, 0, 0, 0, 0, 261, 0, 262, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0,
    267, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    287, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 291, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0,
    0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 0, 297, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0,
    0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 305,
    0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0,
    311, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 314, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 318,
    0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0,
    329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0,
    0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0,
    350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0,
    359, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 362, 0, 0, 363, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0,
    0, 367, 0, 0, 0, 0, 0, 368, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 378, 0, 0, 379, 0,
    0, 0, 380, 0, 381, 0, 0, 0, 382, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 385, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 388, 0, 0, 0, 389, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 393, 0, 0,
    394, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0,
    402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 404, 0, 0, 0, 0, 0, 0, 405, 0,
    0, 0, 0, 406, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 411, 0, 412, 0, 0, 0,
    413, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0, 0,
    0, 425, 0, 426, 0, 0, 427, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0,
    0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 436, 0, 0, 0, 437, 0, 0, 0,
    0, 0, 0, 0, 438, 0, 0, 0, 439, 0, 0, 0, 0, 440, 0, 0, 441, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 448, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 451, 0,
    452, 0, 0, 0, 453, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 457, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 461, 0, 0, 0, 0, 462,
    0, 0, 463, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 466, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 472, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 474, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 476, 0, 0, 0, 477, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    479, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 483, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0,
};

void unit_0084(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00310000;
    case 2u: goto L_00310004;
    case 3u: goto L_00310008;
    case 4u: goto L_0031000C;
    case 5u: goto L_00310014;
    case 6u: goto L_00310018;
    case 7u: goto L_0031001C;
    case 8u: goto L_00310020;
    case 9u: goto L_00310028;
    case 10u: goto L_0031002C;
    case 11u: goto L_00310030;
    case 12u: goto L_00310034;
    case 13u: goto L_00310038;
    case 14u: goto L_0031003C;
    case 15u: goto L_00310044;
    case 16u: goto L_0031004C;
    case 17u: goto L_00310058;
    case 18u: goto L_0031005C;
    case 19u: goto L_00310060;
    case 20u: goto L_00310064;
    case 21u: goto L_00310068;
    case 22u: goto L_0031006C;
    case 23u: goto L_00310074;
    case 24u: goto L_00310078;
    case 25u: goto L_00310080;
    case 26u: goto L_00310088;
    case 27u: goto L_0031008C;
    case 28u: goto L_00310090;
    case 29u: goto L_00310098;
    case 30u: goto L_003100A8;
    case 31u: goto L_003100AC;
    case 32u: goto L_003100B8;
    case 33u: goto L_003100C4;
    case 34u: goto L_003100C8;
    case 35u: goto L_003100CC;
    case 36u: goto L_003100D0;
    case 37u: goto L_003100D4;
    case 38u: goto L_003100D8;
    case 39u: goto L_003100E4;
    case 40u: goto L_003100E8;
    case 41u: goto L_003100EC;
    case 42u: goto L_003100F4;
    case 43u: goto L_003100F8;
    case 44u: goto L_00310100;
    case 45u: goto L_00310104;
    case 46u: goto L_00310108;
    case 47u: goto L_00310114;
    case 48u: goto L_00310118;
    case 49u: goto L_00310120;
    case 50u: goto L_00310128;
    case 51u: goto L_00310134;
    case 52u: goto L_00310138;
    case 53u: goto L_00310140;
    case 54u: goto L_00310150;
    case 55u: goto L_00310160;
    case 56u: goto L_00310164;
    case 57u: goto L_0031016C;
    case 58u: goto L_00310178;
    case 59u: goto L_00310188;
    case 60u: goto L_0031018C;
    case 61u: goto L_00310198;
    case 62u: goto L_003101A0;
    case 63u: goto L_003101A4;
    case 64u: goto L_003101AC;
    case 65u: goto L_003101B0;
    case 66u: goto L_003101C4;
    case 67u: goto L_003101D0;
    case 68u: goto L_003101D4;
    case 69u: goto L_003101E0;
    case 70u: goto L_003101F0;
    case 71u: goto L_003101FC;
    case 72u: goto L_00310204;
    case 73u: goto L_0031020C;
    case 74u: goto L_00310220;
    case 75u: goto L_00310224;
    case 76u: goto L_00310240;
    case 77u: goto L_00310254;
    case 78u: goto L_00310260;
    case 79u: goto L_00310268;
    case 80u: goto L_00310270;
    case 81u: goto L_00310294;
    case 82u: goto L_0031029C;
    case 83u: goto L_003102B0;
    case 84u: goto L_003102B8;
    case 85u: goto L_003102D0;
    case 86u: goto L_003102D8;
    case 87u: goto L_003102E0;
    case 88u: goto L_003102F4;
    case 89u: goto L_003102F8;
    case 90u: goto L_00310300;
    case 91u: goto L_00310310;
    case 92u: goto L_00310320;
    case 93u: goto L_00310370;
    case 94u: goto L_00310380;
    case 95u: goto L_003103D0;
    case 96u: goto L_003103E0;
    case 97u: goto L_00310400;
    case 98u: goto L_00310420;
    case 99u: goto L_00310430;
    case 100u: goto L_00310470;
    case 101u: goto L_00310480;
    case 102u: goto L_003104F0;
    case 103u: goto L_00310500;
    case 104u: goto L_00310514;
    case 105u: goto L_00310520;
    case 106u: goto L_00310538;
    case 107u: goto L_00310550;
    case 108u: goto L_00310568;
    case 109u: goto L_00310598;
    case 110u: goto L_003105D0;
    case 111u: goto L_003105F8;
    case 112u: goto L_0031064C;
    case 113u: goto L_0031066C;
    case 114u: goto L_0031068C;
    case 115u: goto L_00310700;
    case 116u: goto L_00310710;
    case 117u: goto L_00310740;
    case 118u: goto L_00310800;
    case 119u: goto L_00310810;
    case 120u: goto L_00310820;
    case 121u: goto L_00310830;
    case 122u: goto L_00310840;
    case 123u: goto L_00310850;
    case 124u: goto L_00310970;
    case 125u: goto L_003109F0;
    case 126u: goto L_00310A10;
    case 127u: goto L_00310A40;
    case 128u: goto L_00310A60;
    case 129u: goto L_00310A78;
    case 130u: goto L_00310AC8;
    case 131u: goto L_00310AD0;
    case 132u: goto L_00310AE0;
    case 133u: goto L_00310AF0;
    case 134u: goto L_00310B00;
    case 135u: goto L_00310B10;
    case 136u: goto L_00310B20;
    case 137u: goto L_00310B30;
    case 138u: goto L_00310B40;
    case 139u: goto L_00310B50;
    case 140u: goto L_00310B90;
    case 141u: goto L_00310B98;
    case 142u: goto L_00310BA8;
    case 143u: goto L_00310BB8;
    case 144u: goto L_00310BC8;
    case 145u: goto L_00310BD8;
    case 146u: goto L_00310BE8;
    case 147u: goto L_00310BF8;
    case 148u: goto L_00310C08;
    case 149u: goto L_00310C18;
    case 150u: goto L_00310C28;
    case 151u: goto L_00310C38;
    case 152u: goto L_00310C48;
    case 153u: goto L_00310C58;
    case 154u: goto L_00310C70;
    case 155u: goto L_00310C80;
    case 156u: goto L_00310CA0;
    case 157u: goto L_00310CB0;
    case 158u: goto L_00310CD0;
    case 159u: goto L_00310CE0;
    case 160u: goto L_00310D00;
    case 161u: goto L_00310D20;
    case 162u: goto L_00310D40;
    case 163u: goto L_00310D54;
    case 164u: goto L_00310D80;
    case 165u: goto L_00310D90;
    case 166u: goto L_00310DB0;
    case 167u: goto L_00310DE0;
    case 168u: goto L_00310DF0;
    case 169u: goto L_00310E20;
    case 170u: goto L_00310E38;
    case 171u: goto L_00310E60;
    case 172u: goto L_00310E70;
    case 173u: goto L_00310E90;
    case 174u: goto L_00310EA0;
    case 175u: goto L_00310EC0;
    case 176u: goto L_00310ED0;
    case 177u: goto L_00310F10;
    case 178u: goto L_00310F20;
    case 179u: goto L_00310F50;
    case 180u: goto L_00310F60;
    case 181u: goto L_00310F80;
    case 182u: goto L_00310F90;
    case 183u: goto L_00310FA4;
    case 184u: goto L_00310FB0;
    case 185u: goto L_00310FC0;
    case 186u: goto L_00310FE0;
    case 187u: goto L_00310FF0;
    case 188u: goto L_00311010;
    case 189u: goto L_00311024;
    case 190u: goto L_00311040;
    case 191u: goto L_00311050;
    case 192u: goto L_00311070;
    case 193u: goto L_00311080;
    case 194u: goto L_003110A0;
    case 195u: goto L_003110B0;
    case 196u: goto L_003110D0;
    case 197u: goto L_00311108;
    case 198u: goto L_00311140;
    case 199u: goto L_00311164;
    case 200u: goto L_00311180;
    case 201u: goto L_00311190;
    case 202u: goto L_003111B0;
    case 203u: goto L_003111C0;
    case 204u: goto L_003111D0;
    case 205u: goto L_003111E0;
    case 206u: goto L_00311220;
    case 207u: goto L_00311294;
    case 208u: goto L_003112A0;
    case 209u: goto L_003112B0;
    case 210u: goto L_003112D8;
    case 211u: goto L_003112F0;
    case 212u: goto L_003112F8;
    case 213u: goto L_00311308;
    case 214u: goto L_00311330;
    case 215u: goto L_00311348;
    case 216u: goto L_00311350;
    case 217u: goto L_00311360;
    case 218u: goto L_00311388;
    case 219u: goto L_003113A0;
    case 220u: goto L_00311400;
    case 221u: goto L_00311420;
    case 222u: goto L_00311434;
    case 223u: goto L_00311450;
    case 224u: goto L_00311460;
    case 225u: goto L_00311470;
    case 226u: goto L_003114A8;
    case 227u: goto L_003114DC;
    case 228u: goto L_003114F0;
    case 229u: goto L_003114F4;
    case 230u: goto L_00311510;
    case 231u: goto L_00311528;
    case 232u: goto L_00311550;
    case 233u: goto L_00311560;
    case 234u: goto L_00311590;
    case 235u: goto L_003115A0;
    case 236u: goto L_003115D8;
    case 237u: goto L_003115FC;
    case 238u: goto L_00311610;
    case 239u: goto L_00311698;
    case 240u: goto L_003116C0;
    case 241u: goto L_003116C8;
    case 242u: goto L_00311708;
    case 243u: goto L_00311710;
    case 244u: goto L_00311740;
    case 245u: goto L_00311750;
    case 246u: goto L_00311764;
    case 247u: goto L_003117A8;
    case 248u: goto L_00311810;
    case 249u: goto L_0031182C;
    case 250u: goto L_00311838;
    case 251u: goto L_00311848;
    case 252u: goto L_0031188C;
    case 253u: goto L_003118D0;
    case 254u: goto L_003118D8;
    case 255u: goto L_003118E8;
    case 256u: goto L_00311918;
    case 257u: goto L_0031194C;
    case 258u: goto L_00311988;
    case 259u: goto L_003119AC;
    case 260u: goto L_003119B4;
    case 261u: goto L_003119C8;
    case 262u: goto L_003119D0;
    case 263u: goto L_003119E0;
    case 264u: goto L_003119F0;
    case 265u: goto L_00311A50;
    case 266u: goto L_00311A60;
    case 267u: goto L_00311A80;
    case 268u: goto L_00311A94;
    case 269u: goto L_00311AB0;
    case 270u: goto L_00311B20;
    case 271u: goto L_00311BA8;
    case 272u: goto L_00311BB0;
    case 273u: goto L_00311BE0;
    case 274u: goto L_00311BF0;
    case 275u: goto L_00311C20;
    case 276u: goto L_00311C34;
    case 277u: goto L_00311C78;
    case 278u: goto L_00311D10;
    case 279u: goto L_00311D54;
    case 280u: goto L_00311E00;
    case 281u: goto L_00311EA8;
    case 282u: goto L_00311EBC;
    case 283u: goto L_00311F00;
    case 284u: goto L_00311F34;
    case 285u: goto L_00311F80;
    case 286u: goto L_00311FC8;
    case 287u: goto L_00312000;
    case 288u: goto L_00312010;
    case 289u: goto L_00312038;
    case 290u: goto L_0031204C;
    case 291u: goto L_00312054;
    case 292u: goto L_00312070;
    case 293u: goto L_00312090;
    case 294u: goto L_003120A0;
    case 295u: goto L_003120B0;
    case 296u: goto L_003120C0;
    case 297u: goto L_003120D4;
    case 298u: goto L_003120E0;
    case 299u: goto L_003120F0;
    case 300u: goto L_00312104;
    case 301u: goto L_00312114;
    case 302u: goto L_00312128;
    case 303u: goto L_0031214C;
    case 304u: goto L_00312160;
    case 305u: goto L_0031217C;
    case 306u: goto L_00312190;
    case 307u: goto L_003121B0;
    case 308u: goto L_003121C0;
    case 309u: goto L_003121D0;
    case 310u: goto L_003121E0;
    case 311u: goto L_00312200;
    case 312u: goto L_00312214;
    case 313u: goto L_0031222C;
    case 314u: goto L_00312234;
    case 315u: goto L_0031223C;
    case 316u: goto L_00312250;
    case 317u: goto L_00312260;
    case 318u: goto L_0031227C;
    case 319u: goto L_00312290;
    case 320u: goto L_003122C0;
    case 321u: goto L_003122E0;
    case 322u: goto L_00312318;
    case 323u: goto L_0031236C;
    case 324u: goto L_003123C0;
    case 325u: goto L_00312440;
    case 326u: goto L_0031245C;
    case 327u: goto L_00312470;
    case 328u: goto L_003124F0;
    case 329u: goto L_00312500;
    case 330u: goto L_00312530;
    case 331u: goto L_00312580;
    case 332u: goto L_003125D8;
    case 333u: goto L_00312680;
    case 334u: goto L_003127F4;
    case 335u: goto L_00312810;
    case 336u: goto L_00312858;
    case 337u: goto L_003128D0;
    case 338u: goto L_00312988;
    case 339u: goto L_003129F8;
    case 340u: goto L_00312A60;
    case 341u: goto L_00312AE8;
    case 342u: goto L_00312BB8;
    case 343u: goto L_00312C14;
    case 344u: goto L_00312C3C;
    case 345u: goto L_00312CE0;
    case 346u: goto L_00312D14;
    case 347u: goto L_00312D30;
    case 348u: goto L_00312D4C;
    case 349u: goto L_00312D70;
    case 350u: goto L_00312D80;
    case 351u: goto L_00312E10;
    case 352u: goto L_00312E20;
    case 353u: goto L_00312E30;
    case 354u: goto L_00312E40;
    case 355u: goto L_00312E9C;
    case 356u: goto L_00312EA8;
    case 357u: goto L_00312EE0;
    case 358u: goto L_00312EF0;
    case 359u: goto L_00312F00;
    case 360u: goto L_00312F20;
    case 361u: goto L_00312F30;
    case 362u: goto L_00312F44;
    case 363u: goto L_00312F50;
    case 364u: goto L_00312F64;
    case 365u: goto L_00312FB0;
    case 366u: goto L_00312FF0;
    case 367u: goto L_00313004;
    case 368u: goto L_0031301C;
    case 369u: goto L_00313024;
    case 370u: goto L_00313050;
    case 371u: goto L_00313060;
    case 372u: goto L_00313070;
    case 373u: goto L_003130C8;
    case 374u: goto L_003130F0;
    case 375u: goto L_00313124;
    case 376u: goto L_00313134;
    case 377u: goto L_00313158;
    case 378u: goto L_0031316C;
    case 379u: goto L_00313178;
    case 380u: goto L_00313188;
    case 381u: goto L_00313190;
    case 382u: goto L_003131A0;
    case 383u: goto L_003131B0;
    case 384u: goto L_003131DC;
    case 385u: goto L_003131E8;
    case 386u: goto L_00313218;
    case 387u: goto L_00313244;
    case 388u: goto L_00313288;
    case 389u: goto L_00313298;
    case 390u: goto L_003132B0;
    case 391u: goto L_003132D0;
    case 392u: goto L_003132E0;
    case 393u: goto L_003132F4;
    case 394u: goto L_00313300;
    case 395u: goto L_00313310;
    case 396u: goto L_00313350;
    case 397u: goto L_00313388;
    case 398u: goto L_003133C0;
    case 399u: goto L_003133F0;
    case 400u: goto L_00313440;
    case 401u: goto L_0031346C;
    case 402u: goto L_00313480;
    case 403u: goto L_003134D4;
    case 404u: goto L_003134DC;
    case 405u: goto L_003134F8;
    case 406u: goto L_0031350C;
    case 407u: goto L_00313518;
    case 408u: goto L_00313560;
    case 409u: goto L_00313574;
    case 410u: goto L_003135DC;
    case 411u: goto L_003135E8;
    case 412u: goto L_003135F0;
    case 413u: goto L_00313600;
    case 414u: goto L_00313610;
    case 415u: goto L_00313640;
    case 416u: goto L_0031366C;
    case 417u: goto L_00313698;
    case 418u: goto L_003136A8;
    case 419u: goto L_003136CC;
    case 420u: goto L_003136F8;
    case 421u: goto L_00313728;
    case 422u: goto L_00313738;
    case 423u: goto L_0031375C;
    case 424u: goto L_0031376C;
    case 425u: goto L_00313784;
    case 426u: goto L_0031378C;
    case 427u: goto L_00313798;
    case 428u: goto L_003137AC;
    case 429u: goto L_003137F8;
    case 430u: goto L_0031380C;
    case 431u: goto L_00313840;
    case 432u: goto L_00313850;
    case 433u: goto L_00313890;
    case 434u: goto L_003138A0;
    case 435u: goto L_003138D4;
    case 436u: goto L_003138E0;
    case 437u: goto L_003138F0;
    case 438u: goto L_00313910;
    case 439u: goto L_00313920;
    case 440u: goto L_00313934;
    case 441u: goto L_00313940;
    case 442u: goto L_00313950;
    case 443u: goto L_0031398C;
    case 444u: goto L_003139C0;
    case 445u: goto L_003139E0;
    case 446u: goto L_00313A10;
    case 447u: goto L_00313A38;
    case 448u: goto L_00313A4C;
    case 449u: goto L_00313A58;
    case 450u: goto L_00313AEC;
    case 451u: goto L_00313AF8;
    case 452u: goto L_00313B00;
    case 453u: goto L_00313B10;
    case 454u: goto L_00313B20;
    case 455u: goto L_00313B48;
    case 456u: goto L_00313B58;
    case 457u: goto L_00313B8C;
    case 458u: goto L_00313B9C;
    case 459u: goto L_00313BB8;
    case 460u: goto L_00313BD8;
    case 461u: goto L_00313BE8;
    case 462u: goto L_00313BFC;
    case 463u: goto L_00313C08;
    case 464u: goto L_00313C18;
    case 465u: goto L_00313C60;
    case 466u: goto L_00313C74;
    case 467u: goto L_00313CCC;
    case 468u: goto L_00313CE8;
    case 469u: goto L_00313D28;
    case 470u: goto L_00313D34;
    case 471u: goto L_00313D64;
    case 472u: goto L_00313D70;
    case 473u: goto L_00313DDC;
    case 474u: goto L_00313DE4;
    case 475u: goto L_00313E28;
    case 476u: goto L_00313E38;
    case 477u: goto L_00313E48;
    case 478u: goto L_00313E58;
    case 479u: goto L_00313E80;
    case 480u: goto L_00313EA0;
    case 481u: goto L_00313F90;
    case 482u: goto L_00313FB4;
    case 483u: goto L_00313FBC;
    case 484u: goto L_00313FD0;
    case 485u: goto L_00313FF0;
    default: bad_entry(c, 0x00310000u); return;
    }
L_00310000:
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 1;
L_00310004:
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_00310008:
    set32(c.r[6], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_0031000C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310014u); set32(c.r[7], c.r[16].w[0] + 6u);  if (depth < kMaxDepth) unit_0083(c, 222u, depth + 1u); else { c.pc = 0x0030E930u; return; } if (c.pc != 0x00310014u) [[unlikely]] return; }
L_00310014:
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 1;
L_00310018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310020u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0083(c, 401u, depth + 1u); else { c.pc = 0x0030FB80u; return; } if (c.pc != 0x00310020u) [[unlikely]] return; }
    goto L_00310020;
L_0031001C:
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 1;
L_00310020:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00310030; } }
L_00310028:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00310110; } }
    goto L_00310030;
L_0031002C:
    c.budget -= 1;
L_00310030:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 1;
L_00310034:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00310038:
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 1;
L_0031003C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_003100C8; } }
L_00310044:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 18912u);
    c.budget -= 2;
L_0031004C:
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00310000u < 16384u) { entry = entries_0084[(t - 0x00310000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00310058:
    c.budget -= 1;
L_0031005C:
    c.budget -= 1;
L_00310060:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00310110; } }
    goto L_00310068;
L_00310064:
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_00310068:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0031006C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00310110; } }
L_00310074:
    c.budget -= 1;
L_00310078:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00310110; } }
    goto L_00310084;
L_00310080:
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00310084:
    c.budget -= 1;
L_00310088:
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_0031008C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00310110; } }
    goto L_00310094;
L_00310090:
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00310094:
    c.budget -= 1;
L_00310098:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00310110; } }
    c.budget -= 1;
L_003100A8:
    set32(c.r[3], 0u + 5u);
    c.budget -= 1;
L_003100AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00310110; } }
    c.budget -= 1;
L_003100B8:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00310110; } }
L_003100C4:
    c.budget -= 1;
L_003100C8:
    set32(c.r[3], 0u + 7u);
    c.budget -= 1;
L_003100CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00310110; } }
    goto L_003100D4;
L_003100D0:
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_003100D4:
    c.budget -= 1;
L_003100D8:
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00310110; } }
L_003100E4:
    c.budget -= 1;
L_003100E8:
    set32(c.r[3], 0u + 9u);
    c.budget -= 1;
L_003100EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00310110; } }
L_003100F4:
    c.budget -= 1;
L_003100F8:
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00310110; } }
    goto L_00310104;
L_00310100:
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00310104:
    c.budget -= 1;
L_00310108:
    set32(c.r[3], 0u + 11u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00310110:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00310114:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 1;
L_00310118:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00310120:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.budget -= 2;
L_00310128:
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310134u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0083(c, 235u, depth + 1u); else { c.pc = 0x0030EB50u; return; } if (c.pc != 0x00310134u) [[unlikely]] return; }
L_00310134:
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 1;
L_00310138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310140u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0083(c, 401u, depth + 1u); else { c.pc = 0x0030FB80u; return; } if (c.pc != 0x00310140u) [[unlikely]] return; }
L_00310140:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00310150:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].d[0] = c.r[4].d[0] << 48;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 4;
L_00310160:
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 1;
L_00310164:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031016Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 227u, depth + 1u); else { c.pc = 0x0030E9E0u; return; } if (c.pc != 0x0031016Cu) [[unlikely]] return; }
L_0031016C:
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310178u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0083(c, 401u, depth + 1u); else { c.pc = 0x0030FB80u; return; } if (c.pc != 0x00310178u) [[unlikely]] return; }
L_00310178:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00310188; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00310198; } }
L_00310188:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00310198; } }
    goto L_00310190;
L_0031018C:
    c.budget -= 1;
L_00310190:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 2;
L_00310198:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 2;
L_003101A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003101A4:
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 1;
    c.pc = 0x003101A8u; [[clang::musttail]] return dispatch(c, 0u, depth);
L_003101AC:
    c.budget -= 1;
L_003101B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[4].d[0] << 48;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003101C4u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0083(c, 242u, depth + 1u); else { c.pc = 0x0030EC70u; return; } if (c.pc != 0x003101C4u) [[unlikely]] return; }
L_003101C4:
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003101D0u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0083(c, 401u, depth + 1u); else { c.pc = 0x0030FB80u; return; } if (c.pc != 0x003101D0u) [[unlikely]] return; }
L_003101D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003101D4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003101E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
L_003101F0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[1].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00310228; } }
    goto L_00310200;
L_003101FC:
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_00310200:
    c.r[4].d[0] = c.r[3].d[0] << 48;
    c.budget -= 1;
L_00310204:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031020Cu); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0083(c, 214u, depth + 1u); else { c.pc = 0x0030E890u; return; } if (c.pc != 0x0031020Cu) [[unlikely]] return; }
L_0031020C:
    c.r[4].d[0] = c.r[2].d[0] << 48;
    set32(c.r[2], 0u - 1u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310220u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0083(c, 401u, depth + 1u); else { c.pc = 0x0030FB80u; return; } if (c.pc != 0x00310220u) [[unlikely]] return; }
L_00310220:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00310230; } }
    goto L_00310228;
L_00310224:
    c.budget -= 1;
L_00310228:
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_00310230:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00310240:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[4].d[0] << 48;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310254u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0083(c, 218u, depth + 1u); else { c.pc = 0x0030E8E0u; return; } if (c.pc != 0x00310254u) [[unlikely]] return; }
L_00310254:
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310260u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0083(c, 401u, depth + 1u); else { c.pc = 0x0030FB80u; return; } if (c.pc != 0x00310260u) [[unlikely]] return; }
L_00310260:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00310268:
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 1;
    c.pc = 0x0031026Cu; [[clang::musttail]] return dispatch(c, 0u, depth);
L_00310270:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[1].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003102B8; } }
    c.r[4].d[0] = c.r[3].d[0] << 48;
    c.budget -= 1;
L_00310294:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031029Cu); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0083(c, 249u, depth + 1u); else { c.pc = 0x0030ED90u; return; } if (c.pc != 0x0031029Cu) [[unlikely]] return; }
L_0031029C:
    c.r[4].d[0] = c.r[2].d[0] << 48;
    set32(c.r[2], 0u - 1u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003102B0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0083(c, 401u, depth + 1u); else { c.pc = 0x0030FB80u; return; } if (c.pc != 0x003102B0u) [[unlikely]] return; }
L_003102B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003102C0; } }
L_003102B8:
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_003102C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003102D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 2;
L_003102D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003102E0u);  if (depth < kMaxDepth) unit_0083(c, 187u, depth + 1u); else { c.pc = 0x0030E5D0u; return; } if (c.pc != 0x003102E0u) [[unlikely]] return; }
L_003102E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    st8((c.r[1].w[0] + 12456u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 5;
L_003102F4:
    st32((c.r[1].w[0] + 12432u), 0u);
    c.budget -= 1;
L_003102F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st32((c.r[1].w[0] + 12448u), 0u);
    c.budget -= 2;
L_00310300:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00310310:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310320u);  if (depth < kMaxDepth) unit_0083(c, 355u, depth + 1u); else { c.pc = 0x0030F6F0u; return; } if (c.pc != 0x00310320u) [[unlikely]] return; }
L_00310320:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    set32(c.r[3], 0u - 1u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 33u);  if (t) { goto L_00310348; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00310348; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00310350; } }
    c.budget -= 1;
L_00310348:
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_00310350:
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 12460u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00310370:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310380u);  if (depth < kMaxDepth) unit_0083(c, 360u, depth + 1u); else { c.pc = 0x0030F790u; return; } if (c.pc != 0x00310380u) [[unlikely]] return; }
L_00310380:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    set32(c.r[3], 0u - 1u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 33u);  if (t) { goto L_003103A8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003103A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003103B0; } }
    c.budget -= 1;
L_003103A8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_003103B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 12460u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003103D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003103E0u);  if (depth < kMaxDepth) unit_0083(c, 365u, depth + 1u); else { c.pc = 0x0030F7D0u; return; } if (c.pc != 0x003103E0u) [[unlikely]] return; }
L_003103E0:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    set32(c.r[3], 0u - 1u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 33u);  if (t) { goto L_00310408; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00310408; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00310410; } }
    goto L_00310404;
L_00310400:
    c.budget -= 1;
L_00310404:
    c.budget -= 1;
L_00310408:
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_00310410:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00310420:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310430u);  if (depth < kMaxDepth) unit_0083(c, 370u, depth + 1u); else { c.pc = 0x0030F830u; return; } if (c.pc != 0x00310430u) [[unlikely]] return; }
L_00310430:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    set32(c.r[3], 0u - 1u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 33u);  if (t) { goto L_00310458; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00310458; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00310460; } }
    c.budget -= 1;
L_00310458:
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_00310460:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00310470:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310480u);  if (depth < kMaxDepth) unit_0083(c, 374u, depth + 1u); else { c.pc = 0x0030F880u; return; } if (c.pc != 0x00310480u) [[unlikely]] return; }
L_00310480:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    set32(c.r[4], 0u - 2u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[3], 0u - 6u);  if (t) { goto L_003104D0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003104C8; } }
    set32(c.r[4], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[3], 0u - 33u);  if (t) { goto L_003104C0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003104B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003104D8; } }
L_003104B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003104D8; } }
L_003104C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003104D8; } }
L_003104C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003104D8; } }
L_003104D0:
    set32(c.r[2], 0u - 3u);
    c.budget -= 2;
L_003104D8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003104F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310500u);  if (depth < kMaxDepth) unit_0083(c, 261u, depth + 1u); else { c.pc = 0x0030EEA0u; return; } if (c.pc != 0x00310500u) [[unlikely]] return; }
L_00310500:
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 12457u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
L_00310514:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00310520:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310538u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0083(c, 294u, depth + 1u); else { c.pc = 0x0030F1C0u; return; } if (c.pc != 0x00310538u) [[unlikely]] return; }
L_00310538:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00310550:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310568u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0083(c, 284u, depth + 1u); else { c.pc = 0x0030F070u; return; } if (c.pc != 0x00310568u) [[unlikely]] return; }
L_00310568:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00310580; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003105B8; } }
L_00310580:
    set32(c.r[3], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[4], c.r[29].w[0] + 52u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 6;
L_00310598:
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 8;
L_003105B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003105D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_003106B8; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_003106E0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00310608; } }
    goto L_003105FC;
L_003105F8:
    c.budget -= 1;
L_003105FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003106E0; } }
    c.budget -= 1;
L_00310608:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; st8((c.r[1].w[0] + 12736u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00310658; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_00310638; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00310638; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00310678; } }
    c.budget -= 1;
L_00310638:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[4].w[0] + 12736u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031064Cu); set32(c.r[5], c.r[5].w[0] - 18400u);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011D880u; return; } if (c.pc != 0x0031064Cu) [[unlikely]] return; }
L_0031064C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00310690; } }
    c.budget -= 1;
L_00310658:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[4].w[0] + 12736u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031066Cu); set32(c.r[5], c.r[5].w[0] - 18144u);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011D880u; return; } if (c.pc != 0x0031066Cu) [[unlikely]] return; }
L_0031066C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00310690; } }
    c.budget -= 1;
L_00310678:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[4].w[0] + 12736u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031068Cu); set32(c.r[5], c.r[5].w[0] - 17888u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0031068Cu) [[unlikely]] return; }
L_0031068C:
    c.budget -= 1;
L_00310690:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 12480u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] + 12736u);
    set32(c.r[2], c.r[2].w[0] + 12480u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_003106E0; } }
    c.budget -= 1;
L_003106B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 12736u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[2], c.r[2].w[0] + 12736u);
    st8((c.r[1].w[0] + 12480u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[2], c.r[2].w[0] + 12480u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 10;
L_003106E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00310700:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310710u); set32(c.r[4], c.r[29].w[0] + 28u);  if (depth < kMaxDepth) unit_0083(c, 289u, depth + 1u); else { c.pc = 0x0030F140u; return; } if (c.pc != 0x00310710u) [[unlikely]] return; }
L_00310710:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0031072C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 28u)));  if (t) { goto L_00310730; } }
L_0031072C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00310730:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00310740:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[29].w[0] + 40u);
    st8((c.r[29].w[0] + 60u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    st8((c.r[29].w[0] + 54u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7u)));
    st8((c.r[29].w[0] + 17u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    st32((c.r[29].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    st32((c.r[29].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    st32((c.r[29].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    st32((c.r[29].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 32;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003107C8; } }
    set32(c.r[3], c.r[29].w[0] + 60u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_003107C8:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00310800; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - 18864u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00310000u < 16384u) { entry = entries_0084[(t - 0x00310000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00310800:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00310858; } }
    c.budget -= 1;
L_00310810:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00310858; } }
    c.budget -= 1;
L_00310820:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00310858; } }
    c.budget -= 1;
L_00310830:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00310858; } }
    c.budget -= 1;
L_00310840:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00310858; } }
    c.budget -= 1;
L_00310850:
    st16((c.r[29].w[0] + 44u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_00310858:
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 2u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00310878; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 46u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00310880; } }
L_00310878:
    st16((c.r[29].w[0] + 46u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00310880:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003108C0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003108B8; } }
    set32(c.r[3], 0u + 2u);
    set32(c.r[3], 0u + 2u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 48u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003108C8; } }
    c.budget -= 1;
L_003108B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 48u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003108C8; } }
L_003108C0:
    st16((c.r[29].w[0] + 48u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_003108C8:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 6u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003108F0; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 50u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003108F8; } }
    c.budget -= 1;
L_003108F0:
    set32(c.r[3], 0u + 2u);
    st16((c.r[29].w[0] + 50u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003108F8:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00310938; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00310930; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00310940; } }
    c.budget -= 1;
L_00310930:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00310940; } }
L_00310938:
    st16((c.r[29].w[0] + 52u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_00310940:
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00310960; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 18u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00310968; } }
L_00310960:
    st16((c.r[29].w[0] + 18u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00310968:
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 2;
L_00310970:
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00310988; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00310988:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003109E0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003109D8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003109D0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003109C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003109E8; } }
L_003109C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 55u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003109E8; } }
L_003109D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 55u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003109E8; } }
L_003109D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 55u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003109E8; } }
L_003109E0:
    set32(c.r[2], 0u + 4u);
    st8((c.r[29].w[0] + 55u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003109E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003109F0u); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0083(c, 269u, depth + 1u); else { c.pc = 0x0030EF20u; return; } if (c.pc != 0x003109F0u) [[unlikely]] return; }
L_003109F0:
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st32((c.r[1].w[0] + 12432u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00310A10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[2], 0u + 3u);
    st32((c.r[1].w[0] + 12448u), 0u);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st32((c.r[1].w[0] + 12432u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[1].w[0] + 12459u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00310A40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[3], 0u + 4u);
    st8((c.r[1].w[0] + 12459u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 12432u), c.r[3].w[0]);  c.pc = t; return; }
L_00310A60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310A78u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0083(c, 284u, depth + 1u); else { c.pc = 0x0030F070u; return; } if (c.pc != 0x00310A78u) [[unlikely]] return; }
L_00310A78:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00310A90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00310C60; } }
L_00310A90:
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 36u)));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 40u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_00310B40; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 18768u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00310000u < 16384u) { entry = entries_0084[(t - 0x00310000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00310AC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00310B58; } }
L_00310AD0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00310B58; } }
    c.budget -= 1;
L_00310AE0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00310B58; } }
    c.budget -= 1;
L_00310AF0:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00310B58; } }
    c.budget -= 1;
L_00310B00:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00310B58; } }
    c.budget -= 1;
L_00310B10:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00310B58; } }
    c.budget -= 1;
L_00310B20:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00310B58; } }
    c.budget -= 1;
L_00310B30:
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00310B58; } }
    c.budget -= 1;
L_00310B40:
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00310B58; } }
    c.budget -= 1;
L_00310B50:
    set32(c.r[3], 0u + 9u);
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00310B58:
    set32(c.r[3], ld32((c.r[29].w[0] + 44u)));
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 48u)));
    st16((c.r[16].w[0] + 14u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 50u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(14ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_00310C38; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 18832u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00310000u < 16384u) { entry = entries_0084[(t - 0x00310000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00310B90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00310C60; } }
L_00310B98:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00310C60; } }
    c.budget -= 1;
L_00310BA8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00310C60; } }
    c.budget -= 1;
L_00310BB8:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00310C60; } }
    c.budget -= 1;
L_00310BC8:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00310C60; } }
    c.budget -= 1;
L_00310BD8:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00310C60; } }
    c.budget -= 1;
L_00310BE8:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00310C60; } }
    c.budget -= 1;
L_00310BF8:
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00310C60; } }
    c.budget -= 1;
L_00310C08:
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00310C60; } }
    c.budget -= 1;
L_00310C18:
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00310C60; } }
    c.budget -= 1;
L_00310C28:
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00310C60; } }
    c.budget -= 1;
L_00310C38:
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00310C60; } }
    c.budget -= 1;
L_00310C48:
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00310C60; } }
    c.budget -= 1;
L_00310C58:
    set32(c.r[3], 0u + 13u);
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00310C60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00310C70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310C80u);  if (depth < kMaxDepth) unit_0083(c, 280u, depth + 1u); else { c.pc = 0x0030F030u; return; } if (c.pc != 0x00310C80u) [[unlikely]] return; }
L_00310C80:
    set32(c.r[3], 0u + 5u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st32((c.r[1].w[0] + 12432u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00310CA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310CB0u);  if (depth < kMaxDepth) unit_0083(c, 265u, depth + 1u); else { c.pc = 0x0030EEE0u; return; } if (c.pc != 0x00310CB0u) [[unlikely]] return; }
L_00310CB0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    st8((c.r[1].w[0] + 12457u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00310CD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310CE0u);  if (depth < kMaxDepth) unit_0083(c, 299u, depth + 1u); else { c.pc = 0x0030F240u; return; } if (c.pc != 0x00310CE0u) [[unlikely]] return; }
L_00310CE0:
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 12458u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00310D00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310D20u); c.r[6].d[0] = c.r[4].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0083(c, 191u, depth + 1u); else { c.pc = 0x0030E610u; return; } if (c.pc != 0x00310D20u) [[unlikely]] return; }
L_00310D20:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00310D40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[4].d[0] << 48;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310D54u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0083(c, 307u, depth + 1u); else { c.pc = 0x0030F2C0u; return; } if (c.pc != 0x00310D54u) [[unlikely]] return; }
L_00310D54:
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st32((c.r[1].w[0] + 12432u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00310D80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310D90u);  if (depth < kMaxDepth) unit_0083(c, 311u, depth + 1u); else { c.pc = 0x0030F320u; return; } if (c.pc != 0x00310D90u) [[unlikely]] return; }
L_00310D90:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00310DB0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[2], 0u + 3u);
    st32((c.r[1].w[0] + 12448u), 0u);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st32((c.r[1].w[0] + 12432u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[1].w[0] + 12459u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00310DE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310DF0u);  if (depth < kMaxDepth) unit_0083(c, 195u, depth + 1u); else { c.pc = 0x0030E680u; return; } if (c.pc != 0x00310DF0u) [[unlikely]] return; }
L_00310DF0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[2], 0u + 4u);
    st8((c.r[1].w[0] + 12459u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st32((c.r[1].w[0] + 12432u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00310E20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310E38u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0083(c, 391u, depth + 1u); else { c.pc = 0x0030FA50u; return; } if (c.pc != 0x00310E38u) [[unlikely]] return; }
L_00310E38:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] ^ 4ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00310E60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310E70u);  if (depth < kMaxDepth) unit_0083(c, 315u, depth + 1u); else { c.pc = 0x0030F360u; return; } if (c.pc != 0x00310E70u) [[unlikely]] return; }
L_00310E70:
    set32(c.r[3], 0u + 5u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st32((c.r[1].w[0] + 12432u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00310E90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310EA0u);  if (depth < kMaxDepth) unit_0083(c, 303u, depth + 1u); else { c.pc = 0x0030F280u; return; } if (c.pc != 0x00310EA0u) [[unlikely]] return; }
L_00310EA0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    st8((c.r[1].w[0] + 12458u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00310EC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310ED0u);  if (depth < kMaxDepth) unit_0083(c, 253u, depth + 1u); else { c.pc = 0x0030EDE0u; return; } if (c.pc != 0x00310ED0u) [[unlikely]] return; }
L_00310ED0:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00310EE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00310EF8; } }
L_00310EE8:
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 12461u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00310EF8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00310F10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310F20u);  if (depth < kMaxDepth) unit_0083(c, 257u, depth + 1u); else { c.pc = 0x0030EE40u; return; } if (c.pc != 0x00310F20u) [[unlikely]] return; }
L_00310F20:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00310F38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00310F40; } }
L_00310F38:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 12461u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00310F40:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00310F50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310F60u);  if (depth < kMaxDepth) unit_0083(c, 319u, depth + 1u); else { c.pc = 0x0030F3A0u; return; } if (c.pc != 0x00310F60u) [[unlikely]] return; }
L_00310F60:
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 12462u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00310F80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310F90u);  if (depth < kMaxDepth) unit_0083(c, 323u, depth + 1u); else { c.pc = 0x0030F3E0u; return; } if (c.pc != 0x00310F90u) [[unlikely]] return; }
L_00310F90:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[1].w[0] + 12462u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00310FA4:
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 1;
    c.pc = 0x00310FA8u; [[clang::musttail]] return dispatch(c, 0u, depth);
L_00310FB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310FC0u);  if (depth < kMaxDepth) unit_0083(c, 338u, depth + 1u); else { c.pc = 0x0030F550u; return; } if (c.pc != 0x00310FC0u) [[unlikely]] return; }
L_00310FC0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00310FE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310FF0u);  if (depth < kMaxDepth) unit_0083(c, 347u, depth + 1u); else { c.pc = 0x0030F650u; return; } if (c.pc != 0x00310FF0u) [[unlikely]] return; }
L_00310FF0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00311010:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], c.r[4].w[0] + 4u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311024u); set32(c.r[6], c.r[29].w[0] + 28u);  if (depth < kMaxDepth) unit_0083(c, 342u, depth + 1u); else { c.pc = 0x0030F5B0u; return; } if (c.pc != 0x00311024u) [[unlikely]] return; }
L_00311024:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00311040:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311050u); set32(c.r[6], c.r[5].w[0] + 4u);  if (depth < kMaxDepth) unit_0083(c, 327u, depth + 1u); else { c.pc = 0x0030F420u; return; } if (c.pc != 0x00311050u) [[unlikely]] return; }
L_00311050:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00311070:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311080u);  if (depth < kMaxDepth) unit_0083(c, 333u, depth + 1u); else { c.pc = 0x0030F4D0u; return; } if (c.pc != 0x00311080u) [[unlikely]] return; }
L_00311080:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003110A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003110B0u); set32(c.r[4], ld32((c.r[4].w[0])));  if (depth < kMaxDepth) unit_0083(c, 351u, depth + 1u); else { c.pc = 0x0030F690u; return; } if (c.pc != 0x003110B0u) [[unlikely]] return; }
L_003110B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003110D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 12416u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00311100; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[1].w[0] + 12424u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_00311130; } }
L_00311100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311108u);  if (depth < kMaxDepth) unit_0083(c, 378u, depth + 1u); else { c.pc = 0x0030F900u; return; } if (c.pc != 0x00311108u) [[unlikely]] return; }
L_00311108:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00311130; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 12416u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st32((c.r[1].w[0] + 12424u), c.r[3].w[0]);
    c.budget -= 6;
L_00311130:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00311140:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 28u);
    st8((c.r[1].w[0] + 12416u), static_cast<std::uint8_t>(0u));
    set32(c.r[7], c.r[29].w[0] + 24u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311164u); st32((c.r[1].w[0] + 12424u), 0u);  if (depth < kMaxDepth) unit_0083(c, 382u, depth + 1u); else { c.pc = 0x0030F970u; return; } if (c.pc != 0x00311164u) [[unlikely]] return; }
L_00311164:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00311180:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311190u);  if (depth < kMaxDepth) unit_0083(c, 386u, depth + 1u); else { c.pc = 0x0030FA00u; return; } if (c.pc != 0x00311190u) [[unlikely]] return; }
L_00311190:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003111B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[1].w[0] + 12464u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_003111C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[1].w[0] + 13000u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00104320u | kUnwind; return; } [[clang::musttail]] return unit_0001(c, 68u, depth); }
L_003111D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[1].w[0] + 13000u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00104300u | kUnwind; return; } [[clang::musttail]] return unit_0001(c, 64u, depth); }
L_003111E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[8].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 13;
    { const bool t = c.r[5].d[0] == 0ull; c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00311288; } }
    set32(c.r[2], 0u + 46u);
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
L_00311220:
    c.r[4].d[0] = c.r[5].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; c.r[1].d[0] = c.r[5].sd[0] < 58ll ? 1ull : 0ull;  if (t) { goto L_00311248; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00311248; } }
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_00311278; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003113E0; } }
L_00311248:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00311270; } }
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[3].d[0];  if (t) { goto L_00311268; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003113E0; } }
    c.budget -= 1;
L_00311268:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00311278; } }
L_00311270:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003113E0; } }
L_00311278:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00311220u | kUnwind; return; } goto L_00311220; } }
L_00311288:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311294u); c.r[19].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0005(c, 103u, depth + 1u); else { c.pc = 0x00116610u; return; } if (c.pc != 0x00311294u) [[unlikely]] return; }
L_00311294:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_003112A8; } }
    c.budget -= 1;
L_003112A0:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 2;
L_003112A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003112B0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x003112B0u) [[unlikely]] return; }
L_003112B0:
    c.r[1].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[20].w[0] + c.r[19].w[0]);  if (t) { goto L_003112D0; } }
    set32(c.r[2], 0u + 46u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003112A0u | kUnwind; return; } goto L_003112A0; } }
    c.budget -= 1;
L_003112D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003112D8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x003112D8u) [[unlikely]] return; }
L_003112D8:
    c.r[1].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003112E8; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_003112E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003112F0u); set32(c.r[4], c.r[20].w[0] + c.r[19].w[0]);  if (depth < kMaxDepth) unit_0005(c, 103u, depth + 1u); else { c.pc = 0x00116610u; return; } if (c.pc != 0x003112F0u) [[unlikely]] return; }
L_003112F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_00311300; } }
L_003112F8:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 2;
L_00311300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311308u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00311308u) [[unlikely]] return; }
L_00311308:
    c.r[1].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[20].w[0] + c.r[19].w[0]);  if (t) { goto L_00311328; } }
    set32(c.r[2], 0u + 46u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003112F8u | kUnwind; return; } goto L_003112F8; } }
    c.budget -= 1;
L_00311328:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311330u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00311330u) [[unlikely]] return; }
L_00311330:
    c.r[1].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00311340; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_00311340:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311348u); set32(c.r[4], c.r[20].w[0] + c.r[19].w[0]);  if (depth < kMaxDepth) unit_0005(c, 103u, depth + 1u); else { c.pc = 0x00116610u; return; } if (c.pc != 0x00311348u) [[unlikely]] return; }
L_00311348:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_00311358; } }
L_00311350:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 2;
L_00311358:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311360u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00311360u) [[unlikely]] return; }
L_00311360:
    c.r[1].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[20].w[0] + c.r[19].w[0]);  if (t) { goto L_00311380; } }
    set32(c.r[2], 0u + 46u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00311350u | kUnwind; return; } goto L_00311350; } }
    c.budget -= 1;
L_00311380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311388u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00311388u) [[unlikely]] return; }
L_00311388:
    c.r[1].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00311398; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_00311398:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003113A0u); set32(c.r[4], c.r[20].w[0] + c.r[19].w[0]);  if (depth < kMaxDepth) unit_0005(c, 103u, depth + 1u); else { c.pc = 0x00116610u; return; } if (c.pc != 0x003113A0u) [[unlikely]] return; }
L_003113A0:
    c.r[3].d[0] = c.r[17].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[3].w[0] << 8);
    c.r[6].d[0] = c.r[18].d[0] & 255ull;
    c.r[5].d[0] = c.r[4].d[0] & 65280ull;
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[4], c.r[3].w[0] << 16);
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    set32(c.r[3], c.r[2].w[0] << 24);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.budget -= 16;
L_003113E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00311400:
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[3], c.r[2].w[0] << 8);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 65535ull;  c.pc = t; return; }
L_00311420:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311434u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 205u, depth + 1u); else { c.pc = 0x003111E0u; return; } if (c.pc != 0x00311434u) [[unlikely]] return; }
L_00311434:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00311450:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 15512u);  c.pc = t; return; }
L_00311460:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 15504u);  c.pc = t; return; }
L_00311470:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].sd[0] < 0; c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;  if (t) { goto L_00311498; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003114A0; } }
    c.budget -= 1;
L_00311498:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00311530; } }
L_003114A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003114A8u);  if (depth < kMaxDepth) unit_0084(c, 203u, depth + 1u); else { c.pc = 0x003111C0u; return; } if (c.pc != 0x003114A8u) [[unlikely]] return; }
L_003114A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[16], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 15520u);
    set32(c.r[17], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u - 2u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);  if (t) { goto L_003114E8; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 15488u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003114DCu); st32((c.r[2].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0084(c, 204u, depth + 1u); else { c.pc = 0x003111D0u; return; } if (c.pc != 0x003114DCu) [[unlikely]] return; }
L_003114DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00311530; } }
    c.budget -= 1;
L_003114E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003114F0u);  if (depth < kMaxDepth) unit_0084(c, 204u, depth + 1u); else { c.pc = 0x003111D0u; return; } if (c.pc != 0x003114F0u) [[unlikely]] return; }
L_003114F0:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_003114F4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[2], 0u - 1u);  if (t) { goto L_00311508; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00311530; } }
    c.budget -= 1;
L_00311508:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311510u);  if (depth < kMaxDepth) unit_0084(c, 203u, depth + 1u); else { c.pc = 0x003111C0u; return; } if (c.pc != 0x00311510u) [[unlikely]] return; }
L_00311510:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 15488u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311528u); st32((c.r[2].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0084(c, 204u, depth + 1u); else { c.pc = 0x003111D0u; return; } if (c.pc != 0x00311528u) [[unlikely]] return; }
L_00311528:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00311530:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00311550:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 1u);  c.pc = t; return; }
L_00311560:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00311588; } }
    set32(c.r[3], 0u + 22u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 15512u), c.r[3].w[0]);  if (t) { goto L_00311600; } }
L_00311588:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311590u);  if (depth < kMaxDepth) unit_0084(c, 203u, depth + 1u); else { c.pc = 0x003111C0u; return; } if (c.pc != 0x00311590u) [[unlikely]] return; }
L_00311590:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 15520u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
L_003115A0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003115C0; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003115A0u | kUnwind; return; } goto L_003115A0; } }
    c.budget -= 1;
L_003115C0:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 12u);  if (t) { goto L_003115E0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003115D8u); st32((c.r[1].w[0] + 15512u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0084(c, 204u, depth + 1u); else { c.pc = 0x003111D0u; return; } if (c.pc != 0x003115D8u) [[unlikely]] return; }
L_003115D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00311600; } }
L_003115E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 15520u);
    set32(c.r[4], 0u - 2u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003115FCu); st32((c.r[2].w[0]), c.r[4].w[0]);  if (depth < kMaxDepth) unit_0084(c, 204u, depth + 1u); else { c.pc = 0x003111D0u; return; } if (c.pc != 0x003115FCu) [[unlikely]] return; }
L_003115FC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00311600:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00311610:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] < 0; st16((c.r[29].w[0] + 94u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00311640; } }
    c.r[2].d[0] = c.r[4].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00311658; } }
    c.budget -= 1;
L_00311640:
    set32(c.r[2], 0u + 9u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st32((c.r[1].w[0] + 15512u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003117F0; } }
    c.budget -= 1;
L_00311658:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[16], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 15520u);
    set32(c.r[17], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], 0u - 2u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 9u);  if (t) { goto L_00311688; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 15512u), c.r[3].w[0]);  if (t) { goto L_003117F0; } }
L_00311688:
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.r[5].d[0] = ld16((c.r[5].w[0] + 2u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311698u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0083(c, 210u, depth + 1u); else { c.pc = 0x0030E820u; return; } if (c.pc != 0x00311698u) [[unlikely]] return; }
L_00311698:
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[18].sd[0] >= 0; set32(c.r[3], 0u + 118u);  if (t) { goto L_003116B8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 15512u), c.r[3].w[0]);  if (t) { goto L_003117F0; } }
L_003116B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003116C0u);  if (depth < kMaxDepth) unit_0084(c, 203u, depth + 1u); else { c.pc = 0x003111C0u; return; } if (c.pc != 0x003116C0u) [[unlikely]] return; }
L_003116C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003116C8u); st32((c.r[17].w[0]), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0084(c, 204u, depth + 1u); else { c.pc = 0x003111D0u; return; } if (c.pc != 0x003116C8u) [[unlikely]] return; }
L_003116C8:
    c.r[19].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[19].w[0] + 1u);
    c.r[19].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = c.r[3].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < 16800ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);  if (t) { goto L_003117C8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[3], c.r[3].w[0] + 15488u);
    set32(c.r[2], c.r[2].w[0] + 15520u);
    set32(c.r[18], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[17], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 7;
L_00311708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311710u);  if (depth < kMaxDepth) unit_0084(c, 203u, depth + 1u); else { c.pc = 0x003111C0u; return; } if (c.pc != 0x00311710u) [[unlikely]] return; }
L_00311710:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);  if (t) { goto L_00311748; } }
    set32(c.r[4], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + 15488u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], 0u + 113u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311740u); st32((c.r[1].w[0] + 15512u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0084(c, 204u, depth + 1u); else { c.pc = 0x003111D0u; return; } if (c.pc != 0x00311740u) [[unlikely]] return; }
L_00311740:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003117F0; } }
L_00311748:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311750u);  if (depth < kMaxDepth) unit_0084(c, 204u, depth + 1u); else { c.pc = 0x003111D0u; return; } if (c.pc != 0x00311750u) [[unlikely]] return; }
L_00311750:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    set32(c.r[5], c.r[29].w[0] + 94u);
    set32(c.r[6], c.r[29].w[0] + 92u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311764u); set32(c.r[7], c.r[29].w[0] + 90u);  if (depth < kMaxDepth) unit_0083(c, 222u, depth + 1u); else { c.pc = 0x0030E930u; return; } if (c.pc != 0x00311764u) [[unlikely]] return; }
L_00311764:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], 0u + 104u);  if (t) { goto L_00311788; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 15512u), c.r[3].w[0]);  if (t) { goto L_003117F0; } }
    c.budget -= 1;
L_00311788:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 94u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_003117A0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003117C8; } }
L_003117A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003117A8u);  if (depth < kMaxDepth) unit_0084(c, 307u, depth + 1u); else { c.pc = 0x003121B0u; return; } if (c.pc != 0x003117A8u) [[unlikely]] return; }
L_003117A8:
    c.r[3].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[19].w[0] + 1u);
    c.r[19].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = c.r[3].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].sd[0] < 16800ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00311708u | kUnwind; return; } goto L_00311708; } }
L_003117C8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 94u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 104u);  if (t) { goto L_003117E8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 15512u), c.r[3].w[0]);  if (t) { goto L_003117F0; } }
L_003117E8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003117F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00311810:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031182Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0084(c, 203u, depth + 1u); else { c.pc = 0x003111C0u; return; } if (c.pc != 0x0031182Cu) [[unlikely]] return; }
L_0031182C:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] + 13024u);
    c.budget -= 3;
L_00311838:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311848u); set32(c.r[6], 0u + 256u);  if (depth < kMaxDepth) unit_0007(c, 138u, depth + 1u); else { c.pc = 0x0011E108u; return; } if (c.pc != 0x00311848u) [[unlikely]] return; }
L_00311848:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00311A28; } }
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 308u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00311838u | kUnwind; return; } goto L_00311838; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[5], ld32((c.r[1].w[0] + 13008u)));
    set32(c.r[3], 0u + 308u);
    set32(c.r[2], c.r[2].w[0] + 13024u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031188Cu); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0083(c, 365u, depth + 1u); else { c.pc = 0x0030F7D0u; return; } if (c.pc != 0x0031188Cu) [[unlikely]] return; }
L_0031188C:
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_003118B8; } }
    set32(c.r[2], 0u - 33u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_003118B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003118C8; } }
    c.budget -= 1;
L_003118B8:
    set32(c.r[2], 0u - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 15504u), c.r[2].w[0]);  if (t) { goto L_00311A58; } }
L_003118C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003118D0u);  if (depth < kMaxDepth) unit_0084(c, 204u, depth + 1u); else { c.pc = 0x003111D0u; return; } if (c.pc != 0x003118D0u) [[unlikely]] return; }
L_003118D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003118D8u);  if (depth < kMaxDepth) unit_0084(c, 203u, depth + 1u); else { c.pc = 0x003111C0u; return; } if (c.pc != 0x003118D8u) [[unlikely]] return; }
L_003118D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 15488u);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
L_003118E8:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[2].d[0] = c.r[5].d[0] << 48;  if (t) { goto L_00311928; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[5], 0u - 1u);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[2], c.r[2].w[0] + 15488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311918u); st32((c.r[2].w[0]), c.r[5].w[0]);  if (depth < kMaxDepth) unit_0083(c, 370u, depth + 1u); else { c.pc = 0x0030F830u; return; } if (c.pc != 0x00311918u) [[unlikely]] return; }
L_00311918:
    set32(c.r[2], 0u + 113u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 15504u), c.r[2].w[0]);  if (t) { goto L_00311A58; } }
L_00311928:
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[2].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003118E8u | kUnwind; return; } goto L_003118E8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031194Cu); set32(c.r[5], c.r[16].w[0] + 256u);  if (depth < kMaxDepth) unit_0083(c, 374u, depth + 1u); else { c.pc = 0x0030F880u; return; } if (c.pc != 0x0031194Cu) [[unlikely]] return; }
L_0031194C:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], 0u - 2u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00311998; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 6u);  if (t) { goto L_00311980; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00311980; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00311998; } }
    c.budget -= 1;
L_00311980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311988u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 370u, depth + 1u); else { c.pc = 0x0030F830u; return; } if (c.pc != 0x00311988u) [[unlikely]] return; }
L_00311988:
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 15504u), c.r[2].w[0]);  if (t) { goto L_00311A58; } }
L_00311998:
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003119C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003119ACu);  if (depth < kMaxDepth) unit_0083(c, 370u, depth + 1u); else { c.pc = 0x0030F830u; return; } if (c.pc != 0x003119ACu) [[unlikely]] return; }
L_003119AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003119B4u);  if (depth < kMaxDepth) unit_0084(c, 204u, depth + 1u); else { c.pc = 0x003111D0u; return; } if (c.pc != 0x003119B4u) [[unlikely]] return; }
L_003119B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003119D8; } }
    c.budget -= 1;
L_003119C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003119C8u);  if (depth < kMaxDepth) unit_0084(c, 204u, depth + 1u); else { c.pc = 0x003111D0u; return; } if (c.pc != 0x003119C8u) [[unlikely]] return; }
L_003119C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003119D0u);  if (depth < kMaxDepth) unit_0084(c, 307u, depth + 1u); else { c.pc = 0x003121B0u; return; } if (c.pc != 0x003119D0u) [[unlikely]] return; }
L_003119D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003118D0u | kUnwind; return; } goto L_003118D0; } }
L_003119D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003119E0u);  if (depth < kMaxDepth) unit_0084(c, 203u, depth + 1u); else { c.pc = 0x003111C0u; return; } if (c.pc != 0x003119E0u) [[unlikely]] return; }
L_003119E0:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003119F0u); set32(c.r[6], 0u + 256u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x003119F0u) [[unlikely]] return; }
L_003119F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 13008u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st32((c.r[1].w[0] + 13008u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 13008u)));
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = c.r[3].d[0] & 7ull;  if (t) { goto L_00311A20; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00311A20; } }
    set32(c.r[2], c.r[2].w[0] - 8u);
    c.budget -= 1;
L_00311A20:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st32((c.r[1].w[0] + 13008u), c.r[2].w[0]);
    c.budget -= 2;
L_00311A28:
    st32((c.r[16].w[0] + 292u), 0u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], 0u + 4u);
    st32((c.r[16].w[0] + 296u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 300u), c.r[2].w[0]);
    set32(c.r[3], c.r[16].w[0] + 256u);
    set32(c.r[2], c.r[16].w[0] + 272u);
    st32((c.r[16].w[0] + 272u), c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311A50u); st32((c.r[16].w[0] + 304u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0084(c, 204u, depth + 1u); else { c.pc = 0x003111D0u; return; } if (c.pc != 0x00311A50u) [[unlikely]] return; }
L_00311A50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[16].w[0] + 288u);  if (t) { goto L_00311A68; } }
L_00311A58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311A60u);  if (depth < kMaxDepth) unit_0084(c, 204u, depth + 1u); else { c.pc = 0x003111D0u; return; } if (c.pc != 0x00311A60u) [[unlikely]] return; }
L_00311A60:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00311A68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00311A80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311A94u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 205u, depth + 1u); else { c.pc = 0x003111E0u; return; } if (c.pc != 0x00311A94u) [[unlikely]] return; }
L_00311A94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00311AA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00311B08; } }
    c.budget -= 1;
L_00311AA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311AB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 248u, depth + 1u); else { c.pc = 0x00311810u; return; } if (c.pc != 0x00311AB0u) [[unlikely]] return; }
L_00311AB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00311AC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00311B08; } }
L_00311AC0:
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[7].d[0] = ld8((c.r[3].w[0] + 1u));
    c.r[5].d[0] = ld8((c.r[3].w[0] + 2u));
    c.r[6].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[7], c.r[7].w[0] << 8);
    c.r[7].d[0] = c.r[7].d[0] & 65280ull;
    set32(c.r[5], c.r[5].w[0] << 16);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 3u));
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    set32(c.r[3], c.r[3].w[0] << 24);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.budget -= 18;
L_00311B08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00311B20:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const bool t = c.r[4].sd[0] < 0; st16((c.r[29].w[0] + 142u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00311B60; } }
    c.r[2].d[0] = c.r[4].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00311B78; } }
L_00311B60:
    set32(c.r[2], 0u + 9u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st32((c.r[1].w[0] + 15512u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00311DD0; } }
    c.budget -= 1;
L_00311B78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[18], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 15520u);
    set32(c.r[16], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], 0u + 9u);  if (t) { goto L_00311DC0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 15512u), c.r[3].w[0]);  if (t) { goto L_00311DD0; } }
    c.budget -= 1;
L_00311BA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311BB0u);  if (depth < kMaxDepth) unit_0084(c, 203u, depth + 1u); else { c.pc = 0x003111C0u; return; } if (c.pc != 0x00311BB0u) [[unlikely]] return; }
L_00311BB0:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);  if (t) { goto L_00311BE8; } }
    set32(c.r[4], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + 15488u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], 0u + 113u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311BE0u); st32((c.r[1].w[0] + 15512u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0084(c, 204u, depth + 1u); else { c.pc = 0x003111D0u; return; } if (c.pc != 0x00311BE0u) [[unlikely]] return; }
L_00311BE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00311DD0; } }
L_00311BE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311BF0u);  if (depth < kMaxDepth) unit_0084(c, 204u, depth + 1u); else { c.pc = 0x003111D0u; return; } if (c.pc != 0x00311BF0u) [[unlikely]] return; }
L_00311BF0:
    c.r[20].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[20].w[0] + 1u);
    c.r[20].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = c.r[3].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < 16800ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);  if (t) { goto L_00311C98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[2], c.r[2].w[0] + 15520u);
    set32(c.r[19], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 3;
L_00311C20:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    set32(c.r[5], c.r[29].w[0] + 142u);
    set32(c.r[6], c.r[29].w[0] + 140u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311C34u); set32(c.r[7], c.r[29].w[0] + 138u);  if (depth < kMaxDepth) unit_0083(c, 222u, depth + 1u); else { c.pc = 0x0030E930u; return; } if (c.pc != 0x00311C34u) [[unlikely]] return; }
L_00311C34:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], 0u + 104u);  if (t) { goto L_00311C58; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 15512u), c.r[3].w[0]);  if (t) { goto L_00311DD0; } }
    c.budget -= 1;
L_00311C58:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 142u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_00311C70; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00311C98; } }
L_00311C70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311C78u);  if (depth < kMaxDepth) unit_0084(c, 307u, depth + 1u); else { c.pc = 0x003121B0u; return; } if (c.pc != 0x00311C78u) [[unlikely]] return; }
L_00311C78:
    c.r[3].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[20].w[0] + 1u);
    c.r[20].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = c.r[3].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].sd[0] < 16800ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00311C20u | kUnwind; return; } goto L_00311C20; } }
L_00311C98:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 142u)));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00311CC0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 138u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00311CF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00311D18; } }
    c.budget -= 1;
L_00311CC0:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00311CE0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 138u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00311CF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00311D18; } }
L_00311CE0:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 104u);  if (t) { goto L_00311CF8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 15512u), c.r[3].w[0]);  if (t) { goto L_00311DD0; } }
L_00311CF8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 138u)));
    c.r[2].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00311D18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311D10u);  if (depth < kMaxDepth) unit_0084(c, 307u, depth + 1u); else { c.pc = 0x003121B0u; return; } if (c.pc != 0x00311D10u) [[unlikely]] return; }
L_00311D10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00311BA8u | kUnwind; return; } goto L_00311BA8; } }
L_00311D18:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00311D28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00311DB0; } }
L_00311D28:
    c.r[1].d[0] = c.r[3].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00311D40; } }
    c.r[21].d[0] = c.r[3].d[0] << 48;
    c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 48);
    c.budget -= 3;
L_00311D40:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[6].d[0] = c.r[21].d[0] << 48;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311D54u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);  if (depth < kMaxDepth) unit_0083(c, 235u, depth + 1u); else { c.pc = 0x0030EB50u; return; } if (c.pc != 0x00311D54u) [[unlikely]] return; }
L_00311D54:
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], 0u + 104u);  if (t) { goto L_00311D78; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 15512u), c.r[3].w[0]);  if (t) { goto L_00311DD0; } }
    c.budget -= 1;
L_00311D78:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 142u)));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_00311D90; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00311DB0; } }
L_00311D90:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[21].d[0];  if (t) { goto L_00311DB0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 138u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 104u);  if (t) { goto L_00311DB0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st32((c.r[1].w[0] + 15512u), c.r[2].w[0]);
    c.budget -= 3;
L_00311DB0:
    c.r[2].d[0] = c.r[4].d[0] << 48;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);  if (t) { goto L_00311DD0; } }
    c.budget -= 1;
L_00311DC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[2], c.r[2].w[0] + 15488u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] + c.r[18].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00311BA8u | kUnwind; return; } goto L_00311BA8; } }
L_00311DD0:
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
L_00311E00:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const bool t = c.r[4].sd[0] < 0; st16((c.r[29].w[0] + 94u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00311E38; } }
    c.r[2].d[0] = c.r[4].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00311E50; } }
    c.budget -= 1;
L_00311E38:
    set32(c.r[2], 0u + 9u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st32((c.r[1].w[0] + 15512u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00311F60; } }
    c.budget -= 1;
L_00311E50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 15520u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], 0u + 9u);  if (t) { goto L_00311E80; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 15512u), c.r[3].w[0]);  if (t) { goto L_00311F60; } }
    c.budget -= 1;
L_00311E80:
    c.r[17].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = c.r[3].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < 16800ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (t) { goto L_00311F20; } }
    c.budget -= 1;
L_00311EA8:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[5], c.r[29].w[0] + 94u);
    set32(c.r[6], c.r[29].w[0] + 92u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311EBCu); set32(c.r[7], c.r[29].w[0] + 90u);  if (depth < kMaxDepth) unit_0083(c, 222u, depth + 1u); else { c.pc = 0x0030E930u; return; } if (c.pc != 0x00311EBCu) [[unlikely]] return; }
L_00311EBC:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], 0u + 104u);  if (t) { goto L_00311EE0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 15512u), c.r[3].w[0]);  if (t) { goto L_00311F60; } }
    c.budget -= 1;
L_00311EE0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 94u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_00311EF8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00311F20; } }
L_00311EF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311F00u);  if (depth < kMaxDepth) unit_0084(c, 307u, depth + 1u); else { c.pc = 0x003121B0u; return; } if (c.pc != 0x00311F00u) [[unlikely]] return; }
L_00311F00:
    c.r[3].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = c.r[3].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].sd[0] < 16800ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00311EA8u | kUnwind; return; } goto L_00311EA8; } }
L_00311F20:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[6].d[0] = c.r[18].d[0] << 48;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311F34u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);  if (depth < kMaxDepth) unit_0083(c, 227u, depth + 1u); else { c.pc = 0x0030E9E0u; return; } if (c.pc != 0x00311F34u) [[unlikely]] return; }
L_00311F34:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], 0u + 104u);  if (t) { goto L_00311F58; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 15512u), c.r[3].w[0]);  if (t) { goto L_00311F60; } }
    c.budget -= 1;
L_00311F58:
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.budget -= 2;
L_00311F60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00311F80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].sd[0] < 0; c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;  if (t) { goto L_00311FA8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00311FC0; } }
    c.budget -= 1;
L_00311FA8:
    set32(c.r[2], 0u + 9u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st32((c.r[1].w[0] + 15512u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00312078; } }
    c.budget -= 1;
L_00311FC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311FC8u);  if (depth < kMaxDepth) unit_0084(c, 203u, depth + 1u); else { c.pc = 0x003111C0u; return; } if (c.pc != 0x00311FC8u) [[unlikely]] return; }
L_00311FC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[16], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 15520u);
    set32(c.r[17], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u - 2u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);  if (t) { goto L_00312008; } }
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + 15488u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312000u); st32((c.r[2].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0084(c, 204u, depth + 1u); else { c.pc = 0x003111D0u; return; } if (c.pc != 0x00312000u) [[unlikely]] return; }
L_00312000:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00312078; } }
L_00312008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312010u);  if (depth < kMaxDepth) unit_0084(c, 204u, depth + 1u); else { c.pc = 0x003111D0u; return; } if (c.pc != 0x00312010u) [[unlikely]] return; }
L_00312010:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], 0u + 9u);  if (t) { goto L_00312030; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 15512u), c.r[3].w[0]);  if (t) { goto L_00312078; } }
    c.budget -= 1;
L_00312030:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312038u);  if (depth < kMaxDepth) unit_0084(c, 203u, depth + 1u); else { c.pc = 0x003111C0u; return; } if (c.pc != 0x00312038u) [[unlikely]] return; }
L_00312038:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[2], c.r[2].w[0] + 15520u);
    set32(c.r[17], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031204Cu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0083(c, 218u, depth + 1u); else { c.pc = 0x0030E8E0u; return; } if (c.pc != 0x0031204Cu) [[unlikely]] return; }
L_0031204C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312054u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0083(c, 249u, depth + 1u); else { c.pc = 0x0030ED90u; return; } if (c.pc != 0x00312054u) [[unlikely]] return; }
L_00312054:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + 15488u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312070u); st32((c.r[2].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0084(c, 204u, depth + 1u); else { c.pc = 0x003111D0u; return; } if (c.pc != 0x00312070u) [[unlikely]] return; }
L_00312070:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00312078:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00312090:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003120A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003120B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003120C0u);  if (depth < kMaxDepth) unit_0084(c, 203u, depth + 1u); else { c.pc = 0x003111C0u; return; } if (c.pc != 0x003120C0u) [[unlikely]] return; }
L_003120C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 13024u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003120D4u); set32(c.r[6], 0u + 2464u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003120D4u) [[unlikely]] return; }
L_003120D4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003120E0u); st32((c.r[1].w[0] + 13008u), 0u);  if (depth < kMaxDepth) unit_0084(c, 204u, depth + 1u); else { c.pc = 0x003111D0u; return; } if (c.pc != 0x003120E0u) [[unlikely]] return; }
L_003120E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003120F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 13000u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 16u);  if (t) { goto L_00312130; } }
    goto L_00312108;
L_00312104:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 1;
L_00312108:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312114u); set32(c.r[6], 0u + 24u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00312114u) [[unlikely]] return; }
L_00312114:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312128u); st32((c.r[29].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0001(c, 60u, depth + 1u); else { c.pc = 0x001042E0u; return; } if (c.pc != 0x00312128u) [[unlikely]] return; }
L_00312128:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st32((c.r[1].w[0] + 13000u), c.r[2].w[0]);
    c.budget -= 2;
L_00312130:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 12992u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 16u);  if (t) { goto L_00312168; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031214Cu); set32(c.r[6], 0u + 24u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0031214Cu) [[unlikely]] return; }
L_0031214C:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312160u); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_0001(c, 60u, depth + 1u); else { c.pc = 0x001042E0u; return; } if (c.pc != 0x00312160u) [[unlikely]] return; }
L_00312160:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st32((c.r[1].w[0] + 12992u), c.r[2].w[0]);
    c.budget -= 2;
L_00312168:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], c.r[4].w[0] + 15520u);
    set32(c.r[5], 0u + 255u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031217Cu); set32(c.r[6], 0u + 12u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0031217Cu) [[unlikely]] return; }
L_0031217C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[5], 0u + 255u);
    set32(c.r[4], c.r[4].w[0] + 15488u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312190u); set32(c.r[6], 0u + 12u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00312190u) [[unlikely]] return; }
L_00312190:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st32((c.r[1].w[0] + 15512u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st32((c.r[1].w[0] + 15504u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003121B0:
    c.budget -= 2;
    { set32(c.r[4], 0u + 64u);  goto L_00312200; }
L_003121C0:
    c.budget -= 2;
    { set32(c.r[4], 0u + 64u);  goto L_00312200; }
L_003121D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003121E0u); set32(c.r[4], ld32((c.r[6].w[0])));  if (depth < kMaxDepth) unit_0001(c, 203u, depth + 1u); else { c.pc = 0x00105190u; return; } if (c.pc != 0x003121E0u) [[unlikely]] return; }
L_003121E0:
    set_interrupts(c, true);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00312200:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312214u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 38u, depth + 1u); else { c.pc = 0x001041D0u; return; } if (c.pc != 0x00312214u) [[unlikely]] return; }
L_00312214:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00310000u);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[5], c.r[5].w[0] + 8656u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031222Cu); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_0001(c, 12u, depth + 1u); else { c.pc = 0x00104060u; return; } if (c.pc != 0x0031222Cu) [[unlikely]] return; }
L_0031222C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312234u);  if (depth < kMaxDepth) unit_0001(c, 44u, depth + 1u); else { c.pc = 0x00104200u; return; } if (c.pc != 0x00312234u) [[unlikely]] return; }
L_00312234:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031223Cu); set32(c.r[4], ld32((c.r[29].w[0] + 44u)));  if (depth < kMaxDepth) unit_0001(c, 50u, depth + 1u); else { c.pc = 0x00104230u; return; } if (c.pc != 0x0031223Cu) [[unlikely]] return; }
L_0031223C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00312250:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld16((c.r[28].w[0] - 22988u));  c.pc = t; return; }
L_00312260:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 4784u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031227Cu); set32(c.r[6], 0u + 1024u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0031227Cu) [[unlikely]] return; }
L_0031227C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 5808u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312290u); set32(c.r[6], 0u + 256u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00312290u) [[unlikely]] return; }
L_00312290:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st32((c.r[28].w[0] - 22984u), 0u);
    set32(c.r[3], c.r[3].w[0] + 4784u);
    st16((c.r[28].w[0] - 22972u), static_cast<std::uint16_t>(0u));
    st32((c.r[28].w[0] - 22976u), c.r[3].w[0]);
    st32((c.r[28].w[0] - 22980u), c.r[3].w[0]);
    st16((c.r[28].w[0] - 22988u), static_cast<std::uint16_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003122C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = ld8((c.r[4].w[0]));
    c.r[1].d[0] = 0ll < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003123A0; } }
L_003122E0:
    set32(c.r[4], ld32((c.r[28].w[0] - 22984u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00312330; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22976u)));
    c.r[6].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00312310; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003123A8; } }
    c.budget -= 1;
L_00312310:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312318u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00312318u) [[unlikely]] return; }
L_00312318:
    set32(c.r[2], ld32((c.r[28].w[0] - 22984u)));
    c.r[3].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 22984u), c.r[2].w[0]);  if (t) { goto L_00312380; } }
L_00312330:
    set32(c.r[4], ld32((c.r[28].w[0] - 22980u)));
    c.r[17].d[0] = c.r[17].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[3], c.r[3].w[0] + 5808u);
    set32(c.r[2], c.r[4].w[0] + c.r[17].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_00312360; } }
    set32(c.r[2], c.r[2].w[0] + 4784u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 22984u), c.r[2].w[0]);  if (t) { goto L_00312390; } }
    c.budget -= 1;
L_00312360:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031236Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0031236Cu) [[unlikely]] return; }
L_0031236C:
    set32(c.r[2], ld32((c.r[28].w[0] - 22980u)));
    set32(c.r[16], c.r[16].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[28].w[0] - 22980u), c.r[2].w[0]);
    c.budget -= 5;
L_00312380:
    c.r[2].d[0] = ld16((c.r[28].w[0] - 22988u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[28].w[0] - 22988u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00312390:
    c.r[17].d[0] = ld8((c.r[16].w[0]));
    c.r[2].d[0] = 0ll < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003122E0u | kUnwind; return; } goto L_003122E0; } }
L_003123A0:
    c.r[2].d[0] = ld16((c.r[28].w[0] - 22988u));
    c.budget -= 2;
L_003123A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003123C0:
    set32(c.r[5], ld32((c.r[28].w[0] - 22980u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] + 4784u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[4].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003123E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00312430; } }
    c.budget -= 1;
L_003123E0:
    set32(c.r[2], ld32((c.r[28].w[0] - 22976u)));
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[28].w[0] - 22976u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 22976u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_00312420; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 22984u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00312418; } }
    st32((c.r[28].w[0] - 22976u), c.r[4].w[0]);
    st32((c.r[28].w[0] - 22980u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 22984u), 0u);  if (t) { goto L_00312420; } }
L_00312418:
    st32((c.r[28].w[0] - 22976u), c.r[4].w[0]);
    st32((c.r[28].w[0] - 22980u), c.r[4].w[0]);
    c.budget -= 2;
L_00312420:
    c.r[3].d[0] = ld16((c.r[28].w[0] - 22988u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[28].w[0] - 22988u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00312430:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00312440:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 12592u);
    set32(c.r[5], 0u + 255u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031245Cu); set32(c.r[6], 0u + 980u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0031245Cu) [[unlikely]] return; }
L_0031245C:
    st32((c.r[28].w[0] - 22812u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00312470:
    c.r[3].d[0] = ld16((c.r[28].w[0] - 22884u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 11252u));
    set32(c.r[6], c.r[3].w[0] - 60u);
    c.r[1].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x88880000u);  if (t) { goto L_003124D8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].d[0] = c.r[2].d[0] | 34953ull;
    c.r[5].d[0] = ld16((c.r[1].w[0] + 10180u));
    mmi::mult(c, 0, c.r[2].w[0], c.r[6].w[0]);
    set32(c.r[4], c.r[6].w[0] >> 31);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[2], 0u + 8192u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - 2u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[1].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003124D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003124E0; } }
L_003124D8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003124E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003124F0:
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00312520; } }
L_00312500:
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312500u | kUnwind; return; } goto L_00312500; } }
    c.budget -= 1;
L_00312520:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00312530:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 10168u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 10169u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 10170u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 10171u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st16((c.r[1].w[0] + 10172u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st16((c.r[1].w[0] + 10174u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 10164u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st16((c.r[1].w[0] + 10166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[1].w[0] + 10164u), static_cast<std::uint16_t>(c.r[4].w[0]));  c.pc = t; return; }
L_00312580:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22804u)));
    set32(c.r[2], c.r[2].w[0] + 13576u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 11260u)));
    set32(c.r[3], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[7].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; st8((c.r[28].w[0] - 22804u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003125C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003127F8; } }
    c.budget -= 1;
L_003125C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[8].d[0] = ld16((c.r[1].w[0] + 11224u));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], c.r[28].w[0] - 22808u);
    set32(c.r[3], 0u + 1u);
    c.budget -= 6;
L_003125D8:
    set32(c.r[7], c.r[3].w[0] << (c.r[6].w[0] & 31u));
    c.r[2].d[0] = c.r[8].d[0] & c.r[7].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00312600; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00312600; } }
    c.r[9].d[0] = c.r[9].d[0] | c.r[7].d[0];
    c.budget -= 2;
L_00312600:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[10], c.r[10].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003125D8u | kUnwind; return; } goto L_003125D8; } }
    c.r[3].d[0] = ld16((c.r[28].w[0] - 22900u));
    c.r[12].sd[0] = static_cast<std::int32_t>(0x55550000u);
    c.r[13].d[0] = c.r[12].d[0] | 21846ull;
    c.r[11].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[11].d[0] = c.r[11].d[0] | 34079ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] + 13576u);
    set32(c.r[14], c.r[3].w[0] << 1);
    set32(c.r[12], c.r[3].w[0] << 2);
    mmi::mult(c, 0, c.r[13].w[0], c.r[14].w[0]);
    set32(c.r[15], c.r[14].w[0] >> 31);
    set32(c.r[13], c.r[12].w[0] + c.r[3].w[0]);
    set32(c.r[12], c.r[13].w[0] << 2);
    c.r[14].d[0] = c.hi.d[0];
    set32(c.r[12], c.r[13].w[0] + c.r[12].w[0]);
    set32(c.r[13], c.r[12].w[0] << 2);
    set32(c.r[12], c.r[13].w[0] >> 31);
    mmi::mult(c, 0, c.r[11].w[0], c.r[13].w[0]);
    set32(c.r[14], c.r[14].w[0] + c.r[15].w[0]);
    c.r[11].d[0] = c.hi.d[0];
    set32(c.r[11], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> 5));
    set32(c.r[13], c.r[11].w[0] + c.r[12].w[0]);
    c.budget -= 28;
L_00312680:
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[11].d[0] = c.r[12].sd[0] < c.r[14].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[11].d[0] != 0ull; c.r[11].d[0] = c.r[12].sd[0] < c.r[13].sd[0] ? 1ull : 0ull;  if (t) { goto L_003126A0; } }
    set32(c.r[8], c.r[8].w[0] + c.r[12].w[0]);
    c.budget -= 3;
    { const bool t = c.r[11].d[0] != 0ull; set32(c.r[10], c.r[10].w[0] + 1u);  if (t) { goto L_003126A0; } }
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_003126A0:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[11].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[11].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312680u | kUnwind; return; } goto L_00312680; } }
    c.r[1].d[0] = c.r[10].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(4ll);  if (t) { goto L_003126C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003127E0; } }
    c.budget -= 1;
L_003126C8:
    set32(c.r[6], 0u + 100u);
    c.f[1] = c.r[7].w[0];
    c.f[0] = c.r[10].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    mmi::div(c, 0, c.r[8].w[0], c.r[10].w[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[8], c.f[0]);
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[8], c.r[7].w[0] << 2);
    c.budget -= 19;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_00312728; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != 0ull; c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00312728; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003127A0; } }
    c.budget -= 1;
L_00312728:
    c.r[6].d[0] = c.r[8].sd[0] < 80ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull; c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(2ll);  if (t) { goto L_00312740; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003127A0; } }
    c.budget -= 1;
L_00312740:
    c.r[7].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[6], c.r[7].w[0] << 1);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 34079ull;
    set32(c.r[6], c.r[6].w[0] << 5);
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[6], c.r[6].w[0] >> 31);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[8].sd[0] < 51ll ? 1ull : 0ull;  if (t) { goto L_00312790; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00312798; } }
    c.budget -= 1;
L_00312790:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(3ll);  if (t) { goto L_003127A0; } }
L_00312798:
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.budget -= 2;
L_003127A0:
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003127D8; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 22944u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[28].w[0] - 22944u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[1].d[0] = c.r[2].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003127E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(2ll);  if (t) { goto L_003127E0; } }
    c.budget -= 1;
L_003127D8:
    st8((c.r[28].w[0] - 22944u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_003127E0:
    set32(c.r[3], c.r[9].w[0] << 4);
    c.r[2].d[0] = c.r[6].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003127F4u); c.r[6].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_008C(c, 151u, depth + 1u); else { c.pc = 0x00332870u; return; } if (c.pc != 0x003127F4u) [[unlikely]] return; }
L_003127F4:
    c.budget -= 1;
L_003127F8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00312810:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[2].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[11].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[10], c.r[10].w[0] + 7984u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[9], c.r[28].w[0] - 22808u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[8].d[0] = ld16((c.r[1].w[0] + 11224u));
    c.r[7].d[0] = ld16((c.r[28].w[0] - 22916u));
    set32(c.r[5], 0u + 1u);
    c.budget -= 18;
L_00312858:
    set32(c.r[6], c.r[5].w[0] << (c.r[11].w[0] & 31u));
    c.r[3].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00312898; } }
    c.r[3].d[0] = ld16((c.r[10].w[0]));
    set32(c.r[3], c.r[3].w[0] - c.r[7].w[0]);
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 63ull;
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[10].w[0]));
    c.budget -= 9;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; c.r[3].d[0] = c.r[6].d[0] & 65535ull;  if (t) { goto L_00312898; } }
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
L_00312898:
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.r[3].d[0] = c.r[11].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[10], c.r[10].w[0] + 2u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312858u | kUnwind; return; } goto L_00312858; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 11275u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_00312920; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = ld16((c.r[1].w[0] + 11224u));
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[28].w[0] - 22808u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
L_003128D0:
    set32(c.r[3], c.r[5].w[0] << (c.r[6].w[0] & 31u));
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003128F8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    c.r[3].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003128F8; } }
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 2;
L_003128F8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003128D0u | kUnwind; return; } goto L_003128D0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 11226u)));
    c.budget -= 4;
    { const bool t = c.r[9].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00312920; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 11275u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00312920:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 11224u));
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00312940; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00312CB8; } }
L_00312940:
    c.r[5].d[0] = ld16((c.r[28].w[0] - 22916u));
    c.r[2].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[3], 0u + 8u);
    st8((c.r[28].w[0] - 22960u), static_cast<std::uint8_t>(0u));
    st16((c.r[1].w[0] + 11282u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[28].w[0] - 22964u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] + 8000u);
    st8((c.r[28].w[0] - 22963u), static_cast<std::uint8_t>(0u));
    set32(c.r[10], c.r[5].w[0] << 3);
    st8((c.r[28].w[0] - 22962u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[3].w[0] + c.r[10].w[0]);
    st8((c.r[28].w[0] - 22961u), static_cast<std::uint8_t>(0u));
    c.r[9].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 18;
L_00312988:
    set32(c.r[6], c.r[7].w[0] << (c.r[8].w[0] & 31u));
    c.r[3].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003129B8; } }
    c.r[3].d[0] = ld16((c.r[9].w[0] + 6u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003129B8; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 22960u));
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[28].w[0] - 22960u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_003129B8:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 512u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312988u | kUnwind; return; } goto L_00312988; } }
    c.r[6].d[0] = ld16((c.r[28].w[0] - 24116u));
    c.r[3].d[0] = c.r[4].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[9], c.r[3].w[0] << 9);
    set32(c.r[4], c.r[4].w[0] + 8004u);
    set32(c.r[4], c.r[4].w[0] + c.r[9].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[10].w[0] + c.r[4].w[0]);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[10], 0u + 1u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 12;
L_003129F8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[7].d[0]; set32(c.r[4], c.r[10].w[0] << (c.r[7].w[0] & 31u));  if (t) { goto L_00312A28; } }
    c.r[4].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00312A28; } }
    c.r[4].d[0] = ld16((c.r[8].w[0]));
    c.r[4].d[0] = c.r[4].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00312A28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_00312A38; } }
    c.budget -= 1;
L_00312A28:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[4].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 512u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003129F8u | kUnwind; return; } goto L_003129F8; } }
L_00312A38:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_00312AC0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[2], c.r[2].w[0] + 8000u);
    st8((c.r[1].w[0] + 11241u), static_cast<std::uint8_t>(0u));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[10], c.r[2].w[0] + c.r[9].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[7], 0u + 1u);
    c.r[6].d[0] = ld16((c.r[1].w[0] + 11224u));
    c.budget -= 8;
L_00312A60:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[8].d[0]; set32(c.r[9], c.r[7].w[0] << (c.r[8].w[0] & 31u));  if (t) { goto L_00312AA8; } }
    c.r[2].d[0] = c.r[6].d[0] & c.r[9].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00312AA8; } }
    c.r[4].d[0] = ld16((c.r[5].w[0]));
    c.r[2].d[0] = ld16((c.r[5].w[0] + 4u));
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[10].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld16((c.r[4].w[0] + 4u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_00312AA8; } }
    c.r[4].d[0] = c.r[9].d[0] & 255ull;
    c.r[2].d[0] = ld8((c.r[1].w[0] + 11241u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 11241u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_00312AA8:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = c.r[8].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 512u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312A60u | kUnwind; return; } goto L_00312A60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00312B40; } }
L_00312AC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[2], c.r[2].w[0] + 8000u);
    st8((c.r[1].w[0] + 11241u), static_cast<std::uint8_t>(0u));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[10], c.r[2].w[0] + c.r[9].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[7], 0u + 1u);
    c.r[6].d[0] = ld16((c.r[1].w[0] + 11224u));
    c.budget -= 10;
L_00312AE8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[8].d[0]; set32(c.r[9], c.r[7].w[0] << (c.r[8].w[0] & 31u));  if (t) { goto L_00312B30; } }
    c.r[2].d[0] = c.r[6].d[0] & c.r[9].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00312B30; } }
    c.r[4].d[0] = ld16((c.r[5].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 4u));
    c.r[4].d[0] = c.r[4].d[0] & 63ull;
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[10].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 4u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_00312B30; } }
    c.r[4].d[0] = c.r[9].d[0] & 255ull;
    c.r[2].d[0] = ld8((c.r[1].w[0] + 11241u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 11241u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_00312B30:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = c.r[8].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 512u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312AE8u | kUnwind; return; } goto L_00312AE8; } }
L_00312B40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 11241u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_00312B88; } }
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 11282u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[4].d[0] | 2ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st16((c.r[1].w[0] + 11282u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 11282u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st16((c.r[1].w[0] + 11282u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 14;
L_00312B88:
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[21], c.r[21].w[0] + 10096u);
    set32(c.r[20], c.r[20].w[0] + 10080u);
    set32(c.r[19], c.r[19].w[0] + 8000u);
    set32(c.r[18], c.r[18].w[0] + 10064u);
    set32(c.r[17], c.r[17].w[0] + 10048u);
    c.budget -= 12;
L_00312BB8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 11224u));
    set32(c.r[2], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << (c.r[16].w[0] & 31u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00312C20; } }
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.r[4].d[0] = c.r[16].d[0] << 56;
    set32(c.r[2], 0u - 2u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[28].w[0] - 22916u));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[5], c.r[19].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[5].w[0] + 6u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[21].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[5].w[0] + 2u));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312C14u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008C(c, 125u, depth + 1u); else { c.pc = 0x00332130u; return; } if (c.pc != 0x00312C14u) [[unlikely]] return; }
L_00312C14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00312C40; } }
    c.budget -= 1;
L_00312C20:
    st32((c.r[18].w[0]), 0u);
    st32((c.r[17].w[0]), 0u);
    c.r[4].d[0] = c.r[16].d[0] << 56;
    st32((c.r[21].w[0]), 0u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312C3Cu); st32((c.r[20].w[0]), 0u);  if (depth < kMaxDepth) unit_008C(c, 125u, depth + 1u); else { c.pc = 0x00332130u; return; } if (c.pc != 0x00312C3Cu) [[unlikely]] return; }
L_00312C3C:
    c.budget -= 1;
L_00312C40:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[21], c.r[21].w[0] + 4u);
    set32(c.r[20], c.r[20].w[0] + 4u);
    set32(c.r[19], c.r[19].w[0] + 512u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312BB8u | kUnwind; return; } goto L_00312BB8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[6].d[0] = ld16((c.r[28].w[0] - 22916u));
    set32(c.r[5], ld32((c.r[1].w[0] + 11220u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 11232u)));
    st16((c.r[28].w[0] - 22916u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 11260u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[1].w[0] + 11220u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 11232u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st16((c.r[1].w[0] + 11260u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[28].w[0] - 22916u));
    c.r[3].d[0] = c.r[3].d[0] & 63ull;
    st16((c.r[28].w[0] - 22916u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 22;
L_00312CB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00312CE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 10164u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[2], c.r[2].w[0] - 17840u);
    st32((c.r[28].w[0] - 22800u), 0u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00312D14u); set32(c.r[4], c.r[4].w[0] + 10160u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00312D14u) [[unlikely]] return; }
L_00312D14:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 22800u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00312D30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 11244u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312D4Cu); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00312D4Cu) [[unlikely]] return; }
L_00312D4C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st16((c.r[1].w[0] + 11252u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st16((c.r[1].w[0] + 11254u), static_cast<std::uint16_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00312D70:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] + 11216u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
L_00312D80:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 11230u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[7].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_00312DB0; } }
    set32(c.r[3], c.r[4].w[0] << (c.r[7].w[0] & 31u));
    c.r[5].d[0] = ld16((c.r[1].w[0] + 11224u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00312DB0; } }
    c.r[3].d[0] = ld16((c.r[6].w[0] + 28u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[6].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00312DB0:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312D80u | kUnwind; return; } goto L_00312D80; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[4].d[0] = ld16((c.r[1].w[0] + 11252u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 11286u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st16((c.r[1].w[0] + 11252u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[4].d[0] = ld16((c.r[1].w[0] + 11252u));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_00312DF8; } }
    st16((c.r[1].w[0] + 11286u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 2;
L_00312DF8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 11254u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[1].w[0] + 11254u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00312E10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 22800u), 0u);  c.pc = t; return; }
L_00312E20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 22800u), 0u);  c.pc = t; return; }
L_00312E30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 22800u), 0u);  c.pc = t; return; }
L_00312E40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[28].w[0] - 22800u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00312E78; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[28].w[0] - 22892u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00313030; } }
L_00312E78:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], 0u + 9u);  if (t) { goto L_00312EB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312E9Cu);  if (depth < kMaxDepth) unit_0084(c, 330u, depth + 1u); else { c.pc = 0x00312530u; return; } if (c.pc != 0x00312E9Cu) [[unlikely]] return; }
L_00312E9C:
    set32(c.r[4], 0u + 11u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312EA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008C(c, 124u, depth + 1u); else { c.pc = 0x00332100u; return; } if (c.pc != 0x00312EA8u) [[unlikely]] return; }
L_00312EA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00313030; } }
L_00312EB0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 12u)));
    set32(c.r[2], 0u + 30u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_00312EF8; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 11230u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312EE0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008C(c, 156u, depth + 1u); else { c.pc = 0x00332950u; return; } if (c.pc != 0x00312EE0u) [[unlikely]] return; }
L_00312EE0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], 0u + 9u);  if (t) { goto L_00312EF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312EF0u);  if (depth < kMaxDepth) unit_0084(c, 330u, depth + 1u); else { c.pc = 0x00312530u; return; } if (c.pc != 0x00312EF0u) [[unlikely]] return; }
L_00312EF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00313030; } }
L_00312EF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312F00u);  if (depth < kMaxDepth) unit_0084(c, 316u, depth + 1u); else { c.pc = 0x00312250u; return; } if (c.pc != 0x00312F00u) [[unlikely]] return; }
L_00312F00:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00312FE8; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[5], c.r[5].w[0] + 10192u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312F20u); set32(c.r[6], 0u + 1024u);  if (depth < kMaxDepth) unit_008C(c, 168u, depth + 1u); else { c.pc = 0x00332B20u; return; } if (c.pc != 0x00312F20u) [[unlikely]] return; }
L_00312F20:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], 0u + 9u);  if (t) { goto L_00312F38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312F30u);  if (depth < kMaxDepth) unit_0084(c, 330u, depth + 1u); else { c.pc = 0x00312530u; return; } if (c.pc != 0x00312F30u) [[unlikely]] return; }
L_00312F30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00313030; } }
L_00312F38:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312F44u); set32(c.r[4], c.r[4].w[0] + 10192u);  if (depth < kMaxDepth) unit_0084(c, 320u, depth + 1u); else { c.pc = 0x003122C0u; return; } if (c.pc != 0x00312F44u) [[unlikely]] return; }
L_00312F44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00312FE8; } }
    c.budget -= 1;
L_00312F50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 11230u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312F64u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 183u, depth + 1u); else { c.pc = 0x00332E30u; return; } if (c.pc != 0x00312F64u) [[unlikely]] return; }
L_00312F64:
    c.r[4].d[0] = c.r[2].d[0] & 240ull;
    set32(c.r[3], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00312F80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00312FE8; } }
    c.budget -= 1;
L_00312F80:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 2u));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_00312FB8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00312FA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00312FE8; } }
L_00312FA0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 11230u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312FB0u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_008C(c, 156u, depth + 1u); else { c.pc = 0x00332950u; return; } if (c.pc != 0x00312FB0u) [[unlikely]] return; }
L_00312FB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00312FE8; } }
L_00312FB8:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[3], c.r[6].w[0] << (c.r[2].w[0] & 31u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 11224u));
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st16((c.r[1].w[0] + 11224u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 11224u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st16((c.r[1].w[0] + 11280u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 12;
L_00312FE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312FF0u);  if (depth < kMaxDepth) unit_0084(c, 324u, depth + 1u); else { c.pc = 0x003123C0u; return; } if (c.pc != 0x00312FF0u) [[unlikely]] return; }
L_00312FF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312F50u | kUnwind; return; } goto L_00312F50; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313004u); c.r[4].d[0] = ld16((c.r[1].w[0] + 11224u));  if (depth < kMaxDepth) unit_0084(c, 328u, depth + 1u); else { c.pc = 0x003124F0u; return; } if (c.pc != 0x00313004u) [[unlikely]] return; }
L_00313004:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 11226u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[4], 0u + 5u);  if (t) { goto L_00313030; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031301Cu);  if (depth < kMaxDepth) unit_0084(c, 330u, depth + 1u); else { c.pc = 0x00312530u; return; } if (c.pc != 0x0031301Cu) [[unlikely]] return; }
L_0031301C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313024u);  if (depth < kMaxDepth) unit_0084(c, 347u, depth + 1u); else { c.pc = 0x00312D30u; return; } if (c.pc != 0x00313024u) [[unlikely]] return; }
L_00313024:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 22924u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00313030; } }
    c.budget -= 1;
L_00313030:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00313050:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 22800u), 0u);  c.pc = t; return; }
L_00313060:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 22800u), 0u);  c.pc = t; return; }
L_00313070:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[28].w[0] - 22800u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00313148; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[19].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[28].w[0] - 22892u));
    st16((c.r[19].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[1].w[0] + 11228u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_00313110; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] + 8000u);
    set32(c.r[16], c.r[16].w[0] + 7984u);
    c.budget -= 4;
L_003130C8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 11228u));
    set32(c.r[2], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << (c.r[18].w[0] & 31u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003130F8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003130F0u); set32(c.r[6], 0u + 512u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003130F0u) [[unlikely]] return; }
L_003130F0:
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_003130F8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 512u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003130C8u | kUnwind; return; } goto L_003130C8; } }
    c.budget -= 1;
L_00313110:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 11230u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313124u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008C(c, 143u, depth + 1u); else { c.pc = 0x003326D0u; return; } if (c.pc != 0x00313124u) [[unlikely]] return; }
L_00313124:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], 0u + 9u);  if (t) { goto L_00313140; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313134u);  if (depth < kMaxDepth) unit_0084(c, 330u, depth + 1u); else { c.pc = 0x00312530u; return; } if (c.pc != 0x00313134u) [[unlikely]] return; }
L_00313134:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003133C8; } }
    c.budget -= 1;
L_00313140:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003133C8; } }
L_00313148:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313158u); set32(c.r[5], c.r[5].w[0] + 10176u);  if (depth < kMaxDepth) unit_0083(c, 440u, depth + 1u); else { c.pc = 0x0030FFF0u; return; } if (c.pc != 0x00313158u) [[unlikely]] return; }
L_00313158:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[4], 0u + 9u);  if (t) { goto L_00313180; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031316Cu);  if (depth < kMaxDepth) unit_0084(c, 330u, depth + 1u); else { c.pc = 0x00312530u; return; } if (c.pc != 0x0031316Cu) [[unlikely]] return; }
L_0031316C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313178u); set32(c.r[4], 0u + 19u);  if (depth < kMaxDepth) unit_008C(c, 124u, depth + 1u); else { c.pc = 0x00332100u; return; } if (c.pc != 0x00313178u) [[unlikely]] return; }
L_00313178:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003133C8; } }
L_00313180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313188u);  if (depth < kMaxDepth) unit_0084(c, 349u, depth + 1u); else { c.pc = 0x00312D70u; return; } if (c.pc != 0x00313188u) [[unlikely]] return; }
L_00313188:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313190u);  if (depth < kMaxDepth) unit_0084(c, 327u, depth + 1u); else { c.pc = 0x00312470u; return; } if (c.pc != 0x00313190u) [[unlikely]] return; }
L_00313190:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 9u);  if (t) { goto L_003131B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003131A0u);  if (depth < kMaxDepth) unit_0084(c, 330u, depth + 1u); else { c.pc = 0x00312530u; return; } if (c.pc != 0x003131A0u) [[unlikely]] return; }
L_003131A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].d[0] = ld16((c.r[1].w[0] + 11252u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003131B0u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_008C(c, 124u, depth + 1u); else { c.pc = 0x00332100u; return; } if (c.pc != 0x003131B0u) [[unlikely]] return; }
L_003131B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003133C8; } }
L_003131B8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[19].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], 0u + 9u);  if (t) { goto L_003131F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003131DCu);  if (depth < kMaxDepth) unit_0084(c, 330u, depth + 1u); else { c.pc = 0x00312530u; return; } if (c.pc != 0x003131DCu) [[unlikely]] return; }
L_003131DC:
    set32(c.r[4], 0u + 18u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003131E8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008C(c, 124u, depth + 1u); else { c.pc = 0x00332100u; return; } if (c.pc != 0x003131E8u) [[unlikely]] return; }
L_003131E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003133C8; } }
L_003131F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 11230u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[6].d[0] = ld16((c.r[28].w[0] - 22884u));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[8].w[0] + 11216u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[7].d[0] = ld16((c.r[1].w[0] + 11224u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 10;
L_00313218:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[2], c.r[3].w[0] << (c.r[4].w[0] & 31u));  if (t) { goto L_00313250; } }
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00313250; } }
    c.r[2].d[0] = ld16((c.r[8].w[0] + 28u));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00313250; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313244u); set32(c.r[4], 0u + 10u);  if (depth < kMaxDepth) unit_0084(c, 330u, depth + 1u); else { c.pc = 0x00312530u; return; } if (c.pc != 0x00313244u) [[unlikely]] return; }
L_00313244:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 11228u), static_cast<std::uint16_t>(0u));  if (t) { goto L_003133C8; } }
L_00313250:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00313218u | kUnwind; return; } goto L_00313218; } }
    c.r[2].d[0] = ld16((c.r[28].w[0] - 22924u));
    c.r[3].d[0] = ld16((c.r[28].w[0] - 22896u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[28].w[0] - 22924u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[28].w[0] - 22924u));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003132A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313288u); set32(c.r[4], ld32((c.r[19].w[0])));  if (depth < kMaxDepth) unit_008C(c, 148u, depth + 1u); else { c.pc = 0x003327A0u; return; } if (c.pc != 0x00313288u) [[unlikely]] return; }
L_00313288:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], 0u + 9u);  if (t) { goto L_003132A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313298u);  if (depth < kMaxDepth) unit_0084(c, 330u, depth + 1u); else { c.pc = 0x00312530u; return; } if (c.pc != 0x00313298u) [[unlikely]] return; }
L_00313298:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003133C8; } }
L_003132A0:
    st16((c.r[28].w[0] - 22924u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_003132A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003132B0u);  if (depth < kMaxDepth) unit_0084(c, 316u, depth + 1u); else { c.pc = 0x00312250u; return; } if (c.pc != 0x003132B0u) [[unlikely]] return; }
L_003132B0:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003133B8; } }
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[5], c.r[5].w[0] + 10192u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003132D0u); set32(c.r[6], 0u + 1024u);  if (depth < kMaxDepth) unit_008C(c, 168u, depth + 1u); else { c.pc = 0x00332B20u; return; } if (c.pc != 0x003132D0u) [[unlikely]] return; }
L_003132D0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], 0u + 9u);  if (t) { goto L_003132E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003132E0u);  if (depth < kMaxDepth) unit_0084(c, 330u, depth + 1u); else { c.pc = 0x00312530u; return; } if (c.pc != 0x003132E0u) [[unlikely]] return; }
L_003132E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003133C8; } }
L_003132E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003132F4u); set32(c.r[4], c.r[4].w[0] + 10192u);  if (depth < kMaxDepth) unit_0084(c, 320u, depth + 1u); else { c.pc = 0x003122C0u; return; } if (c.pc != 0x003132F4u) [[unlikely]] return; }
L_003132F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003133B8; } }
    c.budget -= 1;
L_00313300:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 11230u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313310u); set32(c.r[4], ld32((c.r[19].w[0])));  if (depth < kMaxDepth) unit_008C(c, 183u, depth + 1u); else { c.pc = 0x00332E30u; return; } if (c.pc != 0x00313310u) [[unlikely]] return; }
L_00313310:
    c.r[4].d[0] = c.r[2].d[0] & 240ull;
    set32(c.r[3], 0u + 112u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 48u);  if (t) { goto L_00313398; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00313330; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003133B8; } }
L_00313330:
    c.r[16].d[0] = c.r[2].d[0] & 15ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[3], c.r[16].w[0] << 9);
    set32(c.r[2], c.r[2].w[0] + 8000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313350u); set32(c.r[6], 0u + 512u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00313350u) [[unlikely]] return; }
L_00313350:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 7984u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = ld16((c.r[1].w[0] + 11224u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 11228u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 6u);  if (t) { goto L_003133B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313388u);  if (depth < kMaxDepth) unit_0084(c, 330u, depth + 1u); else { c.pc = 0x00312530u; return; } if (c.pc != 0x00313388u) [[unlikely]] return; }
L_00313388:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 11228u), static_cast<std::uint16_t>(0u));  if (t) { goto L_003133C8; } }
    c.budget -= 1;
L_00313398:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[2], c.r[2].w[0] + 11216u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[2].w[0] + 28u), static_cast<std::uint16_t>(0u));
    st16((c.r[1].w[0] + 11252u), static_cast<std::uint16_t>(0u));
    c.budget -= 8;
L_003133B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003133C0u);  if (depth < kMaxDepth) unit_0084(c, 324u, depth + 1u); else { c.pc = 0x003123C0u; return; } if (c.pc != 0x003133C0u) [[unlikely]] return; }
L_003133C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00313300u | kUnwind; return; } goto L_00313300; } }
L_003133C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003133F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[28].w[0] - 22800u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003134E8; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st32((c.r[1].w[0] + 11216u), 0u);
    set32(c.r[4], c.r[4].w[0] + 7824u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 160u);
    st16((c.r[28].w[0] - 22916u), static_cast<std::uint16_t>(0u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313440u); st32((c.r[1].w[0] + 11220u), 0u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00313440u) [[unlikely]] return; }
L_00313440:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[28].w[0] - 22940u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 4u);
    st16((c.r[28].w[0] - 22920u), static_cast<std::uint16_t>(0u));
    st16((c.r[28].w[0] - 22924u), static_cast<std::uint16_t>(0u));
    st32((c.r[28].w[0] - 22908u), 0u);
    st32((c.r[28].w[0] - 22912u), 0u);
    st8((c.r[1].w[0] + 11232u), static_cast<std::uint8_t>(0u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031346Cu); st16((c.r[28].w[0] - 22936u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0031346Cu) [[unlikely]] return; }
L_0031346C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 13576u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313480u); set32(c.r[6], 0u + 9u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00313480u) [[unlikely]] return; }
L_00313480:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st16((c.r[1].w[0] + 11268u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], c.r[4].w[0] + 11270u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].d[0] = 0ull + 0ull;
    st16((c.r[1].w[0] + 11266u), static_cast<std::uint16_t>(0u));
    set32(c.r[6], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[28].w[0] - 22804u), static_cast<std::uint8_t>(0u));
    st16((c.r[1].w[0] + 11264u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[28].w[0] - 22944u), static_cast<std::uint8_t>(0u));
    st16((c.r[1].w[0] + 11262u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st16((c.r[1].w[0] + 11260u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st16((c.r[1].w[0] + 11258u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003134D4u); st16((c.r[1].w[0] + 11256u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003134D4u) [[unlikely]] return; }
L_003134D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003134DCu);  if (depth < kMaxDepth) unit_0084(c, 347u, depth + 1u); else { c.pc = 0x00312D30u; return; } if (c.pc != 0x003134DCu) [[unlikely]] return; }
L_003134DC:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 22928u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00313820; } }
L_003134E8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003134F8u); set32(c.r[5], c.r[5].w[0] + 10176u);  if (depth < kMaxDepth) unit_0083(c, 440u, depth + 1u); else { c.pc = 0x0030FFF0u; return; } if (c.pc != 0x003134F8u) [[unlikely]] return; }
L_003134F8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[4], 0u + 9u);  if (t) { goto L_00313520; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031350Cu);  if (depth < kMaxDepth) unit_0084(c, 330u, depth + 1u); else { c.pc = 0x00312530u; return; } if (c.pc != 0x0031350Cu) [[unlikely]] return; }
L_0031350C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313518u); set32(c.r[4], 0u + 19u);  if (depth < kMaxDepth) unit_008C(c, 124u, depth + 1u); else { c.pc = 0x00332100u; return; } if (c.pc != 0x00313518u) [[unlikely]] return; }
L_00313518:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00313820; } }
L_00313520:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 11258u)));
    c.r[3].d[0] = ld16((c.r[28].w[0] - 22900u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st16((c.r[1].w[0] + 11258u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_003135E0; } }
    st16((c.r[1].w[0] + 11258u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 11230u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313560u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0084(c, 331u, depth + 1u); else { c.pc = 0x00312580u; return; } if (c.pc != 0x00313560u) [[unlikely]] return; }
L_00313560:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[4], 0u + 9u);  if (t) { goto L_00313580; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313574u);  if (depth < kMaxDepth) unit_0084(c, 330u, depth + 1u); else { c.pc = 0x00312530u; return; } if (c.pc != 0x00313574u) [[unlikely]] return; }
L_00313574:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00313820; } }
    c.budget -= 1;
L_00313580:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 11260u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] + 11270u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 11264u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 11268u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st16((c.r[1].w[0] + 11256u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st16((c.r[1].w[0] + 11262u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st16((c.r[1].w[0] + 11266u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st16((c.r[1].w[0] + 11260u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st16((c.r[1].w[0] + 11264u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003135DCu); st16((c.r[1].w[0] + 11268u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003135DCu) [[unlikely]] return; }
L_003135DC:
    c.budget -= 1;
L_003135E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003135E8u);  if (depth < kMaxDepth) unit_0084(c, 349u, depth + 1u); else { c.pc = 0x00312D70u; return; } if (c.pc != 0x003135E8u) [[unlikely]] return; }
L_003135E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003135F0u);  if (depth < kMaxDepth) unit_0084(c, 327u, depth + 1u); else { c.pc = 0x00312470u; return; } if (c.pc != 0x003135F0u) [[unlikely]] return; }
L_003135F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 9u);  if (t) { goto L_00313618; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313600u);  if (depth < kMaxDepth) unit_0084(c, 330u, depth + 1u); else { c.pc = 0x00312530u; return; } if (c.pc != 0x00313600u) [[unlikely]] return; }
L_00313600:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].d[0] = ld16((c.r[1].w[0] + 11252u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313610u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_008C(c, 124u, depth + 1u); else { c.pc = 0x00332100u; return; } if (c.pc != 0x00313610u) [[unlikely]] return; }
L_00313610:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00313820; } }
L_00313618:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 11230u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].d[0] = ld16((c.r[28].w[0] - 22884u));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[8].w[0] + 11216u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[6].d[0] = ld16((c.r[1].w[0] + 11224u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 10;
L_00313640:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[4].d[0]; set32(c.r[2], c.r[3].w[0] << (c.r[4].w[0] & 31u));  if (t) { goto L_00313678; } }
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00313678; } }
    c.r[2].d[0] = ld16((c.r[8].w[0] + 28u));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00313678; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031366Cu); set32(c.r[4], 0u + 10u);  if (depth < kMaxDepth) unit_0084(c, 330u, depth + 1u); else { c.pc = 0x00312530u; return; } if (c.pc != 0x0031366Cu) [[unlikely]] return; }
L_0031366C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00313820; } }
    c.budget -= 1;
L_00313678:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00313640u | kUnwind; return; } goto L_00313640; } }
    c.r[2].d[0] = ld16((c.r[28].w[0] - 22924u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313698u); st16((c.r[28].w[0] - 22924u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008C(c, 130u, depth + 1u); else { c.pc = 0x00332340u; return; } if (c.pc != 0x00313698u) [[unlikely]] return; }
L_00313698:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_003136A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003136A8u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 11230u)));  if (depth < kMaxDepth) unit_008C(c, 131u, depth + 1u); else { c.pc = 0x00332390u; return; } if (c.pc != 0x003136A8u) [[unlikely]] return; }
L_003136A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 11231u)));
    c.r[2].d[0] = ld16((c.r[28].w[0] - 22920u));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_00313708; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 11230u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003136CCu); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_008C(c, 136u, depth + 1u); else { c.pc = 0x00332540u; return; } if (c.pc != 0x003136CCu) [[unlikely]] return; }
L_003136CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_00313700; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00313700; } }
    set32(c.r[3], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003136F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00313748; } }
L_003136F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003136F8u); set32(c.r[4], 0u + 9u);  if (depth < kMaxDepth) unit_0084(c, 330u, depth + 1u); else { c.pc = 0x00312530u; return; } if (c.pc != 0x003136F8u) [[unlikely]] return; }
L_003136F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00313820; } }
L_00313700:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 22924u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00313748; } }
L_00313708:
    c.r[3].d[0] = ld16((c.r[28].w[0] - 22896u));
    c.r[2].d[0] = ld16((c.r[28].w[0] - 22924u));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_00313748; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 11230u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313728u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_008C(c, 148u, depth + 1u); else { c.pc = 0x003327A0u; return; } if (c.pc != 0x00313728u) [[unlikely]] return; }
L_00313728:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], 0u + 9u);  if (t) { goto L_00313740; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313738u);  if (depth < kMaxDepth) unit_0084(c, 330u, depth + 1u); else { c.pc = 0x00312530u; return; } if (c.pc != 0x00313738u) [[unlikely]] return; }
L_00313738:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00313820; } }
L_00313740:
    st16((c.r[28].w[0] - 22924u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_00313748:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[6], 0u + 1024u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031375Cu); set32(c.r[5], c.r[5].w[0] + 10192u);  if (depth < kMaxDepth) unit_008C(c, 168u, depth + 1u); else { c.pc = 0x00332B20u; return; } if (c.pc != 0x0031375Cu) [[unlikely]] return; }
L_0031375C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], 0u + 9u);  if (t) { goto L_00313778; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031376Cu);  if (depth < kMaxDepth) unit_0084(c, 330u, depth + 1u); else { c.pc = 0x00312530u; return; } if (c.pc != 0x0031376Cu) [[unlikely]] return; }
L_0031376C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00313820; } }
    c.budget -= 1;
L_00313778:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313784u); set32(c.r[4], c.r[4].w[0] + 10192u);  if (depth < kMaxDepth) unit_0084(c, 320u, depth + 1u); else { c.pc = 0x003122C0u; return; } if (c.pc != 0x00313784u) [[unlikely]] return; }
L_00313784:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031378Cu);  if (depth < kMaxDepth) unit_0084(c, 324u, depth + 1u); else { c.pc = 0x003123C0u; return; } if (c.pc != 0x0031378Cu) [[unlikely]] return; }
L_0031378C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00313800; } }
    c.budget -= 1;
L_00313798:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 11230u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003137ACu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 183u, depth + 1u); else { c.pc = 0x00332E30u; return; } if (c.pc != 0x003137ACu) [[unlikely]] return; }
L_003137AC:
    c.r[4].d[0] = c.r[2].d[0] & 240ull;
    set32(c.r[3], 0u + 32u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 112u);  if (t) { goto L_003137D0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003137D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003137F0; } }
    c.budget -= 1;
L_003137D0:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[2], c.r[2].w[0] + 11216u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[2].w[0] + 28u), static_cast<std::uint16_t>(0u));
    st16((c.r[1].w[0] + 11252u), static_cast<std::uint16_t>(0u));
    c.budget -= 8;
L_003137F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003137F8u);  if (depth < kMaxDepth) unit_0084(c, 324u, depth + 1u); else { c.pc = 0x003123C0u; return; } if (c.pc != 0x003137F8u) [[unlikely]] return; }
L_003137F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00313798u | kUnwind; return; } goto L_00313798; } }
L_00313800:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031380Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 11230u)));  if (depth < kMaxDepth) unit_0084(c, 335u, depth + 1u); else { c.pc = 0x00312810u; return; } if (c.pc != 0x0031380Cu) [[unlikely]] return; }
L_0031380C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_00313820; } }
    st32((c.r[28].w[0] - 22800u), c.r[3].w[0]);
    st16((c.r[1].w[0] + 11254u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_00313820:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00313840:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 22800u), 0u);  c.pc = t; return; }
L_00313850:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[28].w[0] - 22800u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003138B0; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[28].w[0] - 22892u));
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 11230u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313890u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008C(c, 143u, depth + 1u); else { c.pc = 0x003326D0u; return; } if (c.pc != 0x00313890u) [[unlikely]] return; }
L_00313890:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], 0u + 9u);  if (t) { goto L_003138A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003138A0u);  if (depth < kMaxDepth) unit_0084(c, 330u, depth + 1u); else { c.pc = 0x00312530u; return; } if (c.pc != 0x003138A0u) [[unlikely]] return; }
L_003138A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003139C8; } }
L_003138A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003139C8; } }
L_003138B0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], 0u + 9u);  if (t) { goto L_003138E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003138D4u);  if (depth < kMaxDepth) unit_0084(c, 330u, depth + 1u); else { c.pc = 0x00312530u; return; } if (c.pc != 0x003138D4u) [[unlikely]] return; }
L_003138D4:
    set32(c.r[4], 0u + 14u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003138E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008C(c, 124u, depth + 1u); else { c.pc = 0x00332100u; return; } if (c.pc != 0x003138E0u) [[unlikely]] return; }
L_003138E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003139C8; } }
L_003138E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003138F0u);  if (depth < kMaxDepth) unit_0084(c, 316u, depth + 1u); else { c.pc = 0x00312250u; return; } if (c.pc != 0x003138F0u) [[unlikely]] return; }
L_003138F0:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003139B8; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[5], c.r[5].w[0] + 10192u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313910u); set32(c.r[6], 0u + 1024u);  if (depth < kMaxDepth) unit_008C(c, 168u, depth + 1u); else { c.pc = 0x00332B20u; return; } if (c.pc != 0x00313910u) [[unlikely]] return; }
L_00313910:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], 0u + 9u);  if (t) { goto L_00313928; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313920u);  if (depth < kMaxDepth) unit_0084(c, 330u, depth + 1u); else { c.pc = 0x00312530u; return; } if (c.pc != 0x00313920u) [[unlikely]] return; }
L_00313920:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003139C8; } }
L_00313928:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313934u); set32(c.r[4], c.r[4].w[0] + 10192u);  if (depth < kMaxDepth) unit_0084(c, 320u, depth + 1u); else { c.pc = 0x003122C0u; return; } if (c.pc != 0x00313934u) [[unlikely]] return; }
L_00313934:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003139B8; } }
    c.budget -= 1;
L_00313940:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 11230u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313950u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_008C(c, 183u, depth + 1u); else { c.pc = 0x00332E30u; return; } if (c.pc != 0x00313950u) [[unlikely]] return; }
L_00313950:
    c.r[3].d[0] = c.r[2].d[0] & 240ull;
    set32(c.r[2], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00313968; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003139B8; } }
L_00313968:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 11224u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 11228u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 5u);  if (t) { goto L_003139B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031398Cu);  if (depth < kMaxDepth) unit_0084(c, 330u, depth + 1u); else { c.pc = 0x00312530u; return; } if (c.pc != 0x0031398Cu) [[unlikely]] return; }
L_0031398C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st16((c.r[1].w[0] + 11228u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 11284u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_003139B0; } }
    st16((c.r[1].w[0] + 11284u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 1;
L_003139B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003139C8; } }
L_003139B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003139C0u);  if (depth < kMaxDepth) unit_0084(c, 324u, depth + 1u); else { c.pc = 0x003123C0u; return; } if (c.pc != 0x003139C0u) [[unlikely]] return; }
L_003139C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00313940u | kUnwind; return; } goto L_00313940; } }
L_003139C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003139E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003139F8; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003139F8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 22800u), c.r[3].w[0]);  c.pc = t; return; }
L_00313A10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[28].w[0] - 22800u), 0u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313A38u); set32(c.r[5], c.r[5].w[0] + 10176u);  if (depth < kMaxDepth) unit_0083(c, 440u, depth + 1u); else { c.pc = 0x0030FFF0u; return; } if (c.pc != 0x00313A38u) [[unlikely]] return; }
L_00313A38:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[4], 0u + 9u);  if (t) { goto L_00313A60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313A4Cu);  if (depth < kMaxDepth) unit_0084(c, 330u, depth + 1u); else { c.pc = 0x00312530u; return; } if (c.pc != 0x00313A4Cu) [[unlikely]] return; }
L_00313A4C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313A58u); set32(c.r[4], 0u + 19u);  if (depth < kMaxDepth) unit_008C(c, 124u, depth + 1u); else { c.pc = 0x00332100u; return; } if (c.pc != 0x00313A58u) [[unlikely]] return; }
L_00313A58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00313E60; } }
L_00313A60:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 11258u)));
    c.r[3].d[0] = ld16((c.r[28].w[0] - 22900u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st16((c.r[1].w[0] + 11258u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_00313AF0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st16((c.r[1].w[0] + 11258u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], c.r[4].w[0] + 11270u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 11260u)));
    set32(c.r[6], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 11264u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 11268u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st16((c.r[1].w[0] + 11256u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st16((c.r[1].w[0] + 11262u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st16((c.r[1].w[0] + 11266u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st16((c.r[1].w[0] + 11260u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st16((c.r[1].w[0] + 11264u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313AECu); st16((c.r[1].w[0] + 11268u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00313AECu) [[unlikely]] return; }
L_00313AEC:
    c.budget -= 1;
L_00313AF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313AF8u);  if (depth < kMaxDepth) unit_0084(c, 349u, depth + 1u); else { c.pc = 0x00312D70u; return; } if (c.pc != 0x00313AF8u) [[unlikely]] return; }
L_00313AF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313B00u);  if (depth < kMaxDepth) unit_0084(c, 327u, depth + 1u); else { c.pc = 0x00312470u; return; } if (c.pc != 0x00313B00u) [[unlikely]] return; }
L_00313B00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 9u);  if (t) { goto L_00313B28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313B10u);  if (depth < kMaxDepth) unit_0084(c, 330u, depth + 1u); else { c.pc = 0x00312530u; return; } if (c.pc != 0x00313B10u) [[unlikely]] return; }
L_00313B10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].d[0] = ld16((c.r[1].w[0] + 11252u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313B20u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_008C(c, 124u, depth + 1u); else { c.pc = 0x00332100u; return; } if (c.pc != 0x00313B20u) [[unlikely]] return; }
L_00313B20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00313E60; } }
L_00313B28:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[3].d[0] = ld16((c.r[28].w[0] - 22888u));
    c.r[2].d[0] = ld16((c.r[1].w[0] + 11254u));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], 0u + 9u);  if (t) { goto L_00313B60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313B48u);  if (depth < kMaxDepth) unit_0084(c, 330u, depth + 1u); else { c.pc = 0x00312530u; return; } if (c.pc != 0x00313B48u) [[unlikely]] return; }
L_00313B48:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].d[0] = ld16((c.r[1].w[0] + 11254u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313B58u); set32(c.r[4], 0u + 17u);  if (depth < kMaxDepth) unit_008C(c, 124u, depth + 1u); else { c.pc = 0x00332100u; return; } if (c.pc != 0x00313B58u) [[unlikely]] return; }
L_00313B58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00313E60; } }
L_00313B60:
    c.r[2].d[0] = ld16((c.r[28].w[0] - 22924u));
    c.r[3].d[0] = ld16((c.r[28].w[0] - 22896u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[28].w[0] - 22924u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[28].w[0] - 22924u));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_00313BB0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 11230u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313B8Cu); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_008C(c, 148u, depth + 1u); else { c.pc = 0x003327A0u; return; } if (c.pc != 0x00313B8Cu) [[unlikely]] return; }
L_00313B8C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], 0u + 9u);  if (t) { goto L_00313BA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313B9Cu);  if (depth < kMaxDepth) unit_0084(c, 330u, depth + 1u); else { c.pc = 0x00312530u; return; } if (c.pc != 0x00313B9Cu) [[unlikely]] return; }
L_00313B9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00313E60; } }
    c.budget -= 1;
L_00313BA8:
    st16((c.r[28].w[0] - 22924u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_00313BB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313BB8u);  if (depth < kMaxDepth) unit_0084(c, 316u, depth + 1u); else { c.pc = 0x00312250u; return; } if (c.pc != 0x00313BB8u) [[unlikely]] return; }
L_00313BB8:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00313C58; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[5], c.r[5].w[0] + 10192u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313BD8u); set32(c.r[6], 0u + 1024u);  if (depth < kMaxDepth) unit_008C(c, 168u, depth + 1u); else { c.pc = 0x00332B20u; return; } if (c.pc != 0x00313BD8u) [[unlikely]] return; }
L_00313BD8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], 0u + 9u);  if (t) { goto L_00313BF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313BE8u);  if (depth < kMaxDepth) unit_0084(c, 330u, depth + 1u); else { c.pc = 0x00312530u; return; } if (c.pc != 0x00313BE8u) [[unlikely]] return; }
L_00313BE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00313E60; } }
L_00313BF0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313BFCu); set32(c.r[4], c.r[4].w[0] + 10192u);  if (depth < kMaxDepth) unit_0084(c, 320u, depth + 1u); else { c.pc = 0x003122C0u; return; } if (c.pc != 0x00313BFCu) [[unlikely]] return; }
L_00313BFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00313C58; } }
    c.budget -= 1;
L_00313C08:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 11230u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313C18u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_008C(c, 183u, depth + 1u); else { c.pc = 0x00332E30u; return; } if (c.pc != 0x00313C18u) [[unlikely]] return; }
L_00313C18:
    c.r[4].d[0] = c.r[2].d[0] & 240ull;
    set32(c.r[3], 0u + 32u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 112u);  if (t) { goto L_00313C38; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00313C38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00313C58; } }
L_00313C38:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[2], c.r[2].w[0] + 11216u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[2].w[0] + 28u), static_cast<std::uint16_t>(0u));
    st16((c.r[1].w[0] + 11252u), static_cast<std::uint16_t>(0u));
    c.budget -= 8;
L_00313C58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313C60u);  if (depth < kMaxDepth) unit_0084(c, 324u, depth + 1u); else { c.pc = 0x003123C0u; return; } if (c.pc != 0x00313C60u) [[unlikely]] return; }
L_00313C60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00313C08u | kUnwind; return; } goto L_00313C08; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313C74u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 11230u)));  if (depth < kMaxDepth) unit_0084(c, 335u, depth + 1u); else { c.pc = 0x00312810u; return; } if (c.pc != 0x00313C74u) [[unlikely]] return; }
L_00313C74:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_00313C90; } }
    st32((c.r[28].w[0] - 22800u), c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 11254u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00313E60; } }
    c.budget -= 1;
L_00313C90:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 9u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00313CD0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00313CB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00313E60; } }
    c.budget -= 1;
L_00313CB0:
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] + 7808u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313CCCu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00313CCCu) [[unlikely]] return; }
L_00313CCC:
    c.budget -= 1;
L_00313CD0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[9].d[0] = ld16((c.r[1].w[0] + 11224u));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 6;
L_00313CE8:
    set32(c.r[3], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    c.r[3].d[0] = c.r[9].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[6].w[0] + 1u);  if (t) { goto L_00313D00; } }
    c.r[6].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 2;
L_00313D00:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00313CE8u | kUnwind; return; } goto L_00313CE8; } }
    c.r[4].d[0] = c.r[6].d[0] & 65535ull;
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], 0u + 9u);  if (t) { goto L_00313D40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313D28u);  if (depth < kMaxDepth) unit_0084(c, 330u, depth + 1u); else { c.pc = 0x00312530u; return; } if (c.pc != 0x00313D28u) [[unlikely]] return; }
L_00313D28:
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313D34u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008C(c, 124u, depth + 1u); else { c.pc = 0x00332100u; return; } if (c.pc != 0x00313D34u) [[unlikely]] return; }
L_00313D34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00313E60; } }
    c.budget -= 1;
L_00313D40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 11230u)));
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[7].d[0] = ld16((c.r[28].w[0] - 22880u));
    set32(c.r[16], 0u - 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[12], c.r[12].w[0] + 11216u);
    set32(c.r[11], c.r[11].w[0] + 7808u);
    c.budget -= 9;
L_00313D64:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[8].d[0] = ld16((c.r[1].w[0] + 11252u));
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
L_00313D70:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == c.r[6].d[0]; set32(c.r[3], c.r[5].w[0] << (c.r[6].w[0] & 31u));  if (t) { goto L_00313DB0; } }
    c.r[3].d[0] = c.r[9].d[0] & c.r[3].d[0];
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00313DB0; } }
    c.r[3].d[0] = ld16((c.r[11].w[0]));
    c.r[4].d[0] = ld16((c.r[12].w[0] + 28u));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] - c.r[8].w[0]);  if (t) { goto L_00313DB0; } }
    c.r[1].d[0] = c.r[7].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00313DB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00313DC8; } }
    c.budget -= 1;
L_00313DB0:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[12], c.r[12].w[0] + 2u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[11], c.r[11].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00313D70u | kUnwind; return; } goto L_00313D70; } }
    c.budget -= 1;
L_00313DC8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] << 56;  if (t) { goto L_00313E60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313DDCu); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);  if (depth < kMaxDepth) unit_0081(c, 193u, depth + 1u); else { c.pc = 0x00306A70u; return; } if (c.pc != 0x00313DDCu) [[unlikely]] return; }
L_00313DDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313DE4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 190u, depth + 1u); else { c.pc = 0x003333E0u; return; } if (c.pc != 0x00313DE4u) [[unlikely]] return; }
L_00313DE4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 6u)));
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[2], 0u + 6u);  if (t) { goto L_00313E40; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 5u);  if (t) { goto L_00313E30; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_00313E30; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00313E20; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00313E20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00313E50; } }
L_00313E20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313E28u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0084(c, 330u, depth + 1u); else { c.pc = 0x00312530u; return; } if (c.pc != 0x00313E28u) [[unlikely]] return; }
L_00313E28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00313E58; } }
L_00313E30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313E38u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_0084(c, 330u, depth + 1u); else { c.pc = 0x00312530u; return; } if (c.pc != 0x00313E38u) [[unlikely]] return; }
L_00313E38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00313E58; } }
L_00313E40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313E48u);  if (depth < kMaxDepth) unit_0084(c, 330u, depth + 1u); else { c.pc = 0x00312530u; return; } if (c.pc != 0x00313E48u) [[unlikely]] return; }
L_00313E48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00313E58; } }
L_00313E50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313E58u);  if (depth < kMaxDepth) unit_0084(c, 330u, depth + 1u); else { c.pc = 0x00312530u; return; } if (c.pc != 0x00313E58u) [[unlikely]] return; }
L_00313E58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00313E60; } }
L_00313E60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00313E80:
    c.r[13].d[0] = 0ull + 0ull;
    c.r[12].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[6].sd[0] <= 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00313F80; } }
    set32(c.r[9], 0u + 43u);
    set32(c.r[8], 0u + 47u);
    set32(c.r[10], 0u + 61u);
    c.budget -= 4;
L_00313EA0:
    c.r[11].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = c.r[11].d[0] == c.r[10].d[0]; c.r[3].d[0] = c.r[11].d[0] < static_cast<std::uint64_t>(65ll) ? 1ull : 0ull;  if (t) { goto L_00313F40; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[11].d[0] < static_cast<std::uint64_t>(91ll) ? 1ull : 0ull;  if (t) { goto L_00313EC8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00313EC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[11], c.r[11].w[0] - 65u);  if (t) { goto L_00313F30; } }
    c.budget -= 1;
L_00313EC8:
    c.r[3].d[0] = c.r[11].d[0] < static_cast<std::uint64_t>(97ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[11].d[0] < static_cast<std::uint64_t>(123ll) ? 1ull : 0ull;  if (t) { goto L_00313EE8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00313EE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[11], c.r[11].w[0] - 71u);  if (t) { goto L_00313F30; } }
    c.budget -= 1;
L_00313EE8:
    c.r[3].d[0] = c.r[11].d[0] < static_cast<std::uint64_t>(48ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[11].d[0] < static_cast<std::uint64_t>(58ll) ? 1ull : 0ull;  if (t) { goto L_00313F08; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00313F08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[11], c.r[11].w[0] + 4u);  if (t) { goto L_00313F30; } }
    c.budget -= 1;
L_00313F08:
    c.budget -= 2;
    { const bool t = c.r[11].d[0] != c.r[9].d[0];  if (t) { goto L_00313F18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[11], 0u + 62u);  if (t) { goto L_00313F30; } }
L_00313F18:
    c.budget -= 2;
    { const bool t = c.r[11].d[0] != c.r[8].d[0];  if (t) { goto L_00313F28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[11], 0u + 63u);  if (t) { goto L_00313F30; } }
L_00313F28:
    set32(c.r[11], 0u - 1u);
    c.budget -= 2;
L_00313F30:
    set32(c.r[3], c.r[13].w[0] << 6);
    c.r[13].d[0] = c.r[3].d[0] | c.r[11].d[0];
    set32(c.r[12], c.r[12].w[0] + 6u);
    c.budget -= 4;
L_00313F40:
    c.r[3].d[0] = c.r[12].sd[0] < 8ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] - 1u);  if (t) { goto L_00313F78; } }
    set32(c.r[3], c.r[12].w[0] - 8u);
    set32(c.r[7], c.r[7].w[0] - 1u);
    set32(c.r[3], c.r[13].w[0] >> (c.r[3].w[0] & 31u));
    set32(c.r[12], c.r[12].w[0] - 8u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { const bool t = c.r[7].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_00313F78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00313F80; } }
L_00313F78:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00313EA0u | kUnwind; return; } goto L_00313EA0; } }
L_00313F80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00313F90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[28].w[0] - 23020u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313FB4u); st8((c.r[28].w[0] - 23032u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008D(c, 19u, depth + 1u); else { c.pc = 0x003341C0u; return; } if (c.pc != 0x00313FB4u) [[unlikely]] return; }
L_00313FB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313FBCu); set32(c.r[4], 0u + 81u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x003788A0u; return; } if (c.pc != 0x00313FBCu) [[unlikely]] return; }
L_00313FBC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00313FD0:
    set32(c.r[3], 0u + 24u);
    st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23020u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[28].w[0] - 23032u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00313FF0:
    set32(c.r[3], 0u + 24u);
    st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23020u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    [[clang::musttail]] return unit_0085(c, 1u, depth);
}

}
