#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_006C[4096] = {
    1, 2, 0, 3, 4, 0, 5, 6, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0,
    0, 10, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0,
    15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 17, 18, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 27, 0, 28, 29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 0,
    34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0,
    0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 58, 0,
    0, 59, 0, 0, 60, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 65,
    66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0,
    0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 80, 0, 0, 81, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 86, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 0, 0, 91, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0,
    94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 100, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 103, 104, 0, 105, 0, 0, 106,
    0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 113, 0, 114, 0, 115, 0, 116, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0,
    0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0,
    0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 127, 0, 128, 0, 129, 0, 0, 130, 0, 131, 0, 0, 132, 0, 0, 0, 0, 133, 0, 134, 0, 135,
    0, 0, 0, 136, 0, 137, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 142,
    0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 150, 0, 151, 0, 0, 0,
    152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0,
    164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 168, 0, 169, 0,
    170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0,
    0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0,
    0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0,
    0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210,
    0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0,
    223, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0,
    227, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0,
    235, 0, 236, 0, 237, 0, 238, 0, 0, 0, 0, 0, 0, 0, 239, 0, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 242,
    0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 249, 0, 250, 0, 251, 0, 252, 0, 253, 0, 254, 0, 0, 0, 0, 0,
    255, 0, 0, 0, 0, 0, 0, 256, 0, 0, 257, 0, 258, 0, 259, 0, 260, 0, 261, 0, 262, 0, 263, 0, 264, 0, 265, 0, 266, 0, 267, 0,
    268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 270, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 274, 0, 275, 0, 276,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 288, 0,
    0, 289, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293,
    0, 294, 0, 0, 0, 0, 0, 295, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 298, 0, 0, 0, 299, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 301, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0,
    0, 304, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 312, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0,
    0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0,
    326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 328, 0, 0, 0,
    329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330,
    0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 332, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    334, 0, 335, 0, 336, 0, 337, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 342, 0, 343, 0, 344, 0, 0, 0,
    0, 345, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 349, 0, 350, 0,
    351, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0,
    354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 359, 0, 0, 0, 0,
    0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 365, 0, 0, 0, 0, 366, 0, 0, 367, 0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 372, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 375,
    0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0,
    380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 384, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 387, 0, 388, 0, 389, 0, 390, 0, 391, 0, 392, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0,
    0, 0, 394, 0, 0, 395, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 397, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405,
    0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 414, 0,
    0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0,
    418, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 425, 0, 0,
    0, 426, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    438, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0,
    0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 445, 0, 0, 0, 446, 0, 0, 447, 0, 0, 0, 0, 0, 448, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 452, 0, 0, 0, 453, 0, 0, 454, 0, 0, 0,
    0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 458,
    0, 0, 0, 459, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0,
    463, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 466, 0, 0, 0, 467, 468, 0, 0, 0, 0, 0,
    0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 471, 0, 472, 0, 473, 0, 474, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    476, 0, 0, 0, 477, 0, 0, 0, 0, 478, 0, 0, 479, 0, 480, 0, 481, 0, 482, 0, 483, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0,
    485, 0, 0, 0, 0, 486, 0, 0, 487, 0, 488, 0, 489, 0, 490, 0, 491, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 493, 0, 0, 494,
    0, 0, 495, 0, 496, 0, 497, 0, 498, 0, 499, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0,
};

void unit_006C(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002B0000;
    case 2u: goto L_002B0004;
    case 3u: goto L_002B000C;
    case 4u: goto L_002B0010;
    case 5u: goto L_002B0018;
    case 6u: goto L_002B001C;
    case 7u: goto L_002B0040;
    case 8u: goto L_002B004C;
    case 9u: goto L_002B0064;
    case 10u: goto L_002B0084;
    case 11u: goto L_002B008C;
    case 12u: goto L_002B00BC;
    case 13u: goto L_002B00D0;
    case 14u: goto L_002B00E0;
    case 15u: goto L_002B0100;
    case 16u: goto L_002B0134;
    case 17u: goto L_002B0138;
    case 18u: goto L_002B013C;
    case 19u: goto L_002B0144;
    case 20u: goto L_002B0160;
    case 21u: goto L_002B0244;
    case 22u: goto L_002B0258;
    case 23u: goto L_002B0294;
    case 24u: goto L_002B02C0;
    case 25u: goto L_002B02D0;
    case 26u: goto L_002B02E0;
    case 27u: goto L_002B0314;
    case 28u: goto L_002B031C;
    case 29u: goto L_002B0320;
    case 30u: goto L_002B0344;
    case 31u: goto L_002B0350;
    case 32u: goto L_002B0358;
    case 33u: goto L_002B0364;
    case 34u: goto L_002B0380;
    case 35u: goto L_002B03AC;
    case 36u: goto L_002B03C0;
    case 37u: goto L_002B03D4;
    case 38u: goto L_002B03F4;
    case 39u: goto L_002B0410;
    case 40u: goto L_002B0420;
    case 41u: goto L_002B04BC;
    case 42u: goto L_002B04F4;
    case 43u: goto L_002B0540;
    case 44u: goto L_002B059C;
    case 45u: goto L_002B05D0;
    case 46u: goto L_002B05EC;
    case 47u: goto L_002B0638;
    case 48u: goto L_002B0640;
    case 49u: goto L_002B0670;
    case 50u: goto L_002B06A0;
    case 51u: goto L_002B06C0;
    case 52u: goto L_002B06F0;
    case 53u: goto L_002B0724;
    case 54u: goto L_002B072C;
    case 55u: goto L_002B0734;
    case 56u: goto L_002B0764;
    case 57u: goto L_002B0770;
    case 58u: goto L_002B0778;
    case 59u: goto L_002B0784;
    case 60u: goto L_002B0790;
    case 61u: goto L_002B0798;
    case 62u: goto L_002B07B0;
    case 63u: goto L_002B07DC;
    case 64u: goto L_002B07F0;
    case 65u: goto L_002B07FC;
    case 66u: goto L_002B0800;
    case 67u: goto L_002B082C;
    case 68u: goto L_002B0830;
    case 69u: goto L_002B087C;
    case 70u: goto L_002B08A8;
    case 71u: goto L_002B08F4;
    case 72u: goto L_002B0908;
    case 73u: goto L_002B0924;
    case 74u: goto L_002B092C;
    case 75u: goto L_002B094C;
    case 76u: goto L_002B0970;
    case 77u: goto L_002B0998;
    case 78u: goto L_002B09B0;
    case 79u: goto L_002B09E4;
    case 80u: goto L_002B0A0C;
    case 81u: goto L_002B0A18;
    case 82u: goto L_002B0A20;
    case 83u: goto L_002B0A34;
    case 84u: goto L_002B0A58;
    case 85u: goto L_002B0A6C;
    case 86u: goto L_002B0A78;
    case 87u: goto L_002B0AA4;
    case 88u: goto L_002B0AB8;
    case 89u: goto L_002B0AD8;
    case 90u: goto L_002B0AE0;
    case 91u: goto L_002B0AF0;
    case 92u: goto L_002B0B40;
    case 93u: goto L_002B0B78;
    case 94u: goto L_002B0B80;
    case 95u: goto L_002B0BA0;
    case 96u: goto L_002B0BB4;
    case 97u: goto L_002B0BBC;
    case 98u: goto L_002B0BF0;
    case 99u: goto L_002B0C24;
    case 100u: goto L_002B0C2C;
    case 101u: goto L_002B0C34;
    case 102u: goto L_002B0C5C;
    case 103u: goto L_002B0C64;
    case 104u: goto L_002B0C68;
    case 105u: goto L_002B0C70;
    case 106u: goto L_002B0C7C;
    case 107u: goto L_002B0C84;
    case 108u: goto L_002B0CA0;
    case 109u: goto L_002B0CCC;
    case 110u: goto L_002B0CE0;
    case 111u: goto L_002B0D20;
    case 112u: goto L_002B0D34;
    case 113u: goto L_002B0D3C;
    case 114u: goto L_002B0D44;
    case 115u: goto L_002B0D4C;
    case 116u: goto L_002B0D54;
    case 117u: goto L_002B0D5C;
    case 118u: goto L_002B0D74;
    case 119u: goto L_002B0D98;
    case 120u: goto L_002B0DAC;
    case 121u: goto L_002B0DB8;
    case 122u: goto L_002B0DD0;
    case 123u: goto L_002B0DD8;
    case 124u: goto L_002B0DF0;
    case 125u: goto L_002B0E04;
    case 126u: goto L_002B0E20;
    case 127u: goto L_002B0E28;
    case 128u: goto L_002B0E30;
    case 129u: goto L_002B0E38;
    case 130u: goto L_002B0E44;
    case 131u: goto L_002B0E4C;
    case 132u: goto L_002B0E58;
    case 133u: goto L_002B0E6C;
    case 134u: goto L_002B0E74;
    case 135u: goto L_002B0E7C;
    case 136u: goto L_002B0E8C;
    case 137u: goto L_002B0E94;
    case 138u: goto L_002B0E9C;
    case 139u: goto L_002B0EA4;
    case 140u: goto L_002B0EC4;
    case 141u: goto L_002B0EE0;
    case 142u: goto L_002B0EFC;
    case 143u: goto L_002B0F0C;
    case 144u: goto L_002B0F38;
    case 145u: goto L_002B0F70;
    case 146u: goto L_002B0F9C;
    case 147u: goto L_002B0FB0;
    case 148u: goto L_002B0FC4;
    case 149u: goto L_002B0FE0;
    case 150u: goto L_002B0FE8;
    case 151u: goto L_002B0FF0;
    case 152u: goto L_002B1000;
    case 153u: goto L_002B1020;
    case 154u: goto L_002B1050;
    case 155u: goto L_002B1058;
    case 156u: goto L_002B1070;
    case 157u: goto L_002B10A0;
    case 158u: goto L_002B10EC;
    case 159u: goto L_002B1118;
    case 160u: goto L_002B1130;
    case 161u: goto L_002B1160;
    case 162u: goto L_002B1178;
    case 163u: goto L_002B11F0;
    case 164u: goto L_002B1200;
    case 165u: goto L_002B121C;
    case 166u: goto L_002B1250;
    case 167u: goto L_002B1260;
    case 168u: goto L_002B1270;
    case 169u: goto L_002B1278;
    case 170u: goto L_002B1280;
    case 171u: goto L_002B12F0;
    case 172u: goto L_002B1310;
    case 173u: goto L_002B1330;
    case 174u: goto L_002B1350;
    case 175u: goto L_002B139C;
    case 176u: goto L_002B13A8;
    case 177u: goto L_002B13B8;
    case 178u: goto L_002B13E8;
    case 179u: goto L_002B13F4;
    case 180u: goto L_002B1408;
    case 181u: goto L_002B1414;
    case 182u: goto L_002B143C;
    case 183u: goto L_002B144C;
    case 184u: goto L_002B145C;
    case 185u: goto L_002B1498;
    case 186u: goto L_002B14A8;
    case 187u: goto L_002B14B0;
    case 188u: goto L_002B14E0;
    case 189u: goto L_002B14F4;
    case 190u: goto L_002B151C;
    case 191u: goto L_002B1540;
    case 192u: goto L_002B15A0;
    case 193u: goto L_002B15CC;
    case 194u: goto L_002B15F4;
    case 195u: goto L_002B1628;
    case 196u: goto L_002B16A0;
    case 197u: goto L_002B16C8;
    case 198u: goto L_002B16F0;
    case 199u: goto L_002B171C;
    case 200u: goto L_002B1764;
    case 201u: goto L_002B1778;
    case 202u: goto L_002B178C;
    case 203u: goto L_002B17C4;
    case 204u: goto L_002B17D8;
    case 205u: goto L_002B1800;
    case 206u: goto L_002B1810;
    case 207u: goto L_002B183C;
    case 208u: goto L_002B1850;
    case 209u: goto L_002B1864;
    case 210u: goto L_002B187C;
    case 211u: goto L_002B1884;
    case 212u: goto L_002B18A0;
    case 213u: goto L_002B18B4;
    case 214u: goto L_002B18C4;
    case 215u: goto L_002B18F0;
    case 216u: goto L_002B1928;
    case 217u: goto L_002B1940;
    case 218u: goto L_002B1950;
    case 219u: goto L_002B1990;
    case 220u: goto L_002B19A0;
    case 221u: goto L_002B19C0;
    case 222u: goto L_002B19F0;
    case 223u: goto L_002B1A00;
    case 224u: goto L_002B1A24;
    case 225u: goto L_002B1A30;
    case 226u: goto L_002B1A60;
    case 227u: goto L_002B1A80;
    case 228u: goto L_002B1A90;
    case 229u: goto L_002B1AB4;
    case 230u: goto L_002B1AD0;
    case 231u: goto L_002B1B58;
    case 232u: goto L_002B1C54;
    case 233u: goto L_002B1C68;
    case 234u: goto L_002B1C78;
    case 235u: goto L_002B1C80;
    case 236u: goto L_002B1C88;
    case 237u: goto L_002B1C90;
    case 238u: goto L_002B1C98;
    case 239u: goto L_002B1CB8;
    case 240u: goto L_002B1CC0;
    case 241u: goto L_002B1CDC;
    case 242u: goto L_002B1CFC;
    case 243u: goto L_002B1D1C;
    case 244u: goto L_002B1D30;
    case 245u: goto L_002B1D38;
    case 246u: goto L_002B1D60;
    case 247u: goto L_002B1D70;
    case 248u: goto L_002B1DB8;
    case 249u: goto L_002B1DC0;
    case 250u: goto L_002B1DC8;
    case 251u: goto L_002B1DD0;
    case 252u: goto L_002B1DD8;
    case 253u: goto L_002B1DE0;
    case 254u: goto L_002B1DE8;
    case 255u: goto L_002B1E00;
    case 256u: goto L_002B1E1C;
    case 257u: goto L_002B1E28;
    case 258u: goto L_002B1E30;
    case 259u: goto L_002B1E38;
    case 260u: goto L_002B1E40;
    case 261u: goto L_002B1E48;
    case 262u: goto L_002B1E50;
    case 263u: goto L_002B1E58;
    case 264u: goto L_002B1E60;
    case 265u: goto L_002B1E68;
    case 266u: goto L_002B1E70;
    case 267u: goto L_002B1E78;
    case 268u: goto L_002B1E80;
    case 269u: goto L_002B1E98;
    case 270u: goto L_002B1EB4;
    case 271u: goto L_002B1EBC;
    case 272u: goto L_002B1ED4;
    case 273u: goto L_002B1EE0;
    case 274u: goto L_002B1EEC;
    case 275u: goto L_002B1EF4;
    case 276u: goto L_002B1EFC;
    case 277u: goto L_002B1F78;
    case 278u: goto L_002B1FC0;
    case 279u: goto L_002B1FE4;
    case 280u: goto L_002B2010;
    case 281u: goto L_002B2024;
    case 282u: goto L_002B2038;
    case 283u: goto L_002B2050;
    case 284u: goto L_002B2094;
    case 285u: goto L_002B20DC;
    case 286u: goto L_002B214C;
    case 287u: goto L_002B215C;
    case 288u: goto L_002B2178;
    case 289u: goto L_002B2184;
    case 290u: goto L_002B218C;
    case 291u: goto L_002B21A0;
    case 292u: goto L_002B21C4;
    case 293u: goto L_002B21FC;
    case 294u: goto L_002B2204;
    case 295u: goto L_002B221C;
    case 296u: goto L_002B2228;
    case 297u: goto L_002B2258;
    case 298u: goto L_002B2260;
    case 299u: goto L_002B2270;
    case 300u: goto L_002B22A0;
    case 301u: goto L_002B22A8;
    case 302u: goto L_002B22C0;
    case 303u: goto L_002B22EC;
    case 304u: goto L_002B2304;
    case 305u: goto L_002B230C;
    case 306u: goto L_002B2340;
    case 307u: goto L_002B2348;
    case 308u: goto L_002B2390;
    case 309u: goto L_002B23AC;
    case 310u: goto L_002B23D8;
    case 311u: goto L_002B2458;
    case 312u: goto L_002B2464;
    case 313u: goto L_002B2490;
    case 314u: goto L_002B24B0;
    case 315u: goto L_002B2510;
    case 316u: goto L_002B2558;
    case 317u: goto L_002B2570;
    case 318u: goto L_002B2594;
    case 319u: goto L_002B25C0;
    case 320u: goto L_002B25E4;
    case 321u: goto L_002B2610;
    case 322u: goto L_002B2634;
    case 323u: goto L_002B2640;
    case 324u: goto L_002B2650;
    case 325u: goto L_002B2674;
    case 326u: goto L_002B2680;
    case 327u: goto L_002B26DC;
    case 328u: goto L_002B26F0;
    case 329u: goto L_002B2700;
    case 330u: goto L_002B277C;
    case 331u: goto L_002B279C;
    case 332u: goto L_002B27BC;
    case 333u: goto L_002B27C4;
    case 334u: goto L_002B2800;
    case 335u: goto L_002B2808;
    case 336u: goto L_002B2810;
    case 337u: goto L_002B2818;
    case 338u: goto L_002B2830;
    case 339u: goto L_002B2864;
    case 340u: goto L_002B28AC;
    case 341u: goto L_002B28D0;
    case 342u: goto L_002B28E0;
    case 343u: goto L_002B28E8;
    case 344u: goto L_002B28F0;
    case 345u: goto L_002B2904;
    case 346u: goto L_002B2910;
    case 347u: goto L_002B293C;
    case 348u: goto L_002B2960;
    case 349u: goto L_002B2970;
    case 350u: goto L_002B2978;
    case 351u: goto L_002B2980;
    case 352u: goto L_002B29A0;
    case 353u: goto L_002B29E4;
    case 354u: goto L_002B2A00;
    case 355u: goto L_002B2A40;
    case 356u: goto L_002B2AB4;
    case 357u: goto L_002B2ABC;
    case 358u: goto L_002B2AE4;
    case 359u: goto L_002B2AEC;
    case 360u: goto L_002B2B08;
    case 361u: goto L_002B2B58;
    case 362u: goto L_002B2B68;
    case 363u: goto L_002B2BA4;
    case 364u: goto L_002B2BC8;
    case 365u: goto L_002B2C10;
    case 366u: goto L_002B2C24;
    case 367u: goto L_002B2C30;
    case 368u: goto L_002B2C38;
    case 369u: goto L_002B2C50;
    case 370u: goto L_002B2C88;
    case 371u: goto L_002B2CE8;
    case 372u: goto L_002B2CF0;
    case 373u: goto L_002B2D18;
    case 374u: goto L_002B2D6C;
    case 375u: goto L_002B2D7C;
    case 376u: goto L_002B2D90;
    case 377u: goto L_002B2DC0;
    case 378u: goto L_002B2DE0;
    case 379u: goto L_002B2DF0;
    case 380u: goto L_002B2E00;
    case 381u: goto L_002B2E48;
    case 382u: goto L_002B2E58;
    case 383u: goto L_002B2E90;
    case 384u: goto L_002B2F04;
    case 385u: goto L_002B2F20;
    case 386u: goto L_002B2FA4;
    case 387u: goto L_002B2FAC;
    case 388u: goto L_002B2FB4;
    case 389u: goto L_002B2FBC;
    case 390u: goto L_002B2FC4;
    case 391u: goto L_002B2FCC;
    case 392u: goto L_002B2FD4;
    case 393u: goto L_002B2FF0;
    case 394u: goto L_002B3008;
    case 395u: goto L_002B3014;
    case 396u: goto L_002B302C;
    case 397u: goto L_002B3044;
    case 398u: goto L_002B3050;
    case 399u: goto L_002B3060;
    case 400u: goto L_002B3090;
    case 401u: goto L_002B3120;
    case 402u: goto L_002B3164;
    case 403u: goto L_002B3190;
    case 404u: goto L_002B31C4;
    case 405u: goto L_002B31FC;
    case 406u: goto L_002B3210;
    case 407u: goto L_002B3248;
    case 408u: goto L_002B3260;
    case 409u: goto L_002B32C8;
    case 410u: goto L_002B32D0;
    case 411u: goto L_002B330C;
    case 412u: goto L_002B3330;
    case 413u: goto L_002B3368;
    case 414u: goto L_002B3378;
    case 415u: goto L_002B3384;
    case 416u: goto L_002B33C4;
    case 417u: goto L_002B33EC;
    case 418u: goto L_002B3400;
    case 419u: goto L_002B340C;
    case 420u: goto L_002B3430;
    case 421u: goto L_002B345C;
    case 422u: goto L_002B3488;
    case 423u: goto L_002B34C0;
    case 424u: goto L_002B34E4;
    case 425u: goto L_002B34F4;
    case 426u: goto L_002B3504;
    case 427u: goto L_002B3510;
    case 428u: goto L_002B3530;
    case 429u: goto L_002B3588;
    case 430u: goto L_002B35B8;
    case 431u: goto L_002B35D8;
    case 432u: goto L_002B36A0;
    case 433u: goto L_002B3800;
    case 434u: goto L_002B3880;
    case 435u: goto L_002B38D0;
    case 436u: goto L_002B38FC;
    case 437u: goto L_002B3938;
    case 438u: goto L_002B3980;
    case 439u: goto L_002B3994;
    case 440u: goto L_002B39F0;
    case 441u: goto L_002B3A68;
    case 442u: goto L_002B3AE8;
    case 443u: goto L_002B3B08;
    case 444u: goto L_002B3B2C;
    case 445u: goto L_002B3B3C;
    case 446u: goto L_002B3B4C;
    case 447u: goto L_002B3B58;
    case 448u: goto L_002B3B70;
    case 449u: goto L_002B3BE0;
    case 450u: goto L_002B3C28;
    case 451u: goto L_002B3C44;
    case 452u: goto L_002B3C54;
    case 453u: goto L_002B3C64;
    case 454u: goto L_002B3C70;
    case 455u: goto L_002B3C88;
    case 456u: goto L_002B3CD0;
    case 457u: goto L_002B3CEC;
    case 458u: goto L_002B3CFC;
    case 459u: goto L_002B3D0C;
    case 460u: goto L_002B3D18;
    case 461u: goto L_002B3D40;
    case 462u: goto L_002B3D70;
    case 463u: goto L_002B3D80;
    case 464u: goto L_002B3DA0;
    case 465u: goto L_002B3DC0;
    case 466u: goto L_002B3DD4;
    case 467u: goto L_002B3DE4;
    case 468u: goto L_002B3DE8;
    case 469u: goto L_002B3E0C;
    case 470u: goto L_002B3E2C;
    case 471u: goto L_002B3E38;
    case 472u: goto L_002B3E40;
    case 473u: goto L_002B3E48;
    case 474u: goto L_002B3E50;
    case 475u: goto L_002B3E58;
    case 476u: goto L_002B3E80;
    case 477u: goto L_002B3E90;
    case 478u: goto L_002B3EA4;
    case 479u: goto L_002B3EB0;
    case 480u: goto L_002B3EB8;
    case 481u: goto L_002B3EC0;
    case 482u: goto L_002B3EC8;
    case 483u: goto L_002B3ED0;
    case 484u: goto L_002B3EF0;
    case 485u: goto L_002B3F00;
    case 486u: goto L_002B3F14;
    case 487u: goto L_002B3F20;
    case 488u: goto L_002B3F28;
    case 489u: goto L_002B3F30;
    case 490u: goto L_002B3F38;
    case 491u: goto L_002B3F40;
    case 492u: goto L_002B3F60;
    case 493u: goto L_002B3F70;
    case 494u: goto L_002B3F7C;
    case 495u: goto L_002B3F88;
    case 496u: goto L_002B3F90;
    case 497u: goto L_002B3F98;
    case 498u: goto L_002B3FA0;
    case 499u: goto L_002B3FA8;
    case 500u: goto L_002B3FC0;
    case 501u: goto L_002B3FF0;
    default: bad_entry(c, 0x002B0000u); return;
    }
L_002B0000:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 160u)));
    c.budget -= 1;
L_002B0004:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B000Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 20u, depth + 1u); else { c.pc = 0x002B0160u; return; } if (c.pc != 0x002B000Cu) [[unlikely]] return; }
L_002B000C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002B0098; } }
    goto L_002B0014;
L_002B0010:
    c.budget -= 1;
L_002B0014:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 1;
L_002B0018:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 160u)));
    c.budget -= 1;
L_002B001C:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 7u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0040u); set32(c.r[16], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0074(c, 296u, depth + 1u); else { c.pc = 0x002D2D90u; return; } if (c.pc != 0x002B0040u) [[unlikely]] return; }
L_002B0040:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], 0u - 1u);
    set32(c.r[4], c.r[3].w[0] + 159u);
    c.budget -= 3;
L_002B004C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 159u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B0060; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002B0060:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 1;
L_002B0064:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 165u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0084u); st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x002B0084u) [[unlikely]] return; }
L_002B0084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B008Cu);  if (depth < kMaxDepth) unit_0080(c, 47u, depth + 1u); else { c.pc = 0x00300130u; return; } if (c.pc != 0x002B008Cu) [[unlikely]] return; }
L_002B008C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B00C0; } }
    c.budget -= 1;
L_002B0098:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_002B00C0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 8u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B00BCu); st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x002B00BCu) [[unlikely]] return; }
L_002B00BC:
    c.budget -= 1;
L_002B00C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B00D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B00E0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x002B00E0u) [[unlikely]] return; }
L_002B00E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B0148; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], 0u + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_002B0100:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0134u); st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0009(c, 25u, depth + 1u); else { c.pc = 0x001246A0u; return; } if (c.pc != 0x002B0134u) [[unlikely]] return; }
L_002B0134:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B013Cu);  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x002B013Cu) [[unlikely]] return; }
    goto L_002B013C;
L_002B0138:
    c.budget -= 1;
L_002B013C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0144u);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x002B0144u) [[unlikely]] return; }
L_002B0144:
    c.budget -= 1;
L_002B0148:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B0160:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[6], c.r[2].w[0] + c.r[5].w[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7u)));
    set32(c.r[16], c.r[4].w[0] + 4u);
    set32(c.r[2], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 18;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));  if (t) { goto L_002B01C0; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 191u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B01C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B02A8; } }
    c.budget -= 1;
L_002B01C0:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 220u));
    c.r[2].d[0] = c.r[3].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[5].d[0] << 56;  if (t) { goto L_002B01E8; } }
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B0210; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002B0210; } }
    c.budget -= 1;
L_002B01E8:
    c.r[2].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B0210; } }
    c.r[3].d[0] = c.r[5].d[0] << 56;
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002B0210; } }
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002B0210:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[3].d[0] = c.r[5].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B0238; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.r[3].d[0] = c.r[4].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002B0250; } }
L_002B0238:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0244u); set32(c.r[5], 0u + 166u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x002B0244u) [[unlikely]] return; }
L_002B0244:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002B02A0; } }
L_002B0250:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0258u);  if (depth < kMaxDepth) unit_0080(c, 46u, depth + 1u); else { c.pc = 0x00300120u; return; } if (c.pc != 0x002B0258u) [[unlikely]] return; }
L_002B0258:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B0270; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 220u));
    c.r[2].d[0] = c.r[3].d[0] & 33568ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B0278; } }
L_002B0270:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B02A8; } }
L_002B0278:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 191u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] & 64ull;  if (t) { goto L_002B02A0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002B02A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0294u); set32(c.r[5], 0u + 167u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x002B0294u) [[unlikely]] return; }
L_002B0294:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002B02A8; } }
    c.budget -= 1;
L_002B02A0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002B02A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B02C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B02D0u);  if (depth < kMaxDepth) unit_0080(c, 49u, depth + 1u); else { c.pc = 0x00300150u; return; } if (c.pc != 0x002B02D0u) [[unlikely]] return; }
L_002B02D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B02E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 9600u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 160u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0314u); set32(c.r[4], c.r[4].w[0] - 29896u);  if (depth < kMaxDepth) unit_0049(c, 391u, depth + 1u); else { c.pc = 0x00227960u; return; } if (c.pc != 0x002B0314u) [[unlikely]] return; }
L_002B0314:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B031Cu);  if (depth < kMaxDepth) unit_006B(c, 17u, depth + 1u); else { c.pc = 0x002AC350u; return; } if (c.pc != 0x002B031Cu) [[unlikely]] return; }
L_002B031C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 1;
L_002B0320:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[2], c.r[2].w[0] - 27512u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0344u); set32(c.r[4], c.r[4].w[0] - 30112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B0344u) [[unlikely]] return; }
L_002B0344:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0350u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x002B0350u) [[unlikely]] return; }
L_002B0350:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0358u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x002B0358u) [[unlikely]] return; }
L_002B0358:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0364u); set32(c.r[4], c.r[4].w[0] - 15024u);  if (depth < kMaxDepth) unit_0043(c, 416u, depth + 1u); else { c.pc = 0x0020FEF0u; return; } if (c.pc != 0x002B0364u) [[unlikely]] return; }
L_002B0364:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B0380:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 27496u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B03ACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B03ACu) [[unlikely]] return; }
L_002B03AC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B03C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B03D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_007C(c, 30u, depth + 1u); else { c.pc = 0x002F0110u; return; } if (c.pc != 0x002B03D4u) [[unlikely]] return; }
L_002B03D4:
    c.r[3].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B0410; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B03F4u); st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_007C(c, 34u, depth + 1u); else { c.pc = 0x002F0160u; return; } if (c.pc != 0x002B03F4u) [[unlikely]] return; }
L_002B03F4:
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 193u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 192u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0410u); st8((c.r[16].w[0] + 215u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_006C(c, 40u, depth + 1u); else { c.pc = 0x002B0420u; return; } if (c.pc != 0x002B0410u) [[unlikely]] return; }
L_002B0410:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B0420:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 76u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[8], c.r[16].w[0] + 180u);  if (t) { goto L_002B0458; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 160u)));
    st8((c.r[16].w[0] + 195u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 192u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002B04D8; } }
L_002B0458:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[6].d[0] = ld8((c.r[8].w[0] + 11u));
    set32(c.r[5], 0u + 1u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 160u)));
    set32(c.r[3], c.r[5].w[0] << (c.r[7].w[0] & 31u));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_002B0480; } }
    st8((c.r[16].w[0] + 195u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 192u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002B04D8; } }
L_002B0480:
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 7u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 9u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B04C8; } }
    st8((c.r[16].w[0] + 195u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B04BCu); st8((c.r[16].w[0] + 192u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_0074(c, 323u, depth + 1u); else { c.pc = 0x002D3540u; return; } if (c.pc != 0x002B04BCu) [[unlikely]] return; }
L_002B04BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B04D8; } }
    c.budget -= 1;
L_002B04C8:
    st8((c.r[16].w[0] + 192u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u - 1u);
    st8((c.r[16].w[0] + 195u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_002B04D8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 195u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 160u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002B0588; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B04F4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0080(c, 43u, depth + 1u); else { c.pc = 0x00300100u; return; } if (c.pc != 0x002B04F4u) [[unlikely]] return; }
L_002B04F4:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002B0528; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002B0520; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B0530; } }
    c.budget -= 1;
L_002B0520:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_002B0530; } }
L_002B0528:
    c.r[4].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 2;
L_002B0530:
    set32(c.r[2], ld32((c.r[28].w[0] - 23132u)));
    set32(c.r[5], c.r[16].w[0] + 216u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0540u); set32(c.r[6], c.r[2].w[0] + 1284u);  if (depth < kMaxDepth) unit_009B(c, 119u, depth + 1u); else { c.pc = 0x0036D830u; return; } if (c.pc != 0x002B0540u) [[unlikely]] return; }
L_002B0540:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], 0u + 4u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 160u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_002B05B8; } }
    c.budget -= 1;
L_002B0588:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002B05B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B059Cu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0080(c, 43u, depth + 1u); else { c.pc = 0x00300100u; return; } if (c.pc != 0x002B059Cu) [[unlikely]] return; }
L_002B059C:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
L_002B05B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B05D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B05ECu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_009B(c, 139u, depth + 1u); else { c.pc = 0x0036DB70u; return; } if (c.pc != 0x002B05ECu) [[unlikely]] return; }
L_002B05EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B06A0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[17], c.r[18].w[0] + 180u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 160u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[18].w[0]);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0638u); st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009B(c, 140u, depth + 1u); else { c.pc = 0x0036DBC0u; return; } if (c.pc != 0x002B0638u) [[unlikely]] return; }
L_002B0638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0640u); st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009B(c, 142u, depth + 1u); else { c.pc = 0x0036DC00u; return; } if (c.pc != 0x002B0640u) [[unlikely]] return; }
L_002B0640:
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 192u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B0670; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.r[3].d[0] = c.r[16].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
L_002B0670:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[5], 0u + 6u);
    set32(c.r[4], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 160u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B06A0u); st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_0080(c, 43u, depth + 1u); else { c.pc = 0x00300100u; return; } if (c.pc != 0x002B06A0u) [[unlikely]] return; }
L_002B06A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002B06C0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B06E0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 193u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 156u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002B06E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_002B06F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 9600u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 160u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0724u); set32(c.r[4], c.r[4].w[0] - 29896u);  if (depth < kMaxDepth) unit_0049(c, 391u, depth + 1u); else { c.pc = 0x00227960u; return; } if (c.pc != 0x002B0724u) [[unlikely]] return; }
L_002B0724:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B072Cu);  if (depth < kMaxDepth) unit_008B(c, 62u, depth + 1u); else { c.pc = 0x0032C500u; return; } if (c.pc != 0x002B072Cu) [[unlikely]] return; }
L_002B072C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0734u);  if (depth < kMaxDepth) unit_006B(c, 17u, depth + 1u); else { c.pc = 0x002AC350u; return; } if (c.pc != 0x002B0734u) [[unlikely]] return; }
L_002B0734:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[2], c.r[2].w[0] - 27488u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 160u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0764u); set32(c.r[4], c.r[4].w[0] - 30112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B0764u) [[unlikely]] return; }
L_002B0764:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0770u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x002B0770u) [[unlikely]] return; }
L_002B0770:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0778u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x002B0778u) [[unlikely]] return; }
L_002B0778:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00390000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0784u); set32(c.r[4], c.r[4].w[0] - 21072u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x002B0784u) [[unlikely]] return; }
L_002B0784:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0790u); set32(c.r[4], c.r[4].w[0] - 15024u);  if (depth < kMaxDepth) unit_0043(c, 416u, depth + 1u); else { c.pc = 0x0020FEF0u; return; } if (c.pc != 0x002B0790u) [[unlikely]] return; }
L_002B0790:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0798u);  if (depth < kMaxDepth) unit_008B(c, 22u, depth + 1u); else { c.pc = 0x0032C1B0u; return; } if (c.pc != 0x002B0798u) [[unlikely]] return; }
L_002B0798:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B07B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 27472u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B07DCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B07DCu) [[unlikely]] return; }
L_002B07DC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B07F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0800u);  if (depth < kMaxDepth) unit_007C(c, 30u, depth + 1u); else { c.pc = 0x002F0110u; return; } if (c.pc != 0x002B0800u) [[unlikely]] return; }
    goto L_002B0800;
L_002B07FC:
    c.budget -= 1;
L_002B0800:
    c.r[3].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B0820; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_002B0820:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B082C:
    c.budget -= 1;
L_002B0830:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[6], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B087Cu); st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x002B087Cu) [[unlikely]] return; }
L_002B087C:
    set32(c.r[2], c.r[17].w[0] << 2);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[6], c.r[6].w[0] - 30112u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[29].w[0] + 76u);
    set32(c.r[16], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[2].w[0] + 6u);
    c.budget -= 11;
L_002B08A8:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[17].d[0];  if (t) { goto L_002B08C8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 6u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B08C8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 29u)));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002B08C8:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].sd[0] < 3ll ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] + 44u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B08A8u | kUnwind; return; } goto L_002B08A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[2], c.r[2].w[0] - 30105u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B08F4u); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_0080(c, 275u, depth + 1u); else { c.pc = 0x00302D10u; return; } if (c.pc != 0x002B08F4u) [[unlikely]] return; }
L_002B08F4:
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 12u);
    set32(c.r[6], 0u + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0908u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 323u, depth + 1u); else { c.pc = 0x003374D0u; return; } if (c.pc != 0x002B0908u) [[unlikely]] return; }
L_002B0908:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[2], c.r[2].w[0] + 9600u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 160u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0924u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00A2(c, 338u, depth + 1u); else { c.pc = 0x0038AE70u; return; } if (c.pc != 0x002B0924u) [[unlikely]] return; }
L_002B0924:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B092Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00A2(c, 336u, depth + 1u); else { c.pc = 0x0038AE10u; return; } if (c.pc != 0x002B092Cu) [[unlikely]] return; }
L_002B092C:
    set32(c.r[2], c.r[16].w[0] + c.r[18].w[0]);
    set32(c.r[3], 0u + 7u);
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[2].w[0] + 8u);
    st8((c.r[2].w[0] + 29u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B094Cu); set32(c.r[6], 0u + 21u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x002B094Cu) [[unlikely]] return; }
L_002B094C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002B0970:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], c.r[28].w[0] - 30324u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0998u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B0998u) [[unlikely]] return; }
L_002B0998:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B09B0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B09E4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00A2(c, 326u, depth + 1u); else { c.pc = 0x0038AD10u; return; } if (c.pc != 0x002B09E4u) [[unlikely]] return; }
L_002B09E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B0B10; } }
    set32(c.r[2], c.r[20].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[17], c.r[2].w[0] << 2);
    set32(c.r[16], c.r[21].w[0] + c.r[17].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0A0Cu); set32(c.r[19], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_00A2(c, 335u, depth + 1u); else { c.pc = 0x0038AE00u; return; } if (c.pc != 0x002B0A0Cu) [[unlikely]] return; }
L_002B0A0C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0A18u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x002B0A18u) [[unlikely]] return; }
L_002B0A18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0A20u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 273u, depth + 1u); else { c.pc = 0x00302CA0u; return; } if (c.pc != 0x002B0A20u) [[unlikely]] return; }
L_002B0A20:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_002B0A38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0A34u);  if (depth < kMaxDepth) unit_0080(c, 289u, depth + 1u); else { c.pc = 0x00303050u; return; } if (c.pc != 0x002B0A34u) [[unlikely]] return; }
L_002B0A34:
    c.budget -= 1;
L_002B0A38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[2], c.r[2].w[0] - 30105u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[23], c.r[2].w[0] + c.r[17].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[23].w[0])));
    set32(c.r[2], c.r[17].w[0] + c.r[21].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0A58u); set32(c.r[22], c.r[2].w[0] + 29u);  if (depth < kMaxDepth) unit_0080(c, 267u, depth + 1u); else { c.pc = 0x00302AD0u; return; } if (c.pc != 0x002B0A58u) [[unlikely]] return; }
L_002B0A58:
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B0AD0; } }
    set32(c.r[16], c.r[16].w[0] + 29u);
    c.budget -= 1;
L_002B0A6C:
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
L_002B0A78:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[20].d[0];  if (t) { goto L_002B0AC0; } }
    c.r[3].d[0] = ld8((c.r[21].w[0] + 191u));
    set32(c.r[2], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << (c.r[18].w[0] & 31u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B0AC0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 29u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0AA4u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0080(c, 272u, depth + 1u); else { c.pc = 0x00302BF0u; return; } if (c.pc != 0x002B0AA4u) [[unlikely]] return; }
L_002B0AA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B0AC0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[23].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0AB8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 292u, depth + 1u); else { c.pc = 0x003030A0u; return; } if (c.pc != 0x002B0AB8u) [[unlikely]] return; }
L_002B0AB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[22].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_002B0AD0; } }
L_002B0AC0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 44u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B0A78u | kUnwind; return; } goto L_002B0A78; } }
L_002B0AD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0AD8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 270u, depth + 1u); else { c.pc = 0x00302BB0u; return; } if (c.pc != 0x002B0AD8u) [[unlikely]] return; }
L_002B0AD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0AE0u);  if (depth < kMaxDepth) unit_0080(c, 52u, depth + 1u); else { c.pc = 0x003001A0u; return; } if (c.pc != 0x002B0AE0u) [[unlikely]] return; }
L_002B0AE0:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0AF0u); set32(c.r[6], 0u + 21u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x002B0AF0u) [[unlikely]] return; }
L_002B0AF0:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
L_002B0B10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002B0B40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002B0B98; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B0B70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B0BD0; } }
    c.budget -= 1;
L_002B0B70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0B78u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0080(c, 51u, depth + 1u); else { c.pc = 0x00300180u; return; } if (c.pc != 0x002B0B78u) [[unlikely]] return; }
L_002B0B78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0B80u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 336u, depth + 1u); else { c.pc = 0x0038AE10u; return; } if (c.pc != 0x002B0B80u) [[unlikely]] return; }
L_002B0B80:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002B0BD0; } }
    c.budget -= 1;
L_002B0B98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0BA0u);  if (depth < kMaxDepth) unit_009B(c, 139u, depth + 1u); else { c.pc = 0x0036DB70u; return; } if (c.pc != 0x002B0BA0u) [[unlikely]] return; }
L_002B0BA0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002B0BD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0BB4u); set32(c.r[4], ld32((c.r[28].w[0] - 23748u)));  if (depth < kMaxDepth) unit_000B(c, 62u, depth + 1u); else { c.pc = 0x0012D1C0u; return; } if (c.pc != 0x002B0BB4u) [[unlikely]] return; }
L_002B0BB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0BBCu);  if (depth < kMaxDepth) unit_007C(c, 35u, depth + 1u); else { c.pc = 0x002F0170u; return; } if (c.pc != 0x002B0BBCu) [[unlikely]] return; }
L_002B0BBC:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002B0BD8; } }
    c.budget -= 1;
L_002B0BD0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002B0BD8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B0BF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 9600u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 160u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0C24u); set32(c.r[4], c.r[4].w[0] - 29896u);  if (depth < kMaxDepth) unit_0049(c, 391u, depth + 1u); else { c.pc = 0x00227960u; return; } if (c.pc != 0x002B0C24u) [[unlikely]] return; }
L_002B0C24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0C2Cu);  if (depth < kMaxDepth) unit_008B(c, 62u, depth + 1u); else { c.pc = 0x0032C500u; return; } if (c.pc != 0x002B0C2Cu) [[unlikely]] return; }
L_002B0C2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0C34u);  if (depth < kMaxDepth) unit_006B(c, 17u, depth + 1u); else { c.pc = 0x002AC350u; return; } if (c.pc != 0x002B0C34u) [[unlikely]] return; }
L_002B0C34:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[2], c.r[2].w[0] - 27456u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0C5Cu); set32(c.r[4], c.r[4].w[0] - 30112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B0C5Cu) [[unlikely]] return; }
L_002B0C5C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0C68u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x002B0C68u) [[unlikely]] return; }
    goto L_002B0C68;
L_002B0C64:
    set32(c.r[4], 0u + 4u);
    c.budget -= 1;
L_002B0C68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0C70u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x002B0C70u) [[unlikely]] return; }
L_002B0C70:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0C7Cu); set32(c.r[4], c.r[4].w[0] - 15024u);  if (depth < kMaxDepth) unit_0043(c, 416u, depth + 1u); else { c.pc = 0x0020FEF0u; return; } if (c.pc != 0x002B0C7Cu) [[unlikely]] return; }
L_002B0C7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0C84u);  if (depth < kMaxDepth) unit_008B(c, 22u, depth + 1u); else { c.pc = 0x0032C1B0u; return; } if (c.pc != 0x002B0C84u) [[unlikely]] return; }
L_002B0C84:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B0CA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 27440u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0CCCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B0CCCu) [[unlikely]] return; }
L_002B0CCC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B0CE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[4], c.r[2].w[0] + 80u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 80u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B0D68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0D20u);  if (depth < kMaxDepth) unit_0074(c, 302u, depth + 1u); else { c.pc = 0x002D2F40u; return; } if (c.pc != 0x002B0D20u) [[unlikely]] return; }
L_002B0D20:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 196u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0D34u); st8((c.r[2].w[0] + 157u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x002B0D34u) [[unlikely]] return; }
L_002B0D34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0D3Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 384u, depth + 1u); else { c.pc = 0x0020F700u; return; } if (c.pc != 0x002B0D3Cu) [[unlikely]] return; }
L_002B0D3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0D44u);  if (depth < kMaxDepth) unit_004D(c, 130u, depth + 1u); else { c.pc = 0x002362E0u; return; } if (c.pc != 0x002B0D44u) [[unlikely]] return; }
L_002B0D44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0D4Cu);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x002B0D4Cu) [[unlikely]] return; }
L_002B0D4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0D54u);  if (depth < kMaxDepth) unit_007B(c, 309u, depth + 1u); else { c.pc = 0x002EFFE0u; return; } if (c.pc != 0x002B0D54u) [[unlikely]] return; }
L_002B0D54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0D5Cu);  if (depth < kMaxDepth) unit_000B(c, 24u, depth + 1u); else { c.pc = 0x0012C850u; return; } if (c.pc != 0x002B0D5Cu) [[unlikely]] return; }
L_002B0D5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B0D70; } }
    c.budget -= 1;
L_002B0D68:
    st8((c.r[16].w[0] + 196u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002B0D70:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 1;
L_002B0D74:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 160u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0D98u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 7u)));  if (depth < kMaxDepth) unit_0080(c, 177u, depth + 1u); else { c.pc = 0x00301B80u; return; } if (c.pc != 0x002B0D98u) [[unlikely]] return; }
L_002B0D98:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 196u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B0DE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0DACu);  if (depth < kMaxDepth) unit_007C(c, 31u, depth + 1u); else { c.pc = 0x002F0120u; return; } if (c.pc != 0x002B0DACu) [[unlikely]] return; }
L_002B0DAC:
    set32(c.r[5], ld32((c.r[28].w[0] - 23132u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0DB8u); set32(c.r[4], c.r[5].w[0] + 632u);  if (depth < kMaxDepth) unit_007C(c, 72u, depth + 1u); else { c.pc = 0x002F0530u; return; } if (c.pc != 0x002B0DB8u) [[unlikely]] return; }
L_002B0DB8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23132u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[4], c.r[4].w[0] + 1440u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0DD0u); set32(c.r[6], c.r[2].w[0] + 632u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x002B0DD0u) [[unlikely]] return; }
L_002B0DD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0DD8u);  if (depth < kMaxDepth) unit_007C(c, 42u, depth + 1u); else { c.pc = 0x002F0220u; return; } if (c.pc != 0x002B0DD8u) [[unlikely]] return; }
L_002B0DD8:
    set32(c.r[3], 0u - 1u);
    st8((c.r[16].w[0] + 195u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002B0DE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B0DF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0E04u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x002B0E04u) [[unlikely]] return; }
L_002B0E04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B0EC8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 196u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B0E60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0E20u);  if (depth < kMaxDepth) unit_007C(c, 32u, depth + 1u); else { c.pc = 0x002F0130u; return; } if (c.pc != 0x002B0E20u) [[unlikely]] return; }
L_002B0E20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0E28u);  if (depth < kMaxDepth) unit_007C(c, 49u, depth + 1u); else { c.pc = 0x002F02C0u; return; } if (c.pc != 0x002B0E28u) [[unlikely]] return; }
L_002B0E28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0E30u);  if (depth < kMaxDepth) unit_000B(c, 35u, depth + 1u); else { c.pc = 0x0012CB40u; return; } if (c.pc != 0x002B0E30u) [[unlikely]] return; }
L_002B0E30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0E38u);  if (depth < kMaxDepth) unit_0044(c, 381u, depth + 1u); else { c.pc = 0x002135E0u; return; } if (c.pc != 0x002B0E38u) [[unlikely]] return; }
L_002B0E38:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0E44u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 160u)));  if (depth < kMaxDepth) unit_007F(c, 182u, depth + 1u); else { c.pc = 0x002FF0C0u; return; } if (c.pc != 0x002B0E44u) [[unlikely]] return; }
L_002B0E44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0E4Cu);  if (depth < kMaxDepth) unit_0080(c, 37u, depth + 1u); else { c.pc = 0x003000C0u; return; } if (c.pc != 0x002B0E4Cu) [[unlikely]] return; }
L_002B0E4C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0E58u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x002B0E58u) [[unlikely]] return; }
L_002B0E58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B0E80; } }
L_002B0E60:
    set32(c.r[2], ld32((c.r[28].w[0] - 23132u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0E6Cu); set32(c.r[4], c.r[2].w[0] + 632u);  if (depth < kMaxDepth) unit_007C(c, 76u, depth + 1u); else { c.pc = 0x002F05A0u; return; } if (c.pc != 0x002B0E6Cu) [[unlikely]] return; }
L_002B0E6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0E74u);  if (depth < kMaxDepth) unit_007C(c, 49u, depth + 1u); else { c.pc = 0x002F02C0u; return; } if (c.pc != 0x002B0E74u) [[unlikely]] return; }
L_002B0E74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0E7Cu);  if (depth < kMaxDepth) unit_000B(c, 35u, depth + 1u); else { c.pc = 0x0012CB40u; return; } if (c.pc != 0x002B0E7Cu) [[unlikely]] return; }
L_002B0E7C:
    c.budget -= 1;
L_002B0E80:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0E8Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 160u)));  if (depth < kMaxDepth) unit_0080(c, 54u, depth + 1u); else { c.pc = 0x003001D0u; return; } if (c.pc != 0x002B0E8Cu) [[unlikely]] return; }
L_002B0E8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0E94u);  if (depth < kMaxDepth) unit_0080(c, 233u, depth + 1u); else { c.pc = 0x003024D0u; return; } if (c.pc != 0x002B0E94u) [[unlikely]] return; }
L_002B0E94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0E9Cu);  if (depth < kMaxDepth) unit_0080(c, 167u, depth + 1u); else { c.pc = 0x00301A10u; return; } if (c.pc != 0x002B0E9Cu) [[unlikely]] return; }
L_002B0E9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0EA4u);  if (depth < kMaxDepth) unit_0080(c, 238u, depth + 1u); else { c.pc = 0x003025A0u; return; } if (c.pc != 0x002B0EA4u) [[unlikely]] return; }
L_002B0EA4:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 2u);
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 196u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 46u);  if (t) { goto L_002B0EC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0EC4u);  if (depth < kMaxDepth) unit_004E(c, 35u, depth + 1u); else { c.pc = 0x002382B0u; return; } if (c.pc != 0x002B0EC4u) [[unlikely]] return; }
L_002B0EC4:
    c.budget -= 1;
L_002B0EC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B0EE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 196u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B0F30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0EFCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x002B0EFCu) [[unlikely]] return; }
L_002B0EFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B0F58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0F0Cu);  if (depth < kMaxDepth) unit_0080(c, 165u, depth + 1u); else { c.pc = 0x003019B0u; return; } if (c.pc != 0x002B0F0Cu) [[unlikely]] return; }
L_002B0F0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B0F58; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002B0F58; } }
L_002B0F30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0F38u);  if (depth < kMaxDepth) unit_0080(c, 165u, depth + 1u); else { c.pc = 0x003019B0u; return; } if (c.pc != 0x002B0F38u) [[unlikely]] return; }
L_002B0F38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B0F58; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_002B0F58:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B0F70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 27424u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0F9Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B0F9Cu) [[unlikely]] return; }
L_002B0F9C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B0FB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0FC4u); c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 160u)));  if (depth < kMaxDepth) unit_006C(c, 171u, depth + 1u); else { c.pc = 0x002B12F0u; return; } if (c.pc != 0x002B0FC4u) [[unlikely]] return; }
L_002B0FC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B0FF0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0FE0u); st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0080(c, 168u, depth + 1u); else { c.pc = 0x00301A30u; return; } if (c.pc != 0x002B0FE0u) [[unlikely]] return; }
L_002B0FE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0FE8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0080(c, 173u, depth + 1u); else { c.pc = 0x00301AB0u; return; } if (c.pc != 0x002B0FE8u) [[unlikely]] return; }
L_002B0FE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0FF0u); set32(c.r[4], 0u - 1u);  if (depth < kMaxDepth) unit_0080(c, 43u, depth + 1u); else { c.pc = 0x00300100u; return; } if (c.pc != 0x002B0FF0u) [[unlikely]] return; }
L_002B0FF0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B1000:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002B1020:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 12u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1050u); st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_006C(c, 221u, depth + 1u); else { c.pc = 0x002B19C0u; return; } if (c.pc != 0x002B1050u) [[unlikely]] return; }
L_002B1050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1058u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 156u, depth + 1u); else { c.pc = 0x002B1070u; return; } if (c.pc != 0x002B1058u) [[unlikely]] return; }
L_002B1058:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B1070:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B10A0u); st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0080(c, 176u, depth + 1u); else { c.pc = 0x00301B50u; return; } if (c.pc != 0x002B10A0u) [[unlikely]] return; }
L_002B10A0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 160u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 29u)));
    c.budget -= 11;
    { const bool t = c.r[6].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);  if (t) { goto L_002B1100; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 3584u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 18416u);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B10ECu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 46u, depth + 1u); else { c.pc = 0x00238530u; return; } if (c.pc != 0x002B10ECu) [[unlikely]] return; }
L_002B10EC:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 120u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002B1108; } }
    c.budget -= 1;
L_002B1100:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_002B1108:
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 120u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1118u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x002B1118u) [[unlikely]] return; }
L_002B1118:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B1130:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[2].w[0] - 27408u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002B0000u < 16384u) { entry = entries_006C[(t - 0x002B0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002B1160:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1178u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 55u, depth + 1u); else { c.pc = 0x00238800u; return; } if (c.pc != 0x002B1178u) [[unlikely]] return; }
L_002B1178:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B1190; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_002B1190:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002B11B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B11E0; } }
L_002B11B8:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 220u));
    c.r[2].d[0] = c.r[2].d[0] & 33568ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B11D8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_002B11D8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002B11E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B11F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1200u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x002B1200u) [[unlikely]] return; }
L_002B1200:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B1210; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002B1240; } }
L_002B1210:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B121Cu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x002B121Cu) [[unlikely]] return; }
L_002B121C:
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 1u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 157u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 9;
L_002B1240:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B1250:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1260u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x002B1260u) [[unlikely]] return; }
L_002B1260:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 13u);  if (t) { goto L_002B12D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1270u);  if (depth < kMaxDepth) unit_006C(c, 221u, depth + 1u); else { c.pc = 0x002B19C0u; return; } if (c.pc != 0x002B1270u) [[unlikely]] return; }
L_002B1270:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1278u);  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x002B1278u) [[unlikely]] return; }
L_002B1278:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1280u);  if (depth < kMaxDepth) unit_004E(c, 5u, depth + 1u); else { c.pc = 0x00238040u; return; } if (c.pc != 0x002B1280u) [[unlikely]] return; }
L_002B1280:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 160u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 56u)));
    set32(c.r[5], c.r[2].w[0] << (c.r[5].w[0] & 31u));
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[4].w[0] + 56u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 80u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B12D0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002B12E0; } }
L_002B12D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B12E0; } }
L_002B12D8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002B12E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B12F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[2].w[0] - 27392u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002B0000u < 16384u) { entry = entries_006C[(t - 0x002B0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002B1310:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 197u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_002B1330:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[2].w[0] - 27360u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002B0000u < 16384u) { entry = entries_006C[(t - 0x002B0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002B1350:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], c.r[5].w[0] << 2);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[3], c.r[3].w[0] << 1);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] << 2);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 197u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[18].w[0] + 180u);
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[3].w[0] + 4u);  if (t) { goto L_002B1400; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B139Cu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0080(c, 43u, depth + 1u); else { c.pc = 0x00300100u; return; } if (c.pc != 0x002B139Cu) [[unlikely]] return; }
L_002B139C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B13A8u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));  if (depth < kMaxDepth) unit_006D(c, 300u, depth + 1u); else { c.pc = 0x002B6ED0u; return; } if (c.pc != 0x002B13A8u) [[unlikely]] return; }
L_002B13A8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B13B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0074(c, 304u, depth + 1u); else { c.pc = 0x002D2FC0u; return; } if (c.pc != 0x002B13B8u) [[unlikely]] return; }
L_002B13B8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 21u);  if (t) { goto L_002B13D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 26u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002B13D8; } }
    c.budget -= 1;
L_002B13D0:
    set32(c.r[2], 0u + 29u);
    st8((c.r[17].w[0] + 26u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002B13D8:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 26u)));
    set32(c.r[4], c.r[18].w[0] + 198u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B13E8u); set32(c.r[5], c.r[18].w[0] + 200u);  if (depth < kMaxDepth) unit_0074(c, 316u, depth + 1u); else { c.pc = 0x002D3420u; return; } if (c.pc != 0x002B13E8u) [[unlikely]] return; }
L_002B13E8:
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B13F4u); st8((c.r[17].w[0] + 28u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_006C(c, 221u, depth + 1u); else { c.pc = 0x002B19C0u; return; } if (c.pc != 0x002B13F4u) [[unlikely]] return; }
L_002B13F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B14A8; } }
    c.budget -= 1;
L_002B1400:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1408u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0080(c, 43u, depth + 1u); else { c.pc = 0x00300100u; return; } if (c.pc != 0x002B1408u) [[unlikely]] return; }
L_002B1408:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 200u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1414u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 198u)));  if (depth < kMaxDepth) unit_0074(c, 315u, depth + 1u); else { c.pc = 0x002D33B0u; return; } if (c.pc != 0x002B1414u) [[unlikely]] return; }
L_002B1414:
    c.r[19].d[0] = c.r[2].d[0] << 56;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);
    set32(c.r[2], 0u + 7u);
    c.budget -= 5;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_002B1430; } }
    set32(c.r[19], 0u + 8u);
    c.budget -= 2;
L_002B1430:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B143Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));  if (depth < kMaxDepth) unit_006D(c, 300u, depth + 1u); else { c.pc = 0x002B6ED0u; return; } if (c.pc != 0x002B143Cu) [[unlikely]] return; }
L_002B143C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B144Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0074(c, 304u, depth + 1u); else { c.pc = 0x002D2FC0u; return; } if (c.pc != 0x002B144Cu) [[unlikely]] return; }
L_002B144C:
    set32(c.r[4], c.r[18].w[0] + 199u);
    set32(c.r[5], c.r[18].w[0] + 201u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B145Cu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 316u, depth + 1u); else { c.pc = 0x002D3420u; return; } if (c.pc != 0x002B145Cu) [[unlikely]] return; }
L_002B145C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 199u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B1498; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], 0u + 21u);  if (t) { goto L_002B1480; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B1488; } }
L_002B1480:
    set32(c.r[19], 0u + 29u);
    c.budget -= 2;
L_002B1488:
    set32(c.r[4], c.r[18].w[0] + 199u);
    set32(c.r[5], c.r[18].w[0] + 201u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1498u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 316u, depth + 1u); else { c.pc = 0x002D3420u; return; } if (c.pc != 0x002B1498u) [[unlikely]] return; }
L_002B1498:
    st8((c.r[17].w[0] + 27u), static_cast<std::uint8_t>(c.r[19].w[0]));
    set32(c.r[4], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B14A8u); st8((c.r[17].w[0] + 29u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_006C(c, 221u, depth + 1u); else { c.pc = 0x002B19C0u; return; } if (c.pc != 0x002B14A8u) [[unlikely]] return; }
L_002B14A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B14B0u);  if (depth < kMaxDepth) unit_0080(c, 169u, depth + 1u); else { c.pc = 0x00301A50u; return; } if (c.pc != 0x002B14B0u) [[unlikely]] return; }
L_002B14B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002B14E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B14F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 166u, depth + 1u); else { c.pc = 0x003019E0u; return; } if (c.pc != 0x002B14F4u) [[unlikely]] return; }
L_002B14F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B1520; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 197u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 200u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B151Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 198u)));  if (depth < kMaxDepth) unit_0080(c, 234u, depth + 1u); else { c.pc = 0x003024F0u; return; } if (c.pc != 0x002B151Cu) [[unlikely]] return; }
L_002B151C:
    c.budget -= 1;
L_002B1520:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B1540:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 197u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 206u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 198u)));
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 200u)));
    c.budget -= 14;
    { const bool t = c.r[2].sd[0] <= 0; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002B1580; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[19].w[0] + 206u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002B1580:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 206u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_002B1598; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[19].w[0] + 206u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002B1598:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B15A0u);  if (depth < kMaxDepth) unit_0080(c, 46u, depth + 1u); else { c.pc = 0x00300120u; return; } if (c.pc != 0x002B15A0u) [[unlikely]] return; }
L_002B15A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B15B8; } }
    c.r[2].d[0] = ld16((c.r[19].w[0] + 220u));
    c.r[2].d[0] = c.r[2].d[0] & 33568ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B1640; } }
L_002B15B8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 197u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 200u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B15CCu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 198u)));  if (depth < kMaxDepth) unit_0074(c, 315u, depth + 1u); else { c.pc = 0x002D33B0u; return; } if (c.pc != 0x002B15CCu) [[unlikely]] return; }
L_002B15CC:
    c.r[17].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = 0ull + 0ull;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], c.r[2].w[0] + 14503u);
    set32(c.r[3], c.r[17].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B15F4u); set32(c.r[5], 0u + 165u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x002B15F4u) [[unlikely]] return; }
L_002B15F4:
    set32(c.r[2], 0u + 52u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[16].d[0] << 56;  if (t) { goto L_002B1610; } }
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002B1620; } }
L_002B1610:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002B1638; } }
    c.budget -= 1;
L_002B1620:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1628u);  if (depth < kMaxDepth) unit_0080(c, 238u, depth + 1u); else { c.pc = 0x003025A0u; return; } if (c.pc != 0x002B1628u) [[unlikely]] return; }
L_002B1628:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_002B1638:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002B17E0; } }
L_002B1640:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 228u));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002B1658; } }
    st8((c.r[19].w[0] + 205u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002B1658:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 228u));
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B1670; } }
    st8((c.r[19].w[0] + 205u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002B1670:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 206u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B1728; } }
    c.r[3].d[0] = ld16((c.r[19].w[0] + 228u));
    c.r[2].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B16A8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 197u)));
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[2].w[0] + 198u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B16A0u); set32(c.r[5], c.r[2].w[0] + 200u);  if (depth < kMaxDepth) unit_0074(c, 311u, depth + 1u); else { c.pc = 0x002D32C0u; return; } if (c.pc != 0x002B16A0u) [[unlikely]] return; }
L_002B16A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 205u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002B16D0; } }
L_002B16A8:
    c.r[2].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B16D0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 197u)));
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[2].w[0] + 198u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B16C8u); set32(c.r[5], c.r[2].w[0] + 200u);  if (depth < kMaxDepth) unit_0074(c, 313u, depth + 1u); else { c.pc = 0x002D3330u; return; } if (c.pc != 0x002B16C8u) [[unlikely]] return; }
L_002B16C8:
    st8((c.r[19].w[0] + 205u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002B16D0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 205u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_002B1700; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 197u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 198u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B16F0u); set32(c.r[5], c.r[2].w[0] + 200u);  if (depth < kMaxDepth) unit_0074(c, 309u, depth + 1u); else { c.pc = 0x002D3210u; return; } if (c.pc != 0x002B16F0u) [[unlikely]] return; }
L_002B16F0:
    st8((c.r[19].w[0] + 205u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u - 8u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 206u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002B1728; } }
L_002B1700:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002B1728; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 197u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 198u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B171Cu); set32(c.r[5], c.r[2].w[0] + 200u);  if (depth < kMaxDepth) unit_0074(c, 310u, depth + 1u); else { c.pc = 0x002D3270u; return; } if (c.pc != 0x002B171Cu) [[unlikely]] return; }
L_002B171C:
    st8((c.r[19].w[0] + 205u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 8u);
    st8((c.r[19].w[0] + 206u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002B1728:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 197u)));
    c.r[3].d[0] = c.r[17].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[4], c.r[2].w[0] + c.r[19].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 198u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B1758; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 200u)));
    c.r[3].d[0] = c.r[16].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002B17D8; } }
L_002B1758:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1764u); set32(c.r[5], 0u + 166u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x002B1764u) [[unlikely]] return; }
L_002B1764:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 197u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 200u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1778u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 198u)));  if (depth < kMaxDepth) unit_0080(c, 234u, depth + 1u); else { c.pc = 0x003024F0u; return; } if (c.pc != 0x002B1778u) [[unlikely]] return; }
L_002B1778:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 197u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 200u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B178Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 198u)));  if (depth < kMaxDepth) unit_0074(c, 315u, depth + 1u); else { c.pc = 0x002D33B0u; return; } if (c.pc != 0x002B178Cu) [[unlikely]] return; }
L_002B178C:
    set32(c.r[4], c.r[18].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 197u)));
    set32(c.r[4], c.r[4].w[0] + c.r[18].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[18].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0] + 30u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 197u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 8u);  if (t) { goto L_002B17D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B17C4u);  if (depth < kMaxDepth) unit_006C(c, 221u, depth + 1u); else { c.pc = 0x002B19C0u; return; } if (c.pc != 0x002B17C4u) [[unlikely]] return; }
L_002B17C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B17D8; } }
    c.budget -= 1;
L_002B17D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B17D8u); set32(c.r[4], 0u + 10u);  if (depth < kMaxDepth) unit_006C(c, 221u, depth + 1u); else { c.pc = 0x002B19C0u; return; } if (c.pc != 0x002B17D8u) [[unlikely]] return; }
L_002B17D8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002B17E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002B1800:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_002B1810:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 197u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B1848; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B183Cu); set32(c.r[4], 0u + 9u);  if (depth < kMaxDepth) unit_006C(c, 221u, depth + 1u); else { c.pc = 0x002B19C0u; return; } if (c.pc != 0x002B183Cu) [[unlikely]] return; }
L_002B183C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B1850; } }
    c.budget -= 1;
L_002B1848:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1850u); set32(c.r[4], 0u + 11u);  if (depth < kMaxDepth) unit_006C(c, 221u, depth + 1u); else { c.pc = 0x002B19C0u; return; } if (c.pc != 0x002B1850u) [[unlikely]] return; }
L_002B1850:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 197u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 200u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1864u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 198u)));  if (depth < kMaxDepth) unit_0074(c, 315u, depth + 1u); else { c.pc = 0x002D33B0u; return; } if (c.pc != 0x002B1864u) [[unlikely]] return; }
L_002B1864:
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 197u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 160u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B187Cu); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (depth < kMaxDepth) unit_0080(c, 298u, depth + 1u); else { c.pc = 0x003031A0u; return; } if (c.pc != 0x002B187Cu) [[unlikely]] return; }
L_002B187C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1884u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0080(c, 173u, depth + 1u); else { c.pc = 0x00301AB0u; return; } if (c.pc != 0x002B1884u) [[unlikely]] return; }
L_002B1884:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B18A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B18B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 359u, depth + 1u); else { c.pc = 0x00303B90u; return; } if (c.pc != 0x002B18B4u) [[unlikely]] return; }
L_002B18B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B18D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B18C4u);  if (depth < kMaxDepth) unit_0080(c, 238u, depth + 1u); else { c.pc = 0x003025A0u; return; } if (c.pc != 0x002B18C4u) [[unlikely]] return; }
L_002B18C4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_002B18D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B18F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B1938; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B1920; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B1970; } }
    c.budget -= 1;
L_002B1920:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1928u);  if (depth < kMaxDepth) unit_0080(c, 171u, depth + 1u); else { c.pc = 0x00301A70u; return; } if (c.pc != 0x002B1928u) [[unlikely]] return; }
L_002B1928:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_002B1938:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1940u);  if (depth < kMaxDepth) unit_0080(c, 165u, depth + 1u); else { c.pc = 0x003019B0u; return; } if (c.pc != 0x002B1940u) [[unlikely]] return; }
L_002B1940:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B1970; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1950u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x002B1950u) [[unlikely]] return; }
L_002B1950:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B1970; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 197u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_002B1970:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B1990:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B19A0u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x002B19A0u) [[unlikely]] return; }
L_002B19A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B19C0:
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[3], c.r[3].w[0] - 30112u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 160u)));
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));  c.pc = t; return; }
L_002B19F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1A00u);  if (depth < kMaxDepth) unit_004F(c, 33u, depth + 1u); else { c.pc = 0x0023C870u; return; } if (c.pc != 0x002B1A00u) [[unlikely]] return; }
L_002B1A00:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[2].w[0] - 24712u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1A24u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B1A24u) [[unlikely]] return; }
L_002B1A24:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B1A30:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 104u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[2].w[0] - 24688u);
    st8((c.r[3].w[0] + 77u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002B0000u < 16384u) { entry = entries_006C[(t - 0x002B0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002B1A60:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002B1A80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1A90u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x002B1A90u) [[unlikely]] return; }
L_002B1A90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B1AA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002B1AB8; } }
L_002B1AA0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1AB4u); st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AA(c, 242u, depth + 1u); else { c.pc = 0x003AAF00u; return; } if (c.pc != 0x002B1AB4u) [[unlikely]] return; }
L_002B1AB4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B1AB8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B1AD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull & 65535ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = c.r[4].d[0] << 56;
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st16((c.r[2].w[0] + 108u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st16((c.r[2].w[0] + 106u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 49u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 17u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[2].w[0] + 27u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 38u)));
    st8((c.r[3].w[0] + 50u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 42u)));
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1B58u); st8((c.r[3].w[0] + 41u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006D(c, 338u, depth + 1u); else { c.pc = 0x002B7F70u; return; } if (c.pc != 0x002B1B58u) [[unlikely]] return; }
L_002B1B58:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B1C58; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 8940u);
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 159u)));
    set32(c.r[5], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0] + 128u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 328u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 159u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st16((c.r[3].w[0] + 132u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 159u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st16((c.r[3].w[0] + 130u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 159u)));
    c.r[6].d[0] = c.r[4].d[0] ^ 1ull;
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[4], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[2].w[0] + 132u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 159u)));
    c.r[4].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0] + 130u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 159u)));
    c.r[4].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 59;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 128u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_002B1C78; } }
    goto L_002B1C58;
L_002B1C54:
    st16((c.r[2].w[0] + 128u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 1;
L_002B1C58:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 8940u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1C68u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0074(c, 331u, depth + 1u); else { c.pc = 0x002D3710u; return; } if (c.pc != 0x002B1C68u) [[unlikely]] return; }
L_002B1C68:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 8938u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1C78u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0074(c, 331u, depth + 1u); else { c.pc = 0x002D3710u; return; } if (c.pc != 0x002B1C78u) [[unlikely]] return; }
L_002B1C78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1C80u);  if (depth < kMaxDepth) unit_0074(c, 352u, depth + 1u); else { c.pc = 0x002D3A30u; return; } if (c.pc != 0x002B1C80u) [[unlikely]] return; }
L_002B1C80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1C88u);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x002B1C88u) [[unlikely]] return; }
L_002B1C88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1C90u);  if (depth < kMaxDepth) unit_000B(c, 24u, depth + 1u); else { c.pc = 0x0012C850u; return; } if (c.pc != 0x002B1C90u) [[unlikely]] return; }
L_002B1C90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1C98u);  if (depth < kMaxDepth) unit_0048(c, 71u, depth + 1u); else { c.pc = 0x00220D20u; return; } if (c.pc != 0x002B1C98u) [[unlikely]] return; }
L_002B1C98:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 96u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B1CE0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1CB8u); st8((c.r[2].w[0] + 54u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0047(c, 85u, depth + 1u); else { c.pc = 0x0021CDD0u; return; } if (c.pc != 0x002B1CB8u) [[unlikely]] return; }
L_002B1CB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1CC0u);  if (depth < kMaxDepth) unit_0047(c, 286u, depth + 1u); else { c.pc = 0x0021FF00u; return; } if (c.pc != 0x002B1CC0u) [[unlikely]] return; }
L_002B1CC0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 7u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B1CE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1CDCu);  if (depth < kMaxDepth) unit_008C(c, 164u, depth + 1u); else { c.pc = 0x00332AE0u; return; } if (c.pc != 0x002B1CDCu) [[unlikely]] return; }
L_002B1CDC:
    c.budget -= 1;
L_002B1CE0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B1D00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1CFCu);  if (depth < kMaxDepth) unit_0049(c, 26u, depth + 1u); else { c.pc = 0x002242A0u; return; } if (c.pc != 0x002B1CFCu) [[unlikely]] return; }
L_002B1CFC:
    c.budget -= 1;
L_002B1D00:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 4u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B1D20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1D1Cu);  if (depth < kMaxDepth) unit_0048(c, 56u, depth + 1u); else { c.pc = 0x00220A00u; return; } if (c.pc != 0x002B1D1Cu) [[unlikely]] return; }
L_002B1D1C:
    c.budget -= 1;
L_002B1D20:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[4], c.r[4].w[0] + 16064u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1D30u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x002B1D30u) [[unlikely]] return; }
L_002B1D30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1D38u);  if (depth < kMaxDepth) unit_0044(c, 381u, depth + 1u); else { c.pc = 0x002135E0u; return; } if (c.pc != 0x002B1D38u) [[unlikely]] return; }
L_002B1D38:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x461C0000u);
    c.r[4].d[0] = c.r[2].d[0] | 16384ull;
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] + 112u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B1D60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1D70u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x002B1D70u) [[unlikely]] return; }
L_002B1D70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B1D80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002B1FA8; } }
L_002B1D80:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B1DA0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002B1DB0; } }
L_002B1DA0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_002B1DB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1DB8u);  if (depth < kMaxDepth) unit_0047(c, 94u, depth + 1u); else { c.pc = 0x0021CFC0u; return; } if (c.pc != 0x002B1DB8u) [[unlikely]] return; }
L_002B1DB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1DC0u);  if (depth < kMaxDepth) unit_0047(c, 142u, depth + 1u); else { c.pc = 0x0021E160u; return; } if (c.pc != 0x002B1DC0u) [[unlikely]] return; }
L_002B1DC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1DC8u);  if (depth < kMaxDepth) unit_0047(c, 185u, depth + 1u); else { c.pc = 0x0021EA90u; return; } if (c.pc != 0x002B1DC8u) [[unlikely]] return; }
L_002B1DC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1DD0u);  if (depth < kMaxDepth) unit_0048(c, 59u, depth + 1u); else { c.pc = 0x00220A40u; return; } if (c.pc != 0x002B1DD0u) [[unlikely]] return; }
L_002B1DD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1DD8u);  if (depth < kMaxDepth) unit_0047(c, 263u, depth + 1u); else { c.pc = 0x0021F850u; return; } if (c.pc != 0x002B1DD8u) [[unlikely]] return; }
L_002B1DD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1DE0u);  if (depth < kMaxDepth) unit_0048(c, 9u, depth + 1u); else { c.pc = 0x00220020u; return; } if (c.pc != 0x002B1DE0u) [[unlikely]] return; }
L_002B1DE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1DE8u);  if (depth < kMaxDepth) unit_0048(c, 24u, depth + 1u); else { c.pc = 0x002203B0u; return; } if (c.pc != 0x002B1DE8u) [[unlikely]] return; }
L_002B1DE8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 40u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B1E00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1E00u);  if (depth < kMaxDepth) unit_0048(c, 282u, depth + 1u); else { c.pc = 0x00223F20u; return; } if (c.pc != 0x002B1E00u) [[unlikely]] return; }
L_002B1E00:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 7u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B1E20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1E1Cu);  if (depth < kMaxDepth) unit_008C(c, 166u, depth + 1u); else { c.pc = 0x00332B00u; return; } if (c.pc != 0x002B1E1Cu) [[unlikely]] return; }
L_002B1E1C:
    c.budget -= 1;
L_002B1E20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1E28u);  if (depth < kMaxDepth) unit_000B(c, 35u, depth + 1u); else { c.pc = 0x0012CB40u; return; } if (c.pc != 0x002B1E28u) [[unlikely]] return; }
L_002B1E28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1E30u);  if (depth < kMaxDepth) unit_0049(c, 408u, depth + 1u); else { c.pc = 0x00227D30u; return; } if (c.pc != 0x002B1E30u) [[unlikely]] return; }
L_002B1E30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1E38u);  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x002B1E38u) [[unlikely]] return; }
L_002B1E38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1E40u);  if (depth < kMaxDepth) unit_006A(c, 136u, depth + 1u); else { c.pc = 0x002A9F70u; return; } if (c.pc != 0x002B1E40u) [[unlikely]] return; }
L_002B1E40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1E48u);  if (depth < kMaxDepth) unit_0044(c, 222u, depth + 1u); else { c.pc = 0x00211BA0u; return; } if (c.pc != 0x002B1E48u) [[unlikely]] return; }
L_002B1E48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1E50u);  if (depth < kMaxDepth) unit_004F(c, 73u, depth + 1u); else { c.pc = 0x0023D310u; return; } if (c.pc != 0x002B1E50u) [[unlikely]] return; }
L_002B1E50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1E58u);  if (depth < kMaxDepth) unit_003C(c, 152u, depth + 1u); else { c.pc = 0x001F1700u; return; } if (c.pc != 0x002B1E58u) [[unlikely]] return; }
L_002B1E58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1E60u);  if (depth < kMaxDepth) unit_0026(c, 259u, depth + 1u); else { c.pc = 0x0019BE40u; return; } if (c.pc != 0x002B1E60u) [[unlikely]] return; }
L_002B1E60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1E68u);  if (depth < kMaxDepth) unit_004B(c, 22u, depth + 1u); else { c.pc = 0x0022C4E0u; return; } if (c.pc != 0x002B1E68u) [[unlikely]] return; }
L_002B1E68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1E70u);  if (depth < kMaxDepth) unit_004B(c, 77u, depth + 1u); else { c.pc = 0x0022CFE0u; return; } if (c.pc != 0x002B1E70u) [[unlikely]] return; }
L_002B1E70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1E78u);  if (depth < kMaxDepth) unit_000B(c, 213u, depth + 1u); else { c.pc = 0x0012F990u; return; } if (c.pc != 0x002B1E78u) [[unlikely]] return; }
L_002B1E78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1E80u);  if (depth < kMaxDepth) unit_0032(c, 50u, depth + 1u); else { c.pc = 0x001C8B40u; return; } if (c.pc != 0x002B1E80u) [[unlikely]] return; }
L_002B1E80:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 38u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B1E98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1E98u);  if (depth < kMaxDepth) unit_000D(c, 233u, depth + 1u); else { c.pc = 0x00137580u; return; } if (c.pc != 0x002B1E98u) [[unlikely]] return; }
L_002B1E98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4A7F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65320ull;
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1EB4u);  if (depth < kMaxDepth) unit_005B(c, 98u, depth + 1u); else { c.pc = 0x0026CEC0u; return; } if (c.pc != 0x002B1EB4u) [[unlikely]] return; }
L_002B1EB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1EBCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 384u, depth + 1u); else { c.pc = 0x0020F700u; return; } if (c.pc != 0x002B1EBCu) [[unlikely]] return; }
L_002B1EBC:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 42u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002B1ED8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1ED4u);  if (depth < kMaxDepth) unit_0043(c, 391u, depth + 1u); else { c.pc = 0x0020F7C0u; return; } if (c.pc != 0x002B1ED4u) [[unlikely]] return; }
L_002B1ED4:
    c.budget -= 1;
L_002B1ED8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1EE0u);  if (depth < kMaxDepth) unit_0045(c, 85u, depth + 1u); else { c.pc = 0x00214BD0u; return; } if (c.pc != 0x002B1EE0u) [[unlikely]] return; }
L_002B1EE0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1EECu); set32(c.r[4], c.r[4].w[0] + 15664u);  if (depth < kMaxDepth) unit_005B(c, 89u, depth + 1u); else { c.pc = 0x0026CD50u; return; } if (c.pc != 0x002B1EECu) [[unlikely]] return; }
L_002B1EEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1EF4u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002DA0D0u; return; } if (c.pc != 0x002B1EF4u) [[unlikely]] return; }
L_002B1EF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1EFCu);  if (depth < kMaxDepth) unit_000B(c, 220u, depth + 1u); else { c.pc = 0x0012FAB0u; return; } if (c.pc != 0x002B1EFCu) [[unlikely]] return; }
L_002B1EFC:
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[7].d[0] = 0ull | 65535ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], 0u + 120u);
    set32(c.r[3], 0u + 30u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[2].d[0] = 0ull + 0ull;
    st16((c.r[4].w[0] + 36u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    st16((c.r[4].w[0] + 38u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    st16((c.r[4].w[0] + 54u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    st16((c.r[4].w[0] + 40u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    st16((c.r[4].w[0] + 56u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    st16((c.r[4].w[0] + 42u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    st16((c.r[4].w[0] + 58u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    st16((c.r[4].w[0] + 44u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    st16((c.r[4].w[0] + 60u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    st16((c.r[4].w[0] + 46u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    st16((c.r[4].w[0] + 62u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.budget -= 31;
L_002B1F78:
    st16((c.r[4].w[0] + 48u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    st16((c.r[4].w[0] + 64u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    st16((c.r[4].w[0] + 50u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    st16((c.r[4].w[0] + 66u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    st16((c.r[4].w[0] + 12u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[1].w[0] - 30056u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 12;
L_002B1FA8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B1FC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 7u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B2030; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1FE4u);  if (depth < kMaxDepth) unit_0084(c, 345u, depth + 1u); else { c.pc = 0x00312CE0u; return; } if (c.pc != 0x002B1FE4u) [[unlikely]] return; }
L_002B1FE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_002B2038; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002B2018; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002B2008; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B2038; } }
L_002B2008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2010u);  if (depth < kMaxDepth) unit_006C(c, 283u, depth + 1u); else { c.pc = 0x002B2050u; return; } if (c.pc != 0x002B2010u) [[unlikely]] return; }
L_002B2010:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B2038; } }
L_002B2018:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2024u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 82u)));  if (depth < kMaxDepth) unit_0081(c, 193u, depth + 1u); else { c.pc = 0x00306A70u; return; } if (c.pc != 0x002B2024u) [[unlikely]] return; }
L_002B2024:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B2038; } }
    c.budget -= 1;
L_002B2030:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2038u);  if (depth < kMaxDepth) unit_006C(c, 283u, depth + 1u); else { c.pc = 0x002B2050u; return; } if (c.pc != 0x002B2038u) [[unlikely]] return; }
L_002B2038:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B2050:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 36u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_002B2070; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002B2080; } }
L_002B2070:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_002B2080:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2094u); st8((c.r[2].w[0] + 54u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_006D(c, 260u, depth + 1u); else { c.pc = 0x002B66C0u; return; } if (c.pc != 0x002B2094u) [[unlikely]] return; }
L_002B2094:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 41u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B20E8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 82u)));
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 68u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B2178; } }
    set32(c.r[3], 0u + 8u);
    st8((c.r[4].w[0] + 80u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[2].w[0] + 26u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B20DCu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 82u)));  if (depth < kMaxDepth) unit_004E(c, 208u, depth + 1u); else { c.pc = 0x0023B5D0u; return; } if (c.pc != 0x002B20DCu) [[unlikely]] return; }
L_002B20DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B2178; } }
    c.budget -= 1;
L_002B20E8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 159u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 82u)));
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 116u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B210C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));  if (t) { goto L_002B2114; } }
L_002B210C:
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.budget -= 2;
L_002B2114:
    set32(c.r[2], c.r[5].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 68u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_002B2128; } }
    st8((c.r[3].w[0] + 26u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002B2128:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 82u)));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 68u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B2150; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B214Cu);  if (depth < kMaxDepth) unit_004E(c, 208u, depth + 1u); else { c.pc = 0x0023B5D0u; return; } if (c.pc != 0x002B214Cu) [[unlikely]] return; }
L_002B214C:
    c.budget -= 1;
L_002B2150:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 82u)));
    c.budget -= 3;
L_002B215C:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 69u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_002B2178; } }
    c.r[4].d[0] = c.r[2].d[0] << 56;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2178u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);  if (depth < kMaxDepth) unit_004E(c, 208u, depth + 1u); else { c.pc = 0x0023B5D0u; return; } if (c.pc != 0x002B2178u) [[unlikely]] return; }
L_002B2178:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2184u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x002B2184u) [[unlikely]] return; }
L_002B2184:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B218Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0046(c, 199u, depth + 1u); else { c.pc = 0x0021B430u; return; } if (c.pc != 0x002B218Cu) [[unlikely]] return; }
L_002B218C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B21A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 7u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B2230; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B21C4u);  if (depth < kMaxDepth) unit_0084(c, 345u, depth + 1u); else { c.pc = 0x00312CE0u; return; } if (c.pc != 0x002B21C4u) [[unlikely]] return; }
L_002B21C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_002B2220; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002B2210; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002B21E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B2220; } }
L_002B21E8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B21FCu); st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0046(c, 201u, depth + 1u); else { c.pc = 0x0021B4E0u; return; } if (c.pc != 0x002B21FCu) [[unlikely]] return; }
L_002B21FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2204u);  if (depth < kMaxDepth) unit_006C(c, 302u, depth + 1u); else { c.pc = 0x002B22C0u; return; } if (c.pc != 0x002B2204u) [[unlikely]] return; }
L_002B2204:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B2260; } }
    c.budget -= 1;
L_002B2210:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B221Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 82u)));  if (depth < kMaxDepth) unit_0081(c, 193u, depth + 1u); else { c.pc = 0x00306A70u; return; } if (c.pc != 0x002B221Cu) [[unlikely]] return; }
L_002B221C:
    c.budget -= 1;
L_002B2220:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2228u);  if (depth < kMaxDepth) unit_006D(c, 143u, depth + 1u); else { c.pc = 0x002B5350u; return; } if (c.pc != 0x002B2228u) [[unlikely]] return; }
L_002B2228:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002B2260; } }
L_002B2230:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8816u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B2250; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
L_002B2250:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2258u);  if (depth < kMaxDepth) unit_0046(c, 201u, depth + 1u); else { c.pc = 0x0021B4E0u; return; } if (c.pc != 0x002B2258u) [[unlikely]] return; }
L_002B2258:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2260u);  if (depth < kMaxDepth) unit_006C(c, 302u, depth + 1u); else { c.pc = 0x002B22C0u; return; } if (c.pc != 0x002B2260u) [[unlikely]] return; }
L_002B2260:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B2270:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8816u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B2298; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
L_002B2298:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B22A0u);  if (depth < kMaxDepth) unit_0046(c, 201u, depth + 1u); else { c.pc = 0x0021B4E0u; return; } if (c.pc != 0x002B22A0u) [[unlikely]] return; }
L_002B22A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B22A8u);  if (depth < kMaxDepth) unit_006C(c, 302u, depth + 1u); else { c.pc = 0x002B22C0u; return; } if (c.pc != 0x002B22A8u) [[unlikely]] return; }
L_002B22A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B22C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 24664u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B22ECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B22ECu) [[unlikely]] return; }
L_002B22EC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8816u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B2318; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2304u);  if (depth < kMaxDepth) unit_0049(c, 413u, depth + 1u); else { c.pc = 0x00227EC0u; return; } if (c.pc != 0x002B2304u) [[unlikely]] return; }
L_002B2304:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B230Cu);  if (depth < kMaxDepth) unit_006D(c, 143u, depth + 1u); else { c.pc = 0x002B5350u; return; } if (c.pc != 0x002B230Cu) [[unlikely]] return; }
L_002B230C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B2348; } }
    c.budget -= 1;
L_002B2318:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], c.r[2].w[0] + 34u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 34u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002B2338; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002B2338:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2340u);  if (depth < kMaxDepth) unit_006D(c, 64u, depth + 1u); else { c.pc = 0x002B4FA0u; return; } if (c.pc != 0x002B2340u) [[unlikely]] return; }
L_002B2340:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2348u);  if (depth < kMaxDepth) unit_006D(c, 143u, depth + 1u); else { c.pc = 0x002B5350u; return; } if (c.pc != 0x002B2348u) [[unlikely]] return; }
L_002B2348:
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_002B2370; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 22u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 157u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002B2378; } }
    c.budget -= 1;
L_002B2370:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002B2378:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B2390:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 106u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B23ACu); st8((c.r[2].w[0] + 77u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0046(c, 199u, depth + 1u); else { c.pc = 0x0021B430u; return; } if (c.pc != 0x002B23ACu) [[unlikely]] return; }
L_002B23AC:
    c.r[7].d[0] = 0ull + 0ull;
    c.r[1].d[0] = c.r[7].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002B2418; } }
    set32(c.r[4], c.r[7].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] - 27856u);
    set32(c.r[4], c.r[4].w[0] << 9);
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], 0u + 1u);
    c.budget -= 7;
L_002B23D8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002B2408; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B2408; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 877u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B2408; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 2;
L_002B2408:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B23D8u | kUnwind; return; } goto L_002B23D8; } }
L_002B2418:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_002B24A0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 38u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B2478; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 39u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B2478; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2458u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0013(c, 61u, depth + 1u); else { c.pc = 0x0014CA80u; return; } if (c.pc != 0x002B2458u) [[unlikely]] return; }
L_002B2458:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2464u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0013(c, 61u, depth + 1u); else { c.pc = 0x0014CA80u; return; } if (c.pc != 0x002B2464u) [[unlikely]] return; }
L_002B2464:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 120u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_002B24A0; } }
    c.budget -= 1;
L_002B2478:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 39u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B2490; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2490u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0013(c, 61u, depth + 1u); else { c.pc = 0x0014CA80u; return; } if (c.pc != 0x002B2490u) [[unlikely]] return; }
L_002B2490:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 1u);
    st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 4;
L_002B24A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B24B0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 106u);
    st8((c.r[3].w[0] + 77u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B2500; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 157u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
L_002B2500:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B2510:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 107u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 77u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 38u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B2558; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 39u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B2558; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 242u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B2558; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2558u);  if (depth < kMaxDepth) unit_0049(c, 418u, depth + 1u); else { c.pc = 0x00227F60u; return; } if (c.pc != 0x002B2558u) [[unlikely]] return; }
L_002B2558:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B2570:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 7u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002B25A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2594u);  if (depth < kMaxDepth) unit_008D(c, 174u, depth + 1u); else { c.pc = 0x00336070u; return; } if (c.pc != 0x002B2594u) [[unlikely]] return; }
L_002B2594:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B25A8; } }
    c.budget -= 1;
L_002B25A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B25A8; } }
L_002B25A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B25C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 7u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002B25F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B25E4u);  if (depth < kMaxDepth) unit_008D(c, 175u, depth + 1u); else { c.pc = 0x00336090u; return; } if (c.pc != 0x002B25E4u) [[unlikely]] return; }
L_002B25E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B25F8; } }
    c.budget -= 1;
L_002B25F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B25F8; } }
L_002B25F8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B2610:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 7u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B2634; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2634u);  if (depth < kMaxDepth) unit_008D(c, 176u, depth + 1u); else { c.pc = 0x003360A0u; return; } if (c.pc != 0x002B2634u) [[unlikely]] return; }
L_002B2634:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B2640:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2650u);  if (depth < kMaxDepth) unit_004F(c, 33u, depth + 1u); else { c.pc = 0x0023C870u; return; } if (c.pc != 0x002B2650u) [[unlikely]] return; }
L_002B2650:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[2].w[0] - 24640u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2674u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B2674u) [[unlikely]] return; }
L_002B2674:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B2680:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], 0u + 109u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 18104u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 6u);
    st8((c.r[2].w[0] + 77u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 27u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B26DCu); st16((c.r[2].w[0] + 14u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x002B26DCu) [[unlikely]] return; }
L_002B26DC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 18080u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B26F0u); set32(c.r[6], 0u + 22u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x002B26F0u) [[unlikely]] return; }
L_002B26F0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2700u); st8((c.r[2].w[0] + 99u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_004E(c, 21u, depth + 1u); else { c.pc = 0x00238100u; return; } if (c.pc != 0x002B2700u) [[unlikely]] return; }
L_002B2700:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[4], 0u + 2u);
    c.r[3].d[0] = 0ull | 65535ull;
    st8((c.r[2].w[0] + 22u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st16((c.r[2].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st16((c.r[2].w[0] + 60u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st16((c.r[2].w[0] + 46u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st16((c.r[2].w[0] + 62u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st16((c.r[2].w[0] + 48u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st16((c.r[2].w[0] + 64u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st16((c.r[2].w[0] + 50u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st16((c.r[2].w[0] + 66u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 24;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B27A0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 20u)));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002B2788; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B277Cu);  if (depth < kMaxDepth) unit_0077(c, 35u, depth + 1u); else { c.pc = 0x002DCB60u; return; } if (c.pc != 0x002B277Cu) [[unlikely]] return; }
L_002B277C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B27A0; } }
    c.budget -= 1;
L_002B2788:
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_002B27A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B279Cu);  if (depth < kMaxDepth) unit_0077(c, 35u, depth + 1u); else { c.pc = 0x002DCB60u; return; } if (c.pc != 0x002B279Cu) [[unlikely]] return; }
L_002B279C:
    c.budget -= 1;
L_002B27A0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B27D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B27BCu);  if (depth < kMaxDepth) unit_0071(c, 49u, depth + 1u); else { c.pc = 0x002C4C10u; return; } if (c.pc != 0x002B27BCu) [[unlikely]] return; }
L_002B27BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B27C4u);  if (depth < kMaxDepth) unit_0071(c, 46u, depth + 1u); else { c.pc = 0x002C4B40u; return; } if (c.pc != 0x002B27C4u) [[unlikely]] return; }
L_002B27C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B27F0; } }
    c.budget -= 1;
L_002B27D0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 27u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B27E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 90u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002B27F0; } }
L_002B27E8:
    st8((c.r[3].w[0] + 90u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002B27F0:
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 120u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2800u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x002B2800u) [[unlikely]] return; }
L_002B2800:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2808u);  if (depth < kMaxDepth) unit_004E(c, 18u, depth + 1u); else { c.pc = 0x002380D0u; return; } if (c.pc != 0x002B2808u) [[unlikely]] return; }
L_002B2808:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2810u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 173u, depth + 1u); else { c.pc = 0x0023A570u; return; } if (c.pc != 0x002B2810u) [[unlikely]] return; }
L_002B2810:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2818u);  if (depth < kMaxDepth) unit_006C(c, 338u, depth + 1u); else { c.pc = 0x002B2830u; return; } if (c.pc != 0x002B2818u) [[unlikely]] return; }
L_002B2818:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B2830:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 109u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u + 7u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 77u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B2918; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2864u);  if (depth < kMaxDepth) unit_0084(c, 345u, depth + 1u); else { c.pc = 0x00312CE0u; return; } if (c.pc != 0x002B2864u) [[unlikely]] return; }
L_002B2864:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_002B2908; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002B28F8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002B2888; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B2908; } }
L_002B2888:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B28ACu); st8((c.r[3].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0046(c, 201u, depth + 1u); else { c.pc = 0x0021B4E0u; return; } if (c.pc != 0x002B28ACu) [[unlikely]] return; }
L_002B28AC:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[2].w[0] - 24624u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B28D0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B28D0u) [[unlikely]] return; }
L_002B28D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002B28F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B28E0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 53u, depth + 1u); else { c.pc = 0x002B4D30u; return; } if (c.pc != 0x002B28E0u) [[unlikely]] return; }
L_002B28E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B28E8u);  if (depth < kMaxDepth) unit_006D(c, 64u, depth + 1u); else { c.pc = 0x002B4FA0u; return; } if (c.pc != 0x002B28E8u) [[unlikely]] return; }
L_002B28E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B28F0u);  if (depth < kMaxDepth) unit_006D(c, 143u, depth + 1u); else { c.pc = 0x002B5350u; return; } if (c.pc != 0x002B28F0u) [[unlikely]] return; }
L_002B28F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002B2988; } }
L_002B28F8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2904u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 82u)));  if (depth < kMaxDepth) unit_0081(c, 193u, depth + 1u); else { c.pc = 0x00306A70u; return; } if (c.pc != 0x002B2904u) [[unlikely]] return; }
L_002B2904:
    c.budget -= 1;
L_002B2908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2910u);  if (depth < kMaxDepth) unit_006D(c, 143u, depth + 1u); else { c.pc = 0x002B5350u; return; } if (c.pc != 0x002B2910u) [[unlikely]] return; }
L_002B2910:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002B2988; } }
L_002B2918:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B293Cu); st8((c.r[3].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0046(c, 201u, depth + 1u); else { c.pc = 0x0021B4E0u; return; } if (c.pc != 0x002B293Cu) [[unlikely]] return; }
L_002B293C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[2].w[0] - 24624u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2960u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B2960u) [[unlikely]] return; }
L_002B2960:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002B2980; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2970u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 53u, depth + 1u); else { c.pc = 0x002B4D30u; return; } if (c.pc != 0x002B2970u) [[unlikely]] return; }
L_002B2970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2978u);  if (depth < kMaxDepth) unit_006D(c, 64u, depth + 1u); else { c.pc = 0x002B4FA0u; return; } if (c.pc != 0x002B2978u) [[unlikely]] return; }
L_002B2978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2980u);  if (depth < kMaxDepth) unit_006D(c, 143u, depth + 1u); else { c.pc = 0x002B5350u; return; } if (c.pc != 0x002B2980u) [[unlikely]] return; }
L_002B2980:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_002B2988:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B29A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[6], 0u + 120u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 2u);
    set32(c.r[7], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 4u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[7].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[2].w[0] + 21u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B29E4u); st8((c.r[2].w[0] + 22u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0013(c, 61u, depth + 1u); else { c.pc = 0x0014CA80u; return; } if (c.pc != 0x002B29E4u) [[unlikely]] return; }
L_002B29E4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B2A00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 12u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] + 12u);  if (t) { goto L_002B2A30; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002B2C38; } }
    c.budget -= 1;
L_002B2A30:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2A40u); st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006C(c, 317u, depth + 1u); else { c.pc = 0x002B2570u; return; } if (c.pc != 0x002B2A40u) [[unlikely]] return; }
L_002B2A40:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 120u);
    set32(c.r[4], 0u + 2u);
    st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[2].w[0] + 21u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[2].w[0] + 22u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 101u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B2BD0; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 7u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B2AF8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 20u)));
    set32(c.r[3], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 82u)));
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 116u)));
    set32(c.r[3], c.r[3].w[0] << (c.r[5].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B2AD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2AB4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0013(c, 61u, depth + 1u); else { c.pc = 0x0014CA80u; return; } if (c.pc != 0x002B2AB4u) [[unlikely]] return; }
L_002B2AB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2ABCu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 177u, depth + 1u); else { c.pc = 0x0023A720u; return; } if (c.pc != 0x002B2ABCu) [[unlikely]] return; }
L_002B2ABC:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 241u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 330u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 330u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002B2C28; } }
L_002B2AD8:
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2AE4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0013(c, 61u, depth + 1u); else { c.pc = 0x0014CA80u; return; } if (c.pc != 0x002B2AE4u) [[unlikely]] return; }
L_002B2AE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2AECu); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_004E(c, 177u, depth + 1u); else { c.pc = 0x0023A720u; return; } if (c.pc != 0x002B2AECu) [[unlikely]] return; }
L_002B2AEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B2C28; } }
    c.budget -= 1;
L_002B2AF8:
    c.r[17].d[0] = 0ull + 0ull;
    c.r[1].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002B2B78; } }
L_002B2B08:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[6].w[0] << (c.r[17].w[0] & 31u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 56u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B2B68; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 41u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[4].w[0] + c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 116u)));
    set32(c.r[3], c.r[6].w[0] << (c.r[3].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_002B2B60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2B58u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0013(c, 61u, depth + 1u); else { c.pc = 0x0014CA80u; return; } if (c.pc != 0x002B2B58u) [[unlikely]] return; }
L_002B2B58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B2B68; } }
L_002B2B60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2B68u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0013(c, 61u, depth + 1u); else { c.pc = 0x0014CA80u; return; } if (c.pc != 0x002B2B68u) [[unlikely]] return; }
L_002B2B68:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B2B08u | kUnwind; return; } goto L_002B2B08; } }
L_002B2B78:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 159u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_002B2BC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2BA4u);  if (depth < kMaxDepth) unit_004E(c, 177u, depth + 1u); else { c.pc = 0x0023A720u; return; } if (c.pc != 0x002B2BA4u) [[unlikely]] return; }
L_002B2BA4:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 241u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 330u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 330u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002B2C28; } }
L_002B2BC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2BC8u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_004E(c, 177u, depth + 1u); else { c.pc = 0x0023A720u; return; } if (c.pc != 0x002B2BC8u) [[unlikely]] return; }
L_002B2BC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B2C28; } }
L_002B2BD0:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 102u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 20u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[5], c.r[5].w[0] - 19195u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[6], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 9);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] << (c.r[5].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002B2C18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2C10u);  if (depth < kMaxDepth) unit_0013(c, 61u, depth + 1u); else { c.pc = 0x0014CA80u; return; } if (c.pc != 0x002B2C10u) [[unlikely]] return; }
L_002B2C10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B2C28; } }
L_002B2C18:
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2C24u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0013(c, 61u, depth + 1u); else { c.pc = 0x0014CA80u; return; } if (c.pc != 0x002B2C24u) [[unlikely]] return; }
L_002B2C24:
    c.budget -= 1;
L_002B2C28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2C30u);  if (depth < kMaxDepth) unit_0044(c, 212u, depth + 1u); else { c.pc = 0x00211910u; return; } if (c.pc != 0x002B2C30u) [[unlikely]] return; }
L_002B2C30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2C38u);  if (depth < kMaxDepth) unit_0044(c, 222u, depth + 1u); else { c.pc = 0x00211BA0u; return; } if (c.pc != 0x002B2C38u) [[unlikely]] return; }
L_002B2C38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B2C50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 12u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[2].d[0] << 48;  if (t) { goto L_002B2CA0; } }
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], 0u + 120u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B2C88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2C88u);  if (depth < kMaxDepth) unit_004E(c, 160u, depth + 1u); else { c.pc = 0x0023A2C0u; return; } if (c.pc != 0x002B2C88u) [[unlikely]] return; }
L_002B2C88:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002B2E70; } }
    c.budget -= 1;
L_002B2CA0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 5u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] - 24736u);
    set32(c.r[3], 0u + 1u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] - 27856u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 90u)));
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[2].w[0] + 21u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 18;
L_002B2CE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2CF0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 229u, depth + 1u); else { c.pc = 0x001374A0u; return; } if (c.pc != 0x002B2CF0u) [[unlikely]] return; }
L_002B2CF0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 8704u);
    c.r[2].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B2CE8u | kUnwind; return; } goto L_002B2CE8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2D18u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 294u, depth + 1u); else { c.pc = 0x00163880u; return; } if (c.pc != 0x002B2D18u) [[unlikely]] return; }
L_002B2D18:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 101u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B2E08; } }
    set32(c.r[7], ld32((c.r[28].w[0] - 23780u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 82u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[2].w[0] + c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 116u)));
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B2D98; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 76u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B2D88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2D6Cu);  if (depth < kMaxDepth) unit_0071(c, 195u, depth + 1u); else { c.pc = 0x002C7000u; return; } if (c.pc != 0x002B2D6Cu) [[unlikely]] return; }
L_002B2D6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 37u);  if (t) { goto L_002B2D88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2D7Cu);  if (depth < kMaxDepth) unit_004E(c, 35u, depth + 1u); else { c.pc = 0x002382B0u; return; } if (c.pc != 0x002B2D7Cu) [[unlikely]] return; }
L_002B2D7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B2E58; } }
    c.budget -= 1;
L_002B2D88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2D90u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 35u, depth + 1u); else { c.pc = 0x002382B0u; return; } if (c.pc != 0x002B2D90u) [[unlikely]] return; }
L_002B2D90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B2E58; } }
L_002B2D98:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 41u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B2DC8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 117u)));
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B2DC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2DC0u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 35u, depth + 1u); else { c.pc = 0x002382B0u; return; } if (c.pc != 0x002B2DC0u) [[unlikely]] return; }
L_002B2DC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B2E58; } }
L_002B2DC8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 76u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B2DF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2DE0u);  if (depth < kMaxDepth) unit_0071(c, 195u, depth + 1u); else { c.pc = 0x002C7000u; return; } if (c.pc != 0x002B2DE0u) [[unlikely]] return; }
L_002B2DE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 74u);  if (t) { goto L_002B2DF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2DF0u);  if (depth < kMaxDepth) unit_004E(c, 35u, depth + 1u); else { c.pc = 0x002382B0u; return; } if (c.pc != 0x002B2DF0u) [[unlikely]] return; }
L_002B2DF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B2E58; } }
L_002B2DF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2E00u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_004E(c, 35u, depth + 1u); else { c.pc = 0x002382B0u; return; } if (c.pc != 0x002B2E00u) [[unlikely]] return; }
L_002B2E00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B2E58; } }
L_002B2E08:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 102u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[4].w[0] - 19195u);
    set32(c.r[5], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] << 9);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_002B2E50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2E48u);  if (depth < kMaxDepth) unit_004E(c, 35u, depth + 1u); else { c.pc = 0x002382B0u; return; } if (c.pc != 0x002B2E48u) [[unlikely]] return; }
L_002B2E48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B2E58; } }
L_002B2E50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2E58u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_004E(c, 35u, depth + 1u); else { c.pc = 0x002382B0u; return; } if (c.pc != 0x002B2E58u) [[unlikely]] return; }
L_002B2E58:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 27u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B2E70; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 41u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002B2E70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B2E90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[6].w[0] + 12u);  if (t) { goto L_002B2EB8; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002B2F08; } }
    c.budget -= 1;
L_002B2EB8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 5u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], c.r[5].w[0] - 24734u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[6].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 90u)));
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[2].w[0] + 21u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2F04u); st8((c.r[2].w[0] + 22u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0048(c, 73u, depth + 1u); else { c.pc = 0x00220D90u; return; } if (c.pc != 0x002B2F04u) [[unlikely]] return; }
L_002B2F04:
    c.budget -= 1;
L_002B2F08:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B2F20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B2F58; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B3050; } }
L_002B2F58:
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], c.r[4].w[0] - 24732u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 90u)));
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[2].w[0] + 21u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2FA4u); st8((c.r[2].w[0] + 22u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0048(c, 66u, depth + 1u); else { c.pc = 0x00220C30u; return; } if (c.pc != 0x002B2FA4u) [[unlikely]] return; }
L_002B2FA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2FACu);  if (depth < kMaxDepth) unit_000B(c, 35u, depth + 1u); else { c.pc = 0x0012CB40u; return; } if (c.pc != 0x002B2FACu) [[unlikely]] return; }
L_002B2FAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2FB4u);  if (depth < kMaxDepth) unit_0077(c, 36u, depth + 1u); else { c.pc = 0x002DCBB0u; return; } if (c.pc != 0x002B2FB4u) [[unlikely]] return; }
L_002B2FB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2FBCu);  if (depth < kMaxDepth) unit_00B0(c, 179u, depth + 1u); else { c.pc = 0x003C1280u; return; } if (c.pc != 0x002B2FBCu) [[unlikely]] return; }
L_002B2FBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2FC4u);  if (depth < kMaxDepth) unit_0071(c, 160u, depth + 1u); else { c.pc = 0x002C6060u; return; } if (c.pc != 0x002B2FC4u) [[unlikely]] return; }
L_002B2FC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2FCCu);  if (depth < kMaxDepth) unit_00C2(c, 56u, depth + 1u); else { c.pc = 0x00408A70u; return; } if (c.pc != 0x002B2FCCu) [[unlikely]] return; }
L_002B2FCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2FD4u);  if (depth < kMaxDepth) unit_00AC(c, 5u, depth + 1u); else { c.pc = 0x003B0020u; return; } if (c.pc != 0x002B2FD4u) [[unlikely]] return; }
L_002B2FD4:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 42u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B3038; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2FF0u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 82u)));  if (depth < kMaxDepth) unit_0076(c, 286u, depth + 1u); else { c.pc = 0x002DB8F0u; return; } if (c.pc != 0x002B2FF0u) [[unlikely]] return; }
L_002B2FF0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 82u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[4].d[0] = c.r[2].d[0] << 56;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3008u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);  if (depth < kMaxDepth) unit_0076(c, 286u, depth + 1u); else { c.pc = 0x002DB8F0u; return; } if (c.pc != 0x002B3008u) [[unlikely]] return; }
L_002B3008:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3014u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 82u)));  if (depth < kMaxDepth) unit_0074(c, 295u, depth + 1u); else { c.pc = 0x002D2CE0u; return; } if (c.pc != 0x002B3014u) [[unlikely]] return; }
L_002B3014:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 82u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[4].d[0] = c.r[2].d[0] << 56;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B302Cu); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);  if (depth < kMaxDepth) unit_0074(c, 295u, depth + 1u); else { c.pc = 0x002D2CE0u; return; } if (c.pc != 0x002B302Cu) [[unlikely]] return; }
L_002B302C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B3050; } }
    c.budget -= 1;
L_002B3038:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3044u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 82u)));  if (depth < kMaxDepth) unit_0076(c, 286u, depth + 1u); else { c.pc = 0x002DB8F0u; return; } if (c.pc != 0x002B3044u) [[unlikely]] return; }
L_002B3044:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3050u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 82u)));  if (depth < kMaxDepth) unit_0074(c, 295u, depth + 1u); else { c.pc = 0x002D2CE0u; return; } if (c.pc != 0x002B3050u) [[unlikely]] return; }
L_002B3050:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B3060:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B3098; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3090u);  if (depth < kMaxDepth) unit_006E(c, 7u, depth + 1u); else { c.pc = 0x002B8230u; return; } if (c.pc != 0x002B3090u) [[unlikely]] return; }
L_002B3090:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B3108; } }
L_002B3098:
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B30F8; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 90u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[5].w[0] - 24730u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[4], 0u + 4u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[2].w[0] + 21u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[2].w[0] + 22u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002B3108; } }
L_002B30F8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_002B3108:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B3120:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < 161ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B3180; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B3170; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3164u);  if (depth < kMaxDepth) unit_006E(c, 7u, depth + 1u); else { c.pc = 0x002B8230u; return; } if (c.pc != 0x002B3164u) [[unlikely]] return; }
L_002B3164:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B3180; } }
    c.budget -= 1;
L_002B3170:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_002B3180:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B3190:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 68u)));
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;  if (t) { goto L_002B3248; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002B3208; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B31C4u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x002B31C4u) [[unlikely]] return; }
L_002B31C4:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[7], c.r[2].w[0] << 1);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 7248u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B31FCu); set32(c.r[4], c.r[4].w[0] - 18416u);  if (depth < kMaxDepth) unit_004E(c, 46u, depth + 1u); else { c.pc = 0x00238530u; return; } if (c.pc != 0x002B31FCu) [[unlikely]] return; }
L_002B31FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B3248; } }
    c.budget -= 1;
L_002B3208:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3210u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x002B3210u) [[unlikely]] return; }
L_002B3210:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[7], c.r[2].w[0] << 1);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 8016u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3248u); set32(c.r[4], c.r[4].w[0] - 18416u);  if (depth < kMaxDepth) unit_004E(c, 46u, depth + 1u); else { c.pc = 0x00238530u; return; } if (c.pc != 0x002B3248u) [[unlikely]] return; }
L_002B3248:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B3260:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[2].w[0] + 22u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 87u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B34C8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 101u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B34C8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], 0u + 6u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] - 27856u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[2].w[0] + 21u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 11;
L_002B32C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B32D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 230u, depth + 1u); else { c.pc = 0x001374E0u; return; } if (c.pc != 0x002B32D0u) [[unlikely]] return; }
L_002B32D0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 8704u);
    c.r[2].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B32C8u | kUnwind; return; } goto L_002B32C8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 42u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st8((c.r[3].w[0] + 41u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002B3418; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 82u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B330Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 294u, depth + 1u); else { c.pc = 0x00163880u; return; } if (c.pc != 0x002B330Cu) [[unlikely]] return; }
L_002B330C:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 82u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[7].d[0] = c.r[2].d[0] << 56;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3330u); c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);  if (depth < kMaxDepth) unit_0018(c, 294u, depth + 1u); else { c.pc = 0x00163880u; return; } if (c.pc != 0x002B3330u) [[unlikely]] return; }
L_002B3330:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 88u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B3390; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[5], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 159u)));
    set32(c.r[2], c.r[5].w[0] << (c.r[2].w[0] & 31u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002B3370; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3368u);  if (depth < kMaxDepth) unit_006D(c, 53u, depth + 1u); else { c.pc = 0x002B4D30u; return; } if (c.pc != 0x002B3368u) [[unlikely]] return; }
L_002B3368:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B3510; } }
L_002B3370:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3378u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006C(c, 403u, depth + 1u); else { c.pc = 0x002B3190u; return; } if (c.pc != 0x002B3378u) [[unlikely]] return; }
L_002B3378:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3384u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 403u, depth + 1u); else { c.pc = 0x002B3190u; return; } if (c.pc != 0x002B3384u) [[unlikely]] return; }
L_002B3384:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B3510; } }
    c.budget -= 1;
L_002B3390:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 82u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 116u)));
    set32(c.r[2], c.r[5].w[0] << (c.r[2].w[0] & 31u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B33D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B33C4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 53u, depth + 1u); else { c.pc = 0x002B4D30u; return; } if (c.pc != 0x002B33C4u) [[unlikely]] return; }
L_002B33C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B3510; } }
    c.budget -= 1;
L_002B33D0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 117u)));
    set32(c.r[2], c.r[5].w[0] << (c.r[2].w[0] & 31u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B33F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B33ECu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 53u, depth + 1u); else { c.pc = 0x002B4D30u; return; } if (c.pc != 0x002B33ECu) [[unlikely]] return; }
L_002B33EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B3510; } }
    c.budget -= 1;
L_002B33F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3400u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006C(c, 403u, depth + 1u); else { c.pc = 0x002B3190u; return; } if (c.pc != 0x002B3400u) [[unlikely]] return; }
L_002B3400:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B340Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 403u, depth + 1u); else { c.pc = 0x002B3190u; return; } if (c.pc != 0x002B340Cu) [[unlikely]] return; }
L_002B340C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B3510; } }
    c.budget -= 1;
L_002B3418:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 82u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3430u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 294u, depth + 1u); else { c.pc = 0x00163880u; return; } if (c.pc != 0x002B3430u) [[unlikely]] return; }
L_002B3430:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 159u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002B3468; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B345Cu);  if (depth < kMaxDepth) unit_006D(c, 53u, depth + 1u); else { c.pc = 0x002B4D30u; return; } if (c.pc != 0x002B345Cu) [[unlikely]] return; }
L_002B345C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B3510; } }
    c.budget -= 1;
L_002B3468:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 82u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 68u)));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002B3510; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3488u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x002B3488u) [[unlikely]] return; }
L_002B3488:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[2].w[0] << 1);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[4], c.r[4].w[0] - 18416u);
    set32(c.r[2], c.r[2].w[0] + 8016u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B34C0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 46u, depth + 1u); else { c.pc = 0x00238530u; return; } if (c.pc != 0x002B34C0u) [[unlikely]] return; }
L_002B34C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B3510; } }
L_002B34C8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 11u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 60u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B34E4u); st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x002B34E4u) [[unlikely]] return; }
L_002B34E4:
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 60u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B34F4u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x002B34F4u) [[unlikely]] return; }
L_002B34F4:
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 60u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3504u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x002B3504u) [[unlikely]] return; }
L_002B3504:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3510u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x002B3510u) [[unlikely]] return; }
L_002B3510:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B3530:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B3600; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002B35D0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B3568; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B3680; } }
    c.budget -= 1;
L_002B3568:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18106u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18105u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B35A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3588u);  if (depth < kMaxDepth) unit_006C(c, 319u, depth + 1u); else { c.pc = 0x002B25C0u; return; } if (c.pc != 0x002B3588u) [[unlikely]] return; }
L_002B3588:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002B3680; } }
    c.budget -= 1;
L_002B35A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18104u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B3680; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B35B8u);  if (depth < kMaxDepth) unit_006E(c, 7u, depth + 1u); else { c.pc = 0x002B8230u; return; } if (c.pc != 0x002B35B8u) [[unlikely]] return; }
L_002B35B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B3680; } }
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 18104u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002B3680; } }
L_002B35D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B35D8u);  if (depth < kMaxDepth) unit_006C(c, 321u, depth + 1u); else { c.pc = 0x002B2610u; return; } if (c.pc != 0x002B35D8u) [[unlikely]] return; }
L_002B35D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B3680; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 120u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002B3680; } }
L_002B3600:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[4].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B3680; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 42u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B3658; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 240u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002B3668; } }
    c.budget -= 1;
L_002B3658:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 120u);
    st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_002B3668:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[4], 0u + 7u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 21u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002B3688; } }
    c.budget -= 1;
L_002B3680:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002B3688:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B36A0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B37F8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B37F8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 886u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B37F8; } }
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[1].d[0] = c.r[3].sd[0] < 47ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B37F8; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 592u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8663u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002B37F8; } }
    set32(c.r[8], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[5], 0u + 9u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 151u)));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 8u);  if (t) { goto L_002B3740; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_002B3738; } }
    set32(c.r[5], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 2u);  if (t) { goto L_002B3730; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_002B3728; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B3748; } }
    c.budget -= 1;
L_002B3728:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_002B3750; } }
L_002B3730:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[9], 0u + 1u);  if (t) { goto L_002B3750; } }
L_002B3738:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[9], 0u + 2u);  if (t) { goto L_002B3750; } }
L_002B3740:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[9], 0u + 3u);  if (t) { goto L_002B3750; } }
L_002B3748:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B37F8; } }
L_002B3750:
    c.r[4].d[0] = ld8((c.r[4].w[0] + 515u));
    set32(c.r[7], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[7].d[0];  if (t) { goto L_002B37B0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 150u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], c.r[4].w[0] - 11568u);
    set32(c.r[5], c.r[9].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002B37F8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], c.r[7].w[0] << (c.r[9].w[0] & 31u));
    c.r[5].d[0] = c.r[3].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 241u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 241u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002B37F8; } }
    c.budget -= 1;
L_002B37B0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 150u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], c.r[9].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] - 11568u);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 1u));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002B37F8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], c.r[7].w[0] << (c.r[9].w[0] & 31u));
    c.r[5].d[0] = c.r[3].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 241u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[4].w[0] + 241u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_002B37F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B3800:
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], 0u + 12u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 150u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B3830; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 151u)));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B3830; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B38C8; } }
    c.budget -= 1;
L_002B3830:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 151u)));
    c.r[2].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B3848; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B38C8; } }
L_002B3848:
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B38C0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 330u)));
    set32(c.r[2], 0u + 15u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B3870; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B38C8; } }
    c.budget -= 1;
L_002B3870:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 56u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
L_002B3880:
    set32(c.r[2], c.r[3].w[0] << (c.r[6].w[0] & 31u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B38A8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 284u)));
    c.r[2].d[0] = c.r[2].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002B38A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B38C8; } }
L_002B38A8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B3880u | kUnwind; return; } goto L_002B3880; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B38C8; } }
L_002B38C0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002B38C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B38D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], 0u + 7u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[1].w[0] + 18108u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002B3910; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B38FCu);  if (depth < kMaxDepth) unit_006E(c, 7u, depth + 1u); else { c.pc = 0x002B8230u; return; } if (c.pc != 0x002B38FCu) [[unlikely]] return; }
L_002B38FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B3910; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
L_002B3910:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 196u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002B39A0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 56u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + 9600u);
    c.budget -= 5;
L_002B3938:
    set32(c.r[2], c.r[3].w[0] << (c.r[7].w[0] & 31u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B3960; } }
    c.r[2].d[0] = ld16((c.r[5].w[0] + 4u));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B3960; } }
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_002B3960:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B3938u | kUnwind; return; } goto L_002B3938; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_002B3988; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3980u);  if (depth < kMaxDepth) unit_006C(c, 448u, depth + 1u); else { c.pc = 0x002B3B70u; return; } if (c.pc != 0x002B3980u) [[unlikely]] return; }
L_002B3980:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002B3B60; } }
L_002B3988:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3994u); set32(c.r[5], 0u + 165u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x002B3994u) [[unlikely]] return; }
L_002B3994:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B39C8; } }
    c.budget -= 1;
L_002B39A0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[4].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002B39C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B3B60; } }
    c.budget -= 1;
L_002B39C8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002B3A40; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[11].d[0] = 0ull + 0ull;
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 56u)));
    set32(c.r[10], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[8], c.r[4].w[0] + 20u);
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 6;
L_002B39F0:
    set32(c.r[4], c.r[6].w[0] << (c.r[11].w[0] & 31u));
    c.r[4].d[0] = c.r[9].d[0] & c.r[4].d[0];
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B3A20; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 116u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    set32(c.r[5], c.r[6].w[0] << (c.r[5].w[0] & 31u));
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002B3A20; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002B3A20:
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.r[4].d[0] = c.r[11].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[10], c.r[10].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B39F0u | kUnwind; return; } goto L_002B39F0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 27u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002B3A40; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B3A40:
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[4].d[0];  if (t) { goto L_002B3AA8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[11].d[0] = 0ull + 0ull;
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 56u)));
    set32(c.r[10], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[8], c.r[4].w[0] + 20u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 7;
L_002B3A68:
    set32(c.r[4], c.r[6].w[0] << (c.r[11].w[0] & 31u));
    c.r[4].d[0] = c.r[9].d[0] & c.r[4].d[0];
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B3A98; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 116u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    set32(c.r[5], c.r[6].w[0] << (c.r[5].w[0] & 31u));
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002B3A98; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002B3A98:
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.r[4].d[0] = c.r[11].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[10], c.r[10].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B3A68u | kUnwind; return; } goto L_002B3A68; } }
L_002B3AA8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 10u);  if (t) { goto L_002B3AC8; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 18107u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002B3B58; } }
    c.budget -= 1;
L_002B3AC8:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_002B3B10; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 88u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B3B10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3AE8u);  if (depth < kMaxDepth) unit_006C(c, 433u, depth + 1u); else { c.pc = 0x002B3800u; return; } if (c.pc != 0x002B3AE8u) [[unlikely]] return; }
L_002B3AE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B3B10; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 12u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3B08u); st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x002B3B08u) [[unlikely]] return; }
L_002B3B08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B3B58; } }
L_002B3B10:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 11u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 30u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3B2Cu); st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x002B3B2Cu) [[unlikely]] return; }
L_002B3B2C:
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 30u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3B3Cu); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x002B3B3Cu) [[unlikely]] return; }
L_002B3B3C:
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 30u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3B4Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x002B3B4Cu) [[unlikely]] return; }
L_002B3B4C:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3B58u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x002B3B58u) [[unlikely]] return; }
L_002B3B58:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002B3B60:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B3B70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 196u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_002B3B98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002B3D28; } }
    c.budget -= 1;
L_002B3B98:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 223u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002B3BB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B3D28; } }
L_002B3BB0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 8944u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002B3BC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B3D28; } }
L_002B3BC8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    st8((c.r[1].w[0] + 18108u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 56u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], c.r[4].w[0] + 9600u);
    c.budget -= 6;
L_002B3BE0:
    set32(c.r[2], c.r[3].w[0] << (c.r[6].w[0] & 31u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B3C08; } }
    c.r[2].d[0] = ld16((c.r[4].w[0] + 4u));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B3C08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_002B3C18; } }
L_002B3C08:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B3BE0u | kUnwind; return; } goto L_002B3BE0; } }
L_002B3C18:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002B3C78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3C28u); set32(c.r[5], 0u + 165u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x002B3C28u) [[unlikely]] return; }
L_002B3C28:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 13u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 30u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3C44u); st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x002B3C44u) [[unlikely]] return; }
L_002B3C44:
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 30u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3C54u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x002B3C54u) [[unlikely]] return; }
L_002B3C54:
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 30u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3C64u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x002B3C64u) [[unlikely]] return; }
L_002B3C64:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3C70u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x002B3C70u) [[unlikely]] return; }
L_002B3C70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B3D28; } }
L_002B3C78:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] + 9600u);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
L_002B3C88:
    set32(c.r[2], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B3CB0; } }
    c.r[2].d[0] = ld16((c.r[6].w[0] + 4u));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B3CB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_002B3CC0; } }
L_002B3CB0:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B3C88u | kUnwind; return; } goto L_002B3C88; } }
L_002B3CC0:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002B3D20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3CD0u); set32(c.r[5], 0u + 165u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x002B3CD0u) [[unlikely]] return; }
L_002B3CD0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 14u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 30u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3CECu); st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x002B3CECu) [[unlikely]] return; }
L_002B3CEC:
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 30u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3CFCu); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x002B3CFCu) [[unlikely]] return; }
L_002B3CFC:
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 30u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3D0Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x002B3D0Cu) [[unlikely]] return; }
L_002B3D0C:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3D18u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x002B3D18u) [[unlikely]] return; }
L_002B3D18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_002B3D28; } }
L_002B3D20:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002B3D28:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B3D40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[3], 0u + 2u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18107u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002B3D68; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_002B3D68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_002B3D70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3D80u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0046(c, 199u, depth + 1u); else { c.pc = 0x0021B430u; return; } if (c.pc != 0x002B3D80u) [[unlikely]] return; }
L_002B3D80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B3DA8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 3u);
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3DA0u); st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_006C(c, 492u, depth + 1u); else { c.pc = 0x002B3F60u; return; } if (c.pc != 0x002B3DA0u) [[unlikely]] return; }
L_002B3DA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B3DB0; } }
L_002B3DA8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002B3DB0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B3DC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3DD4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0046(c, 199u, depth + 1u); else { c.pc = 0x0021B430u; return; } if (c.pc != 0x002B3DD4u) [[unlikely]] return; }
L_002B3DD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B3E60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3DE4u);  if (depth < kMaxDepth) unit_00AB(c, 356u, depth + 1u); else { c.pc = 0x003AFE60u; return; } if (c.pc != 0x002B3DE4u) [[unlikely]] return; }
L_002B3DE4:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B3DE8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << (c.r[16].w[0] & 31u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 56u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] << 56;  if (t) { goto L_002B3E10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3E0Cu); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);  if (depth < kMaxDepth) unit_0074(c, 297u, depth + 1u); else { c.pc = 0x002D2E00u; return; } if (c.pc != 0x002B3E0Cu) [[unlikely]] return; }
L_002B3E0C:
    c.budget -= 1;
L_002B3E10:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B3DE8u | kUnwind; return; } goto L_002B3DE8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3E2Cu); st8((c.r[2].w[0] + 41u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_004D(c, 130u, depth + 1u); else { c.pc = 0x002362E0u; return; } if (c.pc != 0x002B3E2Cu) [[unlikely]] return; }
L_002B3E2C:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3E38u); st8((c.r[2].w[0] + 99u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x002B3E38u) [[unlikely]] return; }
L_002B3E38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3E40u);  if (depth < kMaxDepth) unit_005B(c, 76u, depth + 1u); else { c.pc = 0x0026CAB0u; return; } if (c.pc != 0x002B3E40u) [[unlikely]] return; }
L_002B3E40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3E48u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 25u, depth + 1u); else { c.pc = 0x001246A0u; return; } if (c.pc != 0x002B3E48u) [[unlikely]] return; }
L_002B3E48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3E50u);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x002B3E50u) [[unlikely]] return; }
L_002B3E50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3E58u);  if (depth < kMaxDepth) unit_004E(c, 5u, depth + 1u); else { c.pc = 0x00238040u; return; } if (c.pc != 0x002B3E58u) [[unlikely]] return; }
L_002B3E58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_002B3E68; } }
L_002B3E60:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002B3E68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B3E80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3E90u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0046(c, 199u, depth + 1u); else { c.pc = 0x0021B430u; return; } if (c.pc != 0x002B3E90u) [[unlikely]] return; }
L_002B3E90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B3ED8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3EA4u); st8((c.r[2].w[0] + 41u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_004D(c, 130u, depth + 1u); else { c.pc = 0x002362E0u; return; } if (c.pc != 0x002B3EA4u) [[unlikely]] return; }
L_002B3EA4:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3EB0u); st8((c.r[2].w[0] + 99u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x002B3EB0u) [[unlikely]] return; }
L_002B3EB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3EB8u);  if (depth < kMaxDepth) unit_005B(c, 76u, depth + 1u); else { c.pc = 0x0026CAB0u; return; } if (c.pc != 0x002B3EB8u) [[unlikely]] return; }
L_002B3EB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3EC0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 25u, depth + 1u); else { c.pc = 0x001246A0u; return; } if (c.pc != 0x002B3EC0u) [[unlikely]] return; }
L_002B3EC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3EC8u);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x002B3EC8u) [[unlikely]] return; }
L_002B3EC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3ED0u);  if (depth < kMaxDepth) unit_004E(c, 5u, depth + 1u); else { c.pc = 0x00238040u; return; } if (c.pc != 0x002B3ED0u) [[unlikely]] return; }
L_002B3ED0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 4u);  if (t) { goto L_002B3EE0; } }
L_002B3ED8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002B3EE0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B3EF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3F00u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0046(c, 199u, depth + 1u); else { c.pc = 0x0021B430u; return; } if (c.pc != 0x002B3F00u) [[unlikely]] return; }
L_002B3F00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B3F48; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3F14u); st8((c.r[2].w[0] + 41u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_004D(c, 130u, depth + 1u); else { c.pc = 0x002362E0u; return; } if (c.pc != 0x002B3F14u) [[unlikely]] return; }
L_002B3F14:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3F20u); st8((c.r[2].w[0] + 99u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x002B3F20u) [[unlikely]] return; }
L_002B3F20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3F28u);  if (depth < kMaxDepth) unit_005B(c, 76u, depth + 1u); else { c.pc = 0x0026CAB0u; return; } if (c.pc != 0x002B3F28u) [[unlikely]] return; }
L_002B3F28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3F30u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 25u, depth + 1u); else { c.pc = 0x001246A0u; return; } if (c.pc != 0x002B3F30u) [[unlikely]] return; }
L_002B3F30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3F38u);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x002B3F38u) [[unlikely]] return; }
L_002B3F38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3F40u);  if (depth < kMaxDepth) unit_004E(c, 5u, depth + 1u); else { c.pc = 0x00238040u; return; } if (c.pc != 0x002B3F40u) [[unlikely]] return; }
L_002B3F40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 5u);  if (t) { goto L_002B3F50; } }
L_002B3F48:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002B3F50:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B3F60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3F70u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x002B3F70u) [[unlikely]] return; }
L_002B3F70:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3F7Cu); st8((c.r[2].w[0] + 41u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_004D(c, 130u, depth + 1u); else { c.pc = 0x002362E0u; return; } if (c.pc != 0x002B3F7Cu) [[unlikely]] return; }
L_002B3F7C:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3F88u); st8((c.r[2].w[0] + 99u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x002B3F88u) [[unlikely]] return; }
L_002B3F88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3F90u);  if (depth < kMaxDepth) unit_005B(c, 76u, depth + 1u); else { c.pc = 0x0026CAB0u; return; } if (c.pc != 0x002B3F90u) [[unlikely]] return; }
L_002B3F90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3F98u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 25u, depth + 1u); else { c.pc = 0x001246A0u; return; } if (c.pc != 0x002B3F98u) [[unlikely]] return; }
L_002B3F98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3FA0u);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x002B3FA0u) [[unlikely]] return; }
L_002B3FA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3FA8u);  if (depth < kMaxDepth) unit_004E(c, 5u, depth + 1u); else { c.pc = 0x00238040u; return; } if (c.pc != 0x002B3FA8u) [[unlikely]] return; }
L_002B3FA8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B3FC0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[2].w[0] - 24560u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002B0000u < 16384u) { entry = entries_006C[(t - 0x002B0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002B3FF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u + 5u);
    c.budget -= 4;
    [[clang::musttail]] return unit_006D(c, 1u, depth);
}

}
