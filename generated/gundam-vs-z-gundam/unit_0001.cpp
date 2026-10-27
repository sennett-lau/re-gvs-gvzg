#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0001[4096] = {
    0, 0, 0, 0, 1, 0, 2, 0, 3, 0, 4, 0, 5, 0, 6, 7, 8, 0, 9, 0, 10, 0, 11, 0, 12, 0, 13, 0, 0, 0, 0, 0,
    14, 0, 15, 0, 16, 0, 17, 0, 18, 0, 19, 0, 20, 0, 21, 0, 22, 0, 23, 0, 0, 0, 0, 0, 24, 0, 25, 0, 26, 0, 27, 0,
    28, 0, 29, 0, 0, 0, 0, 0, 30, 0, 31, 0, 32, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 35, 0,
    0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 40, 0, 41, 0, 42, 0, 43, 0,
    44, 0, 45, 0, 46, 0, 47, 0, 48, 0, 49, 0, 50, 0, 51, 0, 0, 0, 0, 0, 52, 0, 53, 0, 54, 0, 55, 0, 56, 0, 57, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 0, 0, 0, 0, 60, 0, 61, 0, 62, 0, 63, 0,
    64, 0, 65, 0, 66, 0, 67, 0, 68, 0, 69, 0, 70, 0, 71, 0, 0, 0, 0, 0, 72, 0, 73, 0, 74, 0, 75, 0, 0, 0, 0, 0,
    76, 0, 77, 0, 78, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    80, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    94, 0, 95, 0, 0, 0, 0, 0, 96, 0, 97, 0, 98, 0, 99, 0, 100, 0, 101, 0, 102, 0, 103, 0, 104, 0, 105, 0, 106, 0, 107, 0,
    0, 0, 0, 0, 108, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 111, 0, 112, 0, 113, 0, 114, 0, 0, 0, 115, 0, 0, 0,
    116, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    120, 0, 0, 0, 0, 0, 121, 0, 122, 0, 0, 0, 0, 0, 0, 0, 123, 124, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0,
    0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0,
    130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 138, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 142, 0, 143, 0, 0, 0, 0, 0, 144, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0,
    0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    154, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0,
    159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 165, 0,
    0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 170, 0, 0, 0, 0, 0, 171, 0,
    0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0,
    182, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    191, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 194, 0, 195, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 201, 0, 0, 202, 0, 0,
    0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 219, 0, 0, 0,
    220, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0,
    0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0,
    0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0,
    0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0,
    0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249,
    0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0,
    253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0,
    0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 273, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0,
    0, 287, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 293,
    0, 294, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 300, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 305, 0, 306,
    0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0,
    316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 319, 0,
    0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 325, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 328, 0, 0, 0, 0, 329, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0,
    0, 332, 0, 333, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 336, 0, 0, 337, 0, 0, 338, 0, 0, 339, 0, 0, 340, 0,
    0, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0,
    346, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349,
    0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0,
    0, 0, 353, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0,
    356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 359, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 362, 0, 0, 0,
    363, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 366, 0, 0, 0, 0, 367, 0, 0,
    0, 368, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0,
    372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    377, 0, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0,
    0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0,
    0, 0, 388, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 394, 0, 395, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 397, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 400, 0, 401, 0, 0, 402, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 403, 404, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 407, 0, 0, 0,
    0, 0, 408, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411,
    0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    415, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 420, 0, 0, 0,
    0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    424, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 432, 0, 433, 0,
    0, 0, 434, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0,
    0, 0, 439, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0,
    0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 451, 0, 0, 0, 452, 0, 453, 0, 0, 0, 454, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 457, 0,
    0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0,
    0, 462, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 465,
    0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 468, 0, 469, 0, 470, 0, 0, 0, 471, 0, 472, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 475,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 485, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 488, 0, 0, 0,
    0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    492, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 494, 0, 495, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 497, 0, 0, 498, 0, 0,
    0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 502, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 505, 0, 506, 0, 507, 0, 0, 0, 508, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 510, 0, 0, 511, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 513, 0, 514, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0,
    0, 516, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 519, 0, 520, 0, 0, 0, 0, 521, 0, 0, 0,
    0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0,
};

void unit_0001(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00104010;
    case 2u: goto L_00104018;
    case 3u: goto L_00104020;
    case 4u: goto L_00104028;
    case 5u: goto L_00104030;
    case 6u: goto L_00104038;
    case 7u: goto L_0010403C;
    case 8u: goto L_00104040;
    case 9u: goto L_00104048;
    case 10u: goto L_00104050;
    case 11u: goto L_00104058;
    case 12u: goto L_00104060;
    case 13u: goto L_00104068;
    case 14u: goto L_00104080;
    case 15u: goto L_00104088;
    case 16u: goto L_00104090;
    case 17u: goto L_00104098;
    case 18u: goto L_001040A0;
    case 19u: goto L_001040A8;
    case 20u: goto L_001040B0;
    case 21u: goto L_001040B8;
    case 22u: goto L_001040C0;
    case 23u: goto L_001040C8;
    case 24u: goto L_001040E0;
    case 25u: goto L_001040E8;
    case 26u: goto L_001040F0;
    case 27u: goto L_001040F8;
    case 28u: goto L_00104100;
    case 29u: goto L_00104108;
    case 30u: goto L_00104120;
    case 31u: goto L_00104128;
    case 32u: goto L_00104130;
    case 33u: goto L_00104138;
    case 34u: goto L_00104170;
    case 35u: goto L_00104178;
    case 36u: goto L_00104190;
    case 37u: goto L_00104198;
    case 38u: goto L_001041D0;
    case 39u: goto L_001041D8;
    case 40u: goto L_001041E0;
    case 41u: goto L_001041E8;
    case 42u: goto L_001041F0;
    case 43u: goto L_001041F8;
    case 44u: goto L_00104200;
    case 45u: goto L_00104208;
    case 46u: goto L_00104210;
    case 47u: goto L_00104218;
    case 48u: goto L_00104220;
    case 49u: goto L_00104228;
    case 50u: goto L_00104230;
    case 51u: goto L_00104238;
    case 52u: goto L_00104250;
    case 53u: goto L_00104258;
    case 54u: goto L_00104260;
    case 55u: goto L_00104268;
    case 56u: goto L_00104270;
    case 57u: goto L_00104278;
    case 58u: goto L_001042C0;
    case 59u: goto L_001042C8;
    case 60u: goto L_001042E0;
    case 61u: goto L_001042E8;
    case 62u: goto L_001042F0;
    case 63u: goto L_001042F8;
    case 64u: goto L_00104300;
    case 65u: goto L_00104308;
    case 66u: goto L_00104310;
    case 67u: goto L_00104318;
    case 68u: goto L_00104320;
    case 69u: goto L_00104328;
    case 70u: goto L_00104330;
    case 71u: goto L_00104338;
    case 72u: goto L_00104350;
    case 73u: goto L_00104358;
    case 74u: goto L_00104360;
    case 75u: goto L_00104368;
    case 76u: goto L_00104380;
    case 77u: goto L_00104388;
    case 78u: goto L_00104390;
    case 79u: goto L_00104398;
    case 80u: goto L_00104400;
    case 81u: goto L_00104408;
    case 82u: goto L_00104560;
    case 83u: goto L_00104568;
    case 84u: goto L_00104590;
    case 85u: goto L_00104598;
    case 86u: goto L_001045B0;
    case 87u: goto L_001045B8;
    case 88u: goto L_001045F0;
    case 89u: goto L_001045F8;
    case 90u: goto L_00104620;
    case 91u: goto L_00104628;
    case 92u: goto L_00104650;
    case 93u: goto L_00104658;
    case 94u: goto L_00104680;
    case 95u: goto L_00104688;
    case 96u: goto L_001046A0;
    case 97u: goto L_001046A8;
    case 98u: goto L_001046B0;
    case 99u: goto L_001046B8;
    case 100u: goto L_001046C0;
    case 101u: goto L_001046C8;
    case 102u: goto L_001046D0;
    case 103u: goto L_001046D8;
    case 104u: goto L_001046E0;
    case 105u: goto L_001046E8;
    case 106u: goto L_001046F0;
    case 107u: goto L_001046F8;
    case 108u: goto L_00104710;
    case 109u: goto L_00104718;
    case 110u: goto L_00104740;
    case 111u: goto L_00104748;
    case 112u: goto L_00104750;
    case 113u: goto L_00104758;
    case 114u: goto L_00104760;
    case 115u: goto L_00104770;
    case 116u: goto L_00104780;
    case 117u: goto L_001047A4;
    case 118u: goto L_001047B0;
    case 119u: goto L_001047D4;
    case 120u: goto L_00104800;
    case 121u: goto L_00104818;
    case 122u: goto L_00104820;
    case 123u: goto L_00104840;
    case 124u: goto L_00104844;
    case 125u: goto L_00104850;
    case 126u: goto L_00104874;
    case 127u: goto L_00104894;
    case 128u: goto L_001048A8;
    case 129u: goto L_001048E8;
    case 130u: goto L_00104900;
    case 131u: goto L_00104928;
    case 132u: goto L_00104960;
    case 133u: goto L_00104978;
    case 134u: goto L_001049A0;
    case 135u: goto L_001049B0;
    case 136u: goto L_001049C8;
    case 137u: goto L_001049D8;
    case 138u: goto L_001049E0;
    case 139u: goto L_00104A08;
    case 140u: goto L_00104A38;
    case 141u: goto L_00104A4C;
    case 142u: goto L_00104A90;
    case 143u: goto L_00104A98;
    case 144u: goto L_00104AB0;
    case 145u: goto L_00104AB8;
    case 146u: goto L_00104AD0;
    case 147u: goto L_00104AE0;
    case 148u: goto L_00104AF0;
    case 149u: goto L_00104B08;
    case 150u: goto L_00104B18;
    case 151u: goto L_00104B30;
    case 152u: goto L_00104B40;
    case 153u: goto L_00104BD8;
    case 154u: goto L_00104C00;
    case 155u: goto L_00104C10;
    case 156u: goto L_00104C24;
    case 157u: goto L_00104C3C;
    case 158u: goto L_00104C70;
    case 159u: goto L_00104C80;
    case 160u: goto L_00104D18;
    case 161u: goto L_00104D50;
    case 162u: goto L_00104D64;
    case 163u: goto L_00104DC0;
    case 164u: goto L_00104DF0;
    case 165u: goto L_00104DF8;
    case 166u: goto L_00104E10;
    case 167u: goto L_00104E28;
    case 168u: goto L_00104E3C;
    case 169u: goto L_00104E58;
    case 170u: goto L_00104E60;
    case 171u: goto L_00104E78;
    case 172u: goto L_00104E90;
    case 173u: goto L_00104EC0;
    case 174u: goto L_00104EC8;
    case 175u: goto L_00104EE0;
    case 176u: goto L_00104EF8;
    case 177u: goto L_00104F28;
    case 178u: goto L_00104F30;
    case 179u: goto L_00104F48;
    case 180u: goto L_00104F60;
    case 181u: goto L_00104F70;
    case 182u: goto L_00104F80;
    case 183u: goto L_00104F90;
    case 184u: goto L_00104FA0;
    case 185u: goto L_00104FB0;
    case 186u: goto L_00104FC0;
    case 187u: goto L_00104FD0;
    case 188u: goto L_00104FE0;
    case 189u: goto L_00105020;
    case 190u: goto L_00105028;
    case 191u: goto L_00105080;
    case 192u: goto L_00105090;
    case 193u: goto L_001050A0;
    case 194u: goto L_001050B0;
    case 195u: goto L_001050B8;
    case 196u: goto L_001050C0;
    case 197u: goto L_001050E8;
    case 198u: goto L_0010512C;
    case 199u: goto L_00105140;
    case 200u: goto L_00105160;
    case 201u: goto L_00105168;
    case 202u: goto L_00105174;
    case 203u: goto L_00105190;
    case 204u: goto L_001051A4;
    case 205u: goto L_001051B8;
    case 206u: goto L_00105210;
    case 207u: goto L_00105228;
    case 208u: goto L_00105290;
    case 209u: goto L_001052A8;
    case 210u: goto L_001052BC;
    case 211u: goto L_001052D0;
    case 212u: goto L_0010532C;
    case 213u: goto L_00105340;
    case 214u: goto L_00105390;
    case 215u: goto L_001053B0;
    case 216u: goto L_001053C4;
    case 217u: goto L_001053D8;
    case 218u: goto L_001053E8;
    case 219u: goto L_001053F0;
    case 220u: goto L_00105400;
    case 221u: goto L_00105408;
    case 222u: goto L_00105418;
    case 223u: goto L_00105430;
    case 224u: goto L_00105468;
    case 225u: goto L_00105478;
    case 226u: goto L_00105490;
    case 227u: goto L_001054A0;
    case 228u: goto L_001054C4;
    case 229u: goto L_001054D0;
    case 230u: goto L_001054E8;
    case 231u: goto L_001054F8;
    case 232u: goto L_0010551C;
    case 233u: goto L_00105528;
    case 234u: goto L_00105540;
    case 235u: goto L_00105550;
    case 236u: goto L_00105578;
    case 237u: goto L_00105588;
    case 238u: goto L_001055B0;
    case 239u: goto L_001055F0;
    case 240u: goto L_00105608;
    case 241u: goto L_00105618;
    case 242u: goto L_00105630;
    case 243u: goto L_00105640;
    case 244u: goto L_00105658;
    case 245u: goto L_00105668;
    case 246u: goto L_00105690;
    case 247u: goto L_001056D0;
    case 248u: goto L_00105710;
    case 249u: goto L_0010577C;
    case 250u: goto L_00105794;
    case 251u: goto L_001057AC;
    case 252u: goto L_001057E0;
    case 253u: goto L_00105800;
    case 254u: goto L_00105830;
    case 255u: goto L_00105848;
    case 256u: goto L_00105888;
    case 257u: goto L_001058A8;
    case 258u: goto L_001058F8;
    case 259u: goto L_00105928;
    case 260u: goto L_00105994;
    case 261u: goto L_001059B0;
    case 262u: goto L_001059C8;
    case 263u: goto L_001059D4;
    case 264u: goto L_001059F0;
    case 265u: goto L_00105A20;
    case 266u: goto L_00105A58;
    case 267u: goto L_00105A68;
    case 268u: goto L_00105AA0;
    case 269u: goto L_00105AF0;
    case 270u: goto L_00105B0C;
    case 271u: goto L_00105B24;
    case 272u: goto L_00105B90;
    case 273u: goto L_00105BB0;
    case 274u: goto L_00105BB8;
    case 275u: goto L_00105BF0;
    case 276u: goto L_00105C30;
    case 277u: goto L_00105CA0;
    case 278u: goto L_00105CB8;
    case 279u: goto L_00105CD8;
    case 280u: goto L_00105D70;
    case 281u: goto L_00105D98;
    case 282u: goto L_00105DA8;
    case 283u: goto L_00105DBC;
    case 284u: goto L_00105DCC;
    case 285u: goto L_00105DE0;
    case 286u: goto L_00105DF0;
    case 287u: goto L_00105E04;
    case 288u: goto L_00105E24;
    case 289u: goto L_00105E38;
    case 290u: goto L_00105E48;
    case 291u: goto L_00105E5C;
    case 292u: goto L_00105E74;
    case 293u: goto L_00105E7C;
    case 294u: goto L_00105E84;
    case 295u: goto L_00105E90;
    case 296u: goto L_00105ED8;
    case 297u: goto L_00105F08;
    case 298u: goto L_00105F18;
    case 299u: goto L_00105F30;
    case 300u: goto L_00105F34;
    case 301u: goto L_00105F38;
    case 302u: goto L_00105F6C;
    case 303u: goto L_00105FC8;
    case 304u: goto L_00105FF0;
    case 305u: goto L_00105FF4;
    case 306u: goto L_00105FFC;
    case 307u: goto L_00106004;
    case 308u: goto L_00106040;
    case 309u: goto L_00106058;
    case 310u: goto L_00106098;
    case 311u: goto L_001060AC;
    case 312u: goto L_001060C0;
    case 313u: goto L_00106110;
    case 314u: goto L_00106158;
    case 315u: goto L_0010616C;
    case 316u: goto L_00106180;
    case 317u: goto L_001061E0;
    case 318u: goto L_001061F0;
    case 319u: goto L_001061F8;
    case 320u: goto L_00106214;
    case 321u: goto L_00106248;
    case 322u: goto L_0010625C;
    case 323u: goto L_00106270;
    case 324u: goto L_001062C8;
    case 325u: goto L_001062D0;
    case 326u: goto L_001062EC;
    case 327u: goto L_00106318;
    case 328u: goto L_0010632C;
    case 329u: goto L_00106340;
    case 330u: goto L_0010634C;
    case 331u: goto L_00106374;
    case 332u: goto L_00106384;
    case 333u: goto L_0010638C;
    case 334u: goto L_00106394;
    case 335u: goto L_001063BC;
    case 336u: goto L_001063C8;
    case 337u: goto L_001063D4;
    case 338u: goto L_001063E0;
    case 339u: goto L_001063EC;
    case 340u: goto L_001063F8;
    case 341u: goto L_00106410;
    case 342u: goto L_00106424;
    case 343u: goto L_00106438;
    case 344u: goto L_00106458;
    case 345u: goto L_00106470;
    case 346u: goto L_00106480;
    case 347u: goto L_001064A4;
    case 348u: goto L_001064D0;
    case 349u: goto L_001064FC;
    case 350u: goto L_00106508;
    case 351u: goto L_00106550;
    case 352u: goto L_00106568;
    case 353u: goto L_00106588;
    case 354u: goto L_00106598;
    case 355u: goto L_001065E0;
    case 356u: goto L_00106600;
    case 357u: goto L_00106698;
    case 358u: goto L_001066C8;
    case 359u: goto L_00106714;
    case 360u: goto L_0010671C;
    case 361u: goto L_0010675C;
    case 362u: goto L_00106770;
    case 363u: goto L_00106780;
    case 364u: goto L_0010678C;
    case 365u: goto L_001067D8;
    case 366u: goto L_001067E0;
    case 367u: goto L_001067F4;
    case 368u: goto L_00106804;
    case 369u: goto L_00106814;
    case 370u: goto L_00106860;
    case 371u: goto L_00106870;
    case 372u: goto L_00106880;
    case 373u: goto L_001068C8;
    case 374u: goto L_00106940;
    case 375u: goto L_00106990;
    case 376u: goto L_00106A18;
    case 377u: goto L_00106A80;
    case 378u: goto L_00106A94;
    case 379u: goto L_00106AA4;
    case 380u: goto L_00106AC8;
    case 381u: goto L_00106AF8;
    case 382u: goto L_00106B08;
    case 383u: goto L_00106B38;
    case 384u: goto L_00106B48;
    case 385u: goto L_00106BA0;
    case 386u: goto L_00106BC4;
    case 387u: goto L_00106C68;
    case 388u: goto L_00106C88;
    case 389u: goto L_00106C90;
    case 390u: goto L_00106CC4;
    case 391u: goto L_00106CE4;
    case 392u: goto L_00106D40;
    case 393u: goto L_00106D58;
    case 394u: goto L_00106D88;
    case 395u: goto L_00106D90;
    case 396u: goto L_00106D98;
    case 397u: goto L_00106E0C;
    case 398u: goto L_00106E24;
    case 399u: goto L_00106E3C;
    case 400u: goto L_00106E54;
    case 401u: goto L_00106E5C;
    case 402u: goto L_00106E68;
    case 403u: goto L_00106E94;
    case 404u: goto L_00106E98;
    case 405u: goto L_00106EA0;
    case 406u: goto L_00106EE0;
    case 407u: goto L_00106EF0;
    case 408u: goto L_00106F08;
    case 409u: goto L_00106F20;
    case 410u: goto L_00106F38;
    case 411u: goto L_00106F7C;
    case 412u: goto L_00106F98;
    case 413u: goto L_00106FB0;
    case 414u: goto L_00106FD0;
    case 415u: goto L_00107000;
    case 416u: goto L_00107024;
    case 417u: goto L_00107040;
    case 418u: goto L_001070B4;
    case 419u: goto L_001070E8;
    case 420u: goto L_001070F0;
    case 421u: goto L_00107110;
    case 422u: goto L_00107138;
    case 423u: goto L_00107150;
    case 424u: goto L_00107180;
    case 425u: goto L_00107190;
    case 426u: goto L_001071E8;
    case 427u: goto L_00107220;
    case 428u: goto L_00107260;
    case 429u: goto L_001072A8;
    case 430u: goto L_001072B8;
    case 431u: goto L_001072E0;
    case 432u: goto L_001072F0;
    case 433u: goto L_001072F8;
    case 434u: goto L_00107308;
    case 435u: goto L_00107310;
    case 436u: goto L_00107340;
    case 437u: goto L_00107350;
    case 438u: goto L_00107378;
    case 439u: goto L_00107388;
    case 440u: goto L_00107398;
    case 441u: goto L_001073C8;
    case 442u: goto L_001073F0;
    case 443u: goto L_00107408;
    case 444u: goto L_0010742C;
    case 445u: goto L_00107458;
    case 446u: goto L_00107494;
    case 447u: goto L_001074D8;
    case 448u: goto L_00107510;
    case 449u: goto L_00107550;
    case 450u: goto L_00107560;
    case 451u: goto L_00107588;
    case 452u: goto L_00107598;
    case 453u: goto L_001075A0;
    case 454u: goto L_001075B0;
    case 455u: goto L_001075B8;
    case 456u: goto L_001075E8;
    case 457u: goto L_001075F8;
    case 458u: goto L_00107618;
    case 459u: goto L_001076A8;
    case 460u: goto L_00107700;
    case 461u: goto L_0010776C;
    case 462u: goto L_00107784;
    case 463u: goto L_00107794;
    case 464u: goto L_001077DC;
    case 465u: goto L_001077FC;
    case 466u: goto L_0010780C;
    case 467u: goto L_00107838;
    case 468u: goto L_00107840;
    case 469u: goto L_00107848;
    case 470u: goto L_00107850;
    case 471u: goto L_00107860;
    case 472u: goto L_00107868;
    case 473u: goto L_001078A0;
    case 474u: goto L_001078E0;
    case 475u: goto L_001078FC;
    case 476u: goto L_00107940;
    case 477u: goto L_00107978;
    case 478u: goto L_001079BC;
    case 479u: goto L_00107A00;
    case 480u: goto L_00107A48;
    case 481u: goto L_00107A68;
    case 482u: goto L_00107A98;
    case 483u: goto L_00107AC0;
    case 484u: goto L_00107AE0;
    case 485u: goto L_00107AF8;
    case 486u: goto L_00107B30;
    case 487u: goto L_00107B58;
    case 488u: goto L_00107B70;
    case 489u: goto L_00107B88;
    case 490u: goto L_00107BB0;
    case 491u: goto L_00107BC8;
    case 492u: goto L_00107C00;
    case 493u: goto L_00107C20;
    case 494u: goto L_00107C30;
    case 495u: goto L_00107C38;
    case 496u: goto L_00107C54;
    case 497u: goto L_00107C68;
    case 498u: goto L_00107C74;
    case 499u: goto L_00107C98;
    case 500u: goto L_00107CB8;
    case 501u: goto L_00107D30;
    case 502u: goto L_00107D38;
    case 503u: goto L_00107D48;
    case 504u: goto L_00107D90;
    case 505u: goto L_00107DA8;
    case 506u: goto L_00107DB0;
    case 507u: goto L_00107DB8;
    case 508u: goto L_00107DC8;
    case 509u: goto L_00107DD0;
    case 510u: goto L_00107E08;
    case 511u: goto L_00107E14;
    case 512u: goto L_00107E30;
    case 513u: goto L_00107E48;
    case 514u: goto L_00107E50;
    case 515u: goto L_00107E70;
    case 516u: goto L_00107E84;
    case 517u: goto L_00107EA0;
    case 518u: goto L_00107EB8;
    case 519u: goto L_00107ED4;
    case 520u: goto L_00107EDC;
    case 521u: goto L_00107EF0;
    case 522u: goto L_00107F0C;
    case 523u: goto L_00107F28;
    case 524u: goto L_00107FC4;
    case 525u: goto L_00107FF0;
    default: bad_entry(c, 0x00104000u); return;
    }
L_00104010:
    set32(c.r[3], 0u + 19u);
    c.budget -= 1;
    c.pc = 0x00104018u; syscall(c, 0x00104014u); if (c.pc != 0x00104018u) return;
    c.budget -= 1;
L_00104018:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104020:
    set32(c.r[3], 0u + 20u);
    c.budget -= 1;
    c.pc = 0x00104028u; syscall(c, 0x00104024u); if (c.pc != 0x00104028u) return;
    c.budget -= 1;
L_00104028:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104030:
    set32(c.r[3], 0u + 21u);
    c.budget -= 1;
    c.pc = 0x00104038u; syscall(c, 0x00104034u); if (c.pc != 0x00104038u) return;
    c.budget -= 1;
L_00104038:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010403C:
    c.budget -= 1;
L_00104040:
    set32(c.r[3], 0u + 22u);
    c.budget -= 1;
    c.pc = 0x00104048u; syscall(c, 0x00104044u); if (c.pc != 0x00104048u) return;
    c.budget -= 1;
L_00104048:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104050:
    set32(c.r[3], 0u + 23u);
    c.budget -= 1;
    c.pc = 0x00104058u; syscall(c, 0x00104054u); if (c.pc != 0x00104058u) return;
    c.budget -= 1;
L_00104058:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104060:
    set32(c.r[3], 0u + 252u);
    c.budget -= 1;
    c.pc = 0x00104068u; syscall(c, 0x00104064u); if (c.pc != 0x00104068u) return;
    c.budget -= 1;
L_00104068:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104080:
    set32(c.r[3], 0u - 26u);
    c.budget -= 1;
    c.pc = 0x00104088u; syscall(c, 0x00104084u); if (c.pc != 0x00104088u) return;
    c.budget -= 1;
L_00104088:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104090:
    set32(c.r[3], 0u - 27u);
    c.budget -= 1;
    c.pc = 0x00104098u; syscall(c, 0x00104094u); if (c.pc != 0x00104098u) return;
    c.budget -= 1;
L_00104098:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001040A0:
    set32(c.r[3], 0u - 28u);
    c.budget -= 1;
    c.pc = 0x001040A8u; syscall(c, 0x001040A4u); if (c.pc != 0x001040A8u) return;
    c.budget -= 1;
L_001040A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001040B0:
    set32(c.r[3], 0u - 29u);
    c.budget -= 1;
    c.pc = 0x001040B8u; syscall(c, 0x001040B4u); if (c.pc != 0x001040B8u) return;
    c.budget -= 1;
L_001040B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001040C0:
    set32(c.r[3], 0u - 254u);
    c.budget -= 1;
    c.pc = 0x001040C8u; syscall(c, 0x001040C4u); if (c.pc != 0x001040C8u) return;
    c.budget -= 1;
L_001040C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001040E0:
    set32(c.r[3], 0u + 32u);
    c.budget -= 1;
    c.pc = 0x001040E8u; syscall(c, 0x001040E4u); if (c.pc != 0x001040E8u) return;
    c.budget -= 1;
L_001040E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001040F0:
    set32(c.r[3], 0u + 33u);
    c.budget -= 1;
    c.pc = 0x001040F8u; syscall(c, 0x001040F4u); if (c.pc != 0x001040F8u) return;
    c.budget -= 1;
L_001040F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104100:
    set32(c.r[3], 0u + 34u);
    c.budget -= 1;
    c.pc = 0x00104108u; syscall(c, 0x00104104u); if (c.pc != 0x00104108u) return;
    c.budget -= 1;
L_00104108:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104120:
    set32(c.r[3], 0u + 36u);
    c.budget -= 1;
    c.pc = 0x00104128u; syscall(c, 0x00104124u); if (c.pc != 0x00104128u) return;
    c.budget -= 1;
L_00104128:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104130:
    set32(c.r[3], 0u + 37u);
    c.budget -= 1;
    c.pc = 0x00104138u; syscall(c, 0x00104134u); if (c.pc != 0x00104138u) return;
    c.budget -= 1;
L_00104138:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104170:
    set32(c.r[3], 0u + 41u);
    c.budget -= 1;
    c.pc = 0x00104178u; syscall(c, 0x00104174u); if (c.pc != 0x00104178u) return;
    c.budget -= 1;
L_00104178:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104190:
    set32(c.r[3], 0u + 43u);
    c.budget -= 1;
    c.pc = 0x00104198u; syscall(c, 0x00104194u); if (c.pc != 0x00104198u) return;
    c.budget -= 1;
L_00104198:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001041D0:
    set32(c.r[3], 0u + 47u);
    c.budget -= 1;
    c.pc = 0x001041D8u; syscall(c, 0x001041D4u); if (c.pc != 0x001041D8u) return;
    c.budget -= 1;
L_001041D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001041E0:
    set32(c.r[3], 0u + 48u);
    c.budget -= 1;
    c.pc = 0x001041E8u; syscall(c, 0x001041E4u); if (c.pc != 0x001041E8u) return;
    c.budget -= 1;
L_001041E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001041F0:
    set32(c.r[3], 0u - 49u);
    c.budget -= 1;
    c.pc = 0x001041F8u; syscall(c, 0x001041F4u); if (c.pc != 0x001041F8u) return;
    c.budget -= 1;
L_001041F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104200:
    set32(c.r[3], 0u + 50u);
    c.budget -= 1;
    c.pc = 0x00104208u; syscall(c, 0x00104204u); if (c.pc != 0x00104208u) return;
    c.budget -= 1;
L_00104208:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104210:
    set32(c.r[3], 0u + 51u);
    c.budget -= 1;
    c.pc = 0x00104218u; syscall(c, 0x00104214u); if (c.pc != 0x00104218u) return;
    c.budget -= 1;
L_00104218:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104220:
    set32(c.r[3], 0u - 52u);
    c.budget -= 1;
    c.pc = 0x00104228u; syscall(c, 0x00104224u); if (c.pc != 0x00104228u) return;
    c.budget -= 1;
L_00104228:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104230:
    set32(c.r[3], 0u + 53u);
    c.budget -= 1;
    c.pc = 0x00104238u; syscall(c, 0x00104234u); if (c.pc != 0x00104238u) return;
    c.budget -= 1;
L_00104238:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104250:
    set32(c.r[3], 0u + 55u);
    c.budget -= 1;
    c.pc = 0x00104258u; syscall(c, 0x00104254u); if (c.pc != 0x00104258u) return;
    c.budget -= 1;
L_00104258:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104260:
    set32(c.r[3], 0u - 56u);
    c.budget -= 1;
    c.pc = 0x00104268u; syscall(c, 0x00104264u); if (c.pc != 0x00104268u) return;
    c.budget -= 1;
L_00104268:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104270:
    set32(c.r[3], 0u + 57u);
    c.budget -= 1;
    c.pc = 0x00104278u; syscall(c, 0x00104274u); if (c.pc != 0x00104278u) return;
    c.budget -= 1;
L_00104278:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001042C0:
    set32(c.r[3], 0u + 62u);
    c.budget -= 1;
    c.pc = 0x001042C8u; syscall(c, 0x001042C4u); if (c.pc != 0x001042C8u) return;
    c.budget -= 1;
L_001042C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001042E0:
    set32(c.r[3], 0u + 64u);
    c.budget -= 1;
    c.pc = 0x001042E8u; syscall(c, 0x001042E4u); if (c.pc != 0x001042E8u) return;
    c.budget -= 1;
L_001042E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001042F0:
    set32(c.r[3], 0u + 65u);
    c.budget -= 1;
    c.pc = 0x001042F8u; syscall(c, 0x001042F4u); if (c.pc != 0x001042F8u) return;
    c.budget -= 1;
L_001042F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104300:
    set32(c.r[3], 0u + 66u);
    c.budget -= 1;
    c.pc = 0x00104308u; syscall(c, 0x00104304u); if (c.pc != 0x00104308u) return;
    c.budget -= 1;
L_00104308:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104310:
    set32(c.r[3], 0u - 67u);
    c.budget -= 1;
    c.pc = 0x00104318u; syscall(c, 0x00104314u); if (c.pc != 0x00104318u) return;
    c.budget -= 1;
L_00104318:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104320:
    set32(c.r[3], 0u + 68u);
    c.budget -= 1;
    c.pc = 0x00104328u; syscall(c, 0x00104324u); if (c.pc != 0x00104328u) return;
    c.budget -= 1;
L_00104328:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104330:
    set32(c.r[3], 0u + 69u);
    c.budget -= 1;
    c.pc = 0x00104338u; syscall(c, 0x00104334u); if (c.pc != 0x00104338u) return;
    c.budget -= 1;
L_00104338:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104350:
    set32(c.r[3], 0u + 71u);
    c.budget -= 1;
    c.pc = 0x00104358u; syscall(c, 0x00104354u); if (c.pc != 0x00104358u) return;
    c.budget -= 1;
L_00104358:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104360:
    set32(c.r[3], 0u - 72u);
    c.budget -= 1;
    c.pc = 0x00104368u; syscall(c, 0x00104364u); if (c.pc != 0x00104368u) return;
    c.budget -= 1;
L_00104368:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104380:
    set32(c.r[3], 0u + 74u);
    c.budget -= 1;
    c.pc = 0x00104388u; syscall(c, 0x00104384u); if (c.pc != 0x00104388u) return;
    c.budget -= 1;
L_00104388:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104390:
    set32(c.r[3], 0u + 75u);
    c.budget -= 1;
    c.pc = 0x00104398u; syscall(c, 0x00104394u); if (c.pc != 0x00104398u) return;
    c.budget -= 1;
L_00104398:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104400:
    set32(c.r[3], 0u + 82u);
    c.budget -= 1;
    c.pc = 0x00104408u; syscall(c, 0x00104404u); if (c.pc != 0x00104408u) return;
    c.budget -= 1;
L_00104408:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104560:
    set32(c.r[3], 0u + 100u);
    c.budget -= 1;
    c.pc = 0x00104568u; syscall(c, 0x00104564u); if (c.pc != 0x00104568u) return;
    c.budget -= 1;
L_00104568:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104590:
    set32(c.r[3], 0u - 104u);
    c.budget -= 1;
    c.pc = 0x00104598u; syscall(c, 0x00104594u); if (c.pc != 0x00104598u) return;
    c.budget -= 1;
L_00104598:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001045B0:
    set32(c.r[3], 0u + 107u);
    c.budget -= 1;
    c.pc = 0x001045B8u; syscall(c, 0x001045B4u); if (c.pc != 0x001045B8u) return;
    c.budget -= 1;
L_001045B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001045F0:
    set32(c.r[3], 0u + 111u);
    c.budget -= 1;
    c.pc = 0x001045F8u; syscall(c, 0x001045F4u); if (c.pc != 0x001045F8u) return;
    c.budget -= 1;
L_001045F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104620:
    set32(c.r[3], 0u + 113u);
    c.budget -= 1;
    c.pc = 0x00104628u; syscall(c, 0x00104624u); if (c.pc != 0x00104628u) return;
    c.budget -= 1;
L_00104628:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104650:
    set32(c.r[3], 0u + 115u);
    c.budget -= 1;
    c.pc = 0x00104658u; syscall(c, 0x00104654u); if (c.pc != 0x00104658u) return;
    c.budget -= 1;
L_00104658:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104680:
    set32(c.r[3], 0u + 118u);
    c.budget -= 1;
    c.pc = 0x00104688u; syscall(c, 0x00104684u); if (c.pc != 0x00104688u) return;
    c.budget -= 1;
L_00104688:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001046A0:
    set32(c.r[3], 0u + 119u);
    c.budget -= 1;
    c.pc = 0x001046A8u; syscall(c, 0x001046A4u); if (c.pc != 0x001046A8u) return;
    c.budget -= 1;
L_001046A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001046B0:
    set32(c.r[3], 0u - 119u);
    c.budget -= 1;
    c.pc = 0x001046B8u; syscall(c, 0x001046B4u); if (c.pc != 0x001046B8u) return;
    c.budget -= 1;
L_001046B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001046C0:
    set32(c.r[3], 0u + 120u);
    c.budget -= 1;
    c.pc = 0x001046C8u; syscall(c, 0x001046C4u); if (c.pc != 0x001046C8u) return;
    c.budget -= 1;
L_001046C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001046D0:
    set32(c.r[3], 0u - 120u);
    c.budget -= 1;
    c.pc = 0x001046D8u; syscall(c, 0x001046D4u); if (c.pc != 0x001046D8u) return;
    c.budget -= 1;
L_001046D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001046E0:
    set32(c.r[3], 0u + 121u);
    c.budget -= 1;
    c.pc = 0x001046E8u; syscall(c, 0x001046E4u); if (c.pc != 0x001046E8u) return;
    c.budget -= 1;
L_001046E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001046F0:
    set32(c.r[3], 0u + 122u);
    c.budget -= 1;
    c.pc = 0x001046F8u; syscall(c, 0x001046F4u); if (c.pc != 0x001046F8u) return;
    c.budget -= 1;
L_001046F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104710:
    set32(c.r[3], 0u + 124u);
    c.budget -= 1;
    c.pc = 0x00104718u; syscall(c, 0x00104714u); if (c.pc != 0x00104718u) return;
    c.budget -= 1;
L_00104718:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104740:
    set32(c.r[3], 0u + 127u);
    c.budget -= 1;
    c.pc = 0x00104748u; syscall(c, 0x00104744u); if (c.pc != 0x00104748u) return;
    c.budget -= 1;
L_00104748:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104750:
    set32(c.r[3], 0u + 130u);
    c.budget -= 1;
    c.pc = 0x00104758u; syscall(c, 0x00104754u); if (c.pc != 0x00104758u) return;
    c.budget -= 1;
L_00104758:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104760:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0] - 24496u), 0u);  c.pc = t; return; }
L_00104770:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104780u);  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x00104780u) [[unlikely]] return; }
L_00104780:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], 0u + 4u);
    c.r[3].d[0] = c.r[3].d[0] | 61440ull;
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_001047A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001047A4u);  if (depth < kMaxDepth) unit_0003(c, 127u, depth + 1u); else { c.pc = 0x0010D378u; return; } if (c.pc != 0x001047A4u) [[unlikely]] return; }
L_001047A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 1;
L_001047A8:
    c.r[3].d[0] = c.r[3].d[0] | 61440ull;
    c.budget -= 2;
L_001047B0:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001047B0u | kUnwind; return; } goto L_001047B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001047D4u);  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x001047D4u) [[unlikely]] return; }
L_001047D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], 0u + 4u);
    c.r[3].d[0] = c.r[3].d[0] | 61440ull;
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_001047F8; } }
    c.budget -= 2;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0003(c, 127u, depth); }
L_001047F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00104800:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104818u); c.r[5].d[0] = c.r[29].d[0] | 8ull;  if (depth < kMaxDepth) unit_0001(c, 92u, depth + 1u); else { c.pc = 0x00104650u; return; } if (c.pc != 0x00104818u) [[unlikely]] return; }
L_00104818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104820u);  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x00104820u) [[unlikely]] return; }
L_00104820:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], 0u + 4u);
    c.r[3].d[0] = c.r[3].d[0] | 61440ull;
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_00104848; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104844u);  if (depth < kMaxDepth) unit_0003(c, 127u, depth + 1u); else { c.pc = 0x0010D378u; return; } if (c.pc != 0x00104844u) [[unlikely]] return; }
    goto L_00104844;
L_00104840:
    c.budget -= 1;
L_00104844:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 1;
L_00104848:
    c.r[3].d[0] = c.r[3].d[0] | 61440ull;
    c.budget -= 2;
L_00104850:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010486C; } }
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00104850u | kUnwind; return; } goto L_00104850; } }
L_0010486C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104874u);  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x00104874u) [[unlikely]] return; }
L_00104874:
    set32(c.r[3], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    st32((c.r[1].w[0] - 4096u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00104894; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104894u);  if (depth < kMaxDepth) unit_0003(c, 127u, depth + 1u); else { c.pc = 0x0010D378u; return; } if (c.pc != 0x00104894u) [[unlikely]] return; }
L_00104894:
    c.r[2].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001048A8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_00104908; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], ld32((c.r[16].w[0] - 24496u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001048F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001048E8u);  if (depth < kMaxDepth) unit_0001(c, 269u, depth + 1u); else { c.pc = 0x00105AF0u; return; } if (c.pc != 0x001048E8u) [[unlikely]] return; }
L_001048E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00104908; } }
    st32((c.r[16].w[0] - 24496u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_001048F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104900u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 257u, depth + 1u); else { c.pc = 0x001058A8u; return; } if (c.pc != 0x00104900u) [[unlikely]] return; }
L_00104900:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00104910; } }
L_00104908:
    set32(c.r[2], 0u - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 2;
L_00104910:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00104928:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_00104980; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], ld32((c.r[16].w[0] - 24496u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00104970; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104960u);  if (depth < kMaxDepth) unit_0001(c, 269u, depth + 1u); else { c.pc = 0x00105AF0u; return; } if (c.pc != 0x00104960u) [[unlikely]] return; }
L_00104960:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00104980; } }
    st32((c.r[16].w[0] - 24496u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_00104970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104978u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 265u, depth + 1u); else { c.pc = 0x00105A20u; return; } if (c.pc != 0x00104978u) [[unlikely]] return; }
L_00104978:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00104988; } }
L_00104980:
    set32(c.r[2], 0u - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 2;
L_00104988:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001049A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001049B0u);  if (depth < kMaxDepth) unit_0005(c, 247u, depth + 1u); else { c.pc = 0x00117D80u; return; } if (c.pc != 0x001049B0u) [[unlikely]] return; }
L_001049B0:
    set32(c.r[3], 0u + 5u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001049C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 1u);  c.pc = t; return; }
L_001049D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 1u);  c.pc = t; return; }
L_001049E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[17], mfc0(c, 12u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[17].d[0] = c.r[17].d[0] & c.r[2].d[0];
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == 0ull; c.r[18].sd[0] = static_cast<std::int32_t>(0x00430000u);  if (t) { goto L_00104A2C; } }
L_00104A08:
    set_interrupts(c, false);
    set32(c.r[2], mfc0(c, 12u, 0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00104A08u | kUnwind; return; } goto L_00104A08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] - 24492u)));  if (t) { goto L_00104A30; } }
L_00104A2C:
    set32(c.r[2], ld32((c.r[18].w[0] - 24492u)));
    c.budget -= 1;
L_00104A30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104A38u); set32(c.r[16], c.r[2].w[0] + c.r[4].w[0]);  if (depth < kMaxDepth) unit_0001(c, 58u, depth + 1u); else { c.pc = 0x001042C0u; return; } if (c.pc != 0x00104A38u) [[unlikely]] return; }
L_00104A38:
    c.r[2].d[0] = c.r[2].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], ld32((c.r[18].w[0] - 24492u)));  if (t) { goto L_00104A68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104A4Cu);  if (depth < kMaxDepth) unit_0005(c, 247u, depth + 1u); else { c.pc = 0x00117D80u; return; } if (c.pc != 0x00104A4Cu) [[unlikely]] return; }
L_00104A4C:
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_00104A5C; } }
    set_interrupts(c, true);
    c.budget -= 1;
L_00104A5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65535ull;  if (t) { goto L_00104A74; } }
L_00104A68:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[18].w[0] - 24492u), c.r[16].w[0]);  if (t) { goto L_00104A74; } }
    set_interrupts(c, true);
    c.budget -= 1;
L_00104A74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00104A90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00104A98:
    set32(c.r[2], 0u + 8192u);
    st64((c.r[5].w[0] + 72u), 0ull);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00104AB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00104AB8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00104AD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104AD0u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 198u, depth + 1u); else { c.pc = 0x0010D9C8u; return; } if (c.pc != 0x00104AD0u) [[unlikely]] return; }
L_00104AD0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00104AE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104AF0u);  if (depth < kMaxDepth) unit_0005(c, 247u, depth + 1u); else { c.pc = 0x00117D80u; return; } if (c.pc != 0x00104AF0u) [[unlikely]] return; }
L_00104AF0:
    set32(c.r[3], 0u + 5u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00104B08:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104B18u);  if (depth < kMaxDepth) unit_0005(c, 247u, depth + 1u); else { c.pc = 0x00117D80u; return; } if (c.pc != 0x00104B18u) [[unlikely]] return; }
L_00104B18:
    set32(c.r[3], 0u + 5u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00104B30:
    c.r[7].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[7].d[0] | 61440ull;
    c.budget -= 4;
L_00104B40:
    set32(c.r[2], mfc0(c, 28u, 0u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00104B7C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00104B7C; } }
    c.budget -= 3;
L_00104B7C:
    set32(c.r[2], mfc0(c, 28u, 0u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00104BB8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00104BB8; } }
    c.budget -= 3;
L_00104BB8:
    set32(c.r[6], c.r[6].w[0] + 64u);
    c.r[2].d[0] = c.r[6].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00104B40u | kUnwind; return; } goto L_00104B40; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104BD8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], mfc0(c, 12u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 10;
L_00104C00:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00104C10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104C10u);  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x00104C10u) [[unlikely]] return; }
L_00104C10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 65472ull;
    c.r[5].d[0] = c.r[17].d[0] & c.r[4].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104C24u); c.r[4].d[0] = c.r[18].d[0] & c.r[4].d[0];  if (depth < kMaxDepth) unit_0001(c, 151u, depth + 1u); else { c.pc = 0x00104B30u; return; } if (c.pc != 0x00104C24u) [[unlikely]] return; }
L_00104C24:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00104C40; } }
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 64u);  [[clang::musttail]] return unit_0003(c, 127u, depth); }
L_00104C3C:
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 1;
L_00104C40:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00104C70:
    c.r[7].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[7].d[0] | 61440ull;
    c.budget -= 4;
L_00104C80:
    set32(c.r[2], mfc0(c, 28u, 0u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00104CBC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00104CBC; } }
    c.budget -= 3;
L_00104CBC:
    set32(c.r[2], mfc0(c, 28u, 0u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00104CF8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00104CF8; } }
    c.budget -= 3;
L_00104CF8:
    set32(c.r[6], c.r[6].w[0] + 64u);
    c.r[2].d[0] = c.r[6].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00104C80u | kUnwind; return; } goto L_00104C80; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104D18:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], mfc0(c, 12u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 12;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00104D50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104D50u);  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x00104D50u) [[unlikely]] return; }
L_00104D50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 65472ull;
    c.r[5].d[0] = c.r[17].d[0] & c.r[4].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104D64u); c.r[4].d[0] = c.r[18].d[0] & c.r[4].d[0];  if (depth < kMaxDepth) unit_0001(c, 158u, depth + 1u); else { c.pc = 0x00104C70u; return; } if (c.pc != 0x00104D64u) [[unlikely]] return; }
L_00104D64:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00104D80; } }
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 64u);  [[clang::musttail]] return unit_0003(c, 127u, depth); }
L_00104D80:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00104DC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], mfc0(c, 12u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00104DF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104DF0u);  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x00104DF0u) [[unlikely]] return; }
L_00104DF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104DF8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 5u, depth + 1u); else { c.pc = 0x00104030u; return; } if (c.pc != 0x00104DF8u) [[unlikely]] return; }
L_00104DF8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00104E14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104E10u);  if (depth < kMaxDepth) unit_0003(c, 127u, depth + 1u); else { c.pc = 0x0010D378u; return; } if (c.pc != 0x00104E10u) [[unlikely]] return; }
L_00104E10:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00104E14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00104E28:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 5;
L_00104E3C:
    set32(c.r[16], mfc0(c, 12u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00104E58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104E58u);  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x00104E58u) [[unlikely]] return; }
L_00104E58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104E60u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 3u, depth + 1u); else { c.pc = 0x00104020u; return; } if (c.pc != 0x00104E60u) [[unlikely]] return; }
L_00104E60:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00104E7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104E78u);  if (depth < kMaxDepth) unit_0003(c, 127u, depth + 1u); else { c.pc = 0x0010D378u; return; } if (c.pc != 0x00104E78u) [[unlikely]] return; }
L_00104E78:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00104E7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00104E90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], mfc0(c, 12u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00104EC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104EC0u);  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x00104EC0u) [[unlikely]] return; }
L_00104EC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104EC8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 10u, depth + 1u); else { c.pc = 0x00104050u; return; } if (c.pc != 0x00104EC8u) [[unlikely]] return; }
L_00104EC8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00104EE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104EE0u);  if (depth < kMaxDepth) unit_0003(c, 127u, depth + 1u); else { c.pc = 0x0010D378u; return; } if (c.pc != 0x00104EE0u) [[unlikely]] return; }
L_00104EE0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00104EE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00104EF8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], mfc0(c, 12u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00104F28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104F28u);  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x00104F28u) [[unlikely]] return; }
L_00104F28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104F30u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 8u, depth + 1u); else { c.pc = 0x00104040u; return; } if (c.pc != 0x00104F30u) [[unlikely]] return; }
L_00104F30:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00104F4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104F48u);  if (depth < kMaxDepth) unit_0003(c, 127u, depth + 1u); else { c.pc = 0x0010D378u; return; } if (c.pc != 0x00104F48u) [[unlikely]] return; }
L_00104F48:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00104F4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00104F60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104F70u);  if (depth < kMaxDepth) unit_0001(c, 14u, depth + 1u); else { c.pc = 0x00104080u; return; } if (c.pc != 0x00104F70u) [[unlikely]] return; }
L_00104F70:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00104F80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104F90u);  if (depth < kMaxDepth) unit_0001(c, 16u, depth + 1u); else { c.pc = 0x00104090u; return; } if (c.pc != 0x00104F90u) [[unlikely]] return; }
L_00104F90:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00104FA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104FB0u);  if (depth < kMaxDepth) unit_0001(c, 18u, depth + 1u); else { c.pc = 0x001040A0u; return; } if (c.pc != 0x00104FB0u) [[unlikely]] return; }
L_00104FB0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00104FC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104FD0u);  if (depth < kMaxDepth) unit_0001(c, 20u, depth + 1u); else { c.pc = 0x001040B0u; return; } if (c.pc != 0x00104FD0u) [[unlikely]] return; }
L_00104FD0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00104FE0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    set32(c.r[20], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[19], 0u + 2u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[18], c.r[17].w[0] + 8u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[16], c.r[17].w[0] + 9u);
    c.budget -= 16;
L_00105020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105028u); set32(c.r[4], ld32((c.r[22].w[0] - 30880u)));  if (depth < kMaxDepth) unit_0001(c, 68u, depth + 1u); else { c.pc = 0x00104320u; return; } if (c.pc != 0x00105028u) [[unlikely]] return; }
L_00105028:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 511ull;
    set32(c.r[4], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 1);
    st32((c.r[17].w[0]), c.r[4].w[0]);
    set32(c.r[2], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[16].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == c.r[20].d[0]; c.r[5].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_00105088; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], c.r[21].w[0] + 6696u);  if (t) { goto L_00105068; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00105078; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001050A8; } }
L_00105068:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[19].d[0]; set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);  if (t) { goto L_00105098; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001050A8; } }
L_00105078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105080u); c.r[4].d[0] = ld8((c.r[3].w[0]));  if (depth < kMaxDepth) unit_0001(c, 46u, depth + 1u); else { c.pc = 0x00104210u; return; } if (c.pc != 0x00105080u) [[unlikely]] return; }
L_00105080:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00105020u | kUnwind; return; } goto L_00105020; } }
L_00105088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105090u); c.r[4].d[0] = ld8((c.r[6].w[0]));  if (depth < kMaxDepth) unit_0001(c, 36u, depth + 1u); else { c.pc = 0x00104190u; return; } if (c.pc != 0x00105090u) [[unlikely]] return; }
L_00105090:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00105020u | kUnwind; return; } goto L_00105020; } }
L_00105098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001050A0u); c.r[4].d[0] = ld8((c.r[3].w[0]));  if (depth < kMaxDepth) unit_0001(c, 52u, depth + 1u); else { c.pc = 0x00104250u; return; } if (c.pc != 0x001050A0u) [[unlikely]] return; }
L_001050A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00105020u | kUnwind; return; } goto L_00105020; } }
L_001050A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001050B0u);  if (depth < kMaxDepth) unit_0001(c, 348u, depth + 1u); else { c.pc = 0x001064D0u; return; } if (c.pc != 0x001050B0u) [[unlikely]] return; }
L_001050B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00105020u | kUnwind; return; } goto L_00105020; } }
L_001050B8:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[16].d[0]);
    c.budget -= 2;
L_001050C0:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] - 24488u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] > 0; st64((c.r[29].w[0] + 96u), c.r[17].d[0]);  if (t) { goto L_00105140; } }
    set32(c.r[2], 0u + 255u);
    st32((c.r[29].w[0] + 56u), 0u);
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001050E8u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0001(c, 60u, depth + 1u); else { c.pc = 0x001042E0u; return; } if (c.pc != 0x001050E8u) [[unlikely]] return; }
L_001050E8:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; st32((c.r[17].w[0] - 30880u), c.r[2].w[0]);  if (t) { goto L_00105140; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 20448u);
    set32(c.r[3], c.r[3].w[0] - 31904u);
    set32(c.r[5], c.r[5].w[0] - 10384u);
    set32(c.r[6], 0u + 1024u);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[5].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010512Cu); st32((c.r[29].w[0] + 20u), 0u);  if (depth < kMaxDepth) unit_0001(c, 24u, depth + 1u); else { c.pc = 0x001040E0u; return; } if (c.pc != 0x0010512Cu) [[unlikely]] return; }
L_0010512C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0; st32((c.r[16].w[0] - 24488u), c.r[4].w[0]);  if (t) { goto L_00105148; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105140u); set32(c.r[4], ld32((c.r[17].w[0] - 30880u)));  if (depth < kMaxDepth) unit_0001(c, 62u, depth + 1u); else { c.pc = 0x001042F0u; return; } if (c.pc != 0x00105140u) [[unlikely]] return; }
L_00105140:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00105178; } }
L_00105148:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[2].w[0] - 30872u);
    st32((c.r[2].w[0] - 30872u), 0u);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105160u); st32((c.r[3].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_0001(c, 28u, depth + 1u); else { c.pc = 0x00104100u; return; } if (c.pc != 0x00105160u) [[unlikely]] return; }
L_00105160:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105168u);  if (depth < kMaxDepth) unit_0001(c, 38u, depth + 1u); else { c.pc = 0x001041D0u; return; } if (c.pc != 0x00105168u) [[unlikely]] return; }
L_00105168:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105174u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 34u, depth + 1u); else { c.pc = 0x00104170u; return; } if (c.pc != 0x00105174u) [[unlikely]] return; }
L_00105174:
    set32(c.r[2], ld32((c.r[16].w[0] - 24488u)));
    c.budget -= 1;
L_00105178:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00105190:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], 0u - 47u);
    c.budget -= 4;
    c.pc = 0x001051A4u; syscall(c, 0x001051A0u); if (c.pc != 0x001051A4u) return;
    c.budget -= 1;
L_001051A4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[4].d[0]; c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;  if (t) { goto L_001051C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001051B8u);  if (depth < kMaxDepth) unit_0001(c, 48u, depth + 1u); else { c.pc = 0x00104220u; return; } if (c.pc != 0x001051B8u) [[unlikely]] return; }
L_001051B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00105218; } }
L_001051C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);  if (t) { goto L_001051D4; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 24488u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_001051DC; } }
L_001051D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00105214; } }
L_001051DC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[3].w[0] - 30872u);
    set32(c.r[4], ld32((c.r[5].w[0] - 30880u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    set32(c.r[6], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[5], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    st8((c.r[5].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105210u); st8((c.r[3].w[0] + 9u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_0001(c, 66u, depth + 1u); else { c.pc = 0x00104310u; return; } if (c.pc != 0x00105210u) [[unlikely]] return; }
L_00105210:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00105214:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00105218:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00105228:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(128ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_00105250; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 24488u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_00105258; } }
L_00105250:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00105294; } }
L_00105258:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[3].w[0] - 30872u);
    set32(c.r[4], ld32((c.r[5].w[0] - 30880u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[7], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    set32(c.r[6], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[5], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    st8((c.r[5].w[0] + 8u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105290u); st8((c.r[3].w[0] + 9u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_0001(c, 66u, depth + 1u); else { c.pc = 0x00104310u; return; } if (c.pc != 0x00105290u) [[unlikely]] return; }
L_00105290:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00105294:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001052A8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], 0u - 47u);
    c.budget -= 4;
    c.pc = 0x001052BCu; syscall(c, 0x001052B8u); if (c.pc != 0x001052BCu) return;
    c.budget -= 1;
L_001052BC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[4].d[0]; c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;  if (t) { goto L_001052D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001052D0u);  if (depth < kMaxDepth) unit_0001(c, 54u, depth + 1u); else { c.pc = 0x00104260u; return; } if (c.pc != 0x001052D0u) [[unlikely]] return; }
L_001052D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00105334; } }
L_001052D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);  if (t) { goto L_001052EC; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 24488u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_001052F4; } }
L_001052EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00105330; } }
L_001052F4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[3].w[0] - 30872u);
    set32(c.r[4], ld32((c.r[5].w[0] - 30880u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[7], 0u + 2u);
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    set32(c.r[6], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[5], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    st8((c.r[5].w[0] + 8u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010532Cu); st8((c.r[3].w[0] + 9u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_0001(c, 66u, depth + 1u); else { c.pc = 0x00104310u; return; } if (c.pc != 0x0010532Cu) [[unlikely]] return; }
L_0010532C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00105330:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00105334:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00105340:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    set32(c.r[2], mfc0(c, 12u, 0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 10;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);  goto L_00105374; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 32776ull;  if (t) { goto L_001053F4; } }
L_00105374:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 6736u);
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105390u); st32((c.r[29].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_0001(c, 60u, depth + 1u); else { c.pc = 0x001042E0u; return; } if (c.pc != 0x00105390u) [[unlikely]] return; }
L_00105390:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] >= 0; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001053A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 32771ull;  if (t) { goto L_001053F4; } }
L_001053A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001053B0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 337u, depth + 1u); else { c.pc = 0x0010EDE8u; return; } if (c.pc != 0x001053B0u) [[unlikely]] return; }
L_001053B0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 21512u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001053C4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 347u, depth + 1u); else { c.pc = 0x0010EF98u; return; } if (c.pc != 0x001053C4u) [[unlikely]] return; }
L_001053C4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { goto L_001053E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001053D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 62u, depth + 1u); else { c.pc = 0x001042F0u; return; } if (c.pc != 0x001053D8u) [[unlikely]] return; }
L_001053D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001053F4; } }
L_001053E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001053E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 68u, depth + 1u); else { c.pc = 0x00104320u; return; } if (c.pc != 0x001053E8u) [[unlikely]] return; }
L_001053E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001053F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 62u, depth + 1u); else { c.pc = 0x001042F0u; return; } if (c.pc != 0x001053F0u) [[unlikely]] return; }
L_001053F0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001053F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 3;
L_00105400:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00105408:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105418u); c.r[4].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 66u, depth + 1u); else { c.pc = 0x00104310u; return; } if (c.pc != 0x00105418u) [[unlikely]] return; }
L_00105418:
    set_interrupts(c, true);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00105430:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[2], c.r[2].w[0] - 29840u);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[29].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], 0u + 1u);
    st32((c.r[29].w[0] + 8u), c.r[6].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105468u); st32((c.r[29].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0001(c, 108u, depth + 1u); else { c.pc = 0x00104710u; return; } if (c.pc != 0x00105468u) [[unlikely]] return; }
L_00105468:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00105478:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105490u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 108u, depth + 1u); else { c.pc = 0x00104710u; return; } if (c.pc != 0x00105490u) [[unlikely]] return; }
L_00105490:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001054A0:
    set32(c.r[5], c.r[5].w[0] << 24);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 24));
    st32((c.r[29].w[0]), c.r[4].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[4], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001054C4u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 108u, depth + 1u); else { c.pc = 0x00104710u; return; } if (c.pc != 0x001054C4u) [[unlikely]] return; }
L_001054C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001054D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001054E8u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0001(c, 108u, depth + 1u); else { c.pc = 0x00104710u; return; } if (c.pc != 0x001054E8u) [[unlikely]] return; }
L_001054E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001054F8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    st32((c.r[29].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[4], 0u + 32u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010551Cu); st32((c.r[29].w[0] + 8u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_0001(c, 108u, depth + 1u); else { c.pc = 0x00104710u; return; } if (c.pc != 0x0010551Cu) [[unlikely]] return; }
L_0010551C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00105528:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105540u); set32(c.r[4], 0u + 33u);  if (depth < kMaxDepth) unit_0001(c, 108u, depth + 1u); else { c.pc = 0x00104710u; return; } if (c.pc != 0x00105540u) [[unlikely]] return; }
L_00105540:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00105550:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] & 65535ull;
    st32((c.r[29].w[0]), c.r[4].w[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], 0u - 5u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105578u); st32((c.r[29].w[0] + 8u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_0001(c, 108u, depth + 1u); else { c.pc = 0x00104710u; return; } if (c.pc != 0x00105578u) [[unlikely]] return; }
L_00105578:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00105588:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] & 65535ull;
    st32((c.r[29].w[0]), c.r[4].w[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], 0u - 6u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001055B0u); st32((c.r[29].w[0] + 8u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_0001(c, 108u, depth + 1u); else { c.pc = 0x00104710u; return; } if (c.pc != 0x001055B0u) [[unlikely]] return; }
L_001055B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001055F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105608u); set32(c.r[4], 0u - 8u);  if (depth < kMaxDepth) unit_0001(c, 108u, depth + 1u); else { c.pc = 0x00104710u; return; } if (c.pc != 0x00105608u) [[unlikely]] return; }
L_00105608:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00105618:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105630u); set32(c.r[4], 0u - 9u);  if (depth < kMaxDepth) unit_0001(c, 108u, depth + 1u); else { c.pc = 0x00104710u; return; } if (c.pc != 0x00105630u) [[unlikely]] return; }
L_00105630:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00105640:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105658u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0001(c, 108u, depth + 1u); else { c.pc = 0x00104710u; return; } if (c.pc != 0x00105658u) [[unlikely]] return; }
L_00105658:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00105668:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[2].w[0] - 29760u);
    st32((c.r[2].w[0] - 29760u), c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] + 16u);
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 4u), 0u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 12u), c.r[4].w[0]);  c.pc = t; return; }
L_00105690:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16u);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[5].w[0] + 12u), c.r[4].w[0]);  if (t) { goto L_001056C4; } }
    set32(c.r[2], c.r[5].w[0] + 16u);
    st32((c.r[5].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_001056C4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001056D0:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16u);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[5].w[0] + 8u), c.r[4].w[0]);  if (t) { goto L_00105704; } }
    set32(c.r[2], c.r[5].w[0] + 16u);
    st32((c.r[5].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 2;
L_00105704:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00105710:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; st64((c.r[29].w[0] + 32u), c.r[18].d[0]);  if (t) { goto L_0010581C; } }
    c.r[2].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_00105750; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0010586C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00105894; } }
L_00105750:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] <= 0; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00105890; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 20u)));  goto L_001057C0; }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(321ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_0010577C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010577Cu); set32(c.r[4], c.r[4].w[0] + 6752u);  if (depth < kMaxDepth) unit_0001(c, 348u, depth + 1u); else { c.pc = 0x001064D0u; return; } if (c.pc != 0x0010577Cu) [[unlikely]] return; }
L_0010577C:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[6].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105794u); set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0001(c, 235u, depth + 1u); else { c.pc = 0x00105550u; return; } if (c.pc != 0x00105794u) [[unlikely]] return; }
L_00105794:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_001057AC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001057ACu); set32(c.r[4], c.r[4].w[0] + 6792u);  if (depth < kMaxDepth) unit_0001(c, 348u, depth + 1u); else { c.pc = 0x001064D0u; return; } if (c.pc != 0x001057ACu) [[unlikely]] return; }
L_001057AC:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00105890; } }
L_001057C0:
    set32(c.r[16], 0u + 12u);
    c.r[2].d[0] = ld16((c.r[18].w[0]));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00105810; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  if (t) { goto L_001057E4; } }
    c.budget -= 1;
L_001057E0:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_001057E4:
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105800u); set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  if (depth < kMaxDepth) unit_0001(c, 246u, depth + 1u); else { c.pc = 0x00105690u; return; } if (c.pc != 0x00105800u) [[unlikely]] return; }
L_00105800:
    c.r[2].d[0] = ld16((c.r[18].w[0]));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001057E0u | kUnwind; return; } goto L_001057E0; }
L_00105810:
    st32((c.r[17].w[0] + 8u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00105890; } }
L_0010581C:
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105830u); c.r[6].d[0] = c.r[6].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0001(c, 237u, depth + 1u); else { c.pc = 0x00105588u; return; } if (c.pc != 0x00105830u) [[unlikely]] return; }
L_00105830:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[5].sd[0] >= 0) { set32(c.r[2], ld32((c.r[17].w[0] + 16u)));  goto L_00105850; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105848u); set32(c.r[4], c.r[4].w[0] + 6816u);  if (depth < kMaxDepth) unit_0001(c, 348u, depth + 1u); else { c.pc = 0x001064D0u; return; } if (c.pc != 0x00105848u) [[unlikely]] return; }
L_00105848:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00105888; } }
L_00105850:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00105890; } }
L_0010586C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00105888; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105888u); set32(c.r[4], c.r[4].w[0] + 6840u);  if (depth < kMaxDepth) unit_0001(c, 348u, depth + 1u); else { c.pc = 0x001064D0u; return; } if (c.pc != 0x00105888u) [[unlikely]] return; }
L_00105888:
    st32((c.r[17].w[0] + 12u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 2;
L_00105890:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00105894:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001058A8:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.r[20].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[19], c.r[21].w[0] - 29488u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001059F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001058F8u);  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x001058F8u) [[unlikely]] return; }
L_001058F8:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 29440u);
    st32((c.r[19].w[0] + 12u), c.r[3].w[0]);
    c.r[6].d[0] = c.r[2].d[0] | c.r[4].d[0];
    set32(c.r[8], 0u - 1u);
    st32((c.r[19].w[0] + 16u), c.r[6].w[0]);
    set32(c.r[7], 0u + 10u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[6].w[0] + 12u);
    c.budget -= 12;
L_00105928:
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[8].d[0]) { set32(c.r[16], c.r[21].w[0] - 29488u);  goto L_00105978; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[7].d[0]; c.r[3].d[0] = ld8((c.r[16].w[0]));  if (t) { goto L_00105958; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { goto L_00105974; } }
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 1;
L_00105958:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00105928u | kUnwind; return; } goto L_00105928; } }
L_00105974:
    set32(c.r[16], c.r[21].w[0] - 29488u);
    c.budget -= 1;
L_00105978:
    set32(c.r[2], c.r[17].w[0] + 12u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 7u)));
    set32(c.r[4], ld32((c.r[21].w[0] - 29488u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105994u); st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0001(c, 227u, depth + 1u); else { c.pc = 0x001054A0u; return; } if (c.pc != 0x00105994u) [[unlikely]] return; }
L_00105994:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_001059B8; } }
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001059F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001059B0u);  if (depth < kMaxDepth) unit_0003(c, 127u, depth + 1u); else { c.pc = 0x0010D378u; return; } if (c.pc != 0x001059B0u) [[unlikely]] return; }
L_001059B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001059F4; } }
L_001059B8:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_001059E0; } }
    c.budget -= 1;
L_001059C8:
    set32(c.r[4], ld32((c.r[17].w[0] - 29488u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001059D4u);  if (depth < kMaxDepth) unit_0001(c, 229u, depth + 1u); else { c.pc = 0x001054D0u; return; } if (c.pc != 0x001059D4u) [[unlikely]] return; }
L_001059D4:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001059C8u | kUnwind; return; } goto L_001059C8; } }
L_001059E0:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001059F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001059F0u);  if (depth < kMaxDepth) unit_0003(c, 127u, depth + 1u); else { c.pc = 0x0010D378u; return; } if (c.pc != 0x001059F0u) [[unlikely]] return; }
L_001059F0:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001059F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00105A20:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.budget -= 11;
    { const bool t = c.r[18].sd[0] <= 0; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_00105ACC; } }
    c.r[19].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 3;
L_00105A58:
    set32(c.r[17], c.r[3].w[0] + 1u);
    set32(c.r[4], ld32((c.r[2].w[0] - 29464u)));
    set32(c.r[16], c.r[20].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_00105A68:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00105A68u | kUnwind; return; } goto L_00105A68; } }
    set32(c.r[5], c.r[19].w[0] - 29488u);
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.r[4].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105AA0u); set32(c.r[4], ld32((c.r[5].w[0] + 24u)));  if (depth < kMaxDepth) unit_0001(c, 247u, depth + 1u); else { c.pc = 0x001056D0u; return; } if (c.pc != 0x00105AA0u) [[unlikely]] return; }
L_00105AA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 13u);  if (t) { goto L_00105AB8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[3].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00105AC0; } }
L_00105AB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00105AD0; } }
L_00105AC0:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00105A58u | kUnwind; return; } goto L_00105A58; } }
L_00105ACC:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_00105AD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00105AF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105B0Cu); c.r[16].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (depth < kMaxDepth) unit_0001(c, 82u, depth + 1u); else { c.pc = 0x00104560u; return; } if (c.pc != 0x00105B0Cu) [[unlikely]] return; }
L_00105B0C:
    set32(c.r[17], c.r[16].w[0] - 29488u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[4], 0u + 528u);
    set32(c.r[6], c.r[6].w[0] + 22288u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105B24u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 223u, depth + 1u); else { c.pc = 0x00105430u; return; } if (c.pc != 0x00105B24u) [[unlikely]] return; }
L_00105B24:
    st32((c.r[16].w[0] - 29488u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] - 29488u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_00105B3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00105B98; } }
L_00105B3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], c.r[4].w[0] - 29120u);
    set32(c.r[2], c.r[2].w[0] - 29440u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), 0u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[6], 0u + 528u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[5], 0u + 69u);
    set32(c.r[3], 0u + 72u);
    set32(c.r[4], 0u + 256u);
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105B90u); st16((c.r[2].w[0] + 2u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0001(c, 245u, depth + 1u); else { c.pc = 0x00105668u; return; } if (c.pc != 0x00105B90u) [[unlikely]] return; }
L_00105B90:
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00105B98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00105BB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 61744ull;
    c.budget -= 2;
L_00105BB8:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00105BB8u | kUnwind; return; } goto L_00105BB8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 61824ull;
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00105BF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[5], ld32((c.r[17].w[0] - 24480u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[5].sd[0] < 126ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 32u), c.r[18].d[0]);  if (t) { goto L_00105C38; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[17].w[0] - 24480u), 0u);
    set32(c.r[2], c.r[18].w[0] - 28800u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105C30u); st8((c.r[2].w[0] + 127u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0001(c, 243u, depth + 1u); else { c.pc = 0x00105640u; return; } if (c.pc != 0x00105C30u) [[unlikely]] return; }
L_00105C30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] - 24480u)));  if (t) { goto L_00105C3C; } }
L_00105C38:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 1;
L_00105C3C:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[18].w[0] - 28800u);  if (t) { goto L_00105C78; } }
    set32(c.r[4], c.r[18].w[0] - 28800u);
    st32((c.r[17].w[0] - 24480u), 0u);
    set32(c.r[2], c.r[5].w[0] + c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 12;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00105640u | kUnwind; return; } goto L_00105640; }
L_00105C78:
    set32(c.r[3], c.r[5].w[0] + 1u);
    st32((c.r[17].w[0] - 24480u), c.r[3].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00105CA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00105CC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105CB8u); set32(c.r[4], 0u + 13u);  if (depth < kMaxDepth) unit_0001(c, 273u, depth + 1u); else { c.pc = 0x00105BB0u; return; } if (c.pc != 0x00105CB8u) [[unlikely]] return; }
L_00105CB8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], 0u + 10u);
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00105BB0u | kUnwind; return; } goto L_00105BB0; }
L_00105CC8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00105BB0u | kUnwind; return; } goto L_00105BB0; }
L_00105CD8:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].d[0] << 1;
    c.r[6].d[0] = c.r[2].d[0] >> 53;
    c.r[6].d[0] = c.r[6].d[0] + static_cast<std::uint64_t>(-1075ll);
    c.r[2].d[0] = c.r[6].sd[0] < -53ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[6].sd[0] < 13ll ? 1ull : 0ull;  if (t) { goto L_00105CFC; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00105CFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].d[0] << 12;  if (t) { goto L_00105D0C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 9999u);  c.pc = t; return; }
L_00105D0C:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 37;
    c.r[5].d[0] = c.r[2].d[0] >> 12;
    c.budget -= 5;
    { const bool t = c.r[6].sd[0] >= 0; c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];  if (t) { goto L_00105D50; } }
    c.r[6].d[0] = 0ull - c.r[6].d[0];
    set32(c.r[2], 0u + 3u);
    c.r[3].d[0] = c.r[6].d[0] + static_cast<std::uint64_t>(-2ll);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[5].d[0] = c.r[5].d[0] >> (c.r[3].w[0] & 63u);
    c.r[4].d[0] = c.r[5].d[0] & 3ull;
    c.budget -= 9;
    if (c.r[4].d[0] != c.r[2].d[0]) { c.r[5].d[0] = c.r[5].d[0] >> 2;  goto L_00105D5C; }
    c.r[2].d[0] = c.r[5].d[0] >> 2;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00105D5C; } }
L_00105D50:
    c.r[2].d[0] = c.r[6].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[5].d[0] = c.r[5].d[0] << (c.r[2].w[0] & 63u);
    c.budget -= 3;
L_00105D5C:
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00105D70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105D98u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 81u, depth + 1u); else { c.pc = 0x001162C0u; return; } if (c.pc != 0x00105D98u) [[unlikely]] return; }
L_00105D98:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00105DBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105DA8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 60u, depth + 1u); else { c.pc = 0x00115D70u; return; } if (c.pc != 0x00105DA8u) [[unlikely]] return; }
L_00105DA8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] - 24476u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00105DBCu); set32(c.r[4], 0u + 45u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00105DBCu) [[unlikely]] return; }
L_00105DBC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 6888u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105DCCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 81u, depth + 1u); else { c.pc = 0x001162C0u; return; } if (c.pc != 0x00105DCCu) [[unlikely]] return; }
L_00105DCC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[18].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_00105E14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00105DF4; } }
    c.budget -= 1;
L_00105DE0:
    c.r[5].d[0] = 0ull | 32840ull;
    c.r[5].d[0] = c.r[5].d[0] << 47;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105DF0u); set32(c.r[17], c.r[17].w[0] - 1u);  if (depth < kMaxDepth) unit_0005(c, 65u, depth + 1u); else { c.pc = 0x00115DD8u; return; } if (c.pc != 0x00105DF0u) [[unlikely]] return; }
L_00105DF0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00105DF4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 6896u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105E04u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 81u, depth + 1u); else { c.pc = 0x001162C0u; return; } if (c.pc != 0x00105E04u) [[unlikely]] return; }
L_00105E04:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00105DE0u | kUnwind; return; } goto L_00105DE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00105E64; } }
L_00105E14:
    c.r[5].d[0] = 0ull | 65472ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105E24u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 81u, depth + 1u); else { c.pc = 0x001162C0u; return; } if (c.pc != 0x00105E24u) [[unlikely]] return; }
L_00105E24:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[18].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_00105E64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00105E4C; } }
    c.budget -= 1;
L_00105E38:
    c.r[5].d[0] = 0ull | 32840ull;
    c.r[5].d[0] = c.r[5].d[0] << 47;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105E48u); set32(c.r[17], c.r[17].w[0] + 1u);  if (depth < kMaxDepth) unit_0005(c, 75u, depth + 1u); else { c.pc = 0x00116060u; return; } if (c.pc != 0x00105E48u) [[unlikely]] return; }
L_00105E48:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00105E4C:
    c.r[5].d[0] = 0ull | 65472ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105E5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 81u, depth + 1u); else { c.pc = 0x001162C0u; return; } if (c.pc != 0x00105E5Cu) [[unlikely]] return; }
L_00105E5C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00105E38u | kUnwind; return; } goto L_00105E38; } }
L_00105E64:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 6904u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105E74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 65u, depth + 1u); else { c.pc = 0x00115DD8u; return; } if (c.pc != 0x00105E74u) [[unlikely]] return; }
L_00105E74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105E7Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 26u, depth + 1u); else { c.pc = 0x001154E0u; return; } if (c.pc != 0x00105E7Cu) [[unlikely]] return; }
L_00105E7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105E84u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 279u, depth + 1u); else { c.pc = 0x00105CD8u; return; } if (c.pc != 0x00105E84u) [[unlikely]] return; }
L_00105E84:
    set32(c.r[4], c.r[18].w[0] + 6864u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105E90u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 348u, depth + 1u); else { c.pc = 0x001064D0u; return; } if (c.pc != 0x00105E90u) [[unlikely]] return; }
L_00105E90:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] < 0; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00105EB8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[4], c.r[4].w[0] + 6872u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 64u);  goto L_001064D0; }
L_00105EB8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[4], c.r[4].w[0] + 6880u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 64u);  goto L_001064D0; }
L_00105ED8:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 80u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105F08u); st64((c.r[29].w[0] + 48u), c.r[17].d[0]);  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x00105F08u) [[unlikely]] return; }
L_00105F08:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0]));  if (t) { goto L_00106494; } }
L_00105F18:
    set32(c.r[2], c.r[3].w[0] << 24);
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    set32(c.r[2], 0u + 37u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00106460; } }
L_00105F30:
    set32(c.r[18], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00105F34:
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00105F38:
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[2], c.r[2].w[0] - 48u);
    set32(c.r[2], c.r[2].w[0] << 24);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(73ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_00106478; } }
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 6912u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00104000u < 16384u) { entry = entries_0001[(t - 0x00104000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00105F6C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    set32(c.r[5], c.r[3].w[0] - 48u);
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));  if (t) { goto L_00105FF4; } }
    set32(c.r[2], c.r[6].w[0] - 48u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 10u);  if (t) { goto L_00105FB4; } }
    set32(c.r[4], 0u + 31u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[18].w[0] + 2u);
    set32(c.r[3], c.r[3].w[0] - 48u);
    set32(c.r[5], c.r[3].w[0] + c.r[6].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[4].d[0];  if (t) { goto L_00105FB8; } }
L_00105FB4:
    set32(c.r[16], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00105FB8:
    set32(c.r[2], c.r[29].w[0] + 31u);
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] <= 0; set32(c.r[20], c.r[2].w[0] - c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00105F30u | kUnwind; return; } goto L_00105F30; } }
    set32(c.r[18], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00105FC8:
    set32(c.r[2], 0u + 31u);
    set32(c.r[4], 0u + 48u);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[29].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00105FC8u | kUnwind; return; } goto L_00105FC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[18].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00105F38u | kUnwind; return; } goto L_00105F38; } }
L_00105FF0:
    set32(c.r[7], 0u + 108u);
    c.budget -= 1;
L_00105FF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00105F34u | kUnwind; return; } goto L_00105F34; } }
L_00105FFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 104u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00105FF4u | kUnwind; return; } goto L_00105FF4; } }
L_00106004:
    set32(c.r[2], 0u + 108u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 104u);  if (t) { goto L_0010601C; } }
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = ld64((c.r[19].w[0] - 8u));  if (t) { goto L_00106030; } }
L_0010601C:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[2].d[0]; set32(c.r[19], c.r[19].w[0] + 8u);  if (t) { goto L_0010602C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = ld16((c.r[19].w[0] - 8u));  if (t) { goto L_00106030; } }
L_0010602C:
    c.r[17].d[0] = ld32((c.r[19].w[0] - 8u));
    c.budget -= 1;
L_00106030:
    set32(c.r[16], c.r[29].w[0] + 31u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; st8((c.r[29].w[0] + 31u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00106050; } }
    set32(c.r[2], 0u + 48u);
    c.budget -= 1;
L_00106040:
    set32(c.r[16], c.r[29].w[0] + 30u);
    st8((c.r[29].w[0] + 30u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_00106078; } }
L_00106050:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_00106058:
    c.r[2].d[0] = c.r[17].d[0] & 7ull;
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(48ll);
    c.r[17].d[0] = c.r[17].d[0] >> 3;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00106058u | kUnwind; return; } goto L_00106058; } }
L_00106078:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[2].d[0] = c.r[20].d[0] < c.r[16].d[0] ? 1ull : 0ull;  if (t) { goto L_00106084; } }
    if (c.r[2].d[0] != 0) c.r[16].d[0] = c.r[20].d[0];
    c.budget -= 1;
L_00106084:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = ld8((c.r[16].w[0]));  if (t) { goto L_00106484; } }
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.budget -= 2;
L_00106098:
    set32(c.r[4], c.r[4].w[0] << 24);
    set32(c.r[2], ld32((c.r[21].w[0] - 24476u)));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 24));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001060ACu); set32(c.r[16], c.r[16].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001060ACu) [[unlikely]] return; }
L_001060AC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = ld8((c.r[16].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00106098u | kUnwind; return; } goto L_00106098; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00106488; } }
L_001060C0:
    set32(c.r[2], 0u + 108u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 104u);  if (t) { goto L_001060D8; } }
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = ld64((c.r[19].w[0] - 8u));  if (t) { goto L_001060EC; } }
L_001060D8:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[2].d[0]; set32(c.r[19], c.r[19].w[0] + 8u);  if (t) { goto L_001060E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = ld16((c.r[19].w[0] - 8u));  if (t) { goto L_001060EC; } }
L_001060E8:
    c.r[17].d[0] = ld32((c.r[19].w[0] - 8u));
    c.budget -= 1;
L_001060EC:
    set32(c.r[16], c.r[29].w[0] + 31u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; st8((c.r[29].w[0] + 31u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0010610C; } }
    set32(c.r[2], 0u + 48u);
    set32(c.r[16], c.r[29].w[0] + 30u);
    st8((c.r[29].w[0] + 30u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_00106138; } }
L_0010610C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00106110:
    c.r[3].d[0] = c.r[17].d[0] & 15ull;
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(48ll);  if (t) { goto L_00106124; } }
    c.r[2].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(87ll);
    c.budget -= 1;
L_00106124:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[17].d[0] = c.r[17].d[0] >> 4;
    c.budget -= 5;
    { const bool t = c.r[17].d[0] != 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00106110u | kUnwind; return; } goto L_00106110; } }
L_00106138:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[2].d[0] = c.r[20].d[0] < c.r[16].d[0] ? 1ull : 0ull;  if (t) { goto L_00106144; } }
    if (c.r[2].d[0] != 0) c.r[16].d[0] = c.r[20].d[0];
    c.budget -= 1;
L_00106144:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = ld8((c.r[16].w[0]));  if (t) { goto L_00106484; } }
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.budget -= 2;
L_00106158:
    set32(c.r[4], c.r[4].w[0] << 24);
    set32(c.r[2], ld32((c.r[21].w[0] - 24476u)));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 24));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010616Cu); set32(c.r[16], c.r[16].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010616Cu) [[unlikely]] return; }
L_0010616C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = ld8((c.r[16].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00106158u | kUnwind; return; } goto L_00106158; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00106488; } }
L_00106180:
    set32(c.r[2], 0u + 108u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 104u);  if (t) { goto L_00106198; } }
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = ld64((c.r[19].w[0] - 8u));  if (t) { goto L_001061AC; } }
L_00106198:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[2].d[0]; set32(c.r[19], c.r[19].w[0] + 8u);  if (t) { goto L_001061A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] - 8u)));  if (t) { goto L_001061AC; } }
L_001061A8:
    set32(c.r[17], ld32((c.r[19].w[0] - 8u)));
    c.budget -= 1;
L_001061AC:
    set32(c.r[16], c.r[29].w[0] + 31u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; st8((c.r[29].w[0] + 31u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001061C8; } }
    set32(c.r[2], 0u + 48u);
    set32(c.r[16], c.r[29].w[0] + 30u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 30u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00106228; } }
L_001061C8:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; c.r[21].sd[0] = static_cast<std::int32_t>(0x00430000u);  if (t) { goto L_001061E0; } }
    c.r[17].d[0] = 0ull - c.r[17].d[0];
    set32(c.r[2], ld32((c.r[21].w[0] - 24476u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001061E0u); set32(c.r[4], 0u + 45u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001061E0u) [[unlikely]] return; }
L_001061E0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_0010622C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_001061F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001061F8u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0005(c, 4u, depth + 1u); else { c.pc = 0x001141D8u; return; } if (c.pc != 0x001061F8u) [[unlikely]] return; }
L_001061F8:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(48ll);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[5], 0u + 10u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106214u); st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0004(c, 246u, depth + 1u); else { c.pc = 0x00113B40u; return; } if (c.pc != 0x00106214u) [[unlikely]] return; }
L_00106214:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001061F0u | kUnwind; return; } goto L_001061F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010622C; } }
L_00106228:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0010622C:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[2].d[0] = c.r[20].d[0] < c.r[16].d[0] ? 1ull : 0ull;  if (t) { goto L_00106238; } }
    if (c.r[2].d[0] != 0) c.r[16].d[0] = c.r[20].d[0];
    c.budget -= 1;
L_00106238:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = ld8((c.r[16].w[0]));  if (t) { goto L_00106484; } }
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.budget -= 1;
L_00106248:
    set32(c.r[4], c.r[4].w[0] << 24);
    set32(c.r[2], ld32((c.r[21].w[0] - 24476u)));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 24));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010625Cu); set32(c.r[16], c.r[16].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010625Cu) [[unlikely]] return; }
L_0010625C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = ld8((c.r[16].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00106248u | kUnwind; return; } goto L_00106248; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00106488; } }
L_00106270:
    set32(c.r[2], 0u + 108u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 104u);  if (t) { goto L_00106288; } }
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = ld64((c.r[19].w[0] - 8u));  if (t) { goto L_0010629C; } }
L_00106288:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[2].d[0]; set32(c.r[19], c.r[19].w[0] + 8u);  if (t) { goto L_00106298; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = ld16((c.r[19].w[0] - 8u));  if (t) { goto L_0010629C; } }
L_00106298:
    c.r[17].d[0] = ld32((c.r[19].w[0] - 8u));
    c.budget -= 1;
L_0010629C:
    set32(c.r[16], c.r[29].w[0] + 31u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; st8((c.r[29].w[0] + 31u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001062BC; } }
    set32(c.r[2], 0u + 48u);
    set32(c.r[16], c.r[29].w[0] + 30u);
    st8((c.r[29].w[0] + 30u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_001062F8; } }
L_001062BC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
L_001062C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001062D0u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0005(c, 9u, depth + 1u); else { c.pc = 0x00114DE8u; return; } if (c.pc != 0x001062D0u) [[unlikely]] return; }
L_001062D0:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(48ll);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[5], 0u + 10u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001062ECu); st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0005(c, 6u, depth + 1u); else { c.pc = 0x00114868u; return; } if (c.pc != 0x001062ECu) [[unlikely]] return; }
L_001062EC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001062C8u | kUnwind; return; } goto L_001062C8; } }
L_001062F8:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[2].d[0] = c.r[20].d[0] < c.r[16].d[0] ? 1ull : 0ull;  if (t) { goto L_00106304; } }
    if (c.r[2].d[0] != 0) c.r[16].d[0] = c.r[20].d[0];
    c.budget -= 1;
L_00106304:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = ld8((c.r[16].w[0]));  if (t) { goto L_00106484; } }
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.budget -= 2;
L_00106318:
    set32(c.r[4], c.r[4].w[0] << 24);
    set32(c.r[2], ld32((c.r[21].w[0] - 24476u)));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 24));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010632Cu); set32(c.r[16], c.r[16].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010632Cu) [[unlikely]] return; }
L_0010632C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = ld8((c.r[16].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00106318u | kUnwind; return; } goto L_00106318; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00106488; } }
L_00106340:
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010634Cu); c.r[4].d[0] = ld64((c.r[19].w[0] - 8u));  if (depth < kMaxDepth) unit_0005(c, 92u, depth + 1u); else { c.pc = 0x00116498u; return; } if (c.pc != 0x0010634Cu) [[unlikely]] return; }
L_0010634C:
    c.f[12] = c.f[0];
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[21].sd[0] = static_cast<std::int32_t>(0x00430000u);  if (t) { goto L_0010637C; } }
    set32(c.r[4], 0u + 48u);
    set32(c.r[2], ld32((c.r[21].w[0] - 24476u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00106374u); set32(c.r[18], c.r[18].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00106374u) [[unlikely]] return; }
L_00106374:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00106488; } }
L_0010637C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106384u); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_0005(c, 46u, depth + 1u); else { c.pc = 0x001158E0u; return; } if (c.pc != 0x00106384u) [[unlikely]] return; }
L_00106384:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010638Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 280u, depth + 1u); else { c.pc = 0x00105D70u; return; } if (c.pc != 0x0010638Cu) [[unlikely]] return; }
L_0010638C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00106488; } }
L_00106394:
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[3], ld32((c.r[19].w[0] - 8u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_00106400; } }
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], 0u + 40u);
    set32(c.r[2], ld32((c.r[21].w[0] - 24476u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001063BCu); set32(c.r[18], c.r[18].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001063BCu) [[unlikely]] return; }
L_001063BC:
    set32(c.r[3], ld32((c.r[21].w[0] - 24476u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001063C8u); set32(c.r[4], 0u + 110u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001063C8u) [[unlikely]] return; }
L_001063C8:
    set32(c.r[2], ld32((c.r[21].w[0] - 24476u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001063D4u); set32(c.r[4], 0u + 117u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001063D4u) [[unlikely]] return; }
L_001063D4:
    set32(c.r[3], ld32((c.r[21].w[0] - 24476u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001063E0u); set32(c.r[4], 0u + 108u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001063E0u) [[unlikely]] return; }
L_001063E0:
    set32(c.r[2], ld32((c.r[21].w[0] - 24476u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001063ECu); set32(c.r[4], 0u + 108u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001063ECu) [[unlikely]] return; }
L_001063EC:
    set32(c.r[3], ld32((c.r[21].w[0] - 24476u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001063F8u); set32(c.r[4], 0u + 41u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001063F8u) [[unlikely]] return; }
L_001063F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00106488; } }
L_00106400:
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.budget -= 4;
L_00106410:
    set32(c.r[4], c.r[4].w[0] << 24);
    set32(c.r[3], ld32((c.r[21].w[0] - 24476u)));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 24));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00106424u); set32(c.r[16], c.r[16].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00106424u) [[unlikely]] return; }
L_00106424:
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00106410u | kUnwind; return; } goto L_00106410; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00106488; } }
L_00106438:
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] - 8u)));
    set32(c.r[2], ld32((c.r[21].w[0] - 24476u)));
    c.r[4].d[0] = c.r[17].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00106458u); set32(c.r[18], c.r[18].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00106458u) [[unlikely]] return; }
L_00106458:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00106488; } }
L_00106460:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 24476u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00106470u); set32(c.r[18], c.r[16].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00106470u) [[unlikely]] return; }
L_00106470:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00106488; } }
L_00106478:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[16].w[0] + 1u);  if (t) { goto L_00106484; } }
L_00106480:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00106484:
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00106488:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = ld8((c.r[16].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00105F18u | kUnwind; return; } goto L_00105F18; } }
L_00106494:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_001064A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001064A4u);  if (depth < kMaxDepth) unit_0003(c, 127u, depth + 1u); else { c.pc = 0x0010D378u; return; } if (c.pc != 0x001064A4u) [[unlikely]] return; }
L_001064A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_001064A8:
    c.r[22].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001064D0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 88u), c.r[5].d[0]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 88u);
    st64((c.r[29].w[0] + 96u), c.r[6].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 120u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[10].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001064FCu); st64((c.r[29].w[0] + 136u), c.r[11].d[0]);  if (depth < kMaxDepth) unit_0001(c, 296u, depth + 1u); else { c.pc = 0x00105ED8u; return; } if (c.pc != 0x001064FCu) [[unlikely]] return; }
L_001064FC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00106508:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] + 23536u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[17], ld32((c.r[16].w[0] - 24476u)));
    st64((c.r[29].w[0] + 120u), c.r[5].d[0]);
    st32((c.r[16].w[0] - 24476u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 120u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[6].d[0]);
    st64((c.r[29].w[0] + 136u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 152u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[10].d[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106550u); st64((c.r[29].w[0] + 168u), c.r[11].d[0]);  if (depth < kMaxDepth) unit_0001(c, 296u, depth + 1u); else { c.pc = 0x00105ED8u; return; } if (c.pc != 0x00106550u) [[unlikely]] return; }
L_00106550:
    st32((c.r[16].w[0] - 24476u), c.r[17].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00106568:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_00106588:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 8u), c.r[2].w[0]);  c.pc = t; return; }
L_00106598:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 28032u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0])));  c.pc = t; return; }
L_001065E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106600u); st64((c.r[29].w[0]), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x00106600u) [[unlikely]] return; }
L_00106600:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], ld32((c.r[10].w[0] - 24472u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_00106630; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 96u);  [[clang::musttail]] return unit_0003(c, 127u, depth); }
L_00106630:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[5], c.r[5].w[0] - 28544u);
    set32(c.r[6], c.r[19].w[0] - 28672u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    set32(c.r[3], 0u + 1u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[18].w[0] - 28456u);
    st32((c.r[10].w[0] - 24472u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 28032u);
    set32(c.r[8], c.r[9].w[0] - 28416u);
    st32((c.r[18].w[0] - 28456u), c.r[6].w[0]);
    set32(c.r[7], 0u + 32u);
    st32((c.r[2].w[0] + 28u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[2].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 16u), c.r[7].w[0]);
    set32(c.r[4], c.r[3].w[0] + 384u);
    st32((c.r[2].w[0] + 8u), 0u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[2].w[0] + 12u), c.r[8].w[0]);
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[2].w[0] + 24u), 0u);
    c.budget -= 26;
L_00106698:
    st32((c.r[3].w[0]), 0u);
    st32((c.r[3].w[0] + 4u), 0u);
    set32(c.r[3], c.r[3].w[0] + 12u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00106698u | kUnwind; return; } goto L_00106698; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[16], 0u + 31u);
    set32(c.r[2], c.r[2].w[0] - 28032u);
    set32(c.r[2], c.r[2].w[0] + 124u);
    c.budget -= 5;
L_001066C8:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 7;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001066C8u | kUnwind; return; } goto L_001066C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[2], c.r[2].w[0] + 25992u);
    set32(c.r[4], c.r[9].w[0] - 28416u);
    set32(c.r[3], c.r[3].w[0] + 25960u);
    set32(c.r[17], c.r[18].w[0] - 28456u);
    st32((c.r[9].w[0] - 28416u), c.r[2].w[0]);
    set32(c.r[16], 0u + 32u);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[17].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106714u); st32((c.r[4].w[0] + 4u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0003(c, 127u, depth + 1u); else { c.pc = 0x0010D378u; return; } if (c.pc != 0x00106714u) [[unlikely]] return; }
L_00106714:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010671Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 82u, depth + 1u); else { c.pc = 0x00104560u; return; } if (c.pc != 0x0010671Cu) [[unlikely]] return; }
L_0010671C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 57360ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_00106740; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    st32((c.r[1].w[0] - 8176u), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 3;
L_00106740:
    c.r[2].d[0] = c.r[2].d[0] | 49152ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (t) { goto L_00106760; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010675Cu);  if (depth < kMaxDepth) unit_0001(c, 100u, depth + 1u); else { c.pc = 0x001046C0u; return; } if (c.pc != 0x0010675Cu) [[unlikely]] return; }
L_0010675C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.budget -= 1;
L_00106760:
    set32(c.r[4], 0u + 5u);
    set32(c.r[5], c.r[5].w[0] + 27464u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106770u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 379u, depth + 1u); else { c.pc = 0x00103FF0u; return; } if (c.pc != 0x00106770u) [[unlikely]] return; }
L_00106770:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106780u); st32((c.r[3].w[0] - 28460u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0001(c, 176u, depth + 1u); else { c.pc = 0x00104EF8u; return; } if (c.pc != 0x00106780u) [[unlikely]] return; }
L_00106780:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010678Cu);  if (depth < kMaxDepth) unit_0001(c, 106u, depth + 1u); else { c.pc = 0x001046F0u; return; } if (c.pc != 0x0010678Cu) [[unlikely]] return; }
L_0010678C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001067D4; } }
    set32(c.r[5], c.r[20].w[0] - 28480u);
    set32(c.r[2], c.r[19].w[0] - 28672u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[6], 0u + 20u);
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[9].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[5].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 16;
    { set32(c.r[29], c.r[29].w[0] + 96u);  goto L_00106AC8; }
L_001067D4:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 1;
L_001067D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001067E0u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0001(c, 106u, depth + 1u); else { c.pc = 0x001046F0u; return; } if (c.pc != 0x001067E0u) [[unlikely]] return; }
L_001067E0:
    c.r[2].d[0] = c.r[2].d[0] & c.r[16].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001067D8u | kUnwind; return; } goto L_001067D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001067F4u); set32(c.r[16], c.r[18].w[0] - 28456u);  if (depth < kMaxDepth) unit_0001(c, 106u, depth + 1u); else { c.pc = 0x001046F0u; return; } if (c.pc != 0x001067F4u) [[unlikely]] return; }
L_001067F4:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106804u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 104u, depth + 1u); else { c.pc = 0x001046E0u; return; } if (c.pc != 0x00106804u) [[unlikely]] return; }
L_00106804:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106814u); c.r[4].d[0] = c.r[4].d[0] | 1ull;  if (depth < kMaxDepth) unit_0001(c, 104u, depth + 1u); else { c.pc = 0x001046E0u; return; } if (c.pc != 0x00106814u) [[unlikely]] return; }
L_00106814:
    set32(c.r[3], c.r[20].w[0] - 28480u);
    set32(c.r[2], c.r[19].w[0] - 28672u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[4].d[0] = c.r[4].d[0] | 2ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[6], 0u + 20u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    c.r[9].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] + 12u), 0u);
    c.budget -= 19;
    { set32(c.r[29], c.r[29].w[0] + 96u);  goto L_00106AC8; }
L_00106860:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106870u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_0001(c, 172u, depth + 1u); else { c.pc = 0x00104E90u; return; } if (c.pc != 0x00106870u) [[unlikely]] return; }
L_00106870:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106880u); set32(c.r[5], ld32((c.r[3].w[0] - 28460u)));  if (depth < kMaxDepth) unit_0001(c, 1u, depth + 1u); else { c.pc = 0x00104010u; return; } if (c.pc != 0x00106880u) [[unlikely]] return; }
L_00106880:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0] - 24472u), 0u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001068C8:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0010690C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[5], 0u + 12u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[3].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[4], c.r[4].w[0] - 28456u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[2].w[0]), c.r[7].w[0]);
    c.r[5].d[0] = c.r[28].d[0] + 0ull;
    c.budget -= 14;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[4].w[0] + 12u)));  if (t) { goto L_00106934; } }
L_0010690C:
    set32(c.r[3], 0u + 12u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] - 28456u);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[2].w[0]), c.r[7].w[0]);
    c.r[5].d[0] = c.r[28].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 10;
L_00106934:
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 8u), c.r[5].w[0]);  c.pc = t; return; }
L_00106940:
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] >= 0; set32(c.r[2], 0u + 12u);  if (t) { goto L_00106974; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[5], 0u + 12u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    set32(c.r[4], ld32((c.r[3].w[0] - 28444u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0]), 0u);  c.pc = t; return; }
L_00106974:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], ld32((c.r[4].w[0] - 28436u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0]), 0u);  c.pc = t; return; }
L_00106990:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[20].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    set32(c.r[2], c.r[17].w[0] - 16u);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[8].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(97ll) ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_001069D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00106AA4; } }
L_001069D8:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00106A20; } }
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[3], c.r[5].w[0] << 8);
    st32((c.r[16].w[0] + 4u), c.r[9].w[0]);
    set32(c.r[18], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[29].w[0]), c.r[4].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = c.r[19].d[0] & 4ull;
    st32((c.r[29].w[0] + 4u), c.r[9].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[5].w[0]);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 12u), 0u);  if (t) { goto L_00106A2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106A18u);  if (depth < kMaxDepth) unit_0001(c, 389u, depth + 1u); else { c.pc = 0x00106C90u; return; } if (c.pc != 0x00106A18u) [[unlikely]] return; }
L_00106A18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[18].w[0] << 4);  if (t) { goto L_00106A30; } }
L_00106A20:
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00106A2C:
    set32(c.r[5], c.r[18].w[0] << 4);
    c.budget -= 1;
L_00106A30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 28448u)));
    set32(c.r[3], c.r[29].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[16].w[0]);
    set32(c.r[2], c.r[29].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[29].w[0] + 8u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[17].w[0]);
    set32(c.r[4], c.r[29].w[0] + 12u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[20].w[0]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[2], 0u + 68u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106A80u); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_0001(c, 389u, depth + 1u); else { c.pc = 0x00106C90u; return; } if (c.pc != 0x00106A80u) [[unlikely]] return; }
L_00106A80:
    c.r[2].d[0] = c.r[19].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00106A9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106A94u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 98u, depth + 1u); else { c.pc = 0x001046B0u; return; } if (c.pc != 0x00106A94u) [[unlikely]] return; }
L_00106A94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_00106AA8; } }
L_00106A9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106AA4u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 96u, depth + 1u); else { c.pc = 0x001046A0u; return; } if (c.pc != 0x00106AA4u) [[unlikely]] return; }
L_00106AA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_00106AA8:
    c.r[20].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00106AC8:
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.r[3].d[0] = c.r[7].d[0] + 0ull;
    c.r[11].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[10].d[0] = c.r[9].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    c.r[9].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106AF8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 375u, depth + 1u); else { c.pc = 0x00106990u; return; } if (c.pc != 0x00106AF8u) [[unlikely]] return; }
L_00106AF8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00106B08:
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.r[3].d[0] = c.r[7].d[0] + 0ull;
    c.r[11].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[10].d[0] = c.r[9].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    c.r[9].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106B38u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 375u, depth + 1u); else { c.pc = 0x00106990u; return; } if (c.pc != 0x00106B38u) [[unlikely]] return; }
L_00106B38:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00106B48:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st64((c.r[29].w[0] + 128u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[17], c.r[3].w[0] - 28456u);
    st64((c.r[29].w[0] + 112u), c.r[16].d[0]);
    set32(c.r[7], ld32((c.r[3].w[0] - 28456u)));
    c.r[2].d[0] = ld8((c.r[7].w[0]));
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 11;
    { const bool t = c.r[5].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00106C7C; } }
    set32(c.r[2], c.r[5].w[0] + 15u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[5].w[0] + 30u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[4].d[0] = c.r[2].d[0];
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
    { const bool t = c.r[5].sd[0] <= 0; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00106BBC; } }
    c.r[3].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 1;
L_00106BA0:
    ld128((c.r[6].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[6], c.r[6].w[0] + 16u);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00106BA0u | kUnwind; return; } goto L_00106BA0; } }
L_00106BBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106BC4u);  if (depth < kMaxDepth) unit_0001(c, 102u, depth + 1u); else { c.pc = 0x001046D0u; return; } if (c.pc != 0x00106BC4u) [[unlikely]] return; }
L_00106BC4:
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00106C1C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.r[5].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u + 12u);  if (t) { goto L_00106C70; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00106C70; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.r[16].d[0] = c.r[28].d[0] + 0ull;
    c.r[28].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  if (t) { goto L_00106C58; } }
L_00106C1C:
    set32(c.r[5], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 12u);  if (t) { goto L_00106C70; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00106C70; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.r[16].d[0] = c.r[28].d[0] + 0ull;
    c.r[28].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 4;
L_00106C58:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00106C68u); set32(c.r[5], ld32((c.r[2].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00106C68u) [[unlikely]] return; }
L_00106C68:
    c.r[2].d[0] = c.r[28].d[0] + 0ull;
    c.r[28].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_00106C70:
    set_interrupts(c, true);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_00106C7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 3;
L_00106C88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00106C90:
    c.r[25].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[25].d[0] = c.r[25].d[0] | 65472ull;
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] <= 0; set32(c.r[10], c.r[4].w[0] + c.r[5].w[0]);  if (t) { goto L_00106D34; } }
    c.r[8].d[0] = c.r[4].d[0] & c.r[25].d[0];
    set32(c.r[10], c.r[10].w[0] - 1u);
    c.r[9].d[0] = c.r[10].d[0] & c.r[25].d[0];
    set32(c.r[10], c.r[9].w[0] - c.r[8].w[0]);
    set32(c.r[11], c.r[10].w[0] >> 6);
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.r[9].d[0] = c.r[11].d[0] & 7ull;
    c.budget -= 9;
    { const bool t = c.r[9].d[0] == 0ull; set32(c.r[10], c.r[11].w[0] >> 3);  if (t) { goto L_00106CE0; } }
L_00106CC4:
    set32(c.r[9], c.r[9].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[9].sd[0] > 0; set32(c.r[8], c.r[8].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00106CC4u | kUnwind; return; } goto L_00106CC4; } }
L_00106CE0:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == 0ull; set32(c.r[10], c.r[10].w[0] - 1u);  if (t) { goto L_00106D34; } }
    goto L_00106CE8;
L_00106CE4:
    set32(c.r[10], c.r[10].w[0] - 1u);
    c.budget -= 1;
L_00106CE8:
    c.budget -= 19;
    { const bool t = c.r[10].sd[0] > 0; set32(c.r[8], c.r[8].w[0] + 512u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00106CE4u | kUnwind; return; } goto L_00106CE4; } }
L_00106D34:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00106D40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106D58u); st64((c.r[29].w[0]), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x00106D58u) [[unlikely]] return; }
L_00106D58:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 24464u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_00106D80; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 64u);  [[clang::musttail]] return unit_0003(c, 127u, depth); }
L_00106D80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106D88u); st32((c.r[3].w[0] - 24464u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0003(c, 127u, depth + 1u); else { c.pc = 0x0010D378u; return; } if (c.pc != 0x00106D88u) [[unlikely]] return; }
L_00106D88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106D90u);  if (depth < kMaxDepth) unit_0001(c, 355u, depth + 1u); else { c.pc = 0x001065E0u; return; } if (c.pc != 0x00106D90u) [[unlikely]] return; }
L_00106D90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106D98u);  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x00106D98u) [[unlikely]] return; }
L_00106D98:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[18], c.r[3].w[0] - 27904u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[16], c.r[8].w[0] - 21760u);
    set32(c.r[3], 0u + 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[6], c.r[6].w[0] - 25856u);
    set32(c.r[7], c.r[7].w[0] - 23808u);
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[2].d[0];
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[18].d[0] | c.r[2].d[0];
    st32((c.r[8].w[0] - 21760u), c.r[17].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);
    st32((c.r[16].w[0] + 20u), c.r[6].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 28736u);
    st32((c.r[16].w[0] + 28u), c.r[7].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 8ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106E0Cu); st32((c.r[16].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0001(c, 373u, depth + 1u); else { c.pc = 0x001068C8u; return; } if (c.pc != 0x00106E0Cu) [[unlikely]] return; }
L_00106E0C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], c.r[5].w[0] + 29704u);
    c.r[4].d[0] = c.r[4].d[0] | 9ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106E24u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 373u, depth + 1u); else { c.pc = 0x001068C8u; return; } if (c.pc != 0x00106E24u) [[unlikely]] return; }
L_00106E24:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], c.r[5].w[0] + 30232u);
    c.r[4].d[0] = c.r[4].d[0] | 10ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106E3Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 373u, depth + 1u); else { c.pc = 0x001068C8u; return; } if (c.pc != 0x00106E3Cu) [[unlikely]] return; }
L_00106E3C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], c.r[5].w[0] + 29008u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106E54u); c.r[4].d[0] = c.r[4].d[0] | 12ull;  if (depth < kMaxDepth) unit_0001(c, 373u, depth + 1u); else { c.pc = 0x001068C8u; return; } if (c.pc != 0x00106E54u) [[unlikely]] return; }
L_00106E54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106E5Cu);  if (depth < kMaxDepth) unit_0003(c, 127u, depth + 1u); else { c.pc = 0x0010D378u; return; } if (c.pc != 0x00106E5Cu) [[unlikely]] return; }
L_00106E5C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106E68u); c.r[4].d[0] = c.r[4].d[0] | 2ull;  if (depth < kMaxDepth) unit_0001(c, 106u, depth + 1u); else { c.pc = 0x001046F0u; return; } if (c.pc != 0x00106E68u) [[unlikely]] return; }
L_00106E68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00106EC8; } }
    set32(c.r[5], c.r[18].w[0] + 64u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[5].w[0] + 12u), c.r[17].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 2ull;
    set32(c.r[6], 0u + 16u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106E94u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 380u, depth + 1u); else { c.pc = 0x00106AC8u; return; } if (c.pc != 0x00106E94u) [[unlikely]] return; }
L_00106E94:
    c.budget -= 1;
L_00106E98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106EA0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 354u, depth + 1u); else { c.pc = 0x00106598u; return; } if (c.pc != 0x00106EA0u) [[unlikely]] return; }
L_00106EA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00106E98u | kUnwind; return; } goto L_00106E98; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[5], 0u + 1u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[4].d[0] = c.r[4].d[0] | 2ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001046E0u | kUnwind; return; } goto L_001046E0; }
L_00106EC8:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00106EE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106EF0u);  if (depth < kMaxDepth) unit_0001(c, 370u, depth + 1u); else { c.pc = 0x00106860u; return; } if (c.pc != 0x00106EF0u) [[unlikely]] return; }
L_00106EF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0] - 24464u), 0u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00106F08:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106F20u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x00106F20u) [[unlikely]] return; }
L_00106F20:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] <= 0; set32(c.r[16], ld32((c.r[17].w[0] + 4u)));  if (t) { goto L_00106F90; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 2;
L_00106F38:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] + 1u);  goto L_00106F84; }
    set32(c.r[2], c.r[3].w[0] << 16);
    c.r[2].d[0] = c.r[2].d[0] | 5ull;
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_00106F70; } }
    set32(c.r[2], c.r[2].w[0] + 2u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00106F70:
    st32((c.r[16].w[0] + 20u), c.r[16].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106F7Cu); st32((c.r[16].w[0] + 24u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0003(c, 127u, depth + 1u); else { c.pc = 0x0010D378u; return; } if (c.pc != 0x00106F7Cu) [[unlikely]] return; }
L_00106F7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00106F9C; } }
L_00106F84:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00106F38u | kUnwind; return; } goto L_00106F38; } }
L_00106F90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106F98u);  if (depth < kMaxDepth) unit_0003(c, 127u, depth + 1u); else { c.pc = 0x0010D378u; return; } if (c.pc != 0x00106F98u) [[unlikely]] return; }
L_00106F98:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00106F9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00106FB0:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65534ull;
    st32((c.r[4].w[0] + 24u), 0u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), c.r[3].w[0]);  c.pc = t; return; }
L_00106FD0:
    set32(c.r[5], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    mmi::div(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x00106FE0u);  goto L_00106FE4; }
L_00106FE4:
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 6);
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);  c.pc = t; return; }
L_00107000:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0010701C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0010702C; }
L_0010701C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107024u);  if (depth < kMaxDepth) unit_0001(c, 414u, depth + 1u); else { c.pc = 0x00106FD0u; return; } if (c.pc != 0x00107024u) [[unlikely]] return; }
L_00107024:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00107038; } }
L_0010702C:
    set32(c.r[2], c.r[5].w[0] << 6);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_00107038:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00107040:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 10ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;  if (t) { goto L_0010708C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], ld32((c.r[18].w[0] + 28u)));  if (t) { goto L_001070D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[2].d[0] | 9ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001070C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (t) { goto L_001070D8; } }
L_0010708C:
    set32(c.r[17], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  goto L_001070D8; }
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.r[16].d[0] = c.r[28].d[0] + 0ull;
    c.r[28].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001070B4u); set32(c.r[4], ld32((c.r[17].w[0] + 32u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001070B4u) [[unlikely]] return; }
L_001070B4:
    c.r[3].d[0] = c.r[28].d[0] + 0ull;
    c.r[28].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[18].w[0] + 28u)));  if (t) { goto L_001070D4; } }
L_001070C4:
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    st32((c.r[17].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 40u)));
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 4;
L_001070D4:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_001070D8:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_001070E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001070E8u);  if (depth < kMaxDepth) unit_0001(c, 66u, depth + 1u); else { c.pc = 0x00104310u; return; } if (c.pc != 0x001070E8u) [[unlikely]] return; }
L_001070E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001070F0u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0001(c, 413u, depth + 1u); else { c.pc = 0x00106FB0u; return; } if (c.pc != 0x001070F0u) [[unlikely]] return; }
L_001070F0:
    st32((c.r[17].w[0]), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00107110:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[4].d[0] | 8ull;
    set32(c.r[6], 0u + 64u);
    set32(c.r[7], ld32((c.r[5].w[0] + 36u)));
    set32(c.r[8], ld32((c.r[5].w[0] + 40u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107138u); set32(c.r[9], ld32((c.r[5].w[0] + 44u)));  if (depth < kMaxDepth) unit_0001(c, 382u, depth + 1u); else { c.pc = 0x00106B08u; return; } if (c.pc != 0x00107138u) [[unlikely]] return; }
L_00107138:
    set32(c.r[3], 0u + 2048u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    if (c.r[2].d[0] != 0) c.r[3].d[0] = 0ull;
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00107150:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.r[2].d[0] = c.r[5].d[0] & 4ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00107188; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107180u); set32(c.r[5], c.r[5].w[0] >> 16);  if (depth < kMaxDepth) unit_0001(c, 415u, depth + 1u); else { c.pc = 0x00107000u; return; } if (c.pc != 0x00107180u) [[unlikely]] return; }
L_00107180:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00107194; } }
L_00107188:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107190u);  if (depth < kMaxDepth) unit_0001(c, 414u, depth + 1u); else { c.pc = 0x00106FD0u; return; } if (c.pc != 0x00107190u) [[unlikely]] return; }
L_00107190:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00107194:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    c.r[2].d[0] = c.r[2].d[0] | 12ull;
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[16].w[0] + 28u), c.r[5].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 8ull;
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 64u);
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[9], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001071E8u); set32(c.r[8], ld32((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_0001(c, 382u, depth + 1u); else { c.pc = 0x00106B08u; return; } if (c.pc != 0x001071E8u) [[unlikely]] return; }
L_001071E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00107210; } }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[5], c.r[5].w[0] + 28944u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[4], 0u + 2048u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_0003(c, 355u, depth); }
L_00107210:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00107220:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[20].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st64((c.r[29].w[0] + 80u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107260u); set32(c.r[4], c.r[4].w[0] - 21760u);  if (depth < kMaxDepth) unit_0001(c, 408u, depth + 1u); else { c.pc = 0x00106F08u; return; } if (c.pc != 0x00107260u) [[unlikely]] return; }
L_00107260:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00107354; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.r[3].d[0] = c.r[18].d[0] & 1ull;
    st32((c.r[17].w[0]), c.r[16].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[20].w[0]);
    st32((c.r[16].w[0] + 40u), c.r[21].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[16].w[0]);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[16].w[0] + 28u), c.r[17].w[0]);  if (t) { goto L_00107318; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 8u), 0u);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001072A8u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 60u, depth + 1u); else { c.pc = 0x001042E0u; return; } if (c.pc != 0x001072A8u) [[unlikely]] return; }
L_001072A8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001072C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001072B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 413u, depth + 1u); else { c.pc = 0x00106FB0u; return; } if (c.pc != 0x001072B8u) [[unlikely]] return; }
L_001072B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_00107354; } }
L_001072C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 12ull;
    set32(c.r[6], 0u + 64u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001072E0u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 380u, depth + 1u); else { c.pc = 0x00106AC8u; return; } if (c.pc != 0x001072E0u) [[unlikely]] return; }
L_001072E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00107300; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001072F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 413u, depth + 1u); else { c.pc = 0x00106FB0u; return; } if (c.pc != 0x001072F0u) [[unlikely]] return; }
L_001072F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001072F8u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_0001(c, 62u, depth + 1u); else { c.pc = 0x001042F0u; return; } if (c.pc != 0x001072F8u) [[unlikely]] return; }
L_001072F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_00107354; } }
L_00107300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107308u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_0001(c, 68u, depth + 1u); else { c.pc = 0x00104320u; return; } if (c.pc != 0x00107308u) [[unlikely]] return; }
L_00107308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107310u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_0001(c, 62u, depth + 1u); else { c.pc = 0x001042F0u; return; } if (c.pc != 0x00107310u) [[unlikely]] return; }
L_00107310:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00107354; } }
L_00107318:
    set32(c.r[2], 0u - 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 12ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 64u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107340u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 380u, depth + 1u); else { c.pc = 0x00106AC8u; return; } if (c.pc != 0x00107340u) [[unlikely]] return; }
L_00107340:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00107354; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107350u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 413u, depth + 1u); else { c.pc = 0x00106FB0u; return; } if (c.pc != 0x00107350u) [[unlikely]] return; }
L_00107350:
    set32(c.r[2], 0u - 2u);
    c.budget -= 1;
L_00107354:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00107378:
    set32(c.r[5], ld32((c.r[5].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001073BC; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 1;
L_00107388:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[5].w[0] + 20u)));  goto L_001073B4; }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 2;
L_00107398:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[4].d[0]) { set32(c.r[3], ld32((c.r[3].w[0] + 56u)));  goto L_001073A8; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[3].d[0] + 0ull;  c.pc = t; return; }
L_001073A8:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00107398u | kUnwind; return; } goto L_00107398; }
    set32(c.r[5], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 1;
L_001073B4:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[5].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00107388u | kUnwind; return; } goto L_00107388; }
L_001073BC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_001073C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[4].d[0] | 8ull;
    set32(c.r[6], 0u + 64u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001073F0u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 382u, depth + 1u); else { c.pc = 0x00106B08u; return; } if (c.pc != 0x001073F0u) [[unlikely]] return; }
L_001073F0:
    set32(c.r[3], 0u + 2048u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    if (c.r[2].d[0] != 0) c.r[3].d[0] = 0ull;
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00107408:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010742Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 414u, depth + 1u); else { c.pc = 0x00106FD0u; return; } if (c.pc != 0x0010742Cu) [[unlikely]] return; }
L_0010742C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[2].d[0] | 9ull;
    st32((c.r[18].w[0] + 28u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 20u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[18].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107458u); set32(c.r[4], ld32((c.r[16].w[0] + 32u)));  if (depth < kMaxDepth) unit_0001(c, 438u, depth + 1u); else { c.pc = 0x00107378u; return; } if (c.pc != 0x00107458u) [[unlikely]] return; }
L_00107458:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[18].w[0] + 36u), c.r[2].w[0]);  goto L_0010746C; }
    st32((c.r[18].w[0] + 36u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 40u), 0u);  if (t) { goto L_00107474; } }
L_0010746C:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[18].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 2;
L_00107474:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 8ull;
    set32(c.r[6], 0u + 64u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107494u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 382u, depth + 1u); else { c.pc = 0x00106B08u; return; } if (c.pc != 0x00107494u) [[unlikely]] return; }
L_00107494:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_001074C0; } }
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[5], c.r[5].w[0] + 29640u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[4], 0u + 2048u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 64u);  [[clang::musttail]] return unit_0003(c, 355u, depth); }
L_001074C0:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001074D8:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[19].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[17].w[0] + 16u), 0u);
    set32(c.r[4], c.r[4].w[0] - 21760u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107510u); st32((c.r[17].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0001(c, 408u, depth + 1u); else { c.pc = 0x00106F08u; return; } if (c.pc != 0x00107510u) [[unlikely]] return; }
L_00107510:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001075FC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.r[3].d[0] = c.r[18].d[0] & 1ull;
    st32((c.r[17].w[0]), c.r[16].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[16].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[16].w[0] + 28u), c.r[17].w[0]);  if (t) { goto L_001075C0; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 8u), 0u);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107550u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 60u, depth + 1u); else { c.pc = 0x001042E0u; return; } if (c.pc != 0x00107550u) [[unlikely]] return; }
L_00107550:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00107568; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107560u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 413u, depth + 1u); else { c.pc = 0x00106FB0u; return; } if (c.pc != 0x00107560u) [[unlikely]] return; }
L_00107560:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_001075FC; } }
L_00107568:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 9ull;
    set32(c.r[6], 0u + 64u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107588u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 380u, depth + 1u); else { c.pc = 0x00106AC8u; return; } if (c.pc != 0x00107588u) [[unlikely]] return; }
L_00107588:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001075A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107598u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 413u, depth + 1u); else { c.pc = 0x00106FB0u; return; } if (c.pc != 0x00107598u) [[unlikely]] return; }
L_00107598:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001075A0u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_0001(c, 62u, depth + 1u); else { c.pc = 0x001042F0u; return; } if (c.pc != 0x001075A0u) [[unlikely]] return; }
L_001075A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_001075FC; } }
L_001075A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001075B0u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_0001(c, 68u, depth + 1u); else { c.pc = 0x00104320u; return; } if (c.pc != 0x001075B0u) [[unlikely]] return; }
L_001075B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001075B8u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_0001(c, 62u, depth + 1u); else { c.pc = 0x001042F0u; return; } if (c.pc != 0x001075B8u) [[unlikely]] return; }
L_001075B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001075FC; } }
L_001075C0:
    set32(c.r[2], 0u - 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 9ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 64u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001075E8u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 380u, depth + 1u); else { c.pc = 0x00106AC8u; return; } if (c.pc != 0x001075E8u) [[unlikely]] return; }
L_001075E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001075FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001075F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 413u, depth + 1u); else { c.pc = 0x00106FB0u; return; } if (c.pc != 0x001075F8u) [[unlikely]] return; }
L_001075F8:
    set32(c.r[2], 0u - 2u);
    c.budget -= 1;
L_001075FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00107618:
    set32(c.r[5], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[6].w[0] + 16u)));  goto L_00107634; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_00107638; } }
L_00107634:
    st32((c.r[2].w[0] + 60u), c.r[5].w[0]);
    c.budget -= 1;
L_00107638:
    st32((c.r[6].w[0] + 16u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    st32((c.r[5].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[5].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    st32((c.r[5].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    st32((c.r[5].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    st32((c.r[5].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    st32((c.r[5].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[5].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0])));
    c.budget -= 20;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_0010769C; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010769C; } }
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00105190u | kUnwind; return; } goto L_00105190; }
L_0010769C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001076A8:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[23].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st64((c.r[29].w[0] + 128u), c.r[22].d[0]);
    c.r[30].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[21].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[20].d[0]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[10].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    c.r[23].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107700u); set32(c.r[4], c.r[4].w[0] - 21760u);  if (depth < kMaxDepth) unit_0001(c, 408u, depth + 1u); else { c.pc = 0x00106F08u; return; } if (c.pc != 0x00107700u) [[unlikely]] return; }
L_00107700:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0010786C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[16].w[0]);
    st32((c.r[17].w[0] + 28u), c.r[23].w[0]);
    c.r[2].d[0] = c.r[28].d[0] + 0ull;
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[30].d[0] & 2ull;
    st32((c.r[16].w[0] + 32u), c.r[22].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 40u), c.r[20].w[0]);
    st32((c.r[16].w[0] + 44u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    st32((c.r[16].w[0] + 28u), c.r[17].w[0]);
    c.budget -= 18;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00107794; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[20].d[0]; c.r[2].d[0] = c.r[18].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;  if (t) { goto L_00107774; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010776Cu); if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[18].d[0];  if (depth < kMaxDepth) unit_0001(c, 389u, depth + 1u); else { c.pc = 0x00106C90u; return; } if (c.pc != 0x0010776Cu) [[unlikely]] return; }
L_0010776C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[30].d[0] & 1ull;  if (t) { goto L_00107798; } }
L_00107774:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_00107784; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107784u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 389u, depth + 1u); else { c.pc = 0x00106C90u; return; } if (c.pc != 0x00107784u) [[unlikely]] return; }
L_00107784:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00107794; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107794u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 389u, depth + 1u); else { c.pc = 0x00106C90u; return; } if (c.pc != 0x00107794u) [[unlikely]] return; }
L_00107794:
    c.r[2].d[0] = c.r[30].d[0] & 1ull;
    c.budget -= 1;
L_00107798:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], 0u + 1u);  goto L_001077EC; }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001077B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 48u), 0u);  if (t) { goto L_001077B4; } }
L_001077B0:
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 1;
L_001077B4:
    set32(c.r[2], 0u - 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[8], ld32((c.r[17].w[0] + 20u)));
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 10ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001077DCu); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0001(c, 380u, depth + 1u); else { c.pc = 0x00106AC8u; return; } if (c.pc != 0x001077DCu) [[unlikely]] return; }
L_001077DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010786C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00107848; } }
L_001077EC:
    st32((c.r[29].w[0] + 8u), 0u);
    st32((c.r[29].w[0] + 4u), c.r[19].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001077FCu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 60u, depth + 1u); else { c.pc = 0x001042E0u; return; } if (c.pc != 0x001077FCu) [[unlikely]] return; }
L_001077FC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00107814; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010780Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 413u, depth + 1u); else { c.pc = 0x00106FB0u; return; } if (c.pc != 0x0010780Cu) [[unlikely]] return; }
L_0010780C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_0010786C; } }
L_00107814:
    st32((c.r[16].w[0] + 48u), c.r[19].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[17].w[0] + 20u)));
    c.r[4].d[0] = c.r[4].d[0] | 10ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107838u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0001(c, 380u, depth + 1u); else { c.pc = 0x00106AC8u; return; } if (c.pc != 0x00107838u) [[unlikely]] return; }
L_00107838:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00107858; } }
L_00107840:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107848u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_0001(c, 62u, depth + 1u); else { c.pc = 0x001042F0u; return; } if (c.pc != 0x00107848u) [[unlikely]] return; }
L_00107848:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107850u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 413u, depth + 1u); else { c.pc = 0x00106FB0u; return; } if (c.pc != 0x00107850u) [[unlikely]] return; }
L_00107850:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_0010786C; } }
L_00107858:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107860u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_0001(c, 68u, depth + 1u); else { c.pc = 0x00104320u; return; } if (c.pc != 0x00107860u) [[unlikely]] return; }
L_00107860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107868u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_0001(c, 62u, depth + 1u); else { c.pc = 0x001042F0u; return; } if (c.pc != 0x00107868u) [[unlikely]] return; }
L_00107868:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010786C:
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
L_001078A0:
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001078CC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001078CC; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001078D4; } }
L_001078CC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_001078D4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_001078E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001078FCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x001078FCu) [[unlikely]] return; }
L_001078FC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[17].w[0]), c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] - 21760u);
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[3].w[0] + 40u)));
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    st32((c.r[17].w[0] + 16u), 0u);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 20u), 0u);  if (t) { goto L_0010792C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 40u), c.r[17].w[0]);  if (t) { goto L_00107960; } }
L_0010792C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { st32((c.r[4].w[0] + 20u), c.r[17].w[0]);  goto L_00107960; }
    c.budget -= 1;
L_00107940:
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00107940u | kUnwind; return; } goto L_00107940; } }
    st32((c.r[4].w[0] + 20u), c.r[17].w[0]);
    c.budget -= 1;
L_00107960:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_0003(c, 127u, depth); }
L_00107978:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    c.r[22].d[0] = c.r[10].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001079BCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x001079BCu) [[unlikely]] return; }
L_001079BC:
    st32((c.r[21].w[0] + 60u), 0u);
    st32((c.r[21].w[0] + 56u), 0u);
    st32((c.r[21].w[0]), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[22].w[0] + 8u)));
    st32((c.r[21].w[0] + 4u), c.r[17].w[0]);
    st32((c.r[21].w[0] + 8u), c.r[18].w[0]);
    st32((c.r[21].w[0] + 16u), c.r[19].w[0]);
    st32((c.r[21].w[0] + 20u), c.r[20].w[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[21].w[0] + 64u), c.r[22].w[0]);  if (t) { goto L_001079EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[22].w[0] + 8u), c.r[21].w[0]);  if (t) { goto L_00107A20; } }
L_001079EC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { st32((c.r[4].w[0] + 56u), c.r[21].w[0]);  goto L_00107A20; }
    c.budget -= 1;
L_00107A00:
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00107A00u | kUnwind; return; } goto L_00107A00; } }
    st32((c.r[4].w[0] + 56u), c.r[21].w[0]);
    c.budget -= 1;
L_00107A20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 128u);  [[clang::musttail]] return unit_0003(c, 127u, depth); }
L_00107A48:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107A68u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x00107A68u) [[unlikely]] return; }
L_00107A68:
    set32(c.r[16], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[17].d[0];  if (t) { goto L_00107A80; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00107AB8; } }
L_00107A80:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00107AB8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[17].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 56u)));  goto L_00107AB4; }
    c.budget -= 1;
L_00107A98:
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00107AB8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00107A98u | kUnwind; return; } goto L_00107A98; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 1;
L_00107AB4:
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 1;
L_00107AB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107AC0u);  if (depth < kMaxDepth) unit_0003(c, 127u, depth + 1u); else { c.pc = 0x0010D378u; return; } if (c.pc != 0x00107AC0u) [[unlikely]] return; }
L_00107AC0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00107AE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107AF8u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x00107AF8u) [[unlikely]] return; }
L_00107AF8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[3].w[0] - 21760u);
    set32(c.r[16], ld32((c.r[3].w[0] + 40u)));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[17].d[0];  if (t) { goto L_00107B18; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 40u), c.r[2].w[0]);  if (t) { goto L_00107B50; } }
L_00107B18:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00107B50; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[17].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 20u)));  goto L_00107B4C; }
    c.budget -= 1;
L_00107B30:
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00107B50; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00107B30u | kUnwind; return; } goto L_00107B30; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 1;
L_00107B4C:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 1;
L_00107B50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107B58u);  if (depth < kMaxDepth) unit_0003(c, 127u, depth + 1u); else { c.pc = 0x0010D378u; return; } if (c.pc != 0x00107B58u) [[unlikely]] return; }
L_00107B58:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00107B70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107B88u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x00107B88u) [[unlikely]] return; }
L_00107B88:
    set32(c.r[17], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 60u)));  goto L_00107B9C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), 0u);  if (t) { goto L_00107BA8; } }
L_00107B9C:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 3;
L_00107BA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107BB0u);  if (depth < kMaxDepth) unit_0003(c, 127u, depth + 1u); else { c.pc = 0x0010D378u; return; } if (c.pc != 0x00107BB0u) [[unlikely]] return; }
L_00107BB0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00107BC8:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[20].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00107C00u); set32(c.r[6], ld32((c.r[17].w[0] + 12u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00107C00u) [[unlikely]] return; }
L_00107C00:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { set32(c.r[20], ld32((c.r[17].w[0] + 44u)));  goto L_00107C0C; }
L_00107C0C:
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_00107C20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107C20u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_0001(c, 389u, depth + 1u); else { c.pc = 0x00106C90u; return; } if (c.pc != 0x00107C20u) [[unlikely]] return; }
L_00107C20:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] <= 0; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00107C30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107C30u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 389u, depth + 1u); else { c.pc = 0x00106C90u; return; } if (c.pc != 0x00107C30u) [[unlikely]] return; }
L_00107C30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107C38u);  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x00107C38u) [[unlikely]] return; }
L_00107C38:
    set32(c.r[5], ld32((c.r[17].w[0] + 52u)));
    c.r[2].d[0] = c.r[5].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] >> 16);  if (t) { goto L_00107C5C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107C54u); set32(c.r[4], c.r[4].w[0] - 21760u);  if (depth < kMaxDepth) unit_0001(c, 415u, depth + 1u); else { c.pc = 0x00107000u; return; } if (c.pc != 0x00107C54u) [[unlikely]] return; }
L_00107C54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00107C6C; } }
L_00107C5C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107C68u); set32(c.r[4], c.r[4].w[0] - 21760u);  if (depth < kMaxDepth) unit_0001(c, 414u, depth + 1u); else { c.pc = 0x00106FD0u; return; } if (c.pc != 0x00107C68u) [[unlikely]] return; }
L_00107C68:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00107C6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107C74u);  if (depth < kMaxDepth) unit_0003(c, 127u, depth + 1u); else { c.pc = 0x0010D378u; return; } if (c.pc != 0x00107C74u) [[unlikely]] return; }
L_00107C74:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.r[3].d[0] = c.r[3].d[0] | 10ull;
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 24u), 0u);  goto L_00107CC8; }
    c.budget -= 1;
L_00107C98:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[8], ld32((c.r[17].w[0] + 40u)));
    c.r[4].d[0] = c.r[4].d[0] | 8ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 64u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107CB8u); c.r[9].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 380u, depth + 1u); else { c.pc = 0x00106AC8u; return; } if (c.pc != 0x00107CB8u) [[unlikely]] return; }
L_00107CB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00107C98u | kUnwind; return; } goto L_00107C98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_00107D74; } }
L_00107CC8:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[20].sd[0] <= 0; st32((c.r[16].w[0] + 16u), 0u);  if (t) { goto L_00107CEC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[19], 0u + 1u);
    st32((c.r[29].w[0]), c.r[18].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[20].w[0]);
    st32((c.r[29].w[0] + 12u), 0u);
    c.budget -= 6;
L_00107CEC:
    set32(c.r[5], c.r[19].w[0] << 4);
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[3], c.r[29].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[29].w[0] + 4u);
    st32((c.r[3].w[0]), c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[3], c.r[29].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], 0u + 64u);
    set32(c.r[2], c.r[29].w[0] + 12u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    st32((c.r[2].w[0]), 0u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 17;
L_00107D30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107D38u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 96u, depth + 1u); else { c.pc = 0x001046A0u; return; } if (c.pc != 0x00107D38u) [[unlikely]] return; }
L_00107D38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_00107D70; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[4], 0u - 1u);
    c.budget -= 2;
L_00107D48:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00107D48u | kUnwind; return; } goto L_00107D48; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00107D30u | kUnwind; return; } goto L_00107D30; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_00107D70:
    c.r[20].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_00107D74:
    c.r[19].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00107D90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00107DB0; } }
    c.budget -= 1;
L_00107DA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107DB0u);  if (depth < kMaxDepth) unit_0001(c, 491u, depth + 1u); else { c.pc = 0x00107BC8u; return; } if (c.pc != 0x00107DB0u) [[unlikely]] return; }
L_00107DB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107DB8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 488u, depth + 1u); else { c.pc = 0x00107B70u; return; } if (c.pc != 0x00107DB8u) [[unlikely]] return; }
L_00107DB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00107DA8u | kUnwind; return; } goto L_00107DA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107DC8u);  if (depth < kMaxDepth) unit_0001(c, 44u, depth + 1u); else { c.pc = 0x00104200u; return; } if (c.pc != 0x00107DC8u) [[unlikely]] return; }
L_00107DC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00107DB0u | kUnwind; return; } goto L_00107DB0; } }
L_00107DD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] - 24312u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00107E20; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 20u), 0u);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107E08u); st32((c.r[29].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0001(c, 60u, depth + 1u); else { c.pc = 0x001042E0u; return; } if (c.pc != 0x00107E08u) [[unlikely]] return; }
L_00107E08:
    st32((c.r[16].w[0] - 24312u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107E14u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 60u, depth + 1u); else { c.pc = 0x001042E0u; return; } if (c.pc != 0x00107E14u) [[unlikely]] return; }
L_00107E14:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st32((c.r[3].w[0] - 24308u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 3;
L_00107E20:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00107E30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107E48u); c.r[17].sd[0] = static_cast<std::int32_t>(0x00430000u);  if (depth < kMaxDepth) unit_0001(c, 509u, depth + 1u); else { c.pc = 0x00107DD0u; return; } if (c.pc != 0x00107E48u) [[unlikely]] return; }
L_00107E48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107E50u); set32(c.r[4], ld32((c.r[17].w[0] - 24312u)));  if (depth < kMaxDepth) unit_0001(c, 68u, depth + 1u); else { c.pc = 0x00104320u; return; } if (c.pc != 0x00107E50u) [[unlikely]] return; }
L_00107E50:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[16], c.r[3].w[0] - 16256u);
    set32(c.r[3], c.r[16].w[0] + 512u);
    c.r[2].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_00107E98; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 2;
L_00107E70:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 16u);  goto L_00107E8C; }
    set32(c.r[4], ld32((c.r[17].w[0] - 24312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107E84u); st32((c.r[16].w[0] + 4u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_0001(c, 64u, depth + 1u); else { c.pc = 0x00104300u; return; } if (c.pc != 0x00107E84u) [[unlikely]] return; }
L_00107E84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00107EA4; } }
L_00107E8C:
    c.r[2].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00107E70u | kUnwind; return; } goto L_00107E70; }
L_00107E98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107EA0u); set32(c.r[4], ld32((c.r[17].w[0] - 24312u)));  if (depth < kMaxDepth) unit_0001(c, 64u, depth + 1u); else { c.pc = 0x00104300u; return; } if (c.pc != 0x00107EA0u) [[unlikely]] return; }
L_00107EA0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00107EA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00107EB8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107ED4u); c.r[17].sd[0] = static_cast<std::int32_t>(0x00430000u);  if (depth < kMaxDepth) unit_0001(c, 509u, depth + 1u); else { c.pc = 0x00107DD0u; return; } if (c.pc != 0x00107ED4u) [[unlikely]] return; }
L_00107ED4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107EDCu); set32(c.r[4], ld32((c.r[17].w[0] - 24312u)));  if (depth < kMaxDepth) unit_0001(c, 68u, depth + 1u); else { c.pc = 0x00104320u; return; } if (c.pc != 0x00107EDCu) [[unlikely]] return; }
L_00107EDC:
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_00107EF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107EF0u); set32(c.r[4], ld32((c.r[17].w[0] - 24312u)));  if (depth < kMaxDepth) unit_0001(c, 64u, depth + 1u); else { c.pc = 0x00104300u; return; } if (c.pc != 0x00107EF0u) [[unlikely]] return; }
L_00107EF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00107F10; } }
L_00107EF8:
    set32(c.r[16], c.r[16].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - 16256u);
    set32(c.r[4], ld32((c.r[17].w[0] - 24312u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107F0Cu); set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0001(c, 64u, depth + 1u); else { c.pc = 0x00104300u; return; } if (c.pc != 0x00107F0Cu) [[unlikely]] return; }
L_00107F0C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00107F10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00107F28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], ld32((c.r[2].w[0] - 24320u)));
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; st64((c.r[29].w[0] + 32u), c.r[16].d[0]);  if (t) { goto L_00107F48; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_00107F48:
    set32(c.r[3], 0u + 1088u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[2].w[0] - 24328u), c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] - 18432u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[16].d[0] = c.r[3].d[0] | c.r[5].d[0];
    lwl(c.r[2], (c.r[16].w[0] + 3u));
    lwr(c.r[2], (c.r[16].w[0]));
    swl(c.r[2], (c.r[29].w[0] + 3u));
    swr(c.r[2], (c.r[29].w[0]));
    lwl(c.r[6], (c.r[16].w[0] + 7u));
    lwr(c.r[6], (c.r[16].w[0] + 4u));
    swl(c.r[6], (c.r[29].w[0] + 7u));
    swr(c.r[6], (c.r[29].w[0] + 4u));
    lwl(c.r[3], (c.r[16].w[0] + 11u));
    lwr(c.r[3], (c.r[16].w[0] + 8u));
    swl(c.r[3], (c.r[29].w[0] + 11u));
    swr(c.r[3], (c.r[29].w[0] + 8u));
    lwl(c.r[7], (c.r[16].w[0] + 15u));
    lwr(c.r[7], (c.r[16].w[0] + 12u));
    swl(c.r[7], (c.r[29].w[0] + 15u));
    swr(c.r[7], (c.r[29].w[0] + 12u));
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 28;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[4], ld32((c.r[29].w[0] + 8u)));  if (t) { goto L_00107FC4; } }
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107FC4u); set32(c.r[6], ld32((c.r[29].w[0] + 12u)));  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00107FC4u) [[unlikely]] return; }
L_00107FC4:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[4], c.r[2].w[0] - 2u);
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(25ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { [[clang::musttail]] return unit_0002(c, 16u, depth); } }
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 7216u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00104000u < 16384u) { entry = entries_0001[(t - 0x00104000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00107FF0:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[7], c.r[16].w[0] + 20u);  if (t) { [[clang::musttail]] return unit_0002(c, 4u, depth); } }
    set32(c.r[8], ld32((c.r[7].w[0] + 8u)));
    c.budget -= 1;
    [[clang::musttail]] return unit_0002(c, 1u, depth);
}

}
