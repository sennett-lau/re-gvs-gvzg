#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0086[4096] = {
    1, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0,
    0, 8, 0, 0, 9, 0, 10, 0, 11, 0, 12, 0, 0, 0, 0, 13, 0, 0, 14, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0,
    18, 0, 0, 0, 0, 0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0,
    0, 0, 0, 23, 0, 0, 24, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 29, 0, 0, 0, 30, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0,
    34, 0, 35, 0, 36, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 41,
    0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 44, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0,
    0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 55, 0, 56, 0, 57, 0, 58, 0, 59, 0, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 71, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0,
    75, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 85, 0, 0, 86, 0,
    0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 89, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 96, 0, 97, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0,
    100, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0,
    107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 110, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0,
    0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0,
    138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 142, 0, 143, 0, 144, 0,
    145, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0,
    150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 168, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0,
    0, 177, 0, 178, 0, 0, 179, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0,
    186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0,
    191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194,
    0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 200,
    0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0,
    206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 210,
    0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0,
    215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 218, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    222, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 227, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0,
    231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0,
    0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 238, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0,
    0, 0, 243, 0, 244, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 253,
    0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 257, 0, 0, 0, 0, 0,
    258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0,
    0, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    266, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    269, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0,
    275, 0, 0, 0, 276, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0,
    284, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0,
    0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0,
    291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 293, 0, 294, 0, 0, 0, 0, 295, 0, 296, 0, 0, 297, 0, 298, 0,
    0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 0, 301, 0, 302, 0, 0, 0, 0, 303, 0, 304, 0, 0, 305, 0, 306, 0, 307, 0,
    308, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 312,
    0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0,
    0, 0, 0, 0, 319, 0, 320, 0, 0, 0, 0, 321, 0, 0, 322, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 325, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 329, 0, 330, 0, 0, 0, 0, 0,
    331, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 335, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0,
    337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0,
    345, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0,
    352, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0,
    0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 362, 0, 0, 363, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 364, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 376, 0, 0, 0, 0, 377, 0,
    0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 382, 0, 0,
    0, 0, 0, 0, 383, 0, 0, 0, 384, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0,
    391, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0,
    396, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0,
    405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 411, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 0, 0, 415, 0, 0,
    0, 0, 0, 0, 416, 0, 0, 0, 417, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 420, 0,
    0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 422, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 429, 0, 0, 0, 430, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 433, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 438, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 442, 0, 443, 0, 444, 0, 445, 0, 0, 0, 446, 0, 0, 0, 447, 0, 0, 0,
    0, 0, 0, 448, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0,
    452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 456, 0, 0, 457, 0, 458, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 461, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 464, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0,
    0, 0, 0, 467, 0, 0, 0, 468, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 470, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 472, 0, 0, 0, 473, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 482, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 485,
    0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 487, 0, 0, 0, 488, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 491,
    0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 496, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 498, 0, 0, 0, 499, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0,
};

void unit_0086(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00318000;
    case 2u: goto L_00318004;
    case 3u: goto L_00318020;
    case 4u: goto L_00318038;
    case 5u: goto L_00318068;
    case 6u: goto L_003180C0;
    case 7u: goto L_003180F8;
    case 8u: goto L_00318104;
    case 9u: goto L_00318110;
    case 10u: goto L_00318118;
    case 11u: goto L_00318120;
    case 12u: goto L_00318128;
    case 13u: goto L_0031813C;
    case 14u: goto L_00318148;
    case 15u: goto L_00318150;
    case 16u: goto L_0031816C;
    case 17u: goto L_00318178;
    case 18u: goto L_00318180;
    case 19u: goto L_00318198;
    case 20u: goto L_003181A0;
    case 21u: goto L_003181C8;
    case 22u: goto L_003181E8;
    case 23u: goto L_0031820C;
    case 24u: goto L_00318218;
    case 25u: goto L_00318220;
    case 26u: goto L_00318230;
    case 27u: goto L_00318254;
    case 28u: goto L_00318260;
    case 29u: goto L_00318268;
    case 30u: goto L_00318278;
    case 31u: goto L_003182A0;
    case 32u: goto L_003182E8;
    case 33u: goto L_003182F4;
    case 34u: goto L_00318300;
    case 35u: goto L_00318308;
    case 36u: goto L_00318310;
    case 37u: goto L_00318318;
    case 38u: goto L_0031832C;
    case 39u: goto L_00318360;
    case 40u: goto L_00318370;
    case 41u: goto L_0031837C;
    case 42u: goto L_00318398;
    case 43u: goto L_003183A0;
    case 44u: goto L_003183A8;
    case 45u: goto L_003183B4;
    case 46u: goto L_003183C8;
    case 47u: goto L_003183F8;
    case 48u: goto L_00318410;
    case 49u: goto L_00318420;
    case 50u: goto L_00318434;
    case 51u: goto L_00318440;
    case 52u: goto L_00318460;
    case 53u: goto L_00318488;
    case 54u: goto L_0031849C;
    case 55u: goto L_003184A8;
    case 56u: goto L_003184B0;
    case 57u: goto L_003184B8;
    case 58u: goto L_003184C0;
    case 59u: goto L_003184C8;
    case 60u: goto L_003184D4;
    case 61u: goto L_003184F0;
    case 62u: goto L_00318540;
    case 63u: goto L_00318550;
    case 64u: goto L_003185A0;
    case 65u: goto L_003185D0;
    case 66u: goto L_00318600;
    case 67u: goto L_00318630;
    case 68u: goto L_003186B4;
    case 69u: goto L_003186D0;
    case 70u: goto L_003186D8;
    case 71u: goto L_00318704;
    case 72u: goto L_00318710;
    case 73u: goto L_0031871C;
    case 74u: goto L_00318774;
    case 75u: goto L_00318780;
    case 76u: goto L_00318798;
    case 77u: goto L_003187A0;
    case 78u: goto L_00318814;
    case 79u: goto L_0031884C;
    case 80u: goto L_00318860;
    case 81u: goto L_00318870;
    case 82u: goto L_003188A0;
    case 83u: goto L_003188D0;
    case 84u: goto L_003188E4;
    case 85u: goto L_003188EC;
    case 86u: goto L_003188F8;
    case 87u: goto L_00318910;
    case 88u: goto L_00318928;
    case 89u: goto L_00318930;
    case 90u: goto L_00318938;
    case 91u: goto L_00318950;
    case 92u: goto L_00318960;
    case 93u: goto L_00318990;
    case 94u: goto L_003189A0;
    case 95u: goto L_003189C0;
    case 96u: goto L_003189C8;
    case 97u: goto L_003189D0;
    case 98u: goto L_003189DC;
    case 99u: goto L_003189F0;
    case 100u: goto L_00318A00;
    case 101u: goto L_00318A24;
    case 102u: goto L_00318A2C;
    case 103u: goto L_00318A40;
    case 104u: goto L_00318A54;
    case 105u: goto L_00318A60;
    case 106u: goto L_00318A70;
    case 107u: goto L_00318A80;
    case 108u: goto L_00318AB0;
    case 109u: goto L_00318AC0;
    case 110u: goto L_00318AC8;
    case 111u: goto L_00318AD0;
    case 112u: goto L_00318B00;
    case 113u: goto L_00318B14;
    case 114u: goto L_00318B28;
    case 115u: goto L_00318B3C;
    case 116u: goto L_00318B48;
    case 117u: goto L_00318B60;
    case 118u: goto L_00318B9C;
    case 119u: goto L_00318BB0;
    case 120u: goto L_00318BC0;
    case 121u: goto L_00318BD0;
    case 122u: goto L_00318C10;
    case 123u: goto L_00318C40;
    case 124u: goto L_00318C70;
    case 125u: goto L_00318CA0;
    case 126u: goto L_00318CE4;
    case 127u: goto L_00318CF8;
    case 128u: goto L_00318D0C;
    case 129u: goto L_00318D50;
    case 130u: goto L_00318DA0;
    case 131u: goto L_00318DB4;
    case 132u: goto L_00318DC8;
    case 133u: goto L_00318E00;
    case 134u: goto L_00318E44;
    case 135u: goto L_00318E4C;
    case 136u: goto L_00318E5C;
    case 137u: goto L_00318E70;
    case 138u: goto L_00318E80;
    case 139u: goto L_00318EB8;
    case 140u: goto L_00318ED0;
    case 141u: goto L_00318EDC;
    case 142u: goto L_00318EE8;
    case 143u: goto L_00318EF0;
    case 144u: goto L_00318EF8;
    case 145u: goto L_00318F00;
    case 146u: goto L_00318F08;
    case 147u: goto L_00318F18;
    case 148u: goto L_00318F30;
    case 149u: goto L_00318F6C;
    case 150u: goto L_00318F80;
    case 151u: goto L_00318FA0;
    case 152u: goto L_00319010;
    case 153u: goto L_00319030;
    case 154u: goto L_00319044;
    case 155u: goto L_00319058;
    case 156u: goto L_003190A0;
    case 157u: goto L_00319104;
    case 158u: goto L_00319118;
    case 159u: goto L_00319130;
    case 160u: goto L_003191B0;
    case 161u: goto L_00319218;
    case 162u: goto L_00319230;
    case 163u: goto L_00319264;
    case 164u: goto L_00319290;
    case 165u: goto L_003192A0;
    case 166u: goto L_003192C4;
    case 167u: goto L_003192D0;
    case 168u: goto L_00319310;
    case 169u: goto L_00319318;
    case 170u: goto L_00319330;
    case 171u: goto L_00319360;
    case 172u: goto L_00319398;
    case 173u: goto L_003193BC;
    case 174u: goto L_003193C8;
    case 175u: goto L_003193D0;
    case 176u: goto L_003193EC;
    case 177u: goto L_00319404;
    case 178u: goto L_0031940C;
    case 179u: goto L_00319418;
    case 180u: goto L_00319420;
    case 181u: goto L_00319468;
    case 182u: goto L_0031949C;
    case 183u: goto L_003194B0;
    case 184u: goto L_003194B8;
    case 185u: goto L_003194E0;
    case 186u: goto L_00319500;
    case 187u: goto L_00319540;
    case 188u: goto L_00319550;
    case 189u: goto L_00319560;
    case 190u: goto L_00319570;
    case 191u: goto L_00319580;
    case 192u: goto L_00319590;
    case 193u: goto L_003195B0;
    case 194u: goto L_003195FC;
    case 195u: goto L_00319610;
    case 196u: goto L_00319630;
    case 197u: goto L_00319654;
    case 198u: goto L_00319680;
    case 199u: goto L_003196F0;
    case 200u: goto L_003196FC;
    case 201u: goto L_00319710;
    case 202u: goto L_0031972C;
    case 203u: goto L_00319740;
    case 204u: goto L_00319750;
    case 205u: goto L_00319760;
    case 206u: goto L_00319780;
    case 207u: goto L_003197B0;
    case 208u: goto L_003197D0;
    case 209u: goto L_003197E0;
    case 210u: goto L_003197FC;
    case 211u: goto L_00319804;
    case 212u: goto L_00319820;
    case 213u: goto L_00319860;
    case 214u: goto L_00319870;
    case 215u: goto L_00319880;
    case 216u: goto L_003198B0;
    case 217u: goto L_003198E4;
    case 218u: goto L_00319918;
    case 219u: goto L_00319920;
    case 220u: goto L_00319930;
    case 221u: goto L_00319950;
    case 222u: goto L_00319980;
    case 223u: goto L_003199A0;
    case 224u: goto L_003199B0;
    case 225u: goto L_003199CC;
    case 226u: goto L_003199E0;
    case 227u: goto L_00319A10;
    case 228u: goto L_00319A18;
    case 229u: goto L_00319A30;
    case 230u: goto L_00319A70;
    case 231u: goto L_00319A80;
    case 232u: goto L_00319AD0;
    case 233u: goto L_00319AEC;
    case 234u: goto L_00319B0C;
    case 235u: goto L_00319B30;
    case 236u: goto L_00319B40;
    case 237u: goto L_00319B50;
    case 238u: goto L_00319B8C;
    case 239u: goto L_00319B94;
    case 240u: goto L_00319BAC;
    case 241u: goto L_00319BB8;
    case 242u: goto L_00319BF4;
    case 243u: goto L_00319C08;
    case 244u: goto L_00319C10;
    case 245u: goto L_00319C20;
    case 246u: goto L_00319C98;
    case 247u: goto L_00319CB0;
    case 248u: goto L_00319CE0;
    case 249u: goto L_00319D10;
    case 250u: goto L_00319D40;
    case 251u: goto L_00319D5C;
    case 252u: goto L_00319D70;
    case 253u: goto L_00319D7C;
    case 254u: goto L_00319D90;
    case 255u: goto L_00319DB0;
    case 256u: goto L_00319DE0;
    case 257u: goto L_00319DE8;
    case 258u: goto L_00319E00;
    case 259u: goto L_00319E30;
    case 260u: goto L_00319E4C;
    case 261u: goto L_00319E60;
    case 262u: goto L_00319E78;
    case 263u: goto L_00319E90;
    case 264u: goto L_00319EA4;
    case 265u: goto L_00319ED8;
    case 266u: goto L_00319F00;
    case 267u: goto L_00319F08;
    case 268u: goto L_00319F20;
    case 269u: goto L_00319F80;
    case 270u: goto L_00319F94;
    case 271u: goto L_00319FA0;
    case 272u: goto L_00319FC0;
    case 273u: goto L_00319FDC;
    case 274u: goto L_00319FF0;
    case 275u: goto L_0031A000;
    case 276u: goto L_0031A010;
    case 277u: goto L_0031A018;
    case 278u: goto L_0031A030;
    case 279u: goto L_0031A060;
    case 280u: goto L_0031A0A0;
    case 281u: goto L_0031A0D0;
    case 282u: goto L_0031A100;
    case 283u: goto L_0031A168;
    case 284u: goto L_0031A180;
    case 285u: goto L_0031A19C;
    case 286u: goto L_0031A1BC;
    case 287u: goto L_0031A1F0;
    case 288u: goto L_0031A210;
    case 289u: goto L_0031A254;
    case 290u: goto L_0031A268;
    case 291u: goto L_0031A280;
    case 292u: goto L_0031A2B8;
    case 293u: goto L_0031A2C0;
    case 294u: goto L_0031A2C8;
    case 295u: goto L_0031A2DC;
    case 296u: goto L_0031A2E4;
    case 297u: goto L_0031A2F0;
    case 298u: goto L_0031A2F8;
    case 299u: goto L_0031A310;
    case 300u: goto L_0031A32C;
    case 301u: goto L_0031A338;
    case 302u: goto L_0031A340;
    case 303u: goto L_0031A354;
    case 304u: goto L_0031A35C;
    case 305u: goto L_0031A368;
    case 306u: goto L_0031A370;
    case 307u: goto L_0031A378;
    case 308u: goto L_0031A380;
    case 309u: goto L_0031A390;
    case 310u: goto L_0031A3C0;
    case 311u: goto L_0031A3F4;
    case 312u: goto L_0031A3FC;
    case 313u: goto L_0031A420;
    case 314u: goto L_0031A450;
    case 315u: goto L_0031A460;
    case 316u: goto L_0031A48C;
    case 317u: goto L_0031A4B0;
    case 318u: goto L_0031A4EC;
    case 319u: goto L_0031A510;
    case 320u: goto L_0031A518;
    case 321u: goto L_0031A52C;
    case 322u: goto L_0031A538;
    case 323u: goto L_0031A540;
    case 324u: goto L_0031A550;
    case 325u: goto L_0031A58C;
    case 326u: goto L_0031A594;
    case 327u: goto L_0031A5A8;
    case 328u: goto L_0031A5D4;
    case 329u: goto L_0031A5E0;
    case 330u: goto L_0031A5E8;
    case 331u: goto L_0031A600;
    case 332u: goto L_0031A618;
    case 333u: goto L_0031A62C;
    case 334u: goto L_0031A640;
    case 335u: goto L_0031A648;
    case 336u: goto L_0031A660;
    case 337u: goto L_0031A680;
    case 338u: goto L_0031A730;
    case 339u: goto L_0031A740;
    case 340u: goto L_0031A794;
    case 341u: goto L_0031A7A8;
    case 342u: goto L_0031A7B8;
    case 343u: goto L_0031A7C8;
    case 344u: goto L_0031A7E4;
    case 345u: goto L_0031A800;
    case 346u: goto L_0031A808;
    case 347u: goto L_0031A82C;
    case 348u: goto L_0031A840;
    case 349u: goto L_0031A850;
    case 350u: goto L_0031A8B4;
    case 351u: goto L_0031A8E8;
    case 352u: goto L_0031A900;
    case 353u: goto L_0031A910;
    case 354u: goto L_0031A920;
    case 355u: goto L_0031A930;
    case 356u: goto L_0031A990;
    case 357u: goto L_0031A9A0;
    case 358u: goto L_0031A9F4;
    case 359u: goto L_0031AA14;
    case 360u: goto L_0031AA2C;
    case 361u: goto L_0031AA4C;
    case 362u: goto L_0031AA60;
    case 363u: goto L_0031AA6C;
    case 364u: goto L_0031AB10;
    case 365u: goto L_0031AB20;
    case 366u: goto L_0031AB94;
    case 367u: goto L_0031ABB0;
    case 368u: goto L_0031AC1C;
    case 369u: goto L_0031AC90;
    case 370u: goto L_0031ACF8;
    case 371u: goto L_0031AD20;
    case 372u: goto L_0031AD30;
    case 373u: goto L_0031ADA0;
    case 374u: goto L_0031ADAC;
    case 375u: goto L_0031ADD0;
    case 376u: goto L_0031ADE4;
    case 377u: goto L_0031ADF8;
    case 378u: goto L_0031AE18;
    case 379u: goto L_0031AE50;
    case 380u: goto L_0031AEB8;
    case 381u: goto L_0031AEEC;
    case 382u: goto L_0031AEF4;
    case 383u: goto L_0031AF10;
    case 384u: goto L_0031AF20;
    case 385u: goto L_0031AF28;
    case 386u: goto L_0031AF54;
    case 387u: goto L_0031AF80;
    case 388u: goto L_0031AFB0;
    case 389u: goto L_0031AFE0;
    case 390u: goto L_0031B06C;
    case 391u: goto L_0031B080;
    case 392u: goto L_0031B08C;
    case 393u: goto L_0031B0AC;
    case 394u: goto L_0031B0C0;
    case 395u: goto L_0031B0F0;
    case 396u: goto L_0031B100;
    case 397u: goto L_0031B110;
    case 398u: goto L_0031B120;
    case 399u: goto L_0031B130;
    case 400u: goto L_0031B140;
    case 401u: goto L_0031B150;
    case 402u: goto L_0031B188;
    case 403u: goto L_0031B198;
    case 404u: goto L_0031B1E4;
    case 405u: goto L_0031B200;
    case 406u: goto L_0031B280;
    case 407u: goto L_0031B2A8;
    case 408u: goto L_0031B2C0;
    case 409u: goto L_0031B31C;
    case 410u: goto L_0031B35C;
    case 411u: goto L_0031B368;
    case 412u: goto L_0031B3B0;
    case 413u: goto L_0031B3D0;
    case 414u: goto L_0031B3E0;
    case 415u: goto L_0031B3F4;
    case 416u: goto L_0031B410;
    case 417u: goto L_0031B420;
    case 418u: goto L_0031B430;
    case 419u: goto L_0031B468;
    case 420u: goto L_0031B478;
    case 421u: goto L_0031B498;
    case 422u: goto L_0031B4AC;
    case 423u: goto L_0031B4C0;
    case 424u: goto L_0031B4E8;
    case 425u: goto L_0031B560;
    case 426u: goto L_0031B5C0;
    case 427u: goto L_0031B600;
    case 428u: goto L_0031B648;
    case 429u: goto L_0031B660;
    case 430u: goto L_0031B670;
    case 431u: goto L_0031B6A8;
    case 432u: goto L_0031B6E0;
    case 433u: goto L_0031B708;
    case 434u: goto L_0031B710;
    case 435u: goto L_0031B74C;
    case 436u: goto L_0031B760;
    case 437u: goto L_0031B7A0;
    case 438u: goto L_0031B7BC;
    case 439u: goto L_0031B7C8;
    case 440u: goto L_0031B7FC;
    case 441u: goto L_0031B82C;
    case 442u: goto L_0031B838;
    case 443u: goto L_0031B840;
    case 444u: goto L_0031B848;
    case 445u: goto L_0031B850;
    case 446u: goto L_0031B860;
    case 447u: goto L_0031B870;
    case 448u: goto L_0031B88C;
    case 449u: goto L_0031B894;
    case 450u: goto L_0031B8D0;
    case 451u: goto L_0031B8EC;
    case 452u: goto L_0031B900;
    case 453u: goto L_0031B928;
    case 454u: goto L_0031B940;
    case 455u: goto L_0031B964;
    case 456u: goto L_0031B98C;
    case 457u: goto L_0031B998;
    case 458u: goto L_0031B9A0;
    case 459u: goto L_0031B9A8;
    case 460u: goto L_0031B9E0;
    case 461u: goto L_0031B9F0;
    case 462u: goto L_0031BA70;
    case 463u: goto L_0031BAAC;
    case 464u: goto L_0031BAB4;
    case 465u: goto L_0031BAC8;
    case 466u: goto L_0031BAF8;
    case 467u: goto L_0031BB0C;
    case 468u: goto L_0031BB1C;
    case 469u: goto L_0031BB30;
    case 470u: goto L_0031BB90;
    case 471u: goto L_0031BBA4;
    case 472u: goto L_0031BBBC;
    case 473u: goto L_0031BBCC;
    case 474u: goto L_0031BBE0;
    case 475u: goto L_0031BC0C;
    case 476u: goto L_0031BC28;
    case 477u: goto L_0031BC90;
    case 478u: goto L_0031BCB8;
    case 479u: goto L_0031BCE4;
    case 480u: goto L_0031BD30;
    case 481u: goto L_0031BDA8;
    case 482u: goto L_0031BDB8;
    case 483u: goto L_0031BDC8;
    case 484u: goto L_0031BDF0;
    case 485u: goto L_0031BDFC;
    case 486u: goto L_0031BE18;
    case 487u: goto L_0031BE2C;
    case 488u: goto L_0031BE3C;
    case 489u: goto L_0031BE4C;
    case 490u: goto L_0031BE6C;
    case 491u: goto L_0031BE7C;
    case 492u: goto L_0031BE90;
    case 493u: goto L_0031BEC0;
    case 494u: goto L_0031BEF0;
    case 495u: goto L_0031BF2C;
    case 496u: goto L_0031BF34;
    case 497u: goto L_0031BF50;
    case 498u: goto L_0031BF60;
    case 499u: goto L_0031BF70;
    case 500u: goto L_0031BF98;
    case 501u: goto L_0031BFEC;
    default: bad_entry(c, 0x00318000u); return;
    }
L_00318000:
    c.budget -= 1;
L_00318004:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00318018; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003180B0; } }
    c.budget -= 1;
L_00318018:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003180B8; } }
L_00318020:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4757u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003180B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003180B8; } }
L_00318038:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4757u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00318058; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003180B8; } }
    c.budget -= 1;
L_00318058:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_003180B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003180B8; } }
L_00318068:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 4757u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00318088; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003180B8; } }
    c.budget -= 1;
L_00318088:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_00318098; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003180B8; } }
L_00318098:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003180B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003180B8; } }
    c.budget -= 1;
L_003180B0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003180B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003180C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 2592u));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[7], c.r[6].w[0] + 2592u);  if (t) { goto L_00318290; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 5952u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00318000u < 16384u) { entry = entries_0086[(t - 0x00318000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003180F8:
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318104u); st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0085(c, 284u, depth + 1u); else { c.pc = 0x00316750u; return; } if (c.pc != 0x00318104u) [[unlikely]] return; }
L_00318104:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00320000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318110u); set32(c.r[4], c.r[4].w[0] - 31408u);  if (depth < kMaxDepth) unit_0093(c, 305u, depth + 1u); else { c.pc = 0x0034E150u; return; } if (c.pc != 0x00318110u) [[unlikely]] return; }
L_00318110:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00318290; } }
L_00318118:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318120u);  if (depth < kMaxDepth) unit_0085(c, 285u, depth + 1u); else { c.pc = 0x00316770u; return; } if (c.pc != 0x00318120u) [[unlikely]] return; }
L_00318120:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00318290; } }
L_00318128:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031813Cu); set32(c.r[4], c.r[2].w[0] + 14478u);  if (depth < kMaxDepth) unit_0093(c, 312u, depth + 1u); else { c.pc = 0x0034E250u; return; } if (c.pc != 0x0031813Cu) [[unlikely]] return; }
L_0031813C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00318290; } }
    c.budget -= 1;
L_00318148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318150u); c.r[4].d[0] = ld8((c.r[6].w[0] + 14478u));  if (depth < kMaxDepth) unit_0085(c, 504u, depth + 1u); else { c.pc = 0x00317FE0u; return; } if (c.pc != 0x00318150u) [[unlikely]] return; }
L_00318150:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00318188; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2592u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031816Cu); st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x0031816Cu) [[unlikely]] return; }
L_0031816C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318178u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_008D(c, 83u, depth + 1u); else { c.pc = 0x00334FC0u; return; } if (c.pc != 0x00318178u) [[unlikely]] return; }
L_00318178:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318180u);  if (depth < kMaxDepth) unit_0094(c, 426u, depth + 1u); else { c.pc = 0x00353110u; return; } if (c.pc != 0x00318180u) [[unlikely]] return; }
L_00318180:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00318290; } }
L_00318188:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 7u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00318290; } }
L_00318198:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003181A0u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x003181A0u) [[unlikely]] return; }
L_003181A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00318290; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 75u);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2592u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 2592u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 2612u), c.r[4].w[0]);  if (t) { goto L_00318290; } }
L_003181C8:
    set32(c.r[3], ld32((c.r[6].w[0] + 2612u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[6].w[0] + 2612u);  if (t) { goto L_003181E0; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[3].w[0]);  if (t) { goto L_00318290; } }
L_003181E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003181E8u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x003181E8u) [[unlikely]] return; }
L_003181E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00318218; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2592u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031820Cu); st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0031820Cu) [[unlikely]] return; }
L_0031820C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318218u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_008D(c, 85u, depth + 1u); else { c.pc = 0x00335000u; return; } if (c.pc != 0x00318218u) [[unlikely]] return; }
L_00318218:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318220u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00318220u) [[unlikely]] return; }
L_00318220:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318230u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_008D(c, 98u, depth + 1u); else { c.pc = 0x003351D0u; return; } if (c.pc != 0x00318230u) [[unlikely]] return; }
L_00318230:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43470000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43B00000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.f[13] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318254u); set32(c.r[4], c.r[4].w[0] - 14112u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x00318254u) [[unlikely]] return; }
L_00318254:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00318290; } }
    c.budget -= 1;
L_00318260:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318268u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x00318268u) [[unlikely]] return; }
L_00318268:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00318290; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318278u);  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x00318278u) [[unlikely]] return; }
L_00318278:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 9u);
    st8((c.r[3].w[0] + 2591u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_00318290:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003182A0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = ld8((c.r[3].w[0] + 2592u));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], c.r[3].w[0] + 2592u);  if (t) { goto L_003184D8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 5920u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00318000u < 16384u) { entry = entries_0086[(t - 0x00318000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003182E8:
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003182F4u); st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0085(c, 284u, depth + 1u); else { c.pc = 0x00316750u; return; } if (c.pc != 0x003182F4u) [[unlikely]] return; }
L_003182F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00320000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318300u); set32(c.r[4], c.r[4].w[0] - 31328u);  if (depth < kMaxDepth) unit_0093(c, 372u, depth + 1u); else { c.pc = 0x0034E810u; return; } if (c.pc != 0x00318300u) [[unlikely]] return; }
L_00318300:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003184D8; } }
L_00318308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318310u);  if (depth < kMaxDepth) unit_0085(c, 285u, depth + 1u); else { c.pc = 0x00316770u; return; } if (c.pc != 0x00318310u) [[unlikely]] return; }
L_00318310:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003184D8; } }
L_00318318:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031832Cu); set32(c.r[4], c.r[2].w[0] + 18588u);  if (depth < kMaxDepth) unit_0093(c, 420u, depth + 1u); else { c.pc = 0x0034ED40u; return; } if (c.pc != 0x0031832Cu) [[unlikely]] return; }
L_0031832C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 18628u)));
    st16((c.r[3].w[0] + 656u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 18632u)));
    st16((c.r[3].w[0] + 650u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 18636u)));
    st16((c.r[3].w[0] + 652u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 18612u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318360u); st8((c.r[3].w[0] + 649u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 148u, depth + 1u); else { c.pc = 0x00335710u; return; } if (c.pc != 0x00318360u) [[unlikely]] return; }
L_00318360:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00318388; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318370u);  if (depth < kMaxDepth) unit_0085(c, 284u, depth + 1u); else { c.pc = 0x00316750u; return; } if (c.pc != 0x00318370u) [[unlikely]] return; }
L_00318370:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00320000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031837Cu); set32(c.r[4], c.r[4].w[0] - 31280u);  if (depth < kMaxDepth) unit_0093(c, 279u, depth + 1u); else { c.pc = 0x0034DE70u; return; } if (c.pc != 0x0031837Cu) [[unlikely]] return; }
L_0031837C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003184D8; } }
    c.budget -= 1;
L_00318388:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 5u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_003184D8; } }
L_00318398:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003183A0u);  if (depth < kMaxDepth) unit_0085(c, 285u, depth + 1u); else { c.pc = 0x00316770u; return; } if (c.pc != 0x003183A0u) [[unlikely]] return; }
L_003183A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003184D8; } }
L_003183A8:
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003183B4u); st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 148u, depth + 1u); else { c.pc = 0x00335710u; return; } if (c.pc != 0x003183B4u) [[unlikely]] return; }
L_003183B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003184D8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003183C8u); set32(c.r[4], c.r[2].w[0] + 18576u);  if (depth < kMaxDepth) unit_0093(c, 294u, depth + 1u); else { c.pc = 0x0034DFC0u; return; } if (c.pc != 0x003183C8u) [[unlikely]] return; }
L_003183C8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 4757u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_003184D8; } }
    set32(c.r[4], ld32((c.r[1].w[0] + 4772u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003184D8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[6].d[0] = ld16((c.r[2].w[0] + 18584u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003183F8u); c.r[5].d[0] = ld16((c.r[2].w[0] + 18586u));  if (depth < kMaxDepth) unit_009E(c, 195u, depth + 1u); else { c.pc = 0x0037AD90u; return; } if (c.pc != 0x003183F8u) [[unlikely]] return; }
L_003183F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 4780u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 4780u), c.r[3].w[0]);  if (t) { goto L_003184D8; } }
L_00318410:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318420u); set32(c.r[6], 0u + 120u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00318420u) [[unlikely]] return; }
L_00318420:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[6], 0u + 21u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318434u); set32(c.r[5], c.r[2].w[0] + 92u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x00318434u) [[unlikely]] return; }
L_00318434:
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_00318440:
    set32(c.r[2], c.r[16].w[0] + 22u);
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[6], 0u + 21u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], c.r[3].w[0] + 64u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318460u); set32(c.r[5], c.r[2].w[0] + 201u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x00318460u) [[unlikely]] return; }
L_00318460:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 21u);
    c.r[2].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 22u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00318440u | kUnwind; return; } goto L_00318440; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2592u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318488u); st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0085(c, 284u, depth + 1u); else { c.pc = 0x00316750u; return; } if (c.pc != 0x00318488u) [[unlikely]] return; }
L_00318488:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], 0u + 110u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031849Cu); set32(c.r[6], c.r[6].w[0] - 31232u);  if (depth < kMaxDepth) unit_0093(c, 295u, depth + 1u); else { c.pc = 0x0034E020u; return; } if (c.pc != 0x0031849Cu) [[unlikely]] return; }
L_0031849C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003184D8; } }
    c.budget -= 1;
L_003184A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003184B0u);  if (depth < kMaxDepth) unit_0085(c, 285u, depth + 1u); else { c.pc = 0x00316770u; return; } if (c.pc != 0x003184B0u) [[unlikely]] return; }
L_003184B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003184D8; } }
L_003184B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003184C0u);  if (depth < kMaxDepth) unit_0093(c, 277u, depth + 1u); else { c.pc = 0x0034DE50u; return; } if (c.pc != 0x003184C0u) [[unlikely]] return; }
L_003184C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003184C8u);  if (depth < kMaxDepth) unit_0086(c, 123u, depth + 1u); else { c.pc = 0x00318C40u; return; } if (c.pc != 0x003184C8u) [[unlikely]] return; }
L_003184C8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003184D4u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_008D(c, 83u, depth + 1u); else { c.pc = 0x00334FC0u; return; } if (c.pc != 0x003184D4u) [[unlikely]] return; }
L_003184D4:
    c.budget -= 1;
L_003184D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_003184F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 7u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    st64((c.r[29].w[0] + 24u), c.r[4].d[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2589u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00318540; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 8u);  if (t) { goto L_00318528; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 2592u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00318540; } }
    c.budget -= 1;
L_00318528:
    c.r[2].d[0] = ld8((c.r[5].w[0] + 2592u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0] + 2592u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318540u); set32(c.r[4], c.r[2].w[0] + 8291u);  if (depth < kMaxDepth) unit_0091(c, 142u, depth + 1u); else { c.pc = 0x00345780u; return; } if (c.pc != 0x00318540u) [[unlikely]] return; }
L_00318540:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00318550:
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0] + 8u), c.r[4].d[0]);
    set32(c.r[4], 0u + 7u);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2589u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00318590; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00318588; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2592u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 2592u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00318590; } }
L_00318588:
    st8((c.r[5].w[0] + 2592u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 2;
L_00318590:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003185A0:
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 7u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2589u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003185C0; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2592u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 2592u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003185C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003185D0:
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 7u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2589u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003185F0; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2592u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 2592u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003185F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00318600:
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 7u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2589u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00318620; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2592u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 2592u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00318620:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00318630:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[4].d[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 24u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 25u)));  if (t) { goto L_003187B8; } }
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], 0u + 12u);  if (t) { goto L_00318788; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 3u);  if (t) { goto L_00318768; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 5u);  if (t) { goto L_00318750; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_00318738; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003186F8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003186C0; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00318698; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00318860; } }
L_00318698:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003186B4u); set32(c.r[4], c.r[2].w[0] + 10378u);  if (depth < kMaxDepth) unit_0093(c, 252u, depth + 1u); else { c.pc = 0x0034DB40u; return; } if (c.pc != 0x003186B4u) [[unlikely]] return; }
L_003186B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00318860; } }
    c.budget -= 1;
L_003186C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003186D0u);  if (depth < kMaxDepth) unit_008C(c, 211u, depth + 1u); else { c.pc = 0x00333900u; return; } if (c.pc != 0x003186D0u) [[unlikely]] return; }
L_003186D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003186D8u);  if (depth < kMaxDepth) unit_008C(c, 208u, depth + 1u); else { c.pc = 0x003338D0u; return; } if (c.pc != 0x003186D8u) [[unlikely]] return; }
L_003186D8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 4u);
    st8((c.r[3].w[0] + 2591u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2593u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00318860; } }
L_003186F8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318704u); set32(c.r[4], c.r[2].w[0] + 560u);  if (depth < kMaxDepth) unit_0093(c, 219u, depth + 1u); else { c.pc = 0x0034D720u; return; } if (c.pc != 0x00318704u) [[unlikely]] return; }
L_00318704:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318710u); set32(c.r[4], c.r[2].w[0] + 568u);  if (depth < kMaxDepth) unit_0093(c, 221u, depth + 1u); else { c.pc = 0x0034D750u; return; } if (c.pc != 0x00318710u) [[unlikely]] return; }
L_00318710:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031871Cu); set32(c.r[4], c.r[2].w[0] + 585u);  if (depth < kMaxDepth) unit_0093(c, 223u, depth + 1u); else { c.pc = 0x0034D780u; return; } if (c.pc != 0x0031871Cu) [[unlikely]] return; }
L_0031871C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 7u);
    st8((c.r[3].w[0] + 2591u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00318860; } }
    c.budget -= 1;
L_00318738:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 2591u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00318860; } }
L_00318750:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2591u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00318860; } }
    c.budget -= 1;
L_00318768:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318774u); set32(c.r[4], c.r[2].w[0] + 2568u);  if (depth < kMaxDepth) unit_0093(c, 501u, depth + 1u); else { c.pc = 0x0034F4D0u; return; } if (c.pc != 0x00318774u) [[unlikely]] return; }
L_00318774:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318780u); set32(c.r[4], c.r[2].w[0] + 2572u);  if (depth < kMaxDepth) unit_0093(c, 502u, depth + 1u); else { c.pc = 0x0034F4E0u; return; } if (c.pc != 0x00318780u) [[unlikely]] return; }
L_00318780:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00318860; } }
L_00318788:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318798u);  if (depth < kMaxDepth) unit_008C(c, 211u, depth + 1u); else { c.pc = 0x00333900u; return; } if (c.pc != 0x00318798u) [[unlikely]] return; }
L_00318798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003187A0u);  if (depth < kMaxDepth) unit_008C(c, 208u, depth + 1u); else { c.pc = 0x003338D0u; return; } if (c.pc != 0x003187A0u) [[unlikely]] return; }
L_003187A0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 7u);
    st8((c.r[3].w[0] + 2591u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00318860; } }
L_003187B8:
    c.r[4].d[0] = c.r[5].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], 0u + 9u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 8u);  if (t) { goto L_00318858; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00318820; } }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003187E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00318860; } }
L_003187E8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 6u);
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318814u); set32(c.r[4], c.r[2].w[0] + 8291u);  if (depth < kMaxDepth) unit_0091(c, 142u, depth + 1u); else { c.pc = 0x00345780u; return; } if (c.pc != 0x00318814u) [[unlikely]] return; }
L_00318814:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00318860; } }
    c.budget -= 1;
L_00318820:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 6u);
    set32(c.r[3], 0u + 2u);
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031884Cu); set32(c.r[4], c.r[2].w[0] + 8291u);  if (depth < kMaxDepth) unit_0091(c, 142u, depth + 1u); else { c.pc = 0x00345780u; return; } if (c.pc != 0x0031884Cu) [[unlikely]] return; }
L_0031884C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00318860; } }
    c.budget -= 1;
L_00318858:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318860u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0088(c, 215u, depth + 1u); else { c.pc = 0x00321A80u; return; } if (c.pc != 0x00318860u) [[unlikely]] return; }
L_00318860:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00318870:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] - 2672u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2604u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00318000u < 16384u) { entry = entries_0086[(t - 0x00318000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003188A0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 2604u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2605u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2528u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 2535u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_003188D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003188E4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0098(c, 547u, depth + 1u); else { c.pc = 0x00363910u; return; } if (c.pc != 0x003188E4u) [[unlikely]] return; }
L_003188E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003188ECu);  if (depth < kMaxDepth) unit_008B(c, 6u, depth + 1u); else { c.pc = 0x0032C080u; return; } if (c.pc != 0x003188ECu) [[unlikely]] return; }
L_003188EC:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[16], 0u + 1u);
    set32(c.r[17], c.r[17].w[0] - 2640u);
    c.budget -= 3;
L_003188F8:
    set32(c.r[6], ld32((c.r[17].w[0])));
    set32(c.r[7], ld32((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318910u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 43u, depth + 1u); else { c.pc = 0x003A85D0u; return; } if (c.pc != 0x00318910u) [[unlikely]] return; }
L_00318910:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003188F8u | kUnwind; return; } goto L_003188F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318928u);  if (depth < kMaxDepth) unit_0048(c, 276u, depth + 1u); else { c.pc = 0x00223E60u; return; } if (c.pc != 0x00318928u) [[unlikely]] return; }
L_00318928:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318930u);  if (depth < kMaxDepth) unit_008D(c, 322u, depth + 1u); else { c.pc = 0x003374B0u; return; } if (c.pc != 0x00318930u) [[unlikely]] return; }
L_00318930:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318938u);  if (depth < kMaxDepth) unit_00A2(c, 308u, depth + 1u); else { c.pc = 0x0038AB30u; return; } if (c.pc != 0x00318938u) [[unlikely]] return; }
L_00318938:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00318950:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318960u);  if (depth < kMaxDepth) unit_0086(c, 83u, depth + 1u); else { c.pc = 0x003188D0u; return; } if (c.pc != 0x00318960u) [[unlikely]] return; }
L_00318960:
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2604u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 2604u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2528u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 22996u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00318990:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003189A0u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x003189A0u) [[unlikely]] return; }
L_003189A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003189E0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2604u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003189C0u); st8((c.r[3].w[0] + 2604u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008B(c, 218u, depth + 1u); else { c.pc = 0x0032EEC0u; return; } if (c.pc != 0x003189C0u) [[unlikely]] return; }
L_003189C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003189C8u);  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x003189C8u) [[unlikely]] return; }
L_003189C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003189D0u);  if (depth < kMaxDepth) unit_008B(c, 219u, depth + 1u); else { c.pc = 0x0032EED0u; return; } if (c.pc != 0x003189D0u) [[unlikely]] return; }
L_003189D0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003189DCu); st8((c.r[28].w[0] - 23076u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0049(c, 11u, depth + 1u); else { c.pc = 0x00224150u; return; } if (c.pc != 0x003189DCu) [[unlikely]] return; }
L_003189DC:
    c.budget -= 1;
L_003189E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003189F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318A00u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x00318A00u) [[unlikely]] return; }
L_00318A00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00318A60; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2604u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 2604u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318A24u); st8((c.r[28].w[0] - 22084u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0001(c, 82u, depth + 1u); else { c.pc = 0x00104560u; return; } if (c.pc != 0x00318A24u) [[unlikely]] return; }
L_00318A24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318A2Cu); set32(c.r[4], 0u + 1u);  call(c, 0x011902A0u, depth + 1u); if (c.pc != 0x00318A2Cu) [[unlikely]] return; }
L_00318A2C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 18288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318A40u); set32(c.r[6], 0u + 256u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00318A40u) [[unlikely]] return; }
L_00318A40:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] + 18288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318A54u); set32(c.r[5], c.r[5].w[0] - 11488u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00318A54u) [[unlikely]] return; }
L_00318A54:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318A60u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_008D(c, 83u, depth + 1u); else { c.pc = 0x00334FC0u; return; } if (c.pc != 0x00318A60u) [[unlikely]] return; }
L_00318A60:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00318A70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318A80u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x00318A80u) [[unlikely]] return; }
L_00318A80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00318A98; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2604u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 2604u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00318A98:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00318AB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318AC0u);  if (depth < kMaxDepth) unit_008B(c, 19u, depth + 1u); else { c.pc = 0x0032C150u; return; } if (c.pc != 0x00318AC0u) [[unlikely]] return; }
L_00318AC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318AC8u);  if (depth < kMaxDepth) unit_00AA(c, 36u, depth + 1u); else { c.pc = 0x003A8430u; return; } if (c.pc != 0x00318AC8u) [[unlikely]] return; }
L_00318AC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318AD0u);  call(c, 0x01190820u, depth + 1u); if (c.pc != 0x00318AD0u) [[unlikely]] return; }
L_00318AD0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00318B20; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00318AF8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00318B40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00318B40; } }
    c.budget -= 1;
L_00318AF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318B00u);  call(c, 0x01190570u, depth + 1u); if (c.pc != 0x00318B00u) [[unlikely]] return; }
L_00318B00:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2604u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318B14u); st8((c.r[3].w[0] + 2604u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x00318B14u) [[unlikely]] return; }
L_00318B14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00318B40; } }
    c.budget -= 1;
L_00318B20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318B28u);  call(c, 0x01190570u, depth + 1u); if (c.pc != 0x00318B28u) [[unlikely]] return; }
L_00318B28:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2604u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318B3Cu); st8((c.r[3].w[0] + 2604u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x00318B3Cu) [[unlikely]] return; }
L_00318B3C:
    c.budget -= 1;
L_00318B40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318B48u);  if (depth < kMaxDepth) unit_008B(c, 22u, depth + 1u); else { c.pc = 0x0032C1B0u; return; } if (c.pc != 0x00318B48u) [[unlikely]] return; }
L_00318B48:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00318B60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2604u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 2604u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 2589u));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_00318BA8; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4757u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00318BA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318B9Cu);  if (depth < kMaxDepth) unit_0089(c, 139u, depth + 1u); else { c.pc = 0x00325850u; return; } if (c.pc != 0x00318B9Cu) [[unlikely]] return; }
L_00318B9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00318BB0; } }
    c.budget -= 1;
L_00318BA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318BB0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0089(c, 139u, depth + 1u); else { c.pc = 0x00325850u; return; } if (c.pc != 0x00318BB0u) [[unlikely]] return; }
L_00318BB0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00318BC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318BD0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_008D(c, 144u, depth + 1u); else { c.pc = 0x00335690u; return; } if (c.pc != 0x00318BD0u) [[unlikely]] return; }
L_00318BD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00318C00; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], 0u + 1u);
    st8((c.r[28].w[0] - 23076u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], 0u + 2u);
    st8((c.r[3].w[0] + 2528u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2605u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2535u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[28].w[0] - 22996u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
L_00318C00:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00318C10:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] - 2600u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2590u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00318000u < 16384u) { entry = entries_0086[(t - 0x00318000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00318C40:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 2589u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2590u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 12;
    { st8((c.r[2].w[0] + 2593u), static_cast<std::uint8_t>(0u));  [[clang::musttail]] return unit_0088(c, 342u, depth); }
L_00318C70:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] - 2576u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2591u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00318000u < 16384u) { entry = entries_0086[(t - 0x00318000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00318CA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[4].w[0] + 15312u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 692u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2591u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 2591u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[1].w[0] + 16008u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    st8((c.r[1].w[0] + 16012u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318CE4u); st8((c.r[1].w[0] + 16016u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00318CE4u) [[unlikely]] return; }
L_00318CE4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    st8((c.r[1].w[0] + 15332u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318CF8u); st8((c.r[1].w[0] + 15678u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x00318CF8u) [[unlikely]] return; }
L_00318CF8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 15536u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318D0Cu); set32(c.r[6], 0u + 56u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00318D0Cu) [[unlikely]] return; }
L_00318D0C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[3], 0u + 3u);
    st8((c.r[1].w[0] + 15543u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 4757u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00318D38; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 4u);
    st8((c.r[3].w[0] + 2591u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
L_00318D38:
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 4757u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00318D50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2592u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[5].w[0] + 2592u);  if (t) { goto L_00318DD0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00318DC0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00318D88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00318DE8; } }
L_00318D88:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318DA0u); st8((c.r[2].w[0] + 2606u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0085(c, 284u, depth + 1u); else { c.pc = 0x00316750u; return; } if (c.pc != 0x00318DA0u) [[unlikely]] return; }
L_00318DA0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00320000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318DB4u); set32(c.r[6], c.r[6].w[0] - 28768u);  if (depth < kMaxDepth) unit_0091(c, 289u, depth + 1u); else { c.pc = 0x003467F0u; return; } if (c.pc != 0x00318DB4u) [[unlikely]] return; }
L_00318DB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00318DE8; } }
    c.budget -= 1;
L_00318DC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318DC8u);  if (depth < kMaxDepth) unit_0085(c, 285u, depth + 1u); else { c.pc = 0x00316770u; return; } if (c.pc != 0x00318DC8u) [[unlikely]] return; }
L_00318DC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00318DE8; } }
L_00318DD0:
    st8((c.r[5].w[0] + 2591u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    st8((c.r[4].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    st8((c.r[1].w[0] + 16008u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_00318DE8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00318E00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], c.r[4].w[0] + 2592u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 2592u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00318E68; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00318E30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00318E70; } }
L_00318E30:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318E44u); st8((c.r[2].w[0] + 2606u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0085(c, 284u, depth + 1u); else { c.pc = 0x00316750u; return; } if (c.pc != 0x00318E44u) [[unlikely]] return; }
L_00318E44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318E4Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0089(c, 146u, depth + 1u); else { c.pc = 0x00325930u; return; } if (c.pc != 0x00318E4Cu) [[unlikely]] return; }
L_00318E4C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318E5Cu); set32(c.r[5], c.r[5].w[0] - 28512u);  if (depth < kMaxDepth) unit_0091(c, 328u, depth + 1u); else { c.pc = 0x00346F60u; return; } if (c.pc != 0x00318E5Cu) [[unlikely]] return; }
L_00318E5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00318E70; } }
    c.budget -= 1;
L_00318E68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318E70u);  if (depth < kMaxDepth) unit_0085(c, 285u, depth + 1u); else { c.pc = 0x00316770u; return; } if (c.pc != 0x00318E70u) [[unlikely]] return; }
L_00318E70:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00318E80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 2592u));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[7], c.r[6].w[0] + 2592u);  if (t) { goto L_00318F18; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 5888u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00318000u < 16384u) { entry = entries_0086[(t - 0x00318000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00318EB8:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 4u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318ED0u); st8((c.r[2].w[0] + 2606u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0085(c, 284u, depth + 1u); else { c.pc = 0x00316750u; return; } if (c.pc != 0x00318ED0u) [[unlikely]] return; }
L_00318ED0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00320000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318EDCu); set32(c.r[4], c.r[4].w[0] - 28368u);  if (depth < kMaxDepth) unit_0093(c, 90u, depth + 1u); else { c.pc = 0x0034C870u; return; } if (c.pc != 0x00318EDCu) [[unlikely]] return; }
L_00318EDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00318F18; } }
    c.budget -= 1;
L_00318EE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318EF0u);  if (depth < kMaxDepth) unit_0085(c, 285u, depth + 1u); else { c.pc = 0x00316770u; return; } if (c.pc != 0x00318EF0u) [[unlikely]] return; }
L_00318EF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00318F18; } }
L_00318EF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318F00u);  if (depth < kMaxDepth) unit_0086(c, 167u, depth + 1u); else { c.pc = 0x003192D0u; return; } if (c.pc != 0x00318F00u) [[unlikely]] return; }
L_00318F00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00318F18; } }
L_00318F08:
    set32(c.r[3], 0u + 1u);
    st8((c.r[6].w[0] + 2591u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_00318F18:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00318F30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    st8((c.r[3].w[0] + 2591u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    st8((c.r[1].w[0] + 16008u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    st8((c.r[1].w[0] + 16012u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318F6Cu); st8((c.r[1].w[0] + 16016u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x00318F6Cu) [[unlikely]] return; }
L_00318F6C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 15536u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318F80u); set32(c.r[6], 0u + 56u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00318F80u) [[unlikely]] return; }
L_00318F80:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 15543u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00318FA0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 7u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    st64((c.r[29].w[0] + 64u), c.r[4].d[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2589u));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00319080; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2606u));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[6], c.r[5].w[0] + 2606u);  if (t) { goto L_00319080; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_00318FF0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00319080; } }
L_00318FF0:
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[4], c.r[4].w[0] + 16010u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2592u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319010u); st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0091(c, 293u, depth + 1u); else { c.pc = 0x003468C0u; return; } if (c.pc != 0x00319010u) [[unlikely]] return; }
L_00319010:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 16010u));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00319080; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[16], c.r[29].w[0] + 78u);
    set32(c.r[17], c.r[17].w[0] + 15312u);
    c.budget -= 3;
L_00319030:
    set32(c.r[2], c.r[18].w[0] + 1u);
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319044u); set32(c.r[5], c.r[17].w[0] + 20u);  if (depth < kMaxDepth) unit_0091(c, 317u, depth + 1u); else { c.pc = 0x00346D40u; return; } if (c.pc != 0x00319044u) [[unlikely]] return; }
L_00319044:
    set32(c.r[2], c.r[18].w[0] + 1u);
    set32(c.r[5], 0u + 2u);
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319058u); set32(c.r[6], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_0091(c, 308u, depth + 1u); else { c.pc = 0x00346B00u; return; } if (c.pc != 0x00319058u) [[unlikely]] return; }
L_00319058:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 76u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0]));
    st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[1].w[0] + 16010u));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 346u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00319030u | kUnwind; return; } goto L_00319030; } }
L_00319080:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003190A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    st64((c.r[29].w[0] + 24u), c.r[4].d[0]);
    set32(c.r[4], 0u + 7u);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2589u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[6], c.r[5].w[0] + 2606u);  if (t) { goto L_00319118; } }
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = ld8((c.r[5].w[0] + 2606u));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00319118; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00319110; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43870000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x433E0000u);
    st32((c.r[2].w[0] + 9828u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st32((c.r[2].w[0] + 9832u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319104u); st8((c.r[2].w[0] + 2603u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0086(c, 317u, depth + 1u); else { c.pc = 0x0031A4B0u; return; } if (c.pc != 0x00319104u) [[unlikely]] return; }
L_00319104:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00319118; } }
    c.budget -= 1;
L_00319110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319118u);  if (depth < kMaxDepth) unit_0088(c, 215u, depth + 1u); else { c.pc = 0x00321A80u; return; } if (c.pc != 0x00319118u) [[unlikely]] return; }
L_00319118:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00319130:
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0] + 8u), c.r[4].d[0]);
    set32(c.r[3], 0u + 7u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2589u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003191A0; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2606u));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[6], c.r[5].w[0] + 2606u);  if (t) { goto L_003191A0; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00319190; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2592u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 2592u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2576u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_003191A0; } }
    c.budget -= 1;
L_00319190:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 5u);
    st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
L_003191A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003191B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 7u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    st64((c.r[29].w[0] + 24u), c.r[4].d[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2589u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00319218; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2606u));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[6], c.r[5].w[0] + 2606u);  if (t) { goto L_00319218; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00319210; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2592u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 2592u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2576u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00319218; } }
    c.budget -= 1;
L_00319210:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319218u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0088(c, 215u, depth + 1u); else { c.pc = 0x00321A80u; return; } if (c.pc != 0x00319218u) [[unlikely]] return; }
L_00319218:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00319230:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 7u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[4].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 2589u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00319278; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00C50000u);  if (t) { goto L_00319270; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319264u); set32(c.r[4], c.r[4].w[0] - 5454u);  if (depth < kMaxDepth) unit_0093(c, 109u, depth + 1u); else { c.pc = 0x0034CA80u; return; } if (c.pc != 0x00319264u) [[unlikely]] return; }
L_00319264:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00319278; } }
    c.budget -= 1;
L_00319270:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    st16((c.r[1].w[0] - 5454u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_00319278:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00319290:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003192A0u);  if (depth < kMaxDepth) unit_008D(c, 63u, depth + 1u); else { c.pc = 0x00334DF0u; return; } if (c.pc != 0x003192A0u) [[unlikely]] return; }
L_003192A0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] - 2544u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2590u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003192C4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003192C4u) [[unlikely]] return; }
L_003192C4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003192D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 9u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2589u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2590u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2593u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319310u); st8((c.r[2].w[0] + 10312u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0088(c, 419u, depth + 1u); else { c.pc = 0x00323870u; return; } if (c.pc != 0x00319310u) [[unlikely]] return; }
L_00319310:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319318u);  if (depth < kMaxDepth) unit_0088(c, 342u, depth + 1u); else { c.pc = 0x00322EA0u; return; } if (c.pc != 0x00319318u) [[unlikely]] return; }
L_00319318:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00319330:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] - 2512u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2591u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00318000u < 16384u) { entry = entries_0086[(t - 0x00318000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00319360:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 2592u));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[7], c.r[6].w[0] + 2592u);  if (t) { goto L_00319528; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 5856u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00318000u < 16384u) { entry = entries_0086[(t - 0x00318000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00319398:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[4].w[0] - 28112u);
    st8((c.r[2].w[0] + 2597u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003193BCu); st8((c.r[2].w[0] + 2600u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0093(c, 106u, depth + 1u); else { c.pc = 0x0034CA10u; return; } if (c.pc != 0x003193BCu) [[unlikely]] return; }
L_003193BC:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003193C8u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_008D(c, 83u, depth + 1u); else { c.pc = 0x00334FC0u; return; } if (c.pc != 0x003193C8u) [[unlikely]] return; }
L_003193C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00319528; } }
L_003193D0:
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] + 15536u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003193ECu); set32(c.r[6], 0u + 56u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003193ECu) [[unlikely]] return; }
L_003193EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[2], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], c.r[4].w[0] + 15536u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319404u); st8((c.r[1].w[0] + 15543u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0095(c, 55u, depth + 1u); else { c.pc = 0x00354A50u; return; } if (c.pc != 0x00319404u) [[unlikely]] return; }
L_00319404:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031940Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 19u, depth + 1u); else { c.pc = 0x003341C0u; return; } if (c.pc != 0x0031940Cu) [[unlikely]] return; }
L_0031940C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00319528; } }
    c.budget -= 1;
L_00319418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319420u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x00319420u) [[unlikely]] return; }
L_00319420:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00319528; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 9852u));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 649u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00319458; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2591u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 2591u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00319528; } }
    c.budget -= 1;
L_00319458:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2592u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 2592u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00319528; } }
L_00319468:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 315u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st32((c.r[2].w[0] + 2612u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 649u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 9852u));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003194A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031949Cu);  if (depth < kMaxDepth) unit_0095(c, 274u, depth + 1u); else { c.pc = 0x00356380u; return; } if (c.pc != 0x0031949Cu) [[unlikely]] return; }
L_0031949C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00319528; } }
    c.budget -= 1;
L_003194A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003194B0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0095(c, 274u, depth + 1u); else { c.pc = 0x00356380u; return; } if (c.pc != 0x003194B0u) [[unlikely]] return; }
L_003194B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00319528; } }
L_003194B8:
    set32(c.r[3], ld32((c.r[6].w[0] + 2612u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[6].w[0] + 2612u), c.r[3].w[0]);  if (t) { goto L_00319528; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 76u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2592u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003194E0u); st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x003194E0u) [[unlikely]] return; }
L_003194E0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 15u);
    st32((c.r[3].w[0] + 2612u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 649u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 9852u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00319528; } }
    c.budget -= 1;
L_00319500:
    set32(c.r[3], ld32((c.r[6].w[0] + 2612u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[6].w[0] + 2612u), c.r[3].w[0]);  if (t) { goto L_00319528; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2591u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 2591u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_00319528:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00319540:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319550u);  if (depth < kMaxDepth) unit_0088(c, 404u, depth + 1u); else { c.pc = 0x003236C0u; return; } if (c.pc != 0x00319550u) [[unlikely]] return; }
L_00319550:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00319668; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319560u);  if (depth < kMaxDepth) unit_0089(c, 28u, depth + 1u); else { c.pc = 0x00324360u; return; } if (c.pc != 0x00319560u) [[unlikely]] return; }
L_00319560:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00319668; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319570u);  if (depth < kMaxDepth) unit_0088(c, 402u, depth + 1u); else { c.pc = 0x00323670u; return; } if (c.pc != 0x00319570u) [[unlikely]] return; }
L_00319570:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00319588; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319580u);  if (depth < kMaxDepth) unit_0088(c, 404u, depth + 1u); else { c.pc = 0x003236C0u; return; } if (c.pc != 0x00319580u) [[unlikely]] return; }
L_00319580:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00319668; } }
L_00319588:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319590u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x00319590u) [[unlikely]] return; }
L_00319590:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00319608; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 2597u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003195F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003195B0u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x003195B0u) [[unlikely]] return; }
L_003195B0:
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], 0u + 18u);
    c.r[3].d[0] = ld8((c.r[6].w[0] + 2591u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[6].w[0] + 2591u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2593u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2600u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 2612u), c.r[4].w[0]);  if (t) { goto L_00319658; } }
    c.budget -= 1;
L_003195F0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003195FCu); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x003195FCu) [[unlikely]] return; }
L_003195FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00319658; } }
    c.budget -= 1;
L_00319608:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319610u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x00319610u) [[unlikely]] return; }
L_00319610:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00319640; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2597u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00319658; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319630u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x00319630u) [[unlikely]] return; }
L_00319630:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2597u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00319658; } }
L_00319640:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319654u); set32(c.r[4], c.r[2].w[0] + 2597u);  if (depth < kMaxDepth) unit_008D(c, 20u, depth + 1u); else { c.pc = 0x003341D0u; return; } if (c.pc != 0x00319654u) [[unlikely]] return; }
L_00319654:
    c.budget -= 1;
L_00319658:
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2597u));
    set32(c.r[3], c.r[3].w[0] + 10u);
    st8((c.r[4].w[0] + 9846u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00319668:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00319680:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2592u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[5].w[0] + 2592u);  if (t) { goto L_00319738; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00319718; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00319708; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003196C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00319750; } }
L_003196C0:
    set32(c.r[3], ld32((c.r[5].w[0] + 2612u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[5].w[0] + 2612u), c.r[3].w[0]);  if (t) { goto L_00319750; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 5u);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2592u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 2592u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003196F0u); st8((c.r[2].w[0] + 2606u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0085(c, 284u, depth + 1u); else { c.pc = 0x00316750u; return; } if (c.pc != 0x003196F0u) [[unlikely]] return; }
L_003196F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00320000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003196FCu); set32(c.r[4], c.r[4].w[0] - 28240u);  if (depth < kMaxDepth) unit_0093(c, 98u, depth + 1u); else { c.pc = 0x0034C940u; return; } if (c.pc != 0x003196FCu) [[unlikely]] return; }
L_003196FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00319750; } }
    c.budget -= 1;
L_00319708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319710u);  if (depth < kMaxDepth) unit_0085(c, 285u, depth + 1u); else { c.pc = 0x00316770u; return; } if (c.pc != 0x00319710u) [[unlikely]] return; }
L_00319710:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00319750; } }
L_00319718:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031972Cu); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_008D(c, 85u, depth + 1u); else { c.pc = 0x00335000u; return; } if (c.pc != 0x0031972Cu) [[unlikely]] return; }
L_0031972C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00319750; } }
    c.budget -= 1;
L_00319738:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319740u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x00319740u) [[unlikely]] return; }
L_00319740:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00319750; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319750u);  if (depth < kMaxDepth) unit_0086(c, 123u, depth + 1u); else { c.pc = 0x00318C40u; return; } if (c.pc != 0x00319750u) [[unlikely]] return; }
L_00319750:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00319760:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], c.r[28].w[0] - 27872u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2590u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00318000u < 16384u) { entry = entries_0086[(t - 0x00318000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00319780:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] - 2496u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2591u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00318000u < 16384u) { entry = entries_0086[(t - 0x00318000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003197B0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 16u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2591u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { st8((c.r[3].w[0] + 2591u), static_cast<std::uint8_t>(c.r[2].w[0]));  [[clang::musttail]] return unit_008D(c, 85u, depth); }
L_003197D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003197E0u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x003197E0u) [[unlikely]] return; }
L_003197E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00319808; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2591u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003197FCu); st8((c.r[3].w[0] + 2591u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x003197FCu) [[unlikely]] return; }
L_003197FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319804u);  if (depth < kMaxDepth) unit_0086(c, 82u, depth + 1u); else { c.pc = 0x003188A0u; return; } if (c.pc != 0x00319804u) [[unlikely]] return; }
L_00319804:
    c.budget -= 1;
L_00319808:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00319820:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2605u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00319858; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2591u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 2591u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2605u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00319860; } }
    c.budget -= 1;
L_00319858:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319860u);  if (depth < kMaxDepth) unit_0086(c, 81u, depth + 1u); else { c.pc = 0x00318870u; return; } if (c.pc != 0x00319860u) [[unlikely]] return; }
L_00319860:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00319870:
    c.budget -= 2;
    {  goto L_003198B0; }
L_00319880:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 8u);
    st8((c.r[3].w[0] + 2589u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2590u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2591u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 2593u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_003198B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 6u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2589u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2590u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003198E4u); st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0088(c, 342u, depth + 1u); else { c.pc = 0x00322EA0u; return; } if (c.pc != 0x003198E4u) [[unlikely]] return; }
L_003198E4:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 255u);
    set32(c.r[4], 0u + 76u);
    st8((c.r[2].w[0] + 2578u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 9836u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st16((c.r[2].w[0] + 2580u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 3418u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319918u); st8((c.r[2].w[0] + 3416u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x00319918u) [[unlikely]] return; }
L_00319918:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319920u);  if (depth < kMaxDepth) unit_008B(c, 220u, depth + 1u); else { c.pc = 0x0032EEE0u; return; } if (c.pc != 0x00319920u) [[unlikely]] return; }
L_00319920:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00319930:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], c.r[28].w[0] - 27868u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2590u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00318000u < 16384u) { entry = entries_0086[(t - 0x00318000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00319950:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] - 2480u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2591u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00318000u < 16384u) { entry = entries_0086[(t - 0x00318000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00319980:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 16u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2591u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { st8((c.r[3].w[0] + 2591u), static_cast<std::uint8_t>(c.r[2].w[0]));  [[clang::musttail]] return unit_008D(c, 85u, depth); }
L_003199A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003199B0u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x003199B0u) [[unlikely]] return; }
L_003199B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00319A18; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2591u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003199CCu); st8((c.r[3].w[0] + 2591u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x003199CCu) [[unlikely]] return; }
L_003199CC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[5], c.r[5].w[0] + 4288u);
    set32(c.r[4], c.r[4].w[0] - 11952u);
    set32(c.r[3], 0u + 29u);
    c.budget -= 5;
L_003199E0:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003199E0u | kUnwind; return; } goto L_003199E0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] - 11488u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319A10u); set32(c.r[5], c.r[5].w[0] - 5832u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00319A10u) [[unlikely]] return; }
L_00319A10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319A18u);  if (depth < kMaxDepth) unit_0086(c, 82u, depth + 1u); else { c.pc = 0x003188A0u; return; } if (c.pc != 0x00319A18u) [[unlikely]] return; }
L_00319A18:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00319A30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2605u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00319A68; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2591u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 2591u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2605u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00319A70; } }
    c.budget -= 1;
L_00319A68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319A70u);  if (depth < kMaxDepth) unit_0086(c, 81u, depth + 1u); else { c.pc = 0x00318870u; return; } if (c.pc != 0x00319A70u) [[unlikely]] return; }
L_00319A70:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00319A80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 2592u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00319B38; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00319B28; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00319AB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00319B40; } }
    c.budget -= 1;
L_00319AB8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] - 11952u);
    set32(c.r[5], c.r[5].w[0] + 4288u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319AD0u); set32(c.r[6], 0u + 464u);  if (depth < kMaxDepth) unit_0006(c, 189u, depth + 1u); else { c.pc = 0x0011A900u; return; } if (c.pc != 0x00319AD0u) [[unlikely]] return; }
L_00319AD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00319B18; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2592u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319AECu); st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0085(c, 284u, depth + 1u); else { c.pc = 0x00316750u; return; } if (c.pc != 0x00319AECu) [[unlikely]] return; }
L_00319AEC:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 6u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[4], c.r[4].w[0] + 4288u);
    set32(c.r[5], c.r[5].w[0] - 25568u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319B0Cu); st8((c.r[2].w[0] + 2606u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0091(c, 214u, depth + 1u); else { c.pc = 0x00346030u; return; } if (c.pc != 0x00319B0Cu) [[unlikely]] return; }
L_00319B0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00319B40; } }
    c.budget -= 1;
L_00319B18:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00319B40; } }
L_00319B28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319B30u);  if (depth < kMaxDepth) unit_0085(c, 285u, depth + 1u); else { c.pc = 0x00316770u; return; } if (c.pc != 0x00319B30u) [[unlikely]] return; }
L_00319B30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00319B40; } }
L_00319B38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319B40u);  if (depth < kMaxDepth) unit_0086(c, 216u, depth + 1u); else { c.pc = 0x003198B0u; return; } if (c.pc != 0x00319B40u) [[unlikely]] return; }
L_00319B40:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00319B50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2592u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[5].w[0] + 2592u);  if (t) { goto L_00319BC0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00319B80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00319C10; } }
    c.budget -= 1;
L_00319B80:
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319B8Cu); st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x00319B8Cu) [[unlikely]] return; }
L_00319B8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319B94u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 19u, depth + 1u); else { c.pc = 0x003341C0u; return; } if (c.pc != 0x00319B94u) [[unlikely]] return; }
L_00319B94:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 20u);
    st32((c.r[2].w[0] + 2612u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319BACu); set32(c.r[5], c.r[2].w[0] + 8291u);  if (depth < kMaxDepth) unit_009E(c, 53u, depth + 1u); else { c.pc = 0x00378EA0u; return; } if (c.pc != 0x00319BACu) [[unlikely]] return; }
L_00319BAC:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319BB8u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_008D(c, 83u, depth + 1u); else { c.pc = 0x00334FC0u; return; } if (c.pc != 0x00319BB8u) [[unlikely]] return; }
L_00319BB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00319C10; } }
L_00319BC0:
    set32(c.r[3], ld32((c.r[5].w[0] + 2612u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[5].w[0] + 2612u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00319C10; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 2612u)));
    c.r[1].d[0] = c.r[2].sd[0] < 600ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], 0u + 96u);  if (t) { goto L_00319C00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319BF4u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x00319BF4u) [[unlikely]] return; }
L_00319BF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00319C10; } }
    c.budget -= 1;
L_00319C00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319C08u);  if (depth < kMaxDepth) unit_0086(c, 216u, depth + 1u); else { c.pc = 0x003198B0u; return; } if (c.pc != 0x00319C08u) [[unlikely]] return; }
L_00319C08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319C10u); set32(c.r[4], 0u + 76u);  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x00319C10u) [[unlikely]] return; }
L_00319C10:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00319C20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 7u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    st64((c.r[29].w[0] + 24u), c.r[4].d[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2589u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00319C98; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2606u));
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[6], c.r[5].w[0] + 2606u);  if (t) { goto L_00319C98; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00319C78; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2591u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2591u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00319C98; } }
    c.budget -= 1;
L_00319C78:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 4u);
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319C98u); set32(c.r[4], c.r[2].w[0] + 8291u);  if (depth < kMaxDepth) unit_0091(c, 142u, depth + 1u); else { c.pc = 0x00345780u; return; } if (c.pc != 0x00319C98u) [[unlikely]] return; }
L_00319C98:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00319CB0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 11u);
    st8((c.r[3].w[0] + 2589u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2590u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2591u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 2593u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00319CE0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] - 2456u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2590u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00318000u < 16384u) { entry = entries_0086[(t - 0x00318000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00319D10:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] - 2448u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2591u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00318000u < 16384u) { entry = entries_0086[(t - 0x00318000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00319D40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2591u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319D5Cu); st8((c.r[3].w[0] + 2591u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x00319D5Cu) [[unlikely]] return; }
L_00319D5C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 15536u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319D70u); set32(c.r[6], 0u + 56u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00319D70u) [[unlikely]] return; }
L_00319D70:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319D7Cu); set32(c.r[4], c.r[4].w[0] + 15536u);  if (depth < kMaxDepth) unit_00A1(c, 284u, depth + 1u); else { c.pc = 0x00387CD0u; return; } if (c.pc != 0x00319D7Cu) [[unlikely]] return; }
L_00319D7C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00319D90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[4].w[0] + 15536u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319DB0u); st8((c.r[2].w[0] + 2528u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_00A1(c, 284u, depth + 1u); else { c.pc = 0x00387CD0u; return; } if (c.pc != 0x00319DB0u) [[unlikely]] return; }
L_00319DB0:
    set32(c.r[3], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 1u);  if (t) { goto L_00319DD8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00319DE8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00319DE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00319DE8; } }
L_00319DD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319DE0u);  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x00319DE0u) [[unlikely]] return; }
L_00319DE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319DE8u);  if (depth < kMaxDepth) unit_0086(c, 216u, depth + 1u); else { c.pc = 0x003198B0u; return; } if (c.pc != 0x00319DE8u) [[unlikely]] return; }
L_00319DE8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00319E00:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] - 2440u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2591u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00318000u < 16384u) { entry = entries_0086[(t - 0x00318000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00319E30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2591u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319E4Cu); st8((c.r[3].w[0] + 2591u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x00319E4Cu) [[unlikely]] return; }
L_00319E4C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 15536u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319E60u); set32(c.r[6], 0u + 56u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00319E60u) [[unlikely]] return; }
L_00319E60:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], c.r[4].w[0] + 15536u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319E78u); st8((c.r[2].w[0] + 2528u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_00A2(c, 27u, depth + 1u); else { c.pc = 0x003882A0u; return; } if (c.pc != 0x00319E78u) [[unlikely]] return; }
L_00319E78:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00319E90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319EA4u); set32(c.r[4], c.r[4].w[0] + 15536u);  if (depth < kMaxDepth) unit_00A2(c, 27u, depth + 1u); else { c.pc = 0x003882A0u; return; } if (c.pc != 0x00319EA4u) [[unlikely]] return; }
L_00319EA4:
    set32(c.r[3], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 1u);  if (t) { goto L_00319EF8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00319F08; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00319ED0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00319F08; } }
    c.budget -= 1;
L_00319ED0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319ED8u);  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x00319ED8u) [[unlikely]] return; }
L_00319ED8:
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2591u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 2591u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00319F08; } }
    c.budget -= 1;
L_00319EF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319F00u);  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x00319F00u) [[unlikely]] return; }
L_00319F00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319F08u);  if (depth < kMaxDepth) unit_0086(c, 216u, depth + 1u); else { c.pc = 0x003198B0u; return; } if (c.pc != 0x00319F08u) [[unlikely]] return; }
L_00319F08:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00319F20:
    set32(c.r[29], c.r[29].w[0] - 208u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], c.r[4].w[0] + 2592u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 2592u));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0031A008; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00319FF8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00319F68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031A018; } }
    c.budget -= 1;
L_00319F68:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319F80u); set32(c.r[6], 0u + 130u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00319F80u) [[unlikely]] return; }
L_00319F80:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[6], 0u + 21u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319F94u); set32(c.r[5], c.r[2].w[0] + 92u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x00319F94u) [[unlikely]] return; }
L_00319F94:
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_00319FA0:
    set32(c.r[2], c.r[16].w[0] + 22u);
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[6], 0u + 21u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], c.r[3].w[0] + 64u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319FC0u); set32(c.r[5], c.r[2].w[0] + 201u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x00319FC0u) [[unlikely]] return; }
L_00319FC0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 21u);
    c.r[2].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 22u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00319FA0u | kUnwind; return; } goto L_00319FA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319FDCu);  if (depth < kMaxDepth) unit_0085(c, 284u, depth + 1u); else { c.pc = 0x00316750u; return; } if (c.pc != 0x00319FDCu) [[unlikely]] return; }
L_00319FDC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], 0u + 110u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319FF0u); set32(c.r[6], c.r[6].w[0] - 31232u);  if (depth < kMaxDepth) unit_0093(c, 295u, depth + 1u); else { c.pc = 0x0034E020u; return; } if (c.pc != 0x00319FF0u) [[unlikely]] return; }
L_00319FF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031A018; } }
L_00319FF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A000u);  if (depth < kMaxDepth) unit_0085(c, 285u, depth + 1u); else { c.pc = 0x00316770u; return; } if (c.pc != 0x0031A000u) [[unlikely]] return; }
L_0031A000:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031A018; } }
L_0031A008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A010u);  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x0031A010u) [[unlikely]] return; }
L_0031A010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A018u);  if (depth < kMaxDepth) unit_0086(c, 216u, depth + 1u); else { c.pc = 0x003198B0u; return; } if (c.pc != 0x0031A018u) [[unlikely]] return; }
L_0031A018:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_0031A030:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 12u);
    st8((c.r[3].w[0] + 2589u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2590u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2591u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 2593u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0031A060:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], 0u + 12u);
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 2589u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2590u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2591u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 2593u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0031A0A0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] - 2416u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2590u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00318000u < 16384u) { entry = entries_0086[(t - 0x00318000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0031A0D0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] - 2392u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2591u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00318000u < 16384u) { entry = entries_0086[(t - 0x00318000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0031A100:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], c.r[4].w[0] + 2592u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 2592u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0031A1A8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031A188; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031A178; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031A148; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031A1D8; } }
    c.budget -= 1;
L_0031A148:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 8u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2597u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A168u); st8((c.r[2].w[0] + 2606u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x0031A168u) [[unlikely]] return; }
L_0031A168:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0031A1D8; } }
L_0031A178:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A180u);  if (depth < kMaxDepth) unit_0085(c, 285u, depth + 1u); else { c.pc = 0x00316770u; return; } if (c.pc != 0x0031A180u) [[unlikely]] return; }
L_0031A180:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031A1D8; } }
L_0031A188:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A19Cu); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_008D(c, 83u, depth + 1u); else { c.pc = 0x00334FC0u; return; } if (c.pc != 0x0031A19Cu) [[unlikely]] return; }
L_0031A19C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031A1D8; } }
    c.budget -= 1;
L_0031A1A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], c.r[4].w[0] + 15536u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A1BCu); set32(c.r[6], 0u + 56u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0031A1BCu) [[unlikely]] return; }
L_0031A1BC:
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2591u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 2591u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
L_0031A1D8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031A1F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[4].w[0] + 15536u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A210u); st8((c.r[2].w[0] + 2528u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_00A1(c, 244u, depth + 1u); else { c.pc = 0x003877F0u; return; } if (c.pc != 0x0031A210u) [[unlikely]] return; }
L_0031A210:
    set32(c.r[3], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 1u);  if (t) { goto L_0031A260; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0031A268; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0031A238; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031A268; } }
L_0031A238:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2591u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 2591u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A254u); st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x0031A254u) [[unlikely]] return; }
L_0031A254:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031A268; } }
    c.budget -= 1;
L_0031A260:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A268u);  if (depth < kMaxDepth) unit_0086(c, 317u, depth + 1u); else { c.pc = 0x0031A4B0u; return; } if (c.pc != 0x0031A268u) [[unlikely]] return; }
L_0031A268:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031A280:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2597u));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_0031A380; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 5728u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00318000u < 16384u) { entry = entries_0086[(t - 0x00318000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0031A2B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A2C0u);  if (depth < kMaxDepth) unit_0086(c, 247u, depth + 1u); else { c.pc = 0x00319CB0u; return; } if (c.pc != 0x0031A2C0u) [[unlikely]] return; }
L_0031A2C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031A380; } }
L_0031A2C8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] - 11488u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A2DCu); set32(c.r[5], c.r[5].w[0] - 5808u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0031A2DCu) [[unlikely]] return; }
L_0031A2DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A2E4u);  if (depth < kMaxDepth) unit_0086(c, 215u, depth + 1u); else { c.pc = 0x00319880u; return; } if (c.pc != 0x0031A2E4u) [[unlikely]] return; }
L_0031A2E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031A380; } }
    c.budget -= 1;
L_0031A2F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A2F8u);  if (depth < kMaxDepth) unit_008D(c, 149u, depth + 1u); else { c.pc = 0x00335720u; return; } if (c.pc != 0x0031A2F8u) [[unlikely]] return; }
L_0031A2F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);  if (t) { goto L_0031A318; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] - 11488u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A310u); set32(c.r[5], c.r[5].w[0] - 5776u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0031A310u) [[unlikely]] return; }
L_0031A310:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031A330; } }
L_0031A318:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] - 11488u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A32Cu); set32(c.r[5], c.r[5].w[0] - 5760u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0031A32Cu) [[unlikely]] return; }
L_0031A32C:
    c.budget -= 1;
L_0031A330:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A338u);  if (depth < kMaxDepth) unit_0086(c, 215u, depth + 1u); else { c.pc = 0x00319880u; return; } if (c.pc != 0x0031A338u) [[unlikely]] return; }
L_0031A338:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031A380; } }
L_0031A340:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] - 11488u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A354u); set32(c.r[5], c.r[5].w[0] - 5744u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0031A354u) [[unlikely]] return; }
L_0031A354:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A35Cu);  if (depth < kMaxDepth) unit_0086(c, 215u, depth + 1u); else { c.pc = 0x00319880u; return; } if (c.pc != 0x0031A35Cu) [[unlikely]] return; }
L_0031A35C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031A380; } }
    c.budget -= 1;
L_0031A368:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A370u);  if (depth < kMaxDepth) unit_0086(c, 278u, depth + 1u); else { c.pc = 0x0031A030u; return; } if (c.pc != 0x0031A370u) [[unlikely]] return; }
L_0031A370:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031A380; } }
L_0031A378:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A380u);  if (depth < kMaxDepth) unit_0086(c, 279u, depth + 1u); else { c.pc = 0x0031A060u; return; } if (c.pc != 0x0031A380u) [[unlikely]] return; }
L_0031A380:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031A390:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 6u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2589u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2590u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A3C0u); st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0088(c, 342u, depth + 1u); else { c.pc = 0x00322EA0u; return; } if (c.pc != 0x0031A3C0u) [[unlikely]] return; }
L_0031A3C0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 255u);
    set32(c.r[4], 0u + 76u);
    st8((c.r[2].w[0] + 2578u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 9836u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st16((c.r[2].w[0] + 2580u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 3418u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A3F4u); st8((c.r[2].w[0] + 3416u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x0031A3F4u) [[unlikely]] return; }
L_0031A3F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A3FCu);  if (depth < kMaxDepth) unit_008B(c, 220u, depth + 1u); else { c.pc = 0x0032EEE0u; return; } if (c.pc != 0x0031A3FCu) [[unlikely]] return; }
L_0031A3FC:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 2u);
    st8((c.r[3].w[0] + 2529u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031A420:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] - 2368u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2590u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00318000u < 16384u) { entry = entries_0086[(t - 0x00318000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0031A450:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A460u);  if (depth < kMaxDepth) unit_0088(c, 346u, depth + 1u); else { c.pc = 0x00322EF0u; return; } if (c.pc != 0x0031A460u) [[unlikely]] return; }
L_0031A460:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031A498; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] - 2336u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2591u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A48Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031A48Cu) [[unlikely]] return; }
L_0031A48C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031A4A0; } }
    c.budget -= 1;
L_0031A498:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031A4A0; } }
L_0031A4A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031A4B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 5u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2589u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2590u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A4ECu); st8((c.r[2].w[0] + 2593u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0088(c, 342u, depth + 1u); else { c.pc = 0x00322EA0u; return; } if (c.pc != 0x0031A4ECu) [[unlikely]] return; }
L_0031A4EC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    st8((c.r[1].w[0] + 16012u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] + 4928u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 10380u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A510u); st8((c.r[1].w[0] + 16016u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0031A510u) [[unlikely]] return; }
L_0031A510:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A518u);  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x0031A518u) [[unlikely]] return; }
L_0031A518:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 15536u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A52Cu); set32(c.r[6], 0u + 56u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0031A52Cu) [[unlikely]] return; }
L_0031A52C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A538u); set32(c.r[4], c.r[4].w[0] + 15536u);  if (depth < kMaxDepth) unit_0096(c, 257u, depth + 1u); else { c.pc = 0x0035B410u; return; } if (c.pc != 0x0031A538u) [[unlikely]] return; }
L_0031A538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A540u);  if (depth < kMaxDepth) unit_0088(c, 419u, depth + 1u); else { c.pc = 0x00323870u; return; } if (c.pc != 0x0031A540u) [[unlikely]] return; }
L_0031A540:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031A550:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 5u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2589u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2590u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A58Cu); st8((c.r[2].w[0] + 2593u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0088(c, 342u, depth + 1u); else { c.pc = 0x00322EA0u; return; } if (c.pc != 0x0031A58Cu) [[unlikely]] return; }
L_0031A58C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A594u);  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x0031A594u) [[unlikely]] return; }
L_0031A594:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 15536u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A5A8u); set32(c.r[6], 0u + 56u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0031A5A8u) [[unlikely]] return; }
L_0031A5A8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[4], c.r[4].w[0] + 4928u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 10380u);
    st8((c.r[2].w[0] + 2528u), static_cast<std::uint8_t>(0u));
    st8((c.r[1].w[0] + 16012u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A5D4u); st8((c.r[1].w[0] + 16016u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0031A5D4u) [[unlikely]] return; }
L_0031A5D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A5E0u); set32(c.r[4], c.r[4].w[0] + 15536u);  if (depth < kMaxDepth) unit_0096(c, 257u, depth + 1u); else { c.pc = 0x0035B410u; return; } if (c.pc != 0x0031A5E0u) [[unlikely]] return; }
L_0031A5E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A5E8u);  if (depth < kMaxDepth) unit_0088(c, 419u, depth + 1u); else { c.pc = 0x00323870u; return; } if (c.pc != 0x0031A5E8u) [[unlikely]] return; }
L_0031A5E8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031A600:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A618u); st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x0031A618u) [[unlikely]] return; }
L_0031A618:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 15536u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A62Cu); set32(c.r[6], 0u + 56u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0031A62Cu) [[unlikely]] return; }
L_0031A62C:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], c.r[4].w[0] + 15536u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A640u); st8((c.r[2].w[0] + 2600u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0096(c, 257u, depth + 1u); else { c.pc = 0x0035B410u; return; } if (c.pc != 0x0031A640u) [[unlikely]] return; }
L_0031A640:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A648u); set32(c.r[4], 0u + 55u);  if (depth < kMaxDepth) unit_008D(c, 61u, depth + 1u); else { c.pc = 0x00334DB0u; return; } if (c.pc != 0x0031A648u) [[unlikely]] return; }
L_0031A648:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031A660:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[4].w[0] + 15536u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A680u); st8((c.r[2].w[0] + 2528u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0096(c, 257u, depth + 1u); else { c.pc = 0x0035B410u; return; } if (c.pc != 0x0031A680u) [[unlikely]] return; }
L_0031A680:
    set32(c.r[3], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], 0u - 1u);  if (t) { goto L_0031A728; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0031A730; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0031A6A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031A730; } }
    c.budget -= 1;
L_0031A6A8:
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[3], 0u + 25u);
    st8((c.r[1].w[0] + 15550u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2599u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0031A6E0; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2591u));
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 2591u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0031A730; } }
L_0031A6E0:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2591u));
    set32(c.r[4], 0u + 40u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 2591u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2593u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st32((c.r[3].w[0] + 2612u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2600u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2599u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 16012u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0031A730; } }
L_0031A728:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A730u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0086(c, 379u, depth + 1u); else { c.pc = 0x0031AE50u; return; } if (c.pc != 0x0031A730u) [[unlikely]] return; }
L_0031A730:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031A740:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], c.r[4].w[0] + 2592u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 2592u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0031A800; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031A7D0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031A7C0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031A788; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031A840; } }
    c.budget -= 1;
L_0031A788:
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A794u); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0085(c, 284u, depth + 1u); else { c.pc = 0x00316750u; return; } if (c.pc != 0x0031A794u) [[unlikely]] return; }
L_0031A794:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 7u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A7A8u); st8((c.r[2].w[0] + 2606u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0089(c, 146u, depth + 1u); else { c.pc = 0x00325930u; return; } if (c.pc != 0x0031A7A8u) [[unlikely]] return; }
L_0031A7A8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A7B8u); set32(c.r[5], c.r[5].w[0] - 21728u);  if (depth < kMaxDepth) unit_0091(c, 382u, depth + 1u); else { c.pc = 0x003478A0u; return; } if (c.pc != 0x0031A7B8u) [[unlikely]] return; }
L_0031A7B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031A840; } }
L_0031A7C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A7C8u);  if (depth < kMaxDepth) unit_0085(c, 285u, depth + 1u); else { c.pc = 0x00316770u; return; } if (c.pc != 0x0031A7C8u) [[unlikely]] return; }
L_0031A7C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031A840; } }
L_0031A7D0:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A7E4u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_008D(c, 85u, depth + 1u); else { c.pc = 0x00335000u; return; } if (c.pc != 0x0031A7E4u) [[unlikely]] return; }
L_0031A7E4:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], 0u + 24u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2599u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 16u);  if (t) { goto L_0031A800; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A800u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 59u, depth + 1u); else { c.pc = 0x00334D80u; return; } if (c.pc != 0x0031A800u) [[unlikely]] return; }
L_0031A800:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A808u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x0031A808u) [[unlikely]] return; }
L_0031A808:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031A840; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], 0u + 25u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2599u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0031A838; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A82Cu);  if (depth < kMaxDepth) unit_0086(c, 309u, depth + 1u); else { c.pc = 0x0031A390u; return; } if (c.pc != 0x0031A82Cu) [[unlikely]] return; }
L_0031A82C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031A840; } }
    c.budget -= 1;
L_0031A838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A840u);  if (depth < kMaxDepth) unit_0086(c, 462u, depth + 1u); else { c.pc = 0x0031BA70u; return; } if (c.pc != 0x0031A840u) [[unlikely]] return; }
L_0031A840:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031A850:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[6].w[0] + 2592u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], c.r[6].w[0] + 2592u);  if (t) { goto L_0031A908; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0031A8D8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031A8B8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031A890; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031A910; } }
L_0031A890:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 75u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 20u);
    st32((c.r[2].w[0] + 2612u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A8B4u); set32(c.r[5], c.r[2].w[0] + 8291u);  if (depth < kMaxDepth) unit_009E(c, 53u, depth + 1u); else { c.pc = 0x00378EA0u; return; } if (c.pc != 0x0031A8B4u) [[unlikely]] return; }
L_0031A8B4:
    c.budget -= 1;
L_0031A8B8:
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 2612u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 2612u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 2612u)));
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0031A910; } }
L_0031A8D8:
    c.r[2].d[0] = ld8((c.r[6].w[0] + 2592u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A8E8u); st8((c.r[6].w[0] + 2592u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0085(c, 284u, depth + 1u); else { c.pc = 0x00316750u; return; } if (c.pc != 0x0031A8E8u) [[unlikely]] return; }
L_0031A8E8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 8u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[4], c.r[4].w[0] - 21360u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A900u); st8((c.r[2].w[0] + 2606u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0091(c, 335u, depth + 1u); else { c.pc = 0x00347030u; return; } if (c.pc != 0x0031A900u) [[unlikely]] return; }
L_0031A900:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031A910; } }
L_0031A908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A910u);  if (depth < kMaxDepth) unit_0085(c, 285u, depth + 1u); else { c.pc = 0x00316770u; return; } if (c.pc != 0x0031A910u) [[unlikely]] return; }
L_0031A910:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031A920:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A930u); set32(c.r[4], 0u + 96u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x0031A930u) [[unlikely]] return; }
L_0031A930:
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[3], ld32((c.r[4].w[0] + 2612u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[3].sd[0] < 600ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[4].w[0] + 2612u), c.r[3].w[0]);  if (t) { goto L_0031A970; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 2612u)));
    c.r[3].d[0] = c.r[3].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0031A990; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0031A990; } }
    c.budget -= 1;
L_0031A970:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 76u);
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A990u); st8((c.r[2].w[0] + 2600u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x0031A990u) [[unlikely]] return; }
L_0031A990:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031A9A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[3].w[0] + 2592u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2592u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0031AA58; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0031AA58; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0031AA20; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0031A9E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031AA60; } }
    c.budget -= 1;
L_0031A9E8:
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A9F4u); st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0085(c, 284u, depth + 1u); else { c.pc = 0x00316750u; return; } if (c.pc != 0x0031A9F4u) [[unlikely]] return; }
L_0031A9F4:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 33u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    st8((c.r[2].w[0] + 2606u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld8((c.r[1].w[0] + 16008u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AA14u); set32(c.r[5], c.r[5].w[0] - 21584u);  if (depth < kMaxDepth) unit_0091(c, 305u, depth + 1u); else { c.pc = 0x00346A80u; return; } if (c.pc != 0x0031AA14u) [[unlikely]] return; }
L_0031AA14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031AA60; } }
    c.budget -= 1;
L_0031AA20:
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AA2Cu); st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0085(c, 284u, depth + 1u); else { c.pc = 0x00316750u; return; } if (c.pc != 0x0031AA2Cu) [[unlikely]] return; }
L_0031AA2C:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 9u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00320000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 11u);
    set32(c.r[6], c.r[6].w[0] - 21200u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AA4Cu); st8((c.r[2].w[0] + 2606u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0091(c, 341u, depth + 1u); else { c.pc = 0x003470E0u; return; } if (c.pc != 0x0031AA4Cu) [[unlikely]] return; }
L_0031AA4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031AA60; } }
    c.budget -= 1;
L_0031AA58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AA60u);  if (depth < kMaxDepth) unit_0085(c, 285u, depth + 1u); else { c.pc = 0x00316770u; return; } if (c.pc != 0x0031AA60u) [[unlikely]] return; }
L_0031AA60:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AA6Cu); set32(c.r[4], c.r[4].w[0] + 15536u);  if (depth < kMaxDepth) unit_0096(c, 257u, depth + 1u); else { c.pc = 0x0035B410u; return; } if (c.pc != 0x0031AA6Cu) [[unlikely]] return; }
L_0031AA6C:
    set32(c.r[3], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], 0u - 1u);  if (t) { goto L_0031AB08; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0031AB10; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0031AA90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031AB10; } }
L_0031AA90:
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[3], 0u + 25u);
    st8((c.r[1].w[0] + 15550u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2599u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0031AAC0; } }
    set32(c.r[4], 0u + 2u);
    st8((c.r[5].w[0] + 2591u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0031AB10; } }
L_0031AAC0:
    set32(c.r[3], 0u + 2u);
    st8((c.r[5].w[0] + 2591u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 40u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2593u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st32((c.r[3].w[0] + 2612u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2600u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2599u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 16012u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0031AB10; } }
    c.budget -= 1;
L_0031AB08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AB10u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0086(c, 379u, depth + 1u); else { c.pc = 0x0031AE50u; return; } if (c.pc != 0x0031AB10u) [[unlikely]] return; }
L_0031AB10:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031AB20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 7u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[4].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2589u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0031ABA0; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2606u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[6], c.r[4].w[0] + 2606u);  if (t) { goto L_0031ABA0; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0031AB70; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2592u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2592u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0031ABA0; } }
L_0031AB70:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[2].w[0] + 2590u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AB94u); st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0031AB94u) [[unlikely]] return; }
L_0031AB94:
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 15539u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0031ABA0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031ABB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 7u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    st64((c.r[29].w[0] + 32u), c.r[4].d[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2589u));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031AC80; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2606u));
    set32(c.r[3], 0u + 33u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[6], c.r[5].w[0] + 2606u);  if (t) { goto L_0031AC80; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0031AC50; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], c.r[29].w[0] + 44u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2592u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[16].d[0] = ld8((c.r[1].w[0] + 16008u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AC1Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 308u, depth + 1u); else { c.pc = 0x00346B00u; return; } if (c.pc != 0x0031AC1Cu) [[unlikely]] return; }
L_0031AC1C:
    set32(c.r[3], 0u + 346u);
    c.r[5].d[0] = ld16((c.r[29].w[0] + 44u));
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[4], c.r[4].w[0] + 14968u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[3], c.r[3].w[0] + 14972u);
    c.r[4].d[0] = ld16((c.r[29].w[0] + 46u));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_0031AC80; } }
L_0031AC50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.r[6].d[0] = ld8((c.r[1].w[0] + 16008u));
    set32(c.r[5], 0u + 346u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[4], c.r[4].w[0] + 14968u);
    set32(c.r[3], c.r[3].w[0] + 14972u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 12;
L_0031AC80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031AC90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 7u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    st64((c.r[29].w[0] + 24u), c.r[4].d[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2589u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031AD20; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2606u));
    set32(c.r[3], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[6], c.r[5].w[0] + 2606u);  if (t) { goto L_0031AD20; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031AD00; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 2589u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2590u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031ACF8u); st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0088(c, 342u, depth + 1u); else { c.pc = 0x00322EA0u; return; } if (c.pc != 0x0031ACF8u) [[unlikely]] return; }
L_0031ACF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031AD20; } }
L_0031AD00:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 76u);
    st8((c.r[2].w[0] + 2590u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AD20u); st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x0031AD20u) [[unlikely]] return; }
L_0031AD20:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031AD30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 7u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    st64((c.r[29].w[0] + 64u), c.r[4].d[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2589u));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031AE30; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2606u));
    set32(c.r[3], 0u + 9u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[6], c.r[5].w[0] + 2606u);  if (t) { goto L_0031AE30; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_0031AD80; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0031AE30; } }
L_0031AD80:
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], 0u + 55u);
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031ADA0u); st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008D(c, 61u, depth + 1u); else { c.pc = 0x00334DB0u; return; } if (c.pc != 0x0031ADA0u) [[unlikely]] return; }
L_0031ADA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031ADACu); set32(c.r[4], c.r[4].w[0] + 16014u);  if (depth < kMaxDepth) unit_0091(c, 345u, depth + 1u); else { c.pc = 0x003471B0u; return; } if (c.pc != 0x0031ADACu) [[unlikely]] return; }
L_0031ADAC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 16014u));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0031AE30; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[16], c.r[29].w[0] + 78u);
    set32(c.r[17], c.r[17].w[0] + 4928u);
    c.budget -= 4;
L_0031ADD0:
    set32(c.r[2], c.r[18].w[0] + 1u);
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031ADE4u); set32(c.r[5], c.r[17].w[0] + 20u);  if (depth < kMaxDepth) unit_0091(c, 369u, depth + 1u); else { c.pc = 0x00347630u; return; } if (c.pc != 0x0031ADE4u) [[unlikely]] return; }
L_0031ADE4:
    set32(c.r[2], c.r[18].w[0] + 1u);
    set32(c.r[5], 0u + 2u);
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031ADF8u); set32(c.r[6], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_0091(c, 360u, depth + 1u); else { c.pc = 0x003473F0u; return; } if (c.pc != 0x0031ADF8u) [[unlikely]] return; }
L_0031ADF8:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 76u));
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[5], c.r[17].w[0] + 89u);
    st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AE18u); st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0091(c, 376u, depth + 1u); else { c.pc = 0x00347790u; return; } if (c.pc != 0x0031AE18u) [[unlikely]] return; }
L_0031AE18:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 16014u));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 346u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031ADD0u | kUnwind; return; } goto L_0031ADD0; } }
L_0031AE30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0031AE50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0031AE88; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], 0u + 3u);
    st8((c.r[2].w[0] + 2589u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2590u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0031AEB0; } }
L_0031AE88:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], 0u + 3u);
    st8((c.r[2].w[0] + 2589u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2590u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
L_0031AEB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AEB8u);  if (depth < kMaxDepth) unit_0088(c, 342u, depth + 1u); else { c.pc = 0x00322EA0u; return; } if (c.pc != 0x0031AEB8u) [[unlikely]] return; }
L_0031AEB8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 255u);
    set32(c.r[4], 0u + 76u);
    st8((c.r[2].w[0] + 2578u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 9836u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st16((c.r[2].w[0] + 2580u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 3418u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AEECu); st8((c.r[2].w[0] + 3416u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x0031AEECu) [[unlikely]] return; }
L_0031AEEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AEF4u);  if (depth < kMaxDepth) unit_008B(c, 220u, depth + 1u); else { c.pc = 0x0032EEE0u; return; } if (c.pc != 0x0031AEF4u) [[unlikely]] return; }
L_0031AEF4:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 2u);
    st8((c.r[3].w[0] + 2529u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031AF10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AF20u);  if (depth < kMaxDepth) unit_008D(c, 63u, depth + 1u); else { c.pc = 0x00334DF0u; return; } if (c.pc != 0x0031AF20u) [[unlikely]] return; }
L_0031AF20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AF28u);  if (depth < kMaxDepth) unit_0088(c, 346u, depth + 1u); else { c.pc = 0x00322EF0u; return; } if (c.pc != 0x0031AF28u) [[unlikely]] return; }
L_0031AF28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031AF60; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] - 2304u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2590u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AF54u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031AF54u) [[unlikely]] return; }
L_0031AF54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031AF68; } }
    c.budget -= 1;
L_0031AF60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031AF68; } }
L_0031AF68:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031AF80:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] - 2272u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2591u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00318000u < 16384u) { entry = entries_0086[(t - 0x00318000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0031AFB0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] - 2256u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2592u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00318000u < 16384u) { entry = entries_0086[(t - 0x00318000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0031AFE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], c.r[4].w[0] + 2593u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 2593u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0031B0B8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031B090; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031B018; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031B0E0; } }
L_0031B018:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2597u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2600u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 8273u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 8279u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 8276u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 8144u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 9845u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2600u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B06Cu); st8((c.r[2].w[0] + 3417u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x0031B06Cu) [[unlikely]] return; }
L_0031B06C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 15536u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B080u); set32(c.r[6], 0u + 56u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0031B080u) [[unlikely]] return; }
L_0031B080:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B08Cu); set32(c.r[4], c.r[4].w[0] + 15536u);  if (depth < kMaxDepth) unit_0095(c, 53u, depth + 1u); else { c.pc = 0x00354A10u; return; } if (c.pc != 0x0031B08Cu) [[unlikely]] return; }
L_0031B08C:
    c.budget -= 1;
L_0031B090:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 16u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2593u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B0ACu); st8((c.r[3].w[0] + 2593u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 83u, depth + 1u); else { c.pc = 0x00334FC0u; return; } if (c.pc != 0x0031B0ACu) [[unlikely]] return; }
L_0031B0AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031B0E0; } }
    c.budget -= 1;
L_0031B0B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B0C0u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x0031B0C0u) [[unlikely]] return; }
L_0031B0C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031B0E0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2592u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 2592u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2593u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_0031B0E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031B0F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B100u);  if (depth < kMaxDepth) unit_0088(c, 404u, depth + 1u); else { c.pc = 0x003236C0u; return; } if (c.pc != 0x0031B100u) [[unlikely]] return; }
L_0031B100:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031B1F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B110u);  if (depth < kMaxDepth) unit_0089(c, 28u, depth + 1u); else { c.pc = 0x00324360u; return; } if (c.pc != 0x0031B110u) [[unlikely]] return; }
L_0031B110:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031B1F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B120u);  if (depth < kMaxDepth) unit_0088(c, 402u, depth + 1u); else { c.pc = 0x00323670u; return; } if (c.pc != 0x0031B120u) [[unlikely]] return; }
L_0031B120:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031B138; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B130u);  if (depth < kMaxDepth) unit_0088(c, 404u, depth + 1u); else { c.pc = 0x003236C0u; return; } if (c.pc != 0x0031B130u) [[unlikely]] return; }
L_0031B130:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031B1F0; } }
L_0031B138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B140u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x0031B140u) [[unlikely]] return; }
L_0031B140:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0031B180; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B150u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0031B150u) [[unlikely]] return; }
L_0031B150:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], 0u + 30u);
    set32(c.r[4], 0u + 2u);
    st8((c.r[3].w[0] + 2600u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st32((c.r[3].w[0] + 2612u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2593u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0031B1F0; } }
L_0031B180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B188u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x0031B188u) [[unlikely]] return; }
L_0031B188:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0031B1D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B198u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0031B198u) [[unlikely]] return; }
L_0031B198:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], 0u + 30u);
    st8((c.r[3].w[0] + 2597u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2600u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st32((c.r[3].w[0] + 2612u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2593u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0031B1F0; } }
    c.budget -= 1;
L_0031B1D0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B1E4u); set32(c.r[4], c.r[2].w[0] + 2597u);  if (depth < kMaxDepth) unit_008D(c, 20u, depth + 1u); else { c.pc = 0x003341D0u; return; } if (c.pc != 0x0031B1E4u) [[unlikely]] return; }
L_0031B1E4:
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2597u));
    st8((c.r[4].w[0] + 9846u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0031B1F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031B200:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 2612u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0; st32((c.r[4].w[0] + 2612u), c.r[3].w[0]);  if (t) { goto L_0031B2B0; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2597u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0031B2A0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031B288; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031B248; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031B2B0; } }
L_0031B248:
    st8((c.r[5].w[0] + 8278u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 8277u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8274u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_0031B278; } }
    st8((c.r[4].w[0] + 2592u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2593u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0031B2B0; } }
    c.budget -= 1;
L_0031B278:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B280u);  if (depth < kMaxDepth) unit_0086(c, 469u, depth + 1u); else { c.pc = 0x0031BB30u; return; } if (c.pc != 0x0031B280u) [[unlikely]] return; }
L_0031B280:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031B2B0; } }
L_0031B288:
    set32(c.r[3], 0u + 6u);
    st8((c.r[5].w[0] + 2592u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2593u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0031B2B0; } }
    c.budget -= 1;
L_0031B2A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B2A8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 233u, depth + 1u); else { c.pc = 0x0031E5C0u; return; } if (c.pc != 0x0031B2A8u) [[unlikely]] return; }
L_0031B2A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031B2B0; } }
L_0031B2B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031B2C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2593u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[5].w[0] + 2593u);  if (t) { goto L_0031B3E8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0031B3D8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031B328; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031B300; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031B3F8; } }
L_0031B300:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 15u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 118u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B31Cu); st32((c.r[2].w[0] + 2612u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x003788A0u; return; } if (c.pc != 0x0031B31Cu) [[unlikely]] return; }
L_0031B31C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031B3F8; } }
    c.budget -= 1;
L_0031B328:
    set32(c.r[3], ld32((c.r[5].w[0] + 2612u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[5].w[0] + 2612u), c.r[3].w[0]);  if (t) { goto L_0031B3F8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[4], c.r[4].w[0] - 5456u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 10380u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2593u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B35Cu); st8((c.r[3].w[0] + 2593u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0031B35Cu) [[unlikely]] return; }
L_0031B35C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] - 5456u);
    c.budget -= 3;
L_0031B368:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[4].w[0] + 2u);
    st16((c.r[3].w[0] + 346u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[4].w[0] + 3u);
    st16((c.r[3].w[0] + 692u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[4].w[0] + 4u);
    st16((c.r[3].w[0] + 1038u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[4].w[0] + 5u);
    st16((c.r[3].w[0] + 1384u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[4].w[0] + 6u);
    st16((c.r[3].w[0] + 1730u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] + 6u);
    c.r[2].d[0] = c.r[4].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 2076u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031B368u | kUnwind; return; } goto L_0031B368; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B3B0u);  if (depth < kMaxDepth) unit_0085(c, 284u, depth + 1u); else { c.pc = 0x00316750u; return; } if (c.pc != 0x0031B3B0u) [[unlikely]] return; }
L_0031B3B0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 10u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00320000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 119u);
    set32(c.r[6], c.r[6].w[0] - 17104u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B3D0u); st8((c.r[2].w[0] + 2606u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0091(c, 395u, depth + 1u); else { c.pc = 0x00347A20u; return; } if (c.pc != 0x0031B3D0u) [[unlikely]] return; }
L_0031B3D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031B3F8; } }
L_0031B3D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B3E0u);  if (depth < kMaxDepth) unit_0085(c, 285u, depth + 1u); else { c.pc = 0x00316770u; return; } if (c.pc != 0x0031B3E0u) [[unlikely]] return; }
L_0031B3E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031B3F8; } }
L_0031B3E8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B3F4u); st8((c.r[5].w[0] + 8274u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0086(c, 469u, depth + 1u); else { c.pc = 0x0031BB30u; return; } if (c.pc != 0x0031B3F4u) [[unlikely]] return; }
L_0031B3F4:
    c.budget -= 1;
L_0031B3F8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031B410:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B420u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x0031B420u) [[unlikely]] return; }
L_0031B420:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0031B460; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B430u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0031B430u) [[unlikely]] return; }
L_0031B430:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], 0u + 30u);
    set32(c.r[4], 0u + 5u);
    st8((c.r[3].w[0] + 2600u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st32((c.r[3].w[0] + 2612u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2593u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0031B550; } }
L_0031B460:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B468u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x0031B468u) [[unlikely]] return; }
L_0031B468:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0031B4C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B478u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0031B478u) [[unlikely]] return; }
L_0031B478:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2593u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B498u); st8((c.r[2].w[0] + 8273u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x0031B498u) [[unlikely]] return; }
L_0031B498:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 15536u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B4ACu); set32(c.r[6], 0u + 56u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0031B4ACu) [[unlikely]] return; }
L_0031B4AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], c.r[4].w[0] + 15536u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B4C0u); st8((c.r[1].w[0] + 15543u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0095(c, 53u, depth + 1u); else { c.pc = 0x00354A10u; return; } if (c.pc != 0x0031B4C0u) [[unlikely]] return; }
L_0031B4C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031B550; } }
L_0031B4C8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 16018u));
    set32(c.r[6], 0u + 2u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[4], c.r[3].w[0] + 8278u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B4E8u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_008D(c, 20u, depth + 1u); else { c.pc = 0x003341D0u; return; } if (c.pc != 0x0031B4E8u) [[unlikely]] return; }
L_0031B4E8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2601u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 8278u)));
    set32(c.r[5], c.r[3].w[0] + 8277u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 8277u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0031B520; } }
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 2601u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 5;
L_0031B520:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 8278u)));
    set32(c.r[5], c.r[3].w[0] + 8277u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 8277u)));
    set32(c.r[3], c.r[3].w[0] + 5u);
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] - 4u);  if (t) { goto L_0031B550; } }
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2601u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
L_0031B550:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031B560:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 2612u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[4].w[0] + 2612u), c.r[3].w[0]);  if (t) { goto L_0031B660; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[4], 0u + 346u);
    set32(c.r[3], c.r[3].w[0] - 5436u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 8278u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.r[5].d[0] = ld8((c.r[3].w[0]));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_0031B648; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 5696u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00318000u < 16384u) { entry = entries_0086[(t - 0x00318000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0031B5C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[3], c.r[3].w[0] - 5456u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[4], c.r[3].w[0] + c.r[7].w[0]);
    c.r[4].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[3], 0u + 2u);
    st8((c.r[1].w[0] + 16016u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[6].w[0] + 2591u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2593u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2594u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0031B660; } }
    c.budget -= 1;
L_0031B600:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[3], c.r[3].w[0] - 5456u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[4], c.r[3].w[0] + c.r[7].w[0]);
    c.r[4].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[3], 0u + 1u);
    st8((c.r[1].w[0] + 16016u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[6].w[0] + 2591u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2593u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2594u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 8276u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0031B660; } }
    c.budget -= 1;
L_0031B648:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] - 2224u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B660u); c.r[4].d[0] = ld8((c.r[2].w[0]));  if (depth < kMaxDepth) unit_0087(c, 227u, depth + 1u); else { c.pc = 0x0031E480u; return; } if (c.pc != 0x0031B660u) [[unlikely]] return; }
L_0031B660:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031B670:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 2593u));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[7], c.r[6].w[0] + 2593u);  if (t) { goto L_0031B9D0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 5648u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00318000u < 16384u) { entry = entries_0086[(t - 0x00318000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0031B6A8:
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 15u);
    st8((c.r[3].w[0] + 2598u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 10312u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 3417u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 2612u), c.r[4].w[0]);  if (t) { goto L_0031B9D0; } }
    c.budget -= 1;
L_0031B6E0:
    set32(c.r[3], ld32((c.r[6].w[0] + 2612u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[6].w[0] + 2612u), c.r[3].w[0]);  if (t) { goto L_0031B9D0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2593u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2593u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0031B9D0; } }
    c.budget -= 1;
L_0031B708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B710u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x0031B710u) [[unlikely]] return; }
L_0031B710:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031B758; } }
    set32(c.r[7], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[6], 0u + 30u);
    set32(c.r[3], 0u + 2u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld8((c.r[7].w[0] + 2593u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[7].w[0] + 2593u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st32((c.r[2].w[0] + 2612u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B74Cu); st8((c.r[2].w[0] + 2600u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0031B74Cu) [[unlikely]] return; }
L_0031B74C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031B9D0; } }
    c.budget -= 1;
L_0031B758:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B760u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x0031B760u) [[unlikely]] return; }
L_0031B760:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031B7A8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 3u);
    st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2593u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2600u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 3417u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B7A0u); st8((c.r[2].w[0] + 2600u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0031B7A0u) [[unlikely]] return; }
L_0031B7A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031B9D0; } }
L_0031B7A8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B7BCu); set32(c.r[4], c.r[2].w[0] + 2598u);  if (depth < kMaxDepth) unit_008D(c, 20u, depth + 1u); else { c.pc = 0x003341D0u; return; } if (c.pc != 0x0031B7BCu) [[unlikely]] return; }
L_0031B7BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031B9D0; } }
    c.budget -= 1;
L_0031B7C8:
    set32(c.r[3], ld32((c.r[6].w[0] + 2612u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[6].w[0] + 2612u), c.r[3].w[0]);  if (t) { goto L_0031B9D0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2593u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 2593u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 3417u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B7FCu); st8((c.r[2].w[0] + 2600u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0085(c, 284u, depth + 1u); else { c.pc = 0x00316750u; return; } if (c.pc != 0x0031B7FCu) [[unlikely]] return; }
L_0031B7FC:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 19u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    st8((c.r[2].w[0] + 2606u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2598u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 10312u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[2].w[0] + 10312u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B82Cu); set32(c.r[5], c.r[5].w[0] - 17936u);  if (depth < kMaxDepth) unit_0093(c, 67u, depth + 1u); else { c.pc = 0x0034C5F0u; return; } if (c.pc != 0x0031B82Cu) [[unlikely]] return; }
L_0031B82C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2597u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0031B9D0; } }
L_0031B838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B840u);  if (depth < kMaxDepth) unit_0085(c, 285u, depth + 1u); else { c.pc = 0x00316770u; return; } if (c.pc != 0x0031B840u) [[unlikely]] return; }
L_0031B840:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031B9D0; } }
L_0031B848:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B850u);  if (depth < kMaxDepth) unit_0088(c, 404u, depth + 1u); else { c.pc = 0x003236C0u; return; } if (c.pc != 0x0031B850u) [[unlikely]] return; }
L_0031B850:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031B9D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B860u);  if (depth < kMaxDepth) unit_0088(c, 402u, depth + 1u); else { c.pc = 0x00323670u; return; } if (c.pc != 0x0031B860u) [[unlikely]] return; }
L_0031B860:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031B878; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B870u);  if (depth < kMaxDepth) unit_0088(c, 404u, depth + 1u); else { c.pc = 0x003236C0u; return; } if (c.pc != 0x0031B870u) [[unlikely]] return; }
L_0031B870:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031B9D0; } }
L_0031B878:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B88Cu); set32(c.r[4], c.r[2].w[0] + 2597u);  if (depth < kMaxDepth) unit_008D(c, 20u, depth + 1u); else { c.pc = 0x003341D0u; return; } if (c.pc != 0x0031B88Cu) [[unlikely]] return; }
L_0031B88C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B894u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x0031B894u) [[unlikely]] return; }
L_0031B894:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031B8F8; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[6].w[0] + 2597u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031B8E0; } }
    c.r[2].d[0] = ld8((c.r[6].w[0] + 2593u));
    set32(c.r[3], 0u + 30u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 3u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[6].w[0] + 2593u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B8D0u); st32((c.r[2].w[0] + 2612u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0031B8D0u) [[unlikely]] return; }
L_0031B8D0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2600u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0031B928; } }
L_0031B8E0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B8ECu); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0031B8ECu) [[unlikely]] return; }
L_0031B8EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031B928; } }
    c.budget -= 1;
L_0031B8F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B900u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x0031B900u) [[unlikely]] return; }
L_0031B900:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031B928; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[6], c.r[3].w[0] + 2597u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2597u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0031B928; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B928u); st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0031B928u) [[unlikely]] return; }
L_0031B928:
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2597u));
    set32(c.r[3], c.r[3].w[0] + 2u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 9846u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0031B9D0; } }
    c.budget -= 1;
L_0031B940:
    set32(c.r[3], ld32((c.r[6].w[0] + 2612u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[6].w[0] + 2612u), c.r[3].w[0]);  if (t) { goto L_0031B9D0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2593u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B964u); st8((c.r[3].w[0] + 2593u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0085(c, 284u, depth + 1u); else { c.pc = 0x00316750u; return; } if (c.pc != 0x0031B964u) [[unlikely]] return; }
L_0031B964:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 19u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    st8((c.r[2].w[0] + 2606u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 10312u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[2].w[0] + 10312u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B98Cu); set32(c.r[5], c.r[5].w[0] - 17936u);  if (depth < kMaxDepth) unit_0093(c, 67u, depth + 1u); else { c.pc = 0x0034C5F0u; return; } if (c.pc != 0x0031B98Cu) [[unlikely]] return; }
L_0031B98C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031B9D0; } }
    c.budget -= 1;
L_0031B998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B9A0u);  if (depth < kMaxDepth) unit_0085(c, 285u, depth + 1u); else { c.pc = 0x00316770u; return; } if (c.pc != 0x0031B9A0u) [[unlikely]] return; }
L_0031B9A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031B9D0; } }
L_0031B9A8:
    set32(c.r[3], 0u + 1u);
    st8((c.r[6].w[0] + 2592u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2593u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2600u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 3416u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 3417u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
L_0031B9D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031B9E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031B9F0:
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0] + 8u), c.r[4].d[0]);
    set32(c.r[3], 0u + 7u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2589u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031BA68; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2606u));
    set32(c.r[3], 0u + 19u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[6], c.r[5].w[0] + 2606u);  if (t) { goto L_0031BA68; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0031BA50; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 2u);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2593u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 2593u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3417u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0031BA68; } }
    c.budget -= 1;
L_0031BA50:
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2592u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 2592u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2593u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_0031BA68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031BA70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2589u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2590u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BAACu); st8((c.r[2].w[0] + 2593u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0088(c, 419u, depth + 1u); else { c.pc = 0x00323870u; return; } if (c.pc != 0x0031BAACu) [[unlikely]] return; }
L_0031BAAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BAB4u);  if (depth < kMaxDepth) unit_0088(c, 342u, depth + 1u); else { c.pc = 0x00322EA0u; return; } if (c.pc != 0x0031BAB4u) [[unlikely]] return; }
L_0031BAB4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 5456u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BAC8u); set32(c.r[6], 0u + 10380u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0031BAC8u) [[unlikely]] return; }
L_0031BAC8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    st8((c.r[1].w[0] + 16016u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], 0u + 1u);
    st8((c.r[2].w[0] + 8274u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 8275u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 8276u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BAF8u); st8((c.r[2].w[0] + 10312u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0089(c, 146u, depth + 1u); else { c.pc = 0x00325930u; return; } if (c.pc != 0x0031BAF8u) [[unlikely]] return; }
L_0031BAF8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BB0Cu); set32(c.r[5], c.r[5].w[0] - 17440u);  if (depth < kMaxDepth) unit_0091(c, 357u, depth + 1u); else { c.pc = 0x00347370u; return; } if (c.pc != 0x0031BB0Cu) [[unlikely]] return; }
L_0031BB0C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BB1Cu); set32(c.r[5], c.r[5].w[0] - 17264u);  if (depth < kMaxDepth) unit_0093(c, 76u, depth + 1u); else { c.pc = 0x0034C6F0u; return; } if (c.pc != 0x0031BB1Cu) [[unlikely]] return; }
L_0031BB1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031BB30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u + 4u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 2589u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2590u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2593u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 8273u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 8277u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 8278u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BB90u); st8((c.r[2].w[0] + 2600u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008D(c, 15u, depth + 1u); else { c.pc = 0x00334150u; return; } if (c.pc != 0x0031BB90u) [[unlikely]] return; }
L_0031BB90:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 15536u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BBA4u); set32(c.r[6], 0u + 56u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0031BBA4u) [[unlikely]] return; }
L_0031BBA4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], c.r[4].w[0] + 15536u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BBBCu); st8((c.r[1].w[0] + 15543u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0095(c, 53u, depth + 1u); else { c.pc = 0x00354A10u; return; } if (c.pc != 0x0031BBBCu) [[unlikely]] return; }
L_0031BBBC:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 118u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BBCCu); st8((c.r[2].w[0] + 3424u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_008C(c, 209u, depth + 1u); else { c.pc = 0x003338E0u; return; } if (c.pc != 0x0031BBCCu) [[unlikely]] return; }
L_0031BBCC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031BBE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 7u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 32u), c.r[4].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 2589u));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031BC78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BC0Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0089(c, 146u, depth + 1u); else { c.pc = 0x00325930u; return; } if (c.pc != 0x0031BC0Cu) [[unlikely]] return; }
L_0031BC0C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0031BC60; } }
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BC28u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_0091(c, 360u, depth + 1u); else { c.pc = 0x003473F0u; return; } if (c.pc != 0x0031BC28u) [[unlikely]] return; }
L_0031BC28:
    set32(c.r[3], 0u + 346u);
    c.r[5].d[0] = ld16((c.r[29].w[0] + 44u));
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[4], c.r[4].w[0] + 4584u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[3], c.r[3].w[0] + 4588u);
    c.r[4].d[0] = ld16((c.r[29].w[0] + 46u));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_0031BC78; } }
    c.budget -= 1;
L_0031BC60:
    set32(c.r[3], 0u + 346u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[3], c.r[3].w[0] + 4584u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 6;
L_0031BC78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031BC90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 7u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[4].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 2589u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031BD18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BCB8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0089(c, 146u, depth + 1u); else { c.pc = 0x00325930u; return; } if (c.pc != 0x0031BCB8u) [[unlikely]] return; }
L_0031BCB8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[2].w[0] - 1u);  if (t) { goto L_0031BCF0; } }
    set32(c.r[3], 0u + 346u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4928u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[2].w[0] + 16u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BCE4u); set32(c.r[5], c.r[2].w[0] + 18u);  if (depth < kMaxDepth) unit_0093(c, 79u, depth + 1u); else { c.pc = 0x0034C770u; return; } if (c.pc != 0x0031BCE4u) [[unlikely]] return; }
L_0031BCE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031BD18; } }
    c.budget -= 1;
L_0031BCF0:
    set32(c.r[3], 0u + 346u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[4], c.r[4].w[0] + 4946u);
    set32(c.r[3], c.r[3].w[0] + 4944u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 10;
L_0031BD18:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031BD30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 7u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    st64((c.r[29].w[0] + 48u), c.r[4].d[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2589u));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 49u)));  if (t) { goto L_0031BEA8; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2606u));
    set32(c.r[7], c.r[5].w[0] + 2606u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0031BEA8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 48u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0031BDD0; } }
    c.r[4].d[0] = c.r[6].d[0] << 56;
    set32(c.r[3], 0u + 11u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031BDC0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_0031BDA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031BEA8; } }
L_0031BDA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BDA8u); set32(c.r[4], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_0092(c, 309u, depth + 1u); else { c.pc = 0x0034ABD0u; return; } if (c.pc != 0x0031BDA8u) [[unlikely]] return; }
L_0031BDA8:
    c.r[6].d[0] = ld16((c.r[29].w[0] + 60u));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BDB8u); c.r[5].d[0] = 0ull | 65440ull;  if (depth < kMaxDepth) unit_008C(c, 201u, depth + 1u); else { c.pc = 0x003336A0u; return; } if (c.pc != 0x0031BDB8u) [[unlikely]] return; }
L_0031BDB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031BEA8; } }
L_0031BDC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BDC8u);  if (depth < kMaxDepth) unit_008C(c, 207u, depth + 1u); else { c.pc = 0x00333870u; return; } if (c.pc != 0x0031BDC8u) [[unlikely]] return; }
L_0031BDC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031BEA8; } }
L_0031BDD0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0031BEA8; } }
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2593u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BDF0u); st8((c.r[3].w[0] + 2593u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008C(c, 209u, depth + 1u); else { c.pc = 0x003338E0u; return; } if (c.pc != 0x0031BDF0u) [[unlikely]] return; }
L_0031BDF0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BDFCu); set32(c.r[4], c.r[4].w[0] + 16018u);  if (depth < kMaxDepth) unit_0091(c, 399u, depth + 1u); else { c.pc = 0x00347AF0u; return; } if (c.pc != 0x0031BDFCu) [[unlikely]] return; }
L_0031BDFC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 16018u));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0031BEA8; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[16], c.r[16].w[0] - 5456u);
    c.budget -= 2;
L_0031BE18:
    set32(c.r[2], c.r[17].w[0] + 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BE2Cu); set32(c.r[5], c.r[16].w[0] + 20u);  if (depth < kMaxDepth) unit_0091(c, 413u, depth + 1u); else { c.pc = 0x00347D50u; return; } if (c.pc != 0x0031BE2Cu) [[unlikely]] return; }
L_0031BE2C:
    set32(c.r[2], c.r[17].w[0] + 1u);
    set32(c.r[5], c.r[16].w[0] + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BE3Cu); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0091(c, 406u, depth + 1u); else { c.pc = 0x00347BD0u; return; } if (c.pc != 0x0031BE3Cu) [[unlikely]] return; }
L_0031BE3C:
    set32(c.r[2], c.r[17].w[0] + 1u);
    set32(c.r[5], c.r[16].w[0] + 24u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BE4Cu); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0091(c, 420u, depth + 1u); else { c.pc = 0x00347EB0u; return; } if (c.pc != 0x0031BE4Cu) [[unlikely]] return; }
L_0031BE4C:
    set32(c.r[2], c.r[17].w[0] + 1u);
    set32(c.r[5], c.r[16].w[0] + 4u);
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[6], c.r[16].w[0] + 8u);
    set32(c.r[7], c.r[16].w[0] + 12u);
    set32(c.r[8], c.r[16].w[0] + 10u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BE6Cu); set32(c.r[9], c.r[16].w[0] + 14u);  if (depth < kMaxDepth) unit_0092(c, 11u, depth + 1u); else { c.pc = 0x003481A0u; return; } if (c.pc != 0x0031BE6Cu) [[unlikely]] return; }
L_0031BE6C:
    set32(c.r[2], c.r[17].w[0] + 1u);
    set32(c.r[5], c.r[16].w[0] + 21u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BE7Cu); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0092(c, 97u, depth + 1u); else { c.pc = 0x00348BE0u; return; } if (c.pc != 0x0031BE7Cu) [[unlikely]] return; }
L_0031BE7C:
    set32(c.r[2], c.r[17].w[0] + 1u);
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BE90u); set32(c.r[6], c.r[16].w[0] + 18u);  if (depth < kMaxDepth) unit_0093(c, 146u, depth + 1u); else { c.pc = 0x0034CE10u; return; } if (c.pc != 0x0031BE90u) [[unlikely]] return; }
L_0031BE90:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 16018u));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 346u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031BE18u | kUnwind; return; } goto L_0031BE18; } }
L_0031BEA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0031BEC0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] - 2208u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2592u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00318000u < 16384u) { entry = entries_0086[(t - 0x00318000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0031BEF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], c.r[4].w[0] + 2593u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 2593u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031BF58; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031BF20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031BF60; } }
L_0031BF20:
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BF2Cu); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0085(c, 284u, depth + 1u); else { c.pc = 0x00316750u; return; } if (c.pc != 0x0031BF2Cu) [[unlikely]] return; }
L_0031BF2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BF34u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0089(c, 146u, depth + 1u); else { c.pc = 0x00325930u; return; } if (c.pc != 0x0031BF34u) [[unlikely]] return; }
L_0031BF34:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[6], 0u + 11u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[5], c.r[5].w[0] - 14208u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BF50u); st8((c.r[3].w[0] + 2606u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (depth < kMaxDepth) unit_0092(c, 25u, depth + 1u); else { c.pc = 0x00348360u; return; } if (c.pc != 0x0031BF50u) [[unlikely]] return; }
L_0031BF50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031BF60; } }
L_0031BF58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BF60u);  if (depth < kMaxDepth) unit_0085(c, 285u, depth + 1u); else { c.pc = 0x00316770u; return; } if (c.pc != 0x0031BF60u) [[unlikely]] return; }
L_0031BF60:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031BF70:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[4], 0u + 2u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BF98u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0089(c, 146u, depth + 1u); else { c.pc = 0x00325930u; return; } if (c.pc != 0x0031BF98u) [[unlikely]] return; }
L_0031BF98:
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = ld8((c.r[6].w[0] + 2593u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], c.r[6].w[0] + 2593u);  if (t) { [[clang::musttail]] return unit_0087(c, 6u, depth); } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { [[clang::musttail]] return unit_0087(c, 4u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031BFF8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031BFD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0087(c, 20u, depth); } }
L_0031BFD0:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 15u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 118u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BFECu); st32((c.r[2].w[0] + 2612u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x003788A0u; return; } if (c.pc != 0x0031BFECu) [[unlikely]] return; }
L_0031BFEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0087(c, 20u, depth); } }
    c.budget -= 1;
L_0031BFF8:
    set32(c.r[3], ld32((c.r[6].w[0] + 2612u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 2;
    [[clang::musttail]] return unit_0087(c, 1u, depth);
}

}
