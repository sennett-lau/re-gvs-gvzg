#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0062[4096] = {
    1, 2, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 0, 0, 0, 0,
    0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 19,
    0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0,
    0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0,
    0, 0, 33, 0, 34, 0, 0, 0, 0, 35, 0, 36, 0, 37, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 41, 0, 0, 42,
    0, 0, 43, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0,
    0, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 61, 0, 62, 0, 0, 0, 63,
    0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 68, 0, 0, 69, 0, 0, 70, 0, 0, 71, 0, 0, 0,
    0, 72, 0, 73, 0, 0, 74, 0, 0, 75, 0, 0, 76, 0, 0, 77, 0, 0, 78, 0, 0, 79, 0, 0, 80, 0, 81, 0, 0, 0, 82, 0,
    0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 88, 0, 0, 89, 0, 0, 90, 0, 0,
    0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0,
    0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0,
    0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 109, 0, 0, 0, 110, 0, 111, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0,
    118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0,
    0, 123, 0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 127, 0, 0, 0, 0, 0, 0, 128,
    0, 0, 129, 0, 0, 130, 0, 131, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137,
    0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0,
    147, 0, 0, 0, 0, 148, 0, 0, 149, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 157, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0,
    0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0,
    171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 178, 0,
    0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0,
    183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0,
    187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 196, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0,
    0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 227, 0, 0, 0, 0,
    228, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0,
    236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0,
    0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0,
    0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 256, 0, 0, 0,
    0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 261, 0, 0,
    0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0,
    266, 0, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0,
    270, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0,
    274, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0,
    0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0,
    0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293,
    0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 295, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0,
    298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0,
    0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0,
    0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0,
    0, 329, 0, 0, 0, 0, 0, 330, 0, 331, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0,
    0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 0,
    0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0,
    0, 346, 0, 0, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0, 0,
    0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 361, 0,
    0, 0, 362, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 366, 0, 0, 0,
    0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0,
    0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 373, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 377, 0, 0, 0,
    0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    384, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0,
    0, 0, 0, 387, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0,
    0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0,
    0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 400, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    408, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411,
    0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0,
    0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 422, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0,
    0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 429, 0, 0,
    0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 435, 0, 0, 436, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 442, 0, 443, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 446, 0, 447, 0, 0, 0, 448, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 450, 0, 0, 0, 451, 0, 0, 452, 0, 0, 0, 0,
    0, 0, 453, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0,
    0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 458, 0, 459, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0,
    0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 464, 0,
    0, 0, 0, 465, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 470, 0, 471, 0, 0, 472, 0, 473, 0, 0, 0, 0,
    474, 0, 475, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 480, 0, 481, 0, 0, 482, 0, 0, 0, 0, 0, 0, 483, 0, 484, 0, 485, 0,
    486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 488, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 490, 0, 0, 491, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 493, 0, 0, 494, 0, 495, 0, 0, 0, 0, 0,
};

void unit_0062(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00288000;
    case 2u: goto L_00288004;
    case 3u: goto L_00288010;
    case 4u: goto L_00288018;
    case 5u: goto L_00288030;
    case 6u: goto L_0028803C;
    case 7u: goto L_0028805C;
    case 8u: goto L_00288068;
    case 9u: goto L_00288088;
    case 10u: goto L_002880AC;
    case 11u: goto L_002880C4;
    case 12u: goto L_002880EC;
    case 13u: goto L_0028811C;
    case 14u: goto L_0028813C;
    case 15u: goto L_00288158;
    case 16u: goto L_002881B4;
    case 17u: goto L_002881D8;
    case 18u: goto L_002881EC;
    case 19u: goto L_002881FC;
    case 20u: goto L_00288214;
    case 21u: goto L_0028822C;
    case 22u: goto L_00288254;
    case 23u: goto L_00288270;
    case 24u: goto L_002882A0;
    case 25u: goto L_002882B8;
    case 26u: goto L_002882D8;
    case 27u: goto L_002882F0;
    case 28u: goto L_00288308;
    case 29u: goto L_00288320;
    case 30u: goto L_00288340;
    case 31u: goto L_00288358;
    case 32u: goto L_00288370;
    case 33u: goto L_00288388;
    case 34u: goto L_00288390;
    case 35u: goto L_002883A4;
    case 36u: goto L_002883AC;
    case 37u: goto L_002883B4;
    case 38u: goto L_002883BC;
    case 39u: goto L_002883D4;
    case 40u: goto L_002883E8;
    case 41u: goto L_002883F0;
    case 42u: goto L_002883FC;
    case 43u: goto L_00288408;
    case 44u: goto L_00288414;
    case 45u: goto L_00288440;
    case 46u: goto L_00288494;
    case 47u: goto L_002884BC;
    case 48u: goto L_002884D4;
    case 49u: goto L_002884E0;
    case 50u: goto L_002884F4;
    case 51u: goto L_00288514;
    case 52u: goto L_00288524;
    case 53u: goto L_0028852C;
    case 54u: goto L_00288540;
    case 55u: goto L_0028854C;
    case 56u: goto L_002885B0;
    case 57u: goto L_002885DC;
    case 58u: goto L_00288608;
    case 59u: goto L_00288648;
    case 60u: goto L_0028865C;
    case 61u: goto L_00288664;
    case 62u: goto L_0028866C;
    case 63u: goto L_0028867C;
    case 64u: goto L_00288688;
    case 65u: goto L_00288694;
    case 66u: goto L_002886A8;
    case 67u: goto L_002886C4;
    case 68u: goto L_002886CC;
    case 69u: goto L_002886D8;
    case 70u: goto L_002886E4;
    case 71u: goto L_002886F0;
    case 72u: goto L_00288704;
    case 73u: goto L_0028870C;
    case 74u: goto L_00288718;
    case 75u: goto L_00288724;
    case 76u: goto L_00288730;
    case 77u: goto L_0028873C;
    case 78u: goto L_00288748;
    case 79u: goto L_00288754;
    case 80u: goto L_00288760;
    case 81u: goto L_00288768;
    case 82u: goto L_00288778;
    case 83u: goto L_00288788;
    case 84u: goto L_002887A4;
    case 85u: goto L_002887AC;
    case 86u: goto L_002887C0;
    case 87u: goto L_002887CC;
    case 88u: goto L_002887DC;
    case 89u: goto L_002887E8;
    case 90u: goto L_002887F4;
    case 91u: goto L_00288818;
    case 92u: goto L_00288848;
    case 93u: goto L_00288854;
    case 94u: goto L_00288874;
    case 95u: goto L_00288888;
    case 96u: goto L_002888B8;
    case 97u: goto L_002888E4;
    case 98u: goto L_002888F8;
    case 99u: goto L_00288918;
    case 100u: goto L_0028893C;
    case 101u: goto L_0028894C;
    case 102u: goto L_00288964;
    case 103u: goto L_00288990;
    case 104u: goto L_002889B8;
    case 105u: goto L_002889D8;
    case 106u: goto L_002889E8;
    case 107u: goto L_00288A10;
    case 108u: goto L_00288A50;
    case 109u: goto L_00288A8C;
    case 110u: goto L_00288A9C;
    case 111u: goto L_00288AA4;
    case 112u: goto L_00288AB0;
    case 113u: goto L_00288AD8;
    case 114u: goto L_00288B10;
    case 115u: goto L_00288B30;
    case 116u: goto L_00288B4C;
    case 117u: goto L_00288B64;
    case 118u: goto L_00288B80;
    case 119u: goto L_00288BA0;
    case 120u: goto L_00288BB0;
    case 121u: goto L_00288BCC;
    case 122u: goto L_00288BE4;
    case 123u: goto L_00288C04;
    case 124u: goto L_00288C10;
    case 125u: goto L_00288C1C;
    case 126u: goto L_00288C58;
    case 127u: goto L_00288C60;
    case 128u: goto L_00288C7C;
    case 129u: goto L_00288C88;
    case 130u: goto L_00288C94;
    case 131u: goto L_00288C9C;
    case 132u: goto L_00288CA4;
    case 133u: goto L_00288CB8;
    case 134u: goto L_00288CCC;
    case 135u: goto L_00288CD4;
    case 136u: goto L_00288CE8;
    case 137u: goto L_00288CFC;
    case 138u: goto L_00288D20;
    case 139u: goto L_00288D28;
    case 140u: goto L_00288D34;
    case 141u: goto L_00288FA0;
    case 142u: goto L_00288FC4;
    case 143u: goto L_00288FF4;
    case 144u: goto L_00289020;
    case 145u: goto L_00289044;
    case 146u: goto L_00289078;
    case 147u: goto L_00289080;
    case 148u: goto L_00289094;
    case 149u: goto L_002890A0;
    case 150u: goto L_002890A8;
    case 151u: goto L_002890B8;
    case 152u: goto L_00289100;
    case 153u: goto L_00289118;
    case 154u: goto L_00289130;
    case 155u: goto L_00289148;
    case 156u: goto L_00289160;
    case 157u: goto L_00289168;
    case 158u: goto L_002891F0;
    case 159u: goto L_00289240;
    case 160u: goto L_00289268;
    case 161u: goto L_002892BC;
    case 162u: goto L_002892E4;
    case 163u: goto L_002892F4;
    case 164u: goto L_00289310;
    case 165u: goto L_00289338;
    case 166u: goto L_00289360;
    case 167u: goto L_00289388;
    case 168u: goto L_00289398;
    case 169u: goto L_002893B8;
    case 170u: goto L_002893F8;
    case 171u: goto L_00289400;
    case 172u: goto L_00289430;
    case 173u: goto L_00289460;
    case 174u: goto L_00289490;
    case 175u: goto L_002894B0;
    case 176u: goto L_002894D8;
    case 177u: goto L_002894F0;
    case 178u: goto L_002894F8;
    case 179u: goto L_00289508;
    case 180u: goto L_00289578;
    case 181u: goto L_002895B8;
    case 182u: goto L_002895E0;
    case 183u: goto L_00289600;
    case 184u: goto L_00289628;
    case 185u: goto L_0028963C;
    case 186u: goto L_00289660;
    case 187u: goto L_00289680;
    case 188u: goto L_00289690;
    case 189u: goto L_00289780;
    case 190u: goto L_002897D0;
    case 191u: goto L_002897F0;
    case 192u: goto L_00289828;
    case 193u: goto L_0028985C;
    case 194u: goto L_00289888;
    case 195u: goto L_002898D8;
    case 196u: goto L_0028990C;
    case 197u: goto L_00289918;
    case 198u: goto L_00289938;
    case 199u: goto L_00289940;
    case 200u: goto L_00289950;
    case 201u: goto L_00289970;
    case 202u: goto L_002899C0;
    case 203u: goto L_002899D0;
    case 204u: goto L_002899F0;
    case 205u: goto L_00289A1C;
    case 206u: goto L_00289A30;
    case 207u: goto L_00289A44;
    case 208u: goto L_00289A88;
    case 209u: goto L_00289A9C;
    case 210u: goto L_00289AB0;
    case 211u: goto L_00289AE8;
    case 212u: goto L_00289B40;
    case 213u: goto L_00289B58;
    case 214u: goto L_00289B70;
    case 215u: goto L_00289B88;
    case 216u: goto L_00289BC0;
    case 217u: goto L_00289C00;
    case 218u: goto L_00289C30;
    case 219u: goto L_00289C3C;
    case 220u: goto L_00289C88;
    case 221u: goto L_00289CB8;
    case 222u: goto L_00289CC8;
    case 223u: goto L_00289D08;
    case 224u: goto L_00289D18;
    case 225u: goto L_00289D4C;
    case 226u: goto L_00289D64;
    case 227u: goto L_00289D6C;
    case 228u: goto L_00289D80;
    case 229u: goto L_00289D88;
    case 230u: goto L_00289DA0;
    case 231u: goto L_00289DC0;
    case 232u: goto L_00289E0C;
    case 233u: goto L_00289E28;
    case 234u: goto L_00289E4C;
    case 235u: goto L_00289E5C;
    case 236u: goto L_00289E80;
    case 237u: goto L_00289E90;
    case 238u: goto L_00289EB4;
    case 239u: goto L_00289EC4;
    case 240u: goto L_00289EE8;
    case 241u: goto L_00289F08;
    case 242u: goto L_00289F50;
    case 243u: goto L_00289F60;
    case 244u: goto L_00289FA0;
    case 245u: goto L_00289FF8;
    case 246u: goto L_0028A008;
    case 247u: goto L_0028A048;
    case 248u: goto L_0028A0A8;
    case 249u: goto L_0028A0CC;
    case 250u: goto L_0028A110;
    case 251u: goto L_0028A158;
    case 252u: goto L_0028A188;
    case 253u: goto L_0028A1A4;
    case 254u: goto L_0028A1C8;
    case 255u: goto L_0028A1DC;
    case 256u: goto L_0028A1F0;
    case 257u: goto L_0028A20C;
    case 258u: goto L_0028A230;
    case 259u: goto L_0028A244;
    case 260u: goto L_0028A258;
    case 261u: goto L_0028A274;
    case 262u: goto L_0028A298;
    case 263u: goto L_0028A2AC;
    case 264u: goto L_0028A2C0;
    case 265u: goto L_0028A2E0;
    case 266u: goto L_0028A300;
    case 267u: goto L_0028A310;
    case 268u: goto L_0028A328;
    case 269u: goto L_0028A360;
    case 270u: goto L_0028A380;
    case 271u: goto L_0028A3A0;
    case 272u: goto L_0028A3BC;
    case 273u: goto L_0028A3E0;
    case 274u: goto L_0028A400;
    case 275u: goto L_0028A420;
    case 276u: goto L_0028A430;
    case 277u: goto L_0028A448;
    case 278u: goto L_0028A484;
    case 279u: goto L_0028A4AC;
    case 280u: goto L_0028A4C4;
    case 281u: goto L_0028A4D8;
    case 282u: goto L_0028A4EC;
    case 283u: goto L_0028A508;
    case 284u: goto L_0028A54C;
    case 285u: goto L_0028A574;
    case 286u: goto L_0028A58C;
    case 287u: goto L_0028A5A0;
    case 288u: goto L_0028A5B8;
    case 289u: goto L_0028A5D8;
    case 290u: goto L_0028A5F0;
    case 291u: goto L_0028A620;
    case 292u: goto L_0028A638;
    case 293u: goto L_0028A67C;
    case 294u: goto L_0028A6A0;
    case 295u: goto L_0028A6B0;
    case 296u: goto L_0028A6B8;
    case 297u: goto L_0028A6E8;
    case 298u: goto L_0028A700;
    case 299u: goto L_0028A728;
    case 300u: goto L_0028A738;
    case 301u: goto L_0028A778;
    case 302u: goto L_0028A798;
    case 303u: goto L_0028A7B8;
    case 304u: goto L_0028A7C8;
    case 305u: goto L_0028A7E0;
    case 306u: goto L_0028A818;
    case 307u: goto L_0028A8A0;
    case 308u: goto L_0028A8DC;
    case 309u: goto L_0028A904;
    case 310u: goto L_0028A91C;
    case 311u: goto L_0028A930;
    case 312u: goto L_0028A944;
    case 313u: goto L_0028A960;
    case 314u: goto L_0028A988;
    case 315u: goto L_0028A9A8;
    case 316u: goto L_0028A9C0;
    case 317u: goto L_0028A9D4;
    case 318u: goto L_0028A9EC;
    case 319u: goto L_0028AA08;
    case 320u: goto L_0028AA3C;
    case 321u: goto L_0028AA50;
    case 322u: goto L_0028AA68;
    case 323u: goto L_0028AA78;
    case 324u: goto L_0028AAB0;
    case 325u: goto L_0028AAD4;
    case 326u: goto L_0028AB18;
    case 327u: goto L_0028AB54;
    case 328u: goto L_0028AB6C;
    case 329u: goto L_0028AB84;
    case 330u: goto L_0028AB9C;
    case 331u: goto L_0028ABA4;
    case 332u: goto L_0028ABC4;
    case 333u: goto L_0028ABF0;
    case 334u: goto L_0028AC08;
    case 335u: goto L_0028AC28;
    case 336u: goto L_0028AC38;
    case 337u: goto L_0028AC48;
    case 338u: goto L_0028AC84;
    case 339u: goto L_0028ACAC;
    case 340u: goto L_0028ACC4;
    case 341u: goto L_0028ACD8;
    case 342u: goto L_0028ACEC;
    case 343u: goto L_0028AD08;
    case 344u: goto L_0028AD44;
    case 345u: goto L_0028AD6C;
    case 346u: goto L_0028AD84;
    case 347u: goto L_0028AD98;
    case 348u: goto L_0028ADAC;
    case 349u: goto L_0028ADC8;
    case 350u: goto L_0028AE04;
    case 351u: goto L_0028AE2C;
    case 352u: goto L_0028AE44;
    case 353u: goto L_0028AE58;
    case 354u: goto L_0028AE6C;
    case 355u: goto L_0028AE88;
    case 356u: goto L_0028AEA0;
    case 357u: goto L_0028AED0;
    case 358u: goto L_0028AF10;
    case 359u: goto L_0028AF38;
    case 360u: goto L_0028AF58;
    case 361u: goto L_0028AF78;
    case 362u: goto L_0028AF88;
    case 363u: goto L_0028AFA0;
    case 364u: goto L_0028AFC0;
    case 365u: goto L_0028AFE0;
    case 366u: goto L_0028AFF0;
    case 367u: goto L_0028B008;
    case 368u: goto L_0028B050;
    case 369u: goto L_0028B074;
    case 370u: goto L_0028B088;
    case 371u: goto L_0028B0B0;
    case 372u: goto L_0028B0D0;
    case 373u: goto L_0028B104;
    case 374u: goto L_0028B124;
    case 375u: goto L_0028B144;
    case 376u: goto L_0028B158;
    case 377u: goto L_0028B170;
    case 378u: goto L_0028B184;
    case 379u: goto L_0028B1AC;
    case 380u: goto L_0028B1D8;
    case 381u: goto L_0028B220;
    case 382u: goto L_0028B244;
    case 383u: goto L_0028B258;
    case 384u: goto L_0028B280;
    case 385u: goto L_0028B298;
    case 386u: goto L_0028B2E8;
    case 387u: goto L_0028B30C;
    case 388u: goto L_0028B320;
    case 389u: goto L_0028B34C;
    case 390u: goto L_0028B368;
    case 391u: goto L_0028B38C;
    case 392u: goto L_0028B3AC;
    case 393u: goto L_0028B3C0;
    case 394u: goto L_0028B3E0;
    case 395u: goto L_0028B3F0;
    case 396u: goto L_0028B414;
    case 397u: goto L_0028B428;
    case 398u: goto L_0028B438;
    case 399u: goto L_0028B460;
    case 400u: goto L_0028B478;
    case 401u: goto L_0028B4A0;
    case 402u: goto L_0028B4AC;
    case 403u: goto L_0028B4CC;
    case 404u: goto L_0028B510;
    case 405u: goto L_0028B520;
    case 406u: goto L_0028B530;
    case 407u: goto L_0028B558;
    case 408u: goto L_0028B580;
    case 409u: goto L_0028B5A0;
    case 410u: goto L_0028B5C8;
    case 411u: goto L_0028B5FC;
    case 412u: goto L_0028B60C;
    case 413u: goto L_0028B630;
    case 414u: goto L_0028B650;
    case 415u: goto L_0028B680;
    case 416u: goto L_0028B6AC;
    case 417u: goto L_0028B6D0;
    case 418u: goto L_0028B6F4;
    case 419u: goto L_0028B714;
    case 420u: goto L_0028B740;
    case 421u: goto L_0028B75C;
    case 422u: goto L_0028B788;
    case 423u: goto L_0028B7A0;
    case 424u: goto L_0028B7D0;
    case 425u: goto L_0028B7E8;
    case 426u: goto L_0028B804;
    case 427u: goto L_0028B83C;
    case 428u: goto L_0028B858;
    case 429u: goto L_0028B874;
    case 430u: goto L_0028B894;
    case 431u: goto L_0028B8C4;
    case 432u: goto L_0028B8CC;
    case 433u: goto L_0028B8F8;
    case 434u: goto L_0028B93C;
    case 435u: goto L_0028B944;
    case 436u: goto L_0028B950;
    case 437u: goto L_0028B964;
    case 438u: goto L_0028B9B8;
    case 439u: goto L_0028B9E8;
    case 440u: goto L_0028BA24;
    case 441u: goto L_0028BA70;
    case 442u: goto L_0028BA98;
    case 443u: goto L_0028BAA0;
    case 444u: goto L_0028BAA8;
    case 445u: goto L_0028BAD0;
    case 446u: goto L_0028BAE0;
    case 447u: goto L_0028BAE8;
    case 448u: goto L_0028BAF8;
    case 449u: goto L_0028BB40;
    case 450u: goto L_0028BB50;
    case 451u: goto L_0028BB60;
    case 452u: goto L_0028BB6C;
    case 453u: goto L_0028BB88;
    case 454u: goto L_0028BB9C;
    case 455u: goto L_0028BBC8;
    case 456u: goto L_0028BBF0;
    case 457u: goto L_0028BC0C;
    case 458u: goto L_0028BC28;
    case 459u: goto L_0028BC30;
    case 460u: goto L_0028BC40;
    case 461u: goto L_0028BC70;
    case 462u: goto L_0028BC8C;
    case 463u: goto L_0028BCD8;
    case 464u: goto L_0028BCF8;
    case 465u: goto L_0028BD0C;
    case 466u: goto L_0028BD24;
    case 467u: goto L_0028BD48;
    case 468u: goto L_0028BD60;
    case 469u: goto L_0028BDC8;
    case 470u: goto L_0028BDD0;
    case 471u: goto L_0028BDD8;
    case 472u: goto L_0028BDE4;
    case 473u: goto L_0028BDEC;
    case 474u: goto L_0028BE00;
    case 475u: goto L_0028BE08;
    case 476u: goto L_0028BE14;
    case 477u: goto L_0028BE40;
    case 478u: goto L_0028BE60;
    case 479u: goto L_0028BEB0;
    case 480u: goto L_0028BEB8;
    case 481u: goto L_0028BEC0;
    case 482u: goto L_0028BECC;
    case 483u: goto L_0028BEE8;
    case 484u: goto L_0028BEF0;
    case 485u: goto L_0028BEF8;
    case 486u: goto L_0028BF00;
    case 487u: goto L_0028BF28;
    case 488u: goto L_0028BF30;
    case 489u: goto L_0028BF50;
    case 490u: goto L_0028BF64;
    case 491u: goto L_0028BF70;
    case 492u: goto L_0028BFCC;
    case 493u: goto L_0028BFD4;
    case 494u: goto L_0028BFE0;
    case 495u: goto L_0028BFE8;
    default: bad_entry(c, 0x00288000u); return;
    }
L_00288000:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_00288004:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288010u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0060(c, 365u, depth + 1u); else { c.pc = 0x00283158u; return; } if (c.pc != 0x00288010u) [[unlikely]] return; }
L_00288010:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00288140; } }
L_00288018:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[4].d[0]) { set32(c.r[6], c.r[3].w[0] << 16);  goto L_00288048; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (t) { goto L_00288034; } }
    c.budget -= 1;
L_00288030:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00288034:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028803Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0060(c, 365u, depth + 1u); else { c.pc = 0x00283158u; return; } if (c.pc != 0x0028803Cu) [[unlikely]] return; }
L_0028803C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00288140; } }
    c.budget -= 1;
L_00288048:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028805Cu); set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0060(c, 365u, depth + 1u); else { c.pc = 0x00283158u; return; } if (c.pc != 0x0028805Cu) [[unlikely]] return; }
L_0028805C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00288140; } }
    c.budget -= 1;
L_00288068:
    set32(c.r[3], 0u - 128u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; set32(c.r[2], ld32((c.r[29].w[0])));  if (t) { goto L_00288090; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[6].d[0]; set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (t) { goto L_002880A0; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288088u); set32(c.r[6], 0u - 15u);  if (depth < kMaxDepth) unit_0060(c, 365u, depth + 1u); else { c.pc = 0x00283158u; return; } if (c.pc != 0x00288088u) [[unlikely]] return; }
L_00288088:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 68u)));  if (t) { goto L_002880C8; } }
L_00288090:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (t) { goto L_002880B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002880A4; } }
L_002880A0:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002880A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002880ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0060(c, 365u, depth + 1u); else { c.pc = 0x00283158u; return; } if (c.pc != 0x002880ACu) [[unlikely]] return; }
L_002880AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 68u)));  if (t) { goto L_002880C8; } }
    c.budget -= 1;
L_002880B8:
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002880C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0060(c, 365u, depth + 1u); else { c.pc = 0x00283158u; return; } if (c.pc != 0x002880C4u) [[unlikely]] return; }
L_002880C4:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 68u)));
    c.budget -= 1;
L_002880C8:
    set32(c.r[4], 0u - 128u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[4].d[0]; c.r[3].d[0] = ld16((c.r[16].w[0] + 68u));  if (t) { goto L_002880F8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0]; set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (t) { goto L_00288110; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002880ECu); set32(c.r[6], 0u + 15u);  if (depth < kMaxDepth) unit_0060(c, 365u, depth + 1u); else { c.pc = 0x00283158u; return; } if (c.pc != 0x002880ECu) [[unlikely]] return; }
L_002880EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00288140; } }
    c.budget -= 1;
L_002880F8:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[4].d[0]) { set32(c.r[6], c.r[3].w[0] << 16);  goto L_00288128; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (t) { goto L_00288114; } }
    c.budget -= 1;
L_00288110:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00288114:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028811Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0060(c, 365u, depth + 1u); else { c.pc = 0x00283158u; return; } if (c.pc != 0x0028811Cu) [[unlikely]] return; }
L_0028811C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00288140; } }
    c.budget -= 1;
L_00288128:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028813Cu); set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0060(c, 365u, depth + 1u); else { c.pc = 0x00283158u; return; } if (c.pc != 0x0028813Cu) [[unlikely]] return; }
L_0028813C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00288140:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00288158:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 120u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 136u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 152u)));
    set32(c.r[18], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], ld32((c.r[20].w[0] + 20u)));  if (t) { goto L_00288414; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    st16((c.r[29].w[0] + 66u), static_cast<std::uint16_t>(0u));
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002881B4u); c.r[6].d[0] = c.r[6].d[0] | 65535ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002881B4u) [[unlikely]] return; }
L_002881B4:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[21], c.r[29].w[0] + 32u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002881D8u); c.r[7].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002881D8u) [[unlikely]] return; }
L_002881D8:
    set32(c.r[19], c.r[29].w[0] + 64u);
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002881ECu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 90u, depth + 1u); else { c.pc = 0x0027DD58u; return; } if (c.pc != 0x002881ECu) [[unlikely]] return; }
L_002881EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00288238; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002881FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 368u, depth + 1u); else { c.pc = 0x00287540u; return; } if (c.pc != 0x002881FCu) [[unlikely]] return; }
L_002881FC:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00288214u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00288214u) [[unlikely]] return; }
L_00288214:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028822Cu); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028822Cu) [[unlikely]] return; }
L_0028822C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_00288418; } }
    c.budget -= 1;
L_00288238:
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 64u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288254u); set32(c.r[5], c.r[5].w[0] - c.r[16].w[0]);  if (depth < kMaxDepth) unit_005F(c, 79u, depth + 1u); else { c.pc = 0x0027D4A8u; return; } if (c.pc != 0x00288254u) [[unlikely]] return; }
L_00288254:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_00288274; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[6], c.r[29].w[0] + 66u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288270u); set32(c.r[5], ld32((c.r[29].w[0] + 36u)));  if (depth < kMaxDepth) unit_005F(c, 79u, depth + 1u); else { c.pc = 0x0027D4A8u; return; } if (c.pc != 0x00288270u) [[unlikely]] return; }
L_00288270:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00288274:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 64u)));
    c.r[22].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 66u)));
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);  if (t) { goto L_002882C0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_00288328; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002882A0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002882A0u) [[unlikely]] return; }
L_002882A0:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002882B8u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002882B8u) [[unlikely]] return; }
L_002882B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_002883CC; } }
L_002882C0:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002882D8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002882D8u) [[unlikely]] return; }
L_002882D8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002882F0u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0065(c, 129u, depth + 1u); else { c.pc = 0x00295978u; return; } if (c.pc != 0x002882F0u) [[unlikely]] return; }
L_002882F0:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00288308u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00288308u) [[unlikely]] return; }
L_00288308:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00288320u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00288320u) [[unlikely]] return; }
L_00288320:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00288388; } }
L_00288328:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00288340u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00288340u) [[unlikely]] return; }
L_00288340:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[16], c.r[29].w[0] + 48u);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288358u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0065(c, 129u, depth + 1u); else { c.pc = 0x00295978u; return; } if (c.pc != 0x00288358u) [[unlikely]] return; }
L_00288358:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00288370u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00288370u) [[unlikely]] return; }
L_00288370:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00288388u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00288388u) [[unlikely]] return; }
L_00288388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288390u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 8u, depth + 1u); else { c.pc = 0x002840D8u; return; } if (c.pc != 0x00288390u) [[unlikely]] return; }
L_00288390:
    set32(c.r[3], ld32((c.r[20].w[0] + 164u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002883A4u); st32((c.r[20].w[0] + 164u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0060(c, 398u, depth + 1u); else { c.pc = 0x00283600u; return; } if (c.pc != 0x002883A4u) [[unlikely]] return; }
L_002883A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002883ACu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 396u, depth + 1u); else { c.pc = 0x002835D0u; return; } if (c.pc != 0x002883ACu) [[unlikely]] return; }
L_002883AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002883B4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 4u, depth + 1u); else { c.pc = 0x00284030u; return; } if (c.pc != 0x002883B4u) [[unlikely]] return; }
L_002883B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002883BCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 389u, depth + 1u); else { c.pc = 0x00283508u; return; } if (c.pc != 0x002883BCu) [[unlikely]] return; }
L_002883BC:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[20].w[0] + 72u)));  goto L_002883E0; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_002883CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002883D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 368u, depth + 1u); else { c.pc = 0x00287540u; return; } if (c.pc != 0x002883D4u) [[unlikely]] return; }
L_002883D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_00288418; } }
    c.budget -= 1;
L_002883E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002883E8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x00283560u; return; } if (c.pc != 0x002883E8u) [[unlikely]] return; }
L_002883E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002883F0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 22u, depth + 1u); else { c.pc = 0x00284210u; return; } if (c.pc != 0x002883F0u) [[unlikely]] return; }
L_002883F0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002883FCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 14u, depth + 1u); else { c.pc = 0x00284150u; return; } if (c.pc != 0x002883FCu) [[unlikely]] return; }
L_002883FC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288408u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 16u, depth + 1u); else { c.pc = 0x00284170u; return; } if (c.pc != 0x00288408u) [[unlikely]] return; }
L_00288408:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288414u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 15u, depth + 1u); else { c.pc = 0x00284160u; return; } if (c.pc != 0x00288414u) [[unlikely]] return; }
L_00288414:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_00288418:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 104u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 120u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 136u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00288440:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    set32(c.r[16], 0u + 2048u);
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[19], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 36u), 0u);  if (t) { goto L_002884D8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 172u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002884D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288494u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_0061(c, 73u, depth + 1u); else { c.pc = 0x00284970u; return; } if (c.pc != 0x00288494u) [[unlikely]] return; }
L_00288494:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002887FC; }
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 180u)));  goto L_002884C0; }
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002884BCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002884BCu) [[unlikely]] return; }
L_002884BC:
    set32(c.r[5], ld32((c.r[17].w[0] + 180u)));
    c.budget -= 1;
L_002884C0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 188u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002884D4u); set32(c.r[8], ld32((c.r[17].w[0] + 192u)));  if (depth < kMaxDepth) unit_0061(c, 237u, depth + 1u); else { c.pc = 0x00286040u; return; } if (c.pc != 0x002884D4u) [[unlikely]] return; }
L_002884D4:
    st8((c.r[17].w[0] + 172u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002884D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002884E0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 389u, depth + 1u); else { c.pc = 0x00283508u; return; } if (c.pc != 0x002884E0u) [[unlikely]] return; }
L_002884E0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002887FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002884F4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 19u, depth + 1u); else { c.pc = 0x002841B0u; return; } if (c.pc != 0x002884F4u) [[unlikely]] return; }
L_002884F4:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_00288538; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288514u); set32(c.r[7], 0u + 16u);  if (depth < kMaxDepth) unit_005F(c, 122u, depth + 1u); else { c.pc = 0x0027F0D8u; return; } if (c.pc != 0x00288514u) [[unlikely]] return; }
L_00288514:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[4], c.r[4].w[0] + 27712u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288524u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 114u, depth + 1u); else { c.pc = 0x0027EF60u; return; } if (c.pc != 0x00288524u) [[unlikely]] return; }
L_00288524:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028852Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 254u, depth + 1u); else { c.pc = 0x00286230u; return; } if (c.pc != 0x0028852Cu) [[unlikely]] return; }
L_0028852C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_002887FC; } }
    c.budget -= 1;
L_00288538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288540u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 18u, depth + 1u); else { c.pc = 0x00284198u; return; } if (c.pc != 0x00288540u) [[unlikely]] return; }
L_00288540:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028854Cu); c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 23u, depth + 1u); else { c.pc = 0x00284240u; return; } if (c.pc != 0x0028854Cu) [[unlikely]] return; }
L_0028854C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].sd[0] <= 0) { set32(c.r[3], ld32((c.r[17].w[0] + 56u)));  goto L_00288580; }
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    mmi::div(c, 0, c.r[20].w[0], c.r[2].w[0]);
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x00288564u);  goto L_00288568; }
L_00288568:
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 72u), c.r[3].w[0]);  if (t) { goto L_002885A8; } }
    c.budget -= 1;
L_00288580:
    mmi::div(c, 0, c.r[20].w[0], c.r[3].w[0]);
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x00288588u);  goto L_0028858C; }
L_0028858C:
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] >> 31);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    st32((c.r[17].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 7;
L_002885A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002885B0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 21u, depth + 1u); else { c.pc = 0x002841E0u; return; } if (c.pc != 0x002885B0u) [[unlikely]] return; }
L_002885B0:
    set32(c.r[5], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x002885C4u);  goto L_002885C8; }
L_002885C8:
    mmi::div(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002885DCu); st32((c.r[17].w[0] + 72u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x00283560u; return; } if (c.pc != 0x002885DCu) [[unlikely]] return; }
L_002885DC:
    c.budget -= 2;
    if (c.r[18].sd[0] <= 0) { set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  goto L_002886B0; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00288600; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 80u), 0u);  if (t) { goto L_0028865C; } }
    c.budget -= 1;
L_00288600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288608u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 27u, depth + 1u); else { c.pc = 0x002842D0u; return; } if (c.pc != 0x00288608u) [[unlikely]] return; }
L_00288608:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x0028860Cu);  goto L_00288610; }
L_00288610:
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + 2047u);
    c.r[3].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    set32(c.r[3], c.r[16].w[0] - c.r[3].w[0]);
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::div(c, 0, c.r[3].w[0], c.r[16].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.hi.d[0];
    st32((c.r[17].w[0] + 80u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288648u); st32((c.r[17].w[0] + 140u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0061(c, 92u, depth + 1u); else { c.pc = 0x00284B38u; return; } if (c.pc != 0x00288648u) [[unlikely]] return; }
L_00288648:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00280000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[5], c.r[5].w[0] + 32512u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028865Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 91u, depth + 1u); else { c.pc = 0x00284B28u; return; } if (c.pc != 0x0028865Cu) [[unlikely]] return; }
L_0028865C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288664u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 26u, depth + 1u); else { c.pc = 0x002842B8u; return; } if (c.pc != 0x00288664u) [[unlikely]] return; }
L_00288664:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028866Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 24u, depth + 1u); else { c.pc = 0x00284270u; return; } if (c.pc != 0x0028866Cu) [[unlikely]] return; }
L_0028866C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[17].w[0] + 144u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028867Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 14u, depth + 1u); else { c.pc = 0x00284150u; return; } if (c.pc != 0x0028867Cu) [[unlikely]] return; }
L_0028867C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288688u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 16u, depth + 1u); else { c.pc = 0x00284170u; return; } if (c.pc != 0x00288688u) [[unlikely]] return; }
L_00288688:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288694u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 15u, depth + 1u); else { c.pc = 0x00284160u; return; } if (c.pc != 0x00288694u) [[unlikely]] return; }
L_00288694:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00280000u);
    set32(c.r[5], c.r[5].w[0] + 31928u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002886A8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 13u, depth + 1u); else { c.pc = 0x00284140u; return; } if (c.pc != 0x002886A8u) [[unlikely]] return; }
L_002886A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00288704; } }
L_002886B0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002886C4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002886C4u); c.r[5].d[0] = c.r[5].d[0] | 65535ull;  if (depth < kMaxDepth) unit_0061(c, 92u, depth + 1u); else { c.pc = 0x00284B38u; return; } if (c.pc != 0x002886C4u) [[unlikely]] return; }
L_002886C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002886CCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 22u, depth + 1u); else { c.pc = 0x00284210u; return; } if (c.pc != 0x002886CCu) [[unlikely]] return; }
L_002886CC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002886D8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 14u, depth + 1u); else { c.pc = 0x00284150u; return; } if (c.pc != 0x002886D8u) [[unlikely]] return; }
L_002886D8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002886E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 16u, depth + 1u); else { c.pc = 0x00284170u; return; } if (c.pc != 0x002886E4u) [[unlikely]] return; }
L_002886E4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002886F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 15u, depth + 1u); else { c.pc = 0x00284160u; return; } if (c.pc != 0x002886F0u) [[unlikely]] return; }
L_002886F0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00290000u);
    set32(c.r[5], c.r[5].w[0] - 32424u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288704u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 13u, depth + 1u); else { c.pc = 0x00284140u; return; } if (c.pc != 0x00288704u) [[unlikely]] return; }
L_00288704:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028870Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 18u, depth + 1u); else { c.pc = 0x00284198u; return; } if (c.pc != 0x0028870Cu) [[unlikely]] return; }
L_0028870C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288718u); c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 19u, depth + 1u); else { c.pc = 0x002841B0u; return; } if (c.pc != 0x00288718u) [[unlikely]] return; }
L_00288718:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288724u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 22u, depth + 1u); else { c.pc = 0x00284210u; return; } if (c.pc != 0x00288724u) [[unlikely]] return; }
L_00288724:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288730u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 20u, depth + 1u); else { c.pc = 0x002841C8u; return; } if (c.pc != 0x00288730u) [[unlikely]] return; }
L_00288730:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028873Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 367u, depth + 1u); else { c.pc = 0x00283188u; return; } if (c.pc != 0x0028873Cu) [[unlikely]] return; }
L_0028873C:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288748u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 363u, depth + 1u); else { c.pc = 0x00283128u; return; } if (c.pc != 0x00288748u) [[unlikely]] return; }
L_00288748:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288754u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 362u, depth + 1u); else { c.pc = 0x00283110u; return; } if (c.pc != 0x00288754u) [[unlikely]] return; }
L_00288754:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288760u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 369u, depth + 1u); else { c.pc = 0x00283240u; return; } if (c.pc != 0x00288760u) [[unlikely]] return; }
L_00288760:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288768u); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_0061(c, 28u, depth + 1u); else { c.pc = 0x00284300u; return; } if (c.pc != 0x00288768u) [[unlikely]] return; }
L_00288768:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 64u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288778u); set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0060(c, 364u, depth + 1u); else { c.pc = 0x00283140u; return; } if (c.pc != 0x00288778u) [[unlikely]] return; }
L_00288778:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288788u); set32(c.r[6], c.r[29].w[0] + 36u);  if (depth < kMaxDepth) unit_0061(c, 365u, depth + 1u); else { c.pc = 0x002873E0u; return; } if (c.pc != 0x00288788u) [[unlikely]] return; }
L_00288788:
    set32(c.r[5], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 36u)));  if (t) { goto L_0028879C; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002887A4; } }
L_0028879C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002887A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 364u, depth + 1u); else { c.pc = 0x002873D8u; return; } if (c.pc != 0x002887A4u) [[unlikely]] return; }
L_002887A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002887ACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 422u, depth + 1u); else { c.pc = 0x00287F90u; return; } if (c.pc != 0x002887ACu) [[unlikely]] return; }
L_002887AC:
    set32(c.r[4], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_002887C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002887C0u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 111u, depth + 1u); else { c.pc = 0x00279AE0u; return; } if (c.pc != 0x002887C0u) [[unlikely]] return; }
L_002887C0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_002887C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002887CCu); set32(c.r[16], 0u + 2u);  if (depth < kMaxDepth) unit_0061(c, 17u, depth + 1u); else { c.pc = 0x00284180u; return; } if (c.pc != 0x002887CCu) [[unlikely]] return; }
L_002887CC:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[16].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  goto L_002887EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002887DCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 38u, depth + 1u); else { c.pc = 0x00284438u; return; } if (c.pc != 0x002887DCu) [[unlikely]] return; }
L_002887DC:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002887E8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 371u, depth + 1u); else { c.pc = 0x00283280u; return; } if (c.pc != 0x002887E8u) [[unlikely]] return; }
L_002887E8:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_002887EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002887F4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0060(c, 356u, depth + 1u); else { c.pc = 0x00283030u; return; } if (c.pc != 0x002887F4u) [[unlikely]] return; }
L_002887F4:
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 2;
L_002887FC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00288818:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    set32(c.r[18], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[20], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288848u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 359u, depth + 1u); else { c.pc = 0x00283078u; return; } if (c.pc != 0x00288848u) [[unlikely]] return; }
L_00288848:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288854u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 360u, depth + 1u); else { c.pc = 0x00283090u; return; } if (c.pc != 0x00288854u) [[unlikely]] return; }
L_00288854:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    c.r[16].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 112u)));  goto L_00288898; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288874u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 21u, depth + 1u); else { c.pc = 0x002841E0u; return; } if (c.pc != 0x00288874u) [[unlikely]] return; }
L_00288874:
    c.r[2].d[0] = c.r[2].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 112u)));  goto L_00288898; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288888u); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_0060(c, 389u, depth + 1u); else { c.pc = 0x00283508u; return; } if (c.pc != 0x00288888u) [[unlikely]] return; }
L_00288888:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002888DC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 112u)));
    c.budget -= 1;
L_00288898:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002888D8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 114u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 3u);  goto L_002888D0; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002888B8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0060(c, 357u, depth + 1u); else { c.pc = 0x00283048u; return; } if (c.pc != 0x002888B8u) [[unlikely]] return; }
L_002888B8:
    st32((c.r[17].w[0] + 156u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 5596u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[17].w[0] + 160u), c.r[3].w[0]);
    set32(c.r[2], 0u + 3u);
    c.budget -= 6;
L_002888D0:
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_002888D8:
    st8((c.r[17].w[0] + 113u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002888DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002888E4u); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_0060(c, 389u, depth + 1u); else { c.pc = 0x00283508u; return; } if (c.pc != 0x002888E4u) [[unlikely]] return; }
L_002888E4:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00288970; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002888F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 291u, depth + 1u); else { c.pc = 0x00286940u; return; } if (c.pc != 0x002888F8u) [[unlikely]] return; }
L_002888F8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[19], c.r[2].w[0] << 1);  if (t) { goto L_0028896C; } }
    set32(c.r[18], c.r[17].w[0] + 24u);
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[18].w[0])));
    c.budget -= 3;
L_00288918:
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028893Cu); set32(c.r[17], c.r[17].w[0] - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028893Cu) [[unlikely]] return; }
L_0028893C:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028894Cu); set32(c.r[6], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0028894Cu) [[unlikely]] return; }
L_0028894C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00288964u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00288964u) [[unlikely]] return; }
L_00288964:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[16], ld32((c.r[18].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00288918u | kUnwind; return; } goto L_00288918; }
L_0028896C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00288970:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00288990:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002889B8u); set32(c.r[4], ld32((c.r[19].w[0] + 4u)));  if (depth < kMaxDepth) unit_0060(c, 389u, depth + 1u); else { c.pc = 0x00283508u; return; } if (c.pc != 0x002889B8u) [[unlikely]] return; }
L_002889B8:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00288A30; }
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.r[18].d[0] = 0ull + 0ull;
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002889D8u); set32(c.r[16], c.r[19].w[0] + 24u);  if (depth < kMaxDepth) unit_0061(c, 19u, depth + 1u); else { c.pc = 0x002841B0u; return; } if (c.pc != 0x002889D8u) [[unlikely]] return; }
L_002889D8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] - 30376u), c.r[17].w[0]);  if (t) { goto L_002889EC; } }
L_002889E8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002889EC:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00288A1C; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00288A10u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00288A10u) [[unlikely]] return; }
L_00288A10:
    c.r[3].d[0] = c.r[2].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[20].w[0] - 30372u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002889E8u | kUnwind; return; } goto L_002889E8; } }
L_00288A1C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[17].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00288A30; } }
    set32(c.r[2], 0u + 4u);
    st32((c.r[19].w[0] + 168u), 0u);
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00288A30:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00288A50:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[20].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[31].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288A8Cu); set32(c.r[4], ld32((c.r[22].w[0] + 12u)));  if (depth < kMaxDepth) unit_0060(c, 359u, depth + 1u); else { c.pc = 0x00283078u; return; } if (c.pc != 0x00288A8Cu) [[unlikely]] return; }
L_00288A8C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[3].w[0] - 30368u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288A9Cu); set32(c.r[4], ld32((c.r[22].w[0] + 4u)));  if (depth < kMaxDepth) unit_0061(c, 19u, depth + 1u); else { c.pc = 0x002841B0u; return; } if (c.pc != 0x00288A9Cu) [[unlikely]] return; }
L_00288A9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288AA4u); c.r[23].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D318u; return; } if (c.pc != 0x00288AA4u) [[unlikely]] return; }
L_00288AA4:
    c.budget -= 2;
    { const bool t = c.r[23].sd[0] <= 0; set32(c.r[21], ld32((c.r[22].w[0] + 72u)));  if (t) { goto L_00288AF8; } }
    set32(c.r[17], c.r[22].w[0] + 24u);
    c.budget -= 1;
L_00288AB0:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[16], c.r[20].w[0] << 3);
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[6], c.r[21].w[0] << 1);
    set32(c.r[7], c.r[29].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00288AD8u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00288AD8u) [[unlikely]] return; }
L_00288AD8:
    c.r[4].d[0] = c.r[20].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[29].w[0] + 4u);
    set32(c.r[16], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] >> 1);
    c.r[2].d[0] = c.r[3].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; if (c.r[2].d[0] != 0) c.r[21].d[0] = c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00288AB0u | kUnwind; return; } goto L_00288AB0; } }
L_00288AF8:
    c.budget -= 2;
    { const bool t = c.r[23].sd[0] <= 0; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_00288B8C; } }
    set32(c.r[30], c.r[21].w[0] << 1);
    set32(c.r[19], c.r[22].w[0] + 24u);
    set32(c.r[2], c.r[29].w[0] + 16u);
    c.budget -= 4;
L_00288B10:
    set32(c.r[16], c.r[20].w[0] << 3);
    set32(c.r[17], c.r[29].w[0] + c.r[16].w[0]);
    set32(c.r[18], c.r[2].w[0] + c.r[16].w[0]);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288B30u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0065(c, 129u, depth + 1u); else { c.pc = 0x00295978u; return; } if (c.pc != 0x00288B30u) [[unlikely]] return; }
L_00288B30:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[29].w[0] + 4u);
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[16], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288B4Cu); set32(c.r[6], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00288B4Cu) [[unlikely]] return; }
L_00288B4C:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00288B64u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00288B64u) [[unlikely]] return; }
L_00288B64:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00288B80u); set32(c.r[19], c.r[19].w[0] + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00288B80u) [[unlikely]] return; }
L_00288B80:
    c.r[3].d[0] = c.r[20].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[29].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00288B10u | kUnwind; return; } goto L_00288B10; } }
L_00288B8C:
    set32(c.r[2], ld32((c.r[22].w[0] + 168u)));
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288BA0u); st32((c.r[22].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005F(c, 73u, depth + 1u); else { c.pc = 0x0027D330u; return; } if (c.pc != 0x00288BA0u) [[unlikely]] return; }
L_00288BA0:
    c.budget -= 2;
    { const bool t = c.r[23].sd[0] <= 0;  if (t) { goto L_00288BDC; } }
    c.r[20].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[16], c.r[22].w[0] + 24u);
    c.budget -= 2;
L_00288BB0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00288BCCu); set32(c.r[20], c.r[20].w[0] - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00288BCCu) [[unlikely]] return; }
L_00288BCC:
    set32(c.r[2], c.r[2].w[0] >> 1);
    c.r[3].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[20].d[0] != 0ull; if (c.r[3].d[0] == 0) c.r[17].d[0] = c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00288BB0u | kUnwind; return; } goto L_00288BB0; } }
L_00288BDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288BE4u); set32(c.r[4], ld32((c.r[22].w[0] + 12u)));  if (depth < kMaxDepth) unit_0060(c, 359u, depth + 1u); else { c.pc = 0x00283078u; return; } if (c.pc != 0x00288BE4u) [[unlikely]] return; }
L_00288BE4:
    set32(c.r[3], ld32((c.r[22].w[0] + 168u)));
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    if (c.r[2].sd[0] > 0) { c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00288C28; }
    set32(c.r[4], ld32((c.r[22].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288C04u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0060(c, 356u, depth + 1u); else { c.pc = 0x00283030u; return; } if (c.pc != 0x00288C04u) [[unlikely]] return; }
L_00288C04:
    set32(c.r[4], ld32((c.r[22].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288C10u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0060(c, 357u, depth + 1u); else { c.pc = 0x00283048u; return; } if (c.pc != 0x00288C10u) [[unlikely]] return; }
L_00288C10:
    set32(c.r[4], ld32((c.r[22].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288C1Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0064(c, 414u, depth + 1u); else { c.pc = 0x00293D78u; return; } if (c.pc != 0x00288C1Cu) [[unlikely]] return; }
L_00288C1C:
    set32(c.r[2], 0u + 5u);
    st8((c.r[22].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 3;
L_00288C28:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 104u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00288C58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00288C60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288C7Cu); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D318u; return; } if (c.pc != 0x00288C7Cu) [[unlikely]] return; }
L_00288C7C:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288C88u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0060(c, 356u, depth + 1u); else { c.pc = 0x00283030u; return; } if (c.pc != 0x00288C88u) [[unlikely]] return; }
L_00288C88:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288C94u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0060(c, 357u, depth + 1u); else { c.pc = 0x00283048u; return; } if (c.pc != 0x00288C94u) [[unlikely]] return; }
L_00288C94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288C9Cu); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_0060(c, 398u, depth + 1u); else { c.pc = 0x00283600u; return; } if (c.pc != 0x00288C9Cu) [[unlikely]] return; }
L_00288C9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288CA4u);  if (depth < kMaxDepth) unit_005F(c, 73u, depth + 1u); else { c.pc = 0x0027D330u; return; } if (c.pc != 0x00288CA4u) [[unlikely]] return; }
L_00288CA4:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00288CCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288CB8u);  if (depth < kMaxDepth) unit_0061(c, 87u, depth + 1u); else { c.pc = 0x00284AD8u; return; } if (c.pc != 0x00288CB8u) [[unlikely]] return; }
L_00288CB8:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00288CCCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00288CCCu) [[unlikely]] return; }
L_00288CCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288CD4u); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D318u; return; } if (c.pc != 0x00288CD4u) [[unlikely]] return; }
L_00288CD4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  goto L_00288D10; }
    set32(c.r[16], c.r[17].w[0] + 24u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 2;
L_00288CE8:
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00288CFCu); set32(c.r[18], c.r[18].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00288CFCu) [[unlikely]] return; }
L_00288CFC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00288CE8u | kUnwind; return; } goto L_00288CE8; }
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_00288D10:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00288D2C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288D20u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 74u, depth + 1u); else { c.pc = 0x00284978u; return; } if (c.pc != 0x00288D20u) [[unlikely]] return; }
L_00288D20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288D28u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_0061(c, 77u, depth + 1u); else { c.pc = 0x002849E8u; return; } if (c.pc != 0x00288D28u) [[unlikely]] return; }
L_00288D28:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00288D2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288D34u); set32(c.r[5], ld32((c.r[4].w[0] + 20u)));  if (depth < kMaxDepth) unit_0061(c, 232u, depth + 1u); else { c.pc = 0x00285F50u; return; } if (c.pc != 0x00288D34u) [[unlikely]] return; }
L_00288D34:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027D330u | kUnwind; return; } [[clang::musttail]] return unit_005F(c, 73u, depth); }
L_00288FA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00288FE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288FC4u);  if (depth < kMaxDepth) unit_0061(c, 73u, depth + 1u); else { c.pc = 0x00284970u; return; } if (c.pc != 0x00288FC4u) [[unlikely]] return; }
L_00288FC4:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  goto L_00288FE4; }
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], 0u + 6u);
    st16((c.r[16].w[0] + 96u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00288FE0:
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 1;
L_00288FE4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00289014; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00288FF4u);  if (depth < kMaxDepth) unit_0064(c, 169u, depth + 1u); else { c.pc = 0x00291530u; return; } if (c.pc != 0x00288FF4u) [[unlikely]] return; }
L_00288FF4:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00289014; }
    set32(c.r[2], 0u + 6u);
    set32(c.r[3], 0u - 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 96u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
L_00289014:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00289020:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_002890AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289044u);  if (depth < kMaxDepth) unit_0061(c, 260u, depth + 1u); else { c.pc = 0x002862F0u; return; } if (c.pc != 0x00289044u) [[unlikely]] return; }
L_00289044:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_002890AC; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_002890AC; }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 27776u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00288000u < 16384u) { entry = entries_0062[(t - 0x00288000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00289078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289080u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_0061(c, 73u, depth + 1u); else { c.pc = 0x00284970u; return; } if (c.pc != 0x00289080u) [[unlikely]] return; }
L_00289080:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_002890AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289094u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0060(c, 394u, depth + 1u); else { c.pc = 0x002835A0u; return; } if (c.pc != 0x00289094u) [[unlikely]] return; }
L_00289094:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_002890AC; } }
    c.budget -= 1;
L_002890A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002890A8u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0060(c, 394u, depth + 1u); else { c.pc = 0x002835A0u; return; } if (c.pc != 0x002890A8u) [[unlikely]] return; }
L_002890A8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002890AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002890B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_002890E8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 27800u);
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027EF08u | kUnwind; return; } [[clang::musttail]] return unit_005F(c, 111u, depth); }
L_002890E8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00289108; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289100u);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00288990u; return; } if (c.pc != 0x00289100u) [[unlikely]] return; }
L_00289100:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00289160; } }
L_00289108:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00289120; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289118u);  if (depth < kMaxDepth) unit_0062(c, 45u, depth + 1u); else { c.pc = 0x00288440u; return; } if (c.pc != 0x00289118u) [[unlikely]] return; }
L_00289118:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00289160; } }
L_00289120:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_00289138; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289130u);  if (depth < kMaxDepth) unit_0062(c, 91u, depth + 1u); else { c.pc = 0x00288818u; return; } if (c.pc != 0x00289130u) [[unlikely]] return; }
L_00289130:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00289160; } }
L_00289138:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 5u);  if (t) { goto L_00289150; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289148u);  if (depth < kMaxDepth) unit_0062(c, 108u, depth + 1u); else { c.pc = 0x00288A50u; return; } if (c.pc != 0x00289148u) [[unlikely]] return; }
L_00289148:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00289160; } }
L_00289150:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00289160; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289160u);  if (depth < kMaxDepth) unit_0062(c, 126u, depth + 1u); else { c.pc = 0x00288C58u; return; } if (c.pc != 0x00289160u) [[unlikely]] return; }
L_00289160:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289168u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 144u, depth + 1u); else { c.pc = 0x00289020u; return; } if (c.pc != 0x00289168u) [[unlikely]] return; }
L_00289168:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00288FA0u | kUnwind; return; } goto L_00288FA0; }
L_002891F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 30352u);
    set32(c.r[6], 0u + 960u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011AB50u | kUnwind; return; } [[clang::musttail]] return unit_0006(c, 201u, depth); }
L_00289240:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], c.r[4].w[0] - 30352u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0028928C; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00289268:
    c.r[2].d[0] = c.r[17].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 60u);  if (t) { goto L_0028928C; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00289268u | kUnwind; return; } goto L_00289268; }
L_0028928C:
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002892F8; } }
    set32(c.r[16], c.r[17].w[0] << 4);
    set32(c.r[2], c.r[4].w[0] - 30352u);
    set32(c.r[16], c.r[16].w[0] - c.r[17].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] << 2);
    set32(c.r[6], 0u + 60u);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002892BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x002892BCu) [[unlikely]] return; }
L_002892BC:
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], 0u + 500u);
    st32((c.r[16].w[0] + 4u), c.r[17].w[0]);
    c.r[5].d[0] = 0ull | 44100ull;
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[6], c.r[16].w[0] + 48u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002892E4u); set32(c.r[7], c.r[16].w[0] + 50u);  if (depth < kMaxDepth) unit_005F(c, 74u, depth + 1u); else { c.pc = 0x0027D348u; return; } if (c.pc != 0x002892E4u) [[unlikely]] return; }
L_002892E4:
    set32(c.r[4], c.r[16].w[0] + 40u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002892F4u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x002892F4u) [[unlikely]] return; }
L_002892F4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002892F8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00289310:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], c.r[2].w[0] + 50u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[6], c.r[2].w[0] + 48u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027D348u | kUnwind; return; } [[clang::musttail]] return unit_005F(c, 74u, depth); }
L_00289338:
    c.r[3].d[0] = ld16((c.r[5].w[0]));
    st16((c.r[4].w[0] + 40u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[6].w[0]));
    st16((c.r[4].w[0] + 42u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 2u));
    st16((c.r[4].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[6].w[0] + 2u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 46u), static_cast<std::uint16_t>(c.r[2].w[0]));  c.pc = t; return; }
L_00289360:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 40u));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 42u));
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 44u));
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 46u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));  c.pc = t; return; }
L_00289388:
    st16((c.r[4].w[0] + 56u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 54u), static_cast<std::uint16_t>(c.r[6].w[0]));  c.pc = t; return; }
L_00289398:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 52u));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 54u));
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 56u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  c.pc = t; return; }
L_002893B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_002893E0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 60u);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011AB50u | kUnwind; return; } [[clang::musttail]] return unit_0006(c, 201u, depth); }
L_002893E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002893F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 12u)));  c.pc = t; return; }
L_00289400:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00289428; } }
    st32((c.r[4].w[0] + 36u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 28u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 32u), c.r[7].w[0]);  c.pc = t; return; }
L_00289428:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00289430:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_00289458; } }
    st32((c.r[4].w[0] + 36u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 28u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 32u), c.r[7].w[0]);  c.pc = t; return; }
L_00289458:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00289460:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00289488; } }
    st32((c.r[4].w[0] + 36u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 28u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 32u), c.r[7].w[0]);  c.pc = t; return; }
L_00289488:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00289490:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002894A4; } }
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_002894A4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002894B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], 0u + 8u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[4], c.r[4].w[0] + 40u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011AB50u | kUnwind; return; } [[clang::musttail]] return unit_0006(c, 201u, depth); }
L_002894D8:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[3].d[0]) { st32((c.r[4].w[0] + 12u), 0u);  goto L_002894E8; }
L_002894E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002894F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 16u)));  c.pc = t; return; }
L_002894F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] - 30360u), c.r[2].w[0]);  c.pc = t; return; }
L_00289508:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    set32(c.r[17], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[17].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00289538; } }
    set32(c.r[3], 0u + 2u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
L_00289538:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002895EC; }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[17].d[0]) { c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 54u)));  goto L_00289580; }
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[7], c.r[16].w[0] + 40u);
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[10], c.r[16].w[0] + 52u);
    set32(c.r[6], ld32((c.r[16].w[0] + 32u)));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 48u)));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 50u)));
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 54u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 56u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289578u); st32((c.r[29].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005F(c, 98u, depth + 1u); else { c.pc = 0x0027E510u; return; } if (c.pc != 0x00289578u) [[unlikely]] return; }
L_00289578:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_002895E0; } }
L_00289580:
    set32(c.r[12], c.r[16].w[0] + 52u);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[7], c.r[16].w[0] + 40u);
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[9], c.r[16].w[0] + 44u);
    set32(c.r[6], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 36u)));
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 48u)));
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 50u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 56u)));
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[29].w[0]), c.r[12].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002895B8u); st32((c.r[29].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005F(c, 107u, depth + 1u); else { c.pc = 0x0027EE00u; return; } if (c.pc != 0x002895B8u) [[unlikely]] return; }
L_002895B8:
    set32(c.r[3], c.r[2].w[0] >> 31);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_002895E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002895E0u);  if (depth < kMaxDepth) unit_0062(c, 178u, depth + 1u); else { c.pc = 0x002894F8u; return; } if (c.pc != 0x002895E0u) [[unlikely]] return; }
L_002895E0:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_002895E4:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_002895EC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00289600:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] - 30352u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], 0u + 15u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], 0u + 1u);
    c.budget -= 10;
L_00289628:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_00289640; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028963Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 179u, depth + 1u); else { c.pc = 0x00289508u; return; } if (c.pc != 0x0028963Cu) [[unlikely]] return; }
L_0028963C:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_00289640:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 60u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00289628u | kUnwind; return; } goto L_00289628; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00289660:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] - 29388u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00289680; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00289680u); set32(c.r[4], ld32((c.r[2].w[0] - 29384u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00289680u) [[unlikely]] return; }
L_00289680:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00289690:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[4].w[0] - 29384u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00289660u | kUnwind; return; } goto L_00289660; }
L_00289780:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], c.r[3].w[0] - 29380u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_00289860; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00920000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[20], c.r[2].w[0] - 6408u);
    set32(c.r[21], c.r[20].w[0] + 4u);
    c.r[18].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
L_002897D0:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[19], c.r[17].w[0] << 3);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_002897F8; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.r[16].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002897F0u); set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002897F0u) [[unlikely]] return; }
L_002897F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);  if (t) { goto L_00289800; } }
L_002897F8:
    set32(c.r[16], c.r[20].w[0] + 4u);
    set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);
    c.budget -= 2;
L_00289800:
    c.r[3].d[0] = c.r[17].sd[0] < 40ll ? 1ull : 0ull;
    st32((c.r[18].w[0]), 0u);
    set32(c.r[18], c.r[18].w[0] + 8u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[2].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002897D0u | kUnwind; return; } goto L_002897D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00920000u);
    set32(c.r[17], 0u + 31u);
    set32(c.r[2], c.r[2].w[0] - 6088u);
    set32(c.r[2], c.r[2].w[0] + 500u);
    c.budget -= 5;
L_00289828:
    set32(c.r[17], c.r[17].w[0] - 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[2], c.r[2].w[0] - 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00289828u | kUnwind; return; } goto L_00289828; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00920000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] - 5576u);
    set32(c.r[6], 0u + 9u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028985Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0028985Cu) [[unlikely]] return; }
L_0028985C:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00289860:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00289888:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 29392u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_002898B8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[4], c.r[4].w[0] + 27904u);
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00289690u | kUnwind; return; } goto L_00289690; }
L_002898B8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_002898D0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[4], c.r[4].w[0] + 27944u);
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00289690u | kUnwind; return; } goto L_00289690; }
L_002898D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002898D8u);  if (depth < kMaxDepth) unit_0062(c, 197u, depth + 1u); else { c.pc = 0x00289918u; return; } if (c.pc != 0x002898D8u) [[unlikely]] return; }
L_002898D8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_002898F8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 27984u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00289690u | kUnwind; return; } goto L_00289690; }
L_002898F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0028990C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00290000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028990Cu); set32(c.r[4], c.r[4].w[0] - 27040u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028990Cu) [[unlikely]] return; }
L_0028990C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00289918:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289938u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 208u, depth + 1u); else { c.pc = 0x00289A88u; return; } if (c.pc != 0x00289938u) [[unlikely]] return; }
L_00289938:
    c.budget -= 2;
    { const std::uint32_t t = c.r[16].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00289940u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00289940u) [[unlikely]] return; }
L_00289940:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289950u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0062(c, 204u, depth + 1u); else { c.pc = 0x002899F0u; return; } if (c.pc != 0x00289950u) [[unlikely]] return; }
L_00289950:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002899D4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00920000u);
    set32(c.r[3], c.r[4].w[0] - 6088u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { goto L_00289994; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00289970:
    c.r[2].d[0] = c.r[16].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 16u);  if (t) { goto L_00289994; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00289970u | kUnwind; return; } goto L_00289970; }
L_00289994:
    set32(c.r[3], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002899D4; } }
    set32(c.r[2], c.r[4].w[0] - 6088u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002899C0u); st32((c.r[2].w[0]), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x002899C0u) [[unlikely]] return; }
L_002899C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002899D0u); set32(c.r[6], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x002899D0u) [[unlikely]] return; }
L_002899D0:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002899D4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002899F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289A1Cu); c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00289A1Cu) [[unlikely]] return; }
L_00289A1C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00920000u);
    set32(c.r[18], c.r[2].w[0] - 6084u);
    set32(c.r[21], c.r[18].w[0] - 4u);
    set32(c.r[16], c.r[17].w[0] << 4);
    c.budget -= 5;
L_00289A30:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + c.r[18].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289A44u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 138u, depth + 1u); else { c.pc = 0x0011E108u; return; } if (c.pc != 0x00289A44u) [[unlikely]] return; }
L_00289A44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;  if (t) { goto L_00289A58; } }
    set32(c.r[3], c.r[16].w[0] + c.r[21].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[3].w[0])));  if (t) { goto L_00289A64; } }
L_00289A58:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[17].w[0] << 4);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00289A30u | kUnwind; return; } goto L_00289A30; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00289A64:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00289A88:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289A9Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00289A9Cu) [[unlikely]] return; }
L_00289A9C:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00289AD8; } }
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + c.r[6].w[0]);
    c.budget -= 2;
L_00289AB0:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[2].w[0] - 32u);
    set32(c.r[2], c.r[2].w[0] - 97u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(26ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[6].d[0] < c.r[7].d[0] ? 1ull : 0ull;  if (t) { goto L_00289AD0; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00289AD0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00289AB0u | kUnwind; return; } goto L_00289AB0; } }
L_00289AD8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00289AE8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.budget -= 10;
    { const bool t = c.r[18].d[0] != 0ull; st64((c.r[29].w[0] + 48u), c.r[31].d[0]);  if (t) { goto L_00289B50; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 28024u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 11;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00289690u | kUnwind; return; } goto L_00289690; }
L_00289B40:
    set32(c.r[2], c.r[21].w[0] - 4u);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00289B98; } }
L_00289B50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289B58u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00289B58u) [[unlikely]] return; }
L_00289B58:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00920000u);
    set32(c.r[17], c.r[2].w[0] - 6084u);
    c.r[21].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
L_00289B70:
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[19], c.r[16].w[0] << 4);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289B88u); set32(c.r[16], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0007(c, 138u, depth + 1u); else { c.pc = 0x0011E108u; return; } if (c.pc != 0x00289B88u) [[unlikely]] return; }
L_00289B88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00289B40u | kUnwind; return; } goto L_00289B40; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00289B70u | kUnwind; return; } goto L_00289B70; } }
L_00289B98:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00289BC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_00289BF8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 28064u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00289690u | kUnwind; return; } goto L_00289690; }
L_00289BF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289C00u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00289C00u) [[unlikely]] return; }
L_00289C00:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00289C28; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00920000u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    st8((c.r[2].w[0] - 5576u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00289C28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289C30u);  if (depth < kMaxDepth) unit_0062(c, 208u, depth + 1u); else { c.pc = 0x00289A88u; return; } if (c.pc != 0x00289C30u) [[unlikely]] return; }
L_00289C30:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289C3Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 220u, depth + 1u); else { c.pc = 0x00289C88u; return; } if (c.pc != 0x00289C3Cu) [[unlikely]] return; }
L_00289C3C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00920000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 5576u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[6], c.r[17].w[0] + 1u);  if (t) { goto L_00289C68; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011A998u | kUnwind; return; } [[clang::musttail]] return unit_0006(c, 192u, depth); }
L_00289C68:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 28104u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00289690u | kUnwind; return; } goto L_00289690; }
L_00289C88:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00920000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[2].w[0] - 6084u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 12;
L_00289CB8:
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289CC8u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 138u, depth + 1u); else { c.pc = 0x0011E108u; return; } if (c.pc != 0x00289CC8u) [[unlikely]] return; }
L_00289CC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_00289CD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00289CE8; } }
L_00289CD8:
    c.r[2].d[0] = c.r[16].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00289CB8u | kUnwind; return; } goto L_00289CB8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00289CE8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00289D08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00920000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 5576u);  c.pc = t; return; }
L_00289D18:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00289D58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289D4Cu);  if (depth < kMaxDepth) unit_0062(c, 248u, depth + 1u); else { c.pc = 0x0028A0A8u; return; } if (c.pc != 0x00289D4Cu) [[unlikely]] return; }
L_00289D4C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00289DA4; } }
L_00289D58:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289D64u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 400u, depth + 1u); else { c.pc = 0x0028B478u; return; } if (c.pc != 0x00289D64u) [[unlikely]] return; }
L_00289D64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289D6Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 204u, depth + 1u); else { c.pc = 0x002899F0u; return; } if (c.pc != 0x00289D6Cu) [[unlikely]] return; }
L_00289D6C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00289DA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289D80u);  if (depth < kMaxDepth) unit_0062(c, 248u, depth + 1u); else { c.pc = 0x0028A0A8u; return; } if (c.pc != 0x00289D80u) [[unlikely]] return; }
L_00289D80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289D88u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 204u, depth + 1u); else { c.pc = 0x002899F0u; return; } if (c.pc != 0x00289D88u) [[unlikely]] return; }
L_00289D88:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00289DA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289DA0u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00289DA0u) [[unlikely]] return; }
L_00289DA0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00289DA4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00289DC0:
    set32(c.r[29], c.r[29].w[0] - 656u);
    st64((c.r[29].w[0] + 616u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 632u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 640u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 608u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 624u), c.r[18].d[0]);
    c.budget -= 11;
    { const bool t = c.r[17].d[0] != 0ull; st64((c.r[29].w[0] + 648u), c.r[31].d[0]);  if (t) { goto L_00289DF8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 28144u);  if (t) { goto L_00289EBC; } }
L_00289DF8:
    set32(c.r[18], c.r[29].w[0] + 304u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289E0Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 243u, depth + 1u); else { c.pc = 0x00289F60u; return; } if (c.pc != 0x00289E0Cu) [[unlikely]] return; }
L_00289E0C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 304u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_00289E20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 28144u);  if (t) { goto L_00289EBC; } }
L_00289E20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289E28u);  if (depth < kMaxDepth) unit_0062(c, 240u, depth + 1u); else { c.pc = 0x00289EE8u; return; } if (c.pc != 0x00289E28u) [[unlikely]] return; }
L_00289E28:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00289E40; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 28176u);  if (t) { goto L_00289EBC; } }
L_00289E40:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289E4Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 224u, depth + 1u); else { c.pc = 0x00289D18u; return; } if (c.pc != 0x00289E4Cu) [[unlikely]] return; }
L_00289E4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00289E68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289E5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 242u, depth + 1u); else { c.pc = 0x00289F50u; return; } if (c.pc != 0x00289E5Cu) [[unlikely]] return; }
L_00289E5C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 28248u);  if (t) { goto L_00289EBC; } }
L_00289E68:
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00289E88; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00289E80u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00289E80u) [[unlikely]] return; }
L_00289E80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00289EA0; } }
L_00289E88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289E90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 242u, depth + 1u); else { c.pc = 0x00289F50u; return; } if (c.pc != 0x00289E90u) [[unlikely]] return; }
L_00289E90:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 28280u);  if (t) { goto L_00289EBC; } }
    c.budget -= 1;
L_00289EA0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00289EC8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289EB4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 242u, depth + 1u); else { c.pc = 0x00289F50u; return; } if (c.pc != 0x00289EB4u) [[unlikely]] return; }
L_00289EB4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[4], c.r[4].w[0] + 28304u);
    c.budget -= 2;
L_00289EBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289EC4u);  if (depth < kMaxDepth) unit_0062(c, 188u, depth + 1u); else { c.pc = 0x00289690u; return; } if (c.pc != 0x00289EC4u) [[unlikely]] return; }
L_00289EC4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00289EC8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 608u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 616u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 624u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 632u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 640u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 648u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 656u);  c.pc = t; return; }
L_00289EE8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00920000u);
    set32(c.r[2], c.r[5].w[0] - 6408u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00289F2C; } }
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 2;
L_00289F08:
    c.r[2].d[0] = c.r[4].sd[0] < 40ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 8u);  if (t) { goto L_00289F2C; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00289F08u | kUnwind; return; } goto L_00289F08; }
L_00289F2C:
    set32(c.r[3], 0u + 40u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00289F44; } }
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[5].w[0] - 6408u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_00289F44:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00289F50:
    st32((c.r[4].w[0]), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), 0u);  c.pc = t; return; }
L_00289F60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_0028A090; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[2], 0u + 58u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_00289FD8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00289FE8; } }
    set32(c.r[7], 0u + 58u);
    c.r[4].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 3;
L_00289FA0:
    set32(c.r[3], c.r[16].w[0] + c.r[8].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = c.r[8].sd[0] < 297ll ? 1ull : 0ull;
    set32(c.r[5], c.r[6].w[0] + c.r[8].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00289FDC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[7].d[0];  if (t) { goto L_00289FE0; } }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = ld8((c.r[5].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00289FA0u | kUnwind; return; } goto L_00289FA0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00289FE0; } }
    c.budget -= 1;
L_00289FD8:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_00289FDC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 1;
L_00289FE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] + c.r[8].w[0]);  if (t) { goto L_0028A010; } }
L_00289FE8:
    set32(c.r[2], c.r[16].w[0] + c.r[8].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00289FF8u); st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00289FF8u) [[unlikely]] return; }
L_00289FF8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A008u); set32(c.r[6], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0028A008u) [[unlikely]] return; }
L_0028A008:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_0028A090; } }
L_0028A010:
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[2].d[0]; st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_0028A028; } }
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0028A028:
    c.r[2].d[0] = c.r[8].sd[0] < 297ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_0028A06C; } }
    set32(c.r[3], c.r[6].w[0] + c.r[8].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0028A06C; } }
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 1;
L_0028A048:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[4].d[0] = c.r[5].sd[0] < 297ll ? 1ull : 0ull;
    set32(c.r[3], c.r[6].w[0] + c.r[5].w[0]);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_0028A06C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[3].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028A048u | kUnwind; return; } goto L_0028A048; }
L_0028A06C:
    set32(c.r[2], c.r[5].w[0] - c.r[8].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00289A88u | kUnwind; return; } goto L_00289A88; }
L_0028A090:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028A0A8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00920000u);
    set32(c.r[16], c.r[16].w[0] - 5576u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A0CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0028A0CCu) [[unlikely]] return; }
L_0028A0CC:
    set32(c.r[6], c.r[2].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0028A0F8; } }
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028A0F8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011A998u | kUnwind; return; } [[clang::musttail]] return unit_0006(c, 192u, depth); }
L_0028A110:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_0028A140; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 28328u);
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00289690u | kUnwind; return; } goto L_00289690; }
L_0028A140:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  goto L_0028A170; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A158u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028A158u) [[unlikely]] return; }
L_0028A158:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00289F50u | kUnwind; return; } goto L_00289F50; }
L_0028A170:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 28360u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00289690u | kUnwind; return; } goto L_00289690; }
L_0028A188:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_0028A1B0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A1A4u); set32(c.r[4], c.r[4].w[0] + 28384u);  if (depth < kMaxDepth) unit_0062(c, 188u, depth + 1u); else { c.pc = 0x00289690u; return; } if (c.pc != 0x0028A1A4u) [[unlikely]] return; }
L_0028A1A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028A1E0; } }
    c.budget -= 1;
L_0028A1B0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  goto L_0028A1D0; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A1C8u); set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028A1C8u) [[unlikely]] return; }
L_0028A1C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0028A1DC; } }
L_0028A1D0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A1DCu); set32(c.r[4], c.r[4].w[0] + 28416u);  if (depth < kMaxDepth) unit_0062(c, 188u, depth + 1u); else { c.pc = 0x00289690u; return; } if (c.pc != 0x0028A1DCu) [[unlikely]] return; }
L_0028A1DC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0028A1E0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028A1F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_0028A218; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A20Cu); set32(c.r[4], c.r[4].w[0] + 28440u);  if (depth < kMaxDepth) unit_0062(c, 188u, depth + 1u); else { c.pc = 0x00289690u; return; } if (c.pc != 0x0028A20Cu) [[unlikely]] return; }
L_0028A20C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028A248; } }
    c.budget -= 1;
L_0028A218:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  goto L_0028A238; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A230u); set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028A230u) [[unlikely]] return; }
L_0028A230:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0028A244; } }
L_0028A238:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A244u); set32(c.r[4], c.r[4].w[0] + 28472u);  if (depth < kMaxDepth) unit_0062(c, 188u, depth + 1u); else { c.pc = 0x00289690u; return; } if (c.pc != 0x0028A244u) [[unlikely]] return; }
L_0028A244:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0028A248:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028A258:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_0028A280; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A274u); set32(c.r[4], c.r[4].w[0] + 28496u);  if (depth < kMaxDepth) unit_0062(c, 188u, depth + 1u); else { c.pc = 0x00289690u; return; } if (c.pc != 0x0028A274u) [[unlikely]] return; }
L_0028A274:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028A2B0; } }
    c.budget -= 1;
L_0028A280:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  goto L_0028A2A0; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A298u); set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028A298u) [[unlikely]] return; }
L_0028A298:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0028A2AC; } }
L_0028A2A0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A2ACu); set32(c.r[4], c.r[4].w[0] + 28528u);  if (depth < kMaxDepth) unit_0062(c, 188u, depth + 1u); else { c.pc = 0x00289690u; return; } if (c.pc != 0x0028A2ACu) [[unlikely]] return; }
L_0028A2AC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0028A2B0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028A2C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_0028A2E8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A2E0u); set32(c.r[4], c.r[4].w[0] + 28552u);  if (depth < kMaxDepth) unit_0062(c, 188u, depth + 1u); else { c.pc = 0x00289690u; return; } if (c.pc != 0x0028A2E0u) [[unlikely]] return; }
L_0028A2E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028A314; } }
L_0028A2E8:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  goto L_0028A308; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A300u); set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028A300u) [[unlikely]] return; }
L_0028A300:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0028A310; } }
L_0028A308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A310u); set32(c.r[4], c.r[4].w[0] + 28584u);  if (depth < kMaxDepth) unit_0062(c, 188u, depth + 1u); else { c.pc = 0x00289690u; return; } if (c.pc != 0x0028A310u) [[unlikely]] return; }
L_0028A310:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0028A314:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028A328:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0028A348; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 28608u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00289690u | kUnwind; return; } goto L_00289690; }
L_0028A348:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  goto L_0028A370; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A360u); set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028A360u) [[unlikely]] return; }
L_0028A360:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028A370:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 28640u);
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00289690u | kUnwind; return; } goto L_00289690; }
L_0028A380:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00920000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] - 6088u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], 0u + 31u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 8;
L_0028A3A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { goto L_0028A3BC; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_0028A3C0; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A3BCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028A3BCu) [[unlikely]] return; }
L_0028A3BC:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_0028A3C0:
    c.budget -= 2;
    if (c.r[17].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028A3A0u | kUnwind; return; } goto L_0028A3A0; }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028A3E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], 0u + 3u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_0028A408; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A400u); set32(c.r[4], c.r[4].w[0] + 28672u);  if (depth < kMaxDepth) unit_0062(c, 188u, depth + 1u); else { c.pc = 0x00289690u; return; } if (c.pc != 0x0028A400u) [[unlikely]] return; }
L_0028A400:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0028A434; } }
L_0028A408:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  goto L_0028A428; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A420u); set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028A420u) [[unlikely]] return; }
L_0028A420:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0028A430; } }
L_0028A428:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A430u); set32(c.r[4], c.r[4].w[0] + 28704u);  if (depth < kMaxDepth) unit_0062(c, 188u, depth + 1u); else { c.pc = 0x00289690u; return; } if (c.pc != 0x0028A430u) [[unlikely]] return; }
L_0028A430:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0028A434:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028A448:
    set32(c.r[29], c.r[29].w[0] - 640u);
    st64((c.r[29].w[0] + 608u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 616u), c.r[17].d[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 624u), c.r[31].d[0]);  if (t) { goto L_0028A470; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 28736u);  if (t) { goto L_0028A4E4; } }
    c.budget -= 1;
L_0028A470:
    set32(c.r[17], c.r[29].w[0] + 304u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A484u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 243u, depth + 1u); else { c.pc = 0x00289F60u; return; } if (c.pc != 0x0028A484u) [[unlikely]] return; }
L_0028A484:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 304u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0028A4A0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 28736u);  if (t) { goto L_0028A4E4; } }
    c.budget -= 1;
L_0028A4A0:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A4ACu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 224u, depth + 1u); else { c.pc = 0x00289D18u; return; } if (c.pc != 0x0028A4ACu) [[unlikely]] return; }
L_0028A4AC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 8u)));  goto L_0028A4C8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A4C4u); set32(c.r[4], c.r[4].w[0] + 28816u);  if (depth < kMaxDepth) unit_0062(c, 188u, depth + 1u); else { c.pc = 0x00289690u; return; } if (c.pc != 0x0028A4C4u) [[unlikely]] return; }
L_0028A4C4:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_0028A4C8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  goto L_0028A4E0; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A4D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028A4D8u) [[unlikely]] return; }
L_0028A4D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 608u));  if (t) { goto L_0028A4F4; } }
L_0028A4E0:
    set32(c.r[4], c.r[4].w[0] + 28856u);
    c.budget -= 1;
L_0028A4E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A4ECu);  if (depth < kMaxDepth) unit_0062(c, 188u, depth + 1u); else { c.pc = 0x00289690u; return; } if (c.pc != 0x0028A4ECu) [[unlikely]] return; }
L_0028A4EC:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0] + 608u));
    c.budget -= 2;
L_0028A4F4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 616u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 624u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 640u);  c.pc = t; return; }
L_0028A508:
    set32(c.r[29], c.r[29].w[0] - 640u);
    st64((c.r[29].w[0] + 608u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 624u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 616u), c.r[17].d[0]);
    c.budget -= 8;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 632u), c.r[31].d[0]);  if (t) { goto L_0028A538; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 28888u);  if (t) { goto L_0028A5B0; } }
    c.budget -= 1;
L_0028A538:
    set32(c.r[17], c.r[29].w[0] + 304u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A54Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 243u, depth + 1u); else { c.pc = 0x00289F60u; return; } if (c.pc != 0x0028A54Cu) [[unlikely]] return; }
L_0028A54C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 304u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0028A568; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 28888u);  if (t) { goto L_0028A5B0; } }
    c.budget -= 1;
L_0028A568:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A574u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 224u, depth + 1u); else { c.pc = 0x00289D18u; return; } if (c.pc != 0x0028A574u) [[unlikely]] return; }
L_0028A574:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 92u)));  goto L_0028A590; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A58Cu); set32(c.r[4], c.r[4].w[0] + 28976u);  if (depth < kMaxDepth) unit_0062(c, 188u, depth + 1u); else { c.pc = 0x00289690u; return; } if (c.pc != 0x0028A58Cu) [[unlikely]] return; }
L_0028A58C:
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 1;
L_0028A590:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0028A5A8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A5A0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028A5A0u) [[unlikely]] return; }
L_0028A5A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 608u));  if (t) { goto L_0028A5C0; } }
L_0028A5A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[4], c.r[4].w[0] + 29016u);
    c.budget -= 2;
L_0028A5B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A5B8u);  if (depth < kMaxDepth) unit_0062(c, 188u, depth + 1u); else { c.pc = 0x00289690u; return; } if (c.pc != 0x0028A5B8u) [[unlikely]] return; }
L_0028A5B8:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0] + 608u));
    c.budget -= 2;
L_0028A5C0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 616u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 624u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 632u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 640u);  c.pc = t; return; }
L_0028A5D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0028A5F8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A5F0u); set32(c.r[4], c.r[4].w[0] + 29048u);  if (depth < kMaxDepth) unit_0062(c, 188u, depth + 1u); else { c.pc = 0x00289690u; return; } if (c.pc != 0x0028A5F0u) [[unlikely]] return; }
L_0028A5F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0028A628; } }
L_0028A5F8:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[3].d[0] | 65535ull;  if (t) { goto L_0028A624; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], 0u + 300u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A620u); c.r[7].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028A620u) [[unlikely]] return; }
L_0028A620:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0028A624:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_0028A628:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028A638:
    set32(c.r[29], c.r[29].w[0] - 368u);
    st64((c.r[29].w[0] + 304u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 336u), c.r[20].d[0]);
    c.r[20].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 312u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 320u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 328u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 344u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 352u), c.r[22].d[0]);
    c.budget -= 12;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 360u), c.r[31].d[0]);  if (t) { goto L_0028A674; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028A698; } }
L_0028A674:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A67Cu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 248u, depth + 1u); else { c.pc = 0x0028A0A8u; return; } if (c.pc != 0x0028A67Cu) [[unlikely]] return; }
L_0028A67C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028A6B0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 29096u);  if (t) { goto L_0028A730; } }
    c.budget -= 1;
L_0028A698:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A6A0u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0028A6A0u) [[unlikely]] return; }
L_0028A6A0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A6B0u); set32(c.r[6], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0028A6B0u) [[unlikely]] return; }
L_0028A6B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A6B8u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0028A6B8u) [[unlikely]] return; }
L_0028A6B8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].sd[0] > 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00920000u);  goto L_0028A6D0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 29096u);  if (t) { goto L_0028A730; } }
L_0028A6D0:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[19], c.r[2].w[0] - 6084u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[21], c.r[19].w[0] - 4u);
    set32(c.r[16], c.r[17].w[0] << 4);
    c.budget -= 6;
L_0028A6E8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[5], c.r[16].w[0] + c.r[19].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[21].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A700u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 138u, depth + 1u); else { c.pc = 0x0011E108u; return; } if (c.pc != 0x0028A700u) [[unlikely]] return; }
L_0028A700:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[17].sd[0] < 32ll ? 1ull : 0ull;  goto L_0028A744; }
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[4], c.r[22].w[0] + 29136u);  if (t) { goto L_0028A730; } }
    set32(c.r[16], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[17].sd[0] < 32ll ? 1ull : 0ull;  goto L_0028A744; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[16].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A728u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028A728u) [[unlikely]] return; }
L_0028A728:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0028A740; } }
L_0028A730:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A738u);  if (depth < kMaxDepth) unit_0062(c, 188u, depth + 1u); else { c.pc = 0x00289690u; return; } if (c.pc != 0x0028A738u) [[unlikely]] return; }
L_0028A738:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028A750; } }
L_0028A740:
    c.r[2].d[0] = c.r[17].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 1;
L_0028A744:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[17].w[0] << 4);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028A6E8u | kUnwind; return; } goto L_0028A6E8; } }
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0028A750:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 304u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 312u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 320u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 328u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 336u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 344u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 352u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 360u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 368u);  c.pc = t; return; }
L_0028A778:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_0028A7A0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A798u); set32(c.r[4], c.r[4].w[0] + 29168u);  if (depth < kMaxDepth) unit_0062(c, 188u, depth + 1u); else { c.pc = 0x00289690u; return; } if (c.pc != 0x0028A798u) [[unlikely]] return; }
L_0028A798:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028A7CC; } }
L_0028A7A0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  goto L_0028A7C0; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A7B8u); set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028A7B8u) [[unlikely]] return; }
L_0028A7B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0028A7C8; } }
L_0028A7C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A7C8u); set32(c.r[4], c.r[4].w[0] + 29200u);  if (depth < kMaxDepth) unit_0062(c, 188u, depth + 1u); else { c.pc = 0x00289690u; return; } if (c.pc != 0x0028A7C8u) [[unlikely]] return; }
L_0028A7C8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0028A7CC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028A7E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0028A800; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 29232u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00289690u | kUnwind; return; } goto L_00289690; }
L_0028A800:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  goto L_0028A828; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A818u); set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028A818u) [[unlikely]] return; }
L_0028A818:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028A828:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 29264u);
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00289690u | kUnwind; return; } goto L_00289690; }
L_0028A8A0:
    set32(c.r[29], c.r[29].w[0] - 640u);
    st64((c.r[29].w[0] + 608u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 616u), c.r[17].d[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 624u), c.r[31].d[0]);  if (t) { goto L_0028A8C8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 29360u);  if (t) { goto L_0028A93C; } }
    c.budget -= 1;
L_0028A8C8:
    set32(c.r[17], c.r[29].w[0] + 304u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A8DCu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 243u, depth + 1u); else { c.pc = 0x00289F60u; return; } if (c.pc != 0x0028A8DCu) [[unlikely]] return; }
L_0028A8DC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 304u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0028A8F8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 29360u);  if (t) { goto L_0028A93C; } }
    c.budget -= 1;
L_0028A8F8:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A904u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 224u, depth + 1u); else { c.pc = 0x00289D18u; return; } if (c.pc != 0x0028A904u) [[unlikely]] return; }
L_0028A904:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 60u)));  goto L_0028A920; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A91Cu); set32(c.r[4], c.r[4].w[0] + 29440u);  if (depth < kMaxDepth) unit_0062(c, 188u, depth + 1u); else { c.pc = 0x00289690u; return; } if (c.pc != 0x0028A91Cu) [[unlikely]] return; }
L_0028A91C:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 1;
L_0028A920:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  goto L_0028A938; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A930u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028A930u) [[unlikely]] return; }
L_0028A930:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 608u));  if (t) { goto L_0028A94C; } }
L_0028A938:
    set32(c.r[4], c.r[4].w[0] + 29480u);
    c.budget -= 1;
L_0028A93C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A944u);  if (depth < kMaxDepth) unit_0062(c, 188u, depth + 1u); else { c.pc = 0x00289690u; return; } if (c.pc != 0x0028A944u) [[unlikely]] return; }
L_0028A944:
    set32(c.r[2], 0u - 1u);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 608u));
    c.budget -= 2;
L_0028A94C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 616u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 624u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 640u);  c.pc = t; return; }
L_0028A960:
    set32(c.r[29], c.r[29].w[0] - 640u);
    st64((c.r[29].w[0] + 608u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 616u), c.r[17].d[0]);
    set32(c.r[17], c.r[29].w[0] + 304u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 624u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A988u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 243u, depth + 1u); else { c.pc = 0x00289F60u; return; } if (c.pc != 0x0028A988u) [[unlikely]] return; }
L_0028A988:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 304u)));
    set32(c.r[4], c.r[4].w[0] + 29512u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0028A9E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A9A8u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 224u, depth + 1u); else { c.pc = 0x00289D18u; return; } if (c.pc != 0x0028A9A8u) [[unlikely]] return; }
L_0028A9A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 29592u);  if (t) { goto L_0028A9C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A9C0u);  if (depth < kMaxDepth) unit_0062(c, 188u, depth + 1u); else { c.pc = 0x00289690u; return; } if (c.pc != 0x0028A9C0u) [[unlikely]] return; }
L_0028A9C0:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  goto L_0028A9E0; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A9D4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028A9D4u) [[unlikely]] return; }
L_0028A9D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 608u));  if (t) { goto L_0028A9F4; } }
    c.budget -= 1;
L_0028A9E0:
    set32(c.r[4], c.r[4].w[0] + 29632u);
    c.budget -= 1;
L_0028A9E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028A9ECu);  if (depth < kMaxDepth) unit_0062(c, 188u, depth + 1u); else { c.pc = 0x00289690u; return; } if (c.pc != 0x0028A9ECu) [[unlikely]] return; }
L_0028A9EC:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0] + 608u));
    c.budget -= 2;
L_0028A9F4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 616u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 624u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 640u);  c.pc = t; return; }
L_0028AA08:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AA3Cu); c.r[20].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0028AA3Cu) [[unlikely]] return; }
L_0028AA3C:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00920000u);
    set32(c.r[19], c.r[2].w[0] - 6084u);
    set32(c.r[22], c.r[19].w[0] - 4u);
    set32(c.r[16], c.r[17].w[0] << 4);
    c.budget -= 5;
L_0028AA50:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + c.r[19].w[0]);
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AA68u); set32(c.r[16], c.r[16].w[0] + c.r[22].w[0]);  if (depth < kMaxDepth) unit_0007(c, 138u, depth + 1u); else { c.pc = 0x0011E108u; return; } if (c.pc != 0x0028AA68u) [[unlikely]] return; }
L_0028AA68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0028AAE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AA78u); set32(c.r[16], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0062(c, 397u, depth + 1u); else { c.pc = 0x0028B428u; return; } if (c.pc != 0x0028AA78u) [[unlikely]] return; }
L_0028AA78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028AAB8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[17].sd[0] < 32ll ? 1ull : 0ull;  if (t) { goto L_0028AAE4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[17].sd[0] < 32ll ? 1ull : 0ull;  if (t) { goto L_0028AAE4; } }
    st32((c.r[29].w[0] + 4u), c.r[18].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AAB0u); c.r[7].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028AAB0u) [[unlikely]] return; }
L_0028AAB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0028AAEC; } }
L_0028AAB8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[17].sd[0] < 32ll ? 1ull : 0ull;  if (t) { goto L_0028AAE4; } }
    set32(c.r[16], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0028AAE4; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[16].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AAD4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028AAD4u) [[unlikely]] return; }
L_0028AAD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0028AAEC; } }
    c.budget -= 1;
L_0028AAE0:
    c.r[2].d[0] = c.r[17].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 1;
L_0028AAE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[17].w[0] << 4);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028AA50u | kUnwind; return; } goto L_0028AA50; } }
L_0028AAEC:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0028AB18:
    set32(c.r[29], c.r[29].w[0] - 656u);
    st64((c.r[29].w[0] + 608u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 616u), c.r[17].d[0]);
    set32(c.r[17], c.r[29].w[0] + 304u);
    st64((c.r[29].w[0] + 624u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 632u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st64((c.r[29].w[0] + 640u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 648u), c.r[31].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AB54u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 243u, depth + 1u); else { c.pc = 0x00289F60u; return; } if (c.pc != 0x0028AB54u) [[unlikely]] return; }
L_0028AB54:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0])));
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_0028AB90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AB6Cu);  if (depth < kMaxDepth) unit_0062(c, 248u, depth + 1u); else { c.pc = 0x0028A0A8u; return; } if (c.pc != 0x0028AB6Cu) [[unlikely]] return; }
L_0028AB6C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 29552u);  if (t) { goto L_0028AB90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AB84u);  if (depth < kMaxDepth) unit_0062(c, 188u, depth + 1u); else { c.pc = 0x00289690u; return; } if (c.pc != 0x0028AB84u) [[unlikely]] return; }
L_0028AB84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028ABCC; } }
    c.budget -= 1;
L_0028AB90:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AB9Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 400u, depth + 1u); else { c.pc = 0x0028B478u; return; } if (c.pc != 0x0028AB9Cu) [[unlikely]] return; }
L_0028AB9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028ABA4u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 204u, depth + 1u); else { c.pc = 0x002899F0u; return; } if (c.pc != 0x0028ABA4u) [[unlikely]] return; }
L_0028ABA4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[20].d[0] + 0ull;  goto L_0028ABCC; }
    set32(c.r[2], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0028ABC8; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028ABC4u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028ABC4u) [[unlikely]] return; }
L_0028ABC4:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0028ABC8:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0028ABCC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 608u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 616u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 624u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 632u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 640u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 648u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 656u);  c.pc = t; return; }
L_0028ABF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0028AC10; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AC08u); set32(c.r[4], c.r[4].w[0] + 29664u);  if (depth < kMaxDepth) unit_0062(c, 188u, depth + 1u); else { c.pc = 0x00289690u; return; } if (c.pc != 0x0028AC08u) [[unlikely]] return; }
L_0028AC08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028AC3C; } }
L_0028AC10:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  goto L_0028AC30; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AC28u); set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028AC28u) [[unlikely]] return; }
L_0028AC28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0028AC40; } }
L_0028AC30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AC38u); set32(c.r[4], c.r[4].w[0] + 29704u);  if (depth < kMaxDepth) unit_0062(c, 188u, depth + 1u); else { c.pc = 0x00289690u; return; } if (c.pc != 0x0028AC38u) [[unlikely]] return; }
L_0028AC38:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028AC3C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0028AC40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028AC48:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 104u), c.r[17].d[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 112u), c.r[31].d[0]);  if (t) { goto L_0028AC70; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 29744u);  if (t) { goto L_0028ACE4; } }
    c.budget -= 1;
L_0028AC70:
    set32(c.r[17], c.r[29].w[0] + 48u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AC84u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 243u, depth + 1u); else { c.pc = 0x00289F60u; return; } if (c.pc != 0x0028AC84u) [[unlikely]] return; }
L_0028AC84:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0028ACA0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 29744u);  if (t) { goto L_0028ACE4; } }
    c.budget -= 1;
L_0028ACA0:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028ACACu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 224u, depth + 1u); else { c.pc = 0x00289D18u; return; } if (c.pc != 0x0028ACACu) [[unlikely]] return; }
L_0028ACAC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 80u)));  goto L_0028ACC8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028ACC4u); set32(c.r[4], c.r[4].w[0] + 29824u);  if (depth < kMaxDepth) unit_0062(c, 188u, depth + 1u); else { c.pc = 0x00289690u; return; } if (c.pc != 0x0028ACC4u) [[unlikely]] return; }
L_0028ACC4:
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 1;
L_0028ACC8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  goto L_0028ACE0; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028ACD8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028ACD8u) [[unlikely]] return; }
L_0028ACD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_0028ACF4; } }
L_0028ACE0:
    set32(c.r[4], c.r[4].w[0] + 29856u);
    c.budget -= 1;
L_0028ACE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028ACECu);  if (depth < kMaxDepth) unit_0062(c, 188u, depth + 1u); else { c.pc = 0x00289690u; return; } if (c.pc != 0x0028ACECu) [[unlikely]] return; }
L_0028ACEC:
    set32(c.r[2], 0u - 1u);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 2;
L_0028ACF4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 104u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0028AD08:
    set32(c.r[29], c.r[29].w[0] - 640u);
    st64((c.r[29].w[0] + 608u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 616u), c.r[17].d[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 624u), c.r[31].d[0]);  if (t) { goto L_0028AD30; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 29888u);  if (t) { goto L_0028ADA4; } }
    c.budget -= 1;
L_0028AD30:
    set32(c.r[17], c.r[29].w[0] + 304u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AD44u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 243u, depth + 1u); else { c.pc = 0x00289F60u; return; } if (c.pc != 0x0028AD44u) [[unlikely]] return; }
L_0028AD44:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 304u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0028AD60; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 29888u);  if (t) { goto L_0028ADA4; } }
    c.budget -= 1;
L_0028AD60:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AD6Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 224u, depth + 1u); else { c.pc = 0x00289D18u; return; } if (c.pc != 0x0028AD6Cu) [[unlikely]] return; }
L_0028AD6C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 84u)));  goto L_0028AD88; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AD84u); set32(c.r[4], c.r[4].w[0] + 29968u);  if (depth < kMaxDepth) unit_0062(c, 188u, depth + 1u); else { c.pc = 0x00289690u; return; } if (c.pc != 0x0028AD84u) [[unlikely]] return; }
L_0028AD84:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 1;
L_0028AD88:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  goto L_0028ADA0; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AD98u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028AD98u) [[unlikely]] return; }
L_0028AD98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 608u));  if (t) { goto L_0028ADB4; } }
L_0028ADA0:
    set32(c.r[4], c.r[4].w[0] + 30008u);
    c.budget -= 1;
L_0028ADA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028ADACu);  if (depth < kMaxDepth) unit_0062(c, 188u, depth + 1u); else { c.pc = 0x00289690u; return; } if (c.pc != 0x0028ADACu) [[unlikely]] return; }
L_0028ADAC:
    set32(c.r[2], 0u - 1u);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 608u));
    c.budget -= 2;
L_0028ADB4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 616u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 624u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 640u);  c.pc = t; return; }
L_0028ADC8:
    set32(c.r[29], c.r[29].w[0] - 640u);
    st64((c.r[29].w[0] + 608u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 616u), c.r[17].d[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 624u), c.r[31].d[0]);  if (t) { goto L_0028ADF0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 30040u);  if (t) { goto L_0028AE64; } }
    c.budget -= 1;
L_0028ADF0:
    set32(c.r[17], c.r[29].w[0] + 304u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AE04u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 243u, depth + 1u); else { c.pc = 0x00289F60u; return; } if (c.pc != 0x0028AE04u) [[unlikely]] return; }
L_0028AE04:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 304u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0028AE20; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 30040u);  if (t) { goto L_0028AE64; } }
    c.budget -= 1;
L_0028AE20:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AE2Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 224u, depth + 1u); else { c.pc = 0x00289D18u; return; } if (c.pc != 0x0028AE2Cu) [[unlikely]] return; }
L_0028AE2C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 88u)));  goto L_0028AE48; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AE44u); set32(c.r[4], c.r[4].w[0] + 30120u);  if (depth < kMaxDepth) unit_0062(c, 188u, depth + 1u); else { c.pc = 0x00289690u; return; } if (c.pc != 0x0028AE44u) [[unlikely]] return; }
L_0028AE44:
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 1;
L_0028AE48:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  goto L_0028AE60; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AE58u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028AE58u) [[unlikely]] return; }
L_0028AE58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 608u));  if (t) { goto L_0028AE74; } }
L_0028AE60:
    set32(c.r[4], c.r[4].w[0] + 30160u);
    c.budget -= 1;
L_0028AE64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AE6Cu);  if (depth < kMaxDepth) unit_0062(c, 188u, depth + 1u); else { c.pc = 0x00289690u; return; } if (c.pc != 0x0028AE6Cu) [[unlikely]] return; }
L_0028AE6C:
    set32(c.r[2], 0u - 1u);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 608u));
    c.budget -= 2;
L_0028AE74:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 616u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 624u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 640u);  c.pc = t; return; }
L_0028AE88:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0028AEA8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AEA0u); set32(c.r[4], c.r[4].w[0] + 30192u);  if (depth < kMaxDepth) unit_0062(c, 188u, depth + 1u); else { c.pc = 0x00289690u; return; } if (c.pc != 0x0028AEA0u) [[unlikely]] return; }
L_0028AEA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028AF00; } }
L_0028AEA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00920000u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[2].w[0] - 6088u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0028AEF4; } }
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 3;
L_0028AED0:
    set32(c.r[5], c.r[6].w[0] << 4);
    c.r[2].d[0] = c.r[6].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + c.r[7].w[0]);  if (t) { goto L_0028AEF4; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] != c.r[4].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028AED0u | kUnwind; return; } goto L_0028AED0; }
L_0028AEF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00920000u);
    set32(c.r[2], c.r[2].w[0] - 6084u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 3;
L_0028AF00:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028AF10:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0028AF28; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[2].w[0] - 29388u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] - 29384u), 0u);  c.pc = t; return; }
L_0028AF28:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[2].w[0] - 29388u), c.r[4].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] - 29384u), c.r[5].w[0]);  c.pc = t; return; }
L_0028AF38:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_0028AF60; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AF58u); set32(c.r[4], c.r[4].w[0] + 30224u);  if (depth < kMaxDepth) unit_0062(c, 188u, depth + 1u); else { c.pc = 0x00289690u; return; } if (c.pc != 0x0028AF58u) [[unlikely]] return; }
L_0028AF58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028AF8C; } }
L_0028AF60:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  goto L_0028AF80; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AF78u); set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028AF78u) [[unlikely]] return; }
L_0028AF78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0028AF88; } }
L_0028AF80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AF88u); set32(c.r[4], c.r[4].w[0] + 30256u);  if (depth < kMaxDepth) unit_0062(c, 188u, depth + 1u); else { c.pc = 0x00289690u; return; } if (c.pc != 0x0028AF88u) [[unlikely]] return; }
L_0028AF88:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0028AF8C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028AFA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_0028AFC8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AFC0u); set32(c.r[4], c.r[4].w[0] + 30288u);  if (depth < kMaxDepth) unit_0062(c, 188u, depth + 1u); else { c.pc = 0x00289690u; return; } if (c.pc != 0x0028AFC0u) [[unlikely]] return; }
L_0028AFC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028AFF4; } }
L_0028AFC8:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 100u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  goto L_0028AFE8; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AFE0u); set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028AFE0u) [[unlikely]] return; }
L_0028AFE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0028AFF0; } }
L_0028AFE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028AFF0u); set32(c.r[4], c.r[4].w[0] + 30320u);  if (depth < kMaxDepth) unit_0062(c, 188u, depth + 1u); else { c.pc = 0x00289690u; return; } if (c.pc != 0x0028AFF0u) [[unlikely]] return; }
L_0028AFF0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0028AFF4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028B008:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0] + 48u), c.r[31].d[0]);  if (t) { goto L_0028B030; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 30352u);  if (t) { goto L_0028B06C; } }
    c.budget -= 1;
L_0028B030:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0028B048; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 30392u);  if (t) { goto L_0028B06C; } }
    c.budget -= 1;
L_0028B048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B050u);  if (depth < kMaxDepth) unit_0062(c, 204u, depth + 1u); else { c.pc = 0x002899F0u; return; } if (c.pc != 0x0028B050u) [[unlikely]] return; }
L_0028B050:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[6], 0u + 20u);  if (t) { goto L_0028B080; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[4], c.r[4].w[0] + 30440u);
    c.budget -= 2;
L_0028B06C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B074u);  if (depth < kMaxDepth) unit_0062(c, 188u, depth + 1u); else { c.pc = 0x00289690u; return; } if (c.pc != 0x0028B074u) [[unlikely]] return; }
L_0028B074:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0028B0B0; } }
    c.budget -= 1;
L_0028B080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B088u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0028B088u) [[unlikely]] return; }
L_0028B088:
    set32(c.r[2], 0u - 1u);
    st32((c.r[29].w[0]), c.r[16].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0028B0B0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B0B0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028B0B0u) [[unlikely]] return; }
L_0028B0B0:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0028B0D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0] + 64u), c.r[31].d[0]);  if (t) { goto L_0028B110; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B104u); set32(c.r[4], c.r[4].w[0] + 30480u);  if (depth < kMaxDepth) unit_0062(c, 188u, depth + 1u); else { c.pc = 0x00289690u; return; } if (c.pc != 0x0028B104u) [[unlikely]] return; }
L_0028B104:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0028B1BC; } }
    c.budget -= 1;
L_0028B110:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_0028B130; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B124u); set32(c.r[4], c.r[4].w[0] + 30520u);  if (depth < kMaxDepth) unit_0062(c, 188u, depth + 1u); else { c.pc = 0x00289690u; return; } if (c.pc != 0x0028B124u) [[unlikely]] return; }
L_0028B124:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0028B1BC; } }
    c.budget -= 1;
L_0028B130:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0028B150; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B144u); set32(c.r[4], c.r[4].w[0] + 30560u);  if (depth < kMaxDepth) unit_0062(c, 188u, depth + 1u); else { c.pc = 0x00289690u; return; } if (c.pc != 0x0028B144u) [[unlikely]] return; }
L_0028B144:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0028B1BC; } }
    c.budget -= 1;
L_0028B150:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B158u);  if (depth < kMaxDepth) unit_0062(c, 204u, depth + 1u); else { c.pc = 0x002899F0u; return; } if (c.pc != 0x0028B158u) [[unlikely]] return; }
L_0028B158:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { c.r[4].d[0] = c.r[29].d[0] + 0ull;  goto L_0028B178; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B170u); set32(c.r[4], c.r[4].w[0] + 30600u);  if (depth < kMaxDepth) unit_0062(c, 188u, depth + 1u); else { c.pc = 0x00289690u; return; } if (c.pc != 0x0028B170u) [[unlikely]] return; }
L_0028B170:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0028B1BC; } }
L_0028B178:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B184u); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0028B184u) [[unlikely]] return; }
L_0028B184:
    st32((c.r[29].w[0]), c.r[17].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[18].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_0028B1B8; } }
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B1ACu); c.r[7].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028B1ACu) [[unlikely]] return; }
L_0028B1AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0028B1C0; } }
    c.budget -= 1;
L_0028B1B8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0028B1BC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0028B1C0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0028B1D8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0] + 48u), c.r[31].d[0]);  if (t) { goto L_0028B200; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 30640u);  if (t) { goto L_0028B23C; } }
    c.budget -= 1;
L_0028B200:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0028B218; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 30680u);  if (t) { goto L_0028B23C; } }
    c.budget -= 1;
L_0028B218:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B220u);  if (depth < kMaxDepth) unit_0062(c, 204u, depth + 1u); else { c.pc = 0x002899F0u; return; } if (c.pc != 0x0028B220u) [[unlikely]] return; }
L_0028B220:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[6], 0u + 20u);  if (t) { goto L_0028B250; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[4], c.r[4].w[0] + 30720u);
    c.budget -= 2;
L_0028B23C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B244u);  if (depth < kMaxDepth) unit_0062(c, 188u, depth + 1u); else { c.pc = 0x00289690u; return; } if (c.pc != 0x0028B244u) [[unlikely]] return; }
L_0028B244:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0028B280; } }
    c.budget -= 1;
L_0028B250:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B258u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0028B258u) [[unlikely]] return; }
L_0028B258:
    set32(c.r[2], 0u - 1u);
    st32((c.r[29].w[0] + 4u), c.r[16].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0028B280; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B280u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028B280u) [[unlikely]] return; }
L_0028B280:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0028B298:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0] + 56u), c.r[31].d[0]);  if (t) { goto L_0028B2C8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 30760u);  if (t) { goto L_0028B304; } }
    c.budget -= 1;
L_0028B2C8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0028B2E0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 30808u);  if (t) { goto L_0028B304; } }
    c.budget -= 1;
L_0028B2E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B2E8u);  if (depth < kMaxDepth) unit_0062(c, 204u, depth + 1u); else { c.pc = 0x002899F0u; return; } if (c.pc != 0x0028B2E8u) [[unlikely]] return; }
L_0028B2E8:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[6], 0u + 20u);  if (t) { goto L_0028B318; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[4], c.r[4].w[0] + 30856u);
    c.budget -= 2;
L_0028B304:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B30Cu);  if (depth < kMaxDepth) unit_0062(c, 188u, depth + 1u); else { c.pc = 0x00289690u; return; } if (c.pc != 0x0028B30Cu) [[unlikely]] return; }
L_0028B30C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0028B34C; } }
    c.budget -= 1;
L_0028B318:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B320u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0028B320u) [[unlikely]] return; }
L_0028B320:
    set32(c.r[2], 0u - 1u);
    st32((c.r[29].w[0] + 4u), c.r[16].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.r[18].w[0]);
    set32(c.r[5], 0u + 5u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0028B34C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B34Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028B34Cu) [[unlikely]] return; }
L_0028B34C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0028B368:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0] + 48u), c.r[31].d[0]);  if (t) { goto L_0028B398; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B38Cu); set32(c.r[4], c.r[4].w[0] + 30896u);  if (depth < kMaxDepth) unit_0062(c, 188u, depth + 1u); else { c.pc = 0x00289690u; return; } if (c.pc != 0x0028B38Cu) [[unlikely]] return; }
L_0028B38C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0028B418; } }
    c.budget -= 1;
L_0028B398:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0028B3B8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B3ACu); set32(c.r[4], c.r[4].w[0] + 30936u);  if (depth < kMaxDepth) unit_0062(c, 188u, depth + 1u); else { c.pc = 0x00289690u; return; } if (c.pc != 0x0028B3ACu) [[unlikely]] return; }
L_0028B3AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0028B418; } }
    c.budget -= 1;
L_0028B3B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B3C0u);  if (depth < kMaxDepth) unit_0062(c, 204u, depth + 1u); else { c.pc = 0x002899F0u; return; } if (c.pc != 0x0028B3C0u) [[unlikely]] return; }
L_0028B3C0:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[6], 0u + 20u);  if (t) { goto L_0028B3E8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B3E0u); set32(c.r[4], c.r[4].w[0] + 30976u);  if (depth < kMaxDepth) unit_0062(c, 188u, depth + 1u); else { c.pc = 0x00289690u; return; } if (c.pc != 0x0028B3E0u) [[unlikely]] return; }
L_0028B3E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0028B418; } }
L_0028B3E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B3F0u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0028B3F0u) [[unlikely]] return; }
L_0028B3F0:
    set32(c.r[5], 0u + 6u);
    st32((c.r[29].w[0] + 4u), c.r[16].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0028B414; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B414u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028B414u) [[unlikely]] return; }
L_0028B414:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0028B418:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0028B428:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B438u);  if (depth < kMaxDepth) unit_0062(c, 204u, depth + 1u); else { c.pc = 0x002899F0u; return; } if (c.pc != 0x0028B438u) [[unlikely]] return; }
L_0028B438:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0028B470; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0028B468; } }
    set32(c.r[5], 0u + 100u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B460u); c.r[7].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028B460u) [[unlikely]] return; }
L_0028B460:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0028B470; } }
L_0028B468:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0028B470:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028B478:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.budget -= 8;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 24u), c.r[31].d[0]);  if (t) { goto L_0028B4A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B4A0u);  if (depth < kMaxDepth) unit_0062(c, 223u, depth + 1u); else { c.pc = 0x00289D08u; return; } if (c.pc != 0x0028B4A0u) [[unlikely]] return; }
L_0028B4A0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0028B4A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B4ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 397u, depth + 1u); else { c.pc = 0x0028B428u; return; } if (c.pc != 0x0028B4ACu) [[unlikely]] return; }
L_0028B4AC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00920000u);
    set32(c.r[18], c.r[3].w[0] - 5560u);
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0028B4F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B4CCu);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0028B4CCu) [[unlikely]] return; }
L_0028B4CC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    set32(c.r[5], c.r[5].w[0] + 31016u);
    c.budget -= 11;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011D4F8u | kUnwind; return; } [[clang::musttail]] return unit_0007(c, 91u, depth); }
L_0028B4F8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028B510:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B520u);  if (depth < kMaxDepth) unit_0062(c, 204u, depth + 1u); else { c.pc = 0x002899F0u; return; } if (c.pc != 0x0028B520u) [[unlikely]] return; }
L_0028B520:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028B530:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] != 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_0028B560; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B558u); set32(c.r[4], c.r[4].w[0] + 31024u);  if (depth < kMaxDepth) unit_0062(c, 188u, depth + 1u); else { c.pc = 0x00289690u; return; } if (c.pc != 0x0028B558u) [[unlikely]] return; }
L_0028B558:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028B5B4; } }
L_0028B560:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 200u);  if (t) { goto L_0028B5B0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B580u); c.r[7].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028B580u) [[unlikely]] return; }
L_0028B580:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 96u)));
    set32(c.r[5], 0u + 201u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B5A0u); c.r[7].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028B5A0u) [[unlikely]] return; }
L_0028B5A0:
    c.r[16].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[16].d[0] = c.r[16].d[0] + c.r[2].d[0];
    c.budget -= 4;
L_0028B5B0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0028B5B4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028B5C8:
    set32(c.r[29], c.r[29].w[0] - 656u);
    st64((c.r[29].w[0] + 616u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 632u), c.r[19].d[0]);
    set32(c.r[19], c.r[29].w[0] + 304u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st64((c.r[29].w[0] + 608u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 624u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 640u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B5FCu); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0062(c, 243u, depth + 1u); else { c.pc = 0x00289F60u; return; } if (c.pc != 0x0028B5FCu) [[unlikely]] return; }
L_0028B5FC:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B60Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 224u, depth + 1u); else { c.pc = 0x00289D18u; return; } if (c.pc != 0x0028B60Cu) [[unlikely]] return; }
L_0028B60C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 202u);
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0028B65C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B630u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028B630u) [[unlikely]] return; }
L_0028B630:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 203u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B650u); c.r[16].d[0] = c.r[16].d[0] << 32;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028B650u) [[unlikely]] return; }
L_0028B650:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[16].d[0] = c.r[16].d[0] + c.r[2].d[0];
    c.budget -= 3;
L_0028B65C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0] + 608u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 616u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 624u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 632u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 640u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 656u);  c.pc = t; return; }
L_0028B680:
    set32(c.r[29], c.r[29].w[0] - 656u);
    st64((c.r[29].w[0] + 624u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 616u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 632u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 640u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 608u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 648u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B6ACu); c.r[20].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 204u, depth + 1u); else { c.pc = 0x002899F0u; return; } if (c.pc != 0x0028B6ACu) [[unlikely]] return; }
L_0028B6AC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[19], c.r[29].w[0] + 304u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0028B720; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B6D0u);  if (depth < kMaxDepth) unit_0062(c, 243u, depth + 1u); else { c.pc = 0x00289F60u; return; } if (c.pc != 0x0028B6D0u) [[unlikely]] return; }
L_0028B6D0:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 204u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0028B720; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B6F4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028B6F4u) [[unlikely]] return; }
L_0028B6F4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 205u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B714u); c.r[16].d[0] = c.r[16].d[0] << 32;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028B714u) [[unlikely]] return; }
L_0028B714:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[2].d[0] = c.r[16].d[0] + c.r[2].d[0];
    c.budget -= 3;
L_0028B720:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 608u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 616u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 624u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 632u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 640u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 648u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 656u);  c.pc = t; return; }
L_0028B740:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0028B768; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B75Cu); set32(c.r[4], c.r[4].w[0] + 31056u);  if (depth < kMaxDepth) unit_0062(c, 188u, depth + 1u); else { c.pc = 0x00289690u; return; } if (c.pc != 0x0028B75Cu) [[unlikely]] return; }
L_0028B75C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028B790; } }
    c.budget -= 1;
L_0028B768:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 299u);  if (t) { goto L_0028B78C; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B788u); c.r[7].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028B788u) [[unlikely]] return; }
L_0028B788:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0028B78C:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_0028B790:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028B7A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 29320u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[4].w[0] - 29376u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[6], 0u + 56u);
    c.budget -= 12;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011AB50u | kUnwind; return; } [[clang::musttail]] return unit_0006(c, 201u, depth); }
L_0028B7D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B7E8u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0065(c, 205u, depth + 1u); else { c.pc = 0x00296898u; return; } if (c.pc != 0x0028B7E8u) [[unlikely]] return; }
L_0028B7E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[16], c.r[2].w[0] - 29376u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028B834; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B804u);  if (depth < kMaxDepth) unit_0062(c, 423u, depth + 1u); else { c.pc = 0x0028B7A0u; return; } if (c.pc != 0x0028B804u) [[unlikely]] return; }
L_0028B804:
    set32(c.r[4], 0u + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[3].w[0] - 29280u);
    set32(c.r[5], 0u - 1u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 12;
L_0028B834:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B83Cu);  if (depth < kMaxDepth) unit_0065(c, 207u, depth + 1u); else { c.pc = 0x00296910u; return; } if (c.pc != 0x0028B83Cu) [[unlikely]] return; }
L_0028B83C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028B858:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B874u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0065(c, 205u, depth + 1u); else { c.pc = 0x00296898u; return; } if (c.pc != 0x0028B874u) [[unlikely]] return; }
L_0028B874:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[2], c.r[17].w[0] - 29376u);
    set32(c.r[4], c.r[4].w[0] + 31160u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0028B8A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B894u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x0028B894u) [[unlikely]] return; }
L_0028B894:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0028B8E8; } }
    c.budget -= 1;
L_0028B8A0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0028B8C4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 9u);  if (t) { goto L_0028B8C4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_0028B8C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B8C4u); set32(c.r[4], c.r[4].w[0] + 31224u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x0028B8C4u) [[unlikely]] return; }
L_0028B8C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B8CCu);  if (depth < kMaxDepth) unit_0062(c, 423u, depth + 1u); else { c.pc = 0x0028B7A0u; return; } if (c.pc != 0x0028B8CCu) [[unlikely]] return; }
L_0028B8CC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st8((c.r[17].w[0] - 29376u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 29276u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
L_0028B8E8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_0065(c, 207u, depth); }
L_0028B8F8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 4608u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B93Cu); c.r[22].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028B93Cu) [[unlikely]] return; }
L_0028B93C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B944u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0073(c, 295u, depth + 1u); else { c.pc = 0x002CE098u; return; } if (c.pc != 0x0028B944u) [[unlikely]] return; }
L_0028B944:
    set32(c.r[4], 0u + 4609u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B950u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028B950u) [[unlikely]] return; }
L_0028B950:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028B9BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B964u);  if (depth < kMaxDepth) unit_0065(c, 205u, depth + 1u); else { c.pc = 0x00296898u; return; } if (c.pc != 0x0028B964u) [[unlikely]] return; }
L_0028B964:
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0028B984; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 9u);  if (t) { goto L_0028B984; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0028B9B0; } }
L_0028B984:
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[20], 0u + 1u);
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[17].w[0] + 8u), c.r[19].w[0]);
    lwl(c.r[2], (c.r[18].w[0] + 3u));
    lwr(c.r[2], (c.r[18].w[0]));
    swl(c.r[2], (c.r[17].w[0] + 23u));
    swr(c.r[2], (c.r[17].w[0] + 20u));
    st32((c.r[17].w[0] + 12u), c.r[21].w[0]);
    st32((c.r[17].w[0] + 16u), c.r[22].w[0]);
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 11;
L_0028B9B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028B9B8u);  if (depth < kMaxDepth) unit_0065(c, 207u, depth + 1u); else { c.pc = 0x00296910u; return; } if (c.pc != 0x0028B9B8u) [[unlikely]] return; }
L_0028B9B8:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0028B9BC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0028B9E8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BA24u); c.r[21].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0065(c, 205u, depth + 1u); else { c.pc = 0x00296898u; return; } if (c.pc != 0x0028BA24u) [[unlikely]] return; }
L_0028BA24:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0028BA40; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 9u);  if (t) { goto L_0028BA40; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0028BA68; } }
L_0028BA40:
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 48u), c.r[18].w[0]);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[20], 0u + 1u);
    st32((c.r[16].w[0] + 24u), c.r[17].w[0]);
    st64((c.r[16].w[0] + 32u), c.r[19].d[0]);
    st64((c.r[16].w[0] + 40u), c.r[21].d[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 10;
L_0028BA68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BA70u);  if (depth < kMaxDepth) unit_0065(c, 207u, depth + 1u); else { c.pc = 0x00296910u; return; } if (c.pc != 0x0028BA70u) [[unlikely]] return; }
L_0028BA70:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0028BA98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));  c.pc = t; return; }
L_0028BAA0:
    set32(c.r[2], 0u + 16383u);
    set32(c.r[2], c.r[2].w[0] - 32u);
    c.budget -= 2;
L_0028BAA8:
    c.budget -= 7;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], c.r[2].w[0] - 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028BAA8u | kUnwind; return; } goto L_0028BAA8; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028BAD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BAE0u); set32(c.r[4], 0u + 4864u);  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028BAE0u) [[unlikely]] return; }
L_0028BAE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BAE8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0073(c, 295u, depth + 1u); else { c.pc = 0x002CE098u; return; } if (c.pc != 0x0028BAE8u) [[unlikely]] return; }
L_0028BAE8:
    set32(c.r[4], 0u + 4865u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0063(c, 50u, depth); }
L_0028BAF8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = 0ull | 36864ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    set32(c.r[20], 0u + 1u);
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    set32(c.r[22], 0u + 9u);
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 18;
L_0028BB40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[20].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0028BBA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BB50u); set32(c.r[4], 0u + 4352u);  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028BB50u) [[unlikely]] return; }
L_0028BB50:
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BB60u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 68u, depth + 1u); else { c.pc = 0x0028C930u; return; } if (c.pc != 0x0028BB60u) [[unlikely]] return; }
L_0028BB60:
    set32(c.r[4], 0u + 4353u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BB6Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028BB6Cu) [[unlikely]] return; }
L_0028BB6C:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_0028BB80; } }
    st32((c.r[17].w[0] + 52u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[22].w[0]));  if (t) { goto L_0028BB9C; } }
L_0028BB80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BB88u); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_0062(c, 443u, depth + 1u); else { c.pc = 0x0028BAA0u; return; } if (c.pc != 0x0028BB88u) [[unlikely]] return; }
L_0028BB88:
    c.r[2].d[0] = c.r[19].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028BB40u | kUnwind; return; } goto L_0028BB40; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BB9Cu); set32(c.r[4], c.r[21].w[0] + 31256u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x0028BB9Cu) [[unlikely]] return; }
L_0028BB9C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0028BBA0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0028BBC8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[19].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0028BBF8; } }
L_0028BBF0:
    set32(c.r[2], c.r[2].w[0] << 16);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.budget -= 2;
L_0028BBF8:
    c.r[2].d[0] = c.r[16].sd[0] < 1000ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));  goto L_0028BC44; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BC0Cu);  if (depth < kMaxDepth) unit_0065(c, 203u, depth + 1u); else { c.pc = 0x00296868u; return; } if (c.pc != 0x0028BC0Cu) [[unlikely]] return; }
L_0028BC0C:
    set32(c.r[4], c.r[19].w[0] - 29316u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0028BC38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BC28u);  if (depth < kMaxDepth) unit_0065(c, 204u, depth + 1u); else { c.pc = 0x00296880u; return; } if (c.pc != 0x0028BC28u) [[unlikely]] return; }
L_0028BC28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BC30u);  if (depth < kMaxDepth) unit_0062(c, 443u, depth + 1u); else { c.pc = 0x0028BAA0u; return; } if (c.pc != 0x0028BC30u) [[unlikely]] return; }
L_0028BC30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028BBF0u | kUnwind; return; } goto L_0028BBF0; } }
L_0028BC38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BC40u); st32((c.r[4].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0065(c, 204u, depth + 1u); else { c.pc = 0x00296880u; return; } if (c.pc != 0x0028BC40u) [[unlikely]] return; }
L_0028BC40:
    c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.budget -= 1;
L_0028BC44:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[18].d[0] != c.r[2].d[0]) { st32((c.r[19].w[0] - 29316u), 0u);  goto L_0028BCB8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[16], c.r[2].w[0] - 29376u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));  if (t) { goto L_0028BC74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BC70u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 445u, depth + 1u); else { c.pc = 0x0028BAD0u; return; } if (c.pc != 0x0028BC70u) [[unlikely]] return; }
L_0028BC70:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    c.budget -= 1;
L_0028BC74:
    set32(c.r[2], c.r[2].w[0] << 24);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[18].d[0]) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));  goto L_0028BC90; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BC8Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 448u, depth + 1u); else { c.pc = 0x0028BAF8u; return; } if (c.pc != 0x0028BC8Cu) [[unlikely]] return; }
L_0028BC8C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.budget -= 1;
L_0028BC90:
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_0028BCB4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] - 29284u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 6;
L_0028BCB4:
    st32((c.r[19].w[0] - 29316u), 0u);
    c.budget -= 1;
L_0028BCB8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0028BCD8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 29376u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028BBC8u | kUnwind; return; } goto L_0028BBC8; }
L_0028BCF8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BD0Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0065(c, 205u, depth + 1u); else { c.pc = 0x00296898u; return; } if (c.pc != 0x0028BD0Cu) [[unlikely]] return; }
L_0028BD0C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 31288u);  if (t) { goto L_0028BD30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BD24u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x0028BD24u) [[unlikely]] return; }
L_0028BD24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0028BD54; } }
    c.budget -= 1;
L_0028BD30:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  goto L_0028BD50; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BD48u); set32(c.r[4], c.r[4].w[0] + 31320u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x0028BD48u) [[unlikely]] return; }
L_0028BD48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0028BD54; } }
L_0028BD50:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0028BD54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0065(c, 207u, depth); }
L_0028BD60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], c.r[3].w[0] - 29300u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_0028BE44; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0028BE48; }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[18].w[0] - 29292u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] - 29304u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0028BDF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BDC8u);  if (depth < kMaxDepth) unit_0065(c, 206u, depth + 1u); else { c.pc = 0x002968C8u; return; } if (c.pc != 0x0028BDC8u) [[unlikely]] return; }
L_0028BDC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BDD0u); set32(c.r[4], 0u + 5120u);  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028BDD0u) [[unlikely]] return; }
L_0028BDD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BDD8u);  if (depth < kMaxDepth) unit_0073(c, 393u, depth + 1u); else { c.pc = 0x002CEE08u; return; } if (c.pc != 0x0028BDD8u) [[unlikely]] return; }
L_0028BDD8:
    set32(c.r[4], 0u + 5121u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BDE4u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028BDE4u) [[unlikely]] return; }
L_0028BDE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BDECu);  if (depth < kMaxDepth) unit_0065(c, 208u, depth + 1u); else { c.pc = 0x00296940u; return; } if (c.pc != 0x0028BDECu) [[unlikely]] return; }
L_0028BDEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[16].w[0] + 1u);  if (t) { goto L_0028BE18; } }
    c.budget -= 1;
L_0028BDF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BE00u); set32(c.r[4], 0u + 5376u);  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028BE00u) [[unlikely]] return; }
L_0028BE00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BE08u);  if (depth < kMaxDepth) unit_0073(c, 393u, depth + 1u); else { c.pc = 0x002CEE08u; return; } if (c.pc != 0x0028BE08u) [[unlikely]] return; }
L_0028BE08:
    set32(c.r[4], 0u + 5377u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BE14u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028BE14u) [[unlikely]] return; }
L_0028BE14:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0028BE18:
    set32(c.r[3], c.r[18].w[0] - 29292u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    st32((c.r[3].w[0]), 0u);
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0028BE44; }
    st32((c.r[17].w[0] + 52u), c.r[16].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BE40u); set32(c.r[4], c.r[4].w[0] + 31344u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x0028BE40u) [[unlikely]] return; }
L_0028BE40:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028BE44:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0028BE48:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028BE60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[5].d[0] = ld8((c.r[17].w[0] + 2u));  if (t) { goto L_0028BF34; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 4u), 0u);  goto L_0028BF34; }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 31424u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00288000u < 16384u) { entry = entries_0062[(t - 0x00288000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0028BEB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BEB8u); set32(c.r[4], 0u + 5632u);  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028BEB8u) [[unlikely]] return; }
L_0028BEB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BEC0u);  if (depth < kMaxDepth) unit_0073(c, 398u, depth + 1u); else { c.pc = 0x002CEEA0u; return; } if (c.pc != 0x0028BEC0u) [[unlikely]] return; }
L_0028BEC0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BECCu); set32(c.r[4], 0u + 5633u);  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028BECCu) [[unlikely]] return; }
L_0028BECC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0028BEE8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[2], c.r[2].w[0] - 29292u);
    set32(c.r[4], c.r[4].w[0] + 31392u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BEE8u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x0028BEE8u) [[unlikely]] return; }
L_0028BEE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BEF0u); set32(c.r[4], 0u + 5888u);  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028BEF0u) [[unlikely]] return; }
L_0028BEF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BEF8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0073(c, 295u, depth + 1u); else { c.pc = 0x002CE098u; return; } if (c.pc != 0x0028BEF8u) [[unlikely]] return; }
L_0028BEF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BF00u); set32(c.r[4], 0u + 5889u);  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028BF00u) [[unlikely]] return; }
L_0028BF00:
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] - 29284u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), 0u);  if (t) { goto L_0028BF34; } }
    c.budget -= 1;
L_0028BF28:
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0028BF30:
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 1;
L_0028BF34:
    set32(c.r[2], c.r[5].w[0] << 24);
    set32(c.r[3], 0u + 1u);
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 5;
    if (c.r[18].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 2u);  goto L_0028BFB8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BF50u); set32(c.r[4], 0u + 6144u);  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028BF50u) [[unlikely]] return; }
L_0028BF50:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[7], c.r[17].w[0] + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BF64u); set32(c.r[6], ld32((c.r[17].w[0] + 16u)));  if (depth < kMaxDepth) unit_0073(c, 371u, depth + 1u); else { c.pc = 0x002CEAA8u; return; } if (c.pc != 0x0028BF64u) [[unlikely]] return; }
L_0028BF64:
    set32(c.r[4], 0u + 6145u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BF70u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028BF70u) [[unlikely]] return; }
L_0028BF70:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[18].d[0]; set32(c.r[2], 0u + 9u);  if (t) { goto L_0028BFA0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] - 29288u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0028BFB0; } }
    c.budget -= 1;
L_0028BFA0:
    set32(c.r[3], 0u - 1u);
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 9u);
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 4;
L_0028BFB0:
    set32(c.r[2], c.r[5].w[0] << 24);
    set32(c.r[3], 0u + 2u);
    c.budget -= 2;
L_0028BFB8:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { [[clang::musttail]] return unit_0063(c, 3u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BFCCu); set32(c.r[4], 0u + 6400u);  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028BFCCu) [[unlikely]] return; }
L_0028BFCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BFD4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0073(c, 295u, depth + 1u); else { c.pc = 0x002CE098u; return; } if (c.pc != 0x0028BFD4u) [[unlikely]] return; }
L_0028BFD4:
    set32(c.r[4], 0u + 6401u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BFE0u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028BFE0u) [[unlikely]] return; }
L_0028BFE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028BFE8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 468u, depth + 1u); else { c.pc = 0x0028BD60u; return; } if (c.pc != 0x0028BFE8u) [[unlikely]] return; }
L_0028BFE8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0063(c, 2u, depth); } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 3u);  [[clang::musttail]] return unit_0063(c, 1u, depth); }
    set32(c.r[2], 0u + 9u);
    c.budget -= 1;
    [[clang::musttail]] return unit_0063(c, 1u, depth);
}

}
