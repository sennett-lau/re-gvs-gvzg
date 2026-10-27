#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0097[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 8,
    0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0,
    12, 0, 13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0,
    0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48,
    0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    50, 0, 0, 0, 0, 0, 51, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0,
    62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 65, 0, 0, 66, 0, 0,
    0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 86, 0, 0, 87, 0, 88, 0, 0,
    0, 0, 0, 0, 89, 0, 90, 0, 0, 0, 91, 0, 92, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 113,
    0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117,
    0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0,
    0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 127, 0, 0, 0, 128, 0, 0, 0,
    0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0,
    134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0,
    140, 0, 141, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 145,
    0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 150, 0, 0, 151, 0, 0, 0, 0, 0, 0,
    152, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 156, 0, 157, 0, 158, 0, 159, 0,
    160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 166, 0, 167, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    171, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0,
    177, 0, 178, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 182, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0, 0, 0, 186, 0, 187, 0, 188, 0, 189, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 196,
    0, 197, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 200, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 204, 0, 205, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0, 211, 0, 212, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 215, 0, 216, 0, 217, 0, 0, 0, 0, 0,
    218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    222, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0,
    0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 231, 0, 232, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 234, 0, 235, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0,
    241, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 0, 246, 0, 0, 0,
    0, 0, 0, 0, 247, 0, 248, 0, 249, 0, 250, 0, 251, 0, 252, 0, 253, 0, 254, 0, 0, 255, 0, 256, 0, 257, 0, 0, 258, 0, 0, 0,
    0, 0, 0, 259, 0, 260, 0, 261, 0, 262, 0, 263, 0, 264, 0, 265, 0, 266, 0, 267, 0, 0, 268, 0, 269, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    272, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 275, 0, 0, 0, 0, 0,
    0, 0, 0, 276, 0, 277, 0, 0, 278, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 281, 0, 282,
    0, 0, 0, 283, 0, 284, 0, 0, 285, 0, 286, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0,
    0, 298, 0, 299, 0, 0, 300, 0, 301, 0, 0, 0, 0, 0, 0, 0, 302, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 306, 0,
    0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 311, 0, 312,
    0, 0, 0, 0, 313, 0, 314, 0, 315, 0, 316, 0, 317, 0, 318, 0, 319, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 321, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 325, 0, 326, 0, 327, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 330, 0, 331, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0,
    334, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 339, 0,
    0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 346, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 351, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 354, 0,
    0, 0, 0, 0, 0, 0, 355, 0, 356, 0, 357, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 359, 0, 360, 0, 361, 0, 362, 0, 363, 0, 0, 364, 0, 365, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 367, 0, 368, 0, 369, 0,
    370, 0, 371, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 377, 0, 0, 0, 378, 0, 379, 0, 380,
    0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0,
    0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 386, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    388, 0, 389, 0, 0, 0, 0, 0, 390, 0, 0, 0, 391, 0, 392, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 396, 0, 0, 0, 0, 0, 0, 0, 397, 0, 398, 0, 399, 0, 400, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 402, 0, 0, 403, 0, 404, 0, 0, 0, 0, 0, 0, 0, 405, 0, 406, 0, 407, 0, 408, 0,
    0, 0, 0, 0, 409, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 414, 0, 415, 0, 0, 0, 0,
    416, 0, 0, 0, 0, 0, 0, 417, 0, 418, 0, 419, 0, 420, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 425, 0, 426, 0, 427, 0, 0, 0, 0, 0, 0, 428, 429, 0, 430, 0, 431, 0,
    0, 0, 0, 0, 0, 432, 433, 0, 434, 0, 435, 0, 0, 0, 0, 0, 0, 436, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 440, 0, 0, 0, 0, 0, 0, 0, 441, 0, 442, 0, 443, 0, 444, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 445, 0, 446, 0, 0, 0, 0, 0, 0, 0, 447, 0, 448, 0, 449, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 455, 0, 456, 0, 457, 0, 0, 0, 0, 0, 0, 458, 459, 0, 460, 0,
    0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 463, 0, 0, 0, 0, 0, 0, 0, 464, 0,
    465, 0, 466, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 469, 0, 0, 0, 470, 0, 471, 0, 472, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 475, 0, 476, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 481, 0, 0, 0, 0, 0, 0, 0, 482, 0, 483, 0, 484, 0, 485, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 487, 0, 0, 488, 0, 489, 0, 0, 490, 0, 491, 0, 492, 0, 493, 0, 494, 0, 495, 0, 496, 0,
    0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 500, 0,
    501, 0, 0, 0, 502, 0, 503, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 506, 0, 0, 0, 0, 507, 0, 0, 0, 0, 508, 0, 0, 0, 509, 0, 510, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0,
    0, 0, 0, 0, 513, 0, 514, 0, 0, 0, 0, 0, 0, 515, 516, 0, 517, 0, 518, 0, 519, 0, 520, 0, 521, 0, 522, 0, 0, 0, 0, 0,
    523, 0, 0, 0, 0, 0, 0, 0, 524, 0, 525, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 529, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 532, 0, 0, 0,
    0, 0, 533, 0, 534, 0, 535, 0, 536, 0, 0, 0, 0, 0, 0, 537, 538, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 541, 0, 0, 0, 0, 0, 0, 0, 542, 0, 543, 0, 544, 0, 545, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 546, 0, 0, 547, 0, 548, 0, 549, 0, 0, 550, 0, 551, 0, 552, 0, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 558, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 0, 0, 560, 0, 0, 0, 0, 0, 561, 0, 562, 0, 563, 0, 564, 0, 565, 0, 566, 0,
    0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 568, 0, 569, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0,
    0, 0, 571, 0, 0, 0, 572, 0, 573, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 575,
};

void unit_0097(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0035C000;
    case 2u: goto L_0035C010;
    case 3u: goto L_0035C02C;
    case 4u: goto L_0035C034;
    case 5u: goto L_0035C09C;
    case 6u: goto L_0035C0C8;
    case 7u: goto L_0035C0E0;
    case 8u: goto L_0035C0FC;
    case 9u: goto L_0035C104;
    case 10u: goto L_0035C140;
    case 11u: goto L_0035C160;
    case 12u: goto L_0035C180;
    case 13u: goto L_0035C188;
    case 14u: goto L_0035C1A8;
    case 15u: goto L_0035C1D0;
    case 16u: goto L_0035C1F0;
    case 17u: goto L_0035C230;
    case 18u: goto L_0035C2B0;
    case 19u: goto L_0035C2EC;
    case 20u: goto L_0035C328;
    case 21u: goto L_0035C348;
    case 22u: goto L_0035C358;
    case 23u: goto L_0035C48C;
    case 24u: goto L_0035C524;
    case 25u: goto L_0035C5C0;
    case 26u: goto L_0035C5D4;
    case 27u: goto L_0035C620;
    case 28u: goto L_0035C690;
    case 29u: goto L_0035C6C8;
    case 30u: goto L_0035C7A0;
    case 31u: goto L_0035C7D8;
    case 32u: goto L_0035C8A0;
    case 33u: goto L_0035C8B8;
    case 34u: goto L_0035C990;
    case 35u: goto L_0035C9A8;
    case 36u: goto L_0035C9C8;
    case 37u: goto L_0035C9E0;
    case 38u: goto L_0035CA30;
    case 39u: goto L_0035CA38;
    case 40u: goto L_0035CA68;
    case 41u: goto L_0035CA74;
    case 42u: goto L_0035CA98;
    case 43u: goto L_0035CAC0;
    case 44u: goto L_0035CAF4;
    case 45u: goto L_0035CB40;
    case 46u: goto L_0035CB54;
    case 47u: goto L_0035CB60;
    case 48u: goto L_0035CB7C;
    case 49u: goto L_0035CBA0;
    case 50u: goto L_0035CC00;
    case 51u: goto L_0035CC18;
    case 52u: goto L_0035CC20;
    case 53u: goto L_0035CC50;
    case 54u: goto L_0035CC98;
    case 55u: goto L_0035CCB8;
    case 56u: goto L_0035CCF0;
    case 57u: goto L_0035CD28;
    case 58u: goto L_0035CD40;
    case 59u: goto L_0035CDD0;
    case 60u: goto L_0035CDE0;
    case 61u: goto L_0035CDF0;
    case 62u: goto L_0035CE00;
    case 63u: goto L_0035CE1C;
    case 64u: goto L_0035CE60;
    case 65u: goto L_0035CE68;
    case 66u: goto L_0035CE74;
    case 67u: goto L_0035CE88;
    case 68u: goto L_0035CE98;
    case 69u: goto L_0035CEC0;
    case 70u: goto L_0035CED4;
    case 71u: goto L_0035CF00;
    case 72u: goto L_0035CF30;
    case 73u: goto L_0035CF38;
    case 74u: goto L_0035CF40;
    case 75u: goto L_0035CF60;
    case 76u: goto L_0035CF90;
    case 77u: goto L_0035D0A4;
    case 78u: goto L_0035D0D0;
    case 79u: goto L_0035D130;
    case 80u: goto L_0035D228;
    case 81u: goto L_0035D248;
    case 82u: goto L_0035D250;
    case 83u: goto L_0035D268;
    case 84u: goto L_0035D2D0;
    case 85u: goto L_0035D2D8;
    case 86u: goto L_0035D2E0;
    case 87u: goto L_0035D2EC;
    case 88u: goto L_0035D2F4;
    case 89u: goto L_0035D310;
    case 90u: goto L_0035D318;
    case 91u: goto L_0035D328;
    case 92u: goto L_0035D330;
    case 93u: goto L_0035D338;
    case 94u: goto L_0035D350;
    case 95u: goto L_0035D364;
    case 96u: goto L_0035D3F4;
    case 97u: goto L_0035D4A0;
    case 98u: goto L_0035D4B0;
    case 99u: goto L_0035D4C4;
    case 100u: goto L_0035D4D0;
    case 101u: goto L_0035D4E0;
    case 102u: goto L_0035D540;
    case 103u: goto L_0035D588;
    case 104u: goto L_0035D5D0;
    case 105u: goto L_0035D624;
    case 106u: goto L_0035D668;
    case 107u: goto L_0035D6B0;
    case 108u: goto L_0035D6EC;
    case 109u: goto L_0035D720;
    case 110u: goto L_0035D738;
    case 111u: goto L_0035D748;
    case 112u: goto L_0035D76C;
    case 113u: goto L_0035D77C;
    case 114u: goto L_0035D78C;
    case 115u: goto L_0035D79C;
    case 116u: goto L_0035D7C0;
    case 117u: goto L_0035D7FC;
    case 118u: goto L_0035D804;
    case 119u: goto L_0035D80C;
    case 120u: goto L_0035D850;
    case 121u: goto L_0035D860;
    case 122u: goto L_0035D884;
    case 123u: goto L_0035D898;
    case 124u: goto L_0035D8B0;
    case 125u: goto L_0035D8D0;
    case 126u: goto L_0035D8D8;
    case 127u: goto L_0035D8E0;
    case 128u: goto L_0035D8F0;
    case 129u: goto L_0035D90C;
    case 130u: goto L_0035D920;
    case 131u: goto L_0035D940;
    case 132u: goto L_0035D958;
    case 133u: goto L_0035D970;
    case 134u: goto L_0035D980;
    case 135u: goto L_0035D998;
    case 136u: goto L_0035D9B4;
    case 137u: goto L_0035D9BC;
    case 138u: goto L_0035D9D0;
    case 139u: goto L_0035D9EC;
    case 140u: goto L_0035DA00;
    case 141u: goto L_0035DA08;
    case 142u: goto L_0035DA10;
    case 143u: goto L_0035DA28;
    case 144u: goto L_0035DA74;
    case 145u: goto L_0035DA7C;
    case 146u: goto L_0035DA94;
    case 147u: goto L_0035DAA0;
    case 148u: goto L_0035DAB4;
    case 149u: goto L_0035DAD0;
    case 150u: goto L_0035DAD8;
    case 151u: goto L_0035DAE4;
    case 152u: goto L_0035DB00;
    case 153u: goto L_0035DB08;
    case 154u: goto L_0035DB44;
    case 155u: goto L_0035DB58;
    case 156u: goto L_0035DB60;
    case 157u: goto L_0035DB68;
    case 158u: goto L_0035DB70;
    case 159u: goto L_0035DB78;
    case 160u: goto L_0035DB80;
    case 161u: goto L_0035DB98;
    case 162u: goto L_0035DBB8;
    case 163u: goto L_0035DBF4;
    case 164u: goto L_0035DC2C;
    case 165u: goto L_0035DC3C;
    case 166u: goto L_0035DC44;
    case 167u: goto L_0035DC4C;
    case 168u: goto L_0035DC54;
    case 169u: goto L_0035DC98;
    case 170u: goto L_0035DCC4;
    case 171u: goto L_0035DD00;
    case 172u: goto L_0035DD0C;
    case 173u: goto L_0035DD24;
    case 174u: goto L_0035DD54;
    case 175u: goto L_0035DD68;
    case 176u: goto L_0035DD78;
    case 177u: goto L_0035DD80;
    case 178u: goto L_0035DD88;
    case 179u: goto L_0035DD90;
    case 180u: goto L_0035DDA0;
    case 181u: goto L_0035DDC0;
    case 182u: goto L_0035DDC8;
    case 183u: goto L_0035DDD0;
    case 184u: goto L_0035DE1C;
    case 185u: goto L_0035DE28;
    case 186u: goto L_0035DE38;
    case 187u: goto L_0035DE40;
    case 188u: goto L_0035DE48;
    case 189u: goto L_0035DE50;
    case 190u: goto L_0035DE58;
    case 191u: goto L_0035DE70;
    case 192u: goto L_0035DEC4;
    case 193u: goto L_0035DECC;
    case 194u: goto L_0035DED4;
    case 195u: goto L_0035DEF4;
    case 196u: goto L_0035DEFC;
    case 197u: goto L_0035DF04;
    case 198u: goto L_0035DF14;
    case 199u: goto L_0035DF28;
    case 200u: goto L_0035DF30;
    case 201u: goto L_0035DF38;
    case 202u: goto L_0035DF58;
    case 203u: goto L_0035DF60;
    case 204u: goto L_0035DF68;
    case 205u: goto L_0035DF70;
    case 206u: goto L_0035DF98;
    case 207u: goto L_0035DFB0;
    case 208u: goto L_0035DFC0;
    case 209u: goto L_0035DFD8;
    case 210u: goto L_0035DFE8;
    case 211u: goto L_0035DFF0;
    case 212u: goto L_0035DFF8;
    case 213u: goto L_0035E03C;
    case 214u: goto L_0035E050;
    case 215u: goto L_0035E058;
    case 216u: goto L_0035E060;
    case 217u: goto L_0035E068;
    case 218u: goto L_0035E080;
    case 219u: goto L_0035E0A8;
    case 220u: goto L_0035E0B4;
    case 221u: goto L_0035E0CC;
    case 222u: goto L_0035E100;
    case 223u: goto L_0035E110;
    case 224u: goto L_0035E138;
    case 225u: goto L_0035E144;
    case 226u: goto L_0035E15C;
    case 227u: goto L_0035E170;
    case 228u: goto L_0035E18C;
    case 229u: goto L_0035E1A0;
    case 230u: goto L_0035E1BC;
    case 231u: goto L_0035E1C4;
    case 232u: goto L_0035E1CC;
    case 233u: goto L_0035E1D4;
    case 234u: goto L_0035E214;
    case 235u: goto L_0035E21C;
    case 236u: goto L_0035E224;
    case 237u: goto L_0035E238;
    case 238u: goto L_0035E254;
    case 239u: goto L_0035E268;
    case 240u: goto L_0035E278;
    case 241u: goto L_0035E280;
    case 242u: goto L_0035E28C;
    case 243u: goto L_0035E2C0;
    case 244u: goto L_0035E2C8;
    case 245u: goto L_0035E2E8;
    case 246u: goto L_0035E2F0;
    case 247u: goto L_0035E310;
    case 248u: goto L_0035E318;
    case 249u: goto L_0035E320;
    case 250u: goto L_0035E328;
    case 251u: goto L_0035E330;
    case 252u: goto L_0035E338;
    case 253u: goto L_0035E340;
    case 254u: goto L_0035E348;
    case 255u: goto L_0035E354;
    case 256u: goto L_0035E35C;
    case 257u: goto L_0035E364;
    case 258u: goto L_0035E370;
    case 259u: goto L_0035E38C;
    case 260u: goto L_0035E394;
    case 261u: goto L_0035E39C;
    case 262u: goto L_0035E3A4;
    case 263u: goto L_0035E3AC;
    case 264u: goto L_0035E3B4;
    case 265u: goto L_0035E3BC;
    case 266u: goto L_0035E3C4;
    case 267u: goto L_0035E3CC;
    case 268u: goto L_0035E3D8;
    case 269u: goto L_0035E3E0;
    case 270u: goto L_0035E420;
    case 271u: goto L_0035E458;
    case 272u: goto L_0035E480;
    case 273u: goto L_0035E4A0;
    case 274u: goto L_0035E4E0;
    case 275u: goto L_0035E4E8;
    case 276u: goto L_0035E50C;
    case 277u: goto L_0035E514;
    case 278u: goto L_0035E520;
    case 279u: goto L_0035E528;
    case 280u: goto L_0035E56C;
    case 281u: goto L_0035E574;
    case 282u: goto L_0035E57C;
    case 283u: goto L_0035E58C;
    case 284u: goto L_0035E594;
    case 285u: goto L_0035E5A0;
    case 286u: goto L_0035E5A8;
    case 287u: goto L_0035E5B0;
    case 288u: goto L_0035E5C8;
    case 289u: goto L_0035E63C;
    case 290u: goto L_0035E6AC;
    case 291u: goto L_0035E6C4;
    case 292u: goto L_0035E6CC;
    case 293u: goto L_0035E6DC;
    case 294u: goto L_0035E728;
    case 295u: goto L_0035E750;
    case 296u: goto L_0035E758;
    case 297u: goto L_0035E770;
    case 298u: goto L_0035E784;
    case 299u: goto L_0035E78C;
    case 300u: goto L_0035E798;
    case 301u: goto L_0035E7A0;
    case 302u: goto L_0035E7C0;
    case 303u: goto L_0035E7C8;
    case 304u: goto L_0035E7F0;
    case 305u: goto L_0035E870;
    case 306u: goto L_0035E878;
    case 307u: goto L_0035E894;
    case 308u: goto L_0035E8A8;
    case 309u: goto L_0035E8B8;
    case 310u: goto L_0035E8E8;
    case 311u: goto L_0035E8F4;
    case 312u: goto L_0035E8FC;
    case 313u: goto L_0035E910;
    case 314u: goto L_0035E918;
    case 315u: goto L_0035E920;
    case 316u: goto L_0035E928;
    case 317u: goto L_0035E930;
    case 318u: goto L_0035E938;
    case 319u: goto L_0035E940;
    case 320u: goto L_0035E958;
    case 321u: goto L_0035E978;
    case 322u: goto L_0035E9AC;
    case 323u: goto L_0035E9C0;
    case 324u: goto L_0035E9D0;
    case 325u: goto L_0035E9D8;
    case 326u: goto L_0035E9E0;
    case 327u: goto L_0035E9E8;
    case 328u: goto L_0035EA28;
    case 329u: goto L_0035EA38;
    case 330u: goto L_0035EA40;
    case 331u: goto L_0035EA48;
    case 332u: goto L_0035EA50;
    case 333u: goto L_0035EA78;
    case 334u: goto L_0035EA80;
    case 335u: goto L_0035EA98;
    case 336u: goto L_0035EAB0;
    case 337u: goto L_0035EAC4;
    case 338u: goto L_0035EAD8;
    case 339u: goto L_0035EAF8;
    case 340u: goto L_0035EB18;
    case 341u: goto L_0035EB28;
    case 342u: goto L_0035EB30;
    case 343u: goto L_0035EB70;
    case 344u: goto L_0035EBA4;
    case 345u: goto L_0035EBBC;
    case 346u: goto L_0035EBD0;
    case 347u: goto L_0035EBD8;
    case 348u: goto L_0035EC14;
    case 349u: goto L_0035EC3C;
    case 350u: goto L_0035EC5C;
    case 351u: goto L_0035EC78;
    case 352u: goto L_0035ECB0;
    case 353u: goto L_0035ECF0;
    case 354u: goto L_0035ECF8;
    case 355u: goto L_0035ED18;
    case 356u: goto L_0035ED20;
    case 357u: goto L_0035ED28;
    case 358u: goto L_0035ED30;
    case 359u: goto L_0035ED88;
    case 360u: goto L_0035ED90;
    case 361u: goto L_0035ED98;
    case 362u: goto L_0035EDA0;
    case 363u: goto L_0035EDA8;
    case 364u: goto L_0035EDB4;
    case 365u: goto L_0035EDBC;
    case 366u: goto L_0035EDDC;
    case 367u: goto L_0035EDE8;
    case 368u: goto L_0035EDF0;
    case 369u: goto L_0035EDF8;
    case 370u: goto L_0035EE00;
    case 371u: goto L_0035EE08;
    case 372u: goto L_0035EE10;
    case 373u: goto L_0035EE28;
    case 374u: goto L_0035EE3C;
    case 375u: goto L_0035EE8C;
    case 376u: goto L_0035EED4;
    case 377u: goto L_0035EEDC;
    case 378u: goto L_0035EEEC;
    case 379u: goto L_0035EEF4;
    case 380u: goto L_0035EEFC;
    case 381u: goto L_0035EF04;
    case 382u: goto L_0035EF50;
    case 383u: goto L_0035EF70;
    case 384u: goto L_0035EF94;
    case 385u: goto L_0035EFBC;
    case 386u: goto L_0035EFC4;
    case 387u: goto L_0035EFD8;
    case 388u: goto L_0035F000;
    case 389u: goto L_0035F008;
    case 390u: goto L_0035F020;
    case 391u: goto L_0035F030;
    case 392u: goto L_0035F038;
    case 393u: goto L_0035F050;
    case 394u: goto L_0035F070;
    case 395u: goto L_0035F0B0;
    case 396u: goto L_0035F0B8;
    case 397u: goto L_0035F0D8;
    case 398u: goto L_0035F0E0;
    case 399u: goto L_0035F0E8;
    case 400u: goto L_0035F0F0;
    case 401u: goto L_0035F124;
    case 402u: goto L_0035F12C;
    case 403u: goto L_0035F138;
    case 404u: goto L_0035F140;
    case 405u: goto L_0035F160;
    case 406u: goto L_0035F168;
    case 407u: goto L_0035F170;
    case 408u: goto L_0035F178;
    case 409u: goto L_0035F190;
    case 410u: goto L_0035F1A4;
    case 411u: goto L_0035F1F4;
    case 412u: goto L_0035F230;
    case 413u: goto L_0035F25C;
    case 414u: goto L_0035F264;
    case 415u: goto L_0035F26C;
    case 416u: goto L_0035F280;
    case 417u: goto L_0035F29C;
    case 418u: goto L_0035F2A4;
    case 419u: goto L_0035F2AC;
    case 420u: goto L_0035F2B4;
    case 421u: goto L_0035F2D0;
    case 422u: goto L_0035F2FC;
    case 423u: goto L_0035F370;
    case 424u: goto L_0035F3A4;
    case 425u: goto L_0035F3B8;
    case 426u: goto L_0035F3C0;
    case 427u: goto L_0035F3C8;
    case 428u: goto L_0035F3E4;
    case 429u: goto L_0035F3E8;
    case 430u: goto L_0035F3F0;
    case 431u: goto L_0035F3F8;
    case 432u: goto L_0035F414;
    case 433u: goto L_0035F418;
    case 434u: goto L_0035F420;
    case 435u: goto L_0035F428;
    case 436u: goto L_0035F444;
    case 437u: goto L_0035F448;
    case 438u: goto L_0035F470;
    case 439u: goto L_0035F4A8;
    case 440u: goto L_0035F4B0;
    case 441u: goto L_0035F4D0;
    case 442u: goto L_0035F4D8;
    case 443u: goto L_0035F4E0;
    case 444u: goto L_0035F4E8;
    case 445u: goto L_0035F510;
    case 446u: goto L_0035F518;
    case 447u: goto L_0035F538;
    case 448u: goto L_0035F540;
    case 449u: goto L_0035F548;
    case 450u: goto L_0035F550;
    case 451u: goto L_0035F5B4;
    case 452u: goto L_0035F5E0;
    case 453u: goto L_0035F60C;
    case 454u: goto L_0035F630;
    case 455u: goto L_0035F640;
    case 456u: goto L_0035F648;
    case 457u: goto L_0035F650;
    case 458u: goto L_0035F66C;
    case 459u: goto L_0035F670;
    case 460u: goto L_0035F678;
    case 461u: goto L_0035F690;
    case 462u: goto L_0035F6D0;
    case 463u: goto L_0035F6D8;
    case 464u: goto L_0035F6F8;
    case 465u: goto L_0035F700;
    case 466u: goto L_0035F708;
    case 467u: goto L_0035F710;
    case 468u: goto L_0035F73C;
    case 469u: goto L_0035F750;
    case 470u: goto L_0035F760;
    case 471u: goto L_0035F768;
    case 472u: goto L_0035F770;
    case 473u: goto L_0035F7A0;
    case 474u: goto L_0035F7C0;
    case 475u: goto L_0035F7D8;
    case 476u: goto L_0035F7E0;
    case 477u: goto L_0035F808;
    case 478u: goto L_0035F838;
    case 479u: goto L_0035F860;
    case 480u: goto L_0035F8A0;
    case 481u: goto L_0035F8A8;
    case 482u: goto L_0035F8C8;
    case 483u: goto L_0035F8D0;
    case 484u: goto L_0035F8D8;
    case 485u: goto L_0035F8E0;
    case 486u: goto L_0035F920;
    case 487u: goto L_0035F928;
    case 488u: goto L_0035F934;
    case 489u: goto L_0035F93C;
    case 490u: goto L_0035F948;
    case 491u: goto L_0035F950;
    case 492u: goto L_0035F958;
    case 493u: goto L_0035F960;
    case 494u: goto L_0035F968;
    case 495u: goto L_0035F970;
    case 496u: goto L_0035F978;
    case 497u: goto L_0035F990;
    case 498u: goto L_0035F9B0;
    case 499u: goto L_0035F9E4;
    case 500u: goto L_0035F9F8;
    case 501u: goto L_0035FA00;
    case 502u: goto L_0035FA10;
    case 503u: goto L_0035FA18;
    case 504u: goto L_0035FA20;
    case 505u: goto L_0035FA58;
    case 506u: goto L_0035FA88;
    case 507u: goto L_0035FA9C;
    case 508u: goto L_0035FAB0;
    case 509u: goto L_0035FAC0;
    case 510u: goto L_0035FAC8;
    case 511u: goto L_0035FAD0;
    case 512u: goto L_0035FAF4;
    case 513u: goto L_0035FB10;
    case 514u: goto L_0035FB18;
    case 515u: goto L_0035FB34;
    case 516u: goto L_0035FB38;
    case 517u: goto L_0035FB40;
    case 518u: goto L_0035FB48;
    case 519u: goto L_0035FB50;
    case 520u: goto L_0035FB58;
    case 521u: goto L_0035FB60;
    case 522u: goto L_0035FB68;
    case 523u: goto L_0035FB80;
    case 524u: goto L_0035FBA0;
    case 525u: goto L_0035FBA8;
    case 526u: goto L_0035FBBC;
    case 527u: goto L_0035FBF4;
    case 528u: goto L_0035FC20;
    case 529u: goto L_0035FC28;
    case 530u: goto L_0035FC30;
    case 531u: goto L_0035FC60;
    case 532u: goto L_0035FC70;
    case 533u: goto L_0035FC88;
    case 534u: goto L_0035FC90;
    case 535u: goto L_0035FC98;
    case 536u: goto L_0035FCA0;
    case 537u: goto L_0035FCBC;
    case 538u: goto L_0035FCC0;
    case 539u: goto L_0035FCE0;
    case 540u: goto L_0035FD20;
    case 541u: goto L_0035FD28;
    case 542u: goto L_0035FD48;
    case 543u: goto L_0035FD50;
    case 544u: goto L_0035FD58;
    case 545u: goto L_0035FD60;
    case 546u: goto L_0035FD98;
    case 547u: goto L_0035FDA4;
    case 548u: goto L_0035FDAC;
    case 549u: goto L_0035FDB4;
    case 550u: goto L_0035FDC0;
    case 551u: goto L_0035FDC8;
    case 552u: goto L_0035FDD0;
    case 553u: goto L_0035FDE8;
    case 554u: goto L_0035FE18;
    case 555u: goto L_0035FE2C;
    case 556u: goto L_0035FE4C;
    case 557u: goto L_0035FE70;
    case 558u: goto L_0035FE78;
    case 559u: goto L_0035FEA8;
    case 560u: goto L_0035FEB8;
    case 561u: goto L_0035FED0;
    case 562u: goto L_0035FED8;
    case 563u: goto L_0035FEE0;
    case 564u: goto L_0035FEE8;
    case 565u: goto L_0035FEF0;
    case 566u: goto L_0035FEF8;
    case 567u: goto L_0035FF10;
    case 568u: goto L_0035FF28;
    case 569u: goto L_0035FF30;
    case 570u: goto L_0035FF6C;
    case 571u: goto L_0035FF88;
    case 572u: goto L_0035FF98;
    case 573u: goto L_0035FFA0;
    case 574u: goto L_0035FFA8;
    case 575u: goto L_0035FFFC;
    default: bad_entry(c, 0x0035C000u); return;
    }
L_0035C000:
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 1;
    c.pc = 0x0035C004u; [[clang::musttail]] return dispatch(c, 0u, depth);
L_0035C010:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C02Cu); set32(c.r[16], c.r[17].w[0] + 304u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0035C02Cu) [[unlikely]] return; }
L_0035C02C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C034u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x0035C034u) [[unlikely]] return; }
L_0035C034:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 268u)));
    c.r[2].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));  if (t) { goto L_0035C054; } }
    c.r[2].d[0] = c.r[3].d[0] & 31ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[2].w[0] + 192u);  if (t) { goto L_0035C064; } }
L_0035C054:
    c.r[3].d[0] = c.r[3].d[0] & 31ull;
    set32(c.r[2], 0u + 255u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[4], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 4;
L_0035C064:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 2599u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[3], c.r[4].w[0] << 16);  if (t) { goto L_0035C0A8; } }
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 4u));
    set32(c.r[7], c.r[2].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C09Cu); set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);  if (depth < kMaxDepth) unit_0076(c, 22u, depth + 1u); else { c.pc = 0x002D83F0u; return; } if (c.pc != 0x0035C09Cu) [[unlikely]] return; }
L_0035C09C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C0C8; } }
    c.budget -= 1;
L_0035C0A8:
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 4u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C0C8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0035C0C8u) [[unlikely]] return; }
L_0035C0C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0035C0E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C0FCu); set32(c.r[16], c.r[17].w[0] + 304u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0035C0FCu) [[unlikely]] return; }
L_0035C0FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C104u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x0035C104u) [[unlikely]] return; }
L_0035C104:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 2599u));
    set32(c.r[5], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);  if (t) { goto L_0035C134; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);  if (t) { goto L_0035C138; } }
L_0035C134:
    c.r[6].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 1;
L_0035C138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C140u); c.r[5].d[0] = ld8((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_0076(c, 22u, depth + 1u); else { c.pc = 0x002D83F0u; return; } if (c.pc != 0x0035C140u) [[unlikely]] return; }
L_0035C140:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0035C160:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C180u); set32(c.r[16], c.r[17].w[0] + 304u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0035C180u) [[unlikely]] return; }
L_0035C180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C188u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x0035C188u) [[unlikely]] return; }
L_0035C188:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.f[14] = c.r[2].w[0];
    c.f[12] = ld32((c.r[17].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    c.f[13] = ld32((c.r[17].w[0] + 116u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C1A8u); set32(c.r[17], c.r[2].w[0] << 24);  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0035C1A8u) [[unlikely]] return; }
L_0035C1A8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[18].w[0] << 4);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 4u));
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[4], c.r[2].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A00000u);
    c.r[2].d[0] = c.r[2].d[0] | 41215ull;
    c.r[6].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C1D0u); set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);  if (depth < kMaxDepth) unit_0076(c, 22u, depth + 1u); else { c.pc = 0x002D83F0u; return; } if (c.pc != 0x0035C1D0u) [[unlikely]] return; }
L_0035C1D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0035C1F0:
    set32(c.r[7], ld32((c.r[28].w[0] - 23068u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0xC3A50000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43660000u);
    c.f[1] = c.r[6].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = ld32((c.r[7].w[0] + 9828u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[4].w[0]), c.f[1]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.f[1] = ld32((c.r[3].w[0] + 9832u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), c.f[0]);  c.pc = t; return; }
L_0035C230:
    set32(c.r[3], c.r[4].w[0] << 4);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[6], c.r[6].w[0] + 22704u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], c.r[3].w[0] + 23232u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[7], c.r[5].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[5], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] + 22706u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] + 8u);
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 9828u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] + 8u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 29;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 9832u), c.f[0]);  c.pc = t; return; }
L_0035C2B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40110000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 51324ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], 0u + 13u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8u));
    c.f[20] = c.r[2].w[0];
    set32(c.r[2], 0u + 15u);
    if (c.r[3].d[0] == 0) c.r[16].d[0] = c.r[2].d[0];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C2ECu); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_008D(c, 50u, depth + 1u); else { c.pc = 0x00334C90u; return; } if (c.pc != 0x0035C2ECu) [[unlikely]] return; }
L_0035C2EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035C310; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[2], 0u + 82u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1628u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 81u);  if (t) { goto L_0035C310; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0035C350; } }
L_0035C310:
    set32(c.r[2], c.r[16].w[0] - 1u);
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C328u); set32(c.r[4], c.r[2].w[0] + 2597u);  if (depth < kMaxDepth) unit_008D(c, 20u, depth + 1u); else { c.pc = 0x003341D0u; return; } if (c.pc != 0x0035C328u) [[unlikely]] return; }
L_0035C328:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035C5A8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = ld8((c.r[3].w[0] + 2597u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C348u); c.r[4].d[0] = ld8((c.r[17].w[0] + 8u));  if (depth < kMaxDepth) unit_0097(c, 17u, depth + 1u); else { c.pc = 0x0035C230u; return; } if (c.pc != 0x0035C348u) [[unlikely]] return; }
L_0035C348:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C5A8; } }
L_0035C350:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C358u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_008D(c, 50u, depth + 1u); else { c.pc = 0x00334C90u; return; } if (c.pc != 0x0035C358u) [[unlikely]] return; }
L_0035C358:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035C370; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.budget -= 4;
L_0035C370:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 9440u));
    c.r[2].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035C3B8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[3].w[0] + 9832u));
    c.f[1] = fp::sub(c.f[1], c.f[20]);
    st32((c.r[3].w[0] + 9832u), c.f[1]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.f[1] = ld32((c.r[2].w[0] + 9832u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[2].w[0] + 9832u);  if (t) { goto L_0035C3F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.f[0]);  if (t) { goto L_0035C3F8; } }
L_0035C3B8:
    c.r[2].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035C3F8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[3].w[0] + 9832u));
    c.f[1] = fp::add(c.f[1], c.f[20]);
    st32((c.r[3].w[0] + 9832u), c.f[1]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.f[1] = ld32((c.r[2].w[0] + 9832u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], c.r[2].w[0] + 9832u);  if (t) { goto L_0035C3F8; } }
    st32((c.r[3].w[0]), c.f[0]);
    c.budget -= 2;
L_0035C3F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 9440u));
    c.r[2].d[0] = c.r[3].d[0] & 2048ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035C440; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[3].w[0] + 9828u));
    c.f[1] = fp::sub(c.f[1], c.f[20]);
    st32((c.r[3].w[0] + 9828u), c.f[1]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.f[1] = ld32((c.r[2].w[0] + 9828u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[2].w[0] + 9828u);  if (t) { goto L_0035C480; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.f[0]);  if (t) { goto L_0035C480; } }
L_0035C440:
    c.r[2].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035C480; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x441A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[3].w[0] + 9828u));
    c.f[1] = fp::add(c.f[1], c.f[20]);
    st32((c.r[3].w[0] + 9828u), c.f[1]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.f[1] = ld32((c.r[2].w[0] + 9828u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], c.r[2].w[0] + 9828u);  if (t) { goto L_0035C480; } }
    st32((c.r[3].w[0]), c.f[0]);
    c.budget -= 1;
L_0035C480:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C48Cu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 9680u)));  if (depth < kMaxDepth) unit_0005(c, 99u, depth + 1u); else { c.pc = 0x001165A8u; return; } if (c.pc != 0x0035C48Cu) [[unlikely]] return; }
L_0035C48C:
    c.r[2].d[0] = c.r[2].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);  if (t) { goto L_0035C518; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 9680u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));  if (t) { goto L_0035C4AC; } }
    set32(c.r[2], c.r[3].w[0] + 15u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.budget -= 2;
L_0035C4AC:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = ld32((c.r[3].w[0] + 9828u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[3].w[0] + 9828u), c.f[1]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.f[1] = ld32((c.r[2].w[0] + 9828u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[2].w[0] + 9828u);  if (t) { goto L_0035C4F0; } }
    st32((c.r[3].w[0]), c.f[0]);
    c.budget -= 2;
L_0035C4F0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x441A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[3].w[0] + 9828u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], c.r[3].w[0] + 9828u);  if (t) { goto L_0035C518; } }
    st32((c.r[2].w[0]), c.f[0]);
    c.budget -= 2;
L_0035C518:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C524u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 9682u)));  if (depth < kMaxDepth) unit_0005(c, 99u, depth + 1u); else { c.pc = 0x001165A8u; return; } if (c.pc != 0x0035C524u) [[unlikely]] return; }
L_0035C524:
    c.r[3].d[0] = c.r[2].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);  if (t) { goto L_0035C5A8; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 9682u)));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));  if (t) { goto L_0035C544; } }
    set32(c.r[3], c.r[4].w[0] + 15u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.budget -= 2;
L_0035C544:
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[1] = ld32((c.r[4].w[0] + 9832u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[4].w[0] + 9832u), c.f[1]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.f[1] = ld32((c.r[3].w[0] + 9832u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[3].w[0] + 9832u);  if (t) { goto L_0035C588; } }
    st32((c.r[4].w[0]), c.f[0]);
    c.budget -= 2;
L_0035C588:
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = ld32((c.r[4].w[0] + 9832u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], c.r[4].w[0] + 9832u);  if (t) { goto L_0035C5A8; } }
    st32((c.r[3].w[0]), c.f[0]);
    c.budget -= 1;
L_0035C5A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0035C5C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 28u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C5D4u); set32(c.r[5], c.r[29].w[0] + 24u);  if (depth < kMaxDepth) unit_0097(c, 16u, depth + 1u); else { c.pc = 0x0035C1F0u; return; } if (c.pc != 0x0035C5D4u) [[unlikely]] return; }
L_0035C5D4:
    c.f[1] = ld32((c.r[29].w[0] + 28u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[0] = ld32((c.r[29].w[0] + 24u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.f[2] = c.r[2].w[0];
    c.r[2].d[0] = ld8((c.r[1].w[0] + 15544u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 28u), c.f[1]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 24u), c.f[0]);  if (t) { goto L_0035C610; } }
    set32(c.r[2], 0u + 13u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[9], 0u + 23u);  if (t) { goto L_0035C748; } }
    c.budget -= 1;
L_0035C610:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[9], 0u + 12u);  if (t) { goto L_0035C748; } }
    c.budget -= 1;
L_0035C620:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 2u)));
    set32(c.r[4], c.r[7].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[4].d[0] << 48;
    set32(c.r[3], c.r[6].w[0] - c.r[3].w[0]);
    c.r[4].d[0] = c.r[3].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[3], c.r[5].w[0] + 7u);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[3].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (t) { goto L_0035C688; } }
    c.r[3].d[0] = c.r[4].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + 7u);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[3].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0035C688; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C788; } }
    c.budget -= 1;
L_0035C688:
    set32(c.r[8], c.r[8].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 2;
L_0035C690:
    c.r[1].d[0] = c.r[9].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.f[0] = fp::cvt_w_s(c.f[2]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C620u | kUnwind; return; } goto L_0035C620; } }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], 0u + 24u);
    set32(c.r[8], c.r[8].w[0] + 22912u);
    set32(c.r[3], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    c.r[7].d[0] = c.r[3].d[0] << 48;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    set32(c.r[3], c.f[0]);
    c.r[6].d[0] = c.r[3].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.budget -= 11;
L_0035C6C8:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 2u)));
    set32(c.r[4], c.r[7].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[4].d[0] << 48;
    set32(c.r[3], c.r[6].w[0] - c.r[3].w[0]);
    c.r[4].d[0] = c.r[3].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[3], c.r[5].w[0] + 7u);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[3].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (t) { goto L_0035C730; } }
    c.r[3].d[0] = c.r[4].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + 7u);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[3].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0035C730; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C788; } }
    c.budget -= 1;
L_0035C730:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].d[0] = c.r[2].sd[0] < 26ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C6C8u | kUnwind; return; } goto L_0035C6C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0035C788; } }
L_0035C748:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.f[2] = ld32((c.r[29].w[0] + 28u));
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 22816u);
    c.f[1] = ld32((c.r[29].w[0] + 24u));
    set32(c.r[8], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = fp::cvt_w_s(c.f[2]);
    set32(c.r[3], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    c.r[7].d[0] = c.r[3].d[0] << 48;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    set32(c.r[3], c.f[0]);
    c.r[6].d[0] = c.r[3].d[0] << 48;
    c.budget -= 16;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C690u | kUnwind; return; } goto L_0035C690; } }
L_0035C788:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035C7A0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 15544u));
    c.f[1] = ld32((c.r[3].w[0] + 9832u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.f[0] = ld32((c.r[3].w[0] + 9828u));  if (t) { goto L_0035C7C8; } }
    set32(c.r[2], 0u + 13u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 23u);  if (t) { goto L_0035C940; } }
    c.budget -= 1;
L_0035C7C8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 12u);  if (t) { goto L_0035C940; } }
    c.budget -= 1;
L_0035C7D8:
    c.r[13].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 4u)));
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 2u)));
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 6u)));
    set32(c.r[9], c.r[6].w[0] - c.r[13].w[0]);
    c.r[9].d[0] = c.r[9].d[0] << 48;
    set32(c.r[8], c.r[8].w[0] - c.r[13].w[0]);
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 48);
    c.r[8].d[0] = c.r[8].d[0] << 48;
    set32(c.r[10], c.r[5].w[0] - c.r[12].w[0]);
    set32(c.r[11], c.r[11].w[0] - c.r[12].w[0]);
    c.r[10].d[0] = c.r[10].d[0] << 48;
    c.r[11].d[0] = c.r[11].d[0] << 48;
    c.r[9].d[0] = c.r[9].d[0] & 65535ull;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 48);
    c.r[1].d[0] = c.r[8].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 48);
    c.budget -= 19;
    { const bool t = c.r[1].d[0] != 0ull; c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 48);  if (t) { goto L_0035C848; } }
    c.r[8].d[0] = c.r[11].d[0] << 48;
    c.r[9].d[0] = c.r[10].d[0] & 65535ull;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 48);
    c.r[1].d[0] = c.r[8].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0035C848; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C988; } }
    c.budget -= 1;
L_0035C848:
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    set32(c.r[9], c.r[6].w[0] - c.r[9].w[0]);
    c.r[10].d[0] = c.r[9].d[0] << 48;
    set32(c.r[8], c.r[5].w[0] - c.r[8].w[0]);
    c.r[9].d[0] = c.r[8].d[0] << 48;
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 48);
    c.r[8].d[0] = c.r[10].d[0] & 65535ull;
    c.r[1].d[0] = c.r[8].sd[0] < 87ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 48);  if (t) { goto L_0035C890; } }
    c.r[8].d[0] = c.r[9].d[0] & 65535ull;
    c.r[1].d[0] = c.r[8].sd[0] < 29ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0035C890; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C988; } }
    c.budget -= 1;
L_0035C890:
    set32(c.r[4], c.r[4].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
L_0035C8A0:
    c.r[1].d[0] = c.r[7].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[11].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C7D8u | kUnwind; return; } goto L_0035C7D8; } }
    set32(c.r[2], 0u + 24u);
    set32(c.r[11], c.r[11].w[0] + 22688u);
    c.budget -= 3;
L_0035C8B8:
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[11].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[11].w[0] + 4u)));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[11].w[0] + 2u)));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[11].w[0] + 6u)));
    set32(c.r[4], c.r[6].w[0] - c.r[10].w[0]);
    c.r[4].d[0] = c.r[4].d[0] << 48;
    set32(c.r[3], c.r[3].w[0] - c.r[10].w[0]);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    set32(c.r[7], c.r[5].w[0] - c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] - c.r[9].w[0]);
    c.r[7].d[0] = c.r[7].d[0] << 48;
    c.r[8].d[0] = c.r[8].d[0] << 48;
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.budget -= 19;
    { const bool t = c.r[1].d[0] != 0ull; c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 48);  if (t) { goto L_0035C928; } }
    c.r[3].d[0] = c.r[8].d[0] << 48;
    c.r[4].d[0] = c.r[7].d[0] & 65535ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0035C928; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C988; } }
    c.budget -= 1;
L_0035C928:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].d[0] = c.r[2].sd[0] < 26ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[11], c.r[11].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C8B8u | kUnwind; return; } goto L_0035C8B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0035C988; } }
L_0035C940:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.r[2].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + 22496u);
    set32(c.r[5], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], c.r[3].w[0] + 22704u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    c.r[6].d[0] = c.r[5].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.budget -= 18;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C8A0u | kUnwind; return; } goto L_0035C8A0; } }
L_0035C988:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035C990:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 255u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C9A8u); st8((c.r[2].w[0] + 2599u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0097(c, 25u, depth + 1u); else { c.pc = 0x0035C5C0u; return; } if (c.pc != 0x0035C9A8u) [[unlikely]] return; }
L_0035C9A8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0035C9C0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2599u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0035C9D0; } }
    c.budget -= 1;
L_0035C9C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C9C8u);  if (depth < kMaxDepth) unit_0097(c, 30u, depth + 1u); else { c.pc = 0x0035C7A0u; return; } if (c.pc != 0x0035C9C8u) [[unlikely]] return; }
L_0035C9C8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2599u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0035C9D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035C9E0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 15544u));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035CA18; } }
    set32(c.r[19], 0u + 13u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 23u);  if (t) { goto L_0035CA20; } }
    c.budget -= 1;
L_0035CA18:
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[18], 0u + 12u);
    c.budget -= 2;
L_0035CA20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CA30u);  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x0035CA30u) [[unlikely]] return; }
L_0035CA30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CA38u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x0035CA38u) [[unlikely]] return; }
L_0035CA38:
    c.r[1].d[0] = c.r[18].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_0035CB10; } }
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 22928u);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], 0u + 346u);
    mmi::mult(c, 0, c.r[19].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[2], c.r[2].w[0] + 4928u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
L_0035CA68:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CA74u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));  if (depth < kMaxDepth) unit_00AA(c, 46u, depth + 1u); else { c.pc = 0x003A8720u; return; } if (c.pc != 0x0035CA74u) [[unlikely]] return; }
L_0035CA74:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 20u));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0035CAC8; } }
    c.r[6].d[0] = ld16((c.r[16].w[0] + 2u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CA98u); set32(c.r[5], c.r[5].w[0] + 7096u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0035CA98u) [[unlikely]] return; }
L_0035CA98:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.f[14] = 0u;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CAC0u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x0035CAC0u) [[unlikely]] return; }
L_0035CAC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035CAF8; } }
L_0035CAC8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.f[14] = 0u;
    set32(c.r[4], c.r[4].w[0] + 7104u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CAF4u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x0035CAF4u) [[unlikely]] return; }
L_0035CAF4:
    c.budget -= 1;
L_0035CAF8:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[1].d[0] = c.r[18].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] + 346u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035CA68u | kUnwind; return; } goto L_0035CA68; } }
    c.budget -= 1;
L_0035CB10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 16008u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[3], 0u + 346u);
    set32(c.r[2], c.r[2].w[0] + 15318u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[16].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CB40u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x0035CB40u) [[unlikely]] return; }
L_0035CB40:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[6].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CB54u); set32(c.r[5], c.r[5].w[0] + 7112u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0035CB54u) [[unlikely]] return; }
L_0035CB54:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CB60u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0099(c, 26u, depth + 1u); else { c.pc = 0x00364550u; return; } if (c.pc != 0x0035CB60u) [[unlikely]] return; }
L_0035CB60:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42D00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CB7Cu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x0035CB7Cu) [[unlikely]] return; }
L_0035CB7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0035CBA0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], 0u + 25u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2599u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0035CBC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035CBF0; } }
    c.budget -= 1;
L_0035CBC0:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0; set32(c.r[3], 0u + 346u);  if (t) { goto L_0035CBE8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4948u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] ^ 3ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_0035CBF0; } }
L_0035CBE8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_0035CBF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035CC00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.f[12] = c.r[2].w[0];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CC18u);  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x0035CC18u) [[unlikely]] return; }
L_0035CC18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CC20u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x0035CC20u) [[unlikely]] return; }
L_0035CC20:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2599u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0035CC58; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42100000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43BE0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CC50u); set32(c.r[4], c.r[4].w[0] + 7120u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x0035CC50u) [[unlikely]] return; }
L_0035CC50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035CD28; } }
L_0035CC58:
    set32(c.r[2], 0u + 24u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 25u);  if (t) { goto L_0035CCC0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035CC78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035CCF8; } }
    c.budget -= 1;
L_0035CC78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42100000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.f[14] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43BE0000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CC98u); set32(c.r[4], c.r[4].w[0] + 7168u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x0035CC98u) [[unlikely]] return; }
L_0035CC98:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42100000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43CA0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CCB8u); set32(c.r[4], c.r[4].w[0] + 7200u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x0035CCB8u) [[unlikely]] return; }
L_0035CCB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035CD28; } }
L_0035CCC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42100000u);
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43BE0000u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[2], 0u + 346u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[2], c.r[2].w[0] + 4928u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CCF0u); set32(c.r[4], c.r[2].w[0] + 89u);  if (depth < kMaxDepth) unit_0089(c, 122u, depth + 1u); else { c.pc = 0x00325650u; return; } if (c.pc != 0x0035CCF0u) [[unlikely]] return; }
L_0035CCF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035CD28; } }
L_0035CCF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42100000u);
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43BE0000u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[2], 0u + 346u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[2], c.r[2].w[0] + 4928u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CD28u); set32(c.r[4], c.r[2].w[0] + 89u);  if (depth < kMaxDepth) unit_0089(c, 122u, depth + 1u); else { c.pc = 0x00325650u; return; } if (c.pc != 0x0035CD28u) [[unlikely]] return; }
L_0035CD28:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035CD40:
    set32(c.r[7], c.r[4].w[0] - 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 22704u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[6], c.r[6].w[0] + 8u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.f[0] = c.r[6].w[0];
    set32(c.r[3], c.r[3].w[0] + 22706u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], 0u + 23u);
    st32((c.r[5].w[0] + 9828u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 23;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; st32((c.r[4].w[0] + 9832u), c.f[0]);  if (t) { goto L_0035CDC0; } }
    c.r[3].d[0] = c.r[7].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0035CDB8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2603u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0035CDC0; } }
L_0035CDB8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2603u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0035CDC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035CDD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CDE0u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_004E(c, 55u, depth + 1u); else { c.pc = 0x00238800u; return; } if (c.pc != 0x0035CDE0u) [[unlikely]] return; }
L_0035CDE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 6u);  if (t) { goto L_0035CDF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CDF0u);  if (depth < kMaxDepth) unit_004E(c, 35u, depth + 1u); else { c.pc = 0x002382B0u; return; } if (c.pc != 0x0035CDF0u) [[unlikely]] return; }
L_0035CDF0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035CE00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CE1Cu); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0099(c, 25u, depth + 1u); else { c.pc = 0x00364540u; return; } if (c.pc != 0x0035CE1Cu) [[unlikely]] return; }
L_0035CE1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035CEA0; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0035CE98; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0035CE90; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0035CE80; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0035CE58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035CE98; } }
    c.budget -= 1;
L_0035CE58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CE60u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 552u, depth + 1u); else { c.pc = 0x003639A0u; return; } if (c.pc != 0x0035CE60u) [[unlikely]] return; }
L_0035CE60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CE68u);  if (depth < kMaxDepth) unit_0098(c, 556u, depth + 1u); else { c.pc = 0x00363A00u; return; } if (c.pc != 0x0035CE68u) [[unlikely]] return; }
L_0035CE68:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CE74u); st32((c.r[1].w[0] + 5004u), 0u);  if (depth < kMaxDepth) unit_0049(c, 11u, depth + 1u); else { c.pc = 0x00224150u; return; } if (c.pc != 0x0035CE74u) [[unlikely]] return; }
L_0035CE74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035CE98; } }
    c.budget -= 1;
L_0035CE80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CE88u);  if (depth < kMaxDepth) unit_0049(c, 23u, depth + 1u); else { c.pc = 0x00224260u; return; } if (c.pc != 0x0035CE88u) [[unlikely]] return; }
L_0035CE88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035CE98; } }
L_0035CE90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CE98u);  if (depth < kMaxDepth) unit_0049(c, 20u, depth + 1u); else { c.pc = 0x00224220u; return; } if (c.pc != 0x0035CE98u) [[unlikely]] return; }
L_0035CE98:
    set32(c.r[16], 0u + 1u);
    c.budget -= 2;
L_0035CEA0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0035CEC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CED4u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0099(c, 25u, depth + 1u); else { c.pc = 0x00364540u; return; } if (c.pc != 0x0035CED4u) [[unlikely]] return; }
L_0035CED4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035CEE0; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_0035CEE0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035CF00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4977u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0035CF28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035CF50; } }
    c.budget -= 1;
L_0035CF28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CF30u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 552u, depth + 1u); else { c.pc = 0x003639A0u; return; } if (c.pc != 0x0035CF30u) [[unlikely]] return; }
L_0035CF30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CF38u);  if (depth < kMaxDepth) unit_0098(c, 556u, depth + 1u); else { c.pc = 0x00363A00u; return; } if (c.pc != 0x0035CF38u) [[unlikely]] return; }
L_0035CF38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CF40u);  if (depth < kMaxDepth) unit_0098(c, 560u, depth + 1u); else { c.pc = 0x00363A40u; return; } if (c.pc != 0x0035CF40u) [[unlikely]] return; }
L_0035CF40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[1].w[0] + 5004u), 0u);
    st8((c.r[28].w[0] - 22516u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_0035CF50:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035CF60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4977u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0035CF88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0035D120; } }
L_0035CF88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CF90u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x0035CF90u) [[unlikely]] return; }
L_0035CF90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035D118; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22516u)));
    set32(c.r[2], 0u + 99u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 15u);  if (t) { goto L_0035D110; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035D0C0; } }
    set32(c.r[2], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 11u);  if (t) { goto L_0035D0C0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035D0C0; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 7u);  if (t) { goto L_0035D0C0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035D0C0; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_0035D0C0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035D0C0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 16u);  if (t) { goto L_0035D0C0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035D058; } }
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 12u);  if (t) { goto L_0035D058; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035D058; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 8u);  if (t) { goto L_0035D058; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035D058; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_0035D058; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035D058; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035D058; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035D058; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035D118; } }
L_0035D058:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22516u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[28].w[0] - 22516u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22516u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_0035D078; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0035D078:
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 24592u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0035D0B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01030000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D0A4u); c.r[5].d[0] = c.r[2].d[0] | 61440ull;  if (depth < kMaxDepth) unit_0045(c, 59u, depth + 1u); else { c.pc = 0x002147C0u; return; } if (c.pc != 0x0035D0A4u) [[unlikely]] return; }
L_0035D0A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035D118; } }
    c.budget -= 1;
L_0035D0B0:
    set32(c.r[2], 0u + 99u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 22516u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0035D118; } }
    c.budget -= 1;
L_0035D0C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01030000u);
    c.r[4].d[0] = c.r[2].d[0] | 61440ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D0D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008A(c, 84u, depth + 1u); else { c.pc = 0x00329960u; return; } if (c.pc != 0x0035D0D0u) [[unlikely]] return; }
L_0035D0D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22516u)));
    set32(c.r[4], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));  if (t) { goto L_0035D0E8; } }
    set32(c.r[3], c.r[4].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 2;
L_0035D0E8:
    set32(c.r[4], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], c.r[3].w[0] + 4880u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22516u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 22516u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0035D118; } }
    c.budget -= 1;
L_0035D110:
    set32(c.r[16], 0u + 1u);
    c.budget -= 2;
L_0035D118:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0035D120:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035D130:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u + 54u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0035E378; } }
    set32(c.r[4], 0u + 53u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[2], 0u + 52u);  if (t) { goto L_0035E260; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035E230; } }
    set32(c.r[2], 0u + 51u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 50u);  if (t) { goto L_0035E1E8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035E198; } }
    set32(c.r[2], 0u + 31u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 30u);  if (t) { goto L_0035E190; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035E168; } }
    set32(c.r[2], 0u + 26u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 25u);  if (t) { goto L_0035E048; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035DFE0; } }
    set32(c.r[2], 0u + 24u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 23u);  if (t) { goto L_0035DF50; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035DE30; } }
    set32(c.r[2], 0u + 22u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 21u);  if (t) { goto L_0035DDB8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035DB50; } }
    set32(c.r[2], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 10u);  if (t) { goto L_0035D9F8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035D950; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_0035D940; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035D918; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0035D7B8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035D320; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035D260; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035D220; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E400; } }
L_0035D220:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D228u);  if (depth < kMaxDepth) unit_0097(c, 71u, depth + 1u); else { c.pc = 0x0035CF00u; return; } if (c.pc != 0x0035D228u) [[unlikely]] return; }
L_0035D228:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035E400; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D248u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 557u, depth + 1u); else { c.pc = 0x00363A10u; return; } if (c.pc != 0x0035D248u) [[unlikely]] return; }
L_0035D248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D250u);  if (depth < kMaxDepth) unit_0098(c, 543u, depth + 1u); else { c.pc = 0x00363880u; return; } if (c.pc != 0x0035D250u) [[unlikely]] return; }
L_0035D250:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 5004u), 0u);  if (t) { goto L_0035E400; } }
    c.budget -= 1;
L_0035D260:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D268u);  if (depth < kMaxDepth) unit_0097(c, 75u, depth + 1u); else { c.pc = 0x0035CF60u; return; } if (c.pc != 0x0035D268u) [[unlikely]] return; }
L_0035D268:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035E400; } }
    set32(c.r[2], 0u + 20u);
    st8((c.r[1].w[0] + 4976u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4968u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00F80000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 4990u)));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035D2B8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4968u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0035D2C8; } }
L_0035D2B8:
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4968u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0035D2C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D2D0u);  if (depth < kMaxDepth) unit_0098(c, 608u, depth + 1u); else { c.pc = 0x00363EB0u; return; } if (c.pc != 0x0035D2D0u) [[unlikely]] return; }
L_0035D2D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D2D8u);  if (depth < kMaxDepth) unit_0098(c, 609u, depth + 1u); else { c.pc = 0x00363ED0u; return; } if (c.pc != 0x0035D2D8u) [[unlikely]] return; }
L_0035D2D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D2E0u);  if (depth < kMaxDepth) unit_0098(c, 613u, depth + 1u); else { c.pc = 0x00363F70u; return; } if (c.pc != 0x0035D2E0u) [[unlikely]] return; }
L_0035D2E0:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D2ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 614u, depth + 1u); else { c.pc = 0x00363F90u; return; } if (c.pc != 0x0035D2ECu) [[unlikely]] return; }
L_0035D2EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D2F4u);  if (depth < kMaxDepth) unit_0099(c, 10u, depth + 1u); else { c.pc = 0x00364210u; return; } if (c.pc != 0x0035D2F4u) [[unlikely]] return; }
L_0035D2F4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4977u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0035D310; } }
    set32(c.r[5], 0u + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D310u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 545u, depth + 1u); else { c.pc = 0x003638B0u; return; } if (c.pc != 0x0035D310u) [[unlikely]] return; }
L_0035D310:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D318u);  if (depth < kMaxDepth) unit_0097(c, 59u, depth + 1u); else { c.pc = 0x0035CDD0u; return; } if (c.pc != 0x0035D318u) [[unlikely]] return; }
L_0035D318:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E400; } }
L_0035D320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D328u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0035D328u) [[unlikely]] return; }
L_0035D328:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D330u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x0035D330u) [[unlikely]] return; }
L_0035D330:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D338u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_0099(c, 22u, depth + 1u); else { c.pc = 0x00364460u; return; } if (c.pc != 0x0035D338u) [[unlikely]] return; }
L_0035D338:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035D7A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D350u);  if (depth < kMaxDepth) unit_0098(c, 521u, depth + 1u); else { c.pc = 0x00363640u; return; } if (c.pc != 0x0035D350u) [[unlikely]] return; }
L_0035D350:
    c.r[3].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035D3E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D364u);  if (depth < kMaxDepth) unit_0098(c, 518u, depth + 1u); else { c.pc = 0x00363610u; return; } if (c.pc != 0x0035D364u) [[unlikely]] return; }
L_0035D364:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], 0u + 5u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4968u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    mmi::div(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].d[0] = c.hi.d[0];
    st16((c.r[1].w[0] + 4968u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    c.budget -= 18;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00F80000u);  if (t) { goto L_0035D470; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 4990u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_0035D470; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4968u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    mmi::div(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4968u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0035D470; } }
L_0035D3E0:
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035D470; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D3F4u);  if (depth < kMaxDepth) unit_0098(c, 518u, depth + 1u); else { c.pc = 0x00363610u; return; } if (c.pc != 0x0035D3F4u) [[unlikely]] return; }
L_0035D3F4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], 0u + 5u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4968u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    mmi::div(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].d[0] = c.hi.d[0];
    st16((c.r[1].w[0] + 4968u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    c.budget -= 18;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00F80000u);  if (t) { goto L_0035D470; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 4990u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] + 4u);  if (t) { goto L_0035D470; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4968u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    mmi::div(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = c.hi.d[0];
    st16((c.r[1].w[0] + 4968u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 10;
L_0035D470:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_0035D4A8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035D498; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035D4B8; } }
    c.budget -= 1;
L_0035D498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D4A0u); set32(c.r[4], 0u + 158u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0035D4A0u) [[unlikely]] return; }
L_0035D4A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035D4C8; } }
L_0035D4A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D4B0u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0035D4B0u) [[unlikely]] return; }
L_0035D4B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035D4C8; } }
L_0035D4B8:
    set32(c.r[2], c.r[3].w[0] + 41u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D4C4u); c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0035D4C4u) [[unlikely]] return; }
L_0035D4C4:
    c.budget -= 1;
L_0035D4C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D4D0u);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x0035D4D0u) [[unlikely]] return; }
L_0035D4D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 512u);  if (t) { goto L_0035D740; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D4E0u); st8((c.r[28].w[0] - 23720u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035D4E0u) [[unlikely]] return; }
L_0035D4E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 4u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_0035D6F8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_0035D6D0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0035D5F0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0035D568; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0035D520; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E400; } }
    c.budget -= 1;
L_0035D520:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22824u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035D5B0; } }
    set32(c.r[2], 0u + 10u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D540u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 612u, depth + 1u); else { c.pc = 0x00363F40u; return; } if (c.pc != 0x0035D540u) [[unlikely]] return; }
L_0035D540:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 180u);
    st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 60u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0035E400; } }
    c.budget -= 1;
L_0035D568:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22824u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035D5B0; } }
    set32(c.r[2], 0u + 10u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D588u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 612u, depth + 1u); else { c.pc = 0x00363F40u; return; } if (c.pc != 0x0035D588u) [[unlikely]] return; }
L_0035D588:
    set32(c.r[2], 0u + 180u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 60u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 1u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0035E400; } }
L_0035D5B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D5D0u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 612u, depth + 1u); else { c.pc = 0x00363F40u; return; } if (c.pc != 0x0035D5D0u) [[unlikely]] return; }
L_0035D5D0:
    set32(c.r[3], 0u + 180u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 60u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0035E400; } }
    c.budget -= 1;
L_0035D5F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00F80000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 4990u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0035D648; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22824u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035D690; } }
    set32(c.r[2], 0u + 10u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D624u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 612u, depth + 1u); else { c.pc = 0x00363F40u; return; } if (c.pc != 0x0035D624u) [[unlikely]] return; }
L_0035D624:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 180u);
    st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 60u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0035E400; } }
L_0035D648:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22824u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035D690; } }
    set32(c.r[2], 0u + 10u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D668u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 612u, depth + 1u); else { c.pc = 0x00363F40u; return; } if (c.pc != 0x0035D668u) [[unlikely]] return; }
L_0035D668:
    set32(c.r[2], 0u + 180u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 60u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 1u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0035E400; } }
L_0035D690:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D6B0u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 612u, depth + 1u); else { c.pc = 0x00363F40u; return; } if (c.pc != 0x0035D6B0u) [[unlikely]] return; }
L_0035D6B0:
    set32(c.r[3], 0u + 180u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 60u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0035E400; } }
    c.budget -= 1;
L_0035D6D0:
    set32(c.r[2], 0u + 50u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 20u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D6ECu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0098(c, 545u, depth + 1u); else { c.pc = 0x003638B0u; return; } if (c.pc != 0x0035D6ECu) [[unlikely]] return; }
L_0035D6EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E400; } }
    c.budget -= 1;
L_0035D6F8:
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] + 5060u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[5].d[0] = 0ull + 0ull;
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D720u); set32(c.r[6], 0u + 21u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0035D720u) [[unlikely]] return; }
L_0035D720:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], c.r[4].w[0] + 5060u);
    set32(c.r[6], 0u + 21u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D738u); set32(c.r[5], c.r[2].w[0] + 92u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0035D738u) [[unlikely]] return; }
L_0035D738:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E400; } }
L_0035D740:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D748u);  if (depth < kMaxDepth) unit_0098(c, 531u, depth + 1u); else { c.pc = 0x00363760u; return; } if (c.pc != 0x0035D748u) [[unlikely]] return; }
L_0035D748:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035E400; } }
    set32(c.r[2], 0u + 30u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 20u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D76Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0098(c, 545u, depth + 1u); else { c.pc = 0x003638B0u; return; } if (c.pc != 0x0035D76Cu) [[unlikely]] return; }
L_0035D76C:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D77Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x0035D77Cu) [[unlikely]] return; }
L_0035D77C:
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D78Cu); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x0035D78Cu) [[unlikely]] return; }
L_0035D78C:
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D79Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x0035D79Cu) [[unlikely]] return; }
L_0035D79C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E400; } }
    c.budget -= 1;
L_0035D7A8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0035E400; } }
L_0035D7B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D7C0u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0035D7C0u) [[unlikely]] return; }
L_0035D7C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035D818; } }
    set32(c.r[4], 0u + 1024u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D7FCu); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035D7FCu) [[unlikely]] return; }
L_0035D7FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D804u); set32(c.r[4], 0u + 128u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035D804u) [[unlikely]] return; }
L_0035D804:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D80Cu); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035D80Cu) [[unlikely]] return; }
L_0035D80C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E400; } }
    c.budget -= 1;
L_0035D818:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0035D868; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035D858; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035D848; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035D898; } }
    c.budget -= 1;
L_0035D848:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D850u); set32(c.r[4], 0u + 17u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0035D850u) [[unlikely]] return; }
L_0035D850:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035D898; } }
L_0035D858:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D860u); set32(c.r[4], 0u + 28u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0035D860u) [[unlikely]] return; }
L_0035D860:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035D898; } }
L_0035D868:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00F80000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 4990u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 17u);  if (t) { goto L_0035D890; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D884u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0035D884u) [[unlikely]] return; }
L_0035D884:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035D898; } }
    c.budget -= 1;
L_0035D890:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D898u); set32(c.r[4], 0u + 28u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0035D898u) [[unlikely]] return; }
L_0035D898:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035D8F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D8B0u);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x0035D8B0u) [[unlikely]] return; }
L_0035D8B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035D8E8; } }
    set32(c.r[4], 0u + 1024u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D8D0u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035D8D0u) [[unlikely]] return; }
L_0035D8D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D8D8u); set32(c.r[4], 0u + 128u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035D8D8u) [[unlikely]] return; }
L_0035D8D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D8E0u); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035D8E0u) [[unlikely]] return; }
L_0035D8E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E400; } }
L_0035D8E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D8F0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x0035D8F0u) [[unlikely]] return; }
L_0035D8F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E400; } }
L_0035D8F8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D90Cu); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x0035D90Cu) [[unlikely]] return; }
L_0035D90C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E400; } }
    c.budget -= 1;
L_0035D918:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D920u);  if (depth < kMaxDepth) unit_0098(c, 542u, depth + 1u); else { c.pc = 0x00363870u; return; } if (c.pc != 0x0035D920u) [[unlikely]] return; }
L_0035D920:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035E400; } }
    set32(c.r[4], 0u + 32u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D940u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035D940u) [[unlikely]] return; }
L_0035D940:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + 1u);  if (t) { goto L_0035E400; } }
L_0035D950:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D958u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0035D958u) [[unlikely]] return; }
L_0035D958:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 18u);  if (t) { goto L_0035D978; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D970u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0035D970u) [[unlikely]] return; }
L_0035D970:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035D980; } }
L_0035D978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D980u); set32(c.r[4], 0u + 29u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0035D980u) [[unlikely]] return; }
L_0035D980:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035D9D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D998u);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x0035D998u) [[unlikely]] return; }
L_0035D998:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035D9C8; } }
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], 0u + 1024u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D9B4u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035D9B4u) [[unlikely]] return; }
L_0035D9B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D9BCu);  if (depth < kMaxDepth) unit_0098(c, 615u, depth + 1u); else { c.pc = 0x00363FF0u; return; } if (c.pc != 0x0035D9BCu) [[unlikely]] return; }
L_0035D9BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E400; } }
    c.budget -= 1;
L_0035D9C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D9D0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x0035D9D0u) [[unlikely]] return; }
L_0035D9D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E400; } }
L_0035D9D8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D9ECu); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x0035D9ECu) [[unlikely]] return; }
L_0035D9EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E400; } }
    c.budget -= 1;
L_0035D9F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DA00u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0035DA00u) [[unlikely]] return; }
L_0035DA00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DA08u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x0035DA08u) [[unlikely]] return; }
L_0035DA08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DA10u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_0099(c, 22u, depth + 1u); else { c.pc = 0x00364460u; return; } if (c.pc != 0x0035DA10u) [[unlikely]] return; }
L_0035DA10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035DB10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DA28u);  if (depth < kMaxDepth) unit_0099(c, 28u, depth + 1u); else { c.pc = 0x003645F0u; return; } if (c.pc != 0x0035DA28u) [[unlikely]] return; }
L_0035DA28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_0035E400; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035DAF0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], 0u + 20u);
    set32(c.r[4], c.r[4].w[0] + 4832u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 40u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DA74u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0035DA74u) [[unlikely]] return; }
L_0035DA74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DA7Cu);  if (depth < kMaxDepth) unit_00A2(c, 335u, depth + 1u); else { c.pc = 0x0038AE00u; return; } if (c.pc != 0x0035DA7Cu) [[unlikely]] return; }
L_0035DA7C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 4832u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DA94u); set32(c.r[5], c.r[5].w[0] + 7232u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0035DA94u) [[unlikely]] return; }
L_0035DA94:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DAA0u); set32(c.r[4], c.r[4].w[0] + 4832u);  if (depth < kMaxDepth) unit_008B(c, 238u, depth + 1u); else { c.pc = 0x0032F370u; return; } if (c.pc != 0x0035DAA0u) [[unlikely]] return; }
L_0035DAA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 5060u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DAB4u); set32(c.r[6], 0u + 21u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0035DAB4u) [[unlikely]] return; }
L_0035DAB4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], c.r[4].w[0] + 5060u);
    set32(c.r[5], c.r[5].w[0] + 7232u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DAD0u); set32(c.r[6], c.r[6].w[0] + 4832u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0035DAD0u) [[unlikely]] return; }
L_0035DAD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DAD8u);  if (depth < kMaxDepth) unit_0098(c, 611u, depth + 1u); else { c.pc = 0x00363F10u; return; } if (c.pc != 0x0035DAD8u) [[unlikely]] return; }
L_0035DAD8:
    set32(c.r[4], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DAE4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0099(c, 2u, depth + 1u); else { c.pc = 0x00364020u; return; } if (c.pc != 0x0035DAE4u) [[unlikely]] return; }
L_0035DAE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035DB00; } }
    c.budget -= 1;
L_0035DAF0:
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DB00u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 615u, depth + 1u); else { c.pc = 0x00363FF0u; return; } if (c.pc != 0x0035DB00u) [[unlikely]] return; }
L_0035DB00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DB08u);  if (depth < kMaxDepth) unit_0099(c, 31u, depth + 1u); else { c.pc = 0x00364620u; return; } if (c.pc != 0x0035DB08u) [[unlikely]] return; }
L_0035DB08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E400; } }
L_0035DB10:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035E400; } }
    set32(c.r[4], 0u + 76u);
    set32(c.r[5], 0u + 298u);
    set32(c.r[6], c.r[6].w[0] + 5060u);
    set32(c.r[7], 0u + 20u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DB44u); set32(c.r[8], 0u + 2u);  if (depth < kMaxDepth) unit_0099(c, 32u, depth + 1u); else { c.pc = 0x00364630u; return; } if (c.pc != 0x0035DB44u) [[unlikely]] return; }
L_0035DB44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E400; } }
    c.budget -= 1;
L_0035DB50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DB58u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0035DB58u) [[unlikely]] return; }
L_0035DB58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DB60u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x0035DB60u) [[unlikely]] return; }
L_0035DB60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DB68u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_0099(c, 22u, depth + 1u); else { c.pc = 0x00364460u; return; } if (c.pc != 0x0035DB68u) [[unlikely]] return; }
L_0035DB68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DB70u); set32(c.r[4], 0u + 115u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0035DB70u) [[unlikely]] return; }
L_0035DB70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DB78u); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_0099(c, 22u, depth + 1u); else { c.pc = 0x00364460u; return; } if (c.pc != 0x0035DB78u) [[unlikely]] return; }
L_0035DB78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DB80u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x0035DB80u) [[unlikely]] return; }
L_0035DB80:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035DDA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DB98u);  if (depth < kMaxDepth) unit_0098(c, 521u, depth + 1u); else { c.pc = 0x00363640u; return; } if (c.pc != 0x0035DB98u) [[unlikely]] return; }
L_0035DB98:
    c.r[3].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035DBD0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035DC08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DBB8u);  if (depth < kMaxDepth) unit_0098(c, 518u, depth + 1u); else { c.pc = 0x00363610u; return; } if (c.pc != 0x0035DBB8u) [[unlikely]] return; }
L_0035DBB8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0035DC08; } }
L_0035DBD0:
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035DC08; } }
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035DC08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DBF4u);  if (depth < kMaxDepth) unit_0098(c, 518u, depth + 1u); else { c.pc = 0x00363610u; return; } if (c.pc != 0x0035DBF4u) [[unlikely]] return; }
L_0035DBF4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
L_0035DC08:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    set32(c.r[2], 0u + 3u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DC2Cu); st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x0035DC2Cu) [[unlikely]] return; }
L_0035DC2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);  if (t) { goto L_0035DD60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DC3Cu);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035DC3Cu) [[unlikely]] return; }
L_0035DC3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DC44u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035DC44u) [[unlikely]] return; }
L_0035DC44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DC4Cu); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035DC4Cu) [[unlikely]] return; }
L_0035DC4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DC54u); set32(c.r[4], 0u + 1024u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035DC54u) [[unlikely]] return; }
L_0035DC54:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035DD48; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035DD30; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035DC88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E400; } }
    c.budget -= 1;
L_0035DC88:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5060u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035DCB8; } }
L_0035DC98:
    set32(c.r[2], 0u + 25u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0035E400; } }
    c.budget -= 1;
L_0035DCB8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DCC4u); set32(c.r[4], c.r[4].w[0] + 5060u);  if (depth < kMaxDepth) unit_0097(c, 270u, depth + 1u); else { c.pc = 0x0035E420u; return; } if (c.pc != 0x0035DCC4u) [[unlikely]] return; }
L_0035DCC4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035DC98u | kUnwind; return; } goto L_0035DC98; } }
    set32(c.r[2], 0u + 20u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 21u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DD00u); set32(c.r[4], c.r[2].w[0] + 92u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0035DD00u) [[unlikely]] return; }
L_0035DD00:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DD0Cu); set32(c.r[4], c.r[4].w[0] + 5060u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0035DD0Cu) [[unlikely]] return; }
L_0035DD0C:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], c.r[5].w[0] + 5060u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DD24u); set32(c.r[4], c.r[2].w[0] + 92u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0035DD24u) [[unlikely]] return; }
L_0035DD24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E400; } }
    c.budget -= 1;
L_0035DD30:
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0035E400; } }
L_0035DD48:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DD54u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 615u, depth + 1u); else { c.pc = 0x00363FF0u; return; } if (c.pc != 0x0035DD54u) [[unlikely]] return; }
L_0035DD54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E400; } }
    c.budget -= 1;
L_0035DD60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DD68u);  if (depth < kMaxDepth) unit_0098(c, 531u, depth + 1u); else { c.pc = 0x00363760u; return; } if (c.pc != 0x0035DD68u) [[unlikely]] return; }
L_0035DD68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);  if (t) { goto L_0035E400; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DD78u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035DD78u) [[unlikely]] return; }
L_0035DD78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DD80u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035DD80u) [[unlikely]] return; }
L_0035DD80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DD88u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 606u, depth + 1u); else { c.pc = 0x00363E50u; return; } if (c.pc != 0x0035DD88u) [[unlikely]] return; }
L_0035DD88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DD90u); set32(c.r[4], 0u + 1024u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035DD90u) [[unlikely]] return; }
L_0035DD90:
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DDA0u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 615u, depth + 1u); else { c.pc = 0x00363FF0u; return; } if (c.pc != 0x0035DDA0u) [[unlikely]] return; }
L_0035DDA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E400; } }
L_0035DDA8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0035E400; } }
L_0035DDB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DDC0u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0035DDC0u) [[unlikely]] return; }
L_0035DDC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DDC8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x0035DDC8u) [[unlikely]] return; }
L_0035DDC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DDD0u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_0099(c, 22u, depth + 1u); else { c.pc = 0x00364460u; return; } if (c.pc != 0x0035DDD0u) [[unlikely]] return; }
L_0035DDD0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035E400; } }
    set32(c.r[2], 0u + 20u);
    st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DE1Cu); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 611u, depth + 1u); else { c.pc = 0x00363F10u; return; } if (c.pc != 0x0035DE1Cu) [[unlikely]] return; }
L_0035DE1C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DE28u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0099(c, 2u, depth + 1u); else { c.pc = 0x00364020u; return; } if (c.pc != 0x0035DE28u) [[unlikely]] return; }
L_0035DE28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E400; } }
L_0035DE30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DE38u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0035DE38u) [[unlikely]] return; }
L_0035DE38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DE40u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x0035DE40u) [[unlikely]] return; }
L_0035DE40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DE48u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_0099(c, 22u, depth + 1u); else { c.pc = 0x00364460u; return; } if (c.pc != 0x0035DE48u) [[unlikely]] return; }
L_0035DE48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DE50u); set32(c.r[4], 0u + 123u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0035DE50u) [[unlikely]] return; }
L_0035DE50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DE58u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x0035DE58u) [[unlikely]] return; }
L_0035DE58:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035DF40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DE70u);  if (depth < kMaxDepth) unit_0098(c, 534u, depth + 1u); else { c.pc = 0x003637C0u; return; } if (c.pc != 0x0035DE70u) [[unlikely]] return; }
L_0035DE70:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0035DEE0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0035DE90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E400; } }
    c.budget -= 1;
L_0035DE90:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DEC4u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035DEC4u) [[unlikely]] return; }
L_0035DEC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DECCu); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035DECCu) [[unlikely]] return; }
L_0035DECC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DED4u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035DED4u) [[unlikely]] return; }
L_0035DED4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E400; } }
    c.budget -= 1;
L_0035DEE0:
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DEF4u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035DEF4u) [[unlikely]] return; }
L_0035DEF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DEFCu); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035DEFCu) [[unlikely]] return; }
L_0035DEFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DF04u);  if (depth < kMaxDepth) unit_0098(c, 529u, depth + 1u); else { c.pc = 0x00363720u; return; } if (c.pc != 0x0035DF04u) [[unlikely]] return; }
L_0035DF04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (t) { goto L_0035DF20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DF14u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035DF14u) [[unlikely]] return; }
L_0035DF14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035DF28; } }
    c.budget -= 1;
L_0035DF20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DF28u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 606u, depth + 1u); else { c.pc = 0x00363E50u; return; } if (c.pc != 0x0035DF28u) [[unlikely]] return; }
L_0035DF28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DF30u); set32(c.r[4], 0u + 1024u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035DF30u) [[unlikely]] return; }
L_0035DF30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DF38u);  if (depth < kMaxDepth) unit_0098(c, 615u, depth + 1u); else { c.pc = 0x00363FF0u; return; } if (c.pc != 0x0035DF38u) [[unlikely]] return; }
L_0035DF38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E400; } }
L_0035DF40:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0035E400; } }
L_0035DF50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DF58u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0035DF58u) [[unlikely]] return; }
L_0035DF58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DF60u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x0035DF60u) [[unlikely]] return; }
L_0035DF60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DF68u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_0099(c, 22u, depth + 1u); else { c.pc = 0x00364460u; return; } if (c.pc != 0x0035DF68u) [[unlikely]] return; }
L_0035DF68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DF70u);  if (depth < kMaxDepth) unit_009F(c, 298u, depth + 1u); else { c.pc = 0x0037E680u; return; } if (c.pc != 0x0035DF70u) [[unlikely]] return; }
L_0035DF70:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0035DFB8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0035DF90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E400; } }
    c.budget -= 1;
L_0035DF90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DF98u); set32(c.r[4], 0u + 1024u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035DF98u) [[unlikely]] return; }
L_0035DF98:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 2u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DFB0u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 615u, depth + 1u); else { c.pc = 0x00363FF0u; return; } if (c.pc != 0x0035DFB0u) [[unlikely]] return; }
L_0035DFB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E400; } }
L_0035DFB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DFC0u); set32(c.r[4], 0u + 1024u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035DFC0u) [[unlikely]] return; }
L_0035DFC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 2u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DFD8u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 615u, depth + 1u); else { c.pc = 0x00363FF0u; return; } if (c.pc != 0x0035DFD8u) [[unlikely]] return; }
L_0035DFD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E400; } }
L_0035DFE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DFE8u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0035DFE8u) [[unlikely]] return; }
L_0035DFE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DFF0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x0035DFF0u) [[unlikely]] return; }
L_0035DFF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DFF8u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_0099(c, 22u, depth + 1u); else { c.pc = 0x00364460u; return; } if (c.pc != 0x0035DFF8u) [[unlikely]] return; }
L_0035DFF8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035E400; } }
    set32(c.r[2], 0u + 300u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E03Cu); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 611u, depth + 1u); else { c.pc = 0x00363F10u; return; } if (c.pc != 0x0035E03Cu) [[unlikely]] return; }
L_0035E03C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E400; } }
    c.budget -= 1;
L_0035E048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E050u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0035E050u) [[unlikely]] return; }
L_0035E050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E058u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x0035E058u) [[unlikely]] return; }
L_0035E058:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E060u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_0099(c, 22u, depth + 1u); else { c.pc = 0x00364460u; return; } if (c.pc != 0x0035E060u) [[unlikely]] return; }
L_0035E060:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E068u); set32(c.r[4], 0u + 126u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0035E068u) [[unlikely]] return; }
L_0035E068:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 1024u);  if (t) { goto L_0035E0D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E080u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035E080u) [[unlikely]] return; }
L_0035E080:
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], c.r[4].w[0] + 5060u);
    c.r[5].d[0] = 0ull + 0ull;
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E0A8u); set32(c.r[6], 0u + 21u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0035E0A8u) [[unlikely]] return; }
L_0035E0A8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E0B4u); set32(c.r[4], c.r[2].w[0] + 92u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0035E0B4u) [[unlikely]] return; }
L_0035E0B4:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], c.r[4].w[0] + 5060u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E0CCu); set32(c.r[5], c.r[2].w[0] + 92u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0035E0CCu) [[unlikely]] return; }
L_0035E0CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E400; } }
    c.budget -= 1;
L_0035E0D8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < 240ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0035E400; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E100u);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x0035E100u) [[unlikely]] return; }
L_0035E100:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1024u);  if (t) { goto L_0035E400; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E110u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035E110u) [[unlikely]] return; }
L_0035E110:
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], c.r[4].w[0] + 5060u);
    c.r[5].d[0] = 0ull + 0ull;
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E138u); set32(c.r[6], 0u + 21u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0035E138u) [[unlikely]] return; }
L_0035E138:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E144u); set32(c.r[4], c.r[2].w[0] + 92u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0035E144u) [[unlikely]] return; }
L_0035E144:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], c.r[4].w[0] + 5060u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E15Cu); set32(c.r[5], c.r[2].w[0] + 92u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0035E15Cu) [[unlikely]] return; }
L_0035E15C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E400; } }
    c.budget -= 1;
L_0035E168:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E170u);  if (depth < kMaxDepth) unit_0098(c, 542u, depth + 1u); else { c.pc = 0x00363870u; return; } if (c.pc != 0x0035E170u) [[unlikely]] return; }
L_0035E170:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035E400; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E18Cu); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 601u, depth + 1u); else { c.pc = 0x00363D80u; return; } if (c.pc != 0x0035E18Cu) [[unlikely]] return; }
L_0035E18C:
    c.budget -= 1;
L_0035E190:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_0035E400; } }
L_0035E198:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E1A0u);  if (depth < kMaxDepth) unit_0098(c, 542u, depth + 1u); else { c.pc = 0x00363870u; return; } if (c.pc != 0x0035E1A0u) [[unlikely]] return; }
L_0035E1A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035E400; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E1BCu); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 601u, depth + 1u); else { c.pc = 0x00363D80u; return; } if (c.pc != 0x0035E1BCu) [[unlikely]] return; }
L_0035E1BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E1C4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 552u, depth + 1u); else { c.pc = 0x003639A0u; return; } if (c.pc != 0x0035E1C4u) [[unlikely]] return; }
L_0035E1C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E1CCu);  if (depth < kMaxDepth) unit_0098(c, 556u, depth + 1u); else { c.pc = 0x00363A00u; return; } if (c.pc != 0x0035E1CCu) [[unlikely]] return; }
L_0035E1CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E1D4u);  if (depth < kMaxDepth) unit_0098(c, 543u, depth + 1u); else { c.pc = 0x00363880u; return; } if (c.pc != 0x0035E1D4u) [[unlikely]] return; }
L_0035E1D4:
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4974u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0035E400; } }
    c.budget -= 1;
L_0035E1E8:
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] + 15536u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 16032u);
    set32(c.r[6], 0u + 56u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E214u); st32((c.r[28].w[0] - 23068u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0035E214u) [[unlikely]] return; }
L_0035E214:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E21Cu);  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x0035E21Cu) [[unlikely]] return; }
L_0035E21C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E224u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_008D(c, 130u, depth + 1u); else { c.pc = 0x003355C0u; return; } if (c.pc != 0x0035E224u) [[unlikely]] return; }
L_0035E224:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E400; } }
    c.budget -= 1;
L_0035E230:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E238u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_008D(c, 144u, depth + 1u); else { c.pc = 0x00335690u; return; } if (c.pc != 0x0035E238u) [[unlikely]] return; }
L_0035E238:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035E400; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E254u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A4(c, 232u, depth + 1u); else { c.pc = 0x00392DA0u; return; } if (c.pc != 0x0035E254u) [[unlikely]] return; }
L_0035E254:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E400; } }
    c.budget -= 1;
L_0035E260:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E268u);  if (depth < kMaxDepth) unit_008B(c, 62u, depth + 1u); else { c.pc = 0x0032C500u; return; } if (c.pc != 0x0035E268u) [[unlikely]] return; }
L_0035E268:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[2], c.r[2].w[0] + 16032u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E278u); st32((c.r[28].w[0] - 23068u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0089(c, 328u, depth + 1u); else { c.pc = 0x00327170u; return; } if (c.pc != 0x0035E278u) [[unlikely]] return; }
L_0035E278:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E280u);  if (depth < kMaxDepth) unit_00A4(c, 232u, depth + 1u); else { c.pc = 0x00392DA0u; return; } if (c.pc != 0x0035E280u) [[unlikely]] return; }
L_0035E280:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E28Cu); set32(c.r[4], c.r[4].w[0] + 15536u);  if (depth < kMaxDepth) unit_00A2(c, 27u, depth + 1u); else { c.pc = 0x003882A0u; return; } if (c.pc != 0x0035E28Cu) [[unlikely]] return; }
L_0035E28C:
    set32(c.r[3], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 1u);  if (t) { goto L_0035E2E0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0035E308; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0035E2B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E308; } }
    c.budget -= 1;
L_0035E2B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E2C0u);  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x0035E2C0u) [[unlikely]] return; }
L_0035E2C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E2C8u);  if (depth < kMaxDepth) unit_00A0(c, 270u, depth + 1u); else { c.pc = 0x00382700u; return; } if (c.pc != 0x0035E2C8u) [[unlikely]] return; }
L_0035E2C8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0035E308; } }
L_0035E2E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E2E8u);  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x0035E2E8u) [[unlikely]] return; }
L_0035E2E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E2F0u);  if (depth < kMaxDepth) unit_00A0(c, 270u, depth + 1u); else { c.pc = 0x00382700u; return; } if (c.pc != 0x0035E2F0u) [[unlikely]] return; }
L_0035E2F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_0035E308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E310u);  if (depth < kMaxDepth) unit_00AA(c, 78u, depth + 1u); else { c.pc = 0x003A8C50u; return; } if (c.pc != 0x0035E310u) [[unlikely]] return; }
L_0035E310:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E318u);  if (depth < kMaxDepth) unit_00AA(c, 55u, depth + 1u); else { c.pc = 0x003A8A90u; return; } if (c.pc != 0x0035E318u) [[unlikely]] return; }
L_0035E318:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E320u);  if (depth < kMaxDepth) unit_00AA(c, 36u, depth + 1u); else { c.pc = 0x003A8430u; return; } if (c.pc != 0x0035E320u) [[unlikely]] return; }
L_0035E320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E328u);  if (depth < kMaxDepth) unit_006B(c, 17u, depth + 1u); else { c.pc = 0x002AC350u; return; } if (c.pc != 0x0035E328u) [[unlikely]] return; }
L_0035E328:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E330u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x0035E330u) [[unlikely]] return; }
L_0035E330:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E338u);  if (depth < kMaxDepth) unit_00AA(c, 78u, depth + 1u); else { c.pc = 0x003A8C50u; return; } if (c.pc != 0x0035E338u) [[unlikely]] return; }
L_0035E338:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E340u);  if (depth < kMaxDepth) unit_008B(c, 22u, depth + 1u); else { c.pc = 0x0032C1B0u; return; } if (c.pc != 0x0035E340u) [[unlikely]] return; }
L_0035E340:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E348u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x0035E348u) [[unlikely]] return; }
L_0035E348:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E354u); set32(c.r[4], c.r[4].w[0] - 15024u);  if (depth < kMaxDepth) unit_0043(c, 416u, depth + 1u); else { c.pc = 0x0020FEF0u; return; } if (c.pc != 0x0035E354u) [[unlikely]] return; }
L_0035E354:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E35Cu);  if (depth < kMaxDepth) unit_00AA(c, 55u, depth + 1u); else { c.pc = 0x003A8A90u; return; } if (c.pc != 0x0035E35Cu) [[unlikely]] return; }
L_0035E35C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E364u);  if (depth < kMaxDepth) unit_00AA(c, 36u, depth + 1u); else { c.pc = 0x003A8430u; return; } if (c.pc != 0x0035E364u) [[unlikely]] return; }
L_0035E364:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00390000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E370u); set32(c.r[4], c.r[4].w[0] - 21072u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x0035E370u) [[unlikely]] return; }
L_0035E370:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E400; } }
L_0035E378:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[2], c.r[2].w[0] + 16032u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E38Cu); st32((c.r[28].w[0] - 23068u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 384u, depth + 1u); else { c.pc = 0x0020F700u; return; } if (c.pc != 0x0035E38Cu) [[unlikely]] return; }
L_0035E38C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E394u);  if (depth < kMaxDepth) unit_004D(c, 130u, depth + 1u); else { c.pc = 0x002362E0u; return; } if (c.pc != 0x0035E394u) [[unlikely]] return; }
L_0035E394:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E39Cu);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x0035E39Cu) [[unlikely]] return; }
L_0035E39C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E3A4u);  if (depth < kMaxDepth) unit_0043(c, 413u, depth + 1u); else { c.pc = 0x0020FEA0u; return; } if (c.pc != 0x0035E3A4u) [[unlikely]] return; }
L_0035E3A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E3ACu);  if (depth < kMaxDepth) unit_008B(c, 6u, depth + 1u); else { c.pc = 0x0032C080u; return; } if (c.pc != 0x0035E3ACu) [[unlikely]] return; }
L_0035E3AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E3B4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 552u, depth + 1u); else { c.pc = 0x003639A0u; return; } if (c.pc != 0x0035E3B4u) [[unlikely]] return; }
L_0035E3B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E3BCu);  if (depth < kMaxDepth) unit_0098(c, 556u, depth + 1u); else { c.pc = 0x00363A00u; return; } if (c.pc != 0x0035E3BCu) [[unlikely]] return; }
L_0035E3BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E3C4u);  if (depth < kMaxDepth) unit_0098(c, 543u, depth + 1u); else { c.pc = 0x00363880u; return; } if (c.pc != 0x0035E3C4u) [[unlikely]] return; }
L_0035E3C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E3CCu);  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x0035E3CCu) [[unlikely]] return; }
L_0035E3CC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E3D8u); st8((c.r[1].w[0] + 5648u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008D(c, 322u, depth + 1u); else { c.pc = 0x003374B0u; return; } if (c.pc != 0x0035E3D8u) [[unlikely]] return; }
L_0035E3D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E3E0u);  if (depth < kMaxDepth) unit_00A2(c, 308u, depth + 1u); else { c.pc = 0x0038AB30u; return; } if (c.pc != 0x0035E3E0u) [[unlikely]] return; }
L_0035E3E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[1].w[0] + 4974u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4977u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
L_0035E400:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035E420:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 24640u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[2].w[0] + 20u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    st32((c.r[5].w[0] + 16u), c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E458u); st8((c.r[5].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0035E458u) [[unlikely]] return; }
L_0035E458:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0035E468; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0035E490; } }
L_0035E468:
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    st8((c.r[3].w[0] + 32u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E480u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 138u, depth + 1u); else { c.pc = 0x0011E108u; return; } if (c.pc != 0x0035E480u) [[unlikely]] return; }
L_0035E480:
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[3].d[0];
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
L_0035E490:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0035E4A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0035E7D0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 7248u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0035C000u < 16384u) { entry = entries_0097[(t - 0x0035C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0035E4E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E4E8u);  if (depth < kMaxDepth) unit_0097(c, 71u, depth + 1u); else { c.pc = 0x0035CF00u; return; } if (c.pc != 0x0035E4E8u) [[unlikely]] return; }
L_0035E4E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035E7D0; } }
    st16((c.r[1].w[0] + 4968u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E50Cu); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 543u, depth + 1u); else { c.pc = 0x00363880u; return; } if (c.pc != 0x0035E50Cu) [[unlikely]] return; }
L_0035E50C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E514u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 557u, depth + 1u); else { c.pc = 0x00363A10u; return; } if (c.pc != 0x0035E514u) [[unlikely]] return; }
L_0035E514:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E7D0; } }
    c.budget -= 1;
L_0035E520:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E528u);  if (depth < kMaxDepth) unit_0097(c, 75u, depth + 1u); else { c.pc = 0x0035CF60u; return; } if (c.pc != 0x0035E528u) [[unlikely]] return; }
L_0035E528:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035E7D0; } }
    set32(c.r[2], 0u + 45u);
    st16((c.r[1].w[0] + 4968u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4977u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0035E580; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E56Cu);  if (depth < kMaxDepth) unit_0098(c, 608u, depth + 1u); else { c.pc = 0x00363EB0u; return; } if (c.pc != 0x0035E56Cu) [[unlikely]] return; }
L_0035E56C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E574u);  if (depth < kMaxDepth) unit_0098(c, 609u, depth + 1u); else { c.pc = 0x00363ED0u; return; } if (c.pc != 0x0035E574u) [[unlikely]] return; }
L_0035E574:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E57Cu);  if (depth < kMaxDepth) unit_0098(c, 613u, depth + 1u); else { c.pc = 0x00363F70u; return; } if (c.pc != 0x0035E57Cu) [[unlikely]] return; }
L_0035E57C:
    c.budget -= 1;
L_0035E580:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E58Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 614u, depth + 1u); else { c.pc = 0x00363F90u; return; } if (c.pc != 0x0035E58Cu) [[unlikely]] return; }
L_0035E58C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E594u);  if (depth < kMaxDepth) unit_0097(c, 59u, depth + 1u); else { c.pc = 0x0035CDD0u; return; } if (c.pc != 0x0035E594u) [[unlikely]] return; }
L_0035E594:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E7D0; } }
    c.budget -= 1;
L_0035E5A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E5A8u); set32(c.r[4], 0u + 54u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0035E5A8u) [[unlikely]] return; }
L_0035E5A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E5B0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x0035E5B0u) [[unlikely]] return; }
L_0035E5B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035E740; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E5C8u);  if (depth < kMaxDepth) unit_0098(c, 521u, depth + 1u); else { c.pc = 0x00363640u; return; } if (c.pc != 0x0035E5C8u) [[unlikely]] return; }
L_0035E5C8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00F80000u);
    set32(c.r[5], 0u + 1u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 5792u)));
    set32(c.r[4], 0u + 2u);
    c.r[3].d[0] = c.r[2].d[0] & 4096ull;
    if (c.r[6].d[0] != 0) c.r[5].d[0] = c.r[4].d[0];
    c.r[4].d[0] = c.r[5].d[0] << 48;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (t) { goto L_0035E648; } }
    c.r[2].d[0] = c.r[4].d[0] << 48;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4968u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = c.hi.d[0];
    st16((c.r[1].w[0] + 4968u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    c.budget -= 18;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0035E6B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E63Cu);  if (depth < kMaxDepth) unit_0098(c, 518u, depth + 1u); else { c.pc = 0x00363610u; return; } if (c.pc != 0x0035E63Cu) [[unlikely]] return; }
L_0035E63C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E6B0; } }
    c.budget -= 1;
L_0035E648:
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035E6B0; } }
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[2], c.r[4].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4968u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    mmi::div(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = c.hi.d[0];
    st16((c.r[1].w[0] + 4968u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    c.budget -= 20;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035E6B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E6ACu);  if (depth < kMaxDepth) unit_0098(c, 518u, depth + 1u); else { c.pc = 0x00363610u; return; } if (c.pc != 0x0035E6ACu) [[unlikely]] return; }
L_0035E6AC:
    c.budget -= 1;
L_0035E6B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[2], c.r[2].w[0] + 45u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E6C4u); c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0035E6C4u) [[unlikely]] return; }
L_0035E6C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E6CCu);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x0035E6CCu) [[unlikely]] return; }
L_0035E6CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 512u);  if (t) { goto L_0035E720; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E6DCu); st8((c.r[28].w[0] - 23720u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035E6DCu) [[unlikely]] return; }
L_0035E6DC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0035E708; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035E708; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035E708; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E7D0; } }
L_0035E708:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0035E7D0; } }
L_0035E720:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E728u);  if (depth < kMaxDepth) unit_0098(c, 531u, depth + 1u); else { c.pc = 0x00363760u; return; } if (c.pc != 0x0035E728u) [[unlikely]] return; }
L_0035E728:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035E7D0; } }
    set32(c.r[2], 0u + 5u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0035E7D0; } }
L_0035E740:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0035E7D0; } }
L_0035E750:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E758u);  if (depth < kMaxDepth) unit_0098(c, 542u, depth + 1u); else { c.pc = 0x00363870u; return; } if (c.pc != 0x0035E758u) [[unlikely]] return; }
L_0035E758:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035E7D0; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0035E770:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[4], 0u + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E784u); set32(c.r[16], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035E784u) [[unlikely]] return; }
L_0035E784:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E78Cu); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035E78Cu) [[unlikely]] return; }
L_0035E78C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E7D0; } }
    c.budget -= 1;
L_0035E798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E7A0u);  if (depth < kMaxDepth) unit_0098(c, 542u, depth + 1u); else { c.pc = 0x00363870u; return; } if (c.pc != 0x0035E7A0u) [[unlikely]] return; }
L_0035E7A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035E7D0; } }
    set32(c.r[4], 0u + 128u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E7C0u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035E7C0u) [[unlikely]] return; }
L_0035E7C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E7C8u); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035E7C8u) [[unlikely]] return; }
L_0035E7C8:
    set32(c.r[16], 0u - 1u);
    c.budget -= 2;
L_0035E7D0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035E7F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u + 101u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0035EC90; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 6u);  if (t) { goto L_0035EC70; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035EC68; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_0035EBC8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035EB20; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0035EA70; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035E908; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035E8A0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035E868; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035EC98; } }
L_0035E868:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E870u); set32(c.r[4], 0u + 54u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0035E870u) [[unlikely]] return; }
L_0035E870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E878u);  if (depth < kMaxDepth) unit_0097(c, 71u, depth + 1u); else { c.pc = 0x0035CF00u; return; } if (c.pc != 0x0035E878u) [[unlikely]] return; }
L_0035E878:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035EC98; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E894u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 543u, depth + 1u); else { c.pc = 0x00363880u; return; } if (c.pc != 0x0035E894u) [[unlikely]] return; }
L_0035E894:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035EC98; } }
    c.budget -= 1;
L_0035E8A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E8A8u);  if (depth < kMaxDepth) unit_0097(c, 75u, depth + 1u); else { c.pc = 0x0035CF60u; return; } if (c.pc != 0x0035E8A8u) [[unlikely]] return; }
L_0035E8A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 54u);  if (t) { goto L_0035EC98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E8B8u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0035E8B8u) [[unlikely]] return; }
L_0035E8B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 45u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E8E8u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 611u, depth + 1u); else { c.pc = 0x00363F10u; return; } if (c.pc != 0x0035E8E8u) [[unlikely]] return; }
L_0035E8E8:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E8F4u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0099(c, 2u, depth + 1u); else { c.pc = 0x00364020u; return; } if (c.pc != 0x0035E8F4u) [[unlikely]] return; }
L_0035E8F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E8FCu);  if (depth < kMaxDepth) unit_0097(c, 59u, depth + 1u); else { c.pc = 0x0035CDD0u; return; } if (c.pc != 0x0035E8FCu) [[unlikely]] return; }
L_0035E8FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035EC98; } }
    c.budget -= 1;
L_0035E908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E910u); set32(c.r[4], 0u + 54u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0035E910u) [[unlikely]] return; }
L_0035E910:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E918u); set32(c.r[4], 0u + 23u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0035E918u) [[unlikely]] return; }
L_0035E918:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E920u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0035E920u) [[unlikely]] return; }
L_0035E920:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E928u); set32(c.r[4], 0u + 25u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0035E928u) [[unlikely]] return; }
L_0035E928:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E930u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 22u, depth + 1u); else { c.pc = 0x00364460u; return; } if (c.pc != 0x0035E930u) [[unlikely]] return; }
L_0035E930:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E938u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0099(c, 22u, depth + 1u); else { c.pc = 0x00364460u; return; } if (c.pc != 0x0035E938u) [[unlikely]] return; }
L_0035E938:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E940u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x0035E940u) [[unlikely]] return; }
L_0035E940:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035EA60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E958u);  if (depth < kMaxDepth) unit_0098(c, 521u, depth + 1u); else { c.pc = 0x00363640u; return; } if (c.pc != 0x0035E958u) [[unlikely]] return; }
L_0035E958:
    c.r[3].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035E988; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035E9B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E978u);  if (depth < kMaxDepth) unit_0098(c, 518u, depth + 1u); else { c.pc = 0x00363610u; return; } if (c.pc != 0x0035E978u) [[unlikely]] return; }
L_0035E978:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0035E9B8; } }
    c.budget -= 1;
L_0035E988:
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035E9B8; } }
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035E9B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E9ACu);  if (depth < kMaxDepth) unit_0098(c, 518u, depth + 1u); else { c.pc = 0x00363610u; return; } if (c.pc != 0x0035E9ACu) [[unlikely]] return; }
L_0035E9AC:
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0035E9B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E9C0u);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x0035E9C0u) [[unlikely]] return; }
L_0035E9C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1024u);  if (t) { goto L_0035EA20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E9D0u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035E9D0u) [[unlikely]] return; }
L_0035E9D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E9D8u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035E9D8u) [[unlikely]] return; }
L_0035E9D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E9E0u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035E9E0u) [[unlikely]] return; }
L_0035E9E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E9E8u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035E9E8u) [[unlikely]] return; }
L_0035E9E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035EA10; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0035EC98; } }
    c.budget -= 1;
L_0035EA10:
    set32(c.r[2], 0u + 100u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0035EC98; } }
L_0035EA20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EA28u);  if (depth < kMaxDepth) unit_0098(c, 531u, depth + 1u); else { c.pc = 0x00363760u; return; } if (c.pc != 0x0035EA28u) [[unlikely]] return; }
L_0035EA28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1024u);  if (t) { goto L_0035EC98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EA38u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035EA38u) [[unlikely]] return; }
L_0035EA38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EA40u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035EA40u) [[unlikely]] return; }
L_0035EA40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EA48u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035EA48u) [[unlikely]] return; }
L_0035EA48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EA50u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 606u, depth + 1u); else { c.pc = 0x00363E50u; return; } if (c.pc != 0x0035EA50u) [[unlikely]] return; }
L_0035EA50:
    set32(c.r[2], 0u + 100u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0035EC98; } }
L_0035EA60:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0035EC98; } }
L_0035EA70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EA78u); set32(c.r[4], 0u + 54u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0035EA78u) [[unlikely]] return; }
L_0035EA78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EA80u);  if (depth < kMaxDepth) unit_0098(c, 558u, depth + 1u); else { c.pc = 0x00363A20u; return; } if (c.pc != 0x0035EA80u) [[unlikely]] return; }
L_0035EA80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F70000u);
    set32(c.r[4], c.r[4].w[0] + 4936u);
    c.r[5].d[0] = c.r[2].d[0] | 59744ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EA98u); set32(c.r[6], 0u + 11u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0035EA98u) [[unlikely]] return; }
L_0035EA98:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F70000u);
    set32(c.r[4], c.r[4].w[0] + 4920u);
    c.r[5].d[0] = c.r[2].d[0] | 59755ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EAB0u); set32(c.r[6], 0u + 9u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0035EAB0u) [[unlikely]] return; }
L_0035EAB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F70000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] | 59744ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EAC4u); set32(c.r[6], 0u + 11u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0035EAC4u) [[unlikely]] return; }
L_0035EAC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F70000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] | 59755ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EAD8u); set32(c.r[6], 0u + 9u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0035EAD8u) [[unlikely]] return; }
L_0035EAD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[2], c.r[2].w[0] + 16032u);
    set32(c.r[4], c.r[4].w[0] + 4752u);
    st32((c.r[28].w[0] - 23068u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EAF8u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0035EAF8u) [[unlikely]] return; }
L_0035EAF8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EB18u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 610u, depth + 1u); else { c.pc = 0x00363EF0u; return; } if (c.pc != 0x0035EB18u) [[unlikely]] return; }
L_0035EB18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035EC98; } }
L_0035EB20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EB28u); set32(c.r[4], 0u + 54u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0035EB28u) [[unlikely]] return; }
L_0035EB28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EB30u);  if (depth < kMaxDepth) unit_009F(c, 229u, depth + 1u); else { c.pc = 0x0037DD00u; return; } if (c.pc != 0x0035EB30u) [[unlikely]] return; }
L_0035EB30:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0035EB80; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0035EB58; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035EC98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035EC98; } }
    c.budget -= 1;
L_0035EB58:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EB70u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 612u, depth + 1u); else { c.pc = 0x00363F40u; return; } if (c.pc != 0x0035EB70u) [[unlikely]] return; }
L_0035EB70:
    set32(c.r[2], 0u + 180u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0035EC98; } }
L_0035EB80:
    set32(c.r[2], 0u + 100u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 4936u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F70000u);
    set32(c.r[6], 0u + 11u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EBA4u); c.r[4].d[0] = c.r[2].d[0] | 59744ull;  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0035EBA4u) [[unlikely]] return; }
L_0035EBA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F70000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[5], c.r[5].w[0] + 4920u);
    c.r[4].d[0] = c.r[2].d[0] | 59755ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EBBCu); set32(c.r[6], 0u + 9u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0035EBBCu) [[unlikely]] return; }
L_0035EBBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035EC98; } }
    c.budget -= 1;
L_0035EBC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EBD0u); set32(c.r[4], 0u + 54u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0035EBD0u) [[unlikely]] return; }
L_0035EBD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EBD8u); set32(c.r[4], 0u + 26u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0035EBD8u) [[unlikely]] return; }
L_0035EBD8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035EC20; } }
    set32(c.r[4], 0u + 1024u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EC14u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035EC14u) [[unlikely]] return; }
L_0035EC14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035EC98; } }
    c.budget -= 1;
L_0035EC20:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.r[1].d[0] = c.r[2].sd[0] < 120ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0035EC98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EC3Cu);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x0035EC3Cu) [[unlikely]] return; }
L_0035EC3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035EC98; } }
    set32(c.r[4], 0u + 1024u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EC5Cu); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035EC5Cu) [[unlikely]] return; }
L_0035EC5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035EC98; } }
    c.budget -= 1;
L_0035EC68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0035EC98; } }
L_0035EC70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EC78u);  if (depth < kMaxDepth) unit_0098(c, 542u, depth + 1u); else { c.pc = 0x00363870u; return; } if (c.pc != 0x0035EC78u) [[unlikely]] return; }
L_0035EC78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035EC98; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0035EC90:
    set32(c.r[16], 0u - 1u);
    c.budget -= 2;
L_0035EC98:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035ECB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0035F058; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 7280u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0035C000u < 16384u) { entry = entries_0097[(t - 0x0035C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0035ECF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035ECF8u);  if (depth < kMaxDepth) unit_0097(c, 71u, depth + 1u); else { c.pc = 0x0035CF00u; return; } if (c.pc != 0x0035ECF8u) [[unlikely]] return; }
L_0035ECF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035F058; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035ED18u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 557u, depth + 1u); else { c.pc = 0x00363A10u; return; } if (c.pc != 0x0035ED18u) [[unlikely]] return; }
L_0035ED18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035ED20u);  if (depth < kMaxDepth) unit_0098(c, 543u, depth + 1u); else { c.pc = 0x00363880u; return; } if (c.pc != 0x0035ED20u) [[unlikely]] return; }
L_0035ED20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F058; } }
L_0035ED28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035ED30u);  if (depth < kMaxDepth) unit_0097(c, 75u, depth + 1u); else { c.pc = 0x0035CF60u; return; } if (c.pc != 0x0035ED30u) [[unlikely]] return; }
L_0035ED30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035F058; } }
    set32(c.r[2], 0u + 45u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 2u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00F80000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 4990u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0035ED78; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4968u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0035ED80; } }
    c.budget -= 1;
L_0035ED78:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4968u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_0035ED80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035ED88u);  if (depth < kMaxDepth) unit_0098(c, 608u, depth + 1u); else { c.pc = 0x00363EB0u; return; } if (c.pc != 0x0035ED88u) [[unlikely]] return; }
L_0035ED88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035ED90u);  if (depth < kMaxDepth) unit_0098(c, 609u, depth + 1u); else { c.pc = 0x00363ED0u; return; } if (c.pc != 0x0035ED90u) [[unlikely]] return; }
L_0035ED90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035ED98u);  if (depth < kMaxDepth) unit_0098(c, 613u, depth + 1u); else { c.pc = 0x00363F70u; return; } if (c.pc != 0x0035ED98u) [[unlikely]] return; }
L_0035ED98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EDA0u);  if (depth < kMaxDepth) unit_0099(c, 8u, depth + 1u); else { c.pc = 0x003641C0u; return; } if (c.pc != 0x0035EDA0u) [[unlikely]] return; }
L_0035EDA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EDA8u);  if (depth < kMaxDepth) unit_0099(c, 9u, depth + 1u); else { c.pc = 0x003641F0u; return; } if (c.pc != 0x0035EDA8u) [[unlikely]] return; }
L_0035EDA8:
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EDB4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 614u, depth + 1u); else { c.pc = 0x00363F90u; return; } if (c.pc != 0x0035EDB4u) [[unlikely]] return; }
L_0035EDB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EDBCu);  if (depth < kMaxDepth) unit_0097(c, 59u, depth + 1u); else { c.pc = 0x0035CDD0u; return; } if (c.pc != 0x0035EDBCu) [[unlikely]] return; }
L_0035EDBC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4977u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0035F058; } }
    set32(c.r[5], 0u + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EDDCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 545u, depth + 1u); else { c.pc = 0x003638B0u; return; } if (c.pc != 0x0035EDDCu) [[unlikely]] return; }
L_0035EDDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F058; } }
    c.budget -= 1;
L_0035EDE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EDF0u); set32(c.r[4], 0u + 55u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0035EDF0u) [[unlikely]] return; }
L_0035EDF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EDF8u); set32(c.r[4], 0u + 31u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0035EDF8u) [[unlikely]] return; }
L_0035EDF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EE00u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0099(c, 22u, depth + 1u); else { c.pc = 0x00364460u; return; } if (c.pc != 0x0035EE00u) [[unlikely]] return; }
L_0035EE00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EE08u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0099(c, 22u, depth + 1u); else { c.pc = 0x00364460u; return; } if (c.pc != 0x0035EE08u) [[unlikely]] return; }
L_0035EE08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EE10u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x0035EE10u) [[unlikely]] return; }
L_0035EE10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035EFF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EE28u);  if (depth < kMaxDepth) unit_0098(c, 521u, depth + 1u); else { c.pc = 0x00363640u; return; } if (c.pc != 0x0035EE28u) [[unlikely]] return; }
L_0035EE28:
    c.r[3].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035EE78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EE3Cu);  if (depth < kMaxDepth) unit_0098(c, 518u, depth + 1u); else { c.pc = 0x00363610u; return; } if (c.pc != 0x0035EE3Cu) [[unlikely]] return; }
L_0035EE3C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 5u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4968u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4968u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0035EEC0; } }
    c.budget -= 1;
L_0035EE78:
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035EEC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EE8Cu);  if (depth < kMaxDepth) unit_0098(c, 518u, depth + 1u); else { c.pc = 0x00363610u; return; } if (c.pc != 0x0035EE8Cu) [[unlikely]] return; }
L_0035EE8C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 5u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4968u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = c.hi.d[0];
    st16((c.r[1].w[0] + 4968u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 13;
L_0035EEC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[2], c.r[2].w[0] + 47u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EED4u); c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0035EED4u) [[unlikely]] return; }
L_0035EED4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EEDCu);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x0035EEDCu) [[unlikely]] return; }
L_0035EEDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 512u);  if (t) { goto L_0035EFD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EEECu); st8((c.r[28].w[0] - 23720u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035EEECu) [[unlikely]] return; }
L_0035EEEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EEF4u); set32(c.r[4], 0u + 128u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035EEF4u) [[unlikely]] return; }
L_0035EEF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EEFCu); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035EEFCu) [[unlikely]] return; }
L_0035EEFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EF04u); set32(c.r[4], 0u + 512u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035EF04u) [[unlikely]] return; }
L_0035EF04:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 4u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0035EFA0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035EF68; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0035EF48; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035EF48; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035EF48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F058; } }
    c.budget -= 1;
L_0035EF48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EF50u);  if (depth < kMaxDepth) unit_0098(c, 602u, depth + 1u); else { c.pc = 0x00363D90u; return; } if (c.pc != 0x0035EF50u) [[unlikely]] return; }
L_0035EF50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0035F058; } }
L_0035EF68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EF70u);  if (depth < kMaxDepth) unit_0098(c, 601u, depth + 1u); else { c.pc = 0x00363D80u; return; } if (c.pc != 0x0035EF70u) [[unlikely]] return; }
L_0035EF70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[5], 0u + 20u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EF94u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 545u, depth + 1u); else { c.pc = 0x003638B0u; return; } if (c.pc != 0x0035EF94u) [[unlikely]] return; }
L_0035EF94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F058; } }
    c.budget -= 1;
L_0035EFA0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[4], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EFBCu); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035EFBCu) [[unlikely]] return; }
L_0035EFBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EFC4u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035EFC4u) [[unlikely]] return; }
L_0035EFC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F058; } }
    c.budget -= 1;
L_0035EFD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EFD8u);  if (depth < kMaxDepth) unit_0098(c, 531u, depth + 1u); else { c.pc = 0x00363760u; return; } if (c.pc != 0x0035EFD8u) [[unlikely]] return; }
L_0035EFD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035F058; } }
    set32(c.r[2], 0u + 5u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0035F058; } }
L_0035EFF0:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0035F058; } }
L_0035F000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F008u);  if (depth < kMaxDepth) unit_0098(c, 542u, depth + 1u); else { c.pc = 0x00363870u; return; } if (c.pc != 0x0035F008u) [[unlikely]] return; }
L_0035F008:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035F058; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0035F020:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + 1u);  if (t) { goto L_0035F058; } }
L_0035F030:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F038u);  if (depth < kMaxDepth) unit_0098(c, 542u, depth + 1u); else { c.pc = 0x00363870u; return; } if (c.pc != 0x0035F038u) [[unlikely]] return; }
L_0035F038:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035F058; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0035F050:
    set32(c.r[16], 0u - 1u);
    c.budget -= 2;
L_0035F058:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035F070:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0035F450; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 7312u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0035C000u < 16384u) { entry = entries_0097[(t - 0x0035C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0035F0B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F0B8u);  if (depth < kMaxDepth) unit_0097(c, 71u, depth + 1u); else { c.pc = 0x0035CF00u; return; } if (c.pc != 0x0035F0B8u) [[unlikely]] return; }
L_0035F0B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035F450; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F0D8u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 557u, depth + 1u); else { c.pc = 0x00363A10u; return; } if (c.pc != 0x0035F0D8u) [[unlikely]] return; }
L_0035F0D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F0E0u);  if (depth < kMaxDepth) unit_0098(c, 543u, depth + 1u); else { c.pc = 0x00363880u; return; } if (c.pc != 0x0035F0E0u) [[unlikely]] return; }
L_0035F0E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F450; } }
L_0035F0E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F0F0u);  if (depth < kMaxDepth) unit_0097(c, 75u, depth + 1u); else { c.pc = 0x0035CF60u; return; } if (c.pc != 0x0035F0F0u) [[unlikely]] return; }
L_0035F0F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035F450; } }
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F124u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 608u, depth + 1u); else { c.pc = 0x00363EB0u; return; } if (c.pc != 0x0035F124u) [[unlikely]] return; }
L_0035F124:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F12Cu);  if (depth < kMaxDepth) unit_0098(c, 610u, depth + 1u); else { c.pc = 0x00363EF0u; return; } if (c.pc != 0x0035F12Cu) [[unlikely]] return; }
L_0035F12C:
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F138u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 2u, depth + 1u); else { c.pc = 0x00364020u; return; } if (c.pc != 0x0035F138u) [[unlikely]] return; }
L_0035F138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F140u);  if (depth < kMaxDepth) unit_0097(c, 59u, depth + 1u); else { c.pc = 0x0035CDD0u; return; } if (c.pc != 0x0035F140u) [[unlikely]] return; }
L_0035F140:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4977u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0035F450; } }
    set32(c.r[5], 0u + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F160u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 545u, depth + 1u); else { c.pc = 0x003638B0u; return; } if (c.pc != 0x0035F160u) [[unlikely]] return; }
L_0035F160:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F450; } }
L_0035F168:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F170u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0035F170u) [[unlikely]] return; }
L_0035F170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F178u); set32(c.r[4], 0u + 9u);  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x0035F178u) [[unlikely]] return; }
L_0035F178:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035F2C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F190u);  if (depth < kMaxDepth) unit_0098(c, 521u, depth + 1u); else { c.pc = 0x00363640u; return; } if (c.pc != 0x0035F190u) [[unlikely]] return; }
L_0035F190:
    c.r[3].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035F1E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F1A4u);  if (depth < kMaxDepth) unit_0098(c, 518u, depth + 1u); else { c.pc = 0x00363610u; return; } if (c.pc != 0x0035F1A4u) [[unlikely]] return; }
L_0035F1A4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4968u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4968u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0035F228; } }
    c.budget -= 1;
L_0035F1E0:
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035F228; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F1F4u);  if (depth < kMaxDepth) unit_0098(c, 518u, depth + 1u); else { c.pc = 0x00363610u; return; } if (c.pc != 0x0035F1F4u) [[unlikely]] return; }
L_0035F1F4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4968u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = c.hi.d[0];
    st16((c.r[1].w[0] + 4968u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 13;
L_0035F228:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F230u);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x0035F230u) [[unlikely]] return; }
L_0035F230:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035F278; } }
    set32(c.r[2], 0u + 30u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F25Cu); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035F25Cu) [[unlikely]] return; }
L_0035F25C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F264u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035F264u) [[unlikely]] return; }
L_0035F264:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F26Cu); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035F26Cu) [[unlikely]] return; }
L_0035F26C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F450; } }
    c.budget -= 1;
L_0035F278:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F280u);  if (depth < kMaxDepth) unit_0098(c, 531u, depth + 1u); else { c.pc = 0x00363760u; return; } if (c.pc != 0x0035F280u) [[unlikely]] return; }
L_0035F280:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035F450; } }
    set32(c.r[2], 0u + 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F29Cu); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035F29Cu) [[unlikely]] return; }
L_0035F29C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F2A4u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035F2A4u) [[unlikely]] return; }
L_0035F2A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F2ACu); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035F2ACu) [[unlikely]] return; }
L_0035F2AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F2B4u); set32(c.r[4], 0u + 1024u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035F2B4u) [[unlikely]] return; }
L_0035F2B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F450; } }
    c.budget -= 1;
L_0035F2C0:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0035F450; } }
L_0035F2D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[4], 0u + 1024u);  if (t) { goto L_0035F3B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F2FCu);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035F2FCu) [[unlikely]] return; }
L_0035F2FC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0035F388; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035F378; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035F328; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F450; } }
L_0035F328:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4960u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0035F360; } }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035F360; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F450; } }
L_0035F360:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F370u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0098(c, 545u, depth + 1u); else { c.pc = 0x003638B0u; return; } if (c.pc != 0x0035F370u) [[unlikely]] return; }
L_0035F370:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F450; } }
L_0035F378:
    set32(c.r[2], 0u + 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0035F450; } }
L_0035F388:
    set32(c.r[2], 0u + 8u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 20u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F3A4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0098(c, 545u, depth + 1u); else { c.pc = 0x003638B0u; return; } if (c.pc != 0x0035F3A4u) [[unlikely]] return; }
L_0035F3A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F450; } }
    c.budget -= 1;
L_0035F3B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F3B8u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0035F3B8u) [[unlikely]] return; }
L_0035F3B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F450; } }
L_0035F3C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F3C8u);  if (depth < kMaxDepth) unit_0098(c, 542u, depth + 1u); else { c.pc = 0x00363870u; return; } if (c.pc != 0x0035F3C8u) [[unlikely]] return; }
L_0035F3C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035F450; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F3E4u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 601u, depth + 1u); else { c.pc = 0x00363D80u; return; } if (c.pc != 0x0035F3E4u) [[unlikely]] return; }
L_0035F3E4:
    c.budget -= 1;
L_0035F3E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0035F450; } }
L_0035F3F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F3F8u);  if (depth < kMaxDepth) unit_0098(c, 542u, depth + 1u); else { c.pc = 0x00363870u; return; } if (c.pc != 0x0035F3F8u) [[unlikely]] return; }
L_0035F3F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035F450; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F414u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 602u, depth + 1u); else { c.pc = 0x00363D90u; return; } if (c.pc != 0x0035F414u) [[unlikely]] return; }
L_0035F414:
    c.budget -= 1;
L_0035F418:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_0035F450; } }
L_0035F420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F428u);  if (depth < kMaxDepth) unit_0098(c, 542u, depth + 1u); else { c.pc = 0x00363870u; return; } if (c.pc != 0x0035F428u) [[unlikely]] return; }
L_0035F428:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035F450; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F444u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 601u, depth + 1u); else { c.pc = 0x00363D80u; return; } if (c.pc != 0x0035F444u) [[unlikely]] return; }
L_0035F444:
    c.budget -= 1;
L_0035F448:
    set32(c.r[16], 0u + 2u);
    c.budget -= 2;
L_0035F450:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035F470:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_0035F678; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 7360u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0035C000u < 16384u) { entry = entries_0097[(t - 0x0035C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0035F4A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F4B0u);  if (depth < kMaxDepth) unit_0097(c, 71u, depth + 1u); else { c.pc = 0x0035CF00u; return; } if (c.pc != 0x0035F4B0u) [[unlikely]] return; }
L_0035F4B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035F678; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F4D0u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 557u, depth + 1u); else { c.pc = 0x00363A10u; return; } if (c.pc != 0x0035F4D0u) [[unlikely]] return; }
L_0035F4D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F4D8u);  if (depth < kMaxDepth) unit_0098(c, 543u, depth + 1u); else { c.pc = 0x00363880u; return; } if (c.pc != 0x0035F4D8u) [[unlikely]] return; }
L_0035F4D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F678; } }
L_0035F4E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F4E8u);  if (depth < kMaxDepth) unit_0097(c, 75u, depth + 1u); else { c.pc = 0x0035CF60u; return; } if (c.pc != 0x0035F4E8u) [[unlikely]] return; }
L_0035F4E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035F678; } }
    set32(c.r[2], 0u + 300u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F510u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 608u, depth + 1u); else { c.pc = 0x00363EB0u; return; } if (c.pc != 0x0035F510u) [[unlikely]] return; }
L_0035F510:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F518u);  if (depth < kMaxDepth) unit_0098(c, 611u, depth + 1u); else { c.pc = 0x00363F10u; return; } if (c.pc != 0x0035F518u) [[unlikely]] return; }
L_0035F518:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4977u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0035F678; } }
    set32(c.r[5], 0u + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F538u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 545u, depth + 1u); else { c.pc = 0x003638B0u; return; } if (c.pc != 0x0035F538u) [[unlikely]] return; }
L_0035F538:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F678; } }
L_0035F540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F548u); set32(c.r[4], 0u + 159u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0035F548u) [[unlikely]] return; }
L_0035F548:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F550u);  if (depth < kMaxDepth) unit_0098(c, 521u, depth + 1u); else { c.pc = 0x00363640u; return; } if (c.pc != 0x0035F550u) [[unlikely]] return; }
L_0035F550:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035F598; } }
    set32(c.r[2], 0u + 30u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0035F678; } }
    c.budget -= 1;
L_0035F598:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.r[1].d[0] = c.r[2].sd[0] < 271ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0035F678; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F5B4u);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x0035F5B4u) [[unlikely]] return; }
L_0035F5B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035F678; } }
    set32(c.r[2], 0u + 30u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0035F678; } }
    c.budget -= 1;
L_0035F5E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[4], 0u + 1024u);  if (t) { goto L_0035F638; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F60Cu);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035F60Cu) [[unlikely]] return; }
L_0035F60C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[5], 0u + 20u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F630u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 545u, depth + 1u); else { c.pc = 0x003638B0u; return; } if (c.pc != 0x0035F630u) [[unlikely]] return; }
L_0035F630:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F678; } }
L_0035F638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F640u); set32(c.r[4], 0u + 159u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0035F640u) [[unlikely]] return; }
L_0035F640:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F678; } }
L_0035F648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F650u);  if (depth < kMaxDepth) unit_0098(c, 542u, depth + 1u); else { c.pc = 0x00363870u; return; } if (c.pc != 0x0035F650u) [[unlikely]] return; }
L_0035F650:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035F678; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F66Cu); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 601u, depth + 1u); else { c.pc = 0x00363D80u; return; } if (c.pc != 0x0035F66Cu) [[unlikely]] return; }
L_0035F66C:
    c.budget -= 1;
L_0035F670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F678u);  if (depth < kMaxDepth) unit_008D(c, 16u, depth + 1u); else { c.pc = 0x00334180u; return; } if (c.pc != 0x0035F678u) [[unlikely]] return; }
L_0035F678:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035F690:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0035F840; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 7408u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0035C000u < 16384u) { entry = entries_0097[(t - 0x0035C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0035F6D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F6D8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0097(c, 62u, depth + 1u); else { c.pc = 0x0035CE00u; return; } if (c.pc != 0x0035F6D8u) [[unlikely]] return; }
L_0035F6D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035F840; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F6F8u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 557u, depth + 1u); else { c.pc = 0x00363A10u; return; } if (c.pc != 0x0035F6F8u) [[unlikely]] return; }
L_0035F6F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F700u);  if (depth < kMaxDepth) unit_0098(c, 543u, depth + 1u); else { c.pc = 0x00363880u; return; } if (c.pc != 0x0035F700u) [[unlikely]] return; }
L_0035F700:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F840; } }
L_0035F708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F710u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0097(c, 69u, depth + 1u); else { c.pc = 0x0035CEC0u; return; } if (c.pc != 0x0035F710u) [[unlikely]] return; }
L_0035F710:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035F840; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[4], c.r[4].w[0] + 18288u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 256u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F73Cu); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0035F73Cu) [[unlikely]] return; }
L_0035F73C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 18288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F750u); set32(c.r[5], c.r[5].w[0] + 7384u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0035F750u) [[unlikely]] return; }
L_0035F750:
    set32(c.r[4], 0u + 1u);
    st8((c.r[28].w[0] - 23720u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F760u); st8((c.r[28].w[0] - 22084u), static_cast<std::uint8_t>(0u));  call(c, 0x011902A0u, depth + 1u); if (c.pc != 0x0035F760u) [[unlikely]] return; }
L_0035F760:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F840; } }
L_0035F768:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F770u);  call(c, 0x01190820u, depth + 1u); if (c.pc != 0x0035F770u) [[unlikely]] return; }
L_0035F770:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0035F7B8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0035F798; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035F840; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F840; } }
    c.budget -= 1;
L_0035F798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F7A0u);  call(c, 0x01190570u, depth + 1u); if (c.pc != 0x0035F7A0u) [[unlikely]] return; }
L_0035F7A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0035F840; } }
L_0035F7B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F7C0u);  call(c, 0x01190570u, depth + 1u); if (c.pc != 0x0035F7C0u) [[unlikely]] return; }
L_0035F7C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0035F840; } }
L_0035F7D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F7E0u);  if (depth < kMaxDepth) unit_0098(c, 542u, depth + 1u); else { c.pc = 0x00363870u; return; } if (c.pc != 0x0035F7E0u) [[unlikely]] return; }
L_0035F7E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035F840; } }
    set32(c.r[2], 0u + 60u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0035F840; } }
L_0035F808:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[2], c.r[4].w[0] + 1u);  if (t) { goto L_0035F840; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0035F838:
    set32(c.r[16], 0u + 1u);
    c.budget -= 2;
L_0035F840:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035F860:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0035FCC8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 7440u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0035C000u < 16384u) { entry = entries_0097[(t - 0x0035C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0035F8A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F8A8u);  if (depth < kMaxDepth) unit_0097(c, 71u, depth + 1u); else { c.pc = 0x0035CF00u; return; } if (c.pc != 0x0035F8A8u) [[unlikely]] return; }
L_0035F8A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035FCC8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F8C8u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 557u, depth + 1u); else { c.pc = 0x00363A10u; return; } if (c.pc != 0x0035F8C8u) [[unlikely]] return; }
L_0035F8C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F8D0u);  if (depth < kMaxDepth) unit_0098(c, 543u, depth + 1u); else { c.pc = 0x00363880u; return; } if (c.pc != 0x0035F8D0u) [[unlikely]] return; }
L_0035F8D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035FCC8; } }
L_0035F8D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F8E0u);  if (depth < kMaxDepth) unit_0097(c, 75u, depth + 1u); else { c.pc = 0x0035CF60u; return; } if (c.pc != 0x0035F8E0u) [[unlikely]] return; }
L_0035F8E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035FCC8; } }
    set32(c.r[2], 0u + 45u);
    st16((c.r[1].w[0] + 4968u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 4980u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F920u); st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0099(c, 12u, depth + 1u); else { c.pc = 0x00364250u; return; } if (c.pc != 0x0035F920u) [[unlikely]] return; }
L_0035F920:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F928u);  if (depth < kMaxDepth) unit_0099(c, 9u, depth + 1u); else { c.pc = 0x003641F0u; return; } if (c.pc != 0x0035F928u) [[unlikely]] return; }
L_0035F928:
    set32(c.r[4], 0u + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F934u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0099(c, 2u, depth + 1u); else { c.pc = 0x00364020u; return; } if (c.pc != 0x0035F934u) [[unlikely]] return; }
L_0035F934:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F93Cu);  if (depth < kMaxDepth) unit_0097(c, 59u, depth + 1u); else { c.pc = 0x0035CDD0u; return; } if (c.pc != 0x0035F93Cu) [[unlikely]] return; }
L_0035F93C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035FCC8; } }
    c.budget -= 1;
L_0035F948:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F950u); set32(c.r[4], 0u + 56u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0035F950u) [[unlikely]] return; }
L_0035F950:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F958u); set32(c.r[4], 0u + 40u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0035F958u) [[unlikely]] return; }
L_0035F958:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F960u); set32(c.r[4], 0u + 31u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0035F960u) [[unlikely]] return; }
L_0035F960:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F968u); set32(c.r[4], 0u + 10u);  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x0035F968u) [[unlikely]] return; }
L_0035F968:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F970u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0099(c, 22u, depth + 1u); else { c.pc = 0x00364460u; return; } if (c.pc != 0x0035F970u) [[unlikely]] return; }
L_0035F970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F978u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0099(c, 22u, depth + 1u); else { c.pc = 0x00364460u; return; } if (c.pc != 0x0035F978u) [[unlikely]] return; }
L_0035F978:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035FB00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F990u);  if (depth < kMaxDepth) unit_0098(c, 521u, depth + 1u); else { c.pc = 0x00363640u; return; } if (c.pc != 0x0035F990u) [[unlikely]] return; }
L_0035F990:
    c.r[3].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035F9C0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035F9F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F9B0u);  if (depth < kMaxDepth) unit_0098(c, 518u, depth + 1u); else { c.pc = 0x00363610u; return; } if (c.pc != 0x0035F9B0u) [[unlikely]] return; }
L_0035F9B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0035F9F0; } }
    c.budget -= 1;
L_0035F9C0:
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035F9F0; } }
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035F9F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F9E4u);  if (depth < kMaxDepth) unit_0098(c, 518u, depth + 1u); else { c.pc = 0x00363610u; return; } if (c.pc != 0x0035F9E4u) [[unlikely]] return; }
L_0035F9E4:
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0035F9F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F9F8u); set32(c.r[4], 0u + 52u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0035F9F8u) [[unlikely]] return; }
L_0035F9F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FA00u);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x0035FA00u) [[unlikely]] return; }
L_0035FA00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);  if (t) { goto L_0035FAA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FA10u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035FA10u) [[unlikely]] return; }
L_0035FA10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FA18u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035FA18u) [[unlikely]] return; }
L_0035FA18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FA20u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035FA20u) [[unlikely]] return; }
L_0035FA20:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[1].w[0] + 4980u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0035FA60; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[5], 0u + 20u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FA58u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 545u, depth + 1u); else { c.pc = 0x003638B0u; return; } if (c.pc != 0x0035FA58u) [[unlikely]] return; }
L_0035FA58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035FCC8; } }
L_0035FA60:
    set32(c.r[2], 0u + 45u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[6], 0u + 5u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], c.r[4].w[0] + 4912u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FA88u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0035FA88u) [[unlikely]] return; }
L_0035FA88:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], c.r[4].w[0] + 4912u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FA9Cu); set32(c.r[5], c.r[5].w[0] + 4995u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0035FA9Cu) [[unlikely]] return; }
L_0035FA9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035FCC8; } }
    c.budget -= 1;
L_0035FAA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FAB0u);  if (depth < kMaxDepth) unit_0098(c, 531u, depth + 1u); else { c.pc = 0x00363760u; return; } if (c.pc != 0x0035FAB0u) [[unlikely]] return; }
L_0035FAB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);  if (t) { goto L_0035FCC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FAC0u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035FAC0u) [[unlikely]] return; }
L_0035FAC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FAC8u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035FAC8u) [[unlikely]] return; }
L_0035FAC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FAD0u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 606u, depth + 1u); else { c.pc = 0x00363E50u; return; } if (c.pc != 0x0035FAD0u) [[unlikely]] return; }
L_0035FAD0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[5], 0u + 20u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FAF4u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 545u, depth + 1u); else { c.pc = 0x003638B0u; return; } if (c.pc != 0x0035FAF4u) [[unlikely]] return; }
L_0035FAF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035FCC8; } }
    c.budget -= 1;
L_0035FB00:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0035FCC8; } }
L_0035FB10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FB18u);  if (depth < kMaxDepth) unit_0098(c, 542u, depth + 1u); else { c.pc = 0x00363870u; return; } if (c.pc != 0x0035FB18u) [[unlikely]] return; }
L_0035FB18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035FCC8; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FB34u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 602u, depth + 1u); else { c.pc = 0x00363D90u; return; } if (c.pc != 0x0035FB34u) [[unlikely]] return; }
L_0035FB34:
    c.budget -= 1;
L_0035FB38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_0035FCC8; } }
L_0035FB40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FB48u); set32(c.r[4], 0u + 56u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0035FB48u) [[unlikely]] return; }
L_0035FB48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FB50u); set32(c.r[4], 0u + 146u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0035FB50u) [[unlikely]] return; }
L_0035FB50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FB58u); set32(c.r[4], 0u + 31u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0035FB58u) [[unlikely]] return; }
L_0035FB58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FB60u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0099(c, 22u, depth + 1u); else { c.pc = 0x00364460u; return; } if (c.pc != 0x0035FB60u) [[unlikely]] return; }
L_0035FB60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FB68u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0099(c, 22u, depth + 1u); else { c.pc = 0x00364460u; return; } if (c.pc != 0x0035FB68u) [[unlikely]] return; }
L_0035FB68:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035FC38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FB80u);  if (depth < kMaxDepth) unit_0099(c, 28u, depth + 1u); else { c.pc = 0x003645F0u; return; } if (c.pc != 0x0035FB80u) [[unlikely]] return; }
L_0035FB80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_0035FCC8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035FC00; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 4995u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FBA0u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0035FBA0u) [[unlikely]] return; }
L_0035FBA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FBA8u);  if (depth < kMaxDepth) unit_00A2(c, 335u, depth + 1u); else { c.pc = 0x0038AE00u; return; } if (c.pc != 0x0035FBA8u) [[unlikely]] return; }
L_0035FBA8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 4995u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FBBCu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0035FBBCu) [[unlikely]] return; }
L_0035FBBC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 45u);
    st8((c.r[1].w[0] + 4999u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[5], 0u + 20u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[6], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FBF4u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 545u, depth + 1u); else { c.pc = 0x003638B0u; return; } if (c.pc != 0x0035FBF4u) [[unlikely]] return; }
L_0035FBF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035FC20; } }
    c.budget -= 1;
L_0035FC00:
    set32(c.r[2], 0u + 45u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[5], 0u + 2u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FC20u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_0099(c, 2u, depth + 1u); else { c.pc = 0x00364020u; return; } if (c.pc != 0x0035FC20u) [[unlikely]] return; }
L_0035FC20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FC28u);  if (depth < kMaxDepth) unit_0099(c, 31u, depth + 1u); else { c.pc = 0x00364620u; return; } if (c.pc != 0x0035FC28u) [[unlikely]] return; }
L_0035FC28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FC30u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00400000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035FC30u) [[unlikely]] return; }
L_0035FC30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035FCC8; } }
L_0035FC38:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_0035FCC8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FC60u); set32(c.r[6], 0u + 128u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0035FC60u) [[unlikely]] return; }
L_0035FC60:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FC70u); set32(c.r[5], c.r[5].w[0] + 4912u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0035FC70u) [[unlikely]] return; }
L_0035FC70:
    set32(c.r[4], 0u + 76u);
    set32(c.r[5], 0u + 298u);
    set32(c.r[6], c.r[29].w[0] + 32u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FC88u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0099(c, 32u, depth + 1u); else { c.pc = 0x00364630u; return; } if (c.pc != 0x0035FC88u) [[unlikely]] return; }
L_0035FC88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FC90u);  if (depth < kMaxDepth) unit_0099(c, 14u, depth + 1u); else { c.pc = 0x00364290u; return; } if (c.pc != 0x0035FC90u) [[unlikely]] return; }
L_0035FC90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035FCC8; } }
L_0035FC98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FCA0u);  if (depth < kMaxDepth) unit_0098(c, 542u, depth + 1u); else { c.pc = 0x00363870u; return; } if (c.pc != 0x0035FCA0u) [[unlikely]] return; }
L_0035FCA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035FCC8; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FCBCu); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 602u, depth + 1u); else { c.pc = 0x00363D90u; return; } if (c.pc != 0x0035FCBCu) [[unlikely]] return; }
L_0035FCBC:
    c.budget -= 1;
L_0035FCC0:
    set32(c.r[16], 0u + 1u);
    c.budget -= 2;
L_0035FCC8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0035FCE0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0098(c, 50u, depth); } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 7472u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0035C000u < 16384u) { entry = entries_0097[(t - 0x0035C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0035FD20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FD28u);  if (depth < kMaxDepth) unit_0097(c, 71u, depth + 1u); else { c.pc = 0x0035CF00u; return; } if (c.pc != 0x0035FD28u) [[unlikely]] return; }
L_0035FD28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { [[clang::musttail]] return unit_0098(c, 50u, depth); } }
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FD48u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 557u, depth + 1u); else { c.pc = 0x00363A10u; return; } if (c.pc != 0x0035FD48u) [[unlikely]] return; }
L_0035FD48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FD50u);  if (depth < kMaxDepth) unit_0098(c, 543u, depth + 1u); else { c.pc = 0x00363880u; return; } if (c.pc != 0x0035FD50u) [[unlikely]] return; }
L_0035FD50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0098(c, 50u, depth); } }
L_0035FD58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FD60u);  if (depth < kMaxDepth) unit_0097(c, 75u, depth + 1u); else { c.pc = 0x0035CF60u; return; } if (c.pc != 0x0035FD60u) [[unlikely]] return; }
L_0035FD60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { [[clang::musttail]] return unit_0098(c, 50u, depth); } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4961u));
    set32(c.r[2], 0u + 45u);
    set32(c.r[4], c.r[4].w[0] + 4982u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 13u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FD98u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0035FD98u) [[unlikely]] return; }
L_0035FD98:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FDA4u); st16((c.r[1].w[0] + 4968u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0098(c, 610u, depth + 1u); else { c.pc = 0x00363EF0u; return; } if (c.pc != 0x0035FDA4u) [[unlikely]] return; }
L_0035FDA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FDACu);  if (depth < kMaxDepth) unit_0099(c, 11u, depth + 1u); else { c.pc = 0x00364230u; return; } if (c.pc != 0x0035FDACu) [[unlikely]] return; }
L_0035FDAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FDB4u);  if (depth < kMaxDepth) unit_0097(c, 59u, depth + 1u); else { c.pc = 0x0035CDD0u; return; } if (c.pc != 0x0035FDB4u) [[unlikely]] return; }
L_0035FDB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0098(c, 50u, depth); } }
    c.budget -= 1;
L_0035FDC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FDC8u); set32(c.r[4], 0u + 33u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0035FDC8u) [[unlikely]] return; }
L_0035FDC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FDD0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0099(c, 22u, depth + 1u); else { c.pc = 0x00364460u; return; } if (c.pc != 0x0035FDD0u) [[unlikely]] return; }
L_0035FDD0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035FE80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FDE8u);  if (depth < kMaxDepth) unit_0099(c, 28u, depth + 1u); else { c.pc = 0x003645F0u; return; } if (c.pc != 0x0035FDE8u) [[unlikely]] return; }
L_0035FDE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u - 1u);  if (t) { [[clang::musttail]] return unit_0098(c, 50u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035FE58; } }
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4961u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FE18u); st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A2(c, 335u, depth + 1u); else { c.pc = 0x0038AE00u; return; } if (c.pc != 0x0035FE18u) [[unlikely]] return; }
L_0035FE18:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 4982u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FE2Cu); set32(c.r[6], 0u + 12u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0035FE2Cu) [[unlikely]] return; }
L_0035FE2C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 45u);
    st8((c.r[1].w[0] + 4994u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], 0u + 7u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FE4Cu); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0099(c, 2u, depth + 1u); else { c.pc = 0x00364020u; return; } if (c.pc != 0x0035FE4Cu) [[unlikely]] return; }
L_0035FE4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035FE68; } }
    c.budget -= 1;
L_0035FE58:
    set32(c.r[2], 0u + 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0035FE68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FE70u);  if (depth < kMaxDepth) unit_0099(c, 31u, depth + 1u); else { c.pc = 0x00364620u; return; } if (c.pc != 0x0035FE70u) [[unlikely]] return; }
L_0035FE70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FE78u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00400000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035FE78u) [[unlikely]] return; }
L_0035FE78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0098(c, 50u, depth); } }
L_0035FE80:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { [[clang::musttail]] return unit_0098(c, 50u, depth); } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FEA8u); set32(c.r[6], 0u + 128u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0035FEA8u) [[unlikely]] return; }
L_0035FEA8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FEB8u); set32(c.r[5], c.r[5].w[0] + 4982u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0035FEB8u) [[unlikely]] return; }
L_0035FEB8:
    set32(c.r[4], 0u + 76u);
    set32(c.r[5], 0u + 298u);
    set32(c.r[6], c.r[29].w[0] + 32u);
    set32(c.r[7], 0u + 12u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FED0u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 32u, depth + 1u); else { c.pc = 0x00364630u; return; } if (c.pc != 0x0035FED0u) [[unlikely]] return; }
L_0035FED0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FED8u);  if (depth < kMaxDepth) unit_0099(c, 14u, depth + 1u); else { c.pc = 0x00364290u; return; } if (c.pc != 0x0035FED8u) [[unlikely]] return; }
L_0035FED8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0098(c, 50u, depth); } }
L_0035FEE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FEE8u); set32(c.r[4], 0u + 33u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0035FEE8u) [[unlikely]] return; }
L_0035FEE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FEF0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0099(c, 22u, depth + 1u); else { c.pc = 0x00364460u; return; } if (c.pc != 0x0035FEF0u) [[unlikely]] return; }
L_0035FEF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FEF8u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x0035FEF8u) [[unlikely]] return; }
L_0035FEF8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0098(c, 26u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FF10u);  if (depth < kMaxDepth) unit_0098(c, 521u, depth + 1u); else { c.pc = 0x00363640u; return; } if (c.pc != 0x0035FF10u) [[unlikely]] return; }
L_0035FF10:
    c.r[3].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035FF48; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035FF80; } }
L_0035FF28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FF30u);  if (depth < kMaxDepth) unit_0098(c, 518u, depth + 1u); else { c.pc = 0x00363610u; return; } if (c.pc != 0x0035FF30u) [[unlikely]] return; }
L_0035FF30:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0035FF80; } }
L_0035FF48:
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0035FF80; } }
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035FF80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FF6Cu);  if (depth < kMaxDepth) unit_0098(c, 518u, depth + 1u); else { c.pc = 0x00363610u; return; } if (c.pc != 0x0035FF6Cu) [[unlikely]] return; }
L_0035FF6C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
L_0035FF80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FF88u);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x0035FF88u) [[unlikely]] return; }
L_0035FF88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);  if (t) { [[clang::musttail]] return unit_0098(c, 21u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FF98u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035FF98u) [[unlikely]] return; }
L_0035FF98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FFA0u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035FFA0u) [[unlikely]] return; }
L_0035FFA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FFA8u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035FFA8u) [[unlikely]] return; }
L_0035FFA8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[6], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { [[clang::musttail]] return unit_0098(c, 10u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035FFD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0098(c, 20u, depth); } }
    c.budget -= 1;
L_0035FFD0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 4982u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 10u);  if (t) { [[clang::musttail]] return unit_0098(c, 5u, depth); } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4961u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], 0u + 1024u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FFFCu); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0035FFFCu) [[unlikely]] return; }
L_0035FFFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360004u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00040000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x00360004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0098(c, 2u, depth);
}

}
