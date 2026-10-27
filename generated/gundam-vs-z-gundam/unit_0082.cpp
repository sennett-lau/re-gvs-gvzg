#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0082[4096] = {
    1, 0, 2, 0, 0, 0, 3, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0,
    8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 11, 0, 12, 0, 13, 0, 14,
    0, 15, 0, 16, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 0,
    0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36,
    0, 37, 0, 38, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41,
    0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0,
    0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 51, 0, 52, 0, 0, 0, 0, 53, 0, 0, 54,
    0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 58, 0, 59, 0, 0, 60, 0, 0,
    61, 0, 62, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 66, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0,
    0, 0, 0, 76, 0, 0, 77, 0, 78, 0, 79, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0,
    0, 83, 0, 84, 0, 0, 85, 0, 0, 86, 0, 0, 87, 0, 0, 88, 0, 0, 89, 0, 0, 90, 0, 0, 91, 0, 92, 0, 93, 0, 94, 0,
    95, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0,
    0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107,
    0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112,
    0, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 130,
    0, 0, 0, 0, 131, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0,
    0, 137, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 141, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0,
    145, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 149, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0,
    0, 0, 0, 153, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 159,
    0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0,
    0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 172, 0,
    173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0,
    181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 184, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0,
    0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0,
    0, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 207, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0,
    0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 215, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219,
    0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 223, 0, 0, 0, 0, 0,
    0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0,
    0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0,
    0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 0, 246, 0, 0,
    0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 254, 0, 0, 0, 255, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 262, 0, 263,
    0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 266, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0,
    270, 0, 271, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0,
    277, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 305, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0,
    0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317,
    0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 325,
    0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 335, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 338, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 342, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0,
    0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0,
    0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 356, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    365, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 369, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 370, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 373, 0, 0, 0, 0, 0, 374, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    381, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 385, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 387, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 395, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0,
    398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    404, 0, 0, 0, 405, 0, 0, 0, 406, 0, 0, 0, 0, 0, 407, 0, 0, 0, 408, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 410, 0, 411, 0, 0, 0, 412, 0, 0, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 0, 415, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0,
    0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0,
};

void unit_0082(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00308000;
    case 2u: goto L_00308008;
    case 3u: goto L_00308018;
    case 4u: goto L_00308020;
    case 5u: goto L_00308030;
    case 6u: goto L_0030804C;
    case 7u: goto L_00308068;
    case 8u: goto L_00308080;
    case 9u: goto L_003080A8;
    case 10u: goto L_003080DC;
    case 11u: goto L_003080E4;
    case 12u: goto L_003080EC;
    case 13u: goto L_003080F4;
    case 14u: goto L_003080FC;
    case 15u: goto L_00308104;
    case 16u: goto L_0030810C;
    case 17u: goto L_00308110;
    case 18u: goto L_00308130;
    case 19u: goto L_00308140;
    case 20u: goto L_00308158;
    case 21u: goto L_00308174;
    case 22u: goto L_003081A0;
    case 23u: goto L_003081D8;
    case 24u: goto L_003081F4;
    case 25u: goto L_00308208;
    case 26u: goto L_00308218;
    case 27u: goto L_00308250;
    case 28u: goto L_00308290;
    case 29u: goto L_003082B0;
    case 30u: goto L_003082D0;
    case 31u: goto L_003082E0;
    case 32u: goto L_003082F0;
    case 33u: goto L_00308320;
    case 34u: goto L_00308330;
    case 35u: goto L_00308344;
    case 36u: goto L_0030837C;
    case 37u: goto L_00308384;
    case 38u: goto L_0030838C;
    case 39u: goto L_00308394;
    case 40u: goto L_003083B0;
    case 41u: goto L_003083FC;
    case 42u: goto L_00308410;
    case 43u: goto L_00308420;
    case 44u: goto L_00308444;
    case 45u: goto L_00308454;
    case 46u: goto L_00308468;
    case 47u: goto L_00308484;
    case 48u: goto L_0030848C;
    case 49u: goto L_003084C4;
    case 50u: goto L_003084CC;
    case 51u: goto L_003084D4;
    case 52u: goto L_003084DC;
    case 53u: goto L_003084F0;
    case 54u: goto L_003084FC;
    case 55u: goto L_00308510;
    case 56u: goto L_00308548;
    case 57u: goto L_00308558;
    case 58u: goto L_00308560;
    case 59u: goto L_00308568;
    case 60u: goto L_00308574;
    case 61u: goto L_00308580;
    case 62u: goto L_00308588;
    case 63u: goto L_00308590;
    case 64u: goto L_003085B0;
    case 65u: goto L_003085E8;
    case 66u: goto L_00308610;
    case 67u: goto L_00308618;
    case 68u: goto L_00308628;
    case 69u: goto L_00308650;
    case 70u: goto L_00308658;
    case 71u: goto L_00308668;
    case 72u: goto L_00308690;
    case 73u: goto L_003086C8;
    case 74u: goto L_003086E0;
    case 75u: goto L_003086F4;
    case 76u: goto L_0030870C;
    case 77u: goto L_00308718;
    case 78u: goto L_00308720;
    case 79u: goto L_00308728;
    case 80u: goto L_00308730;
    case 81u: goto L_00308740;
    case 82u: goto L_00308778;
    case 83u: goto L_00308784;
    case 84u: goto L_0030878C;
    case 85u: goto L_00308798;
    case 86u: goto L_003087A4;
    case 87u: goto L_003087B0;
    case 88u: goto L_003087BC;
    case 89u: goto L_003087C8;
    case 90u: goto L_003087D4;
    case 91u: goto L_003087E0;
    case 92u: goto L_003087E8;
    case 93u: goto L_003087F0;
    case 94u: goto L_003087F8;
    case 95u: goto L_00308800;
    case 96u: goto L_00308808;
    case 97u: goto L_00308820;
    case 98u: goto L_003088D4;
    case 99u: goto L_003088F0;
    case 100u: goto L_00308918;
    case 101u: goto L_00308980;
    case 102u: goto L_003089D0;
    case 103u: goto L_003089F0;
    case 104u: goto L_00308A10;
    case 105u: goto L_00308B18;
    case 106u: goto L_00308BE0;
    case 107u: goto L_00308BFC;
    case 108u: goto L_00308C20;
    case 109u: goto L_00308C40;
    case 110u: goto L_00308C48;
    case 111u: goto L_00308C54;
    case 112u: goto L_00308C7C;
    case 113u: goto L_00308C90;
    case 114u: goto L_00308C9C;
    case 115u: goto L_00308CB4;
    case 116u: goto L_00308CD0;
    case 117u: goto L_00308D50;
    case 118u: goto L_00308DA0;
    case 119u: goto L_00308DD4;
    case 120u: goto L_00308E14;
    case 121u: goto L_00308E40;
    case 122u: goto L_00308E78;
    case 123u: goto L_00308EAC;
    case 124u: goto L_00308EDC;
    case 125u: goto L_00308F2C;
    case 126u: goto L_00308F3C;
    case 127u: goto L_00308F64;
    case 128u: goto L_00308F90;
    case 129u: goto L_00308FE0;
    case 130u: goto L_00308FFC;
    case 131u: goto L_00309010;
    case 132u: goto L_00309018;
    case 133u: goto L_00309038;
    case 134u: goto L_00309054;
    case 135u: goto L_0030905C;
    case 136u: goto L_00309070;
    case 137u: goto L_00309084;
    case 138u: goto L_0030908C;
    case 139u: goto L_003090A0;
    case 140u: goto L_003090B8;
    case 141u: goto L_003090C0;
    case 142u: goto L_003090C8;
    case 143u: goto L_003090E4;
    case 144u: goto L_003090F8;
    case 145u: goto L_00309100;
    case 146u: goto L_00309108;
    case 147u: goto L_00309124;
    case 148u: goto L_0030913C;
    case 149u: goto L_00309144;
    case 150u: goto L_0030914C;
    case 151u: goto L_0030915C;
    case 152u: goto L_00309178;
    case 153u: goto L_0030918C;
    case 154u: goto L_00309194;
    case 155u: goto L_003091A0;
    case 156u: goto L_003091BC;
    case 157u: goto L_003091E4;
    case 158u: goto L_003091F4;
    case 159u: goto L_003091FC;
    case 160u: goto L_00309220;
    case 161u: goto L_00309280;
    case 162u: goto L_003092D0;
    case 163u: goto L_003092EC;
    case 164u: goto L_0030930C;
    case 165u: goto L_00309360;
    case 166u: goto L_00309388;
    case 167u: goto L_00309394;
    case 168u: goto L_003093B8;
    case 169u: goto L_003093C0;
    case 170u: goto L_003093DC;
    case 171u: goto L_003093F4;
    case 172u: goto L_003093F8;
    case 173u: goto L_00309400;
    case 174u: goto L_00309434;
    case 175u: goto L_00309458;
    case 176u: goto L_00309470;
    case 177u: goto L_003094A0;
    case 178u: goto L_003094C8;
    case 179u: goto L_003094D4;
    case 180u: goto L_003094F8;
    case 181u: goto L_00309500;
    case 182u: goto L_0030951C;
    case 183u: goto L_00309534;
    case 184u: goto L_00309538;
    case 185u: goto L_00309540;
    case 186u: goto L_00309574;
    case 187u: goto L_00309598;
    case 188u: goto L_003095B0;
    case 189u: goto L_003095E0;
    case 190u: goto L_0030964C;
    case 191u: goto L_003096B8;
    case 192u: goto L_003096D4;
    case 193u: goto L_003096F0;
    case 194u: goto L_00309718;
    case 195u: goto L_00309738;
    case 196u: goto L_00309760;
    case 197u: goto L_00309774;
    case 198u: goto L_003097A4;
    case 199u: goto L_003097D0;
    case 200u: goto L_003097EC;
    case 201u: goto L_00309808;
    case 202u: goto L_00309824;
    case 203u: goto L_00309830;
    case 204u: goto L_00309840;
    case 205u: goto L_0030985C;
    case 206u: goto L_00309870;
    case 207u: goto L_00309878;
    case 208u: goto L_003098A0;
    case 209u: goto L_003098C8;
    case 210u: goto L_003098F4;
    case 211u: goto L_00309908;
    case 212u: goto L_00309938;
    case 213u: goto L_0030994C;
    case 214u: goto L_00309968;
    case 215u: goto L_0030999C;
    case 216u: goto L_003099A4;
    case 217u: goto L_003099B8;
    case 218u: goto L_003099CC;
    case 219u: goto L_003099FC;
    case 220u: goto L_00309A10;
    case 221u: goto L_00309A2C;
    case 222u: goto L_00309A60;
    case 223u: goto L_00309A68;
    case 224u: goto L_00309A84;
    case 225u: goto L_00309AA0;
    case 226u: goto L_00309ABC;
    case 227u: goto L_00309AD4;
    case 228u: goto L_00309B00;
    case 229u: goto L_00309B38;
    case 230u: goto L_00309B44;
    case 231u: goto L_00309BD0;
    case 232u: goto L_00309C10;
    case 233u: goto L_00309C28;
    case 234u: goto L_00309C44;
    case 235u: goto L_00309C60;
    case 236u: goto L_00309C78;
    case 237u: goto L_00309C90;
    case 238u: goto L_00309CA0;
    case 239u: goto L_00309CA8;
    case 240u: goto L_00309CD4;
    case 241u: goto L_00309CF8;
    case 242u: goto L_00309D10;
    case 243u: goto L_00309D30;
    case 244u: goto L_00309D4C;
    case 245u: goto L_00309D6C;
    case 246u: goto L_00309D74;
    case 247u: goto L_00309D90;
    case 248u: goto L_00309DA8;
    case 249u: goto L_00309DB0;
    case 250u: goto L_00309DCC;
    case 251u: goto L_00309DF8;
    case 252u: goto L_00309E30;
    case 253u: goto L_00309E54;
    case 254u: goto L_00309E5C;
    case 255u: goto L_00309E6C;
    case 256u: goto L_00309E94;
    case 257u: goto L_00309EA8;
    case 258u: goto L_00309EBC;
    case 259u: goto L_00309EC4;
    case 260u: goto L_00309ED8;
    case 261u: goto L_00309EEC;
    case 262u: goto L_00309EF4;
    case 263u: goto L_00309EFC;
    case 264u: goto L_00309F10;
    case 265u: goto L_00309F28;
    case 266u: goto L_00309F30;
    case 267u: goto L_00309F38;
    case 268u: goto L_00309F54;
    case 269u: goto L_00309F68;
    case 270u: goto L_00309F80;
    case 271u: goto L_00309F88;
    case 272u: goto L_00309FA4;
    case 273u: goto L_00309FBC;
    case 274u: goto L_00309FC4;
    case 275u: goto L_00309FE0;
    case 276u: goto L_00309FF8;
    case 277u: goto L_0030A000;
    case 278u: goto L_0030A01C;
    case 279u: goto L_0030A048;
    case 280u: goto L_0030A060;
    case 281u: goto L_0030A0F0;
    case 282u: goto L_0030A124;
    case 283u: goto L_0030A130;
    case 284u: goto L_0030A150;
    case 285u: goto L_0030A194;
    case 286u: goto L_0030A1D8;
    case 287u: goto L_0030A24C;
    case 288u: goto L_0030A270;
    case 289u: goto L_0030A324;
    case 290u: goto L_0030A334;
    case 291u: goto L_0030A350;
    case 292u: goto L_0030A3A0;
    case 293u: goto L_0030A3B0;
    case 294u: goto L_0030A3C0;
    case 295u: goto L_0030A3D0;
    case 296u: goto L_0030A3E0;
    case 297u: goto L_0030A410;
    case 298u: goto L_0030A454;
    case 299u: goto L_0030A480;
    case 300u: goto L_0030A4B0;
    case 301u: goto L_0030A5C0;
    case 302u: goto L_0030A620;
    case 303u: goto L_0030A648;
    case 304u: goto L_0030A6A4;
    case 305u: goto L_0030A6C0;
    case 306u: goto L_0030A6C8;
    case 307u: goto L_0030A6E0;
    case 308u: goto L_0030A714;
    case 309u: goto L_0030A740;
    case 310u: goto L_0030A760;
    case 311u: goto L_0030A7CC;
    case 312u: goto L_0030A7F0;
    case 313u: goto L_0030A810;
    case 314u: goto L_0030A828;
    case 315u: goto L_0030A848;
    case 316u: goto L_0030A854;
    case 317u: goto L_0030A87C;
    case 318u: goto L_0030A888;
    case 319u: goto L_0030A8B0;
    case 320u: goto L_0030A900;
    case 321u: goto L_0030A934;
    case 322u: goto L_0030A9D4;
    case 323u: goto L_0030AA10;
    case 324u: goto L_0030AA64;
    case 325u: goto L_0030AA7C;
    case 326u: goto L_0030AA88;
    case 327u: goto L_0030AAA8;
    case 328u: goto L_0030AB08;
    case 329u: goto L_0030AB80;
    case 330u: goto L_0030ABDC;
    case 331u: goto L_0030AC10;
    case 332u: goto L_0030AC30;
    case 333u: goto L_0030AC48;
    case 334u: goto L_0030AC6C;
    case 335u: goto L_0030AC78;
    case 336u: goto L_0030ACC0;
    case 337u: goto L_0030ACCC;
    case 338u: goto L_0030AD14;
    case 339u: goto L_0030AD20;
    case 340u: goto L_0030AD38;
    case 341u: goto L_0030AD90;
    case 342u: goto L_0030AE08;
    case 343u: goto L_0030AE1C;
    case 344u: goto L_0030AE48;
    case 345u: goto L_0030AEF8;
    case 346u: goto L_0030AF1C;
    case 347u: goto L_0030AF4C;
    case 348u: goto L_0030AF78;
    case 349u: goto L_0030AF8C;
    case 350u: goto L_0030AFB8;
    case 351u: goto L_0030AFE4;
    case 352u: goto L_0030AFF8;
    case 353u: goto L_0030B034;
    case 354u: goto L_0030B044;
    case 355u: goto L_0030B06C;
    case 356u: goto L_0030B078;
    case 357u: goto L_0030B0B0;
    case 358u: goto L_0030B124;
    case 359u: goto L_0030B134;
    case 360u: goto L_0030B14C;
    case 361u: goto L_0030B2F0;
    case 362u: goto L_0030B31C;
    case 363u: goto L_0030B370;
    case 364u: goto L_0030B3D4;
    case 365u: goto L_0030B400;
    case 366u: goto L_0030B420;
    case 367u: goto L_0030B43C;
    case 368u: goto L_0030B45C;
    case 369u: goto L_0030B468;
    case 370u: goto L_0030B494;
    case 371u: goto L_0030B4A0;
    case 372u: goto L_0030B4D4;
    case 373u: goto L_0030B4E0;
    case 374u: goto L_0030B4F8;
    case 375u: goto L_0030B550;
    case 376u: goto L_0030B57C;
    case 377u: goto L_0030B5C0;
    case 378u: goto L_0030B624;
    case 379u: goto L_0030B648;
    case 380u: goto L_0030B654;
    case 381u: goto L_0030B680;
    case 382u: goto L_0030B698;
    case 383u: goto L_0030B6B8;
    case 384u: goto L_0030B6E4;
    case 385u: goto L_0030B6F0;
    case 386u: goto L_0030B734;
    case 387u: goto L_0030B740;
    case 388u: goto L_0030B758;
    case 389u: goto L_0030B7A0;
    case 390u: goto L_0030B7E0;
    case 391u: goto L_0030B844;
    case 392u: goto L_0030B870;
    case 393u: goto L_0030B89C;
    case 394u: goto L_0030B8E0;
    case 395u: goto L_0030B8F8;
    case 396u: goto L_0030B940;
    case 397u: goto L_0030B960;
    case 398u: goto L_0030B980;
    case 399u: goto L_0030B9B4;
    case 400u: goto L_0030B9D0;
    case 401u: goto L_0030BA00;
    case 402u: goto L_0030BA9C;
    case 403u: goto L_0030BAC0;
    case 404u: goto L_0030BB00;
    case 405u: goto L_0030BB10;
    case 406u: goto L_0030BB20;
    case 407u: goto L_0030BB38;
    case 408u: goto L_0030BB48;
    case 409u: goto L_0030BB50;
    case 410u: goto L_0030BB98;
    case 411u: goto L_0030BBA0;
    case 412u: goto L_0030BBB0;
    case 413u: goto L_0030BBC8;
    case 414u: goto L_0030BBD8;
    case 415u: goto L_0030BBE8;
    case 416u: goto L_0030BD80;
    case 417u: goto L_0030BF10;
    case 418u: goto L_0030BF4C;
    case 419u: goto L_0030BF6C;
    case 420u: goto L_0030BF88;
    case 421u: goto L_0030BFB4;
    case 422u: goto L_0030BFEC;
    default: bad_entry(c, 0x00308000u); return;
    }
L_00308000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308008u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 289u, depth + 1u); else { c.pc = 0x00373310u; return; } if (c.pc != 0x00308008u) [[unlikely]] return; }
L_00308008:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00308068; } }
L_00308018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308020u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009C(c, 289u, depth + 1u); else { c.pc = 0x00373310u; return; } if (c.pc != 0x00308020u) [[unlikely]] return; }
L_00308020:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00308068; } }
L_00308030:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 315u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_00308060; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030804Cu); set32(c.r[16], 0u + 1u);  if (depth < kMaxDepth) unit_009C(c, 289u, depth + 1u); else { c.pc = 0x00373310u; return; } if (c.pc != 0x0030804Cu) [[unlikely]] return; }
L_0030804C:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00308068; } }
    c.budget -= 1;
L_00308060:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308068u);  if (depth < kMaxDepth) unit_0081(c, 346u, depth + 1u); else { c.pc = 0x00307C10u; return; } if (c.pc != 0x00308068u) [[unlikely]] return; }
L_00308068:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00308090; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00308090; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308080u);  if (depth < kMaxDepth) unit_009C(c, 289u, depth + 1u); else { c.pc = 0x00373310u; return; } if (c.pc != 0x00308080u) [[unlikely]] return; }
L_00308080:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 6u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00308090:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 11241u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_003080B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003080A8u);  if (depth < kMaxDepth) unit_009C(c, 289u, depth + 1u); else { c.pc = 0x00373310u; return; } if (c.pc != 0x003080A8u) [[unlikely]] return; }
L_003080A8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 6u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_003080B8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st64((c.r[2].w[0] + 8u), 0ull);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 42u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003080DCu); st8((c.r[2].w[0] + 41u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_004D(c, 130u, depth + 1u); else { c.pc = 0x002362E0u; return; } if (c.pc != 0x003080DCu) [[unlikely]] return; }
L_003080DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003080E4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 25u, depth + 1u); else { c.pc = 0x001246A0u; return; } if (c.pc != 0x003080E4u) [[unlikely]] return; }
L_003080E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003080ECu);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x003080ECu) [[unlikely]] return; }
L_003080EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003080F4u);  if (depth < kMaxDepth) unit_006B(c, 17u, depth + 1u); else { c.pc = 0x002AC350u; return; } if (c.pc != 0x003080F4u) [[unlikely]] return; }
L_003080F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003080FCu);  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x003080FCu) [[unlikely]] return; }
L_003080FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308104u);  if (depth < kMaxDepth) unit_005B(c, 76u, depth + 1u); else { c.pc = 0x0026CAB0u; return; } if (c.pc != 0x00308104u) [[unlikely]] return; }
L_00308104:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030810Cu);  if (depth < kMaxDepth) unit_004E(c, 5u, depth + 1u); else { c.pc = 0x00238040u; return; } if (c.pc != 0x0030810Cu) [[unlikely]] return; }
L_0030810C:
    c.budget -= 1;
L_00308110:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00308130:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308140u);  if (depth < kMaxDepth) unit_009C(c, 290u, depth + 1u); else { c.pc = 0x00373320u; return; } if (c.pc != 0x00308140u) [[unlikely]] return; }
L_00308140:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00308188; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00308160; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308158u);  if (depth < kMaxDepth) unit_0081(c, 346u, depth + 1u); else { c.pc = 0x00307C10u; return; } if (c.pc != 0x00308158u) [[unlikely]] return; }
L_00308158:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00308188; } }
L_00308160:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00308188; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308174u);  if (depth < kMaxDepth) unit_008D(c, 177u, depth + 1u); else { c.pc = 0x003360C0u; return; } if (c.pc != 0x00308174u) [[unlikely]] return; }
L_00308174:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 7u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st32((c.r[3].w[0] + 4u), 0u);
    c.budget -= 5;
L_00308188:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003081A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00308200; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003081D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00308238; } }
    c.budget -= 1;
L_003081D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003081D8u);  if (depth < kMaxDepth) unit_00C2(c, 74u, depth + 1u); else { c.pc = 0x00408EA0u; return; } if (c.pc != 0x003081D8u) [[unlikely]] return; }
L_003081D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00308238; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003081F4u); st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009C(c, 301u, depth + 1u); else { c.pc = 0x003733E0u; return; } if (c.pc != 0x003081F4u) [[unlikely]] return; }
L_003081F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00308238; } }
    c.budget -= 1;
L_00308200:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308208u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x00308208u) [[unlikely]] return; }
L_00308208:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00308238; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308218u);  if (depth < kMaxDepth) unit_009C(c, 316u, depth + 1u); else { c.pc = 0x003734E0u; return; } if (c.pc != 0x00308218u) [[unlikely]] return; }
L_00308218:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 8u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st32((c.r[3].w[0] + 4u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st64((c.r[3].w[0] + 8u), 0ull);
    c.budget -= 8;
L_00308238:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00308250:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003082D8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003082A8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00308288; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00308320; } }
    c.budget -= 1;
L_00308288:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308290u);  if (depth < kMaxDepth) unit_00A0(c, 368u, depth + 1u); else { c.pc = 0x00383610u; return; } if (c.pc != 0x00308290u) [[unlikely]] return; }
L_00308290:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00308320; } }
    c.budget -= 1;
L_003082A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003082B0u);  if (depth < kMaxDepth) unit_00A0(c, 369u, depth + 1u); else { c.pc = 0x00383640u; return; } if (c.pc != 0x003082B0u) [[unlikely]] return; }
L_003082B0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00308320; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003082D0u); st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009C(c, 291u, depth + 1u); else { c.pc = 0x00373350u; return; } if (c.pc != 0x003082D0u) [[unlikely]] return; }
L_003082D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00308320; } }
L_003082D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003082E0u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x003082E0u) [[unlikely]] return; }
L_003082E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00308320; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003082F0u);  if (depth < kMaxDepth) unit_009C(c, 312u, depth + 1u); else { c.pc = 0x00373490u; return; } if (c.pc != 0x003082F0u) [[unlikely]] return; }
L_003082F0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 9u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 15536u);
    set32(c.r[6], 0u + 56u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308320u); st64((c.r[2].w[0] + 8u), 0ull);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00308320u) [[unlikely]] return; }
L_00308320:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00308330:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308344u); set32(c.r[4], c.r[4].w[0] + 15536u);  if (depth < kMaxDepth) unit_00A9(c, 226u, depth + 1u); else { c.pc = 0x003A6A30u; return; } if (c.pc != 0x00308344u) [[unlikely]] return; }
L_00308344:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00308398; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030837Cu); st64((c.r[2].w[0] + 8u), 0ull);  if (depth < kMaxDepth) unit_0009(c, 25u, depth + 1u); else { c.pc = 0x001246A0u; return; } if (c.pc != 0x0030837Cu) [[unlikely]] return; }
L_0030837C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308384u);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x00308384u) [[unlikely]] return; }
L_00308384:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030838Cu);  if (depth < kMaxDepth) unit_006B(c, 17u, depth + 1u); else { c.pc = 0x002AC350u; return; } if (c.pc != 0x0030838Cu) [[unlikely]] return; }
L_0030838C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308394u);  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x00308394u) [[unlikely]] return; }
L_00308394:
    c.budget -= 1;
L_00308398:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003083B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], c.r[4].w[0] + 4u);  if (t) { goto L_00308498; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00308460; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00308408; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003083F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003084E8; } }
L_003083F0:
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003083FCu); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0082(c, 55u, depth + 1u); else { c.pc = 0x00308510u; return; } if (c.pc != 0x003083FCu) [[unlikely]] return; }
L_003083FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003084E8; } }
    c.budget -= 1;
L_00308408:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308410u);  if (depth < kMaxDepth) unit_0082(c, 64u, depth + 1u); else { c.pc = 0x003085B0u; return; } if (c.pc != 0x00308410u) [[unlikely]] return; }
L_00308410:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003084E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308420u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x00308420u) [[unlikely]] return; }
L_00308420:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003084E8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 8u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308444u); st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x00308444u) [[unlikely]] return; }
L_00308444:
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 120u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308454u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x00308454u) [[unlikely]] return; }
L_00308454:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003084E8; } }
    c.budget -= 1;
L_00308460:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308468u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x00308468u) [[unlikely]] return; }
L_00308468:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003084E8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308484u); st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006B(c, 17u, depth + 1u); else { c.pc = 0x002AC350u; return; } if (c.pc != 0x00308484u) [[unlikely]] return; }
L_00308484:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030848Cu);  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x0030848Cu) [[unlikely]] return; }
L_0030848C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003084E8; } }
    c.budget -= 1;
L_00308498:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st64((c.r[2].w[0] + 8u), 0ull);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003084C4u); st8((c.r[2].w[0] + 50u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_004D(c, 130u, depth + 1u); else { c.pc = 0x002362E0u; return; } if (c.pc != 0x003084C4u) [[unlikely]] return; }
L_003084C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003084CCu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 25u, depth + 1u); else { c.pc = 0x001246A0u; return; } if (c.pc != 0x003084CCu) [[unlikely]] return; }
L_003084CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003084D4u);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x003084D4u) [[unlikely]] return; }
L_003084D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003084DCu);  if (depth < kMaxDepth) unit_004E(c, 5u, depth + 1u); else { c.pc = 0x00238040u; return; } if (c.pc != 0x003084DCu) [[unlikely]] return; }
L_003084DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00308500; } }
    c.budget -= 1;
L_003084E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003084F0u);  if (depth < kMaxDepth) unit_0082(c, 81u, depth + 1u); else { c.pc = 0x00308740u; return; } if (c.pc != 0x003084F0u) [[unlikely]] return; }
L_003084F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00310000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003084FCu); set32(c.r[4], c.r[4].w[0] - 31088u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x003084FCu) [[unlikely]] return; }
L_003084FC:
    c.budget -= 1;
L_00308500:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00308510:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 8u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_00308590; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 19104u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00308000u < 16384u) { entry = entries_0082[(t - 0x00308000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00308548:
    set32(c.r[3], 0u + 175u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[5].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00308598; } }
    c.budget -= 1;
L_00308558:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308560u);  if (depth < kMaxDepth) unit_006E(c, 339u, depth + 1u); else { c.pc = 0x002BB810u; return; } if (c.pc != 0x00308560u) [[unlikely]] return; }
L_00308560:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00308598; } }
L_00308568:
    set32(c.r[2], 0u + 59u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308574u); st16((c.r[5].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0044(c, 403u, depth + 1u); else { c.pc = 0x002138D0u; return; } if (c.pc != 0x00308574u) [[unlikely]] return; }
L_00308574:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00308598; } }
    c.budget -= 1;
L_00308580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308588u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_009D(c, 71u, depth + 1u); else { c.pc = 0x003749B0u; return; } if (c.pc != 0x00308588u) [[unlikely]] return; }
L_00308588:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00308598; } }
L_00308590:
    st16((c.r[5].w[0] + 12u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_00308598:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003085B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 8u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_00308668; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 19072u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00308000u < 16384u) { entry = entries_0082[(t - 0x00308000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003085E8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[4].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00308670; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00308678; } }
    c.budget -= 1;
L_00308610:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308618u);  if (depth < kMaxDepth) unit_006E(c, 341u, depth + 1u); else { c.pc = 0x002BB880u; return; } if (c.pc != 0x00308618u) [[unlikely]] return; }
L_00308618:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00308670; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00308678; } }
L_00308628:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[4].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00308670; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00308678; } }
    c.budget -= 1;
L_00308650:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308658u);  if (depth < kMaxDepth) unit_009D(c, 72u, depth + 1u); else { c.pc = 0x003749E0u; return; } if (c.pc != 0x00308658u) [[unlikely]] return; }
L_00308658:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00308670; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00308678; } }
L_00308668:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00308678; } }
L_00308670:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00308678:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00308690:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 8u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_00308730; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 19040u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00308000u < 16384u) { entry = entries_0082[(t - 0x00308000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003086C8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00308730; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003086E0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x003086E0u) [[unlikely]] return; }
L_003086E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 9u);
    set32(c.r[4], c.r[4].w[0] + 16640u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003086F4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x003086F4u) [[unlikely]] return; }
L_003086F4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BE0000u);
    set32(c.r[5], 0u + 9u);
    set32(c.r[2], ld32((c.r[1].w[0] - 5896u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030870Cu); set32(c.r[4], c.r[2].w[0] + 4320u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0030870Cu) [[unlikely]] return; }
L_0030870C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00308730; } }
    c.budget -= 1;
L_00308718:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308720u);  if (depth < kMaxDepth) unit_004D(c, 281u, depth + 1u); else { c.pc = 0x00237AF0u; return; } if (c.pc != 0x00308720u) [[unlikely]] return; }
L_00308720:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00308730; } }
L_00308728:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308730u);  if (depth < kMaxDepth) unit_006E(c, 342u, depth + 1u); else { c.pc = 0x002BB980u; return; } if (c.pc != 0x00308730u) [[unlikely]] return; }
L_00308730:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00308740:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_00308808; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 19008u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00308000u < 16384u) { entry = entries_0082[(t - 0x00308000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00308778:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308784u); set32(c.r[4], c.r[4].w[0] - 9792u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x00308784u) [[unlikely]] return; }
L_00308784:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030878Cu);  if (depth < kMaxDepth) unit_004F(c, 70u, depth + 1u); else { c.pc = 0x0023D240u; return; } if (c.pc != 0x0030878Cu) [[unlikely]] return; }
L_0030878C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308798u); set32(c.r[4], c.r[4].w[0] - 15136u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x00308798u) [[unlikely]] return; }
L_00308798:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003087A4u); set32(c.r[4], c.r[4].w[0] - 15024u);  if (depth < kMaxDepth) unit_0043(c, 416u, depth + 1u); else { c.pc = 0x0020FEF0u; return; } if (c.pc != 0x003087A4u) [[unlikely]] return; }
L_003087A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003087B0u); set32(c.r[4], c.r[4].w[0] - 14928u);  if (depth < kMaxDepth) unit_0043(c, 416u, depth + 1u); else { c.pc = 0x0020FEF0u; return; } if (c.pc != 0x003087B0u) [[unlikely]] return; }
L_003087B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003087BCu); set32(c.r[4], c.r[4].w[0] - 14912u);  if (depth < kMaxDepth) unit_0043(c, 416u, depth + 1u); else { c.pc = 0x0020FEF0u; return; } if (c.pc != 0x003087BCu) [[unlikely]] return; }
L_003087BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003087C8u); set32(c.r[4], c.r[4].w[0] - 928u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x003087C8u) [[unlikely]] return; }
L_003087C8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003087D4u); set32(c.r[4], c.r[4].w[0] - 912u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x003087D4u) [[unlikely]] return; }
L_003087D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00308808; } }
    c.budget -= 1;
L_003087E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003087E8u);  if (depth < kMaxDepth) unit_004D(c, 287u, depth + 1u); else { c.pc = 0x00237B60u; return; } if (c.pc != 0x003087E8u) [[unlikely]] return; }
L_003087E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00308808; } }
L_003087F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003087F8u);  if (depth < kMaxDepth) unit_006E(c, 352u, depth + 1u); else { c.pc = 0x002BBA40u; return; } if (c.pc != 0x003087F8u) [[unlikely]] return; }
L_003087F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00308808; } }
L_00308800:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308808u);  if (depth < kMaxDepth) unit_009D(c, 86u, depth + 1u); else { c.pc = 0x00374C50u; return; } if (c.pc != 0x00308808u) [[unlikely]] return; }
L_00308808:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00308820:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[12], ld32((c.r[1].w[0] - 7728u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[9], c.r[9].w[0] + 10224u);
    set32(c.r[8], c.r[8].w[0] + 10225u);
    set32(c.r[5], c.r[5].w[0] + 10228u);
    set32(c.r[4], c.r[4].w[0] + 10232u);
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[7], c.r[7].w[0] + 10226u);
    set32(c.r[10], ld32((c.r[1].w[0] + 4768u)));
    set32(c.r[3], c.r[3].w[0] + 10236u);
    set32(c.r[2], c.r[2].w[0] + 10240u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[10], c.r[12].w[0] - c.r[10].w[0]);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 10304u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st32((c.r[1].w[0] + 4772u), c.r[10].w[0]);
    set32(c.r[10], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[10], c.r[10].w[0] << 2);
    set32(c.r[13], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[10].w[0]);
    set32(c.r[9], ld32((c.r[4].w[0])));
    set32(c.r[12], c.r[8].w[0] + c.r[10].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[10].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[10].w[0]);
    c.r[8].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[10].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[10].w[0]);
    c.r[7].d[0] = ld16((c.r[7].w[0]));
    set32(c.r[10], ld32((c.r[3].w[0])));
    set32(c.r[11], ld32((c.r[2].w[0])));
    c.r[4].d[0] = ld8((c.r[13].w[0]));
    c.r[5].d[0] = ld8((c.r[12].w[0]));
    c.budget -= 45;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003088D4u); c.r[6].d[0] = ld8((c.r[6].w[0] + 315u));  if (depth < kMaxDepth) unit_008D(c, 172u, depth + 1u); else { c.pc = 0x00335F00u; return; } if (c.pc != 0x003088D4u) [[unlikely]] return; }
L_003088D4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003088F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308918u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x00308918u) [[unlikely]] return; }
L_00308918:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00308950; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00310000u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[3], c.r[3].w[0] - 30256u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 12;
L_00308950:
    st32((c.r[2].w[0] + 304u), c.r[16].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[8], c.r[2].w[0] + 304u);
    set32(c.r[3], c.r[3].w[0] + 18179u);
    set32(c.r[6], c.r[8].w[0] + 4u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], c.r[7].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[7], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 12;
L_00308980:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1u)));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[7], c.r[7].w[0] + 2u);
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00308980u | kUnwind; return; } goto L_00308980; } }
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    st32((c.r[8].w[0] + 12u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    st32((c.r[8].w[0] + 128u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003089D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 16456u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00308000u < 16384u) { entry = entries_0082[(t - 0x00308000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003089F0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00310000u);
    set32(c.r[3], c.r[3].w[0] - 29728u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 168u), c.r[3].w[0]);  c.pc = t; return; }
L_00308A10:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 320u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] + 304u);  if (t) { goto L_00308BB8; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[7], 0u + 3u);  if (t) { goto L_00308AC8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[7].d[0]; set32(c.r[5], 0u + 2u);  if (t) { goto L_00308AC8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_00308A90; } }
    set32(c.r[7], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[7].d[0];  if (t) { goto L_00308AC8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00308A58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00308AC8; } }
L_00308A58:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.f[2] = ld32((c.r[3].w[0] + 12u));
    c.r[6].d[0] = c.r[6].d[0] | 52429ull;
    c.f[1] = c.r[6].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[5].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[3].w[0] + 12u), c.f[1]);  if (t) { goto L_00308AC8; } }
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { goto L_00308AC8; } }
L_00308A90:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.f[2] = ld32((c.r[3].w[0] + 12u));
    c.r[6].d[0] = c.r[6].d[0] | 52429ull;
    c.f[1] = c.r[6].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[5].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[3].w[0] + 12u), c.f[1]);  if (t) { goto L_00308AC8; } }
    st32((c.r[3].w[0] + 12u), c.f[0]);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 3;
L_00308AC8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[1].d[0] = c.r[5].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00308B38; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[6], c.r[6].w[0] + 18180u);
    set32(c.r[5], 0u - 1u);
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 11;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x00BA0000u);  if (t) { goto L_00308B38; } }
    set32(c.r[8], c.r[3].w[0] + 4u);
    set32(c.r[5], c.r[5].w[0] + 18179u);
    set32(c.r[9], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[7], 0u + 3u);
    c.budget -= 5;
L_00308B18:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    set32(c.r[7], c.r[7].w[0] - 1u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 1u)));
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[9], c.r[9].w[0] + 2u);
    st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 8;
    { const bool t = c.r[7].sd[0] > 0; set32(c.r[8], c.r[8].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00308B18u | kUnwind; return; } goto L_00308B18; } }
L_00308B38:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00308B80; } }
    c.f[2] = ld32((c.r[3].w[0] + 128u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3D3F0000u);
    c.r[6].d[0] = c.r[5].d[0] | 9612ull;
    c.f[1] = c.r[6].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[5].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[3].w[0] + 128u), c.f[1]);  if (t) { goto L_00308BB8; } }
    st32((c.r[3].w[0] + 128u), c.f[0]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 132u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00308BB8; } }
L_00308B80:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3D3F0000u);
    c.f[2] = ld32((c.r[3].w[0] + 128u));
    c.r[6].d[0] = c.r[6].d[0] | 9612ull;
    c.f[1] = c.r[6].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[5].d[0] = c.r[5].d[0] | 39322ull;
    c.f[0] = c.r[5].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[3].w[0] + 128u), c.f[1]);  if (t) { goto L_00308BB8; } }
    st32((c.r[3].w[0] + 128u), c.f[0]);
    st8((c.r[3].w[0] + 132u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00308BB8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 16u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00308BD0; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00308BD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00308BE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308BFCu); set32(c.r[16], c.r[17].w[0] + 304u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00308BFCu) [[unlikely]] return; }
L_00308BFC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 9u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00308CA8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00308C88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308C20u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x00308C20u) [[unlikely]] return; }
L_00308C20:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 101u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 16448u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00308C40u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00308C40u) [[unlikely]] return; }
L_00308C40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308C48u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x00308C48u) [[unlikely]] return; }
L_00308C48:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308C54u); set32(c.r[5], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0082(c, 116u, depth + 1u); else { c.pc = 0x00308CD0u; return; } if (c.pc != 0x00308C54u) [[unlikely]] return; }
L_00308C54:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_00308CB8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[5], 0u + 6u);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308C7Cu); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_006E(c, 278u, depth + 1u); else { c.pc = 0x002BAF00u; return; } if (c.pc != 0x00308C7Cu) [[unlikely]] return; }
L_00308C7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00308CB8; } }
    c.budget -= 1;
L_00308C88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308C90u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 128u, depth + 1u); else { c.pc = 0x00308F90u; return; } if (c.pc != 0x00308C90u) [[unlikely]] return; }
L_00308C90:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308C9Cu); set32(c.r[5], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0082(c, 116u, depth + 1u); else { c.pc = 0x00308CD0u; return; } if (c.pc != 0x00308C9Cu) [[unlikely]] return; }
L_00308C9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00308CB8; } }
    c.budget -= 1;
L_00308CA8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308CB4u); set32(c.r[5], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0082(c, 116u, depth + 1u); else { c.pc = 0x00308CD0u; return; } if (c.pc != 0x00308CB4u) [[unlikely]] return; }
L_00308CB4:
    c.budget -= 1;
L_00308CB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00308CD0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.f[2] = c.r[2].w[0];
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[1] = ld32((c.r[4].w[0] + 316u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 19;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[17], c.r[19].w[0] + 304u);  if (t) { goto L_00308D2C; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_00308D48; } }
L_00308D2C:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[16].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_00308D48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308D50u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00308D50u) [[unlikely]] return; }
L_00308D50:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 2u)));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0xC2080000u);  if (t) { goto L_00308D70; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42080000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] & 2ull;  if (t) { goto L_00308D78; } }
L_00308D70:
    c.f[12] = c.r[2].w[0];
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 2;
L_00308D78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x42D00000u);  if (t) { goto L_00308D90; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3180000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00308D94; } }
L_00308D90:
    c.f[20] = c.r[2].w[0];
    c.budget -= 1;
L_00308D94:
    c.f[14] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308DA0u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00308DA0u) [[unlikely]] return; }
L_00308DA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00308DE0; } }
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], c.r[3].w[0] << 24);
    c.r[2].d[0] = c.r[2].d[0] | 18174ull;
    c.r[16].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[5], 0u + 10u);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.f[12] = ld32((c.r[17].w[0] + 12u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308DD4u); set32(c.r[4], c.r[2].w[0] + 4080u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00308DD4u) [[unlikely]] return; }
L_00308DD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00308E38; } }
    c.budget -= 1;
L_00308DE0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00308E20; } }
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FE0000u);
    set32(c.r[3], c.r[3].w[0] << 24);
    c.r[2].d[0] = c.r[2].d[0] | 11308ull;
    c.r[16].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[5], 0u + 10u);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.f[12] = ld32((c.r[17].w[0] + 12u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308E14u); set32(c.r[4], c.r[2].w[0] + 4320u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00308E14u) [[unlikely]] return; }
L_00308E14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00308E38; } }
    c.budget -= 1;
L_00308E20:
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00DC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 56540ull;
    c.r[16].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 6;
L_00308E38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308E40u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00308E40u) [[unlikely]] return; }
L_00308E40:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 2u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0xC38C0000u);  if (t) { goto L_00308E64; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x438B0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00308E6C; } }
L_00308E64:
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 2;
L_00308E6C:
    c.f[14] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308E78u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00308E78u) [[unlikely]] return; }
L_00308E78:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00308EE0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00308EB8; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.f[12] = ld32((c.r[17].w[0] + 12u));
    set32(c.r[5], 0u + 10u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308EACu); set32(c.r[4], c.r[2].w[0] + 15840u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00308EACu) [[unlikely]] return; }
L_00308EAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00308EE0; } }
    c.budget -= 1;
L_00308EB8:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.f[12] = ld32((c.r[17].w[0] + 12u));
    set32(c.r[4], c.r[3].w[0] + 81u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[5], 0u + 10u);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308EDCu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00308EDCu) [[unlikely]] return; }
L_00308EDC:
    c.budget -= 1;
L_00308EE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 2u)));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0xC31F0000u);  if (t) { goto L_00308F00; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x431F0000u);
    c.f[21] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] & 2ull;  if (t) { goto L_00308F08; } }
L_00308F00:
    c.f[21] = c.r[2].w[0];
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 2;
L_00308F08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x42D00000u);  if (t) { goto L_00308F20; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3180000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00308F24; } }
L_00308F20:
    c.f[20] = c.r[2].w[0];
    c.budget -= 1;
L_00308F24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308F2Cu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00308F2Cu) [[unlikely]] return; }
L_00308F2C:
    c.f[14] = 0u;
    c.f[12] = c.f[21];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308F3Cu); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00308F3Cu) [[unlikely]] return; }
L_00308F3C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 2u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[5], 0u + 10u);
    set32(c.r[4], c.r[3].w[0] + 9u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308F64u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 22u, depth + 1u); else { c.pc = 0x002D83F0u; return; } if (c.pc != 0x00308F64u) [[unlikely]] return; }
L_00308F64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00308F90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 18112u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[2], 0u + 2u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], c.r[3].w[0] + 67u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 67u)));
    c.budget -= 18;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[17], c.r[18].w[0] + 304u);  if (t) { goto L_00309020; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308FE0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x00308FE0u) [[unlikely]] return; }
L_00308FE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3180000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42D00000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308FFCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0082(c, 280u, depth + 1u); else { c.pc = 0x0030A060u; return; } if (c.pc != 0x00308FFCu) [[unlikely]] return; }
L_00308FFC:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.f[12] = ld32((c.r[17].w[0] + 12u));
    set32(c.r[5], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309010u); set32(c.r[4], c.r[2].w[0] + 6000u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00309010u) [[unlikely]] return; }
L_00309010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309018u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x00309018u) [[unlikely]] return; }
L_00309018:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00309200; } }
L_00309020:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18112u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003090C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309038u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x00309038u) [[unlikely]] return; }
L_00309038:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC34D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B00000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309054u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0082(c, 280u, depth + 1u); else { c.pc = 0x0030A060u; return; } if (c.pc != 0x00309054u) [[unlikely]] return; }
L_00309054:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030905Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0030905Cu) [[unlikely]] return; }
L_0030905C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1600000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309070u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00309070u) [[unlikely]] return; }
L_00309070:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.f[12] = ld32((c.r[17].w[0] + 12u));
    set32(c.r[5], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309084u); set32(c.r[4], c.r[2].w[0] + 14880u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00309084u) [[unlikely]] return; }
L_00309084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030908Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0030908Cu) [[unlikely]] return; }
L_0030908C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003090A0u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x003090A0u) [[unlikely]] return; }
L_003090A0:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.f[12] = ld32((c.r[17].w[0] + 12u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[6], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003090B8u); set32(c.r[4], c.r[2].w[0] + 15120u);  if (depth < kMaxDepth) unit_0082(c, 288u, depth + 1u); else { c.pc = 0x0030A270u; return; } if (c.pc != 0x003090B8u) [[unlikely]] return; }
L_003090B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003090C0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x003090C0u) [[unlikely]] return; }
L_003090C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003090C8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x003090C8u) [[unlikely]] return; }
L_003090C8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2DA0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43020000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003090E4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0082(c, 280u, depth + 1u); else { c.pc = 0x0030A060u; return; } if (c.pc != 0x003090E4u) [[unlikely]] return; }
L_003090E4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.f[12] = ld32((c.r[17].w[0] + 12u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003090F8u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_006E(c, 283u, depth + 1u); else { c.pc = 0x002BAFF0u; return; } if (c.pc != 0x003090F8u) [[unlikely]] return; }
L_003090F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309100u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x00309100u) [[unlikely]] return; }
L_00309100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309108u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x00309108u) [[unlikely]] return; }
L_00309108:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2DA0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42BE0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309124u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0082(c, 280u, depth + 1u); else { c.pc = 0x0030A060u; return; } if (c.pc != 0x00309124u) [[unlikely]] return; }
L_00309124:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.f[12] = ld32((c.r[17].w[0] + 12u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030913Cu); set32(c.r[7], 0u + 6u);  if (depth < kMaxDepth) unit_0082(c, 284u, depth + 1u); else { c.pc = 0x0030A150u; return; } if (c.pc != 0x0030913Cu) [[unlikely]] return; }
L_0030913C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309144u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x00309144u) [[unlikely]] return; }
L_00309144:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030914Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));  if (depth < kMaxDepth) unit_006E(c, 253u, depth + 1u); else { c.pc = 0x002BAA10u; return; } if (c.pc != 0x0030914Cu) [[unlikely]] return; }
L_0030914C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00309198; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030915Cu);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0030915Cu) [[unlikely]] return; }
L_0030915C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC34D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42D00000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309178u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0082(c, 280u, depth + 1u); else { c.pc = 0x0030A060u; return; } if (c.pc != 0x00309178u) [[unlikely]] return; }
L_00309178:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.f[12] = ld32((c.r[17].w[0] + 12u));
    set32(c.r[5], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030918Cu); set32(c.r[4], c.r[2].w[0] + 14160u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0030918Cu) [[unlikely]] return; }
L_0030918C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309194u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x00309194u) [[unlikely]] return; }
L_00309194:
    c.budget -= 1;
L_00309198:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003091A0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x003091A0u) [[unlikely]] return; }
L_003091A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC34D0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42820000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003091BCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0082(c, 280u, depth + 1u); else { c.pc = 0x0030A060u; return; } if (c.pc != 0x003091BCu) [[unlikely]] return; }
L_003091BC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.f[12] = ld32((c.r[17].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[6], 0u + 6u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[16].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[16].d[0] << 48;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003091E4u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_006E(c, 279u, depth + 1u); else { c.pc = 0x002BAF20u; return; } if (c.pc != 0x003091E4u) [[unlikely]] return; }
L_003091E4:
    c.r[4].d[0] = c.r[16].d[0] << 48;
    set32(c.r[5], 0u + 6u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003091F4u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_006E(c, 278u, depth + 1u); else { c.pc = 0x002BAF00u; return; } if (c.pc != 0x003091F4u) [[unlikely]] return; }
L_003091F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003091FCu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x003091FCu) [[unlikely]] return; }
L_003091FC:
    c.budget -= 1;
L_00309200:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00309220:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[1].d[0] = 0ll < c.r[20].sd[0] ? 1ull : 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[19], c.r[21].w[0] + 304u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[18].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    st32((c.r[29].w[0] + 176u), c.r[6].w[0]);
    c.budget -= 23;
    { const bool t = c.r[1].d[0] == 0ull; c.f[21] = c.f[12];  if (t) { goto L_00309320; } }
    c.budget -= 1;
L_00309280:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 104u)));
    set32(c.r[30], ld32((c.r[2].w[0])));
    set32(c.r[17], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 8u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 8u);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; st32((c.r[29].w[0] + 176u), c.r[2].w[0]);  if (t) { goto L_003092C0; } }
    set32(c.r[17], c.r[17].w[0] + c.r[22].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[21];  if (t) { goto L_003092C8; } }
    c.budget -= 1;
L_003092C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 2;
L_003092C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003092D0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x003092D0u) [[unlikely]] return; }
L_003092D0:
    c.f[1] = c.r[30].w[0];
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 2u)));
    c.f[0] = c.r[17].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003092ECu); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0082(c, 280u, depth + 1u); else { c.pc = 0x0030A060u; return; } if (c.pc != 0x003092ECu) [[unlikely]] return; }
L_003092EC:
    set32(c.r[2], c.r[16].w[0] << 4);
    c.r[5].d[0] = c.r[23].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.f[12] = c.f[20];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030930Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0030930Cu) [[unlikely]] return; }
L_0030930C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00309280u | kUnwind; return; } goto L_00309280; } }
    c.budget -= 1;
L_00309320:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00309360:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[17], c.r[18].w[0] + 304u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309388u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_00AC(c, 58u, depth + 1u); else { c.pc = 0x003B07A0u; return; } if (c.pc != 0x00309388u) [[unlikely]] return; }
L_00309388:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309394u); set32(c.r[4], c.r[17].w[0] + 20u);  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x00309394u) [[unlikely]] return; }
L_00309394:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], c.r[6].w[0] - 16416u);
    set32(c.r[8], 0u + 6u);
    set32(c.r[7], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003093B8u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0082(c, 160u, depth + 1u); else { c.pc = 0x00309220u; return; } if (c.pc != 0x003093B8u) [[unlikely]] return; }
L_003093B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003093C0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x003093C0u) [[unlikely]] return; }
L_003093C0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3160000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43080000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003093DCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0082(c, 280u, depth + 1u); else { c.pc = 0x0030A060u; return; } if (c.pc != 0x003093DCu) [[unlikely]] return; }
L_003093DC:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 104u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003093F4u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0082(c, 281u, depth + 1u); else { c.pc = 0x0030A0F0u; return; } if (c.pc != 0x003093F4u) [[unlikely]] return; }
L_003093F4:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003093F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309400u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00309400u) [[unlikely]] return; }
L_00309400:
    c.f[1] = c.r[16].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[2] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43080000u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3160000u);
    set32(c.r[5], 0u + 1u);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = c.r[3].w[0];
    c.f[12] = c.r[2].w[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309434u); c.f[13] = fp::sub(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0082(c, 280u, depth + 1u); else { c.pc = 0x0030A060u; return; } if (c.pc != 0x00309434u) [[unlikely]] return; }
L_00309434:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_00309458; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309458u); set32(c.r[4], c.r[3].w[0] + 3600u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00309458u) [[unlikely]] return; }
L_00309458:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 6u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309470u); set32(c.r[4], c.r[3].w[0] + 3840u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00309470u) [[unlikely]] return; }
L_00309470:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003093F8u | kUnwind; return; } goto L_003093F8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003094A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[17], c.r[18].w[0] + 304u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[17].w[0] + 36u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003094C8u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_00AC(c, 58u, depth + 1u); else { c.pc = 0x003B07A0u; return; } if (c.pc != 0x003094C8u) [[unlikely]] return; }
L_003094C8:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003094D4u); set32(c.r[4], c.r[17].w[0] + 36u);  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x003094D4u) [[unlikely]] return; }
L_003094D4:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], c.r[6].w[0] - 16368u);
    set32(c.r[8], 0u + 6u);
    set32(c.r[7], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003094F8u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0082(c, 160u, depth + 1u); else { c.pc = 0x00309220u; return; } if (c.pc != 0x003094F8u) [[unlikely]] return; }
L_003094F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309500u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00309500u) [[unlikely]] return; }
L_00309500:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3180000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42FA0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030951Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0082(c, 280u, depth + 1u); else { c.pc = 0x0030A060u; return; } if (c.pc != 0x0030951Cu) [[unlikely]] return; }
L_0030951C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 104u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42380000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[17].w[0] + 36u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309534u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0082(c, 281u, depth + 1u); else { c.pc = 0x0030A0F0u; return; } if (c.pc != 0x00309534u) [[unlikely]] return; }
L_00309534:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00309538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309540u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00309540u) [[unlikely]] return; }
L_00309540:
    c.f[1] = c.r[16].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42380000u);
    c.f[2] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42FA0000u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3180000u);
    set32(c.r[5], 0u + 1u);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = c.r[3].w[0];
    c.f[12] = c.r[2].w[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309574u); c.f[13] = fp::sub(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0082(c, 280u, depth + 1u); else { c.pc = 0x0030A060u; return; } if (c.pc != 0x00309574u) [[unlikely]] return; }
L_00309574:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_00309598; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309598u); set32(c.r[4], c.r[3].w[0] + 7680u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00309598u) [[unlikely]] return; }
L_00309598:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 6u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003095B0u); set32(c.r[4], c.r[3].w[0] + 7920u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x003095B0u) [[unlikely]] return; }
L_003095B0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00309538u | kUnwind; return; } goto L_00309538; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003095E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[20], 0u + 3u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18112u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_00309640; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 92u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18114u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00309640; } }
    c.r[18].d[0] = c.r[4].d[0] << 56;
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);  if (t) { goto L_00309670; } }
L_00309640:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 105u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030964Cu); set32(c.r[4], c.r[16].w[0] + 52u);  if (depth < kMaxDepth) unit_006F(c, 22u, depth + 1u); else { c.pc = 0x002BC440u; return; } if (c.pc != 0x0030964Cu) [[unlikely]] return; }
L_0030964C:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00309670; } }
    c.r[20].d[0] = c.r[2].d[0] << 56;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 56);
    c.r[18].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
L_00309670:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18224u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_00309690; } }
    c.r[2].d[0] = c.r[20].d[0] & c.r[2].d[0];
    c.r[20].d[0] = c.r[2].d[0] << 56;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 56);
    c.budget -= 4;
L_00309690:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 102u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00309718; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 105u)));
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00309718; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003096B8u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x003096B8u) [[unlikely]] return; }
L_003096B8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3180000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003096D4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0082(c, 280u, depth + 1u); else { c.pc = 0x0030A060u; return; } if (c.pc != 0x003096D4u) [[unlikely]] return; }
L_003096D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC28C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003096F0u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x003096F0u) [[unlikely]] return; }
L_003096F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 105u)));
    c.f[12] = ld32((c.r[16].w[0] + 116u));
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[5], 0u + 6u);
    set32(c.r[4], c.r[3].w[0] + 89u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309718u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00309718u) [[unlikely]] return; }
L_00309718:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 6u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 106u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030972C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7u)));
    c.budget -= 1;
L_0030972C:
    c.r[19].d[0] = c.r[2].d[0] << 56;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309738u); c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00309738u) [[unlikely]] return; }
L_00309738:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 124u)));
    set32(c.r[5], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 126u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309760u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0082(c, 280u, depth + 1u); else { c.pc = 0x0030A060u; return; } if (c.pc != 0x00309760u) [[unlikely]] return; }
L_00309760:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 6u)));
    c.f[12] = ld32((c.r[16].w[0] + 116u));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309774u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_006E(c, 283u, depth + 1u); else { c.pc = 0x002BAFF0u; return; } if (c.pc != 0x00309774u) [[unlikely]] return; }
L_00309774:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 102u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003097A8; } }
    c.f[0] = ld32((c.r[16].w[0] + 116u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.f[1] = c.r[2].w[0];
    set32(c.r[5], 0u + 6u);
    c.f[12] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003097A4u); set32(c.r[4], c.r[3].w[0] + 3840u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x003097A4u) [[unlikely]] return; }
L_003097A4:
    c.budget -= 1;
L_003097A8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 102u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[20].d[0] << 56;  if (t) { goto L_00309828; } }
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00309828; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003097D0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x003097D0u) [[unlikely]] return; }
L_003097D0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3180000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42D00000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003097ECu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0082(c, 280u, depth + 1u); else { c.pc = 0x0030A060u; return; } if (c.pc != 0x003097ECu) [[unlikely]] return; }
L_003097EC:
    c.f[1] = ld32((c.r[16].w[0] + 116u));
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.f[0] = ld32((c.r[16].w[0] + 128u));
    set32(c.r[5], 0u + 6u);
    set32(c.r[4], c.r[2].w[0] + 13920u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309808u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 18u, depth + 1u); else { c.pc = 0x002D8380u; return; } if (c.pc != 0x00309808u) [[unlikely]] return; }
L_00309808:
    c.f[1] = ld32((c.r[16].w[0] + 116u));
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.f[0] = ld32((c.r[16].w[0] + 128u));
    set32(c.r[5], 0u + 6u);
    set32(c.r[4], c.r[2].w[0] + 13680u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309824u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00309824u) [[unlikely]] return; }
L_00309824:
    c.budget -= 1;
L_00309828:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309830u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 6u)));  if (depth < kMaxDepth) unit_006E(c, 253u, depth + 1u); else { c.pc = 0x002BAA10u; return; } if (c.pc != 0x00309830u) [[unlikely]] return; }
L_00309830:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00309870; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309840u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00309840u) [[unlikely]] return; }
L_00309840:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3180000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42D00000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030985Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0082(c, 280u, depth + 1u); else { c.pc = 0x0030A060u; return; } if (c.pc != 0x0030985Cu) [[unlikely]] return; }
L_0030985C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.f[12] = ld32((c.r[16].w[0] + 116u));
    set32(c.r[5], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309870u); set32(c.r[4], c.r[2].w[0] + 14160u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00309870u) [[unlikely]] return; }
L_00309870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309878u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00309878u) [[unlikely]] return; }
L_00309878:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 120u)));
    set32(c.r[5], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 122u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003098A0u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0082(c, 280u, depth + 1u); else { c.pc = 0x0030A060u; return; } if (c.pc != 0x003098A0u) [[unlikely]] return; }
L_003098A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.f[12] = ld32((c.r[16].w[0] + 116u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 6u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 6u);
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003098C8u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_006E(c, 279u, depth + 1u); else { c.pc = 0x002BAF20u; return; } if (c.pc != 0x003098C8u) [[unlikely]] return; }
L_003098C8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 102u)));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[18].d[0] << 56;  if (t) { goto L_00309AD8; } }
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00309A68; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 105u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 104u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003098F4u); set32(c.r[4], c.r[16].w[0] + 52u);  if (depth < kMaxDepth) unit_006F(c, 6u, depth + 1u); else { c.pc = 0x002BC1B0u; return; } if (c.pc != 0x003098F4u) [[unlikely]] return; }
L_003098F4:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 105u)));
    c.r[6].d[0] = c.r[2].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309908u); set32(c.r[4], c.r[16].w[0] + 52u);  if (depth < kMaxDepth) unit_006F(c, 23u, depth + 1u); else { c.pc = 0x002BC460u; return; } if (c.pc != 0x00309908u) [[unlikely]] return; }
L_00309908:
    c.r[19].d[0] = c.r[2].d[0] << 56;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[19].sd[0] < 0;  if (t) { goto L_003099A8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 106u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00309928; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7u)));
    c.budget -= 1;
L_00309928:
    c.r[18].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309938u); c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x00309938u) [[unlikely]] return; }
L_00309938:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC28C0000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030994Cu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0030994Cu) [[unlikely]] return; }
L_0030994C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F330000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].d[0] = c.r[3].d[0] | 13107ull;
    c.f[12] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309968u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00309968u) [[unlikely]] return; }
L_00309968:
    c.f[0] = ld32((c.r[16].w[0] + 116u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F330000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.f[1] = c.r[2].w[0];
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 6u);
    c.f[12] = fp::mul(c.f[1], c.f[0]);
    set32(c.r[2], c.r[3].w[0] << 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[19].d[0];
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030999Cu); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_006E(c, 279u, depth + 1u); else { c.pc = 0x002BAF20u; return; } if (c.pc != 0x0030999Cu) [[unlikely]] return; }
L_0030999C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003099A4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x003099A4u) [[unlikely]] return; }
L_003099A4:
    c.budget -= 1;
L_003099A8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 105u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 104u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003099B8u); set32(c.r[4], c.r[16].w[0] + 52u);  if (depth < kMaxDepth) unit_006F(c, 9u, depth + 1u); else { c.pc = 0x002BC230u; return; } if (c.pc != 0x003099B8u) [[unlikely]] return; }
L_003099B8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 105u)));
    c.r[6].d[0] = c.r[2].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003099CCu); set32(c.r[4], c.r[16].w[0] + 52u);  if (depth < kMaxDepth) unit_006F(c, 23u, depth + 1u); else { c.pc = 0x002BC460u; return; } if (c.pc != 0x003099CCu) [[unlikely]] return; }
L_003099CC:
    c.r[19].d[0] = c.r[2].d[0] << 56;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[19].sd[0] < 0;  if (t) { goto L_00309A68; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 106u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003099EC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7u)));
    c.budget -= 1;
L_003099EC:
    c.r[18].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003099FCu); c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x003099FCu) [[unlikely]] return; }
L_003099FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x428C0000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309A10u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00309A10u) [[unlikely]] return; }
L_00309A10:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F330000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].d[0] = c.r[3].d[0] | 13107ull;
    c.f[12] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309A2Cu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00309A2Cu) [[unlikely]] return; }
L_00309A2C:
    c.f[0] = ld32((c.r[16].w[0] + 116u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F330000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.f[1] = c.r[2].w[0];
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 6u);
    c.f[12] = fp::mul(c.f[1], c.f[0]);
    set32(c.r[2], c.r[3].w[0] << 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[19].d[0];
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309A60u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_006E(c, 279u, depth + 1u); else { c.pc = 0x002BAF20u; return; } if (c.pc != 0x00309A60u) [[unlikely]] return; }
L_00309A60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309A68u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x00309A68u) [[unlikely]] return; }
L_00309A68:
    c.r[3].d[0] = c.r[20].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00309AD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309A84u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00309A84u) [[unlikely]] return; }
L_00309A84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3180000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42D00000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309AA0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0082(c, 280u, depth + 1u); else { c.pc = 0x0030A060u; return; } if (c.pc != 0x00309AA0u) [[unlikely]] return; }
L_00309AA0:
    c.f[1] = ld32((c.r[16].w[0] + 116u));
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.f[0] = ld32((c.r[16].w[0] + 128u));
    set32(c.r[5], 0u + 6u);
    set32(c.r[4], c.r[2].w[0] + 8160u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309ABCu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 18u, depth + 1u); else { c.pc = 0x002D8380u; return; } if (c.pc != 0x00309ABCu) [[unlikely]] return; }
L_00309ABC:
    c.f[1] = ld32((c.r[16].w[0] + 116u));
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.f[0] = ld32((c.r[16].w[0] + 128u));
    set32(c.r[5], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309AD4u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00309AD4u) [[unlikely]] return; }
L_00309AD4:
    c.budget -= 1;
L_00309AD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00309B00:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[19], c.r[20].w[0] + 304u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[19].w[0] + 36u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309B38u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_00AC(c, 58u, depth + 1u); else { c.pc = 0x003B07A0u; return; } if (c.pc != 0x00309B38u) [[unlikely]] return; }
L_00309B38:
    c.f[21] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309B44u); set32(c.r[4], c.r[19].w[0] + 36u);  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x00309B44u) [[unlikely]] return; }
L_00309B44:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 108u)));
    set32(c.r[2], 0u + 5u);
    set32(c.r[18], c.f[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_00309BB0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00309BA0; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00309B90; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00309B80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00309BC0; } }
L_00309B80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 26u);  if (t) { goto L_00309BC0; } }
L_00309B90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43040000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 27u);  if (t) { goto L_00309BC0; } }
L_00309BA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43120000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 28u);  if (t) { goto L_00309BC0; } }
L_00309BB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43200000u);
    c.f[20] = c.r[2].w[0];
    set32(c.r[17], 0u + 29u);
    c.budget -= 4;
L_00309BC0:
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00309C58; } }
    c.budget -= 1;
L_00309BD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    c.f[0] = c.r[16].w[0];
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 104u)));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != c.r[16].d[0]; c.f[22] = fp::sub(c.f[20], c.f[0]);  if (t) { goto L_00309C08; } }
    c.f[0] = c.r[18].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[22] = fp::add(c.f[22], c.f[0]);
    c.budget -= 5;
L_00309C08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309C10u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00309C10u) [[unlikely]] return; }
L_00309C10:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2F00000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309C28u); c.f[13] = c.f[22];  if (depth < kMaxDepth) unit_0082(c, 280u, depth + 1u); else { c.pc = 0x0030A060u; return; } if (c.pc != 0x00309C28u) [[unlikely]] return; }
L_00309C28:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[6].d[0] = c.r[16].d[0] << 56;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 6u)));
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.f[12] = c.f[21];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309C44u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_0082(c, 284u, depth + 1u); else { c.pc = 0x0030A150u; return; } if (c.pc != 0x00309C44u) [[unlikely]] return; }
L_00309C44:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 108u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00309BD0u | kUnwind; return; } goto L_00309BD0; } }
L_00309C58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309C60u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00309C60u) [[unlikely]] return; }
L_00309C60:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2F00000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309C78u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0082(c, 280u, depth + 1u); else { c.pc = 0x0030A060u; return; } if (c.pc != 0x00309C78u) [[unlikely]] return; }
L_00309C78:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 104u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[19].w[0] + 36u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309C90u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0082(c, 281u, depth + 1u); else { c.pc = 0x0030A0F0u; return; } if (c.pc != 0x00309C90u) [[unlikely]] return; }
L_00309C90:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 108u)));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00309D28; } }
L_00309CA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309CA8u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00309CA8u) [[unlikely]] return; }
L_00309CA8:
    c.f[0] = c.r[16].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2F00000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 2u)));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[5], 0u + 1u);
    c.f[1] = c.r[3].w[0];
    c.f[12] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309CD4u); c.f[13] = fp::sub(c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_0082(c, 280u, depth + 1u); else { c.pc = 0x0030A060u; return; } if (c.pc != 0x00309CD4u) [[unlikely]] return; }
L_00309CD4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_00309CF8; } }
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309CF8u); set32(c.r[4], c.r[3].w[0] + 7680u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00309CF8u) [[unlikely]] return; }
L_00309CF8:
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 4u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309D10u); set32(c.r[4], c.r[3].w[0] + 7920u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00309D10u) [[unlikely]] return; }
L_00309D10:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 108u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00309CA0u | kUnwind; return; } goto L_00309CA0; } }
    c.budget -= 1;
L_00309D28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309D30u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00309D30u) [[unlikely]] return; }
L_00309D30:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 2u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2F00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42D00000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309D4Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0082(c, 280u, depth + 1u); else { c.pc = 0x0030A060u; return; } if (c.pc != 0x00309D4Cu) [[unlikely]] return; }
L_00309D4C:
    set32(c.r[2], c.r[17].w[0] << 4);
    set32(c.r[5], 0u + 4u);
    set32(c.r[3], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.f[12] = c.f[21];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309D6Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00309D6Cu) [[unlikely]] return; }
L_00309D6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309D74u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00309D74u) [[unlikely]] return; }
L_00309D74:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 2u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2DA0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43020000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309D90u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0082(c, 280u, depth + 1u); else { c.pc = 0x0030A060u; return; } if (c.pc != 0x00309D90u) [[unlikely]] return; }
L_00309D90:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 6u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 7u)));
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309DA8u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_006E(c, 283u, depth + 1u); else { c.pc = 0x002BAFF0u; return; } if (c.pc != 0x00309DA8u) [[unlikely]] return; }
L_00309DA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309DB0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00309DB0u) [[unlikely]] return; }
L_00309DB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC34D0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 2u)));
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42820000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309DCCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0082(c, 280u, depth + 1u); else { c.pc = 0x0030A060u; return; } if (c.pc != 0x00309DCCu) [[unlikely]] return; }
L_00309DCC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    c.f[12] = c.r[2].w[0];
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 7u)));
    set32(c.r[6], 0u + 6u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 6u)));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309DF8u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_006E(c, 279u, depth + 1u); else { c.pc = 0x002BAF20u; return; } if (c.pc != 0x00309DF8u) [[unlikely]] return; }
L_00309DF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00309E30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], c.r[17].w[0] + 304u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309E54u); set32(c.r[4], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_00AC(c, 58u, depth + 1u); else { c.pc = 0x003B07A0u; return; } if (c.pc != 0x00309E54u) [[unlikely]] return; }
L_00309E54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309E5Cu); set32(c.r[4], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x00309E5Cu) [[unlikely]] return; }
L_00309E5C:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[18], c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309E6Cu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00309E6Cu) [[unlikely]] return; }
L_00309E6C:
    c.f[0] = c.r[18].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B00000u);
    c.f[1] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[5], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC34D0000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309E94u); c.f[13] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0082(c, 280u, depth + 1u); else { c.pc = 0x0030A060u; return; } if (c.pc != 0x00309E94u) [[unlikely]] return; }
L_00309E94:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    set32(c.r[5], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309EA8u); set32(c.r[4], c.r[2].w[0] + 13920u);  if (depth < kMaxDepth) unit_0076(c, 18u, depth + 1u); else { c.pc = 0x002D8380u; return; } if (c.pc != 0x00309EA8u) [[unlikely]] return; }
L_00309EA8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    set32(c.r[5], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309EBCu); set32(c.r[4], c.r[2].w[0] + 13680u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00309EBCu) [[unlikely]] return; }
L_00309EBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309EC4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x00309EC4u) [[unlikely]] return; }
L_00309EC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1600000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309ED8u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00309ED8u) [[unlikely]] return; }
L_00309ED8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.f[12] = ld32((c.r[16].w[0] + 116u));
    set32(c.r[5], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309EECu); set32(c.r[4], c.r[2].w[0] + 14880u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00309EECu) [[unlikely]] return; }
L_00309EEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309EF4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x00309EF4u) [[unlikely]] return; }
L_00309EF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309EFCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x00309EFCu) [[unlikely]] return; }
L_00309EFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309F10u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00309F10u) [[unlikely]] return; }
L_00309F10:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.f[12] = ld32((c.r[16].w[0] + 116u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    set32(c.r[6], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309F28u); set32(c.r[4], c.r[2].w[0] + 15120u);  if (depth < kMaxDepth) unit_0082(c, 288u, depth + 1u); else { c.pc = 0x0030A270u; return; } if (c.pc != 0x00309F28u) [[unlikely]] return; }
L_00309F28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309F30u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x00309F30u) [[unlikely]] return; }
L_00309F30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309F38u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00309F38u) [[unlikely]] return; }
L_00309F38:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC34D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B00000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309F54u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0082(c, 280u, depth + 1u); else { c.pc = 0x0030A060u; return; } if (c.pc != 0x00309F54u) [[unlikely]] return; }
L_00309F54:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 104u)));
    c.f[12] = 0u;
    set32(c.r[4], c.r[16].w[0] + 36u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309F68u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0082(c, 281u, depth + 1u); else { c.pc = 0x0030A0F0u; return; } if (c.pc != 0x00309F68u) [[unlikely]] return; }
L_00309F68:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309F80u); set32(c.r[4], c.r[3].w[0] + 7920u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00309F80u) [[unlikely]] return; }
L_00309F80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309F88u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00309F88u) [[unlikely]] return; }
L_00309F88:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2DA0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43020000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309FA4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0082(c, 280u, depth + 1u); else { c.pc = 0x0030A060u; return; } if (c.pc != 0x00309FA4u) [[unlikely]] return; }
L_00309FA4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 6u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7u)));
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309FBCu); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_006E(c, 283u, depth + 1u); else { c.pc = 0x002BAFF0u; return; } if (c.pc != 0x00309FBCu) [[unlikely]] return; }
L_00309FBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309FC4u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00309FC4u) [[unlikely]] return; }
L_00309FC4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2DA0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42BE0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309FE0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0082(c, 280u, depth + 1u); else { c.pc = 0x0030A060u; return; } if (c.pc != 0x00309FE0u) [[unlikely]] return; }
L_00309FE0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.f[12] = ld32((c.r[16].w[0] + 116u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 6u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309FF8u); set32(c.r[7], 0u + 6u);  if (depth < kMaxDepth) unit_0082(c, 284u, depth + 1u); else { c.pc = 0x0030A150u; return; } if (c.pc != 0x00309FF8u) [[unlikely]] return; }
L_00309FF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A000u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0030A000u) [[unlikely]] return; }
L_0030A000:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC34D0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42820000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A01Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0082(c, 280u, depth + 1u); else { c.pc = 0x0030A060u; return; } if (c.pc != 0x0030A01Cu) [[unlikely]] return; }
L_0030A01C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.f[12] = c.r[2].w[0];
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7u)));
    set32(c.r[6], 0u + 6u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 6u)));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A048u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_006E(c, 279u, depth + 1u); else { c.pc = 0x002BAF20u; return; } if (c.pc != 0x0030A048u) [[unlikely]] return; }
L_0030A048:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0030A060:
    c.r[4].d[0] = c.r[4].d[0] << 56;
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_0030A080; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0030A0B8; } }
    c.budget -= 1;
L_0030A080:
    c.r[3].d[0] = c.r[5].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x43980000u);  if (t) { goto L_0030A0A0; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = fp::add(c.f[12], c.f[0]);  if (t) { goto L_0030A0B8; } }
    c.budget -= 1;
L_0030A0A0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);  if (t) { goto L_0030A0B8; } }
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.budget -= 3;
L_0030A0B8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_0030A0D0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0030A0E0; } }
    c.budget -= 1;
L_0030A0D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.f[0] = c.r[2].w[0];
    c.f[13] = fp::sub(c.f[13], c.f[0]);
    c.budget -= 4;
L_0030A0E0:
    c.f[14] = 0u;
    c.budget -= 4;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00126F40u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 195u, depth); }
L_0030A0F0:
    c.f[0] = c.r[5].w[0];
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.f[0] = fp::mul(c.f[12], c.f[0]);
    c.f[12] = 0u;
    c.f[13] = c.f[0] ^ fp::kSign;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A124u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0030A124u) [[unlikely]] return; }
L_0030A124:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A130u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 67u, depth + 1u); else { c.pc = 0x003B0B80u; return; } if (c.pc != 0x0030A130u) [[unlikely]] return; }
L_0030A130:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030A150:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[5].d[0] = c.r[5].d[0] << 56;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.f[20] = c.f[12];
    c.budget -= 14;
    { const bool t = c.r[5].d[0] != 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0030A1B8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A194u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18228u)));  if (depth < kMaxDepth) unit_004F(c, 68u, depth + 1u); else { c.pc = 0x0023D1E0u; return; } if (c.pc != 0x0030A194u) [[unlikely]] return; }
L_0030A194:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[28].w[0] - 28000u);  if (t) { goto L_0030A1B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030A218; } }
    c.budget -= 1;
L_0030A1B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[28].w[0] - 27996u);  if (t) { goto L_0030A218; } }
L_0030A1B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 16336u)));
    set32(c.r[4], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0030A218; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[6], c.r[6].w[0] - 16336u);
    c.budget -= 3;
L_0030A1D8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0030A208; } }
    set32(c.r[4], c.r[8].w[0] << 1);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] - 16336u);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[3].w[0] + 1u);  if (t) { goto L_0030A218; } }
    c.budget -= 1;
L_0030A208:
    set32(c.r[6], c.r[6].w[0] + 6u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[8], c.r[8].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A1D8u | kUnwind; return; } goto L_0030A1D8; } }
L_0030A218:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0030A250; } }
    c.r[2].d[0] = c.r[17].d[0] << 56;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.f[12] = c.f[20];
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A24Cu); set32(c.r[4], c.r[18].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0030A24Cu) [[unlikely]] return; }
L_0030A24C:
    c.budget -= 1;
L_0030A250:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0030A270:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[0] = c.r[3].w[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 8u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.f[0] = fp::mul(c.f[0], c.f[12]);
    c.r[2].d[0] = c.r[5].d[0] << 56;
    st32((c.r[29].w[0] + 84u), c.r[4].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] - 16224u);
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    st32((c.r[29].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[5], c.r[2].w[0] << 2);
    st32((c.r[29].w[0] + 76u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.f[14] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 16222u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A80000u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[15] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[6].w[0] << 4);
    set32(c.r[4], 0u + 1u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 45;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A324u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x0030A324u) [[unlikely]] return; }
L_0030A324:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A334u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0030A334u) [[unlikely]] return; }
L_0030A334:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0030A350:
    c.r[5].d[0] = c.r[5].d[0] << 56;
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[4].w[0] + 304u);  if (t) { goto L_0030A388; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0030A378; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030A398; } }
    c.budget -= 1;
L_0030A378:
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0030A398; } }
L_0030A388:
    set32(c.r[3], 0u + 3u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[6].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 4;
L_0030A398:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0030A3A0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0030A3B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0030A3C0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0030A3D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 320u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_0030A3E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0030A3F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030A400; } }
L_0030A3F8:
    c.r[2].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0030A400:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0030A410:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + 18112u);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[16], c.r[4].w[0] + 67u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 67u)));
    c.budget -= 15;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0030A468; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A454u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));  if (depth < kMaxDepth) unit_006E(c, 253u, depth + 1u); else { c.pc = 0x002BAA10u; return; } if (c.pc != 0x0030A454u) [[unlikely]] return; }
L_0030A454:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 2u);  if (t) { goto L_0030A468; } }
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0030A468:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030A480:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[3], c.r[3].w[0] + 18180u);
    set32(c.r[7], 0u - 1u);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 309u), static_cast<std::uint8_t>(c.r[7].w[0]));  c.pc = t; return; }
L_0030A4B0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 4u);
    set32(c.r[7], c.r[4].w[0] + 304u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030A508; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[6].w[0] << 1);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + 18179u);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.budget -= 16;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);  if (t) { goto L_0030A5B8; } }
    c.budget -= 1;
L_0030A508:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[5], c.r[6].w[0] << 1);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + 18179u);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0030A550; } }
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);  if (t) { goto L_0030A5B8; } }
L_0030A550:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 103u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030A598; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 4u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[5].w[0] << (c.r[4].w[0] & 31u));
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 56;
    set32(c.r[3], c.r[5].w[0] << (c.r[3].w[0] & 31u));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.budget -= 15;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);  if (t) { goto L_0030A5B8; } }
L_0030A598:
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 8;
L_0030A5B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0030A5C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 4u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18112u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[16], c.r[18].w[0] + 304u);  if (t) { goto L_0030A608; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 101u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 103u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030A610; } }
L_0030A608:
    st8((c.r[16].w[0] + 101u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 103u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0030A610:
    st8((c.r[16].w[0] + 102u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A620u); st8((c.r[16].w[0] + 92u), static_cast<std::uint8_t>(c.r[17].w[0]));  if (depth < kMaxDepth) unit_006E(c, 226u, depth + 1u); else { c.pc = 0x002BA4F0u; return; } if (c.pc != 0x0030A620u) [[unlikely]] return; }
L_0030A620:
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[5], c.r[16].w[0] + 4u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[2], c.r[2].w[0] + 18179u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
L_0030A648:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 2u);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A648u | kUnwind; return; } goto L_0030A648; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0030A680; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 100u), static_cast<std::uint8_t>(c.r[17].w[0]));  if (t) { goto L_0030A688; } }
L_0030A680:
    st8((c.r[16].w[0] + 100u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0030A688:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[16].w[0] + 20u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[3].w[0] + 3120u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A6A4u); set32(c.r[6], c.r[3].w[0] + 3360u);  if (depth < kMaxDepth) unit_00AC(c, 54u, depth + 1u); else { c.pc = 0x003B0700u; return; } if (c.pc != 0x0030A6A4u) [[unlikely]] return; }
L_0030A6A4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[16].w[0] + 36u);
    set32(c.r[5], c.r[3].w[0] + 7200u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A6C0u); set32(c.r[6], c.r[3].w[0] + 7440u);  if (depth < kMaxDepth) unit_00AC(c, 54u, depth + 1u); else { c.pc = 0x003B0700u; return; } if (c.pc != 0x0030A6C0u) [[unlikely]] return; }
L_0030A6C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A6C8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 307u, depth + 1u); else { c.pc = 0x0030A6E0u; return; } if (c.pc != 0x0030A6C8u) [[unlikely]] return; }
L_0030A6C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0030A6E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 16176u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 405u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A714u); set32(c.r[16], c.r[17].w[0] + 304u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030A714u) [[unlikely]] return; }
L_0030A714:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0030A740; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 101u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 16176u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A740u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030A740u) [[unlikely]] return; }
L_0030A740:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030A760:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[2], 0u + 4u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 406u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[19], c.r[20].w[0] + 304u);  if (t) { goto L_0030AAC0; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0030AAA0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0030A808; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0030A7E8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030A7C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030AB50; } }
L_0030A7C0:
    set32(c.r[4], c.r[19].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A7CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x0030A7CCu) [[unlikely]] return; }
L_0030A7CC:
    st8((c.r[19].w[0] + 103u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 102u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[19].w[0] + 102u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 104u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0030AB50; } }
L_0030A7E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A7F0u); set32(c.r[4], c.r[19].w[0] + 20u);  if (depth < kMaxDepth) unit_00AC(c, 65u, depth + 1u); else { c.pc = 0x003B0AD0u; return; } if (c.pc != 0x0030A7F0u) [[unlikely]] return; }
L_0030A7F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030AB50; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 102u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 102u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0030AB50; } }
L_0030A808:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A810u); set32(c.r[4], c.r[19].w[0] + 20u);  if (depth < kMaxDepth) unit_00AC(c, 62u, depth + 1u); else { c.pc = 0x003B0A00u; return; } if (c.pc != 0x0030A810u) [[unlikely]] return; }
L_0030A810:
    set32(c.r[2], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[6], 0u + 2u);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 104u)));
    c.r[4].d[0] = ld16((c.r[2].w[0] + 4u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A828u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 389u, depth + 1u); else { c.pc = 0x002278E0u; return; } if (c.pc != 0x0030A828u) [[unlikely]] return; }
L_0030A828:
    st8((c.r[19].w[0] + 104u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 104u)));
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0030A860; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A848u); set32(c.r[5], 0u + 166u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x0030A848u) [[unlikely]] return; }
L_0030A848:
    set32(c.r[4], c.r[19].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A854u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x0030A854u) [[unlikely]] return; }
L_0030A854:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0030AB50; } }
L_0030A860:
    set32(c.r[2], ld32((c.r[19].w[0] + 96u)));
    c.r[3].d[0] = ld16((c.r[2].w[0] + 4u));
    c.r[2].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0030A8E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A87Cu); set32(c.r[5], 0u + 167u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x0030A87Cu) [[unlikely]] return; }
L_0030A87C:
    set32(c.r[4], c.r[19].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A888u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x0030A888u) [[unlikely]] return; }
L_0030A888:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[2], c.r[2].w[0] + 18179u);
    set32(c.r[5], c.r[19].w[0] + 4u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
L_0030A8B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 2u);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A8B0u | kUnwind; return; } goto L_0030A8B0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0030AB58; } }
    c.budget -= 1;
L_0030A8E0:
    c.r[2].d[0] = c.r[3].d[0] & 544ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[29].w[0] + 110u);  if (t) { goto L_0030AB50; } }
    set32(c.r[17], c.r[29].w[0] + 109u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.r[18].d[0] = 0ull + 0ull;
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 108u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_0030A900:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_0030A928; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 108u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 108u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0030A988; } }
    c.budget -= 1;
L_0030A928:
    c.r[4].d[0] = c.r[18].d[0] << 56;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A934u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);  if (depth < kMaxDepth) unit_006E(c, 266u, depth + 1u); else { c.pc = 0x002BADA0u; return; } if (c.pc != 0x0030A934u) [[unlikely]] return; }
L_0030A934:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030A958; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 108u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[29].w[0] + 108u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0030A958:
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030A970; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0030A970:
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030A988; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0030A988:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A900u | kUnwind; return; } goto L_0030A900; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 108u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0030A9C8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030A9E0; } }
    c.budget -= 1;
L_0030A9C8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A9D4u); set32(c.r[5], 0u + 171u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x0030A9D4u) [[unlikely]] return; }
L_0030A9D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030AB50; } }
    c.budget -= 1;
L_0030A9E0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 4u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0030AA70; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 2u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + 18112u);
    set32(c.r[3], 0u + 2u);
    c.budget -= 7;
L_0030AA10:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[4].d[0];  if (t) { goto L_0030AA30; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0030AA40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { goto L_0030AA40; } }
    c.budget -= 1;
L_0030AA30:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0030AA40; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0030AA40:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 6u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030AA10u | kUnwind; return; } goto L_0030AA10; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0030AA70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AA64u); set32(c.r[5], 0u + 171u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x0030AA64u) [[unlikely]] return; }
L_0030AA64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030AB50; } }
    c.budget -= 1;
L_0030AA70:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AA7Cu); set32(c.r[5], 0u + 165u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x0030AA7Cu) [[unlikely]] return; }
L_0030AA7C:
    set32(c.r[4], c.r[19].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AA88u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x0030AA88u) [[unlikely]] return; }
L_0030AA88:
    set32(c.r[2], 0u + 1u);
    st8((c.r[19].w[0] + 103u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 102u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 102u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0030AB50; } }
L_0030AAA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AAA8u); set32(c.r[4], c.r[19].w[0] + 20u);  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B0B20u; return; } if (c.pc != 0x0030AAA8u) [[unlikely]] return; }
L_0030AAA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030AB50; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 102u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 102u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0030AB50; } }
L_0030AAC0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_0030AB38; } }
    set32(c.r[3], 0u - 2u);
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[19].w[0] + 4u);
    st8((c.r[19].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    st8((c.r[19].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 18179u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 2u)));
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 14;
L_0030AB08:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 2u);
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030AB08u | kUnwind; return; } goto L_0030AB08; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0030AB58; } }
    c.budget -= 1;
L_0030AB38:
    set32(c.r[2], 0u + 1u);
    st8((c.r[19].w[0] + 101u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 102u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0030AB58; } }
    c.budget -= 1;
L_0030AB50:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0030AB58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0030AB80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 4u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 406u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[16], c.r[4].w[0] + 304u);  if (t) { goto L_0030AD50; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0030AD30; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0030AC28; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0030AC08; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030ABD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030AD68; } }
L_0030ABD0:
    set32(c.r[4], c.r[16].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030ABDCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x0030ABDCu) [[unlikely]] return; }
L_0030ABDC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 102u)));
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 102u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0030AC00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 104u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0030AD68; } }
L_0030AC00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 104u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0030AD68; } }
L_0030AC08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AC10u); set32(c.r[4], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_00AC(c, 65u, depth + 1u); else { c.pc = 0x003B0AD0u; return; } if (c.pc != 0x0030AC10u) [[unlikely]] return; }
L_0030AC10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030AD68; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 102u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 102u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0030AD68; } }
L_0030AC28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AC30u); set32(c.r[4], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_00AC(c, 62u, depth + 1u); else { c.pc = 0x003B0A00u; return; } if (c.pc != 0x0030AC30u) [[unlikely]] return; }
L_0030AC30:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[6], 0u + 1u);
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 104u)));
    c.r[4].d[0] = ld16((c.r[2].w[0] + 4u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AC48u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 389u, depth + 1u); else { c.pc = 0x002278E0u; return; } if (c.pc != 0x0030AC48u) [[unlikely]] return; }
L_0030AC48:
    st8((c.r[16].w[0] + 104u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 104u)));
    c.r[2].d[0] = c.r[17].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0030ACA0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AC6Cu); set32(c.r[5], 0u + 166u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x0030AC6Cu) [[unlikely]] return; }
L_0030AC6C:
    set32(c.r[4], c.r[16].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AC78u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x0030AC78u) [[unlikely]] return; }
L_0030AC78:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030AC90; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0030AD68; } }
L_0030AC90:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0030AD68; } }
    c.budget -= 1;
L_0030ACA0:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.r[3].d[0] = ld16((c.r[2].w[0] + 4u));
    c.r[2].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030ACE0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030ACC0u); set32(c.r[5], 0u + 167u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x0030ACC0u) [[unlikely]] return; }
L_0030ACC0:
    set32(c.r[4], c.r[16].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030ACCCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x0030ACCCu) [[unlikely]] return; }
L_0030ACCC:
    st8((c.r[16].w[0] + 101u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 102u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0030AD70; } }
    c.budget -= 1;
L_0030ACE0:
    c.r[2].d[0] = c.r[3].d[0] & 544ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030AD68; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0030AD00; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0030AD08; } }
L_0030AD00:
    set32(c.r[2], 0u - 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0030AD08:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AD14u); set32(c.r[5], 0u + 165u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x0030AD14u) [[unlikely]] return; }
L_0030AD14:
    set32(c.r[4], c.r[16].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AD20u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x0030AD20u) [[unlikely]] return; }
L_0030AD20:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 102u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 102u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0030AD68; } }
L_0030AD30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AD38u); set32(c.r[4], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B0B20u; return; } if (c.pc != 0x0030AD38u) [[unlikely]] return; }
L_0030AD38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030AD68; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 102u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 102u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0030AD68; } }
L_0030AD50:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 101u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 102u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0030AD70; } }
    c.budget -= 1;
L_0030AD68:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0030AD70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030AD90:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 4u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 406u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[18], c.r[19].w[0] + 304u);  if (t) { goto L_0030B240; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0030B160; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0030AED0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0030AE78; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030ADF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030B348; } }
    c.budget -= 1;
L_0030ADF0:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 102u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AE08u); set32(c.r[4], c.r[18].w[0] + 52u);  if (depth < kMaxDepth) unit_006F(c, 2u, depth + 1u); else { c.pc = 0x002BC020u; return; } if (c.pc != 0x0030AE08u) [[unlikely]] return; }
L_0030AE08:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 6u)));
    set32(c.r[4], c.r[18].w[0] + 52u);
    set32(c.r[5], c.r[18].w[0] + 105u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AE1Cu); set32(c.r[6], c.r[18].w[0] + 104u);  if (depth < kMaxDepth) unit_006F(c, 24u, depth + 1u); else { c.pc = 0x002BC4B0u; return; } if (c.pc != 0x0030AE1Cu) [[unlikely]] return; }
L_0030AE1C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 105u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u - 2u);  if (t) { goto L_0030AE48; } }
    set32(c.r[4], c.r[18].w[0] + 52u);
    st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[18].w[0] + 105u);
    st8((c.r[18].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 6u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AE48u); set32(c.r[6], c.r[18].w[0] + 104u);  if (depth < kMaxDepth) unit_006F(c, 24u, depth + 1u); else { c.pc = 0x002BC4B0u; return; } if (c.pc != 0x0030AE48u) [[unlikely]] return; }
L_0030AE48:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 6u)));
    set32(c.r[4], 0u - 152u);
    set32(c.r[3], 0u + 65u);
    set32(c.r[2], 0u + 80u);
    st8((c.r[18].w[0] + 106u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[18].w[0] + 112u), 0u);
    st32((c.r[18].w[0] + 116u), 0u);
    st16((c.r[18].w[0] + 120u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[18].w[0] + 122u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[18].w[0] + 124u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 126u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0030B348; } }
L_0030AE78:
    set32(c.r[3], ld32((c.r[18].w[0] + 112u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 112u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[18].w[0] + 112u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 116u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 112u)));
    c.r[2].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030B348; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 102u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 102u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[18].w[0] + 112u), 0u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 116u), c.r[2].w[0]);  if (t) { goto L_0030B348; } }
    c.budget -= 1;
L_0030AED0:
    set32(c.r[4], ld32((c.r[18].w[0] + 96u)));
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 105u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 12u));
    c.r[2].d[0] = c.r[3].d[0] & 2048ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 104u)));  if (t) { goto L_0030AF00; } }
    set32(c.r[4], c.r[18].w[0] + 52u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AEF8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 6u, depth + 1u); else { c.pc = 0x002BC1B0u; return; } if (c.pc != 0x0030AEF8u) [[unlikely]] return; }
L_0030AEF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 104u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0030B000; } }
L_0030AF00:
    c.r[2].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030AF28; } }
    set32(c.r[4], c.r[18].w[0] + 52u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AF1Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 9u, depth + 1u); else { c.pc = 0x002BC230u; return; } if (c.pc != 0x0030AF1Cu) [[unlikely]] return; }
L_0030AF1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 104u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0030B000; } }
    c.budget -= 1;
L_0030AF28:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 4u));
    c.r[2].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);  if (t) { goto L_0030AF98; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18224u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[18].w[0] + 52u);  if (t) { goto L_0030AF98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AF4Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 16u, depth + 1u); else { c.pc = 0x002BC3C0u; return; } if (c.pc != 0x0030AF4Cu) [[unlikely]] return; }
L_0030AF4C:
    st8((c.r[18].w[0] + 105u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = c.r[16].d[0] << 56;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 105u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0030B000; } }
    st8((c.r[18].w[0] + 104u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 105u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 104u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AF78u); set32(c.r[4], c.r[18].w[0] + 52u);  if (depth < kMaxDepth) unit_006F(c, 6u, depth + 1u); else { c.pc = 0x002BC1B0u; return; } if (c.pc != 0x0030AF78u) [[unlikely]] return; }
L_0030AF78:
    st8((c.r[18].w[0] + 104u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 105u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 104u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AF8Cu); set32(c.r[4], c.r[18].w[0] + 52u);  if (depth < kMaxDepth) unit_006F(c, 9u, depth + 1u); else { c.pc = 0x002BC230u; return; } if (c.pc != 0x0030AF8Cu) [[unlikely]] return; }
L_0030AF8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 104u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0030B000; } }
    c.budget -= 1;
L_0030AF98:
    c.r[2].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);  if (t) { goto L_0030B000; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18224u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[18].w[0] + 52u);  if (t) { goto L_0030B000; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AFB8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 19u, depth + 1u); else { c.pc = 0x002BC400u; return; } if (c.pc != 0x0030AFB8u) [[unlikely]] return; }
L_0030AFB8:
    st8((c.r[18].w[0] + 105u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = c.r[16].d[0] << 56;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 105u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0030B000; } }
    st8((c.r[18].w[0] + 104u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 105u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 104u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AFE4u); set32(c.r[4], c.r[18].w[0] + 52u);  if (depth < kMaxDepth) unit_006F(c, 6u, depth + 1u); else { c.pc = 0x002BC1B0u; return; } if (c.pc != 0x0030AFE4u) [[unlikely]] return; }
L_0030AFE4:
    st8((c.r[18].w[0] + 104u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 105u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 104u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AFF8u); set32(c.r[4], c.r[18].w[0] + 52u);  if (depth < kMaxDepth) unit_006F(c, 9u, depth + 1u); else { c.pc = 0x002BC230u; return; } if (c.pc != 0x0030AFF8u) [[unlikely]] return; }
L_0030AFF8:
    st8((c.r[18].w[0] + 104u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0030B000:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 104u)));
    c.r[3].d[0] = c.r[17].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0030B028; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 105u)));
    c.r[3].d[0] = c.r[16].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0030B050; } }
L_0030B028:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B034u); set32(c.r[5], 0u + 166u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x0030B034u) [[unlikely]] return; }
L_0030B034:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 105u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 104u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B044u); set32(c.r[4], c.r[18].w[0] + 52u);  if (depth < kMaxDepth) unit_006F(c, 23u, depth + 1u); else { c.pc = 0x002BC460u; return; } if (c.pc != 0x0030B044u) [[unlikely]] return; }
L_0030B044:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0030B348; } }
    c.budget -= 1;
L_0030B050:
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    c.r[3].d[0] = ld16((c.r[2].w[0] + 4u));
    c.r[2].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0030B110; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B06Cu); set32(c.r[5], 0u + 167u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x0030B06Cu) [[unlikely]] return; }
L_0030B06C:
    set32(c.r[4], c.r[18].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B078u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x0030B078u) [[unlikely]] return; }
L_0030B078:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18112u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0030B0E0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[2], c.r[2].w[0] + 18179u);
    set32(c.r[5], c.r[18].w[0] + 4u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
L_0030B0B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 2u);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030B0B0u | kUnwind; return; } goto L_0030B0B0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0030B350; } }
    c.budget -= 1;
L_0030B0E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 6u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 106u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0030B0F8; } }
    st8((c.r[18].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0030B0F8:
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 101u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 102u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0030B350; } }
    c.budget -= 1;
L_0030B110:
    c.r[2].d[0] = c.r[3].d[0] & 544ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030B348; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B124u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 6u)));  if (depth < kMaxDepth) unit_006E(c, 253u, depth + 1u); else { c.pc = 0x002BAA10u; return; } if (c.pc != 0x0030B124u) [[unlikely]] return; }
L_0030B124:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0030B140; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B134u); set32(c.r[5], 0u + 171u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x0030B134u) [[unlikely]] return; }
L_0030B134:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030B348; } }
    c.budget -= 1;
L_0030B140:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B14Cu); set32(c.r[5], 0u + 165u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x0030B14Cu) [[unlikely]] return; }
L_0030B14C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 102u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 102u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0030B348; } }
    c.budget -= 1;
L_0030B160:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC0A90000u);
    c.r[4].d[0] = c.r[3].d[0] | 39322ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40890000u);
    c.r[3].d[0] = c.r[2].d[0] | 39322ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 112u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = c.r[4].w[0];
    c.f[1] = c.r[3].w[0];
    set32(c.r[2], c.r[5].w[0] + 1u);
    st32((c.r[18].w[0] + 112u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 120u)));
    c.f[3] = c.r[2].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[2] = fp::add(c.f[3], c.f[2]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    set32(c.r[2], c.f[2]);
    st16((c.r[18].w[0] + 120u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 124u)));
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[1]);
    st16((c.r[18].w[0] + 124u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 126u)));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st16((c.r[18].w[0] + 126u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 112u)));
    c.r[2].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 42;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030B348; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 102u)));
    set32(c.r[5], 0u - 205u);
    set32(c.r[4], 0u + 65u);
    set32(c.r[3], 0u - 109u);
    set32(c.r[2], 0u + 130u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[18].w[0] + 102u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[18].w[0] + 112u), 0u);
    st16((c.r[18].w[0] + 120u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[18].w[0] + 122u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[18].w[0] + 124u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 126u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0030B348; } }
    c.budget -= 1;
L_0030B240:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0030B258; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 108u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0030B288; } }
    c.budget -= 1;
L_0030B258:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[4], c.r[2].w[0] << 7);
    set32(c.r[3], c.r[3].w[0] + 14503u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], 0u + 52u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[18].w[0] + 108u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 6u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0030B288; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[18].w[0] + 108u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0030B288:
    st8((c.r[18].w[0] + 102u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 6u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 106u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0030B2A0; } }
    st8((c.r[18].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0030B2A0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 108u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0030B338; } }
    st8((c.r[18].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18112u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0030B328; } }
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[18].w[0] + 4u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[2], c.r[2].w[0] + 18179u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
L_0030B2F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 2u);
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030B2F0u | kUnwind; return; } goto L_0030B2F0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 2u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B31Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 100u)));  if (depth < kMaxDepth) unit_006E(c, 255u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x0030B31Cu) [[unlikely]] return; }
L_0030B31C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0030B350; } }
    c.budget -= 1;
L_0030B328:
    set32(c.r[2], 0u + 4u);
    st8((c.r[18].w[0] + 101u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0030B350; } }
L_0030B338:
    set32(c.r[2], 0u + 3u);
    st8((c.r[18].w[0] + 101u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0030B350; } }
L_0030B348:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0030B350:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0030B370:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 406u)));
    set32(c.r[4], 0u + 4u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[16], c.r[7].w[0] + 304u);  if (t) { goto L_0030B510; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0030B4F0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0030B418; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0030B3F8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030B3C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030B598; } }
    c.budget -= 1;
L_0030B3C8:
    set32(c.r[4], c.r[16].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B3D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x0030B3D4u) [[unlikely]] return; }
L_0030B3D4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 102u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 102u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7u)));
    st8((c.r[16].w[0] + 104u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 107u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0030B598; } }
    c.budget -= 1;
L_0030B3F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B400u); set32(c.r[4], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_00AC(c, 65u, depth + 1u); else { c.pc = 0x003B0AD0u; return; } if (c.pc != 0x0030B400u) [[unlikely]] return; }
L_0030B400:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030B598; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 102u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 102u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0030B598; } }
L_0030B418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B420u); set32(c.r[4], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_00AC(c, 62u, depth + 1u); else { c.pc = 0x003B0A00u; return; } if (c.pc != 0x0030B420u) [[unlikely]] return; }
L_0030B420:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 104u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 108u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 4u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B43Cu); set32(c.r[6], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_0049(c, 389u, depth + 1u); else { c.pc = 0x002278E0u; return; } if (c.pc != 0x0030B43Cu) [[unlikely]] return; }
L_0030B43C:
    st8((c.r[16].w[0] + 104u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 104u)));
    c.r[2].d[0] = c.r[17].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0030B478; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B45Cu); set32(c.r[5], 0u + 166u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x0030B45Cu) [[unlikely]] return; }
L_0030B45C:
    set32(c.r[4], c.r[16].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B468u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x0030B468u) [[unlikely]] return; }
L_0030B468:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0030B598; } }
    c.budget -= 1;
L_0030B478:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.r[3].d[0] = ld16((c.r[2].w[0] + 4u));
    c.r[2].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0030B4C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B494u); set32(c.r[5], 0u + 167u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x0030B494u) [[unlikely]] return; }
L_0030B494:
    set32(c.r[4], c.r[16].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B4A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x0030B4A0u) [[unlikely]] return; }
L_0030B4A0:
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], 0u - 1u);
    st8((c.r[16].w[0] + 101u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 102u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 107u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0030B5A0; } }
    c.budget -= 1;
L_0030B4C0:
    c.r[2].d[0] = c.r[3].d[0] & 544ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0030B598; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B4D4u); set32(c.r[5], 0u + 165u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x0030B4D4u) [[unlikely]] return; }
L_0030B4D4:
    set32(c.r[4], c.r[16].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B4E0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x0030B4E0u) [[unlikely]] return; }
L_0030B4E0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 102u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 102u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0030B598; } }
L_0030B4F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B4F8u); set32(c.r[4], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B0B20u; return; } if (c.pc != 0x0030B4F8u) [[unlikely]] return; }
L_0030B4F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030B598; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 102u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 102u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0030B598; } }
L_0030B510:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18112u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0030B588; } }
    st8((c.r[16].w[0] + 102u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    st8((c.r[7].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + 18179u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 2u)));
    set32(c.r[5], c.r[16].w[0] + 4u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
L_0030B550:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 2u);
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030B550u | kUnwind; return; } goto L_0030B550; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 2u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B57Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 100u)));  if (depth < kMaxDepth) unit_006E(c, 255u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x0030B57Cu) [[unlikely]] return; }
L_0030B57C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0030B5A0; } }
    c.budget -= 1;
L_0030B588:
    st8((c.r[16].w[0] + 101u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 102u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0030B5A0; } }
L_0030B598:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0030B5A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030B5C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], 0u + 4u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 406u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[2].w[0] + 304u);  if (t) { goto L_0030B770; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0030B750; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0030B678; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0030B640; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0030B618; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030B850; } }
    c.budget -= 1;
L_0030B618:
    set32(c.r[4], c.r[16].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B624u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x0030B624u) [[unlikely]] return; }
L_0030B624:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 102u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 102u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    st8((c.r[16].w[0] + 104u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 116u), 0u);  if (t) { goto L_0030B850; } }
L_0030B640:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B648u); set32(c.r[4], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_00AC(c, 58u, depth + 1u); else { c.pc = 0x003B07A0u; return; } if (c.pc != 0x0030B648u) [[unlikely]] return; }
L_0030B648:
    st32((c.r[16].w[0] + 116u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B654u); set32(c.r[4], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_00AC(c, 65u, depth + 1u); else { c.pc = 0x003B0AD0u; return; } if (c.pc != 0x0030B654u) [[unlikely]] return; }
L_0030B654:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030B850; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 102u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 102u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 116u), c.r[2].w[0]);  if (t) { goto L_0030B850; } }
    c.budget -= 1;
L_0030B678:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B680u); set32(c.r[4], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_00AC(c, 62u, depth + 1u); else { c.pc = 0x003B0A00u; return; } if (c.pc != 0x0030B680u) [[unlikely]] return; }
L_0030B680:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[6], 0u + 4u);
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 104u)));
    c.r[4].d[0] = ld16((c.r[2].w[0] + 4u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B698u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 385u, depth + 1u); else { c.pc = 0x00227830u; return; } if (c.pc != 0x0030B698u) [[unlikely]] return; }
L_0030B698:
    st8((c.r[16].w[0] + 104u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 104u)));
    c.r[2].d[0] = c.r[17].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0030B6C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B6B8u); set32(c.r[5], 0u + 166u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x0030B6B8u) [[unlikely]] return; }
L_0030B6B8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0030B850; } }
    c.budget -= 1;
L_0030B6C8:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.r[3].d[0] = ld16((c.r[2].w[0] + 4u));
    c.r[2].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0030B720; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B6E4u); set32(c.r[5], 0u + 167u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x0030B6E4u) [[unlikely]] return; }
L_0030B6E4:
    set32(c.r[4], c.r[16].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B6F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x0030B6F0u) [[unlikely]] return; }
L_0030B6F0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 108u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0030B708; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 101u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0030B710; } }
L_0030B708:
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 101u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0030B710:
    st8((c.r[16].w[0] + 102u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0030B858; } }
    c.budget -= 1;
L_0030B720:
    c.r[2].d[0] = c.r[3].d[0] & 544ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0030B850; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B734u); set32(c.r[5], 0u + 165u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x0030B734u) [[unlikely]] return; }
L_0030B734:
    set32(c.r[4], c.r[16].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B740u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x0030B740u) [[unlikely]] return; }
L_0030B740:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 102u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 102u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0030B850; } }
L_0030B750:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B758u); set32(c.r[4], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B0B20u; return; } if (c.pc != 0x0030B758u) [[unlikely]] return; }
L_0030B758:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030B850; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 102u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 102u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0030B850; } }
L_0030B770:
    st8((c.r[16].w[0] + 102u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] + 18179u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    set32(c.r[6], c.r[16].w[0] + 4u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], c.r[7].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[7], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 12;
L_0030B7A0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[6], c.r[6].w[0] + 2u);
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[7], c.r[7].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030B7A0u | kUnwind; return; } goto L_0030B7A0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 4u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00BA0000u);  if (t) { goto L_0030B838; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 18112u);
    c.budget -= 3;
L_0030B7E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0030B7F0; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0030B7F0:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 6u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030B7E0u | kUnwind; return; } goto L_0030B7E0; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0030B838; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 100u)));
    set32(c.r[3], c.r[3].w[0] + 18180u);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 11;
L_0030B838:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B844u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 100u)));  if (depth < kMaxDepth) unit_006E(c, 255u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x0030B844u) [[unlikely]] return; }
L_0030B844:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0030B858; } }
    c.budget -= 1;
L_0030B850:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0030B858:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030B870:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B89Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x0030B89Cu) [[unlikely]] return; }
L_0030B89C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0030B8D0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00310000u);
    set32(c.r[3], 0u + 20u);
    set32(c.r[2], c.r[2].w[0] - 18112u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 11;
L_0030B8D0:
    st32((c.r[17].w[0] + 304u), c.r[16].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B8E0u); set32(c.r[16], c.r[17].w[0] + 304u);  if (depth < kMaxDepth) unit_006E(c, 226u, depth + 1u); else { c.pc = 0x002BA4F0u; return; } if (c.pc != 0x0030B8E0u) [[unlikely]] return; }
L_0030B8E0:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 18112u);
    c.budget -= 6;
L_0030B8F8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0030B910; } }
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0030B920; } }
L_0030B910:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 6u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030B8F8u | kUnwind; return; } goto L_0030B8F8; } }
L_0030B920:
    st32((c.r[16].w[0] + 12u), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0030B940:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 16152u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00308000u < 16384u) { entry = entries_0082[(t - 0x00308000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0030B960:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00310000u);
    set32(c.r[3], c.r[3].w[0] - 15760u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 168u), c.r[3].w[0]);  c.pc = t; return; }
L_0030B980:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030B9B8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 16144u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B9B4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030B9B4u) [[unlikely]] return; }
L_0030B9B4:
    c.budget -= 1;
L_0030B9B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0030B9D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 308u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 4u));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_0030BAA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BA00u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));  if (depth < kMaxDepth) unit_006E(c, 248u, depth + 1u); else { c.pc = 0x002BA7C0u; return; } if (c.pc != 0x0030BA00u) [[unlikely]] return; }
L_0030BA00:
    c.r[4].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[3], 0u - 1u);
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);  if (t) { goto L_0030BAA0; } }
    c.r[8].d[0] = c.r[4].d[0] << 56;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[3], c.r[8].w[0] << 1);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[5], c.r[5].w[0] + 18180u);
    set32(c.r[7], c.r[3].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + 18179u);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[3], 0u + 2u);
    set32(c.r[7], c.r[4].w[0] + c.r[7].w[0]);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 17;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0030BA68; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0030BA68:
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[8].w[0]));  if (t) { goto L_0030BA88; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0030BA90; } }
L_0030BA88:
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0030BA90:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BA9Cu); set32(c.r[5], 0u + 165u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x0030BA9Cu) [[unlikely]] return; }
L_0030BA9C:
    c.budget -= 1;
L_0030BAA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030BAC0:
    set32(c.r[3], c.r[4].w[0] + 304u);
    set32(c.r[4], ld32((c.r[4].w[0] + 308u)));
    c.r[5].d[0] = ld16((c.r[4].w[0] + 4u));
    c.r[4].d[0] = c.r[5].d[0] & 8192ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0030BB60; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 10u)));
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_0030BD70; } }
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - 18944u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00308000u < 16384u) { entry = entries_0082[(t - 0x00308000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0030BB00:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0030BD70; } }
    c.budget -= 1;
L_0030BB10:
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0030BD70; } }
    c.budget -= 1;
L_0030BB20:
    c.r[4].d[0] = c.r[6].d[0] & 1ull;
    st8((c.r[3].w[0] + 11u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], 0u + 6u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0030BD70; } }
    c.budget -= 1;
L_0030BB38:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 11u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0030BD70; } }
    c.budget -= 1;
L_0030BB48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 10u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0030BD70; } }
L_0030BB50:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0030BD70; } }
    c.budget -= 1;
L_0030BB60:
    c.r[4].d[0] = c.r[5].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0030BBF8; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 10u)));
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_0030BD70; } }
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - 18976u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00308000u < 16384u) { entry = entries_0082[(t - 0x00308000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0030BB98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 10u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0030BD70; } }
L_0030BBA0:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0030BD70; } }
    c.budget -= 1;
L_0030BBB0:
    c.r[4].d[0] = c.r[6].d[0] & 1ull;
    st8((c.r[3].w[0] + 11u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], 0u + 6u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0030BD70; } }
    c.budget -= 1;
L_0030BBC8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 11u)));
    c.r[4].d[0] = c.r[4].d[0] | 2ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0030BD70; } }
L_0030BBD8:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0030BD70; } }
    c.budget -= 1;
L_0030BBE8:
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0030BD70; } }
    c.budget -= 1;
L_0030BBF8:
    c.r[4].d[0] = c.r[5].d[0] & 2048ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0030BC70; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 10u)));
    set32(c.r[4], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 6u);  if (t) { goto L_0030BC60; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0030BC50; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_0030BC40; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0030BC38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030BD70; } }
L_0030BC38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 10u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0030BD70; } }
L_0030BC40:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0030BD70; } }
    c.budget -= 1;
L_0030BC50:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0030BD70; } }
    c.budget -= 1;
L_0030BC60:
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0030BD70; } }
    c.budget -= 1;
L_0030BC70:
    c.r[4].d[0] = c.r[5].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0030BCF0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 10u)));
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 6u);  if (t) { goto L_0030BCE0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0030BCD0; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0030BCC0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0030BCB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030BD70; } }
L_0030BCB0:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0030BD70; } }
    c.budget -= 1;
L_0030BCC0:
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0030BD70; } }
    c.budget -= 1;
L_0030BCD0:
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0030BD70; } }
    c.budget -= 1;
L_0030BCE0:
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0030BD70; } }
    c.budget -= 1;
L_0030BCF0:
    c.r[4].d[0] = c.r[5].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0030BD08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 10u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0030BD70; } }
    c.budget -= 1;
L_0030BD08:
    c.r[4].d[0] = c.r[5].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0030BD20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0030BD70; } }
    c.budget -= 1;
L_0030BD20:
    c.r[4].d[0] = c.r[5].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_0030BD38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0030BD70; } }
    c.budget -= 1;
L_0030BD38:
    c.r[4].d[0] = c.r[5].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_0030BD50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0030BD70; } }
    c.budget -= 1;
L_0030BD50:
    c.r[4].d[0] = c.r[5].d[0] & 32768ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0030BD70; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 10u)));
    set32(c.r[4], 0u + 6u);
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    st8((c.r[3].w[0] + 11u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[3].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 5;
L_0030BD70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0030BD80:
    set32(c.r[3], c.r[4].w[0] + 304u);
    set32(c.r[4], ld32((c.r[4].w[0] + 308u)));
    c.r[5].d[0] = ld16((c.r[4].w[0] + 4u));
    c.r[4].d[0] = c.r[5].d[0] & 8192ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0030BDF0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 10u)));
    set32(c.r[4], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 3u);  if (t) { goto L_0030BDE0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0030BDC8; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0030BDC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030BF08; } }
    c.budget -= 1;
L_0030BDC8:
    c.r[4].d[0] = c.r[5].d[0] & 1ull;
    st8((c.r[3].w[0] + 11u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], 0u + 6u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0030BF08; } }
    c.budget -= 1;
L_0030BDE0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 11u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0030BF08; } }
    c.budget -= 1;
L_0030BDF0:
    c.r[4].d[0] = c.r[5].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0030BE50; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 10u)));
    set32(c.r[4], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_0030BE40; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0030BE28; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0030BE28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030BF08; } }
    c.budget -= 1;
L_0030BE28:
    c.r[4].d[0] = c.r[5].d[0] & 1ull;
    st8((c.r[3].w[0] + 11u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], 0u + 6u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0030BF08; } }
    c.budget -= 1;
L_0030BE40:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 11u)));
    c.r[4].d[0] = c.r[4].d[0] | 2ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0030BF08; } }
L_0030BE50:
    c.r[4].d[0] = c.r[5].d[0] & 2048ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0030BE98; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 10u)));
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_0030BE88; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0030BE80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030BF08; } }
    c.budget -= 1;
L_0030BE80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 10u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0030BF08; } }
L_0030BE88:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0030BF08; } }
    c.budget -= 1;
L_0030BE98:
    c.r[4].d[0] = c.r[5].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0030BEE8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 10u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0030BED8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0030BEC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030BF08; } }
    c.budget -= 1;
L_0030BEC8:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0030BF08; } }
    c.budget -= 1;
L_0030BED8:
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0030BF08; } }
    c.budget -= 1;
L_0030BEE8:
    c.r[4].d[0] = c.r[5].d[0] & 32768ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0030BF08; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 10u)));
    set32(c.r[4], 0u + 6u);
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    st8((c.r[3].w[0] + 11u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[3].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 5;
L_0030BF08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0030BF10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 314u)));
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18112u)));
    c.budget -= 13;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[17], c.r[18].w[0] + 304u);  if (t) { goto L_0030BF58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BF4Cu);  if (depth < kMaxDepth) unit_0082(c, 403u, depth + 1u); else { c.pc = 0x0030BAC0u; return; } if (c.pc != 0x0030BF4Cu) [[unlikely]] return; }
L_0030BF4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030BFC0; } }
    c.budget -= 1;
L_0030BF58:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0030BFC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BF6Cu);  if (depth < kMaxDepth) unit_0082(c, 416u, depth + 1u); else { c.pc = 0x0030BD80u; return; } if (c.pc != 0x0030BF6Cu) [[unlikely]] return; }
L_0030BF6C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[3].d[0] = c.r[16].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0030BFC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BF88u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));  if (depth < kMaxDepth) unit_006E(c, 251u, depth + 1u); else { c.pc = 0x002BA910u; return; } if (c.pc != 0x0030BF88u) [[unlikely]] return; }
L_0030BF88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030BFC0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[3].d[0] = c.r[2].d[0] & 2ull;
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BFB4u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));  if (depth < kMaxDepth) unit_006E(c, 251u, depth + 1u); else { c.pc = 0x002BA910u; return; } if (c.pc != 0x0030BFB4u) [[unlikely]] return; }
L_0030BFB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030BFC0; } }
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 1;
L_0030BFC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18112u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);  if (t) { goto L_0030BFF8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18114u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_0083(c, 1u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BFECu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));  if (depth < kMaxDepth) unit_006E(c, 289u, depth + 1u); else { c.pc = 0x002BB250u; return; } if (c.pc != 0x0030BFECu) [[unlikely]] return; }
L_0030BFEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0083(c, 1u, depth); } }
    c.budget -= 1;
L_0030BFF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030C000u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));  if (depth < kMaxDepth) unit_006E(c, 289u, depth + 1u); else { c.pc = 0x002BB250u; return; } if (c.pc != 0x0030C000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0083(c, 1u, depth);
}

}
