#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0073[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0,
    5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0,
    0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0,
    21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25,
    0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 29, 0, 0, 0, 0, 0, 30, 0, 31, 0, 0, 0, 0, 0, 32,
    0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 38, 0,
    0, 0, 0, 39, 0, 40, 0, 41, 0, 42, 0, 0, 0, 0, 43, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 47, 0, 48, 0, 0,
    49, 0, 0, 50, 0, 51, 0, 0, 52, 0, 53, 0, 0, 54, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0,
    0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0,
    63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0,
    0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 76, 0, 0, 0, 77, 0, 0,
    0, 0, 0, 78, 0, 79, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0,
    0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0,
    93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0,
    0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 118, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 122, 0, 0, 0, 0, 0, 123,
    0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0,
    0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0,
    0, 135, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0,
    142, 0, 0, 0, 0, 143, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 148, 0, 0, 0,
    0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0,
    155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 160, 0,
    0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0,
    166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 175, 0, 0, 0, 0, 0, 0, 176,
    0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 180, 0, 0, 0, 0, 0, 0, 181,
    0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0,
    0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 191, 0, 0, 0, 0, 0,
    0, 192, 0, 0, 0, 0, 193, 0, 194, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0,
    0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211,
    0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0,
    223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 231, 0, 0, 232, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 238, 0, 0, 239, 0, 240, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 0,
    0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0,
    0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0,
    0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 254, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 257, 0, 0, 0, 258, 0, 0, 0, 0, 0,
    0, 0, 259, 0, 260, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 264, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 269,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0,
    0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0,
    275, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0,
    0, 0, 0, 280, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 285, 0, 0, 0, 0, 0, 0, 0, 286, 0,
    0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    290, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0,
    0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 297, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 303, 0, 304, 0, 305, 0,
    0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    310, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 316, 0, 0, 0,
    0, 0, 0, 0, 317, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    322, 0, 0, 0, 0, 323, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 325, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 335, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 338, 0, 0,
    339, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 342, 0, 343, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 345,
    0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 355, 0, 0, 356, 0, 0,
    0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0,
    0, 0, 362, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 365, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 367, 0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 370, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0,
    0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 376, 0, 0, 377, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 389, 0, 0, 0, 0,
    390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0,
    0, 0, 393, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0,
    0, 0, 0, 397, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 400, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    404, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 407, 0, 0, 0,
    0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0,
    415, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 425, 0, 426, 0, 427, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 434, 0, 435, 0, 436, 0, 437,
    0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 440, 0, 441, 0, 0, 442, 0, 0, 0, 0, 0, 443, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 444, 0, 445, 0, 0, 0, 0, 0, 446, 0, 447, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0,
    0, 0, 0, 0, 450, 0, 0, 451, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 462, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 464, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 471, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 476, 0, 0, 0, 477, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 480,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 484, 0,
    0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 491, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    493, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0,
};

void unit_0073(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002CC000;
    case 2u: goto L_002CC010;
    case 3u: goto L_002CC04C;
    case 4u: goto L_002CC070;
    case 5u: goto L_002CC080;
    case 6u: goto L_002CC0B0;
    case 7u: goto L_002CC0C0;
    case 8u: goto L_002CC0C8;
    case 9u: goto L_002CC0DC;
    case 10u: goto L_002CC104;
    case 11u: goto L_002CC128;
    case 12u: goto L_002CC13C;
    case 13u: goto L_002CC150;
    case 14u: goto L_002CC16C;
    case 15u: goto L_002CC190;
    case 16u: goto L_002CC198;
    case 17u: goto L_002CC1AC;
    case 18u: goto L_002CC1C8;
    case 19u: goto L_002CC1D8;
    case 20u: goto L_002CC1EC;
    case 21u: goto L_002CC200;
    case 22u: goto L_002CC230;
    case 23u: goto L_002CC244;
    case 24u: goto L_002CC260;
    case 25u: goto L_002CC27C;
    case 26u: goto L_002CC28C;
    case 27u: goto L_002CC2AC;
    case 28u: goto L_002CC2BC;
    case 29u: goto L_002CC2C4;
    case 30u: goto L_002CC2DC;
    case 31u: goto L_002CC2E4;
    case 32u: goto L_002CC2FC;
    case 33u: goto L_002CC304;
    case 34u: goto L_002CC31C;
    case 35u: goto L_002CC348;
    case 36u: goto L_002CC35C;
    case 37u: goto L_002CC364;
    case 38u: goto L_002CC378;
    case 39u: goto L_002CC38C;
    case 40u: goto L_002CC394;
    case 41u: goto L_002CC39C;
    case 42u: goto L_002CC3A4;
    case 43u: goto L_002CC3B8;
    case 44u: goto L_002CC3C0;
    case 45u: goto L_002CC3D0;
    case 46u: goto L_002CC3E4;
    case 47u: goto L_002CC3EC;
    case 48u: goto L_002CC3F4;
    case 49u: goto L_002CC400;
    case 50u: goto L_002CC40C;
    case 51u: goto L_002CC414;
    case 52u: goto L_002CC420;
    case 53u: goto L_002CC428;
    case 54u: goto L_002CC434;
    case 55u: goto L_002CC43C;
    case 56u: goto L_002CC450;
    case 57u: goto L_002CC470;
    case 58u: goto L_002CC4C8;
    case 59u: goto L_002CC4F4;
    case 60u: goto L_002CC510;
    case 61u: goto L_002CC54C;
    case 62u: goto L_002CC570;
    case 63u: goto L_002CC580;
    case 64u: goto L_002CC5CC;
    case 65u: goto L_002CC5E0;
    case 66u: goto L_002CC5F0;
    case 67u: goto L_002CC608;
    case 68u: goto L_002CC61C;
    case 69u: goto L_002CC630;
    case 70u: goto L_002CC658;
    case 71u: goto L_002CC680;
    case 72u: goto L_002CC698;
    case 73u: goto L_002CC6A8;
    case 74u: goto L_002CC6C0;
    case 75u: goto L_002CC6DC;
    case 76u: goto L_002CC6E4;
    case 77u: goto L_002CC6F4;
    case 78u: goto L_002CC70C;
    case 79u: goto L_002CC714;
    case 80u: goto L_002CC724;
    case 81u: goto L_002CC730;
    case 82u: goto L_002CC750;
    case 83u: goto L_002CC778;
    case 84u: goto L_002CC78C;
    case 85u: goto L_002CC7B0;
    case 86u: goto L_002CC808;
    case 87u: goto L_002CC834;
    case 88u: goto L_002CC850;
    case 89u: goto L_002CC890;
    case 90u: goto L_002CC8A0;
    case 91u: goto L_002CC8B8;
    case 92u: goto L_002CC8E8;
    case 93u: goto L_002CC900;
    case 94u: goto L_002CC934;
    case 95u: goto L_002CC970;
    case 96u: goto L_002CC9A0;
    case 97u: goto L_002CC9A8;
    case 98u: goto L_002CC9C0;
    case 99u: goto L_002CC9E8;
    case 100u: goto L_002CC9F8;
    case 101u: goto L_002CCA10;
    case 102u: goto L_002CCA20;
    case 103u: goto L_002CCA34;
    case 104u: goto L_002CCA48;
    case 105u: goto L_002CCA74;
    case 106u: goto L_002CCAB4;
    case 107u: goto L_002CCAC4;
    case 108u: goto L_002CCB08;
    case 109u: goto L_002CCB3C;
    case 110u: goto L_002CCB7C;
    case 111u: goto L_002CCBB0;
    case 112u: goto L_002CCBE4;
    case 113u: goto L_002CCBF4;
    case 114u: goto L_002CCC50;
    case 115u: goto L_002CCC5C;
    case 116u: goto L_002CCC78;
    case 117u: goto L_002CCCDC;
    case 118u: goto L_002CCCE4;
    case 119u: goto L_002CCD1C;
    case 120u: goto L_002CCD24;
    case 121u: goto L_002CCD5C;
    case 122u: goto L_002CCD64;
    case 123u: goto L_002CCD7C;
    case 124u: goto L_002CCD84;
    case 125u: goto L_002CCDAC;
    case 126u: goto L_002CCDC0;
    case 127u: goto L_002CCDC8;
    case 128u: goto L_002CCDF0;
    case 129u: goto L_002CCE04;
    case 130u: goto L_002CCE10;
    case 131u: goto L_002CCE2C;
    case 132u: goto L_002CCE40;
    case 133u: goto L_002CCE54;
    case 134u: goto L_002CCE6C;
    case 135u: goto L_002CCE84;
    case 136u: goto L_002CCE8C;
    case 137u: goto L_002CCEA0;
    case 138u: goto L_002CCEB4;
    case 139u: goto L_002CCEC8;
    case 140u: goto L_002CCEDC;
    case 141u: goto L_002CCEF0;
    case 142u: goto L_002CCF00;
    case 143u: goto L_002CCF14;
    case 144u: goto L_002CCF1C;
    case 145u: goto L_002CCF38;
    case 146u: goto L_002CCF54;
    case 147u: goto L_002CCF68;
    case 148u: goto L_002CCF70;
    case 149u: goto L_002CCF8C;
    case 150u: goto L_002CCFA8;
    case 151u: goto L_002CCFBC;
    case 152u: goto L_002CCFC4;
    case 153u: goto L_002CCFE0;
    case 154u: goto L_002CCFF8;
    case 155u: goto L_002CD000;
    case 156u: goto L_002CD01C;
    case 157u: goto L_002CD034;
    case 158u: goto L_002CD03C;
    case 159u: goto L_002CD058;
    case 160u: goto L_002CD078;
    case 161u: goto L_002CD08C;
    case 162u: goto L_002CD0A8;
    case 163u: goto L_002CD0C4;
    case 164u: goto L_002CD0D8;
    case 165u: goto L_002CD0EC;
    case 166u: goto L_002CD100;
    case 167u: goto L_002CD11C;
    case 168u: goto L_002CD14C;
    case 169u: goto L_002CD154;
    case 170u: goto L_002CD170;
    case 171u: goto L_002CD1A0;
    case 172u: goto L_002CD1A8;
    case 173u: goto L_002CD1C4;
    case 174u: goto L_002CD1D8;
    case 175u: goto L_002CD1E0;
    case 176u: goto L_002CD1FC;
    case 177u: goto L_002CD204;
    case 178u: goto L_002CD234;
    case 179u: goto L_002CD258;
    case 180u: goto L_002CD260;
    case 181u: goto L_002CD27C;
    case 182u: goto L_002CD284;
    case 183u: goto L_002CD2C8;
    case 184u: goto L_002CD2EC;
    case 185u: goto L_002CD2F8;
    case 186u: goto L_002CD314;
    case 187u: goto L_002CD328;
    case 188u: goto L_002CD330;
    case 189u: goto L_002CD34C;
    case 190u: goto L_002CD360;
    case 191u: goto L_002CD368;
    case 192u: goto L_002CD384;
    case 193u: goto L_002CD398;
    case 194u: goto L_002CD3A0;
    case 195u: goto L_002CD3BC;
    case 196u: goto L_002CD3D0;
    case 197u: goto L_002CD3E0;
    case 198u: goto L_002CD3F0;
    case 199u: goto L_002CD408;
    case 200u: goto L_002CD41C;
    case 201u: goto L_002CD430;
    case 202u: goto L_002CD488;
    case 203u: goto L_002CD4AC;
    case 204u: goto L_002CD4C0;
    case 205u: goto L_002CD4D0;
    case 206u: goto L_002CD4F0;
    case 207u: goto L_002CD52C;
    case 208u: goto L_002CD540;
    case 209u: goto L_002CD550;
    case 210u: goto L_002CD56C;
    case 211u: goto L_002CD57C;
    case 212u: goto L_002CD5A0;
    case 213u: goto L_002CD5B8;
    case 214u: goto L_002CD60C;
    case 215u: goto L_002CD634;
    case 216u: goto L_002CD658;
    case 217u: goto L_002CD6A8;
    case 218u: goto L_002CD6B0;
    case 219u: goto L_002CD6D8;
    case 220u: goto L_002CD6F0;
    case 221u: goto L_002CD718;
    case 222u: goto L_002CD768;
    case 223u: goto L_002CD780;
    case 224u: goto L_002CD7AC;
    case 225u: goto L_002CD7BC;
    case 226u: goto L_002CD7D0;
    case 227u: goto L_002CD7F8;
    case 228u: goto L_002CD828;
    case 229u: goto L_002CD880;
    case 230u: goto L_002CD8B0;
    case 231u: goto L_002CD918;
    case 232u: goto L_002CD924;
    case 233u: goto L_002CD930;
    case 234u: goto L_002CD940;
    case 235u: goto L_002CD968;
    case 236u: goto L_002CD998;
    case 237u: goto L_002CD9B0;
    case 238u: goto L_002CD9BC;
    case 239u: goto L_002CD9C8;
    case 240u: goto L_002CD9D0;
    case 241u: goto L_002CD9D8;
    case 242u: goto L_002CD9E8;
    case 243u: goto L_002CDA08;
    case 244u: goto L_002CDA38;
    case 245u: goto L_002CDA40;
    case 246u: goto L_002CDA6C;
    case 247u: goto L_002CDA88;
    case 248u: goto L_002CDAC8;
    case 249u: goto L_002CDAE0;
    case 250u: goto L_002CDB04;
    case 251u: goto L_002CDB20;
    case 252u: goto L_002CDB30;
    case 253u: goto L_002CDB58;
    case 254u: goto L_002CDB98;
    case 255u: goto L_002CDBA4;
    case 256u: goto L_002CDBD0;
    case 257u: goto L_002CDBD8;
    case 258u: goto L_002CDBE8;
    case 259u: goto L_002CDC08;
    case 260u: goto L_002CDC10;
    case 261u: goto L_002CDC30;
    case 262u: goto L_002CDC44;
    case 263u: goto L_002CDC64;
    case 264u: goto L_002CDC70;
    case 265u: goto L_002CDCD0;
    case 266u: goto L_002CDD24;
    case 267u: goto L_002CDD40;
    case 268u: goto L_002CDD68;
    case 269u: goto L_002CDD7C;
    case 270u: goto L_002CDDF0;
    case 271u: goto L_002CDE08;
    case 272u: goto L_002CDE20;
    case 273u: goto L_002CDE38;
    case 274u: goto L_002CDE70;
    case 275u: goto L_002CDE80;
    case 276u: goto L_002CDE90;
    case 277u: goto L_002CDEB0;
    case 278u: goto L_002CDEBC;
    case 279u: goto L_002CDEE8;
    case 280u: goto L_002CDF0C;
    case 281u: goto L_002CDF14;
    case 282u: goto L_002CDF28;
    case 283u: goto L_002CDF38;
    case 284u: goto L_002CDF50;
    case 285u: goto L_002CDF58;
    case 286u: goto L_002CDF78;
    case 287u: goto L_002CDF8C;
    case 288u: goto L_002CDFB0;
    case 289u: goto L_002CDFB8;
    case 290u: goto L_002CE000;
    case 291u: goto L_002CE014;
    case 292u: goto L_002CE054;
    case 293u: goto L_002CE068;
    case 294u: goto L_002CE084;
    case 295u: goto L_002CE098;
    case 296u: goto L_002CE0C4;
    case 297u: goto L_002CE0D0;
    case 298u: goto L_002CE0D8;
    case 299u: goto L_002CE0EC;
    case 300u: goto L_002CE118;
    case 301u: goto L_002CE138;
    case 302u: goto L_002CE160;
    case 303u: goto L_002CE168;
    case 304u: goto L_002CE170;
    case 305u: goto L_002CE178;
    case 306u: goto L_002CE194;
    case 307u: goto L_002CE1A8;
    case 308u: goto L_002CE1C8;
    case 309u: goto L_002CE1D4;
    case 310u: goto L_002CE200;
    case 311u: goto L_002CE224;
    case 312u: goto L_002CE22C;
    case 313u: goto L_002CE240;
    case 314u: goto L_002CE250;
    case 315u: goto L_002CE268;
    case 316u: goto L_002CE270;
    case 317u: goto L_002CE290;
    case 318u: goto L_002CE2A4;
    case 319u: goto L_002CE2C8;
    case 320u: goto L_002CE2D0;
    case 321u: goto L_002CE3C8;
    case 322u: goto L_002CE400;
    case 323u: goto L_002CE414;
    case 324u: goto L_002CE41C;
    case 325u: goto L_002CE490;
    case 326u: goto L_002CE4A4;
    case 327u: goto L_002CE4C4;
    case 328u: goto L_002CE4D0;
    case 329u: goto L_002CE50C;
    case 330u: goto L_002CE538;
    case 331u: goto L_002CE558;
    case 332u: goto L_002CE638;
    case 333u: goto L_002CE640;
    case 334u: goto L_002CE66C;
    case 335u: goto L_002CE674;
    case 336u: goto L_002CE6A8;
    case 337u: goto L_002CE6EC;
    case 338u: goto L_002CE6F4;
    case 339u: goto L_002CE700;
    case 340u: goto L_002CE714;
    case 341u: goto L_002CE724;
    case 342u: goto L_002CE740;
    case 343u: goto L_002CE748;
    case 344u: goto L_002CE768;
    case 345u: goto L_002CE77C;
    case 346u: goto L_002CE79C;
    case 347u: goto L_002CE7A8;
    case 348u: goto L_002CE7F8;
    case 349u: goto L_002CE824;
    case 350u: goto L_002CE838;
    case 351u: goto L_002CE85C;
    case 352u: goto L_002CE870;
    case 353u: goto L_002CE8A0;
    case 354u: goto L_002CE8E0;
    case 355u: goto L_002CE8E8;
    case 356u: goto L_002CE8F4;
    case 357u: goto L_002CE90C;
    case 358u: goto L_002CE920;
    case 359u: goto L_002CE930;
    case 360u: goto L_002CE954;
    case 361u: goto L_002CE968;
    case 362u: goto L_002CE988;
    case 363u: goto L_002CE990;
    case 364u: goto L_002CE9E0;
    case 365u: goto L_002CEA10;
    case 366u: goto L_002CEA24;
    case 367u: goto L_002CEA44;
    case 368u: goto L_002CEA4C;
    case 369u: goto L_002CEA64;
    case 370u: goto L_002CEA78;
    case 371u: goto L_002CEAA8;
    case 372u: goto L_002CEAF8;
    case 373u: goto L_002CEB0C;
    case 374u: goto L_002CEBA4;
    case 375u: goto L_002CEBB8;
    case 376u: goto L_002CEBC4;
    case 377u: goto L_002CEBD0;
    case 378u: goto L_002CEBE4;
    case 379u: goto L_002CEC28;
    case 380u: goto L_002CEC44;
    case 381u: goto L_002CEC60;
    case 382u: goto L_002CEC88;
    case 383u: goto L_002CECA8;
    case 384u: goto L_002CECBC;
    case 385u: goto L_002CECD4;
    case 386u: goto L_002CED1C;
    case 387u: goto L_002CED38;
    case 388u: goto L_002CED58;
    case 389u: goto L_002CED6C;
    case 390u: goto L_002CED80;
    case 391u: goto L_002CEDD0;
    case 392u: goto L_002CEDEC;
    case 393u: goto L_002CEE08;
    case 394u: goto L_002CEE1C;
    case 395u: goto L_002CEE5C;
    case 396u: goto L_002CEE70;
    case 397u: goto L_002CEE8C;
    case 398u: goto L_002CEEA0;
    case 399u: goto L_002CEEB8;
    case 400u: goto L_002CEF04;
    case 401u: goto L_002CEF18;
    case 402u: goto L_002CEF40;
    case 403u: goto L_002CEF58;
    case 404u: goto L_002CEF80;
    case 405u: goto L_002CEF9C;
    case 406u: goto L_002CEFDC;
    case 407u: goto L_002CEFF0;
    case 408u: goto L_002CF00C;
    case 409u: goto L_002CF028;
    case 410u: goto L_002CF04C;
    case 411u: goto L_002CF070;
    case 412u: goto L_002CF0A4;
    case 413u: goto L_002CF0B8;
    case 414u: goto L_002CF0EC;
    case 415u: goto L_002CF100;
    case 416u: goto L_002CF120;
    case 417u: goto L_002CF14C;
    case 418u: goto L_002CF208;
    case 419u: goto L_002CF230;
    case 420u: goto L_002CF250;
    case 421u: goto L_002CF2E0;
    case 422u: goto L_002CF364;
    case 423u: goto L_002CF3A0;
    case 424u: goto L_002CF4A4;
    case 425u: goto L_002CF4AC;
    case 426u: goto L_002CF4B4;
    case 427u: goto L_002CF4BC;
    case 428u: goto L_002CF4D0;
    case 429u: goto L_002CF500;
    case 430u: goto L_002CF560;
    case 431u: goto L_002CF5A0;
    case 432u: goto L_002CF5B0;
    case 433u: goto L_002CF5DC;
    case 434u: goto L_002CF5E4;
    case 435u: goto L_002CF5EC;
    case 436u: goto L_002CF5F4;
    case 437u: goto L_002CF5FC;
    case 438u: goto L_002CF610;
    case 439u: goto L_002CF63C;
    case 440u: goto L_002CF644;
    case 441u: goto L_002CF64C;
    case 442u: goto L_002CF658;
    case 443u: goto L_002CF670;
    case 444u: goto L_002CF69C;
    case 445u: goto L_002CF6A4;
    case 446u: goto L_002CF6BC;
    case 447u: goto L_002CF6C4;
    case 448u: goto L_002CF6D0;
    case 449u: goto L_002CF6F0;
    case 450u: goto L_002CF710;
    case 451u: goto L_002CF71C;
    case 452u: goto L_002CF730;
    case 453u: goto L_002CF748;
    case 454u: goto L_002CF770;
    case 455u: goto L_002CF798;
    case 456u: goto L_002CF7AC;
    case 457u: goto L_002CF7D8;
    case 458u: goto L_002CF808;
    case 459u: goto L_002CF894;
    case 460u: goto L_002CF8C4;
    case 461u: goto L_002CF8E0;
    case 462u: goto L_002CF8F4;
    case 463u: goto L_002CF938;
    case 464u: goto L_002CF98C;
    case 465u: goto L_002CF99C;
    case 466u: goto L_002CF9C0;
    case 467u: goto L_002CF9E4;
    case 468u: goto L_002CFA10;
    case 469u: goto L_002CFA30;
    case 470u: goto L_002CFA58;
    case 471u: goto L_002CFA68;
    case 472u: goto L_002CFA94;
    case 473u: goto L_002CFAB8;
    case 474u: goto L_002CFAE0;
    case 475u: goto L_002CFB20;
    case 476u: goto L_002CFB30;
    case 477u: goto L_002CFB40;
    case 478u: goto L_002CFB58;
    case 479u: goto L_002CFBD8;
    case 480u: goto L_002CFBFC;
    case 481u: goto L_002CFD00;
    case 482u: goto L_002CFD30;
    case 483u: goto L_002CFD5C;
    case 484u: goto L_002CFD78;
    case 485u: goto L_002CFD8C;
    case 486u: goto L_002CFDD0;
    case 487u: goto L_002CFE08;
    case 488u: goto L_002CFE38;
    case 489u: goto L_002CFE70;
    case 490u: goto L_002CFEA0;
    case 491u: goto L_002CFEAC;
    case 492u: goto L_002CFEB4;
    case 493u: goto L_002CFF00;
    case 494u: goto L_002CFF18;
    case 495u: goto L_002CFF78;
    case 496u: goto L_002CFFB4;
    case 497u: goto L_002CFFE8;
    default: bad_entry(c, 0x002CC000u); return;
    }
L_002CC000:
    st32((c.r[1].w[0] - 7504u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002CC010:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002CC028; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 12u);  if (t) { goto L_002CC02C; } }
L_002CC028:
    set32(c.r[16], 0u + 11u);
    c.budget -= 1;
L_002CC02C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 23056u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[13] = ld32((c.r[2].w[0]));
    c.f[12] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC04Cu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CC04Cu) [[unlikely]] return; }
L_002CC04C:
    set32(c.r[3], c.r[16].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BB0000u);
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] - 14624u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[5], 0u + 12u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC070u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002CC070u) [[unlikely]] return; }
L_002CC070:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CC080:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8u)));
    c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 447u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 448u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC0B0u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 446u)));  if (depth < kMaxDepth) unit_0071(c, 236u, depth + 1u); else { c.pc = 0x002C7D70u; return; } if (c.pc != 0x002CC0B0u) [[unlikely]] return; }
L_002CC0B0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC0C0u); c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_0071(c, 237u, depth + 1u); else { c.pc = 0x002C7DC0u; return; } if (c.pc != 0x002CC0C0u) [[unlikely]] return; }
L_002CC0C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC0C8u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CC0C8u) [[unlikely]] return; }
L_002CC0C8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.f[14] = 0u;
    c.f[13] = ld32((c.r[2].w[0] + 440u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC0DCu); c.f[12] = ld32((c.r[2].w[0] + 436u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CC0DCu) [[unlikely]] return; }
L_002CC0DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FB30000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F990000u);
    c.r[4].d[0] = c.r[3].d[0] | 13107ull;
    c.r[3].d[0] = c.r[2].d[0] | 39322ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[4].w[0];
    c.f[13] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC104u);  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002CC104u) [[unlikely]] return; }
L_002CC104:
    set32(c.r[3], c.r[17].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BB0000u);
    set32(c.r[3], c.r[3].w[0] - c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] + 19696u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[5], 0u + 12u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC128u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002CC128u) [[unlikely]] return; }
L_002CC128:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002CC190; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC13Cu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CC13Cu) [[unlikely]] return; }
L_002CC13C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.f[14] = 0u;
    c.f[13] = ld32((c.r[2].w[0] + 440u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC150u); c.f[12] = ld32((c.r[2].w[0] + 436u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CC150u) [[unlikely]] return; }
L_002CC150:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2E60000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41880000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC16Cu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CC16Cu) [[unlikely]] return; }
L_002CC16C:
    set32(c.r[3], c.r[16].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BB0000u);
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] - 29744u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[5], 0u + 12u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC190u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002CC190u) [[unlikely]] return; }
L_002CC190:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC198u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CC198u) [[unlikely]] return; }
L_002CC198:
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.f[14] = 0u;
    c.f[13] = ld32((c.r[2].w[0] + 440u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC1ACu); c.f[12] = ld32((c.r[2].w[0] + 436u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CC1ACu) [[unlikely]] return; }
L_002CC1AC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41300000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42240000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC1C8u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CC1C8u) [[unlikely]] return; }
L_002CC1C8:
    c.r[1].d[0] = 0ll < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002CC210; } }
    c.budget -= 1;
L_002CC1D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BB0000u);
    set32(c.r[4], c.r[4].w[0] - 11024u);
    set32(c.r[5], 0u + 12u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC1ECu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002CC1ECu) [[unlikely]] return; }
L_002CC1EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41D00000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC200u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CC200u) [[unlikely]] return; }
L_002CC200:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC1D8u | kUnwind; return; } goto L_002CC1D8; } }
L_002CC210:
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 444u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 10u);  if (t) { goto L_002CC228; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002CC248; } }
L_002CC228:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC230u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CC230u) [[unlikely]] return; }
L_002CC230:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BB0000u);
    set32(c.r[5], 0u + 12u);
    set32(c.r[4], c.r[4].w[0] - 11264u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC244u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002CC244u) [[unlikely]] return; }
L_002CC244:
    c.budget -= 1;
L_002CC248:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002CC260:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC27Cu); set32(c.r[4], c.r[2].w[0] + 212u);  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x002CC27Cu) [[unlikely]] return; }
L_002CC27C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 65u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC28Cu); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CC28Cu) [[unlikely]] return; }
L_002CC28C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 22992u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = ld32((c.r[2].w[0]));
    c.f[13] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC2ACu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CC2ACu) [[unlikely]] return; }
L_002CC2AC:
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[5], 0u + 11u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC2BCu); set32(c.r[4], c.r[2].w[0] + 228u);  if (depth < kMaxDepth) unit_00AC(c, 67u, depth + 1u); else { c.pc = 0x003B0B80u; return; } if (c.pc != 0x002CC2BCu) [[unlikely]] return; }
L_002CC2BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC2C4u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CC2C4u) [[unlikely]] return; }
L_002CC2C4:
    set32(c.r[4], 0u + 33u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC2DCu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0073(c, 57u, depth + 1u); else { c.pc = 0x002CC470u; return; } if (c.pc != 0x002CC2DCu) [[unlikely]] return; }
L_002CC2DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC2E4u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CC2E4u) [[unlikely]] return; }
L_002CC2E4:
    set32(c.r[4], 0u + 34u);
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC2FCu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0073(c, 57u, depth + 1u); else { c.pc = 0x002CC470u; return; } if (c.pc != 0x002CC2FCu) [[unlikely]] return; }
L_002CC2FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC304u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CC304u) [[unlikely]] return; }
L_002CC304:
    c.f[12] = c.f[20];
    set32(c.r[4], 0u + 35u);
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC31Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0073(c, 57u, depth + 1u); else { c.pc = 0x002CC470u; return; } if (c.pc != 0x002CC31Cu) [[unlikely]] return; }
L_002CC31C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002CC3C8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002CC370; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002CC340; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CC3F8; } }
L_002CC340:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC348u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CC348u) [[unlikely]] return; }
L_002CC348:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2C80000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC35Cu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CC35Cu) [[unlikely]] return; }
L_002CC35C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC364u);  if (depth < kMaxDepth) unit_0073(c, 63u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x002CC364u) [[unlikely]] return; }
L_002CC364:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CC3F8; } }
    c.budget -= 1;
L_002CC370:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC378u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CC378u) [[unlikely]] return; }
L_002CC378:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2C80000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC38Cu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CC38Cu) [[unlikely]] return; }
L_002CC38C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC394u); c.r[4].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x002CC394u) [[unlikely]] return; }
L_002CC394:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC39Cu);  if (depth < kMaxDepth) unit_0073(c, 63u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x002CC39Cu) [[unlikely]] return; }
L_002CC39C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC3A4u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CC3A4u) [[unlikely]] return; }
L_002CC3A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC3B8u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CC3B8u) [[unlikely]] return; }
L_002CC3B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC3C0u);  if (depth < kMaxDepth) unit_0073(c, 63u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x002CC3C0u) [[unlikely]] return; }
L_002CC3C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CC3F8; } }
L_002CC3C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC3D0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CC3D0u) [[unlikely]] return; }
L_002CC3D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC3E4u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CC3E4u) [[unlikely]] return; }
L_002CC3E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC3ECu); c.r[4].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x002CC3ECu) [[unlikely]] return; }
L_002CC3EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC3F4u);  if (depth < kMaxDepth) unit_0073(c, 63u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x002CC3F4u) [[unlikely]] return; }
L_002CC3F4:
    c.budget -= 1;
L_002CC3F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC400u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CC400u) [[unlikely]] return; }
L_002CC400:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC40Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 60u, depth + 1u); else { c.pc = 0x002CC510u; return; } if (c.pc != 0x002CC40Cu) [[unlikely]] return; }
L_002CC40C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC414u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CC414u) [[unlikely]] return; }
L_002CC414:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC420u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 60u, depth + 1u); else { c.pc = 0x002CC510u; return; } if (c.pc != 0x002CC420u) [[unlikely]] return; }
L_002CC420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC428u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CC428u) [[unlikely]] return; }
L_002CC428:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC434u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0073(c, 60u, depth + 1u); else { c.pc = 0x002CC510u; return; } if (c.pc != 0x002CC434u) [[unlikely]] return; }
L_002CC434:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC43Cu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CC43Cu) [[unlikely]] return; }
L_002CC43C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BB0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] - 8144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC450u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002CC450u) [[unlikely]] return; }
L_002CC450:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CC470:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == 0ull; c.f[13] = c.f[12];  if (t) { goto L_002CC488; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CC4A8; } }
L_002CC488:
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] - c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BB0000u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - 14624u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[1].w[0] - 7452u), c.r[2].w[0]);
    c.budget -= 8;
L_002CC4A8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_002CC4D0; } }
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7468u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC4C8u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CC4C8u) [[unlikely]] return; }
L_002CC4C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CC4E0; } }
L_002CC4D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7468u), c.r[2].w[0]);
    c.budget -= 4;
L_002CC4E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[4], c.r[4].w[0] - 7504u);
    set32(c.r[5], 0u + 11u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC4F4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002CC4F4u) [[unlikely]] return; }
L_002CC4F4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7504u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002CC510:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002CC528; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 31u);  if (t) { goto L_002CC52C; } }
L_002CC528:
    set32(c.r[16], 0u + 30u);
    c.budget -= 1;
L_002CC52C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 22992u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = ld32((c.r[2].w[0]));
    c.f[13] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC54Cu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CC54Cu) [[unlikely]] return; }
L_002CC54C:
    set32(c.r[3], c.r[16].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BB0000u);
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] - 14624u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[5], 0u + 11u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC570u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002CC570u) [[unlikely]] return; }
L_002CC570:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CC580:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BB0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 6944u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7452u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 7504u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[5], 0u + 11u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.f[0] = ld32((c.r[2].w[0] + 376u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC5CCu); st32((c.r[1].w[0] - 7468u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002CC5CCu) [[unlikely]] return; }
L_002CC5CC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7504u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002CC5E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC5F0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CC5F0u) [[unlikely]] return; }
L_002CC5F0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = ld32((c.r[2].w[0] + 36u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC608u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002CC608u) [[unlikely]] return; }
L_002CC608:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BB0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] - 8384u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC61Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002CC61Cu) [[unlikely]] return; }
L_002CC61C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002CC630:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC658u); set32(c.r[4], c.r[2].w[0] + 212u);  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x002CC658u) [[unlikely]] return; }
L_002CC658:
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[2].w[0] - 22904u);
    c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 63u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 71u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC680u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CC680u) [[unlikely]] return; }
L_002CC680:
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.f[13] = ld32((c.r[2].w[0]));
    c.f[12] = 0u;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC698u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CC698u) [[unlikely]] return; }
L_002CC698:
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[5], 0u + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC6A8u); set32(c.r[4], c.r[2].w[0] + 244u);  if (depth < kMaxDepth) unit_00AC(c, 67u, depth + 1u); else { c.pc = 0x003B0B80u; return; } if (c.pc != 0x002CC6A8u) [[unlikely]] return; }
L_002CC6A8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 71u)));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002CC748; } }
    c.budget -= 1;
L_002CC6C0:
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 61u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 87u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC6DCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 93u, depth + 1u); else { c.pc = 0x002CC900u; return; } if (c.pc != 0x002CC6DCu) [[unlikely]] return; }
L_002CC6DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC6E4u); c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CC6E4u) [[unlikely]] return; }
L_002CC6E4:
    c.f[13] = ld32((c.r[16].w[0]));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC6F4u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CC6F4u) [[unlikely]] return; }
L_002CC6F4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC70Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0073(c, 85u, depth + 1u); else { c.pc = 0x002CC7B0u; return; } if (c.pc != 0x002CC70Cu) [[unlikely]] return; }
L_002CC70C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC714u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CC714u) [[unlikely]] return; }
L_002CC714:
    c.f[13] = ld32((c.r[16].w[0]));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC724u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CC724u) [[unlikely]] return; }
L_002CC724:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC730u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 88u, depth + 1u); else { c.pc = 0x002CC850u; return; } if (c.pc != 0x002CC730u) [[unlikely]] return; }
L_002CC730:
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 71u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC6C0u | kUnwind; return; } goto L_002CC6C0; } }
L_002CC748:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC750u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CC750u) [[unlikely]] return; }
L_002CC750:
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[12] = 0u;
    set32(c.r[2], c.r[2].w[0] - 22888u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 71u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[13] = ld32((c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC778u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CC778u) [[unlikely]] return; }
L_002CC778:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BB0000u);
    set32(c.r[5], 0u + 12u);
    set32(c.r[4], c.r[4].w[0] - 3584u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC78Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002CC78Cu) [[unlikely]] return; }
L_002CC78C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002CC7B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == 0ull; c.f[13] = c.f[12];  if (t) { goto L_002CC7C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CC7E8; } }
L_002CC7C8:
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] - c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BB0000u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - 14624u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[1].w[0] - 7452u), c.r[2].w[0]);
    c.budget -= 8;
L_002CC7E8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_002CC810; } }
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7468u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC808u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CC808u) [[unlikely]] return; }
L_002CC808:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CC820; } }
L_002CC810:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7468u), c.r[2].w[0]);
    c.budget -= 4;
L_002CC820:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[4], c.r[4].w[0] - 7504u);
    set32(c.r[5], 0u + 12u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC834u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002CC834u) [[unlikely]] return; }
L_002CC834:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7504u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002CC850:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_002CC860; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 41u);  if (t) { goto L_002CC864; } }
L_002CC860:
    set32(c.r[4], 0u + 40u);
    c.budget -= 1;
L_002CC864:
    set32(c.r[3], c.r[4].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BB0000u);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - 14624u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[5], 0u + 12u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 9;
    { set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  [[clang::musttail]] return unit_0076(c, 8u, depth); }
L_002CC890:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC8A0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CC8A0u) [[unlikely]] return; }
L_002CC8A0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC8B8u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002CC8B8u) [[unlikely]] return; }
L_002CC8B8:
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BB0000u);
    set32(c.r[2], c.r[2].w[0] - 14624u);
    set32(c.r[5], 0u + 12u);
    set32(c.r[6], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 71u)));
    set32(c.r[4], c.r[3].w[0] + 40u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC8E8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002CC8E8u) [[unlikely]] return; }
L_002CC8E8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002CC900:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], c.r[2].w[0] - 21632u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull; c.r[16].d[0] = ld8((c.r[2].w[0]));  if (t) { goto L_002CC950; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC934u);  if (depth < kMaxDepth) unit_0071(c, 183u, depth + 1u); else { c.pc = 0x002C6CB0u; return; } if (c.pc != 0x002CC934u) [[unlikely]] return; }
L_002CC934:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CC950; } }
    set32(c.r[2], 0u + 49u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_002CC950; } }
    set32(c.r[16], 0u + 50u);
    c.budget -= 2;
L_002CC950:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CC970:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 84u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CC9F8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 83u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CC9F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC9A0u);  if (depth < kMaxDepth) unit_0071(c, 183u, depth + 1u); else { c.pc = 0x002C6CB0u; return; } if (c.pc != 0x002CC9A0u) [[unlikely]] return; }
L_002CC9A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC9A8u); c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CC9A8u) [[unlikely]] return; }
L_002CC9A8:
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC30C0000u);
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC9C0u); c.f[12] = ld32((c.r[3].w[0] + 380u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CC9C0u) [[unlikely]] return; }
L_002CC9C0:
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[5].d[0] = c.r[16].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[6], 0u + 14u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 63u)));
    st8((c.r[3].w[0] + 366u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.f[12] = ld32((c.r[2].w[0] + 384u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC9E8u); set32(c.r[4], c.r[2].w[0] + 268u);  if (depth < kMaxDepth) unit_007C(c, 110u, depth + 1u); else { c.pc = 0x002F0B80u; return; } if (c.pc != 0x002CC9E8u) [[unlikely]] return; }
L_002CC9E8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[5], 0u + 14u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC9F8u); set32(c.r[4], c.r[2].w[0] + 268u);  if (depth < kMaxDepth) unit_007C(c, 105u, depth + 1u); else { c.pc = 0x002F0AD0u; return; } if (c.pc != 0x002CC9F8u) [[unlikely]] return; }
L_002CC9F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CCA10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCA20u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CCA20u) [[unlikely]] return; }
L_002CCA20:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[5], 0u + 14u);
    set32(c.r[4], c.r[4].w[0] + 32672u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCA34u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002CCA34u) [[unlikely]] return; }
L_002CCA34:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[5], 0u + 14u);
    set32(c.r[4], c.r[4].w[0] + 32432u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCA48u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002CCA48u) [[unlikely]] return; }
L_002CCA48:
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01180000u);
    set32(c.r[2], c.r[2].w[0] - 24320u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[16], ld32((c.r[2].w[0] + 24u)));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 2u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCA74u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_0071(c, 149u, depth + 1u); else { c.pc = 0x002C5DE0u; return; } if (c.pc != 0x002CCA74u) [[unlikely]] return; }
L_002CCA74:
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 396u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00BB0000u);  if (t) { goto L_002CCAC8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[2], c.r[2].w[0] - 32384u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7452u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 7504u);
    c.f[0] = ld32((c.r[3].w[0] + 400u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[5], 0u + 14u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCAB4u); st32((c.r[1].w[0] - 7468u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002CCAB4u) [[unlikely]] return; }
L_002CCAB4:
    set32(c.r[4], ld32((c.r[28].w[0] - 23332u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCAC4u); set32(c.r[6], 0u + 14u);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x002D8090u; return; } if (c.pc != 0x002CCAC4u) [[unlikely]] return; }
L_002CCAC4:
    c.budget -= 1;
L_002CCAC8:
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 388u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00BB0000u);  if (t) { goto L_002CCBF8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[2], c.r[2].w[0] - 31664u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7452u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 7504u);
    c.f[0] = ld32((c.r[3].w[0] + 392u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[5], 0u + 14u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCB08u); st32((c.r[1].w[0] - 7468u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002CCB08u) [[unlikely]] return; }
L_002CCB08:
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BB0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[3], c.r[3].w[0] - 32624u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[4], c.r[4].w[0] - 7504u);
    st32((c.r[1].w[0] - 7452u), c.r[3].w[0]);
    set32(c.r[5], 0u + 14u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[6], 0u + 1u);
    c.f[0] = ld32((c.r[2].w[0] + 392u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCB3Cu); st32((c.r[1].w[0] - 7468u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002CCB3Cu) [[unlikely]] return; }
L_002CCB3C:
    set32(c.r[6], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[2], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 476u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00BB0000u);  if (t) { goto L_002CCBF8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[2], c.r[2].w[0] - 13424u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7452u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 7504u);
    c.f[0] = ld32((c.r[6].w[0] + 392u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[5], 0u + 14u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCB7Cu); st32((c.r[1].w[0] - 7468u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002CCB7Cu) [[unlikely]] return; }
L_002CCB7C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BB0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[3], c.r[3].w[0] - 31904u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[4], c.r[4].w[0] - 7504u);
    st32((c.r[1].w[0] - 7452u), c.r[3].w[0]);
    set32(c.r[5], 0u + 14u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[6], 0u + 1u);
    c.f[0] = ld32((c.r[2].w[0] + 392u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCBB0u); st32((c.r[1].w[0] - 7468u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002CCBB0u) [[unlikely]] return; }
L_002CCBB0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BB0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[3], c.r[3].w[0] - 32144u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[4], c.r[4].w[0] - 7504u);
    st32((c.r[1].w[0] - 7452u), c.r[3].w[0]);
    set32(c.r[5], 0u + 14u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[6], 0u + 1u);
    c.f[0] = ld32((c.r[2].w[0] + 392u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCBE4u); st32((c.r[1].w[0] - 7468u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002CCBE4u) [[unlikely]] return; }
L_002CCBE4:
    set32(c.r[4], ld32((c.r[28].w[0] - 23328u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCBF4u); set32(c.r[6], 0u + 14u);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x002D8090u; return; } if (c.pc != 0x002CCBF4u) [[unlikely]] return; }
L_002CCBF4:
    c.budget -= 1;
L_002CCBF8:
    c.r[8].d[0] = ld8((c.r[16].w[0] + 3u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42190000u);
    set32(c.r[7], c.r[7].w[0] - 20512u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BB0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[3], c.r[3].w[0] - 14624u);
    set32(c.r[4], c.r[4].w[0] - 7504u);
    set32(c.r[5], 0u + 14u);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[6], 0u + 1u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    st32((c.r[1].w[0] - 7468u), c.r[2].w[0]);
    set32(c.r[2], c.r[7].w[0] << 4);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[2], c.r[2].w[0] - c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCC50u); st32((c.r[1].w[0] - 7452u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002CCC50u) [[unlikely]] return; }
L_002CCC50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCC5Cu); st32((c.r[1].w[0] - 7504u), 0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CCC5Cu) [[unlikely]] return; }
L_002CCC5C:
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7468u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 12u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCC78u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 10u)));  if (depth < kMaxDepth) unit_0072(c, 7u, depth + 1u); else { c.pc = 0x002C8060u; return; } if (c.pc != 0x002CCC78u) [[unlikely]] return; }
L_002CCC78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CCEE0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 7u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002CCD30; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002CCCF0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002CCCB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CCD68; } }
    c.budget -= 1;
L_002CCCB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[2], c.r[2].w[0] - 23280u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7452u), c.r[2].w[0]);
    c.f[14] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3040000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x432B0000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCCDCu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CCCDCu) [[unlikely]] return; }
L_002CCCDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCCE4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0072(c, 126u, depth + 1u); else { c.pc = 0x002C9240u; return; } if (c.pc != 0x002CCCE4u) [[unlikely]] return; }
L_002CCCE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CCD68; } }
    c.budget -= 1;
L_002CCCF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[2], c.r[2].w[0] - 23040u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7452u), c.r[2].w[0]);
    c.f[14] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2EC0000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x432B0000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCD1Cu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CCD1Cu) [[unlikely]] return; }
L_002CCD1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCD24u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0072(c, 126u, depth + 1u); else { c.pc = 0x002C9240u; return; } if (c.pc != 0x002CCD24u) [[unlikely]] return; }
L_002CCD24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CCD68; } }
    c.budget -= 1;
L_002CCD30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[2], c.r[2].w[0] - 22800u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[1].w[0] - 7452u), c.r[2].w[0]);
    c.f[14] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3030000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x432B0000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCD5Cu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CCD5Cu) [[unlikely]] return; }
L_002CCD5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCD64u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0072(c, 126u, depth + 1u); else { c.pc = 0x002C9240u; return; } if (c.pc != 0x002CCD64u) [[unlikely]] return; }
L_002CCD64:
    c.budget -= 1;
L_002CCD68:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[4], c.r[4].w[0] - 7504u);
    set32(c.r[5], 0u + 13u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCD7Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002CCD7Cu) [[unlikely]] return; }
L_002CCD7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCD84u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CCD84u) [[unlikely]] return; }
L_002CCD84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3270000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[3], c.r[3].w[0] - 22560u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x432B0000u);
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCDACu); st32((c.r[1].w[0] - 7452u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CCDACu) [[unlikely]] return; }
L_002CCDAC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[4].w[0] - 7504u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCDC0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002CCDC0u) [[unlikely]] return; }
L_002CCDC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCDC8u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CCDC8u) [[unlikely]] return; }
L_002CCDC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[3], c.r[3].w[0] - 22320u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x432B0000u);
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCDF0u); st32((c.r[1].w[0] - 7452u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CCDF0u) [[unlikely]] return; }
L_002CCDF0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[4].w[0] - 7504u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCE04u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002CCE04u) [[unlikely]] return; }
L_002CCE04:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCE10u); st32((c.r[1].w[0] - 7504u), 0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CCE10u) [[unlikely]] return; }
L_002CCE10:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2A40000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCE2Cu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CCE2Cu) [[unlikely]] return; }
L_002CCE2C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[5], 0u + 14u);
    set32(c.r[4], c.r[4].w[0] - 25920u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCE40u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002CCE40u) [[unlikely]] return; }
L_002CCE40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1900000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCE54u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CCE54u) [[unlikely]] return; }
L_002CCE54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCE6Cu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002CCE6Cu) [[unlikely]] return; }
L_002CCE6C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 4u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 478u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCE84u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0072(c, 263u, depth + 1u); else { c.pc = 0x002CA7E0u; return; } if (c.pc != 0x002CCE84u) [[unlikely]] return; }
L_002CCE84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCE8Cu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CCE8Cu) [[unlikely]] return; }
L_002CCE8C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BB0000u);
    set32(c.r[5], 0u + 14u);
    set32(c.r[4], c.r[4].w[0] - 14384u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCEA0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002CCEA0u) [[unlikely]] return; }
L_002CCEA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BB0000u);
    set32(c.r[5], 0u + 14u);
    set32(c.r[4], c.r[4].w[0] - 14624u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCEB4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002CCEB4u) [[unlikely]] return; }
L_002CCEB4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BB0000u);
    set32(c.r[5], 0u + 14u);
    set32(c.r[4], c.r[4].w[0] - 12704u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCEC8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002CCEC8u) [[unlikely]] return; }
L_002CCEC8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BB0000u);
    set32(c.r[5], 0u + 14u);
    set32(c.r[4], c.r[4].w[0] - 12944u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCEDCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002CCEDCu) [[unlikely]] return; }
L_002CCEDC:
    c.budget -= 1;
L_002CCEE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CCEF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCF00u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CCF00u) [[unlikely]] return; }
L_002CCF00:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BB0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] - 10544u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCF14u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002CCF14u) [[unlikely]] return; }
L_002CCF14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCF1Cu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CCF1Cu) [[unlikely]] return; }
L_002CCF1C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x423C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42D20000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCF38u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CCF38u) [[unlikely]] return; }
L_002CCF38:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].d[0] = c.r[3].d[0] | 26214ull;
    c.f[13] = c.r[2].w[0];
    c.f[12] = c.r[3].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCF54u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002CCF54u) [[unlikely]] return; }
L_002CCF54:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] - 21840u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCF68u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002CCF68u) [[unlikely]] return; }
L_002CCF68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCF70u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CCF70u) [[unlikely]] return; }
L_002CCF70:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B20000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCF8Cu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CCF8Cu) [[unlikely]] return; }
L_002CCF8C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F8C0000u);
    c.f[12] = c.r[3].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCFA8u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002CCFA8u) [[unlikely]] return; }
L_002CCFA8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BB0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] - 10304u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCFBCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002CCFBCu) [[unlikely]] return; }
L_002CCFBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCFC4u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CCFC4u) [[unlikely]] return; }
L_002CCFC4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43040000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42D20000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCFE0u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CCFE0u) [[unlikely]] return; }
L_002CCFE0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[6], 0u + 9u);
    set32(c.r[5], ld32((c.r[2].w[0] + 420u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCFF8u); c.r[7].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 263u, depth + 1u); else { c.pc = 0x002CA7E0u; return; } if (c.pc != 0x002CCFF8u) [[unlikely]] return; }
L_002CCFF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD000u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CD000u) [[unlikely]] return; }
L_002CD000:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43040000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A20000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD01Cu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CD01Cu) [[unlikely]] return; }
L_002CD01C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[6], 0u + 9u);
    set32(c.r[5], ld32((c.r[2].w[0] + 416u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD034u); c.r[7].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 263u, depth + 1u); else { c.pc = 0x002CA7E0u; return; } if (c.pc != 0x002CD034u) [[unlikely]] return; }
L_002CD034:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD03Cu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CD03Cu) [[unlikely]] return; }
L_002CD03C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43040000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42540000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD058u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CD058u) [[unlikely]] return; }
L_002CD058:
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 420u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 416u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], 0u + 5u);  if (t) { goto L_002CD078; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD078u); set32(c.r[2], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0072(c, 126u, depth + 1u); else { c.pc = 0x002C9240u; return; } if (c.pc != 0x002CD078u) [[unlikely]] return; }
L_002CD078:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 9u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD08Cu); c.r[7].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 263u, depth + 1u); else { c.pc = 0x002CA7E0u; return; } if (c.pc != 0x002CD08Cu) [[unlikely]] return; }
L_002CD08C:
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 412u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002CD0F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD0A8u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CD0A8u) [[unlikely]] return; }
L_002CD0A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43120000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD0C4u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CD0C4u) [[unlikely]] return; }
L_002CD0C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BB0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 4816u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD0D8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002CD0D8u) [[unlikely]] return; }
L_002CD0D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BB0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 4576u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD0ECu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002CD0ECu) [[unlikely]] return; }
L_002CD0EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CD1D8; } }
    c.budget -= 1;
L_002CD0F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD100u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CD100u) [[unlikely]] return; }
L_002CD100:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C20000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD11Cu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CD11Cu) [[unlikely]] return; }
L_002CD11C:
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BB0000u);
    set32(c.r[2], c.r[2].w[0] - 14624u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[6], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 424u)));
    set32(c.r[4], c.r[3].w[0] + 19u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD14Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002CD14Cu) [[unlikely]] return; }
L_002CD14C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD154u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CD154u) [[unlikely]] return; }
L_002CD154:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD170u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CD170u) [[unlikely]] return; }
L_002CD170:
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BB0000u);
    set32(c.r[2], c.r[2].w[0] - 14624u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[6], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 424u)));
    set32(c.r[4], c.r[3].w[0] + 20u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD1A0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002CD1A0u) [[unlikely]] return; }
L_002CD1A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD1A8u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CD1A8u) [[unlikely]] return; }
L_002CD1A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x430F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD1C4u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CD1C4u) [[unlikely]] return; }
L_002CD1C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BB0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] - 8624u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD1D8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002CD1D8u) [[unlikely]] return; }
L_002CD1D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD1E0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CD1E0u) [[unlikely]] return; }
L_002CD1E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0E00000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD1FCu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CD1FCu) [[unlikely]] return; }
L_002CD1FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD204u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0072(c, 126u, depth + 1u); else { c.pc = 0x002C9240u; return; } if (c.pc != 0x002CD204u) [[unlikely]] return; }
L_002CD204:
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.f[0] = ld32((c.r[3].w[0] + 428u));
    c.f[14] = c.f[13];
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD234u);  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002CD234u) [[unlikely]] return; }
L_002CD234:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BB0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[2], c.r[2].w[0] - 8864u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[4], c.r[4].w[0] - 7504u);
    st32((c.r[1].w[0] - 7452u), c.r[2].w[0]);
    set32(c.r[5], 0u + 11u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD258u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002CD258u) [[unlikely]] return; }
L_002CD258:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD260u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CD260u) [[unlikely]] return; }
L_002CD260:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0E00000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD27Cu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CD27Cu) [[unlikely]] return; }
L_002CD27C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD284u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_0072(c, 126u, depth + 1u); else { c.pc = 0x002C9240u; return; } if (c.pc != 0x002CD284u) [[unlikely]] return; }
L_002CD284:
    set32(c.r[5], ld32((c.r[28].w[0] - 30300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    set32(c.r[4], c.r[4].w[0] - 18428u);
    c.f[1] = c.r[3].w[0];
    c.f[14] = c.f[13];
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 424u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD2C8u);  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002CD2C8u) [[unlikely]] return; }
L_002CD2C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BB0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[2], c.r[2].w[0] - 8864u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[4], c.r[4].w[0] - 7504u);
    st32((c.r[1].w[0] - 7452u), c.r[2].w[0]);
    set32(c.r[5], 0u + 11u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD2ECu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002CD2ECu) [[unlikely]] return; }
L_002CD2EC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD2F8u); st32((c.r[1].w[0] - 7504u), 0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CD2F8u) [[unlikely]] return; }
L_002CD2F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x428A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC20C0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD314u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CD314u) [[unlikely]] return; }
L_002CD314:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] - 29760u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD328u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002CD328u) [[unlikely]] return; }
L_002CD328:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD330u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CD330u) [[unlikely]] return; }
L_002CD330:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42D00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2080000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD34Cu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CD34Cu) [[unlikely]] return; }
L_002CD34C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] - 27360u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD360u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002CD360u) [[unlikely]] return; }
L_002CD360:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD368u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CD368u) [[unlikely]] return; }
L_002CD368:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x431E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC20C0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD384u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CD384u) [[unlikely]] return; }
L_002CD384:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] - 29520u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD398u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002CD398u) [[unlikely]] return; }
L_002CD398:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD3A0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CD3A0u) [[unlikely]] return; }
L_002CD3A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2080000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD3BCu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002CD3BCu) [[unlikely]] return; }
L_002CD3BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] - 27120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD3D0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002CD3D0u) [[unlikely]] return; }
L_002CD3D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002CD3E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD3F0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CD3F0u) [[unlikely]] return; }
L_002CD3F0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = ld32((c.r[2].w[0] + 408u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD408u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002CD408u) [[unlikely]] return; }
L_002CD408:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BB0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] - 10784u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD41Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002CD41Cu) [[unlikely]] return; }
L_002CD41C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002CD430:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 412u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002CD478; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002CD470; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CD468; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CD480; } }
L_002CD468:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 77u);  if (t) { goto L_002CD480; } }
L_002CD470:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 79u);  if (t) { goto L_002CD480; } }
L_002CD478:
    set32(c.r[16], 0u + 78u);
    c.budget -= 2;
L_002CD480:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD488u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CD488u) [[unlikely]] return; }
L_002CD488:
    set32(c.r[3], c.r[16].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BB0000u);
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] - 14624u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[5], 0u + 11u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD4ACu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002CD4ACu) [[unlikely]] return; }
L_002CD4AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BB0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 3616u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD4C0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002CD4C0u) [[unlikely]] return; }
L_002CD4C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CD4D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 76u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CD540; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD4F0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002CD4F0u) [[unlikely]] return; }
L_002CD4F0:
    set32(c.r[4], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BB0000u);
    set32(c.r[3], c.r[3].w[0] - 22864u);
    set32(c.r[2], c.r[2].w[0] - 14624u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 76u));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD52Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002CD52Cu) [[unlikely]] return; }
L_002CD52C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BB0000u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[4], c.r[4].w[0] + 2656u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD540u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002CD540u) [[unlikely]] return; }
L_002CD540:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002CD550:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD56Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0073(c, 295u, depth + 1u); else { c.pc = 0x002CE098u; return; } if (c.pc != 0x002CD56Cu) [[unlikely]] return; }
L_002CD56C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CD5A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD57Cu);  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x002CD57Cu) [[unlikely]] return; }
L_002CD57C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[16], ld32((c.r[3].w[0] + 7552u)));
    st32((c.r[3].w[0] + 7552u), c.r[17].w[0]);
    st32((c.r[4].w[0] + 7556u), c.r[28].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002CD5A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD5A0u);  if (depth < kMaxDepth) unit_0003(c, 127u, depth + 1u); else { c.pc = 0x0010D378u; return; } if (c.pc != 0x002CD5A0u) [[unlikely]] return; }
L_002CD5A0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002CD5A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CD5B8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 11u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[16].w[0] - 18216u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] - 18216u)));
    st32((c.r[4].w[0] - 18212u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] - 18216u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_002CD600; } }
    st32((c.r[16].w[0] - 18216u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[2].w[0] - 18252u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002CD64C; } }
L_002CD600:
    set32(c.r[4], ld32((c.r[2].w[0] - 18264u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD60Cu);  if (depth < kMaxDepth) unit_0001(c, 66u, depth + 1u); else { c.pc = 0x00104310u; return; } if (c.pc != 0x002CD60Cu) [[unlikely]] return; }
L_002CD60C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 18284u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00BC0000u);  if (t) { goto L_002CD63C; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 7552u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_002CD63C; } }
    set32(c.r[4], ld32((c.r[2].w[0] - 18272u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD634u);  if (depth < kMaxDepth) unit_0001(c, 66u, depth + 1u); else { c.pc = 0x00104310u; return; } if (c.pc != 0x002CD634u) [[unlikely]] return; }
L_002CD634:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CD644; } }
L_002CD63C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[2].w[0] - 18252u), 0u);
    c.budget -= 2;
L_002CD644:
    st32((c.r[16].w[0] - 18216u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_002CD64C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CD658:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 128u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[23].d[0]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 20;
L_002CD6A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD6B0u); set32(c.r[4], ld32((c.r[2].w[0] - 18272u)));  if (depth < kMaxDepth) unit_0001(c, 68u, depth + 1u); else { c.pc = 0x00104320u; return; } if (c.pc != 0x002CD6B0u) [[unlikely]] return; }
L_002CD6B0:
    set32(c.r[3], ld32((c.r[20].w[0] - 18216u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], ld32((c.r[23].w[0] - 18288u)));  if (t) { goto L_002CD6DC; } }
    st32((c.r[19].w[0] - 18252u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[20].w[0] - 18216u), 0u);
    st32((c.r[2].w[0] - 18284u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD6D8u); st32((c.r[30].w[0] + 7572u), 0u);  if (depth < kMaxDepth) unit_0001(c, 30u, depth + 1u); else { c.pc = 0x00104120u; return; } if (c.pc != 0x002CD6D8u) [[unlikely]] return; }
L_002CD6D8:
    set32(c.r[2], ld32((c.r[23].w[0] - 18288u)));
    c.budget -= 1;
L_002CD6DC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[4], c.r[22].w[0] - 21584u);  if (t) { goto L_002CD6F0; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 7552u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD6F0u); set32(c.r[6], ld32((c.r[17].w[0] - 18212u)));  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x002CD6F0u) [[unlikely]] return; }
L_002CD6F0:
    set32(c.r[3], ld32((c.r[18].w[0] + 7552u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CD71C; } }
    set32(c.r[2], ld32((c.r[17].w[0] - 18212u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CD71C; } }
    c.r[16].d[0] = c.r[28].d[0] + 0ull;
    set32(c.r[28], ld32((c.r[21].w[0] + 7556u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD718u); set32(c.r[4], ld32((c.r[17].w[0] - 18212u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CD718u) [[unlikely]] return; }
L_002CD718:
    c.r[28].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002CD71C:
    st32((c.r[19].w[0] - 18252u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CD6A8u | kUnwind; return; } goto L_002CD6A8; } }
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[19], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[20].w[0] - 18284u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 14;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0] + 80u), c.r[31].d[0]);  if (t) { goto L_002CD7C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD768u);  if (depth < kMaxDepth) unit_0001(c, 38u, depth + 1u); else { c.pc = 0x001041D0u; return; } if (c.pc != 0x002CD768u) [[unlikely]] return; }
L_002CD768:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[3].w[0] + 7576u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD780u); set32(c.r[5], c.r[5].w[0] + 7584u);  if (depth < kMaxDepth) unit_0001(c, 40u, depth + 1u); else { c.pc = 0x001041E0u; return; } if (c.pc != 0x002CD780u) [[unlikely]] return; }
L_002CD780:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    set32(c.r[3], c.r[3].w[0] + 7632u);
    set32(c.r[2], c.r[2].w[0] - 10664u);
    st32((c.r[3].w[0] + 12u), c.r[16].w[0]);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[18].w[0]);
    st32((c.r[3].w[0] + 20u), c.r[17].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD7ACu); st32((c.r[3].w[0] + 16u), 0u);  if (depth < kMaxDepth) unit_0001(c, 24u, depth + 1u); else { c.pc = 0x001040E0u; return; } if (c.pc != 0x002CD7ACu) [[unlikely]] return; }
L_002CD7AC:
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] - 18284u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD7BCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 28u, depth + 1u); else { c.pc = 0x00104100u; return; } if (c.pc != 0x002CD7BCu) [[unlikely]] return; }
L_002CD7BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_002CD7D4; } }
L_002CD7C4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD7D0u); c.r[19].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 34u, depth + 1u); else { c.pc = 0x00104170u; return; } if (c.pc != 0x002CD7D0u) [[unlikely]] return; }
L_002CD7D0:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_002CD7D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002CD7F8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[7].d[0] = c.r[4].d[0] | c.r[5].d[0];
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002CD858; } }
    set32(c.r[9], ld32((c.r[7].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[10].d[0] = c.r[9].d[0] | c.r[5].d[0];  if (t) { goto L_002CD858; } }
    set32(c.r[8], c.r[7].w[0] + 16u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[8].w[0] + c.r[6].w[0]);
    c.budget -= 4;
L_002CD828:
    set32(c.r[5], c.r[10].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[4], c.r[9].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[8].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CD828u | kUnwind; return; } goto L_002CD828; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[7].w[0] + 4u)));  if (t) { goto L_002CD860; } }
L_002CD858:
    c.r[11].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 2;
L_002CD860:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_002CD8A8; } }
    set32(c.r[9], ld32((c.r[7].w[0] + 12u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[10].d[0] = c.r[9].d[0] | c.r[2].d[0];  if (t) { goto L_002CD8A8; } }
    set32(c.r[8], c.r[7].w[0] + 80u);
    set32(c.r[2], c.r[8].w[0] + c.r[6].w[0]);
    c.budget -= 2;
L_002CD880:
    set32(c.r[5], c.r[10].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[4], c.r[9].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[8].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CD880u | kUnwind; return; } goto L_002CD880; } }
L_002CD8A8:
    c.budget -= 2;
    { set32(c.r[4], c.r[11].w[0] - 18216u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CD5B8u | kUnwind; return; } goto L_002CD5B8; }
L_002CD8B0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] - 18264u)));
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; st64((c.r[29].w[0] + 32u), c.r[16].d[0]);  if (t) { goto L_002CD8F8; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], ld32((c.r[16].w[0] - 18260u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[18].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_002CD8FC; } }
    set32(c.r[2], ld32((c.r[18].w[0] - 18256u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_002CD954; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002CD904; } }
L_002CD8F8:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 1;
L_002CD8FC:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_002CD904:
    st32((c.r[29].w[0] + 20u), 0u);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD918u); st32((c.r[29].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0001(c, 60u, depth + 1u); else { c.pc = 0x001042E0u; return; } if (c.pc != 0x002CD918u) [[unlikely]] return; }
L_002CD918:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD924u); st32((c.r[17].w[0] - 18264u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0001(c, 60u, depth + 1u); else { c.pc = 0x001042E0u; return; } if (c.pc != 0x002CD924u) [[unlikely]] return; }
L_002CD924:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD930u); st32((c.r[16].w[0] - 18260u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0001(c, 60u, depth + 1u); else { c.pc = 0x001042E0u; return; } if (c.pc != 0x002CD930u) [[unlikely]] return; }
L_002CD930:
    st32((c.r[18].w[0] - 18256u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD940u); st32((c.r[29].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_0001(c, 60u, depth + 1u); else { c.pc = 0x001042E0u; return; } if (c.pc != 0x002CD940u) [[unlikely]] return; }
L_002CD940:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[3].w[0] - 18272u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[2].w[0] - 18252u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 5;
L_002CD954:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002CD968:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], ld32((c.r[2].w[0] - 18284u)));
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_002CD9A0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[3].w[0] - 18216u), c.r[2].w[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD998u); set32(c.r[4], ld32((c.r[16].w[0] - 18272u)));  if (depth < kMaxDepth) unit_0001(c, 64u, depth + 1u); else { c.pc = 0x00104300u; return; } if (c.pc != 0x002CD998u) [[unlikely]] return; }
L_002CD998:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_002CD9A8; } }
L_002CD9A0:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 2;
L_002CD9A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD9B0u); set32(c.r[4], ld32((c.r[2].w[0] - 18264u)));  if (depth < kMaxDepth) unit_0001(c, 62u, depth + 1u); else { c.pc = 0x001042F0u; return; } if (c.pc != 0x002CD9B0u) [[unlikely]] return; }
L_002CD9B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD9BCu); set32(c.r[4], ld32((c.r[3].w[0] - 18260u)));  if (depth < kMaxDepth) unit_0001(c, 62u, depth + 1u); else { c.pc = 0x001042F0u; return; } if (c.pc != 0x002CD9BCu) [[unlikely]] return; }
L_002CD9BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD9C8u); set32(c.r[4], ld32((c.r[3].w[0] - 18256u)));  if (depth < kMaxDepth) unit_0001(c, 62u, depth + 1u); else { c.pc = 0x001042F0u; return; } if (c.pc != 0x002CD9C8u) [[unlikely]] return; }
L_002CD9C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD9D0u); set32(c.r[4], ld32((c.r[16].w[0] - 18272u)));  if (depth < kMaxDepth) unit_0001(c, 62u, depth + 1u); else { c.pc = 0x001042F0u; return; } if (c.pc != 0x002CD9D0u) [[unlikely]] return; }
L_002CD9D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD9D8u);  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x002CD9D8u) [[unlikely]] return; }
L_002CD9D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD9E8u); c.r[4].d[0] = c.r[4].d[0] | 18ull;  if (depth < kMaxDepth) unit_0001(c, 374u, depth + 1u); else { c.pc = 0x00106940u; return; } if (c.pc != 0x002CD9E8u) [[unlikely]] return; }
L_002CD9E8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002CD9FC; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010D378u | kUnwind; return; } [[clang::musttail]] return unit_0003(c, 127u, depth); }
L_002CD9FC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CDA08:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] - 18240u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 10;
    { const bool t = c.r[3].sd[0] >= 0; st64((c.r[29].w[0] + 16u), c.r[17].d[0]);  if (t) { goto L_002CDA38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDA38u);  if (depth < kMaxDepth) unit_0073(c, 249u, depth + 1u); else { c.pc = 0x002CDAE0u; return; } if (c.pc != 0x002CDA38u) [[unlikely]] return; }
L_002CDA38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDA40u);  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x002CDA40u) [[unlikely]] return; }
L_002CDA40:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[17], ld32((c.r[5].w[0] + 7560u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[4].w[0] + 7568u), c.r[16].w[0]);
    st32((c.r[5].w[0] + 7560u), c.r[18].w[0]);
    st32((c.r[3].w[0] + 7564u), c.r[28].w[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002CDA70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDA6Cu);  if (depth < kMaxDepth) unit_0003(c, 127u, depth + 1u); else { c.pc = 0x0010D378u; return; } if (c.pc != 0x002CDA6Cu) [[unlikely]] return; }
L_002CDA6C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002CDA70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002CDA88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], ld32((c.r[2].w[0] + 7560u)));
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_002CDACC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 18268u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002CDAD0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[16].d[0] = c.r[28].d[0] + 0ull;
    set32(c.r[28], ld32((c.r[2].w[0] + 7564u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDAC8u); set32(c.r[4], ld32((c.r[3].w[0] + 7568u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CDAC8u) [[unlikely]] return; }
L_002CDAC8:
    c.r[28].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002CDACC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002CDAD0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CDAE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[18], 0u + 1u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDB04u); st32((c.r[17].w[0] - 18268u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x002CDB04u) [[unlikely]] return; }
L_002CDB04:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 9592u);
    c.r[4].d[0] = c.r[4].d[0] | 18ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDB20u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 373u, depth + 1u); else { c.pc = 0x001068C8u; return; } if (c.pc != 0x002CDB20u) [[unlikely]] return; }
L_002CDB20:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_002CDB34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDB30u);  if (depth < kMaxDepth) unit_0003(c, 127u, depth + 1u); else { c.pc = 0x0010D378u; return; } if (c.pc != 0x002CDB30u) [[unlikely]] return; }
L_002CDB30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 1;
L_002CDB34:
    st32((c.r[17].w[0] - 18268u), 0u);
    st32((c.r[2].w[0] - 18240u), c.r[18].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[2], 0u + 1u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002CDB58:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 80u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[22].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0] + 160u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDB98u); st32((c.r[29].w[0] + 16u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_0073(c, 230u, depth + 1u); else { c.pc = 0x002CD8B0u; return; } if (c.pc != 0x002CDB98u) [[unlikely]] return; }
L_002CDB98:
    set32(c.r[4], ld32((c.r[22].w[0] - 18264u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDBA4u);  if (depth < kMaxDepth) unit_0001(c, 70u, depth + 1u); else { c.pc = 0x00104330u; return; } if (c.pc != 0x002CDBA4u) [[unlikely]] return; }
L_002CDBA4:
    set32(c.r[3], ld32((c.r[22].w[0] - 18264u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CDE3C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 7576u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[6].w[0] - 18276u), c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDBD0u); set32(c.r[5], c.r[5].w[0] + 7584u);  if (depth < kMaxDepth) unit_0001(c, 40u, depth + 1u); else { c.pc = 0x001041E0u; return; } if (c.pc != 0x002CDBD0u) [[unlikely]] return; }
L_002CDBD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDBD8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0073(c, 295u, depth + 1u); else { c.pc = 0x002CE098u; return; } if (c.pc != 0x002CDBD8u) [[unlikely]] return; }
L_002CDBD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002CDD70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDBE8u); c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (depth < kMaxDepth) unit_0001(c, 392u, depth + 1u); else { c.pc = 0x00106D40u; return; } if (c.pc != 0x002CDBE8u) [[unlikely]] return; }
L_002CDBE8:
    set32(c.r[2], ld32((c.r[17].w[0] - 18236u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; c.r[23].sd[0] = static_cast<std::int32_t>(0x00BC0000u);  if (t) { goto L_002CDCA4; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[30].sd[0] = static_cast<std::int32_t>(0x00BC0000u);  if (t) { goto L_002CDC2C; } }
    c.budget -= 1;
L_002CDC08:
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_002CDC10:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CDC10u | kUnwind; return; } goto L_002CDC10; } }
L_002CDC2C:
    set32(c.r[16], c.r[23].w[0] + 8064u);
    c.budget -= 1;
L_002CDC30:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 1431ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDC44u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 447u, depth + 1u); else { c.pc = 0x001074D8u; return; } if (c.pc != 0x002CDC44u) [[unlikely]] return; }
L_002CDC44:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_002CDC94; }
    set32(c.r[2], ld32((c.r[20].w[0] - 18288u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (t) { goto L_002CDC68; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDC64u); set32(c.r[4], c.r[4].w[0] - 21544u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x002CDC64u) [[unlikely]] return; }
L_002CDC64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.budget -= 1;
L_002CDC68:
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_002CDC70:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CDC70u | kUnwind; return; } goto L_002CDC70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[23].w[0] + 8064u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CDC30u | kUnwind; return; } goto L_002CDC30; } }
L_002CDC94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CDC08u | kUnwind; return; } goto L_002CDC08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] - 18236u), 0u);  if (t) { goto L_002CDCB0; } }
L_002CDCA4:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.budget -= 3;
L_002CDCB0:
    c.r[3].d[0] = ld8((c.r[18].w[0]));
    set32(c.r[4], c.r[21].w[0] + 7680u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] << 24);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; st8((c.r[4].w[0] + 36u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002CDCF4; } }
    set32(c.r[6], c.r[4].w[0] + 36u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_002CDCD0:
    c.r[2].d[0] = c.r[5].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[18].w[0] + c.r[5].w[0]);  if (t) { goto L_002CDCF4; } }
    set32(c.r[4], c.r[5].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CDCD0u | kUnwind; return; } goto L_002CDCD0; }
L_002CDCF4:
    set32(c.r[2], 0u + 256u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], ld32((c.r[20].w[0] - 18288u)));  if (t) { goto L_002CDD0C; } }
    set32(c.r[2], c.r[21].w[0] + 7680u);
    st8((c.r[2].w[0] + 291u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[20].w[0] - 18288u)));
    c.budget -= 3;
L_002CDD0C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_002CDD24; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[4], c.r[4].w[0] - 21512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDD24u); set32(c.r[5], c.r[5].w[0] + 7716u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x002CDD24u) [[unlikely]] return; }
L_002CDD24:
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[16], c.r[21].w[0] + 7680u);
    set32(c.r[5], 0u + 300u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 296u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDD40u); st32((c.r[16].w[0] + 292u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0001(c, 389u, depth + 1u); else { c.pc = 0x00106C90u; return; } if (c.pc != 0x002CDD40u) [[unlikely]] return; }
L_002CDD40:
    set32(c.r[4], c.r[23].w[0] + 8064u);
    st32((c.r[29].w[0]), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 300u);
    set32(c.r[9], c.r[30].w[0] + 8000u);
    set32(c.r[10], 0u + 4u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDD68u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 459u, depth + 1u); else { c.pc = 0x001076A8u; return; } if (c.pc != 0x002CDD68u) [[unlikely]] return; }
L_002CDD68:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_002CDD84; } }
L_002CDD70:
    set32(c.r[4], ld32((c.r[22].w[0] - 18264u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDD7Cu);  if (depth < kMaxDepth) unit_0001(c, 64u, depth + 1u); else { c.pc = 0x00104300u; return; } if (c.pc != 0x002CDD7Cu) [[unlikely]] return; }
L_002CDD7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CDE3C; } }
L_002CDD84:
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    ldl(c.r[3], (c.r[2].w[0] + 7u));
    ldr(c.r[3], (c.r[2].w[0]));
    ldl(c.r[4], (c.r[2].w[0] + 15u));
    ldr(c.r[4], (c.r[2].w[0] + 8u));
    ldl(c.r[5], (c.r[2].w[0] + 23u));
    ldr(c.r[5], (c.r[2].w[0] + 16u));
    ldl(c.r[6], (c.r[2].w[0] + 31u));
    ldr(c.r[6], (c.r[2].w[0] + 24u));
    sdl(c.r[3], (c.r[19].w[0] + 7u));
    sdr(c.r[3], (c.r[19].w[0]));
    sdl(c.r[4], (c.r[19].w[0] + 15u));
    sdr(c.r[4], (c.r[19].w[0] + 8u));
    sdl(c.r[5], (c.r[19].w[0] + 23u));
    sdr(c.r[5], (c.r[19].w[0] + 16u));
    sdl(c.r[6], (c.r[19].w[0] + 31u));
    sdr(c.r[6], (c.r[19].w[0] + 24u));
    lwl(c.r[3], (c.r[2].w[0] + 35u));
    lwr(c.r[3], (c.r[2].w[0] + 32u));
    swl(c.r[3], (c.r[19].w[0] + 35u));
    swr(c.r[3], (c.r[19].w[0] + 32u));
    set32(c.r[3], ld32((c.r[20].w[0] - 18288u)));
    c.budget -= 24;
    { const bool t = c.r[3].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_002CDE20; } }
    set32(c.r[5], c.r[19].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDDF0u); set32(c.r[4], c.r[4].w[0] - 21488u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x002CDDF0u) [[unlikely]] return; }
L_002CDDF0:
    set32(c.r[2], ld32((c.r[20].w[0] - 18288u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_002CDE20; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDE08u); set32(c.r[4], c.r[4].w[0] - 21472u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x002CDE08u) [[unlikely]] return; }
L_002CDE08:
    set32(c.r[2], ld32((c.r[20].w[0] - 18288u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_002CDE20; } }
    set32(c.r[5], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDE20u); set32(c.r[4], c.r[4].w[0] - 21456u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x002CDE20u) [[unlikely]] return; }
L_002CDE20:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[2], c.r[30].w[0] + 8000u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[4], ld32((c.r[22].w[0] - 18264u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDE38u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 64u, depth + 1u); else { c.pc = 0x00104300u; return; } if (c.pc != 0x002CDE38u) [[unlikely]] return; }
L_002CDE38:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002CDE3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_002CDE70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDE80u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0073(c, 253u, depth + 1u); else { c.pc = 0x002CDB58u; return; } if (c.pc != 0x002CDE80u) [[unlikely]] return; }
L_002CDE80:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002CDE90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDEB0u); st64((c.r[29].w[0] + 32u), c.r[18].d[0]);  if (depth < kMaxDepth) unit_0073(c, 230u, depth + 1u); else { c.pc = 0x002CD8B0u; return; } if (c.pc != 0x002CDEB0u) [[unlikely]] return; }
L_002CDEB0:
    set32(c.r[4], ld32((c.r[16].w[0] - 18264u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDEBCu);  if (depth < kMaxDepth) unit_0001(c, 70u, depth + 1u); else { c.pc = 0x00104330u; return; } if (c.pc != 0x002CDEBCu) [[unlikely]] return; }
L_002CDEBC:
    set32(c.r[3], ld32((c.r[16].w[0] - 18264u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_002CDEF0; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 18288u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_002CDF28; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[6], ld32((c.r[2].w[0] - 18276u)));
    set32(c.r[4], c.r[4].w[0] - 21432u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDEE8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x002CDEE8u) [[unlikely]] return; }
L_002CDEE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CDFE8; } }
L_002CDEF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 7576u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[3].w[0] - 18276u), c.r[17].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDF0Cu); set32(c.r[5], c.r[5].w[0] + 7584u);  if (depth < kMaxDepth) unit_0001(c, 40u, depth + 1u); else { c.pc = 0x001041E0u; return; } if (c.pc != 0x002CDF0Cu) [[unlikely]] return; }
L_002CDF0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDF14u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0073(c, 295u, depth + 1u); else { c.pc = 0x002CE098u; return; } if (c.pc != 0x002CDF14u) [[unlikely]] return; }
L_002CDF14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002CDF30; } }
    set32(c.r[4], ld32((c.r[16].w[0] - 18264u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDF28u);  if (depth < kMaxDepth) unit_0001(c, 64u, depth + 1u); else { c.pc = 0x00104300u; return; } if (c.pc != 0x002CDF28u) [[unlikely]] return; }
L_002CDF28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CDFE8; } }
L_002CDF30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDF38u); c.r[18].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (depth < kMaxDepth) unit_0001(c, 392u, depth + 1u); else { c.pc = 0x00106D40u; return; } if (c.pc != 0x002CDF38u) [[unlikely]] return; }
L_002CDF38:
    set32(c.r[2], ld32((c.r[18].w[0] - 18244u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002CDFE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_002CDF74; } }
    c.budget -= 1;
L_002CDF50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_002CDF58:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CDF58u | kUnwind; return; } goto L_002CDF58; } }
L_002CDF74:
    set32(c.r[16], c.r[17].w[0] - 13744u);
    c.budget -= 1;
L_002CDF78:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 1429ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDF8Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 447u, depth + 1u); else { c.pc = 0x001074D8u; return; } if (c.pc != 0x002CDF8Cu) [[unlikely]] return; }
L_002CDF8C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_002CDFDC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 18288u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (t) { goto L_002CDFB4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDFB0u); set32(c.r[4], c.r[4].w[0] - 21392u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x002CDFB0u) [[unlikely]] return; }
L_002CDFB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.budget -= 1;
L_002CDFB4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_002CDFB8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CDFB8u | kUnwind; return; } goto L_002CDFB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[17].w[0] - 13744u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CDF78u | kUnwind; return; } goto L_002CDF78; } }
L_002CDFDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CDF50u | kUnwind; return; } goto L_002CDF50; } }
    st32((c.r[18].w[0] - 18244u), 0u);
    c.budget -= 1;
L_002CDFE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002CE000:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE014u); st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0073(c, 276u, depth + 1u); else { c.pc = 0x002CDE90u; return; } if (c.pc != 0x002CE014u) [[unlikely]] return; }
L_002CE014:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_002CE024; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CE088; } }
L_002CE024:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[16], c.r[2].w[0] - 18176u);
    set32(c.r[4], c.r[4].w[0] - 13744u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 14u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE054u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 459u, depth + 1u); else { c.pc = 0x001076A8u; return; } if (c.pc != 0x002CE054u) [[unlikely]] return; }
L_002CE054:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_002CE070; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE068u); set32(c.r[4], ld32((c.r[2].w[0] - 18264u)));  if (depth < kMaxDepth) unit_0001(c, 64u, depth + 1u); else { c.pc = 0x00104300u; return; } if (c.pc != 0x002CE068u) [[unlikely]] return; }
L_002CE068:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CE088; } }
L_002CE070:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    set32(c.r[4], ld32((c.r[3].w[0] - 18264u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE084u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 64u, depth + 1u); else { c.pc = 0x00104300u; return; } if (c.pc != 0x002CE084u) [[unlikely]] return; }
L_002CE084:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002CE088:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CE098:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_002CE0FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 18288u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_002CE0C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE0C4u); set32(c.r[4], c.r[4].w[0] - 21368u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x002CE0C4u) [[unlikely]] return; }
L_002CE0C4:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_002CE0D8; } }
L_002CE0D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE0D8u); set32(c.r[4], 0u + 4000u);  if (depth < kMaxDepth) unit_0001(c, 213u, depth + 1u); else { c.pc = 0x00105340u; return; } if (c.pc != 0x002CE0D8u) [[unlikely]] return; }
L_002CE0D8:
    set32(c.r[2], ld32((c.r[17].w[0] - 18252u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CE0D0u | kUnwind; return; } goto L_002CE0D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE0ECu); set32(c.r[4], c.r[16].w[0] - 13744u);  if (depth < kMaxDepth) unit_0001(c, 473u, depth + 1u); else { c.pc = 0x001078A0u; return; } if (c.pc != 0x002CE0ECu) [[unlikely]] return; }
L_002CE0EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CE0D0u | kUnwind; return; } goto L_002CE0D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002CE128; } }
L_002CE0FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 18252u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002CE124; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE118u); set32(c.r[4], c.r[4].w[0] - 13744u);  if (depth < kMaxDepth) unit_0001(c, 473u, depth + 1u); else { c.pc = 0x001078A0u; return; } if (c.pc != 0x002CE118u) [[unlikely]] return; }
L_002CE118:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002CE124; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002CE124:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002CE128:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CE138:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_002CE188; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 18288u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_002CE160; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE160u); set32(c.r[4], c.r[4].w[0] - 21352u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x002CE160u) [[unlikely]] return; }
L_002CE160:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_002CE170; } }
L_002CE168:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE170u); set32(c.r[4], 0u + 4000u);  if (depth < kMaxDepth) unit_0001(c, 213u, depth + 1u); else { c.pc = 0x00105340u; return; } if (c.pc != 0x002CE170u) [[unlikely]] return; }
L_002CE170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE178u); set32(c.r[4], c.r[16].w[0] - 11264u);  if (depth < kMaxDepth) unit_0001(c, 473u, depth + 1u); else { c.pc = 0x001078A0u; return; } if (c.pc != 0x002CE178u) [[unlikely]] return; }
L_002CE178:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CE168u | kUnwind; return; } goto L_002CE168; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002CE198; } }
L_002CE188:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE194u); set32(c.r[4], c.r[4].w[0] - 11264u);  if (depth < kMaxDepth) unit_0001(c, 473u, depth + 1u); else { c.pc = 0x001078A0u; return; } if (c.pc != 0x002CE194u) [[unlikely]] return; }
L_002CE194:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002CE198:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CE1A8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE1C8u); st64((c.r[29].w[0] + 32u), c.r[18].d[0]);  if (depth < kMaxDepth) unit_0073(c, 230u, depth + 1u); else { c.pc = 0x002CD8B0u; return; } if (c.pc != 0x002CE1C8u) [[unlikely]] return; }
L_002CE1C8:
    set32(c.r[4], ld32((c.r[16].w[0] - 18260u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE1D4u);  if (depth < kMaxDepth) unit_0001(c, 70u, depth + 1u); else { c.pc = 0x00104330u; return; } if (c.pc != 0x002CE1D4u) [[unlikely]] return; }
L_002CE1D4:
    set32(c.r[3], ld32((c.r[16].w[0] - 18260u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_002CE208; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 18288u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_002CE240; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[6], ld32((c.r[2].w[0] - 18280u)));
    set32(c.r[4], c.r[4].w[0] - 21336u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE200u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x002CE200u) [[unlikely]] return; }
L_002CE200:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CE300; } }
L_002CE208:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 7576u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[3].w[0] - 18280u), c.r[17].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE224u); set32(c.r[5], c.r[5].w[0] + 7584u);  if (depth < kMaxDepth) unit_0001(c, 40u, depth + 1u); else { c.pc = 0x001041E0u; return; } if (c.pc != 0x002CE224u) [[unlikely]] return; }
L_002CE224:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE22Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0073(c, 301u, depth + 1u); else { c.pc = 0x002CE138u; return; } if (c.pc != 0x002CE22Cu) [[unlikely]] return; }
L_002CE22C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002CE248; } }
    set32(c.r[4], ld32((c.r[16].w[0] - 18260u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE240u);  if (depth < kMaxDepth) unit_0001(c, 64u, depth + 1u); else { c.pc = 0x00104300u; return; } if (c.pc != 0x002CE240u) [[unlikely]] return; }
L_002CE240:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CE300; } }
L_002CE248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE250u); c.r[18].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (depth < kMaxDepth) unit_0001(c, 392u, depth + 1u); else { c.pc = 0x00106D40u; return; } if (c.pc != 0x002CE250u) [[unlikely]] return; }
L_002CE250:
    set32(c.r[2], ld32((c.r[18].w[0] - 18228u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002CE300; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_002CE28C; } }
    c.budget -= 1;
L_002CE268:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_002CE270:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CE270u | kUnwind; return; } goto L_002CE270; } }
L_002CE28C:
    set32(c.r[16], c.r[17].w[0] - 11264u);
    c.budget -= 1;
L_002CE290:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 1427ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE2A4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 447u, depth + 1u); else { c.pc = 0x001074D8u; return; } if (c.pc != 0x002CE2A4u) [[unlikely]] return; }
L_002CE2A4:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_002CE2F4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 18288u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (t) { goto L_002CE2CC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE2C8u); set32(c.r[4], c.r[4].w[0] - 21296u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x002CE2C8u) [[unlikely]] return; }
L_002CE2C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.budget -= 1;
L_002CE2CC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_002CE2D0:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CE2D0u | kUnwind; return; } goto L_002CE2D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[17].w[0] - 11264u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CE290u | kUnwind; return; } goto L_002CE290; } }
L_002CE2F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CE268u | kUnwind; return; } goto L_002CE268; } }
    st32((c.r[18].w[0] - 18228u), 0u);
    c.budget -= 1;
L_002CE300:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002CE3C8:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[30].d[0]);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0] + 128u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE400u); st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0073(c, 301u, depth + 1u); else { c.pc = 0x002CE138u; return; } if (c.pc != 0x002CE400u) [[unlikely]] return; }
L_002CE400:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CE678; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE414u); c.r[21].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (depth < kMaxDepth) unit_0001(c, 392u, depth + 1u); else { c.pc = 0x00106D40u; return; } if (c.pc != 0x002CE414u) [[unlikely]] return; }
L_002CE414:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE41Cu); c.r[20].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (depth < kMaxDepth) unit_0001(c, 38u, depth + 1u); else { c.pc = 0x001041D0u; return; } if (c.pc != 0x002CE41Cu) [[unlikely]] return; }
L_002CE41C:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[5], ld32((c.r[21].w[0] - 18220u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[4].w[0] - 18268u), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], 0u - 1u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[6].w[0] + 7576u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[3].w[0] - 18240u), c.r[4].w[0]);
    st32((c.r[7].w[0] - 18236u), c.r[4].w[0]);
    set32(c.r[17], c.r[2].w[0] + 8104u);
    st32((c.r[8].w[0] - 18244u), c.r[4].w[0]);
    set32(c.r[18], c.r[16].w[0] + 8192u);
    st32((c.r[9].w[0] - 18228u), c.r[4].w[0]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[11].w[0] - 18232u), c.r[4].w[0]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[10].w[0] - 18248u), 0u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st32((c.r[21].w[0] - 18220u), c.r[5].w[0]);
    st32((c.r[20].w[0] - 18224u), c.r[4].w[0]);
    c.budget -= 29;
L_002CE490:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 1426ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE4A4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 447u, depth + 1u); else { c.pc = 0x001074D8u; return; } if (c.pc != 0x002CE4A4u) [[unlikely]] return; }
L_002CE4A4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[5].sd[0] >= 0) { set32(c.r[2], ld32((c.r[17].w[0] + 36u)));  goto L_002CE4F4; }
    set32(c.r[2], ld32((c.r[23].w[0] - 18288u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[6], ld32((c.r[21].w[0] - 18220u)));  if (t) { goto L_002CE4C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE4C4u); set32(c.r[4], c.r[22].w[0] - 21272u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x002CE4C4u) [[unlikely]] return; }
L_002CE4C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
L_002CE4D0:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CE4D0u | kUnwind; return; } goto L_002CE4D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CE490u | kUnwind; return; } goto L_002CE490; } }
L_002CE4F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002CE54C; } }
    st32((c.r[16].w[0] + 8192u), c.r[19].w[0]);
    st32((c.r[20].w[0] - 18224u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE50Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0001(c, 389u, depth + 1u); else { c.pc = 0x00106C90u; return; } if (c.pc != 0x002CE50Cu) [[unlikely]] return; }
L_002CE50C:
    set32(c.r[16], c.r[30].w[0] - 13696u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 4u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 16u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE538u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 459u, depth + 1u); else { c.pc = 0x001076A8u; return; } if (c.pc != 0x002CE538u) [[unlikely]] return; }
L_002CE538:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_002CE57C; } }
    st32((c.r[2].w[0] - 18268u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CE678; } }
L_002CE54C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
L_002CE558:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CE558u | kUnwind; return; } goto L_002CE558; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CE490u | kUnwind; return; } goto L_002CE490; } }
L_002CE57C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[2], c.r[16].w[0] + 12u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    set32(c.r[3], c.r[16].w[0] + 4u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[16], 0u + 1u);
    set32(c.r[2], 0u + 255u);
    c.budget -= 13;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; set32(c.r[4], ld32((c.r[4].w[0])));  if (t) { goto L_002CE604; } }
    set32(c.r[2], 0u + 254u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[6], 0u - 1u);  if (t) { goto L_002CE5C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] - 18288u), c.r[16].w[0]);  if (t) { goto L_002CE604; } }
L_002CE5C8:
    set32(c.r[2], c.r[5].w[0] + 255u);
    c.r[3].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], 0u + 2u);  goto L_002CE604; }
    c.r[3].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[4].w[0] + 255u);
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_002CE608; } }
    set32(c.r[16], 0u + 2u);
    c.budget -= 1;
L_002CE604:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 1;
L_002CE608:
    st32((c.r[4].w[0] - 18268u), 0u);
    c.budget -= 3;
    { const bool t = c.r[19].sd[0] < 0; c.r[2].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_002CE664; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_002CE664; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_002CE664; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 18288u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_002CE638; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE638u); set32(c.r[4], c.r[4].w[0] - 21240u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x002CE638u) [[unlikely]] return; }
L_002CE638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE640u);  if (depth < kMaxDepth) unit_0073(c, 235u, depth + 1u); else { c.pc = 0x002CD968u; return; } if (c.pc != 0x002CE640u) [[unlikely]] return; }
L_002CE640:
    set32(c.r[4], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[2].w[0] - 18264u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[3].w[0] - 18260u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[2].w[0] - 18272u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002CE678; } }
L_002CE664:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE66Cu);  if (depth < kMaxDepth) unit_0073(c, 230u, depth + 1u); else { c.pc = 0x002CD8B0u; return; } if (c.pc != 0x002CE66Cu) [[unlikely]] return; }
L_002CE66C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE674u);  if (depth < kMaxDepth) unit_0073(c, 249u, depth + 1u); else { c.pc = 0x002CDAE0u; return; } if (c.pc != 0x002CE674u) [[unlikely]] return; }
L_002CE674:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002CE678:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_002CE6A8:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    set32(c.r[2], ld32((c.r[22].w[0] - 18288u)));
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.budget -= 14;
    { const bool t = c.r[2].sd[0] <= 0; st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (t) { goto L_002CE6EC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE6ECu); set32(c.r[4], c.r[4].w[0] - 21224u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x002CE6ECu) [[unlikely]] return; }
L_002CE6EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE6F4u); c.r[19].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (depth < kMaxDepth) unit_0073(c, 230u, depth + 1u); else { c.pc = 0x002CD8B0u; return; } if (c.pc != 0x002CE6F4u) [[unlikely]] return; }
L_002CE6F4:
    set32(c.r[4], ld32((c.r[19].w[0] - 18260u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE700u);  if (depth < kMaxDepth) unit_0001(c, 70u, depth + 1u); else { c.pc = 0x00104330u; return; } if (c.pc != 0x002CE700u) [[unlikely]] return; }
L_002CE700:
    set32(c.r[3], ld32((c.r[19].w[0] - 18260u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 6u);  if (t) { goto L_002CE874; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE714u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0073(c, 301u, depth + 1u); else { c.pc = 0x002CE138u; return; } if (c.pc != 0x002CE714u) [[unlikely]] return; }
L_002CE714:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002CE82C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE724u); c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (depth < kMaxDepth) unit_0001(c, 392u, depth + 1u); else { c.pc = 0x00106D40u; return; } if (c.pc != 0x002CE724u) [[unlikely]] return; }
L_002CE724:
    set32(c.r[2], ld32((c.r[17].w[0] - 18232u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; c.r[21].sd[0] = static_cast<std::int32_t>(0x00BC0000u);  if (t) { goto L_002CE7DC; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[23].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_002CE764; } }
    c.budget -= 1;
L_002CE740:
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_002CE748:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CE748u | kUnwind; return; } goto L_002CE748; } }
L_002CE764:
    set32(c.r[16], c.r[21].w[0] + 8144u);
    c.budget -= 1;
L_002CE768:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 1434ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE77Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 447u, depth + 1u); else { c.pc = 0x001074D8u; return; } if (c.pc != 0x002CE77Cu) [[unlikely]] return; }
L_002CE77C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_002CE7CC; }
    set32(c.r[2], ld32((c.r[22].w[0] - 18288u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (t) { goto L_002CE7A0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE79Cu); set32(c.r[4], c.r[4].w[0] - 21200u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x002CE79Cu) [[unlikely]] return; }
L_002CE79C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.budget -= 1;
L_002CE7A0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_002CE7A8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CE7A8u | kUnwind; return; } goto L_002CE7A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[21].w[0] + 8144u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CE768u | kUnwind; return; } goto L_002CE768; } }
L_002CE7CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CE740u | kUnwind; return; } goto L_002CE740; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] - 18232u), 0u);  if (t) { goto L_002CE7E4; } }
L_002CE7DC:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 2;
L_002CE7E4:
    set32(c.r[16], c.r[20].w[0] + 8208u);
    st32((c.r[20].w[0] + 8208u), c.r[18].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE7F8u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0001(c, 389u, depth + 1u); else { c.pc = 0x00106C90u; return; } if (c.pc != 0x002CE7F8u) [[unlikely]] return; }
L_002CE7F8:
    set32(c.r[17], c.r[23].w[0] - 13696u);
    set32(c.r[4], c.r[21].w[0] + 8144u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 4u);
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE824u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 459u, depth + 1u); else { c.pc = 0x001076A8u; return; } if (c.pc != 0x002CE824u) [[unlikely]] return; }
L_002CE824:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[22].w[0] - 18288u)));  goto L_002CE84C; }
L_002CE82C:
    set32(c.r[4], ld32((c.r[19].w[0] - 18260u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE838u);  if (depth < kMaxDepth) unit_0001(c, 64u, depth + 1u); else { c.pc = 0x00104300u; return; } if (c.pc != 0x002CE838u) [[unlikely]] return; }
L_002CE838:
    c.r[4].d[0] = c.r[18].d[0] ^ 8ull;
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], 0u + 6u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; if (c.r[4].d[0] == 0) c.r[2].d[0] = c.r[3].d[0];  if (t) { goto L_002CE874; } }
L_002CE84C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_002CE85C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE85Cu); set32(c.r[4], c.r[4].w[0] - 21168u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x002CE85Cu) [[unlikely]] return; }
L_002CE85C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[19].w[0] - 18260u)));
    c.r[2].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE870u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 64u, depth + 1u); else { c.pc = 0x00104300u; return; } if (c.pc != 0x002CE870u) [[unlikely]] return; }
L_002CE870:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002CE874:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_002CE8A0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    set32(c.r[2], ld32((c.r[22].w[0] - 18288u)));
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.budget -= 13;
    { const bool t = c.r[2].sd[0] <= 0; st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (t) { goto L_002CE8E0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE8E0u); set32(c.r[4], c.r[4].w[0] - 21144u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x002CE8E0u) [[unlikely]] return; }
L_002CE8E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE8E8u); c.r[20].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (depth < kMaxDepth) unit_0073(c, 230u, depth + 1u); else { c.pc = 0x002CD8B0u; return; } if (c.pc != 0x002CE8E8u) [[unlikely]] return; }
L_002CE8E8:
    set32(c.r[4], ld32((c.r[20].w[0] - 18256u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE8F4u);  if (depth < kMaxDepth) unit_0001(c, 70u, depth + 1u); else { c.pc = 0x00104330u; return; } if (c.pc != 0x002CE8F4u) [[unlikely]] return; }
L_002CE8F4:
    set32(c.r[3], ld32((c.r[20].w[0] - 18256u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] ^ 8ull;  if (t) { goto L_002CEA28; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE90Cu); c.r[19].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (depth < kMaxDepth) unit_0001(c, 392u, depth + 1u); else { c.pc = 0x00106D40u; return; } if (c.pc != 0x002CE90Cu) [[unlikely]] return; }
L_002CE90C:
    set32(c.r[2], ld32((c.r[19].w[0] - 18232u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002CE9C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].sd[0] = static_cast<std::int32_t>(0x00BC0000u);  if (t) { goto L_002CE950; } }
L_002CE920:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] + 1u);  if (t) { goto L_002CEA38; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[4], 0u - 1u);
    c.budget -= 2;
L_002CE930:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CE930u | kUnwind; return; } goto L_002CE930; } }
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002CE950:
    set32(c.r[16], c.r[21].w[0] + 8144u);
    c.budget -= 1;
L_002CE954:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 1436ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE968u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 447u, depth + 1u); else { c.pc = 0x001074D8u; return; } if (c.pc != 0x002CE968u) [[unlikely]] return; }
L_002CE968:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_002CE9B4; }
    set32(c.r[2], ld32((c.r[22].w[0] - 18288u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (t) { goto L_002CE98C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE988u); set32(c.r[4], c.r[4].w[0] - 21200u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x002CE988u) [[unlikely]] return; }
L_002CE988:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.budget -= 1;
L_002CE98C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_002CE990:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CE990u | kUnwind; return; } goto L_002CE990; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[21].w[0] + 8144u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CE954u | kUnwind; return; } goto L_002CE954; } }
L_002CE9B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[17].sd[0] < 17ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CE920u | kUnwind; return; } goto L_002CE920; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] - 18232u), 0u);  if (t) { goto L_002CE9C8; } }
L_002CE9C4:
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.budget -= 1;
L_002CE9C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[16], c.r[2].w[0] + 8208u);
    st32((c.r[2].w[0] + 8208u), c.r[18].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE9E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 389u, depth + 1u); else { c.pc = 0x00106C90u; return; } if (c.pc != 0x002CE9E0u) [[unlikely]] return; }
L_002CE9E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[21].w[0] + 8144u);
    set32(c.r[17], c.r[2].w[0] - 11520u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 4u);
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEA10u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 459u, depth + 1u); else { c.pc = 0x001076A8u; return; } if (c.pc != 0x002CEA10u) [[unlikely]] return; }
L_002CEA10:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[22].w[0] - 18288u)));  goto L_002CEA54; }
    set32(c.r[4], ld32((c.r[20].w[0] - 18256u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEA24u);  if (depth < kMaxDepth) unit_0001(c, 64u, depth + 1u); else { c.pc = 0x00104300u; return; } if (c.pc != 0x002CEA24u) [[unlikely]] return; }
L_002CEA24:
    c.r[4].d[0] = c.r[18].d[0] ^ 8ull;
    c.budget -= 1;
L_002CEA28:
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; if (c.r[4].d[0] == 0) c.r[2].d[0] = c.r[3].d[0];  if (t) { goto L_002CEA7C; } }
L_002CEA38:
    set32(c.r[4], ld32((c.r[20].w[0] - 18256u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEA44u);  if (depth < kMaxDepth) unit_0001(c, 64u, depth + 1u); else { c.pc = 0x00104300u; return; } if (c.pc != 0x002CEA44u) [[unlikely]] return; }
L_002CEA44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEA4Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 336u, depth + 1u); else { c.pc = 0x002CE6A8u; return; } if (c.pc != 0x002CEA4Cu) [[unlikely]] return; }
L_002CEA4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  if (t) { goto L_002CEA80; } }
L_002CEA54:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_002CEA64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEA64u); set32(c.r[4], c.r[4].w[0] - 21168u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x002CEA64u) [[unlikely]] return; }
L_002CEA64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[20].w[0] - 18256u)));
    c.r[2].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEA78u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 64u, depth + 1u); else { c.pc = 0x00104300u; return; } if (c.pc != 0x002CEA78u) [[unlikely]] return; }
L_002CEA78:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002CEA7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_002CEA80:
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002CEAA8:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    set32(c.r[2], ld32((c.r[21].w[0] - 18248u)));
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    set32(c.r[18], c.r[3].w[0] - 18048u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002CEB04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEAF8u);  if (depth < kMaxDepth) unit_0073(c, 290u, depth + 1u); else { c.pc = 0x002CE000u; return; } if (c.pc != 0x002CEAF8u) [[unlikely]] return; }
L_002CEAF8:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CEC64; } }
L_002CEB04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEB0Cu); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0073(c, 276u, depth + 1u); else { c.pc = 0x002CDE90u; return; } if (c.pc != 0x002CEB0Cu) [[unlikely]] return; }
L_002CEB0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[8].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_002CEC44; } }
    st32((c.r[18].w[0]), c.r[19].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[17].w[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[18].w[0] + 8u), c.r[20].w[0]);
    set32(c.r[4], c.r[19].w[0] - 13952u);
    set32(c.r[5], c.r[8].w[0] - 13760u);
    set32(c.r[6], 0u + 1u);
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    st8((c.r[18].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    st8((c.r[18].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    st32((c.r[18].w[0] + 16u), c.r[4].w[0]);
    st8((c.r[18].w[0] + 14u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[18].w[0] + 20u), c.r[5].w[0]);
    c.r[7].d[0] = ld8((c.r[16].w[0] + 2u));
    c.budget -= 18;
    { const bool t = c.r[7].d[0] == c.r[6].d[0]; c.r[2].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_002CEB78; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[17].w[0] << 11);  if (t) { goto L_002CEB88; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2340u);  if (t) { goto L_002CEB84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CEB88; } }
L_002CEB78:
    set32(c.r[2], 0u + 2328u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]); c.r[5].d[0] = c.lo.d[0];  if (t) { goto L_002CEB88; } }
L_002CEB84:
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.budget -= 1;
L_002CEB88:
    set32(c.r[2], ld32((c.r[21].w[0] - 18248u)));
    set32(c.r[16], c.r[8].w[0] - 13760u);
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[8].w[0] - 13760u), 0u);  if (t) { goto L_002CEBA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEBA4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 389u, depth + 1u); else { c.pc = 0x00106C90u; return; } if (c.pc != 0x002CEBA4u) [[unlikely]] return; }
L_002CEBA4:
    set32(c.r[19], c.r[19].w[0] - 13952u);
    set32(c.r[5], 0u + 144u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEBB8u); c.r[20].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (depth < kMaxDepth) unit_0001(c, 389u, depth + 1u); else { c.pc = 0x00106C90u; return; } if (c.pc != 0x002CEBB8u) [[unlikely]] return; }
L_002CEBB8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEBC4u); set32(c.r[5], 0u + 24u);  if (depth < kMaxDepth) unit_0001(c, 389u, depth + 1u); else { c.pc = 0x00106C90u; return; } if (c.pc != 0x002CEBC4u) [[unlikely]] return; }
L_002CEBC4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEBD0u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0001(c, 389u, depth + 1u); else { c.pc = 0x00106C90u; return; } if (c.pc != 0x002CEBD0u) [[unlikely]] return; }
L_002CEBD0:
    set32(c.r[2], ld32((c.r[20].w[0] - 18288u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_002CEBE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEBE4u); set32(c.r[4], c.r[4].w[0] - 21120u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x002CEBE4u) [[unlikely]] return; }
L_002CEBE4:
    set32(c.r[2], 0u + 1u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[16].w[0] - 18216u), c.r[2].w[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    st32((c.r[17].w[0] - 18252u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 13744u);
    st32((c.r[29].w[0]), c.r[19].w[0]);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[11], c.r[11].w[0] - 10248u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 24u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEC28u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 459u, depth + 1u); else { c.pc = 0x001076A8u; return; } if (c.pc != 0x002CEC28u) [[unlikely]] return; }
L_002CEC28:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[20].w[0] - 18288u)));  goto L_002CEC4C; }
    st32((c.r[16].w[0] - 18216u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[17].w[0] - 18252u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEC44u); set32(c.r[4], ld32((c.r[2].w[0] - 18264u)));  if (depth < kMaxDepth) unit_0001(c, 64u, depth + 1u); else { c.pc = 0x00104300u; return; } if (c.pc != 0x002CEC44u) [[unlikely]] return; }
L_002CEC44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CEC64; } }
L_002CEC4C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002CEC64; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEC60u); set32(c.r[4], c.r[4].w[0] - 21096u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x002CEC60u) [[unlikely]] return; }
L_002CEC60:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002CEC64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002CEC88:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CECA8u); c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (depth < kMaxDepth) unit_0073(c, 290u, depth + 1u); else { c.pc = 0x002CE000u; return; } if (c.pc != 0x002CECA8u) [[unlikely]] return; }
L_002CECA8:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[18], c.r[17].w[0] - 18048u);  if (t) { goto L_002CED38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CECBCu); set32(c.r[4], 0u + 9u);  if (depth < kMaxDepth) unit_0073(c, 276u, depth + 1u); else { c.pc = 0x002CDE90u; return; } if (c.pc != 0x002CECBCu) [[unlikely]] return; }
L_002CECBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002CED38; } }
    st32((c.r[17].w[0] - 18048u), c.r[16].w[0]);
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CECD4u); c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (depth < kMaxDepth) unit_0001(c, 389u, depth + 1u); else { c.pc = 0x00106C90u; return; } if (c.pc != 0x002CECD4u) [[unlikely]] return; }
L_002CECD4:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[16].w[0] - 18216u);
    set32(c.r[2], 0u + 4u);
    st32((c.r[16].w[0] - 18216u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    st32((c.r[29].w[0]), c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] - 13744u);
    st32((c.r[17].w[0] - 18252u), c.r[3].w[0]);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[11], c.r[11].w[0] - 10824u);
    set32(c.r[5], 0u + 5u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 4u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CED1Cu); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 459u, depth + 1u); else { c.pc = 0x001076A8u; return; } if (c.pc != 0x002CED1Cu) [[unlikely]] return; }
L_002CED1C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], 0u + 1u);  goto L_002CED3C; }
    st32((c.r[16].w[0] - 18216u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[17].w[0] - 18252u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CED38u); set32(c.r[4], ld32((c.r[2].w[0] - 18264u)));  if (depth < kMaxDepth) unit_0001(c, 64u, depth + 1u); else { c.pc = 0x00104300u; return; } if (c.pc != 0x002CED38u) [[unlikely]] return; }
L_002CED38:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002CED3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002CED58:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CED6Cu); st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0073(c, 290u, depth + 1u); else { c.pc = 0x002CE000u; return; } if (c.pc != 0x002CED6Cu) [[unlikely]] return; }
L_002CED6C:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CEDF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CED80u); set32(c.r[4], 0u + 10u);  if (depth < kMaxDepth) unit_0073(c, 276u, depth + 1u); else { c.pc = 0x002CDE90u; return; } if (c.pc != 0x002CED80u) [[unlikely]] return; }
L_002CED80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_002CEDEC; } }
    set32(c.r[2], 0u + 5u);
    st32((c.r[16].w[0] - 18216u), c.r[2].w[0]);
    set32(c.r[3], c.r[16].w[0] - 18216u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    st32((c.r[17].w[0] - 18252u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 13744u);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    set32(c.r[11], c.r[11].w[0] - 10824u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEDD0u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 459u, depth + 1u); else { c.pc = 0x001076A8u; return; } if (c.pc != 0x002CEDD0u) [[unlikely]] return; }
L_002CEDD0:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], 0u + 1u);  goto L_002CEDF0; }
    st32((c.r[16].w[0] - 18216u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[17].w[0] - 18252u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEDECu); set32(c.r[4], ld32((c.r[2].w[0] - 18264u)));  if (depth < kMaxDepth) unit_0001(c, 64u, depth + 1u); else { c.pc = 0x00104300u; return; } if (c.pc != 0x002CEDECu) [[unlikely]] return; }
L_002CEDEC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002CEDF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002CEE08:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], 0u + 3u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEE1Cu); st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0073(c, 307u, depth + 1u); else { c.pc = 0x002CE1A8u; return; } if (c.pc != 0x002CEE1Cu) [[unlikely]] return; }
L_002CEE1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_002CEE2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002CEE90; } }
L_002CEE2C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[16], c.r[2].w[0] - 13696u);
    set32(c.r[4], c.r[4].w[0] - 11264u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEE5Cu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 459u, depth + 1u); else { c.pc = 0x001076A8u; return; } if (c.pc != 0x002CEE5Cu) [[unlikely]] return; }
L_002CEE5C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_002CEE78; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEE70u); set32(c.r[4], ld32((c.r[2].w[0] - 18260u)));  if (depth < kMaxDepth) unit_0001(c, 64u, depth + 1u); else { c.pc = 0x00104300u; return; } if (c.pc != 0x002CEE70u) [[unlikely]] return; }
L_002CEE70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002CEE90; } }
L_002CEE78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    set32(c.r[4], ld32((c.r[3].w[0] - 18260u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEE8Cu); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 64u, depth + 1u); else { c.pc = 0x00104300u; return; } if (c.pc != 0x002CEE8Cu) [[unlikely]] return; }
L_002CEE8C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002CEE90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CEEA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[4], 0u + 30u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEEB8u); st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0073(c, 307u, depth + 1u); else { c.pc = 0x002CE1A8u; return; } if (c.pc != 0x002CEEB8u) [[unlikely]] return; }
L_002CEEB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_002CEEC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CEF44; } }
L_002CEEC8:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[17], c.r[2].w[0] - 13696u);
    set32(c.r[3], 0u + 8u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[16].w[0] - 18216u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 11264u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 22u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEF04u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 459u, depth + 1u); else { c.pc = 0x001076A8u; return; } if (c.pc != 0x002CEF04u) [[unlikely]] return; }
L_002CEF04:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_002CEF24; } }
    set32(c.r[4], ld32((c.r[2].w[0] - 18260u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEF18u);  if (depth < kMaxDepth) unit_0001(c, 64u, depth + 1u); else { c.pc = 0x00104300u; return; } if (c.pc != 0x002CEF18u) [[unlikely]] return; }
L_002CEF18:
    st32((c.r[16].w[0] - 18216u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CEF44; } }
L_002CEF24:
    st32((c.r[16].w[0] - 18216u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[17].d[0] | c.r[2].d[0];
    set32(c.r[4], ld32((c.r[3].w[0] - 18260u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEF40u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 64u, depth + 1u); else { c.pc = 0x00104300u; return; } if (c.pc != 0x002CEF40u) [[unlikely]] return; }
L_002CEF40:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002CEF44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002CEF58:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[18], c.r[17].w[0] - 12608u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEF80u); set32(c.r[4], 0u + 34u);  if (depth < kMaxDepth) unit_0073(c, 307u, depth + 1u); else { c.pc = 0x002CE1A8u; return; } if (c.pc != 0x002CEF80u) [[unlikely]] return; }
L_002CEF80:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[17].w[0] - 12608u), c.r[16].w[0]);  goto L_002CEF90; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CF010; } }
L_002CEF90:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEF9Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0001(c, 389u, depth + 1u); else { c.pc = 0x00106C90u; return; } if (c.pc != 0x002CEF9Cu) [[unlikely]] return; }
L_002CEF9C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[8], ld32((c.r[4].w[0] - 11220u)));
    set32(c.r[16], c.r[2].w[0] - 13696u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[10], ld32((c.r[6].w[0] - 11216u)));
    set32(c.r[5], ld32((c.r[3].w[0] - 11224u)));
    set32(c.r[4], c.r[4].w[0] - 11264u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEFDCu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 459u, depth + 1u); else { c.pc = 0x001076A8u; return; } if (c.pc != 0x002CEFDCu) [[unlikely]] return; }
L_002CEFDC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_002CEFF8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEFF0u); set32(c.r[4], ld32((c.r[2].w[0] - 18260u)));  if (depth < kMaxDepth) unit_0001(c, 64u, depth + 1u); else { c.pc = 0x00104300u; return; } if (c.pc != 0x002CEFF0u) [[unlikely]] return; }
L_002CEFF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CF010; } }
L_002CEFF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    set32(c.r[4], ld32((c.r[3].w[0] - 18260u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF00Cu); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 64u, depth + 1u); else { c.pc = 0x00104300u; return; } if (c.pc != 0x002CF00Cu) [[unlikely]] return; }
L_002CF00C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002CF010:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002CF028:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    set32(c.r[4], 0u + 15u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF04Cu); st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0073(c, 307u, depth + 1u); else { c.pc = 0x002CE1A8u; return; } if (c.pc != 0x002CF04Cu) [[unlikely]] return; }
L_002CF04C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_002CF05C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CF104; } }
L_002CF05C:
    set32(c.r[2], ld32((c.r[19].w[0] - 18288u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_002CF070; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF070u); set32(c.r[4], c.r[4].w[0] - 21080u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x002CF070u) [[unlikely]] return; }
L_002CF070:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[16], c.r[2].w[0] - 13696u);
    set32(c.r[4], c.r[4].w[0] - 11264u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 16u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF0A4u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 459u, depth + 1u); else { c.pc = 0x001076A8u; return; } if (c.pc != 0x002CF0A4u) [[unlikely]] return; }
L_002CF0A4:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_002CF0C0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF0B8u); set32(c.r[4], ld32((c.r[2].w[0] - 18260u)));  if (depth < kMaxDepth) unit_0001(c, 64u, depth + 1u); else { c.pc = 0x00104300u; return; } if (c.pc != 0x002CF0B8u) [[unlikely]] return; }
L_002CF0B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CF104; } }
L_002CF0C0:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[17].d[0];
    ldl(c.r[3], (c.r[2].w[0] + 7u));
    ldr(c.r[3], (c.r[2].w[0]));
    sdl(c.r[3], (c.r[18].w[0] + 7u));
    sdr(c.r[3], (c.r[18].w[0]));
    set32(c.r[3], ld32((c.r[19].w[0] - 18288u)));
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_002CF0EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF0ECu); set32(c.r[4], c.r[4].w[0] - 21048u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x002CF0ECu) [[unlikely]] return; }
L_002CF0EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[3].d[0] = c.r[16].d[0] | c.r[17].d[0];
    set32(c.r[4], ld32((c.r[2].w[0] - 18260u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF100u); set32(c.r[16], ld32((c.r[3].w[0])));  if (depth < kMaxDepth) unit_0001(c, 64u, depth + 1u); else { c.pc = 0x00104300u; return; } if (c.pc != 0x002CF100u) [[unlikely]] return; }
L_002CF100:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002CF104:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002CF120:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF14Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x002CF14Cu) [[unlikely]] return; }
L_002CF14C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002CF208; } }
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u + 18u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[17].w[0] << 2);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[2], c.r[2].w[0] - 4534u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] - 3536u);
    c.budget -= 17;
    { const bool t = c.r[17].d[0] == c.r[4].d[0]; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_002CF1B8; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002CF1A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CF1C8; } }
L_002CF1A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    set32(c.r[2], c.r[2].w[0] - 2544u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 168u), c.r[2].w[0]);  if (t) { goto L_002CF1D8; } }
L_002CF1B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    set32(c.r[2], c.r[2].w[0] - 2448u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 168u), c.r[2].w[0]);  if (t) { goto L_002CF1D8; } }
L_002CF1C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    set32(c.r[2], c.r[2].w[0] - 2320u);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 4;
L_002CF1D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[2].w[0] - 4536u);
    st32((c.r[16].w[0] + 24u), c.r[18].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[2].w[0] - 4535u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[3].w[0]));
    c.r[7].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF208u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x002CF208u) [[unlikely]] return; }
L_002CF208:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002CF230:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[2].w[0] - 4512u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002CC000u < 16384u) { entry = entries_0073[(t - 0x002CC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002CF250:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x008D0000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[6], 0u + 21728u);
    set32(c.r[5], c.r[5].w[0] - 1360u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 100u), 0u);
    st32((c.r[4].w[0] + 96u), 0u);
    st32((c.r[4].w[0] + 92u), 0u);
    st32((c.r[4].w[0] + 88u), 0u);
    st32((c.r[4].w[0] + 84u), 0u);
    st32((c.r[4].w[0] + 80u), 0u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 188u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 176u)));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 4u));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    mmi::mult(c, 0, c.r[7].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 96u));
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 100u));
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 104u));
    c.budget -= 33;
    { st32((c.r[4].w[0] + 40u), c.f[0]);  goto L_002CF2E0; }
L_002CF2E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_002CF340; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002CF330; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[16].w[0] + 1236u)));
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002CF340; } }
    c.budget -= 1;
L_002CF330:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002CF380; } }
    c.budget -= 1;
L_002CF340:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 4496u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF364u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CF364u) [[unlikely]] return; }
L_002CF364:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 769u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002CF380; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002CF380; } }
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002CF380:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CF3A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 1236u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CF3D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002CF3E0; } }
    c.budget -= 1;
L_002CF3D8:
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002CF3E0:
    c.f[2] = ld32((c.r[5].w[0] + 8252u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002CF490; } }
    c.f[1] = ld32((c.r[5].w[0] + 348u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[6], c.r[5].w[0] + 304u);  if (t) { goto L_002CF490; } }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002CF480; } }
    fpu_div(c, 0u, c.f[1], c.f[2]);
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 48u)));
    c.r[2].d[0] = c.r[3].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[5].w[0] + 8252u));
    c.f[0] = ld32((c.r[6].w[0] + 44u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 26;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 44u), c.f[0]);  if (t) { goto L_002CF490; } }
    c.budget -= 1;
L_002CF480:
    st32((c.r[6].w[0] + 44u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 48u)));
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 4;
L_002CF490:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF4A4u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002CF4A4u) [[unlikely]] return; }
L_002CF4A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF4ACu); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x002CF4ACu) [[unlikely]] return; }
L_002CF4AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF4B4u); set32(c.r[4], ld32((c.r[16].w[0] + 80u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x002CF4B4u) [[unlikely]] return; }
L_002CF4B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF4BCu); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002CF4BCu) [[unlikely]] return; }
L_002CF4BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CF4D0:
    set32(c.r[3], ld32((c.r[5].w[0] + 1236u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002CF4E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002CF4F0; } }
L_002CF4E8:
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002CF4F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CF500:
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 1u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 1236u)));
    set32(c.r[3], c.r[3].w[0] << (c.r[6].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CF550; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 767u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CF550; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8513u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_002CF548; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002CF550; } }
    c.budget -= 1;
L_002CF548:
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002CF550:
    c.budget -= 2;
    {  goto L_002CF5B0; }
L_002CF560:
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 750u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CF580; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002CF598; } }
L_002CF580:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002CF598; } }
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002CF598:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CF5A0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_002CF5B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF5DCu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002CF5DCu) [[unlikely]] return; }
L_002CF5DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF5E4u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x002CF5E4u) [[unlikely]] return; }
L_002CF5E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF5ECu); set32(c.r[4], 0u + 20930u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x002CF5ECu) [[unlikely]] return; }
L_002CF5EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF5F4u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 400u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x002CF5F4u) [[unlikely]] return; }
L_002CF5F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF5FCu); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002CF5FCu) [[unlikely]] return; }
L_002CF5FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CF610:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF63Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002CF63Cu) [[unlikely]] return; }
L_002CF63C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF644u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x002CF644u) [[unlikely]] return; }
L_002CF644:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF64Cu); set32(c.r[4], ld32((c.r[17].w[0] + 80u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x002CF64Cu) [[unlikely]] return; }
L_002CF64C:
    set32(c.r[5], ld32((c.r[17].w[0] + 188u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF658u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 89u, depth + 1u); else { c.pc = 0x002A25C0u; return; } if (c.pc != 0x002CF658u) [[unlikely]] return; }
L_002CF658:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CF670:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF69Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002CF69Cu) [[unlikely]] return; }
L_002CF69C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF6A4u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x002CF6A4u) [[unlikely]] return; }
L_002CF6A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], c.r[16].w[0] + 2112u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[16].w[0] + 2752u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF6BCu); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_002E(c, 248u, depth + 1u); else { c.pc = 0x001BA910u; return; } if (c.pc != 0x002CF6BCu) [[unlikely]] return; }
L_002CF6BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF6C4u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x002CF6C4u) [[unlikely]] return; }
L_002CF6C4:
    set32(c.r[5], ld32((c.r[17].w[0] + 188u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF6D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 89u, depth + 1u); else { c.pc = 0x002A25C0u; return; } if (c.pc != 0x002CF6D0u) [[unlikely]] return; }
L_002CF6D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002CF6F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF710u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 432u, depth + 1u); else { c.pc = 0x002CF5B0u; return; } if (c.pc != 0x002CF710u) [[unlikely]] return; }
L_002CF710:
    set32(c.r[5], ld32((c.r[17].w[0] + 188u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF71Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 89u, depth + 1u); else { c.pc = 0x002A25C0u; return; } if (c.pc != 0x002CF71Cu) [[unlikely]] return; }
L_002CF71C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CF730:
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[2].w[0] - 1208u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 8216u);
    set32(c.r[3], c.r[4].w[0] + 13120u);
    c.budget -= 6;
L_002CF748:
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[4], c.r[4].w[0] + 820u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CF748u | kUnwind; return; } goto L_002CF748; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_002CF770:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[17], c.r[3].w[0] + 8216u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] - 1208u), 0u);
    c.budget -= 10;
L_002CF798:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002CF7B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF7ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 461u, depth + 1u); else { c.pc = 0x002CF8E0u; return; } if (c.pc != 0x002CF7ACu) [[unlikely]] return; }
L_002CF7AC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_002CF7C4; } }
L_002CF7B4:
    c.r[2].d[0] = c.r[16].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 820u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CF798u | kUnwind; return; } goto L_002CF798; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002CF7C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CF7D8:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[18].d[0]);
    c.r[2].d[0] = c.r[17].d[0] & 63ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0] + 48u), c.r[16].d[0]);  if (t) { goto L_002CF810; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF808u); set32(c.r[4], c.r[4].w[0] - 21016u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x002CF808u) [[unlikely]] return; }
L_002CF808:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002CF8C8; } }
L_002CF810:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { st32((c.r[29].w[0]), 0u);  goto L_002CF860; }
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[6].w[0] + 12u)));
    st32((c.r[29].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[5].w[0]);
    ldl(c.r[2], (c.r[6].w[0] + 23u));
    ldr(c.r[2], (c.r[6].w[0] + 16u));
    ldl(c.r[3], (c.r[6].w[0] + 31u));
    ldr(c.r[3], (c.r[6].w[0] + 24u));
    sdl(c.r[2], (c.r[29].w[0] + 27u));
    sdr(c.r[2], (c.r[29].w[0] + 20u));
    sdl(c.r[3], (c.r[29].w[0] + 35u));
    sdr(c.r[3], (c.r[29].w[0] + 28u));
    c.budget -= 18;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0])));  if (t) { goto L_002CF874; } }
L_002CF860:
    st32((c.r[29].w[0] + 8u), 0u);
    st32((c.r[29].w[0] + 12u), 0u);
    st32((c.r[29].w[0] + 16u), 0u);
    st8((c.r[29].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 5;
L_002CF874:
    set32(c.r[18], 0u + 1u);
    st32((c.r[29].w[0] + 4u), c.r[18].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF894u); set32(c.r[6], c.r[17].w[0] + 128u);  if (depth < kMaxDepth) unit_0074(c, 38u, depth + 1u); else { c.pc = 0x002D0338u; return; } if (c.pc != 0x002CF894u) [[unlikely]] return; }
L_002CF894:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] < 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x00BC0000u);  if (t) { goto L_002CF8C8; } }
    set32(c.r[2], 0u + 820u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + 8216u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[5].w[0] + 16u), c.r[17].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF8C4u); st32((c.r[2].w[0]), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0073(c, 481u, depth + 1u); else { c.pc = 0x002CFD00u; return; } if (c.pc != 0x002CF8C4u) [[unlikely]] return; }
L_002CF8C4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002CF8C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002CF8E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF8F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 42u, depth + 1u); else { c.pc = 0x002D0410u; return; } if (c.pc != 0x002CF8F4u) [[unlikely]] return; }
L_002CF8F4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[4], 0u + 820u);  if (t) { goto L_002CF924; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + 8216u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[5].w[0]), 0u);
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[6].w[0] + 4u), 0u);
    st32((c.r[3].w[0] + 12u), 0u);
    c.budget -= 10;
L_002CF924:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CF938:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 820u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[3].w[0] + 8216u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002CF9F4; } }
    set32(c.r[2], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002CF994; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF98Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 484u, depth + 1u); else { c.pc = 0x002CFD78u; return; } if (c.pc != 0x002CF98Cu) [[unlikely]] return; }
L_002CF98C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[2], 0u - 1u);  if (t) { goto L_002CF9F4; } }
L_002CF994:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF99Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 486u, depth + 1u); else { c.pc = 0x002CFDD0u; return; } if (c.pc != 0x002CF99Cu) [[unlikely]] return; }
L_002CF99C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 4u)));  goto L_002CF9E8; }
    set32(c.r[5], c.r[16].w[0] + 28u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002CF9E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF9C0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x002CF9C0u) [[unlikely]] return; }
L_002CF9C0:
    set32(c.r[3], 0u + 820u);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 2u));
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[4], c.r[4].w[0] + 28u);
    set32(c.r[5], c.r[5].w[0] + 8236u);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF9E4u); set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);  if (depth < kMaxDepth) unit_0073(c, 493u, depth + 1u); else { c.pc = 0x002CFF00u; return; } if (c.pc != 0x002CF9E4u) [[unlikely]] return; }
L_002CF9E4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_002CF9E8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));  goto L_002CF9F4; }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_002CF9F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002CFA10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFA30u); st64((c.r[29].w[0]), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0073(c, 474u, depth + 1u); else { c.pc = 0x002CFAE0u; return; } if (c.pc != 0x002CFA30u) [[unlikely]] return; }
L_002CFA30:
    set32(c.r[3], 0u + 820u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 8216u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002CFA60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFA58u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 484u, depth + 1u); else { c.pc = 0x002CFD78u; return; } if (c.pc != 0x002CFA58u) [[unlikely]] return; }
L_002CFA58:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[2], 0u - 1u);  if (t) { goto L_002CFAC8; } }
L_002CFA60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFA68u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 488u, depth + 1u); else { c.pc = 0x002CFE38u; return; } if (c.pc != 0x002CFA68u) [[unlikely]] return; }
L_002CFA68:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[16].w[0] + 3u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] + 28u);  if (t) { goto L_002CFAB8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002CFAB8; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 2u));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[5], c.r[5].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFA94u); set32(c.r[5], c.r[5].w[0] + 28u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x002CFA94u) [[unlikely]] return; }
L_002CFA94:
    set32(c.r[3], 0u + 820u);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 2u));
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[4], c.r[4].w[0] + 28u);
    set32(c.r[5], c.r[5].w[0] + 8236u);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFAB8u); set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);  if (depth < kMaxDepth) unit_0073(c, 493u, depth + 1u); else { c.pc = 0x002CFF00u; return; } if (c.pc != 0x002CFAB8u) [[unlikely]] return; }
L_002CFAB8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[16].w[0] + 3u));  goto L_002CFAC8; }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_002CFAC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002CFAE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 820u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], c.r[18].w[0] + 8216u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 14;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002CFB28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFB20u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 484u, depth + 1u); else { c.pc = 0x002CFD78u; return; } if (c.pc != 0x002CFB20u) [[unlikely]] return; }
L_002CFB20:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CFC08; } }
L_002CFB28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFB30u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 490u, depth + 1u); else { c.pc = 0x002CFEA0u; return; } if (c.pc != 0x002CFB30u) [[unlikely]] return; }
L_002CFB30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u - 16384u);  if (t) { goto L_002CFB6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFB40u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 488u, depth + 1u); else { c.pc = 0x002CFE38u; return; } if (c.pc != 0x002CFB40u) [[unlikely]] return; }
L_002CFB40:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[16].w[0]));  goto L_002CFB64; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFB58u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 484u, depth + 1u); else { c.pc = 0x002CFD78u; return; } if (c.pc != 0x002CFB58u) [[unlikely]] return; }
L_002CFB58:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[2], 0u + 820u);  if (t) { goto L_002CFBE4; } }
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 1;
L_002CFB64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002CFC04; } }
L_002CFB6C:
    set32(c.r[3], 0u + 12u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 16383ull;
    c.r[16].d[0] = c.r[16].d[0] | c.r[3].d[0];
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[16].d[0] = c.r[16].d[0] & c.r[4].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[3].d[0];
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 255ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[16].d[0] = c.r[16].d[0] | c.r[4].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = c.r[16].d[0] | c.r[3].d[0];
    c.r[6].d[0] = c.r[29].d[0] | 4ull;
    c.r[5].d[0] = c.r[16].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFBD8u); c.r[7].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 98u, depth + 1u); else { c.pc = 0x002D0DF0u; return; } if (c.pc != 0x002CFBD8u) [[unlikely]] return; }
L_002CFBD8:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[2].d[0] = ld8((c.r[29].w[0]));  goto L_002CFC08; }
    set32(c.r[2], 0u + 820u);
    c.budget -= 1;
L_002CFBE4:
    set32(c.r[3], c.r[18].w[0] + 8216u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFBFCu); st32((c.r[3].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_0073(c, 481u, depth + 1u); else { c.pc = 0x002CFD00u; return; } if (c.pc != 0x002CFBFCu) [[unlikely]] return; }
L_002CFBFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CFC08; } }
L_002CFC04:
    c.r[2].d[0] = ld8((c.r[29].w[0]));
    c.budget -= 1;
L_002CFC08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002CFD00:
    set32(c.r[3], 0u + 820u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[2], c.r[2].w[0] + 8216u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[17], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 16u)));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 12;
L_002CFD30:
    set32(c.r[4], c.r[16].w[0] + 28u);
    st32((c.r[16].w[0] + 124u), 0u);
    set32(c.r[5], 0u + 255u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], 0u + 32u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[17], c.r[17].w[0] - 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFD5Cu); set32(c.r[16], c.r[16].w[0] + 128u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x002CFD5Cu) [[unlikely]] return; }
L_002CFD5C:
    c.budget -= 2;
    if (c.r[17].sd[0] >= 0) { st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CFD30u | kUnwind; return; } goto L_002CFD30; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CFD78:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFD8Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 45u, depth + 1u); else { c.pc = 0x002D0498u; return; } if (c.pc != 0x002CFD8Cu) [[unlikely]] return; }
L_002CFD8C:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[7].sd[0] < 0; set32(c.r[4], 0u + 820u);  if (t) { goto L_002CFDBC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + 8216u);
    set32(c.r[6], 0u + 1u);
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[5].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[6].w[0]);
    c.budget -= 9;
L_002CFDBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CFDD0:
    set32(c.r[3], 0u + 820u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 8216u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] + 128u);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], c.r[4].w[0] + 255u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFE08u); st32((c.r[29].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0001(c, 153u, depth + 1u); else { c.pc = 0x00104BD8u; return; } if (c.pc != 0x002CFE08u) [[unlikely]] return; }
L_002CFE08:
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 124u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 124u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[29].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CFE38:
    set32(c.r[3], 0u + 820u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 8216u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] + 128u);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], c.r[4].w[0] + 256u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFE70u); st32((c.r[29].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0001(c, 153u, depth + 1u); else { c.pc = 0x00104BD8u; return; } if (c.pc != 0x002CFE70u) [[unlikely]] return; }
L_002CFE70:
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 124u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 124u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[29].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CFEA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 3;
L_002CFEAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFEB4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 486u, depth + 1u); else { c.pc = 0x002CFDD0u; return; } if (c.pc != 0x002CFEB4u) [[unlikely]] return; }
L_002CFEB4:
    set32(c.r[5], ld32((c.r[2].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], 0u + 820u);  if (t) { goto L_002CFEE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 8216u);
    set32(c.r[2], c.r[2].w[0] + 8u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 8;
    if (c.r[5].d[0] != c.r[3].d[0]) { st32((c.r[4].w[0]), c.r[5].w[0]);  goto L_002CFEE8; }
L_002CFEE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CFEEC; } }
L_002CFEE8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002CFEEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CFF00:
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 8u);
    c.budget -= 6;
L_002CFF18:
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[8].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002CFF78; } }
    set32(c.r[2], c.r[6].w[0] - 16u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    st32((c.r[5].w[0]), c.r[3].w[0]);
    st32((c.r[5].w[0] + 8u), c.r[9].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[5].w[0] + 12u), c.r[7].w[0]);  if (t) { goto L_002CFF54; } }
    set32(c.r[2], c.r[6].w[0] - 35u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_002CFF60; }
L_002CFF54:
    st32((c.r[5].w[0] + 4u), c.r[10].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[9], c.r[9].w[0] + 1u);  if (t) { goto L_002CFF84; } }
L_002CFF60:
    c.r[2].d[0] = c.r[7].d[0] & 7ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[5].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002CFF84; } }
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_002CFF84; } }
L_002CFF78:
    st32((c.r[5].w[0]), 0u);
    st32((c.r[5].w[0] + 8u), 0u);
    st32((c.r[5].w[0] + 12u), 0u);
    c.budget -= 3;
L_002CFF84:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = c.r[8].d[0] & 7ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { goto L_002CFF9C; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002CFF9C:
    c.r[2].d[0] = c.r[6].sd[0] < 40ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CFF18u | kUnwind; return; } goto L_002CFF18; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_002CFFB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_002CFFD8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 1192u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { set32(c.r[5], ld32((c.r[3].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DC88u | kUnwind; return; } [[clang::musttail]] return unit_0007(c, 122u, depth); }
L_002CFFD8:
    c.r[3].d[0] = ld8((c.r[2].w[0] - 20928u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002CFFE8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 6;
    [[clang::musttail]] return unit_0074(c, 1u, depth);
}

}
