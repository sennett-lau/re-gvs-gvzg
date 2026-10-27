#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0093[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 6,
    0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0,
    0, 0, 11, 0, 0, 0, 12, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 20, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0,
    23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28,
    0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0,
    0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0,
    39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 43, 0, 0, 44, 0, 0, 0,
    0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0,
    0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0, 56, 0, 0, 0, 0,
    0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 61, 0, 0, 62, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0,
    0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0,
    0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0,
    0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 84, 0, 0, 0,
    0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 88, 0, 89, 0, 0, 0, 90, 0, 0, 0,
    0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94,
    0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 104, 0, 0, 0, 0, 0,
    105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0,
    0, 0, 0, 0, 115, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0,
    0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 126, 0, 127, 0,
    0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132,
    0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0,
    0, 0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0,
    142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0,
    0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0,
    0, 0, 158, 0, 0, 159, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0,
    0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0,
    0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 178, 0, 0, 179, 0,
    0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0,
    185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0,
    190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0,
    0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 198, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0,
    0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0,
    0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0,
    223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 226, 0, 227, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0,
    0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0,
    0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 240, 0, 0, 241, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0,
    245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 248, 0,
    0, 249, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    254, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 259, 0, 0, 260, 0, 0, 0, 0, 0,
    261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0,
    0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0,
    0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 283,
    0, 0, 0, 284, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0,
    289, 0, 0, 290, 0, 0, 291, 0, 0, 292, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0,
    0, 0, 301, 0, 0, 302, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0,
    0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 317, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 321, 0, 322, 0, 0, 0, 323, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0,
    328, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0,
    333, 0, 0, 0, 334, 0, 0, 335, 0, 0, 336, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0,
    0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0,
    0, 348, 0, 0, 0, 349, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 0, 355, 0, 0,
    0, 356, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0,
    0, 364, 0, 0, 0, 365, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 369, 0, 0, 370, 0, 0, 371, 0,
    0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 374, 0,
    0, 375, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 381, 0, 0,
    382, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 387, 0, 0,
    388, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 395, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 397, 0, 0, 398, 0, 0, 399, 0, 0,
    400, 0, 0, 401, 0, 0, 402, 0, 0, 403, 0, 0, 404, 0, 0, 405, 0, 0, 406, 0, 0, 407, 0, 0, 408, 0, 0, 409, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 412, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 414, 0, 0, 415, 0, 0, 416, 0, 0, 417, 0, 0,
    418, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 423, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0,
    0, 0, 431, 0, 0, 0, 0, 432, 0, 0, 433, 0, 0, 0, 0, 0, 434, 0, 0, 435, 0, 0, 436, 0, 0, 0, 0, 0, 437, 0, 0, 0,
    0, 0, 0, 0, 0, 438, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0, 441, 0, 0, 0, 0, 442, 0, 0, 0, 443, 0, 0, 0, 444, 0,
    0, 0, 445, 0, 0, 0, 446, 0, 0, 0, 447, 0, 0, 0, 448, 0, 0, 0, 449, 0, 0, 0, 450, 0, 0, 451, 0, 0, 452, 0, 0, 0,
    453, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 455, 0, 0, 456, 0, 0, 0, 0, 0, 457, 0, 0, 458, 0, 0, 459, 0, 0, 0, 0,
    460, 0, 0, 0, 0, 0, 461, 0, 0, 462, 0, 0, 463, 0, 0, 0, 464, 0, 0, 0, 0, 0, 465, 0, 0, 466, 0, 0, 0, 0, 0, 467,
    0, 0, 468, 0, 0, 469, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 472, 0, 0, 473, 0, 0, 474, 0, 0,
    0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 477, 0, 0, 478, 0, 0, 479, 0, 0, 0, 480, 0, 0, 0,
    0, 0, 0, 0, 0, 481, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 484, 0, 0, 0, 485, 0, 0, 0, 486, 0,
    0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 490, 0, 0, 0, 0, 0, 491, 0,
    0, 0, 0, 492, 0, 0, 493, 0, 0, 494, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 497, 0, 0,
    0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 499, 0, 0, 500, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 502, 0, 0, 0, 503, 0, 0, 0,
    504, 0, 0, 505, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 512, 0, 0,
    0, 0, 0, 0, 513, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 516, 0, 517, 0, 0, 0, 0,
    518, 0, 0, 519, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 523, 0, 0, 0, 524,
    0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0,
    531, 0, 532, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 535, 0, 0, 536, 0, 0, 537, 0, 0,
    0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 539, 0, 0, 0, 540, 0, 0, 0, 541, 0, 0, 0, 542, 0, 0, 0, 543, 0, 0, 0, 544, 0,
    0, 0, 545, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0,
    551, 0, 552, 0, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 555, 0, 0, 556, 0, 0, 557, 0, 0,
    0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 0, 559, 0, 0, 0, 560, 0, 0, 0, 561, 0, 0, 0, 562, 0, 0, 0, 0, 563, 0, 0, 0,
    0, 0, 0, 564, 0, 0, 0, 565, 0, 0, 566, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 568, 0, 0, 569, 0, 0, 570, 0, 0, 0,
    571, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 0, 0, 573, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 577, 0, 0, 578, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0,
    580, 0, 0, 0, 581, 0, 0, 0, 0, 0, 582, 0, 0, 583, 0, 0, 584, 0, 0, 0, 585, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    586, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 589, 0, 0, 0, 0, 0, 0, 590, 0, 591, 0, 0, 0, 0, 592, 0, 0, 0, 0, 0, 593, 0, 0, 0, 594, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 596, 0, 597, 0, 0, 0, 0, 0, 598, 0, 0,
    0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 601, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 0, 0, 0, 603, 604, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 606, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 607, 0, 0, 0,
};

void unit_0093(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0034C000;
    case 2u: goto L_0034C020;
    case 3u: goto L_0034C04C;
    case 4u: goto L_0034C060;
    case 5u: goto L_0034C070;
    case 6u: goto L_0034C07C;
    case 7u: goto L_0034C088;
    case 8u: goto L_0034C0B0;
    case 9u: goto L_0034C0E4;
    case 10u: goto L_0034C0F8;
    case 11u: goto L_0034C108;
    case 12u: goto L_0034C118;
    case 13u: goto L_0034C124;
    case 14u: goto L_0034C130;
    case 15u: goto L_0034C150;
    case 16u: goto L_0034C184;
    case 17u: goto L_0034C198;
    case 18u: goto L_0034C1A8;
    case 19u: goto L_0034C1B8;
    case 20u: goto L_0034C1C4;
    case 21u: goto L_0034C1D0;
    case 22u: goto L_0034C1F0;
    case 23u: goto L_0034C200;
    case 24u: goto L_0034C210;
    case 25u: goto L_0034C22C;
    case 26u: goto L_0034C238;
    case 27u: goto L_0034C250;
    case 28u: goto L_0034C27C;
    case 29u: goto L_0034C290;
    case 30u: goto L_0034C298;
    case 31u: goto L_0034C2D0;
    case 32u: goto L_0034C2EC;
    case 33u: goto L_0034C2F8;
    case 34u: goto L_0034C310;
    case 35u: goto L_0034C32C;
    case 36u: goto L_0034C338;
    case 37u: goto L_0034C350;
    case 38u: goto L_0034C374;
    case 39u: goto L_0034C380;
    case 40u: goto L_0034C3A0;
    case 41u: goto L_0034C3C4;
    case 42u: goto L_0034C3D8;
    case 43u: goto L_0034C3E4;
    case 44u: goto L_0034C3F0;
    case 45u: goto L_0034C410;
    case 46u: goto L_0034C434;
    case 47u: goto L_0034C440;
    case 48u: goto L_0034C454;
    case 49u: goto L_0034C460;
    case 50u: goto L_0034C46C;
    case 51u: goto L_0034C490;
    case 52u: goto L_0034C4B4;
    case 53u: goto L_0034C4C0;
    case 54u: goto L_0034C4D4;
    case 55u: goto L_0034C4E0;
    case 56u: goto L_0034C4EC;
    case 57u: goto L_0034C510;
    case 58u: goto L_0034C53C;
    case 59u: goto L_0034C550;
    case 60u: goto L_0034C560;
    case 61u: goto L_0034C56C;
    case 62u: goto L_0034C578;
    case 63u: goto L_0034C5A0;
    case 64u: goto L_0034C5BC;
    case 65u: goto L_0034C5CC;
    case 66u: goto L_0034C5D8;
    case 67u: goto L_0034C5F0;
    case 68u: goto L_0034C614;
    case 69u: goto L_0034C62C;
    case 70u: goto L_0034C670;
    case 71u: goto L_0034C694;
    case 72u: goto L_0034C6A8;
    case 73u: goto L_0034C6B4;
    case 74u: goto L_0034C6C0;
    case 75u: goto L_0034C6E0;
    case 76u: goto L_0034C6F0;
    case 77u: goto L_0034C714;
    case 78u: goto L_0034C72C;
    case 79u: goto L_0034C770;
    case 80u: goto L_0034C7A0;
    case 81u: goto L_0034C7C4;
    case 82u: goto L_0034C7D8;
    case 83u: goto L_0034C7E4;
    case 84u: goto L_0034C7F0;
    case 85u: goto L_0034C810;
    case 86u: goto L_0034C838;
    case 87u: goto L_0034C848;
    case 88u: goto L_0034C858;
    case 89u: goto L_0034C860;
    case 90u: goto L_0034C870;
    case 91u: goto L_0034C88C;
    case 92u: goto L_0034C8A4;
    case 93u: goto L_0034C8E0;
    case 94u: goto L_0034C8FC;
    case 95u: goto L_0034C90C;
    case 96u: goto L_0034C918;
    case 97u: goto L_0034C930;
    case 98u: goto L_0034C940;
    case 99u: goto L_0034C95C;
    case 100u: goto L_0034C974;
    case 101u: goto L_0034C9B0;
    case 102u: goto L_0034C9CC;
    case 103u: goto L_0034C9DC;
    case 104u: goto L_0034C9E8;
    case 105u: goto L_0034CA00;
    case 106u: goto L_0034CA10;
    case 107u: goto L_0034CA2C;
    case 108u: goto L_0034CA44;
    case 109u: goto L_0034CA80;
    case 110u: goto L_0034CAA0;
    case 111u: goto L_0034CABC;
    case 112u: goto L_0034CACC;
    case 113u: goto L_0034CAD8;
    case 114u: goto L_0034CAF0;
    case 115u: goto L_0034CB10;
    case 116u: goto L_0034CB18;
    case 117u: goto L_0034CB30;
    case 118u: goto L_0034CB50;
    case 119u: goto L_0034CB58;
    case 120u: goto L_0034CB70;
    case 121u: goto L_0034CB8C;
    case 122u: goto L_0034CBA0;
    case 123u: goto L_0034CBB0;
    case 124u: goto L_0034CBC0;
    case 125u: goto L_0034CBD0;
    case 126u: goto L_0034CBF0;
    case 127u: goto L_0034CBF8;
    case 128u: goto L_0034CC10;
    case 129u: goto L_0034CC2C;
    case 130u: goto L_0034CC40;
    case 131u: goto L_0034CC50;
    case 132u: goto L_0034CC7C;
    case 133u: goto L_0034CC88;
    case 134u: goto L_0034CC94;
    case 135u: goto L_0034CCC8;
    case 136u: goto L_0034CCD4;
    case 137u: goto L_0034CCE4;
    case 138u: goto L_0034CCF4;
    case 139u: goto L_0034CD18;
    case 140u: goto L_0034CD24;
    case 141u: goto L_0034CD70;
    case 142u: goto L_0034CD80;
    case 143u: goto L_0034CD90;
    case 144u: goto L_0034CDB4;
    case 145u: goto L_0034CDCC;
    case 146u: goto L_0034CE10;
    case 147u: goto L_0034CE60;
    case 148u: goto L_0034CE84;
    case 149u: goto L_0034CEB8;
    case 150u: goto L_0034CEEC;
    case 151u: goto L_0034CF30;
    case 152u: goto L_0034CF40;
    case 153u: goto L_0034CF98;
    case 154u: goto L_0034CFA4;
    case 155u: goto L_0034CFB8;
    case 156u: goto L_0034CFD0;
    case 157u: goto L_0034CFF4;
    case 158u: goto L_0034D008;
    case 159u: goto L_0034D014;
    case 160u: goto L_0034D020;
    case 161u: goto L_0034D040;
    case 162u: goto L_0034D064;
    case 163u: goto L_0034D07C;
    case 164u: goto L_0034D0C0;
    case 165u: goto L_0034D0F8;
    case 166u: goto L_0034D104;
    case 167u: goto L_0034D128;
    case 168u: goto L_0034D138;
    case 169u: goto L_0034D148;
    case 170u: goto L_0034D154;
    case 171u: goto L_0034D170;
    case 172u: goto L_0034D188;
    case 173u: goto L_0034D1C8;
    case 174u: goto L_0034D1F0;
    case 175u: goto L_0034D21C;
    case 176u: goto L_0034D22C;
    case 177u: goto L_0034D260;
    case 178u: goto L_0034D26C;
    case 179u: goto L_0034D278;
    case 180u: goto L_0034D290;
    case 181u: goto L_0034D2B4;
    case 182u: goto L_0034D2C8;
    case 183u: goto L_0034D2D4;
    case 184u: goto L_0034D2E0;
    case 185u: goto L_0034D300;
    case 186u: goto L_0034D32C;
    case 187u: goto L_0034D340;
    case 188u: goto L_0034D354;
    case 189u: goto L_0034D368;
    case 190u: goto L_0034D380;
    case 191u: goto L_0034D398;
    case 192u: goto L_0034D3D0;
    case 193u: goto L_0034D424;
    case 194u: goto L_0034D438;
    case 195u: goto L_0034D470;
    case 196u: goto L_0034D484;
    case 197u: goto L_0034D4D0;
    case 198u: goto L_0034D504;
    case 199u: goto L_0034D50C;
    case 200u: goto L_0034D520;
    case 201u: goto L_0034D534;
    case 202u: goto L_0034D564;
    case 203u: goto L_0034D578;
    case 204u: goto L_0034D594;
    case 205u: goto L_0034D5A8;
    case 206u: goto L_0034D5B0;
    case 207u: goto L_0034D5C8;
    case 208u: goto L_0034D5DC;
    case 209u: goto L_0034D5F0;
    case 210u: goto L_0034D610;
    case 211u: goto L_0034D620;
    case 212u: goto L_0034D650;
    case 213u: goto L_0034D660;
    case 214u: goto L_0034D68C;
    case 215u: goto L_0034D6A0;
    case 216u: goto L_0034D6CC;
    case 217u: goto L_0034D6E0;
    case 218u: goto L_0034D710;
    case 219u: goto L_0034D720;
    case 220u: goto L_0034D734;
    case 221u: goto L_0034D750;
    case 222u: goto L_0034D764;
    case 223u: goto L_0034D780;
    case 224u: goto L_0034D798;
    case 225u: goto L_0034D7B0;
    case 226u: goto L_0034D7CC;
    case 227u: goto L_0034D7D4;
    case 228u: goto L_0034D7DC;
    case 229u: goto L_0034D7F0;
    case 230u: goto L_0034D810;
    case 231u: goto L_0034D820;
    case 232u: goto L_0034D830;
    case 233u: goto L_0034D88C;
    case 234u: goto L_0034D8B0;
    case 235u: goto L_0034D8C0;
    case 236u: goto L_0034D8EC;
    case 237u: goto L_0034D90C;
    case 238u: goto L_0034D934;
    case 239u: goto L_0034D950;
    case 240u: goto L_0034D98C;
    case 241u: goto L_0034D998;
    case 242u: goto L_0034D9A4;
    case 243u: goto L_0034D9C0;
    case 244u: goto L_0034D9E4;
    case 245u: goto L_0034DA00;
    case 246u: goto L_0034DAB0;
    case 247u: goto L_0034DAEC;
    case 248u: goto L_0034DAF8;
    case 249u: goto L_0034DB04;
    case 250u: goto L_0034DB10;
    case 251u: goto L_0034DB30;
    case 252u: goto L_0034DB40;
    case 253u: goto L_0034DB50;
    case 254u: goto L_0034DB80;
    case 255u: goto L_0034DB90;
    case 256u: goto L_0034DBA0;
    case 257u: goto L_0034DBC0;
    case 258u: goto L_0034DBD0;
    case 259u: goto L_0034DBDC;
    case 260u: goto L_0034DBE8;
    case 261u: goto L_0034DC00;
    case 262u: goto L_0034DC68;
    case 263u: goto L_0034DC78;
    case 264u: goto L_0034DC8C;
    case 265u: goto L_0034DCCC;
    case 266u: goto L_0034DCDC;
    case 267u: goto L_0034DCF4;
    case 268u: goto L_0034DD1C;
    case 269u: goto L_0034DD40;
    case 270u: goto L_0034DD78;
    case 271u: goto L_0034DDA0;
    case 272u: goto L_0034DDB0;
    case 273u: goto L_0034DDD4;
    case 274u: goto L_0034DDF0;
    case 275u: goto L_0034DE20;
    case 276u: goto L_0034DE34;
    case 277u: goto L_0034DE50;
    case 278u: goto L_0034DE60;
    case 279u: goto L_0034DE70;
    case 280u: goto L_0034DE8C;
    case 281u: goto L_0034DEA4;
    case 282u: goto L_0034DEE0;
    case 283u: goto L_0034DEFC;
    case 284u: goto L_0034DF0C;
    case 285u: goto L_0034DF18;
    case 286u: goto L_0034DF30;
    case 287u: goto L_0034DF50;
    case 288u: goto L_0034DF74;
    case 289u: goto L_0034DF80;
    case 290u: goto L_0034DF8C;
    case 291u: goto L_0034DF98;
    case 292u: goto L_0034DFA4;
    case 293u: goto L_0034DFB0;
    case 294u: goto L_0034DFC0;
    case 295u: goto L_0034E020;
    case 296u: goto L_0034E048;
    case 297u: goto L_0034E060;
    case 298u: goto L_0034E0A0;
    case 299u: goto L_0034E0CC;
    case 300u: goto L_0034E0E8;
    case 301u: goto L_0034E108;
    case 302u: goto L_0034E114;
    case 303u: goto L_0034E120;
    case 304u: goto L_0034E140;
    case 305u: goto L_0034E150;
    case 306u: goto L_0034E16C;
    case 307u: goto L_0034E1A8;
    case 308u: goto L_0034E1BC;
    case 309u: goto L_0034E1F4;
    case 310u: goto L_0034E208;
    case 311u: goto L_0034E21C;
    case 312u: goto L_0034E250;
    case 313u: goto L_0034E260;
    case 314u: goto L_0034E290;
    case 315u: goto L_0034E2AC;
    case 316u: goto L_0034E2BC;
    case 317u: goto L_0034E2C8;
    case 318u: goto L_0034E2E0;
    case 319u: goto L_0034E390;
    case 320u: goto L_0034E3CC;
    case 321u: goto L_0034E3D8;
    case 322u: goto L_0034E3E0;
    case 323u: goto L_0034E3F0;
    case 324u: goto L_0034E430;
    case 325u: goto L_0034E440;
    case 326u: goto L_0034E450;
    case 327u: goto L_0034E470;
    case 328u: goto L_0034E480;
    case 329u: goto L_0034E490;
    case 330u: goto L_0034E4A8;
    case 331u: goto L_0034E4D0;
    case 332u: goto L_0034E4E0;
    case 333u: goto L_0034E500;
    case 334u: goto L_0034E510;
    case 335u: goto L_0034E51C;
    case 336u: goto L_0034E528;
    case 337u: goto L_0034E540;
    case 338u: goto L_0034E5B0;
    case 339u: goto L_0034E5D0;
    case 340u: goto L_0034E5E0;
    case 341u: goto L_0034E604;
    case 342u: goto L_0034E61C;
    case 343u: goto L_0034E634;
    case 344u: goto L_0034E644;
    case 345u: goto L_0034E654;
    case 346u: goto L_0034E664;
    case 347u: goto L_0034E674;
    case 348u: goto L_0034E684;
    case 349u: goto L_0034E694;
    case 350u: goto L_0034E6A4;
    case 351u: goto L_0034E6B4;
    case 352u: goto L_0034E6C4;
    case 353u: goto L_0034E6D4;
    case 354u: goto L_0034E6E4;
    case 355u: goto L_0034E6F4;
    case 356u: goto L_0034E704;
    case 357u: goto L_0034E714;
    case 358u: goto L_0034E724;
    case 359u: goto L_0034E734;
    case 360u: goto L_0034E744;
    case 361u: goto L_0034E754;
    case 362u: goto L_0034E764;
    case 363u: goto L_0034E774;
    case 364u: goto L_0034E784;
    case 365u: goto L_0034E794;
    case 366u: goto L_0034E7A4;
    case 367u: goto L_0034E7B4;
    case 368u: goto L_0034E7C4;
    case 369u: goto L_0034E7E0;
    case 370u: goto L_0034E7EC;
    case 371u: goto L_0034E7F8;
    case 372u: goto L_0034E810;
    case 373u: goto L_0034E860;
    case 374u: goto L_0034E878;
    case 375u: goto L_0034E884;
    case 376u: goto L_0034E890;
    case 377u: goto L_0034E8A0;
    case 378u: goto L_0034E8C8;
    case 379u: goto L_0034E8D8;
    case 380u: goto L_0034E8E8;
    case 381u: goto L_0034E8F4;
    case 382u: goto L_0034E900;
    case 383u: goto L_0034E920;
    case 384u: goto L_0034E948;
    case 385u: goto L_0034E958;
    case 386u: goto L_0034E968;
    case 387u: goto L_0034E974;
    case 388u: goto L_0034E980;
    case 389u: goto L_0034E9A0;
    case 390u: goto L_0034E9EC;
    case 391u: goto L_0034EA18;
    case 392u: goto L_0034EA28;
    case 393u: goto L_0034EAA0;
    case 394u: goto L_0034EAE8;
    case 395u: goto L_0034EAF4;
    case 396u: goto L_0034EB50;
    case 397u: goto L_0034EB5C;
    case 398u: goto L_0034EB68;
    case 399u: goto L_0034EB74;
    case 400u: goto L_0034EB80;
    case 401u: goto L_0034EB8C;
    case 402u: goto L_0034EB98;
    case 403u: goto L_0034EBA4;
    case 404u: goto L_0034EBB0;
    case 405u: goto L_0034EBBC;
    case 406u: goto L_0034EBC8;
    case 407u: goto L_0034EBD4;
    case 408u: goto L_0034EBE0;
    case 409u: goto L_0034EBEC;
    case 410u: goto L_0034EC20;
    case 411u: goto L_0034EC68;
    case 412u: goto L_0034EC74;
    case 413u: goto L_0034ECC4;
    case 414u: goto L_0034ECD0;
    case 415u: goto L_0034ECDC;
    case 416u: goto L_0034ECE8;
    case 417u: goto L_0034ECF4;
    case 418u: goto L_0034ED00;
    case 419u: goto L_0034ED0C;
    case 420u: goto L_0034ED40;
    case 421u: goto L_0034ED50;
    case 422u: goto L_0034ED80;
    case 423u: goto L_0034EE08;
    case 424u: goto L_0034EE10;
    case 425u: goto L_0034EE54;
    case 426u: goto L_0034EE68;
    case 427u: goto L_0034EF10;
    case 428u: goto L_0034EF30;
    case 429u: goto L_0034EF48;
    case 430u: goto L_0034EF78;
    case 431u: goto L_0034EF88;
    case 432u: goto L_0034EF9C;
    case 433u: goto L_0034EFA8;
    case 434u: goto L_0034EFC0;
    case 435u: goto L_0034EFCC;
    case 436u: goto L_0034EFD8;
    case 437u: goto L_0034EFF0;
    case 438u: goto L_0034F014;
    case 439u: goto L_0034F024;
    case 440u: goto L_0034F034;
    case 441u: goto L_0034F044;
    case 442u: goto L_0034F058;
    case 443u: goto L_0034F068;
    case 444u: goto L_0034F078;
    case 445u: goto L_0034F088;
    case 446u: goto L_0034F098;
    case 447u: goto L_0034F0A8;
    case 448u: goto L_0034F0B8;
    case 449u: goto L_0034F0C8;
    case 450u: goto L_0034F0D8;
    case 451u: goto L_0034F0E4;
    case 452u: goto L_0034F0F0;
    case 453u: goto L_0034F100;
    case 454u: goto L_0034F118;
    case 455u: goto L_0034F130;
    case 456u: goto L_0034F13C;
    case 457u: goto L_0034F154;
    case 458u: goto L_0034F160;
    case 459u: goto L_0034F16C;
    case 460u: goto L_0034F180;
    case 461u: goto L_0034F198;
    case 462u: goto L_0034F1A4;
    case 463u: goto L_0034F1B0;
    case 464u: goto L_0034F1C0;
    case 465u: goto L_0034F1D8;
    case 466u: goto L_0034F1E4;
    case 467u: goto L_0034F1FC;
    case 468u: goto L_0034F208;
    case 469u: goto L_0034F214;
    case 470u: goto L_0034F220;
    case 471u: goto L_0034F248;
    case 472u: goto L_0034F25C;
    case 473u: goto L_0034F268;
    case 474u: goto L_0034F274;
    case 475u: goto L_0034F290;
    case 476u: goto L_0034F2B0;
    case 477u: goto L_0034F2C8;
    case 478u: goto L_0034F2D4;
    case 479u: goto L_0034F2E0;
    case 480u: goto L_0034F2F0;
    case 481u: goto L_0034F314;
    case 482u: goto L_0034F324;
    case 483u: goto L_0034F348;
    case 484u: goto L_0034F358;
    case 485u: goto L_0034F368;
    case 486u: goto L_0034F378;
    case 487u: goto L_0034F398;
    case 488u: goto L_0034F3B0;
    case 489u: goto L_0034F3D0;
    case 490u: goto L_0034F3E0;
    case 491u: goto L_0034F3F8;
    case 492u: goto L_0034F40C;
    case 493u: goto L_0034F418;
    case 494u: goto L_0034F424;
    case 495u: goto L_0034F430;
    case 496u: goto L_0034F464;
    case 497u: goto L_0034F474;
    case 498u: goto L_0034F494;
    case 499u: goto L_0034F4A8;
    case 500u: goto L_0034F4B4;
    case 501u: goto L_0034F4D0;
    case 502u: goto L_0034F4E0;
    case 503u: goto L_0034F4F0;
    case 504u: goto L_0034F500;
    case 505u: goto L_0034F50C;
    case 506u: goto L_0034F520;
    case 507u: goto L_0034F548;
    case 508u: goto L_0034F560;
    case 509u: goto L_0034F5A0;
    case 510u: goto L_0034F5C8;
    case 511u: goto L_0034F5DC;
    case 512u: goto L_0034F5F4;
    case 513u: goto L_0034F610;
    case 514u: goto L_0034F620;
    case 515u: goto L_0034F64C;
    case 516u: goto L_0034F664;
    case 517u: goto L_0034F66C;
    case 518u: goto L_0034F680;
    case 519u: goto L_0034F68C;
    case 520u: goto L_0034F698;
    case 521u: goto L_0034F6C0;
    case 522u: goto L_0034F6DC;
    case 523u: goto L_0034F6EC;
    case 524u: goto L_0034F6FC;
    case 525u: goto L_0034F710;
    case 526u: goto L_0034F734;
    case 527u: goto L_0034F74C;
    case 528u: goto L_0034F790;
    case 529u: goto L_0034F7D0;
    case 530u: goto L_0034F7E0;
    case 531u: goto L_0034F800;
    case 532u: goto L_0034F808;
    case 533u: goto L_0034F820;
    case 534u: goto L_0034F844;
    case 535u: goto L_0034F85C;
    case 536u: goto L_0034F868;
    case 537u: goto L_0034F874;
    case 538u: goto L_0034F890;
    case 539u: goto L_0034F8A8;
    case 540u: goto L_0034F8B8;
    case 541u: goto L_0034F8C8;
    case 542u: goto L_0034F8D8;
    case 543u: goto L_0034F8E8;
    case 544u: goto L_0034F8F8;
    case 545u: goto L_0034F908;
    case 546u: goto L_0034F920;
    case 547u: goto L_0034F944;
    case 548u: goto L_0034F95C;
    case 549u: goto L_0034F9A0;
    case 550u: goto L_0034F9E0;
    case 551u: goto L_0034FA00;
    case 552u: goto L_0034FA08;
    case 553u: goto L_0034FA20;
    case 554u: goto L_0034FA44;
    case 555u: goto L_0034FA5C;
    case 556u: goto L_0034FA68;
    case 557u: goto L_0034FA74;
    case 558u: goto L_0034FA90;
    case 559u: goto L_0034FAAC;
    case 560u: goto L_0034FABC;
    case 561u: goto L_0034FACC;
    case 562u: goto L_0034FADC;
    case 563u: goto L_0034FAF0;
    case 564u: goto L_0034FB0C;
    case 565u: goto L_0034FB1C;
    case 566u: goto L_0034FB28;
    case 567u: goto L_0034FB40;
    case 568u: goto L_0034FB58;
    case 569u: goto L_0034FB64;
    case 570u: goto L_0034FB70;
    case 571u: goto L_0034FB80;
    case 572u: goto L_0034FB90;
    case 573u: goto L_0034FBB4;
    case 574u: goto L_0034FBCC;
    case 575u: goto L_0034FC10;
    case 576u: goto L_0034FC34;
    case 577u: goto L_0034FC48;
    case 578u: goto L_0034FC54;
    case 579u: goto L_0034FC60;
    case 580u: goto L_0034FC80;
    case 581u: goto L_0034FC90;
    case 582u: goto L_0034FCA8;
    case 583u: goto L_0034FCB4;
    case 584u: goto L_0034FCC0;
    case 585u: goto L_0034FCD0;
    case 586u: goto L_0034FD00;
    case 587u: goto L_0034FD08;
    case 588u: goto L_0034FD50;
    case 589u: goto L_0034FD90;
    case 590u: goto L_0034FDAC;
    case 591u: goto L_0034FDB4;
    case 592u: goto L_0034FDC8;
    case 593u: goto L_0034FDE0;
    case 594u: goto L_0034FDF0;
    case 595u: goto L_0034FE20;
    case 596u: goto L_0034FE54;
    case 597u: goto L_0034FE5C;
    case 598u: goto L_0034FE74;
    case 599u: goto L_0034FE90;
    case 600u: goto L_0034FEE8;
    case 601u: goto L_0034FF14;
    case 602u: goto L_0034FF40;
    case 603u: goto L_0034FF68;
    case 604u: goto L_0034FF6C;
    case 605u: goto L_0034FF98;
    case 606u: goto L_0034FFC4;
    case 607u: goto L_0034FFF0;
    default: bad_entry(c, 0x0034C000u); return;
    }
L_0034C000:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0034C020:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    set32(c.r[5], 0u + 94u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C04Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034C04Cu) [[unlikely]] return; }
L_0034C04C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C060u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 199u, depth + 1u); else { c.pc = 0x00345DF0u; return; } if (c.pc != 0x0034C060u) [[unlikely]] return; }
L_0034C060:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C070u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 198u, depth + 1u); else { c.pc = 0x00345DC0u; return; } if (c.pc != 0x0034C070u) [[unlikely]] return; }
L_0034C070:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C07Cu); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x0034C07Cu) [[unlikely]] return; }
L_0034C07C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C088u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x0034C088u) [[unlikely]] return; }
L_0034C088:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0034C0B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 6848u);
    set32(c.r[5], 0u + 100u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C0E4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034C0E4u) [[unlikely]] return; }
L_0034C0E4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C0F8u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 199u, depth + 1u); else { c.pc = 0x00345DF0u; return; } if (c.pc != 0x0034C0F8u) [[unlikely]] return; }
L_0034C0F8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C108u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 198u, depth + 1u); else { c.pc = 0x00345DC0u; return; } if (c.pc != 0x0034C108u) [[unlikely]] return; }
L_0034C108:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C118u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 198u, depth + 1u); else { c.pc = 0x00345DC0u; return; } if (c.pc != 0x0034C118u) [[unlikely]] return; }
L_0034C118:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C124u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x0034C124u) [[unlikely]] return; }
L_0034C124:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C130u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x0034C130u) [[unlikely]] return; }
L_0034C130:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0034C150:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 6848u);
    set32(c.r[5], 0u + 102u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C184u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034C184u) [[unlikely]] return; }
L_0034C184:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C198u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 199u, depth + 1u); else { c.pc = 0x00345DF0u; return; } if (c.pc != 0x0034C198u) [[unlikely]] return; }
L_0034C198:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C1A8u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 198u, depth + 1u); else { c.pc = 0x00345DC0u; return; } if (c.pc != 0x0034C1A8u) [[unlikely]] return; }
L_0034C1A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C1B8u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 198u, depth + 1u); else { c.pc = 0x00345DC0u; return; } if (c.pc != 0x0034C1B8u) [[unlikely]] return; }
L_0034C1B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C1C4u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x0034C1C4u) [[unlikely]] return; }
L_0034C1C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C1D0u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x0034C1D0u) [[unlikely]] return; }
L_0034C1D0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0034C1F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034C200:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { set32(c.r[5], c.r[5].w[0] + 6064u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003458D0u | kUnwind; return; } [[clang::musttail]] return unit_0091(c, 161u, depth); }
L_0034C210:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C22Cu); set32(c.r[5], c.r[5].w[0] + 6064u);  if (depth < kMaxDepth) unit_0091(c, 161u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x0034C22Cu) [[unlikely]] return; }
L_0034C22C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C238u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 163u, depth + 1u); else { c.pc = 0x00345920u; return; } if (c.pc != 0x0034C238u) [[unlikely]] return; }
L_0034C238:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034C250:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C27Cu); set32(c.r[5], c.r[5].w[0] + 6064u);  if (depth < kMaxDepth) unit_0091(c, 161u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x0034C27Cu) [[unlikely]] return; }
L_0034C27C:
    c.r[16].d[0] = c.r[16].d[0] & 65535ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].d[0] = 0ll < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0034C2B0; } }
L_0034C290:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C298u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 161u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x0034C298u) [[unlikely]] return; }
L_0034C298:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034C290u | kUnwind; return; } goto L_0034C290; } }
    c.budget -= 1;
L_0034C2B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0034C2D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C2ECu); set32(c.r[5], c.r[5].w[0] + 6064u);  if (depth < kMaxDepth) unit_0091(c, 161u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x0034C2ECu) [[unlikely]] return; }
L_0034C2EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C2F8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 160u, depth + 1u); else { c.pc = 0x003458C0u; return; } if (c.pc != 0x0034C2F8u) [[unlikely]] return; }
L_0034C2F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034C310:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C32Cu); set32(c.r[5], c.r[5].w[0] + 6064u);  if (depth < kMaxDepth) unit_0091(c, 161u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x0034C32Cu) [[unlikely]] return; }
L_0034C32C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C338u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 163u, depth + 1u); else { c.pc = 0x00345920u; return; } if (c.pc != 0x0034C338u) [[unlikely]] return; }
L_0034C338:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034C350:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C374u); set32(c.r[5], c.r[5].w[0] + 6064u);  if (depth < kMaxDepth) unit_0091(c, 160u, depth + 1u); else { c.pc = 0x003458C0u; return; } if (c.pc != 0x0034C374u) [[unlikely]] return; }
L_0034C374:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C380u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 160u, depth + 1u); else { c.pc = 0x003458C0u; return; } if (c.pc != 0x0034C380u) [[unlikely]] return; }
L_0034C380:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034C3A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 84u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C3C4u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034C3C4u) [[unlikely]] return; }
L_0034C3C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C3D8u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 199u, depth + 1u); else { c.pc = 0x00345DF0u; return; } if (c.pc != 0x0034C3D8u) [[unlikely]] return; }
L_0034C3D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C3E4u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x0034C3E4u) [[unlikely]] return; }
L_0034C3E4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C3F0u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x0034C3F0u) [[unlikely]] return; }
L_0034C3F0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034C410:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 104u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C434u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034C434u) [[unlikely]] return; }
L_0034C434:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C440u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0034C440u) [[unlikely]] return; }
L_0034C440:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C454u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 203u, depth + 1u); else { c.pc = 0x00345ED0u; return; } if (c.pc != 0x0034C454u) [[unlikely]] return; }
L_0034C454:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C460u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x0034C460u) [[unlikely]] return; }
L_0034C460:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C46Cu); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x0034C46Cu) [[unlikely]] return; }
L_0034C46C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034C490:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 106u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C4B4u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034C4B4u) [[unlikely]] return; }
L_0034C4B4:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C4C0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0034C4C0u) [[unlikely]] return; }
L_0034C4C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C4D4u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 203u, depth + 1u); else { c.pc = 0x00345ED0u; return; } if (c.pc != 0x0034C4D4u) [[unlikely]] return; }
L_0034C4D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C4E0u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x0034C4E0u) [[unlikely]] return; }
L_0034C4E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C4ECu); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x0034C4ECu) [[unlikely]] return; }
L_0034C4EC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034C510:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    set32(c.r[5], 0u + 108u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C53Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034C53Cu) [[unlikely]] return; }
L_0034C53C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C550u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 198u, depth + 1u); else { c.pc = 0x00345DC0u; return; } if (c.pc != 0x0034C550u) [[unlikely]] return; }
L_0034C550:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C560u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 198u, depth + 1u); else { c.pc = 0x00345DC0u; return; } if (c.pc != 0x0034C560u) [[unlikely]] return; }
L_0034C560:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C56Cu); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x0034C56Cu) [[unlikely]] return; }
L_0034C56C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C578u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x0034C578u) [[unlikely]] return; }
L_0034C578:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0034C5A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    set32(c.r[5], 0u + 110u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C5BCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034C5BCu) [[unlikely]] return; }
L_0034C5BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C5CCu); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x0034C5CCu) [[unlikely]] return; }
L_0034C5CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C5D8u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x0034C5D8u) [[unlikely]] return; }
L_0034C5D8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034C5F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C614u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0091(c, 96u, depth + 1u); else { c.pc = 0x00344F90u; return; } if (c.pc != 0x0034C614u) [[unlikely]] return; }
L_0034C614:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0034C650; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C62Cu);  if (depth < kMaxDepth) unit_0093(c, 70u, depth + 1u); else { c.pc = 0x0034C670u; return; } if (c.pc != 0x0034C62Cu) [[unlikely]] return; }
L_0034C62C:
    set32(c.r[4], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16544u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0034C650; } }
L_0034C650:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034C670:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 210u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C694u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034C694u) [[unlikely]] return; }
L_0034C694:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C6A8u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 198u, depth + 1u); else { c.pc = 0x00345DC0u; return; } if (c.pc != 0x0034C6A8u) [[unlikely]] return; }
L_0034C6A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C6B4u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x0034C6B4u) [[unlikely]] return; }
L_0034C6B4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C6C0u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x0034C6C0u) [[unlikely]] return; }
L_0034C6C0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034C6E0:
    c.budget -= 2;
    { c.r[4].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00344EC0u | kUnwind; return; } [[clang::musttail]] return unit_0091(c, 90u, depth); }
L_0034C6F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C714u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0091(c, 96u, depth + 1u); else { c.pc = 0x00344F90u; return; } if (c.pc != 0x0034C714u) [[unlikely]] return; }
L_0034C714:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0034C750; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C72Cu);  if (depth < kMaxDepth) unit_0093(c, 80u, depth + 1u); else { c.pc = 0x0034C7A0u; return; } if (c.pc != 0x0034C72Cu) [[unlikely]] return; }
L_0034C72C:
    set32(c.r[4], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16544u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0034C750; } }
L_0034C750:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034C770:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 29014u));
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 29016u));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld16((c.r[1].w[0] + 29012u));  c.pc = t; return; }
L_0034C7A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 212u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C7C4u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034C7C4u) [[unlikely]] return; }
L_0034C7C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C7D8u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 199u, depth + 1u); else { c.pc = 0x00345DF0u; return; } if (c.pc != 0x0034C7D8u) [[unlikely]] return; }
L_0034C7D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C7E4u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x0034C7E4u) [[unlikely]] return; }
L_0034C7E4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C7F0u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x0034C7F0u) [[unlikely]] return; }
L_0034C7F0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034C810:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00CC0000u);  if (t) { goto L_0034C858; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] + 29012u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C838u); set32(c.r[5], c.r[5].w[0] + 6064u);  if (depth < kMaxDepth) unit_0091(c, 161u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x0034C838u) [[unlikely]] return; }
L_0034C838:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C848u); set32(c.r[4], c.r[4].w[0] + 29014u);  if (depth < kMaxDepth) unit_0091(c, 161u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x0034C848u) [[unlikely]] return; }
L_0034C848:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C858u); set32(c.r[4], c.r[4].w[0] + 29016u);  if (depth < kMaxDepth) unit_0091(c, 161u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x0034C858u) [[unlikely]] return; }
L_0034C858:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C860u); set32(c.r[4], 0u + 34u);  if (depth < kMaxDepth) unit_0091(c, 90u, depth + 1u); else { c.pc = 0x00344EC0u; return; } if (c.pc != 0x0034C860u) [[unlikely]] return; }
L_0034C860:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034C870:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C88Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0091(c, 96u, depth + 1u); else { c.pc = 0x00344F90u; return; } if (c.pc != 0x0034C88Cu) [[unlikely]] return; }
L_0034C88C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0034C8C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C8A4u);  if (depth < kMaxDepth) unit_0093(c, 93u, depth + 1u); else { c.pc = 0x0034C8E0u; return; } if (c.pc != 0x0034C8A4u) [[unlikely]] return; }
L_0034C8A4:
    set32(c.r[4], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16544u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0034C8C8; } }
L_0034C8C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034C8E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    set32(c.r[5], 0u + 215u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C8FCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034C8FCu) [[unlikely]] return; }
L_0034C8FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C90Cu); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x0034C90Cu) [[unlikely]] return; }
L_0034C90C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C918u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x0034C918u) [[unlikely]] return; }
L_0034C918:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034C930:
    c.budget -= 2;
    { c.r[4].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00344EC0u | kUnwind; return; } [[clang::musttail]] return unit_0091(c, 90u, depth); }
L_0034C940:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C95Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0091(c, 96u, depth + 1u); else { c.pc = 0x00344F90u; return; } if (c.pc != 0x0034C95Cu) [[unlikely]] return; }
L_0034C95C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0034C998; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C974u);  if (depth < kMaxDepth) unit_0093(c, 101u, depth + 1u); else { c.pc = 0x0034C9B0u; return; } if (c.pc != 0x0034C974u) [[unlikely]] return; }
L_0034C974:
    set32(c.r[4], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16544u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0034C998; } }
L_0034C998:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034C9B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    set32(c.r[5], 0u + 217u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C9CCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034C9CCu) [[unlikely]] return; }
L_0034C9CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C9DCu); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x0034C9DCu) [[unlikely]] return; }
L_0034C9DC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C9E8u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x0034C9E8u) [[unlikely]] return; }
L_0034C9E8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034CA00:
    c.budget -= 2;
    { c.r[4].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00344EC0u | kUnwind; return; } [[clang::musttail]] return unit_0091(c, 90u, depth); }
L_0034CA10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CA2Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0091(c, 96u, depth + 1u); else { c.pc = 0x00344F90u; return; } if (c.pc != 0x0034CA2Cu) [[unlikely]] return; }
L_0034CA2C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0034CA68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CA44u);  if (depth < kMaxDepth) unit_0093(c, 110u, depth + 1u); else { c.pc = 0x0034CAA0u; return; } if (c.pc != 0x0034CA44u) [[unlikely]] return; }
L_0034CA44:
    set32(c.r[4], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16544u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0034CA68; } }
L_0034CA68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034CA80:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = ld16((c.r[1].w[0] + 29026u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0034CAA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    set32(c.r[5], 0u + 219u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CABCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034CABCu) [[unlikely]] return; }
L_0034CABC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CACCu); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x0034CACCu) [[unlikely]] return; }
L_0034CACC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CAD8u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x0034CAD8u) [[unlikely]] return; }
L_0034CAD8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034CAF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00CC0000u);  if (t) { goto L_0034CB10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CB10u); set32(c.r[4], c.r[4].w[0] + 29026u);  if (depth < kMaxDepth) unit_0091(c, 173u, depth + 1u); else { c.pc = 0x00345A90u; return; } if (c.pc != 0x0034CB10u) [[unlikely]] return; }
L_0034CB10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CB18u); set32(c.r[4], 0u + 35u);  if (depth < kMaxDepth) unit_0091(c, 90u, depth + 1u); else { c.pc = 0x00344EC0u; return; } if (c.pc != 0x0034CB18u) [[unlikely]] return; }
L_0034CB18:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034CB30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034CB50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CB50u);  if (depth < kMaxDepth) unit_0093(c, 120u, depth + 1u); else { c.pc = 0x0034CB70u; return; } if (c.pc != 0x0034CB50u) [[unlikely]] return; }
L_0034CB50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CB58u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 90u, depth + 1u); else { c.pc = 0x00344EC0u; return; } if (c.pc != 0x0034CB58u) [[unlikely]] return; }
L_0034CB58:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034CB70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 29029u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CB8Cu); set32(c.r[6], 0u + 360u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0034CB8Cu) [[unlikely]] return; }
L_0034CB8C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    set32(c.r[4], c.r[4].w[0] + 29028u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CBA0u); set32(c.r[5], c.r[5].w[0] + 29029u);  if (depth < kMaxDepth) unit_0093(c, 131u, depth + 1u); else { c.pc = 0x0034CC50u; return; } if (c.pc != 0x0034CBA0u) [[unlikely]] return; }
L_0034CBA0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034CBB0:
    c.budget -= 2;
    { set32(c.r[4], 0u + 5u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003486C0u | kUnwind; return; } [[clang::musttail]] return unit_0092(c, 51u, depth); }
L_0034CBC0:
    c.budget -= 2;
    { set32(c.r[4], 0u + 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003486C0u | kUnwind; return; } [[clang::musttail]] return unit_0092(c, 51u, depth); }
L_0034CBD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034CBF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CBF0u);  if (depth < kMaxDepth) unit_0093(c, 128u, depth + 1u); else { c.pc = 0x0034CC10u; return; } if (c.pc != 0x0034CBF0u) [[unlikely]] return; }
L_0034CBF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CBF8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 90u, depth + 1u); else { c.pc = 0x00344EC0u; return; } if (c.pc != 0x0034CBF8u) [[unlikely]] return; }
L_0034CBF8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034CC10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 28202u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CC2Cu); set32(c.r[6], 0u + 360u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0034CC2Cu) [[unlikely]] return; }
L_0034CC2C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    set32(c.r[4], c.r[4].w[0] + 28200u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CC40u); set32(c.r[5], c.r[5].w[0] + 28202u);  if (depth < kMaxDepth) unit_0093(c, 131u, depth + 1u); else { c.pc = 0x0034CC50u; return; } if (c.pc != 0x0034CC40u) [[unlikely]] return; }
L_0034CC40:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034CC50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 6064u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CC7Cu); set32(c.r[4], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_0091(c, 161u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x0034CC7Cu) [[unlikely]] return; }
L_0034CC7C:
    set32(c.r[4], c.r[29].w[0] + 79u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CC88u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 160u, depth + 1u); else { c.pc = 0x003458C0u; return; } if (c.pc != 0x0034CC88u) [[unlikely]] return; }
L_0034CC88:
    set32(c.r[4], c.r[29].w[0] + 78u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CC94u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 160u, depth + 1u); else { c.pc = 0x003458C0u; return; } if (c.pc != 0x0034CC94u) [[unlikely]] return; }
L_0034CC94:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 78u));
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0034CCB0; } }
    set32(c.r[3], 0u + 4u);
    st8((c.r[29].w[0] + 78u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0034CCB0:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 78u));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 78u));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0034CD58; } }
L_0034CCC8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CCD4u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0091(c, 167u, depth + 1u); else { c.pc = 0x003459D0u; return; } if (c.pc != 0x0034CCD4u) [[unlikely]] return; }
L_0034CCD4:
    set32(c.r[4], c.r[18].w[0] + 8u);
    set32(c.r[5], 0u + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CCE4u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 167u, depth + 1u); else { c.pc = 0x003459D0u; return; } if (c.pc != 0x0034CCE4u) [[unlikely]] return; }
L_0034CCE4:
    set32(c.r[4], c.r[18].w[0] + 25u);
    set32(c.r[5], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CCF4u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 167u, depth + 1u); else { c.pc = 0x003459D0u; return; } if (c.pc != 0x0034CCF4u) [[unlikely]] return; }
L_0034CCF4:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 79u));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 90u);  if (t) { goto L_0034CD40; } }
    set32(c.r[3], c.r[3].w[0] - 3u);
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0034CD40; } }
L_0034CD18:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CD24u); set32(c.r[4], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_0091(c, 161u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x0034CD24u) [[unlikely]] return; }
L_0034CD24:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 79u));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[4].d[0] = ld16((c.r[29].w[0] + 76u));
    set32(c.r[3], c.r[3].w[0] - 3u);
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[2].w[0] + c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034CD18u | kUnwind; return; } goto L_0034CD18; } }
L_0034CD40:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 78u));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034CCC8u | kUnwind; return; } goto L_0034CCC8; } }
    c.budget -= 1;
L_0034CD58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0034CD70:
    c.budget -= 2;
    { set32(c.r[4], 0u + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003486C0u | kUnwind; return; } [[clang::musttail]] return unit_0092(c, 51u, depth); }
L_0034CD80:
    c.budget -= 2;
    { c.r[4].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003486C0u | kUnwind; return; } [[clang::musttail]] return unit_0092(c, 51u, depth); }
L_0034CD90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CDB4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0091(c, 96u, depth + 1u); else { c.pc = 0x00344F90u; return; } if (c.pc != 0x0034CDB4u) [[unlikely]] return; }
L_0034CDB4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0034CDF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CDCCu);  if (depth < kMaxDepth) unit_0093(c, 156u, depth + 1u); else { c.pc = 0x0034CFD0u; return; } if (c.pc != 0x0034CDCCu) [[unlikely]] return; }
L_0034CDCC:
    set32(c.r[4], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16544u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0034CDF0; } }
L_0034CDF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034CE10:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[7].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_0034CE58; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    set32(c.r[4], c.r[7].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] - 21188u);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] - 21186u);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 16;
L_0034CE58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0034CE60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_0034CF28; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CE84u); set32(c.r[5], c.r[5].w[0] + 6064u);  if (depth < kMaxDepth) unit_0091(c, 161u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x0034CE84u) [[unlikely]] return; }
L_0034CE84:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 30u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 16512u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CEB8u); set32(c.r[4], c.r[2].w[0] + 28188u);  if (depth < kMaxDepth) unit_0091(c, 161u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x0034CEB8u) [[unlikely]] return; }
L_0034CEB8:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 30u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], c.r[2].w[0] + 16512u);
    set32(c.r[4], c.r[3].w[0] - 1u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CEECu); set32(c.r[4], c.r[2].w[0] + 28190u);  if (depth < kMaxDepth) unit_0091(c, 161u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x0034CEECu) [[unlikely]] return; }
L_0034CEEC:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 30u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    set32(c.r[2], c.r[2].w[0] - 21180u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    st16((c.r[1].w[0] - 10292u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 15;
L_0034CF28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CF30u); set32(c.r[4], 0u + 33u);  if (depth < kMaxDepth) unit_0091(c, 90u, depth + 1u); else { c.pc = 0x00344EC0u; return; } if (c.pc != 0x0034CF30u) [[unlikely]] return; }
L_0034CF30:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034CF40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);  if (t) { goto L_0034CFB0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[16].d[0] = ld8((c.r[1].w[0] - 32124u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[2], c.r[2].w[0] + 16512u);
    set32(c.r[5], c.r[5].w[0] + 6064u);
    set32(c.r[4], c.r[16].w[0] - 1u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CF98u); set32(c.r[4], c.r[17].w[0] + 28188u);  if (depth < kMaxDepth) unit_0091(c, 161u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x0034CF98u) [[unlikely]] return; }
L_0034CF98:
    set32(c.r[4], c.r[17].w[0] + 28190u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CFA4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 161u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x0034CFA4u) [[unlikely]] return; }
L_0034CFA4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    st16((c.r[1].w[0] - 10292u), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.budget -= 3;
L_0034CFB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CFB8u); set32(c.r[4], 0u + 33u);  if (depth < kMaxDepth) unit_0091(c, 90u, depth + 1u); else { c.pc = 0x00344EC0u; return; } if (c.pc != 0x0034CFB8u) [[unlikely]] return; }
L_0034CFB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034CFD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 160u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CFF4u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034CFF4u) [[unlikely]] return; }
L_0034CFF4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D008u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 199u, depth + 1u); else { c.pc = 0x00345DF0u; return; } if (c.pc != 0x0034D008u) [[unlikely]] return; }
L_0034D008:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D014u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x0034D014u) [[unlikely]] return; }
L_0034D014:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D020u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x0034D020u) [[unlikely]] return; }
L_0034D020:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034D040:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D064u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0091(c, 96u, depth + 1u); else { c.pc = 0x00344F90u; return; } if (c.pc != 0x0034D064u) [[unlikely]] return; }
L_0034D064:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0034D0A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D07Cu);  if (depth < kMaxDepth) unit_0093(c, 180u, depth + 1u); else { c.pc = 0x0034D290u; return; } if (c.pc != 0x0034D07Cu) [[unlikely]] return; }
L_0034D07C:
    set32(c.r[4], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16544u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0034D0A0; } }
L_0034D0A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034D0C0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_0034D1C0; } }
    set32(c.r[4], c.r[29].w[0] + 108u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D0F8u); set32(c.r[5], c.r[5].w[0] + 6064u);  if (depth < kMaxDepth) unit_0091(c, 161u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x0034D0F8u) [[unlikely]] return; }
L_0034D0F8:
    set32(c.r[4], c.r[29].w[0] + 111u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D104u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 160u, depth + 1u); else { c.pc = 0x003458C0u; return; } if (c.pc != 0x0034D104u) [[unlikely]] return; }
L_0034D104:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[29].w[0] + 111u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034D1C0; } }
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0034D1C0; } }
    c.budget -= 1;
L_0034D128:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D138u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0034D138u) [[unlikely]] return; }
L_0034D138:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D148u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0091(c, 167u, depth + 1u); else { c.pc = 0x003459D0u; return; } if (c.pc != 0x0034D148u) [[unlikely]] return; }
L_0034D148:
    set32(c.r[4], c.r[29].w[0] + 110u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D154u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 160u, depth + 1u); else { c.pc = 0x003458C0u; return; } if (c.pc != 0x0034D154u) [[unlikely]] return; }
L_0034D154:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[18].w[0] + 16512u);
    set32(c.r[17], c.r[17].w[0] + 28651u);
    c.budget -= 7;
L_0034D170:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[1].d[0] = c.r[1].d[0] | 12050ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[18].w[0] + c.r[1].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D188u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0006(c, 189u, depth + 1u); else { c.pc = 0x0011A900u; return; } if (c.pc != 0x0034D188u) [[unlikely]] return; }
L_0034D188:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034D198; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 110u));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0034D198:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 90u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 90u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034D170u | kUnwind; return; } goto L_0034D170; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 111u));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034D128u | kUnwind; return; } goto L_0034D128; } }
L_0034D1C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D1C8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 90u, depth + 1u); else { c.pc = 0x00344EC0u; return; } if (c.pc != 0x0034D1C8u) [[unlikely]] return; }
L_0034D1C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0034D1F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00CC0000u);  if (t) { goto L_0034D270; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28922u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D21Cu); set32(c.r[6], 0u + 90u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0034D21Cu) [[unlikely]] return; }
L_0034D21C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[29].w[0] + 46u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D22Cu); set32(c.r[5], c.r[5].w[0] + 6064u);  if (depth < kMaxDepth) unit_0091(c, 161u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x0034D22Cu) [[unlikely]] return; }
L_0034D22C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[4].d[0] = ld16((c.r[29].w[0] + 46u));
    c.r[3].d[0] = ld8((c.r[1].w[0] - 32124u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0034D278; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] + 28562u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    st8((c.r[1].w[0] + 28201u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D260u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0091(c, 167u, depth + 1u); else { c.pc = 0x003459D0u; return; } if (c.pc != 0x0034D260u) [[unlikely]] return; }
L_0034D260:
    set32(c.r[4], c.r[16].w[0] + 89u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D26Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 160u, depth + 1u); else { c.pc = 0x003458C0u; return; } if (c.pc != 0x0034D26Cu) [[unlikely]] return; }
L_0034D26C:
    c.budget -= 1;
L_0034D270:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D278u); set32(c.r[4], 0u + 40u);  if (depth < kMaxDepth) unit_0091(c, 90u, depth + 1u); else { c.pc = 0x00344EC0u; return; } if (c.pc != 0x0034D278u) [[unlikely]] return; }
L_0034D278:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034D290:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 144u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D2B4u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034D2B4u) [[unlikely]] return; }
L_0034D2B4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D2C8u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 199u, depth + 1u); else { c.pc = 0x00345DF0u; return; } if (c.pc != 0x0034D2C8u) [[unlikely]] return; }
L_0034D2C8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D2D4u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x0034D2D4u) [[unlikely]] return; }
L_0034D2D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D2E0u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x0034D2E0u) [[unlikely]] return; }
L_0034D2E0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034D300:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 16524u), 0u);
    set32(c.r[4], c.r[4].w[0] + 16536u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3584u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D32Cu); st32((c.r[1].w[0] + 16512u), 0u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0034D32Cu) [[unlikely]] return; }
L_0034D32C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 20120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D340u); set32(c.r[6], 0u + 440u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0034D340u) [[unlikely]] return; }
L_0034D340:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 32126u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D354u); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0034D354u) [[unlikely]] return; }
L_0034D354:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 24708u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D368u); set32(c.r[6], 0u + 48u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0034D368u) [[unlikely]] return; }
L_0034D368:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034D380:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 15u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 6;
L_0034D398:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034D398u | kUnwind; return; } goto L_0034D398; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 20128u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);  if (t) { goto L_0034D4B0; } }
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 23944u);
    set32(c.r[3], 0u + 15u);
    c.budget -= 3;
L_0034D3D0:
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034D3D0u | kUnwind; return; } goto L_0034D3D0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] + 16516u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] + 24004u);
    st32((c.r[1].w[0] + 16512u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[6], 0u + 89u);
    st8((c.r[1].w[0] + 20668u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D424u); st16((c.r[1].w[0] + 20666u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0034D424u) [[unlikely]] return; }
L_0034D424:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 24757u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D438u); set32(c.r[6], 0u + 356u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0034D438u) [[unlikely]] return; }
L_0034D438:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 20604u), 0u);
    set32(c.r[2], 0u + 4096u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] + 29300u);
    st32((c.r[1].w[0] + 20608u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], c.r[2].w[0] - 5976u);
    set32(c.r[6], 0u + 4100u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D470u); st32((c.r[1].w[0] + 20612u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0034D470u) [[unlikely]] return; }
L_0034D470:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 5976u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D484u); set32(c.r[6], 0u + 8192u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0034D484u) [[unlikely]] return; }
L_0034D484:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[1].w[0] + 20124u), c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] + 20128u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[1].w[0] + 20129u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 20120u), 0u);  if (t) { goto L_0034D4B8; } }
L_0034D4B0:
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_0034D4B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0034D4D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] + 24004u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D504u); set32(c.r[6], 0u + 89u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0034D504u) [[unlikely]] return; }
L_0034D504:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D50Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0034D50Cu) [[unlikely]] return; }
L_0034D50C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 24012u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D520u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x0034D520u) [[unlikely]] return; }
L_0034D520:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 24029u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D534u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0034D534u) [[unlikely]] return; }
L_0034D534:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 25113u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0034D5E8; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);  if (t) { goto L_0034D580; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 25024u);
    set32(c.r[5], c.r[5].w[0] + 5608u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D564u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x0034D564u) [[unlikely]] return; }
L_0034D564:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 24004u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D578u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0034D578u) [[unlikely]] return; }
L_0034D578:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034D5A8; } }
L_0034D580:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] + 25024u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D594u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x0034D594u) [[unlikely]] return; }
L_0034D594:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 24004u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D5A8u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x0034D5A8u) [[unlikely]] return; }
L_0034D5A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D5B0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0034D5B0u) [[unlikely]] return; }
L_0034D5B0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 25032u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D5C8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x0034D5C8u) [[unlikely]] return; }
L_0034D5C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], c.r[2].w[0] + 25032u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D5DCu); st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0093(c, 453u, depth + 1u); else { c.pc = 0x0034F100u; return; } if (c.pc != 0x0034D5DCu) [[unlikely]] return; }
L_0034D5DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034D5F0; } }
    c.budget -= 1;
L_0034D5E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D5F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0093(c, 261u, depth + 1u); else { c.pc = 0x0034DC00u; return; } if (c.pc != 0x0034D5F0u) [[unlikely]] return; }
L_0034D5F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0034D610:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[5], 0u + 9u);
    set32(c.r[6], c.r[6].w[0] + 24094u);
    c.budget -= 4;
L_0034D620:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 2u)));
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 4u);
    st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034D620u | kUnwind; return; } goto L_0034D620; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0034D650:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[1].w[0] + 24756u));  c.pc = t; return; }
L_0034D660:
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[3], 0u + 89u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], c.r[2].w[0] + 16512u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D68Cu); set32(c.r[5], c.r[2].w[0] + 8245u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0034D68Cu) [[unlikely]] return; }
L_0034D68C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034D6A0:
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[3], 0u + 89u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], c.r[2].w[0] + 16512u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D6CCu); set32(c.r[5], c.r[2].w[0] + 8253u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0034D6CCu) [[unlikely]] return; }
L_0034D6CC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034D6E0:
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[3], 0u + 89u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], c.r[2].w[0] + 16512u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], 0u + 64u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D710u); set32(c.r[5], c.r[2].w[0] + 8270u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0034D710u) [[unlikely]] return; }
L_0034D710:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034D720:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D734u); set32(c.r[5], c.r[5].w[0] + 25024u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0034D734u) [[unlikely]] return; }
L_0034D734:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034D750:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D764u); set32(c.r[5], c.r[5].w[0] + 25032u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0034D764u) [[unlikely]] return; }
L_0034D764:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034D780:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] + 25049u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D798u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0034D798u) [[unlikely]] return; }
L_0034D798:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034D7B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 20584u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D7CCu); set32(c.r[5], c.r[5].w[0] + 6064u);  if (depth < kMaxDepth) unit_0091(c, 161u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x0034D7CCu) [[unlikely]] return; }
L_0034D7CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D7D4u);  if (depth < kMaxDepth) unit_0093(c, 428u, depth + 1u); else { c.pc = 0x0034EF30u; return; } if (c.pc != 0x0034D7D4u) [[unlikely]] return; }
L_0034D7D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D7DCu);  if (depth < kMaxDepth) unit_0093(c, 490u, depth + 1u); else { c.pc = 0x0034F3E0u; return; } if (c.pc != 0x0034D7DCu) [[unlikely]] return; }
L_0034D7DC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034D7F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 23944u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034D818; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D810u);  if (depth < kMaxDepth) unit_0093(c, 475u, depth + 1u); else { c.pc = 0x0034F290u; return; } if (c.pc != 0x0034D810u) [[unlikely]] return; }
L_0034D810:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034D820; } }
L_0034D818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D820u);  if (depth < kMaxDepth) unit_0093(c, 437u, depth + 1u); else { c.pc = 0x0034EFF0u; return; } if (c.pc != 0x0034D820u) [[unlikely]] return; }
L_0034D820:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034D830:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = ld16((c.r[1].w[0] + 20664u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] << 4);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 20666u));
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 20668u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[1].w[0] + 20666u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] + 20668u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 20668u));
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 21;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0034D898; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D88Cu);  if (depth < kMaxDepth) unit_0093(c, 475u, depth + 1u); else { c.pc = 0x0034F290u; return; } if (c.pc != 0x0034D88Cu) [[unlikely]] return; }
L_0034D88C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034D8B0; } }
    c.budget -= 1;
L_0034D898:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 20666u));
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D8B0u); st16((c.r[1].w[0] + 24122u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0093(c, 437u, depth + 1u); else { c.pc = 0x0034EFF0u; return; } if (c.pc != 0x0034D8B0u) [[unlikely]] return; }
L_0034D8B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034D8C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 20128u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);  if (t) { goto L_0034D938; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 25113u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034D918; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D8ECu);  if (depth < kMaxDepth) unit_0093(c, 480u, depth + 1u); else { c.pc = 0x0034F2F0u; return; } if (c.pc != 0x0034D8ECu) [[unlikely]] return; }
L_0034D8EC:
    set32(c.r[2], 0u + 1u);
    st8((c.r[29].w[0] + 24u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[4].d[0] = ld64((c.r[29].w[0] + 24u));
    set32(c.r[2], ld32((c.r[1].w[0] + 20124u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D90Cu); set32(c.r[5], c.r[29].w[0] + 24u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034D90Cu) [[unlikely]] return; }
L_0034D90C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034D938; } }
    c.budget -= 1;
L_0034D918:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] + 25114u);
    set32(c.r[5], c.r[5].w[0] + 25122u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D934u); set32(c.r[6], c.r[6].w[0] + 25139u);  if (depth < kMaxDepth) unit_0093(c, 197u, depth + 1u); else { c.pc = 0x0034D4D0u; return; } if (c.pc != 0x0034D934u) [[unlikely]] return; }
L_0034D934:
    c.budget -= 1;
L_0034D938:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034D950:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 20128u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);  if (t) { goto L_0034D9E8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0034D9B8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 25113u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0034D9E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D98Cu);  if (depth < kMaxDepth) unit_0093(c, 488u, depth + 1u); else { c.pc = 0x0034F3B0u; return; } if (c.pc != 0x0034D98Cu) [[unlikely]] return; }
L_0034D98C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D998u); set32(c.r[4], c.r[4].w[0] + 25114u);  if (depth < kMaxDepth) unit_0093(c, 219u, depth + 1u); else { c.pc = 0x0034D720u; return; } if (c.pc != 0x0034D998u) [[unlikely]] return; }
L_0034D998:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D9A4u); set32(c.r[4], c.r[4].w[0] + 25122u);  if (depth < kMaxDepth) unit_0093(c, 221u, depth + 1u); else { c.pc = 0x0034D750u; return; } if (c.pc != 0x0034D9A4u) [[unlikely]] return; }
L_0034D9A4:
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 25113u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0034D9E8; } }
    c.budget -= 1;
L_0034D9B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D9C0u);  if (depth < kMaxDepth) unit_0091(c, 169u, depth + 1u); else { c.pc = 0x00345A40u; return; } if (c.pc != 0x0034D9C0u) [[unlikely]] return; }
L_0034D9C0:
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], 0u + 7u);
    st8((c.r[29].w[0] + 24u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[29].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = ld64((c.r[29].w[0] + 24u));
    set32(c.r[2], ld32((c.r[1].w[0] + 20124u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D9E4u); set32(c.r[5], c.r[29].w[0] + 24u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034D9E4u) [[unlikely]] return; }
L_0034D9E4:
    c.budget -= 1;
L_0034D9E8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034DA00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 20128u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);  if (t) { goto L_0034DB30; } }
    set32(c.r[2], ld32((c.r[1].w[0] + 20588u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(768ll);  if (t) { goto L_0034DA38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034DA68; } }
    c.budget -= 1;
L_0034DA38:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 6836u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] << 8);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 6837u));
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 20604u));
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[2], c.r[5].w[0] - c.r[2].w[0]);
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 12;
L_0034DA68:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 20604u)));
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 20608u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] - 1u);  if (t) { goto L_0034DA90; } }
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_0034DA90:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 20612u)));
    c.r[16].d[0] = c.r[5].d[0] & 65535ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 6064u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DAB0u); set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0034DAB0u) [[unlikely]] return; }
L_0034DAB0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], ld32((c.r[1].w[0] + 20604u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[5], c.r[5].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 20588u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[1].w[0] + 20604u), c.r[5].w[0]);  if (t) { goto L_0034DB30; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[16], c.r[16].w[0] + 29300u);
    set32(c.r[5], c.r[5].w[0] - 5976u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DAECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 160u, depth + 1u); else { c.pc = 0x003458C0u; return; } if (c.pc != 0x0034DAECu) [[unlikely]] return; }
L_0034DAEC:
    set32(c.r[4], c.r[16].w[0] + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DAF8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 161u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x0034DAF8u) [[unlikely]] return; }
L_0034DAF8:
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DB04u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 163u, depth + 1u); else { c.pc = 0x00345920u; return; } if (c.pc != 0x0034DB04u) [[unlikely]] return; }
L_0034DB04:
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DB10u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 163u, depth + 1u); else { c.pc = 0x00345920u; return; } if (c.pc != 0x0034DB10u) [[unlikely]] return; }
L_0034DB10:
    set32(c.r[2], 0u + 4u);
    st8((c.r[29].w[0] + 40u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 41u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[4].d[0] = ld64((c.r[29].w[0] + 40u));
    set32(c.r[2], ld32((c.r[1].w[0] + 20124u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DB30u); set32(c.r[5], c.r[29].w[0] + 40u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034DB30u) [[unlikely]] return; }
L_0034DB30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034DB40:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[6], 0u + 1025u);
    set32(c.r[7], c.r[7].w[0] + 29300u);
    c.budget -= 4;
L_0034DB50:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 2u)));
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[7], c.r[7].w[0] + 4u);
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[6].sd[0] > 0; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034DB50u | kUnwind; return; } goto L_0034DB50; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034DB80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DB90u);  if (depth < kMaxDepth) unit_0093(c, 256u, depth + 1u); else { c.pc = 0x0034DBA0u; return; } if (c.pc != 0x0034DB90u) [[unlikely]] return; }
L_0034DB90:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034DBA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 20u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DBC0u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034DBC0u) [[unlikely]] return; }
L_0034DBC0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DBD0u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 198u, depth + 1u); else { c.pc = 0x00345DC0u; return; } if (c.pc != 0x0034DBD0u) [[unlikely]] return; }
L_0034DBD0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DBDCu); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x0034DBDCu) [[unlikely]] return; }
L_0034DBDC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DBE8u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x0034DBE8u) [[unlikely]] return; }
L_0034DBE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034DC00:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 24004u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0034DC40; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 24756u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034DC48; } }
    c.budget -= 1;
L_0034DC40:
    set32(c.r[16], 0u + 1u);
    c.budget -= 2;
L_0034DC48:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 24756u));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0034DCB8; } }
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[19], c.r[19].w[0] + 16512u);
    c.budget -= 3;
L_0034DC68:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[19].w[0] + 8245u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DC78u); set32(c.r[5], c.r[5].w[0] + 25024u);  if (depth < kMaxDepth) unit_0007(c, 117u, depth + 1u); else { c.pc = 0x0011DB40u; return; } if (c.pc != 0x0034DC78u) [[unlikely]] return; }
L_0034DC78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[19].w[0] + 8270u);  if (t) { goto L_0034DCA0; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DC8Cu); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0006(c, 189u, depth + 1u); else { c.pc = 0x0011A900u; return; } if (c.pc != 0x0034DC8Cu) [[unlikely]] return; }
L_0034DC8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034DCA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0034DCB8; } }
    c.budget -= 1;
L_0034DCA0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 24756u));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 89u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034DC68u | kUnwind; return; } goto L_0034DC68; } }
L_0034DCB8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] + 25049u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DCCCu); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0034DCCCu) [[unlikely]] return; }
L_0034DCCC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0034DCE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DCDCu); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_0093(c, 470u, depth + 1u); else { c.pc = 0x0034F220u; return; } if (c.pc != 0x0034DCDCu) [[unlikely]] return; }
L_0034DCDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034DD20; } }
    c.budget -= 1;
L_0034DCE8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DCF4u); set32(c.r[4], c.r[4].w[0] + 25139u);  if (depth < kMaxDepth) unit_0093(c, 223u, depth + 1u); else { c.pc = 0x0034D780u; return; } if (c.pc != 0x0034DCF4u) [[unlikely]] return; }
L_0034DCF4:
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] + 25113u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 88u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[29].w[0] + 89u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = ld64((c.r[29].w[0] + 88u));
    set32(c.r[2], ld32((c.r[1].w[0] + 20124u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DD1Cu); set32(c.r[5], c.r[29].w[0] + 88u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034DD1Cu) [[unlikely]] return; }
L_0034DD1C:
    c.budget -= 1;
L_0034DD20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0034DD40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 20128u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);  if (t) { goto L_0034DDD8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);  if (t) { goto L_0034DDA8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] + 25139u);
    set32(c.r[5], c.r[5].w[0] + 25049u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DD78u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0034DD78u) [[unlikely]] return; }
L_0034DD78:
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] + 25113u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 24u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[29].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = ld64((c.r[29].w[0] + 24u));
    set32(c.r[2], ld32((c.r[1].w[0] + 20124u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DDA0u); set32(c.r[5], c.r[29].w[0] + 24u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034DDA0u) [[unlikely]] return; }
L_0034DDA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034DDD8; } }
L_0034DDA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DDB0u);  if (depth < kMaxDepth) unit_0091(c, 169u, depth + 1u); else { c.pc = 0x00345A40u; return; } if (c.pc != 0x0034DDB0u) [[unlikely]] return; }
L_0034DDB0:
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], 0u + 8u);
    st8((c.r[29].w[0] + 24u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[29].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = ld64((c.r[29].w[0] + 24u));
    set32(c.r[2], ld32((c.r[1].w[0] + 20124u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DDD4u); set32(c.r[5], c.r[29].w[0] + 24u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034DDD4u) [[unlikely]] return; }
L_0034DDD4:
    c.budget -= 1;
L_0034DDD8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034DDF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 20128u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);  if (t) { goto L_0034DE38; } }
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 25113u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0034DE28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DE20u);  if (depth < kMaxDepth) unit_0093(c, 323u, depth + 1u); else { c.pc = 0x0034E3F0u; return; } if (c.pc != 0x0034DE20u) [[unlikely]] return; }
L_0034DE20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034DE38; } }
L_0034DE28:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DE34u); set32(c.r[4], c.r[4].w[0] + 24029u);  if (depth < kMaxDepth) unit_0093(c, 261u, depth + 1u); else { c.pc = 0x0034DC00u; return; } if (c.pc != 0x0034DE34u) [[unlikely]] return; }
L_0034DE34:
    c.budget -= 1;
L_0034DE38:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034DE50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DE60u);  if (depth < kMaxDepth) unit_0093(c, 460u, depth + 1u); else { c.pc = 0x0034F180u; return; } if (c.pc != 0x0034DE60u) [[unlikely]] return; }
L_0034DE60:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034DE70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DE8Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0091(c, 96u, depth + 1u); else { c.pc = 0x00344F90u; return; } if (c.pc != 0x0034DE8Cu) [[unlikely]] return; }
L_0034DE8C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0034DEC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DEA4u);  if (depth < kMaxDepth) unit_0093(c, 282u, depth + 1u); else { c.pc = 0x0034DEE0u; return; } if (c.pc != 0x0034DEA4u) [[unlikely]] return; }
L_0034DEA4:
    set32(c.r[4], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16544u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0034DEC8; } }
L_0034DEC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034DEE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    set32(c.r[5], 0u + 27u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DEFCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034DEFCu) [[unlikely]] return; }
L_0034DEFC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DF0Cu); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x0034DF0Cu) [[unlikely]] return; }
L_0034DF0C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DF18u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x0034DF18u) [[unlikely]] return; }
L_0034DF18:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034DF30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 30628u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 12u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DF50u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0034DF50u) [[unlikely]] return; }
L_0034DF50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x00CC0000u);  if (t) { goto L_0034DFA8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[16], c.r[16].w[0] + 30628u);
    set32(c.r[5], c.r[5].w[0] + 6064u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DF74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 162u, depth + 1u); else { c.pc = 0x003458F0u; return; } if (c.pc != 0x0034DF74u) [[unlikely]] return; }
L_0034DF74:
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DF80u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 161u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x0034DF80u) [[unlikely]] return; }
L_0034DF80:
    set32(c.r[4], c.r[16].w[0] + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DF8Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 161u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x0034DF8Cu) [[unlikely]] return; }
L_0034DF8C:
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DF98u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 161u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x0034DF98u) [[unlikely]] return; }
L_0034DF98:
    set32(c.r[4], c.r[16].w[0] + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DFA4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 161u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x0034DFA4u) [[unlikely]] return; }
L_0034DFA4:
    c.budget -= 1;
L_0034DFA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DFB0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 90u, depth + 1u); else { c.pc = 0x00344EC0u; return; } if (c.pc != 0x0034DFB0u) [[unlikely]] return; }
L_0034DFB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034DFC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4757u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CC0000u);  if (t) { goto L_0034DFE0; } }
    set32(c.r[2], ld32((c.r[1].w[0] + 30628u)));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0034DFE0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 30632u));
    c.r[2].d[0] = 0ull + 0ull;
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 30634u));
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 30636u));
    st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 30638u));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0034E020:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E048u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0091(c, 96u, depth + 1u); else { c.pc = 0x00344F90u; return; } if (c.pc != 0x0034E048u) [[unlikely]] return; }
L_0034E048:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0034E088; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E060u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0093(c, 298u, depth + 1u); else { c.pc = 0x0034E0A0u; return; } if (c.pc != 0x0034E060u) [[unlikely]] return; }
L_0034E060:
    set32(c.r[4], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16544u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0034E088; } }
    c.budget -= 1;
L_0034E088:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0034E0A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    set32(c.r[5], 0u + 29u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E0CCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034E0CCu) [[unlikely]] return; }
L_0034E0CC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_0034E0F0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E0E8u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 203u, depth + 1u); else { c.pc = 0x00345ED0u; return; } if (c.pc != 0x0034E0E8u) [[unlikely]] return; }
L_0034E0E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034E108; } }
L_0034E0F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    set32(c.r[5], c.r[5].w[0] + 5616u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E108u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0091(c, 203u, depth + 1u); else { c.pc = 0x00345ED0u; return; } if (c.pc != 0x0034E108u) [[unlikely]] return; }
L_0034E108:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E114u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x0034E114u) [[unlikely]] return; }
L_0034E114:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E120u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x0034E120u) [[unlikely]] return; }
L_0034E120:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0034E140:
    c.budget -= 2;
    { c.r[4].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00344EC0u | kUnwind; return; } [[clang::musttail]] return unit_0091(c, 90u, depth); }
L_0034E150:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E16Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0091(c, 96u, depth + 1u); else { c.pc = 0x00344F90u; return; } if (c.pc != 0x0034E16Cu) [[unlikely]] return; }
L_0034E16C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[1].w[0] + 20604u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], 0u + 4096u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 20608u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], c.r[2].w[0] - 5976u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] + 25203u);
    st32((c.r[1].w[0] + 20612u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E1A8u); set32(c.r[6], 0u + 4097u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0034E1A8u) [[unlikely]] return; }
L_0034E1A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 5976u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E1BCu); set32(c.r[6], 0u + 8192u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0034E1BCu) [[unlikely]] return; }
L_0034E1BC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 20604u), 0u);
    set32(c.r[2], 0u + 4096u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] + 25203u);
    st32((c.r[1].w[0] + 20608u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], c.r[2].w[0] - 5976u);
    set32(c.r[6], 0u + 4097u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E1F4u); st32((c.r[1].w[0] + 20612u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0034E1F4u) [[unlikely]] return; }
L_0034E1F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 5976u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E208u); set32(c.r[6], 0u + 8192u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0034E208u) [[unlikely]] return; }
L_0034E208:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0034E240; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E21Cu);  if (depth < kMaxDepth) unit_0093(c, 314u, depth + 1u); else { c.pc = 0x0034E290u; return; } if (c.pc != 0x0034E21Cu) [[unlikely]] return; }
L_0034E21C:
    set32(c.r[4], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16544u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0034E240; } }
L_0034E240:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034E250:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[3], 0u + 4097u);
    set32(c.r[5], c.r[5].w[0] + 25203u);
    c.budget -= 4;
L_0034E260:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034E260u | kUnwind; return; } goto L_0034E260; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0034E290:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    set32(c.r[5], 0u + 31u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E2ACu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034E2ACu) [[unlikely]] return; }
L_0034E2AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E2BCu); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x0034E2BCu) [[unlikely]] return; }
L_0034E2BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E2C8u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x0034E2C8u) [[unlikely]] return; }
L_0034E2C8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034E2E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);  if (t) { goto L_0034E3D8; } }
    set32(c.r[2], ld32((c.r[1].w[0] + 20588u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(768ll);  if (t) { goto L_0034E318; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034E348; } }
    c.budget -= 1;
L_0034E318:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 6836u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] << 8);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 6837u));
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 20604u));
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[2], c.r[5].w[0] - c.r[2].w[0]);
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 12;
L_0034E348:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 20604u)));
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 20608u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] - 1u);  if (t) { goto L_0034E370; } }
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_0034E370:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 20612u)));
    c.r[16].d[0] = c.r[5].d[0] & 65535ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 6064u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E390u); set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0034E390u) [[unlikely]] return; }
L_0034E390:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], ld32((c.r[1].w[0] + 20604u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[5], c.r[5].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 20588u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[1].w[0] + 20604u), c.r[5].w[0]);  if (t) { goto L_0034E3E0; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[16], c.r[16].w[0] + 25203u);
    set32(c.r[5], c.r[5].w[0] - 5976u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E3CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 160u, depth + 1u); else { c.pc = 0x003458C0u; return; } if (c.pc != 0x0034E3CCu) [[unlikely]] return; }
L_0034E3CC:
    set32(c.r[4], c.r[16].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E3D8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 163u, depth + 1u); else { c.pc = 0x00345920u; return; } if (c.pc != 0x0034E3D8u) [[unlikely]] return; }
L_0034E3D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E3E0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 90u, depth + 1u); else { c.pc = 0x00344EC0u; return; } if (c.pc != 0x0034E3E0u) [[unlikely]] return; }
L_0034E3E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034E3F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 20128u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);  if (t) { goto L_0034E430; } }
    st8((c.r[29].w[0] + 24u), static_cast<std::uint8_t>(0u));
    st8((c.r[1].w[0] + 20128u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[29].w[0] + 25u), static_cast<std::uint8_t>(0u));
    st8((c.r[1].w[0] + 20129u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[4].d[0] = ld64((c.r[29].w[0] + 24u));
    set32(c.r[2], ld32((c.r[1].w[0] + 20124u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E430u); set32(c.r[5], c.r[29].w[0] + 24u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034E430u) [[unlikely]] return; }
L_0034E430:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034E440:
    c.budget -= 2;
    {  goto L_0034F1C0; }
L_0034E450:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 4288u);
    set32(c.r[5], c.r[5].w[0] + 3824u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E470u); set32(c.r[6], 0u + 464u);  if (depth < kMaxDepth) unit_0006(c, 189u, depth + 1u); else { c.pc = 0x0011A900u; return; } if (c.pc != 0x0034E470u) [[unlikely]] return; }
L_0034E470:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0034E488; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E480u);  if (depth < kMaxDepth) unit_0093(c, 332u, depth + 1u); else { c.pc = 0x0034E4E0u; return; } if (c.pc != 0x0034E480u) [[unlikely]] return; }
L_0034E480:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034E4D0; } }
L_0034E488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E490u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0093(c, 332u, depth + 1u); else { c.pc = 0x0034E4E0u; return; } if (c.pc != 0x0034E490u) [[unlikely]] return; }
L_0034E490:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[6], c.r[6].w[0] + 4288u);
    set32(c.r[5], c.r[5].w[0] + 24138u);
    set32(c.r[4], 0u + 232u);
    c.budget -= 6;
L_0034E4A8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 2u);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034E4A8u | kUnwind; return; } goto L_0034E4A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E4D0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 225u, depth + 1u); else { c.pc = 0x003461C0u; return; } if (c.pc != 0x0034E4D0u) [[unlikely]] return; }
L_0034E4D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034E4E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 192u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E500u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034E500u) [[unlikely]] return; }
L_0034E500:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E510u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 198u, depth + 1u); else { c.pc = 0x00345DC0u; return; } if (c.pc != 0x0034E510u) [[unlikely]] return; }
L_0034E510:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E51Cu); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x0034E51Cu) [[unlikely]] return; }
L_0034E51C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E528u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x0034E528u) [[unlikely]] return; }
L_0034E528:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034E540:
    c.f[3] = ld32((c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] + 24708u);
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    st32((c.r[3].w[0]), c.f[3]);
    st32((c.r[3].w[0] + 4u), c.f[2]);
    st32((c.r[3].w[0] + 8u), c.f[1]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[4].w[0] + 16u));
    c.f[2] = ld32((c.r[4].w[0] + 20u));
    c.f[1] = ld32((c.r[4].w[0] + 24u));
    c.f[0] = ld32((c.r[4].w[0] + 28u));
    st32((c.r[3].w[0] + 16u), c.f[3]);
    st32((c.r[3].w[0] + 20u), c.f[2]);
    st32((c.r[3].w[0] + 24u), c.f[1]);
    st32((c.r[3].w[0] + 28u), c.f[0]);
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    st32((c.r[3].w[0] + 32u), c.f[3]);
    st32((c.r[3].w[0] + 36u), c.f[2]);
    st32((c.r[3].w[0] + 40u), c.f[1]);
    c.budget -= 27;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 44u), c.f[0]);  c.pc = t; return; }
L_0034E5B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 20128u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0034E5D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E5D0u);  if (depth < kMaxDepth) unit_0093(c, 340u, depth + 1u); else { c.pc = 0x0034E5E0u; return; } if (c.pc != 0x0034E5D0u) [[unlikely]] return; }
L_0034E5D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034E5E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 25u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E604u); set32(c.r[16], c.r[16].w[0] + 24708u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034E604u) [[unlikely]] return; }
L_0034E604:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 36u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_0034E7D0; } }
    set32(c.r[5], 0u + 26505u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E61Cu); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 199u, depth + 1u); else { c.pc = 0x00345DF0u; return; } if (c.pc != 0x0034E61Cu) [[unlikely]] return; }
L_0034E61C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    set32(c.r[5], c.r[5].w[0] + 29666u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E634u); set32(c.r[6], 0u + 15u);  if (depth < kMaxDepth) unit_0091(c, 203u, depth + 1u); else { c.pc = 0x00345ED0u; return; } if (c.pc != 0x0034E634u) [[unlikely]] return; }
L_0034E634:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 46u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E644u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 198u, depth + 1u); else { c.pc = 0x00345DC0u; return; } if (c.pc != 0x0034E644u) [[unlikely]] return; }
L_0034E644:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 47u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E654u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 198u, depth + 1u); else { c.pc = 0x00345DC0u; return; } if (c.pc != 0x0034E654u) [[unlikely]] return; }
L_0034E654:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 36u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E664u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 198u, depth + 1u); else { c.pc = 0x00345DC0u; return; } if (c.pc != 0x0034E664u) [[unlikely]] return; }
L_0034E664:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 37u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E674u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 198u, depth + 1u); else { c.pc = 0x00345DC0u; return; } if (c.pc != 0x0034E674u) [[unlikely]] return; }
L_0034E674:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 38u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E684u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 198u, depth + 1u); else { c.pc = 0x00345DC0u; return; } if (c.pc != 0x0034E684u) [[unlikely]] return; }
L_0034E684:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 39u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E694u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 198u, depth + 1u); else { c.pc = 0x00345DC0u; return; } if (c.pc != 0x0034E694u) [[unlikely]] return; }
L_0034E694:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 40u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E6A4u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 198u, depth + 1u); else { c.pc = 0x00345DC0u; return; } if (c.pc != 0x0034E6A4u) [[unlikely]] return; }
L_0034E6A4:
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E6B4u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 200u, depth + 1u); else { c.pc = 0x00345E30u; return; } if (c.pc != 0x0034E6B4u) [[unlikely]] return; }
L_0034E6B4:
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E6C4u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 200u, depth + 1u); else { c.pc = 0x00345E30u; return; } if (c.pc != 0x0034E6C4u) [[unlikely]] return; }
L_0034E6C4:
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E6D4u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 200u, depth + 1u); else { c.pc = 0x00345E30u; return; } if (c.pc != 0x0034E6D4u) [[unlikely]] return; }
L_0034E6D4:
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E6E4u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 200u, depth + 1u); else { c.pc = 0x00345E30u; return; } if (c.pc != 0x0034E6E4u) [[unlikely]] return; }
L_0034E6E4:
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E6F4u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 200u, depth + 1u); else { c.pc = 0x00345E30u; return; } if (c.pc != 0x0034E6F4u) [[unlikely]] return; }
L_0034E6F4:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 41u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E704u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 198u, depth + 1u); else { c.pc = 0x00345DC0u; return; } if (c.pc != 0x0034E704u) [[unlikely]] return; }
L_0034E704:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 42u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E714u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 198u, depth + 1u); else { c.pc = 0x00345DC0u; return; } if (c.pc != 0x0034E714u) [[unlikely]] return; }
L_0034E714:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 43u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E724u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 198u, depth + 1u); else { c.pc = 0x00345DC0u; return; } if (c.pc != 0x0034E724u) [[unlikely]] return; }
L_0034E724:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 44u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E734u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 198u, depth + 1u); else { c.pc = 0x00345DC0u; return; } if (c.pc != 0x0034E734u) [[unlikely]] return; }
L_0034E734:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 45u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E744u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 198u, depth + 1u); else { c.pc = 0x00345DC0u; return; } if (c.pc != 0x0034E744u) [[unlikely]] return; }
L_0034E744:
    c.r[5].d[0] = ld16((c.r[16].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E754u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 199u, depth + 1u); else { c.pc = 0x00345DF0u; return; } if (c.pc != 0x0034E754u) [[unlikely]] return; }
L_0034E754:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 2u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E764u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 199u, depth + 1u); else { c.pc = 0x00345DF0u; return; } if (c.pc != 0x0034E764u) [[unlikely]] return; }
L_0034E764:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 4u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E774u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 199u, depth + 1u); else { c.pc = 0x00345DF0u; return; } if (c.pc != 0x0034E774u) [[unlikely]] return; }
L_0034E774:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 6u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E784u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 199u, depth + 1u); else { c.pc = 0x00345DF0u; return; } if (c.pc != 0x0034E784u) [[unlikely]] return; }
L_0034E784:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 8u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E794u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 199u, depth + 1u); else { c.pc = 0x00345DF0u; return; } if (c.pc != 0x0034E794u) [[unlikely]] return; }
L_0034E794:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E7A4u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 199u, depth + 1u); else { c.pc = 0x00345DF0u; return; } if (c.pc != 0x0034E7A4u) [[unlikely]] return; }
L_0034E7A4:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 12u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E7B4u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 199u, depth + 1u); else { c.pc = 0x00345DF0u; return; } if (c.pc != 0x0034E7B4u) [[unlikely]] return; }
L_0034E7B4:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 14u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E7C4u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 199u, depth + 1u); else { c.pc = 0x00345DF0u; return; } if (c.pc != 0x0034E7C4u) [[unlikely]] return; }
L_0034E7C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034E7E0; } }
    c.budget -= 1;
L_0034E7D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E7E0u); set32(c.r[5], 0u + 255u);  if (depth < kMaxDepth) unit_0091(c, 196u, depth + 1u); else { c.pc = 0x00345D90u; return; } if (c.pc != 0x0034E7E0u) [[unlikely]] return; }
L_0034E7E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E7ECu); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x0034E7ECu) [[unlikely]] return; }
L_0034E7EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E7F8u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x0034E7F8u) [[unlikely]] return; }
L_0034E7F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034E810:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 20448u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);  if (t) { goto L_0034E850; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[1].w[0] + 20444u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] + 20448u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00350000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], c.r[2].w[0] - 4736u);
    st32((c.r[1].w[0] + 20440u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 20449u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0034E858; } }
L_0034E850:
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_0034E858:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034E860:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E878u); set32(c.r[5], 0u + 37u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034E878u) [[unlikely]] return; }
L_0034E878:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E884u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x0034E884u) [[unlikely]] return; }
L_0034E884:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E890u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x0034E890u) [[unlikely]] return; }
L_0034E890:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034E8A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E8C8u); set32(c.r[5], 0u + 39u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034E8C8u) [[unlikely]] return; }
L_0034E8C8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E8D8u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 198u, depth + 1u); else { c.pc = 0x00345DC0u; return; } if (c.pc != 0x0034E8D8u) [[unlikely]] return; }
L_0034E8D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E8E8u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 198u, depth + 1u); else { c.pc = 0x00345DC0u; return; } if (c.pc != 0x0034E8E8u) [[unlikely]] return; }
L_0034E8E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E8F4u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x0034E8F4u) [[unlikely]] return; }
L_0034E8F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E900u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x0034E900u) [[unlikely]] return; }
L_0034E900:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034E920:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E948u); set32(c.r[5], 0u + 41u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034E948u) [[unlikely]] return; }
L_0034E948:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E958u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 198u, depth + 1u); else { c.pc = 0x00345DC0u; return; } if (c.pc != 0x0034E958u) [[unlikely]] return; }
L_0034E958:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E968u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 198u, depth + 1u); else { c.pc = 0x00345DC0u; return; } if (c.pc != 0x0034E968u) [[unlikely]] return; }
L_0034E968:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E974u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x0034E974u) [[unlikely]] return; }
L_0034E974:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E980u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x0034E980u) [[unlikely]] return; }
L_0034E980:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034E9A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 20448u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);  if (t) { goto L_0034EA80; } }
    set32(c.r[3], 0u + 2u);
    c.r[4].d[0] = ld16((c.r[1].w[0] + 20594u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0034EA70; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_0034EA70; } }
    set32(c.r[4], c.r[29].w[0] + 63u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E9ECu); set32(c.r[5], c.r[5].w[0] + 6064u);  if (depth < kMaxDepth) unit_0091(c, 160u, depth + 1u); else { c.pc = 0x003458C0u; return; } if (c.pc != 0x0034E9ECu) [[unlikely]] return; }
L_0034E9EC:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 63u));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0034EA48; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    st8((c.r[1].w[0] + 31604u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0034EA58; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[16], c.r[16].w[0] + 16512u);
    c.budget -= 2;
L_0034EA18:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[1].d[0] = c.r[1].d[0] | 15093ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EA28u); set32(c.r[4], c.r[16].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0091(c, 160u, depth + 1u); else { c.pc = 0x003458C0u; return; } if (c.pc != 0x0034EA28u) [[unlikely]] return; }
L_0034EA28:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 63u));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034EA18u | kUnwind; return; } goto L_0034EA18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034EA58; } }
L_0034EA48:
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    st8((c.r[1].w[0] + 31604u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0034EA58:
    set32(c.r[3], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    st8((c.r[1].w[0] + 31605u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    st8((c.r[1].w[0] + 31606u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_0034EA70:
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] + 20450u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0034EA80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0034EAA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 20448u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);  if (t) { goto L_0034EC08; } }
    set32(c.r[3], 0u + 2u);
    c.r[4].d[0] = ld16((c.r[1].w[0] + 20594u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0034EBF0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_0034EBF0; } }
    set32(c.r[4], c.r[29].w[0] + 47u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EAE8u); set32(c.r[5], c.r[5].w[0] + 6064u);  if (depth < kMaxDepth) unit_0091(c, 160u, depth + 1u); else { c.pc = 0x003458C0u; return; } if (c.pc != 0x0034EAE8u) [[unlikely]] return; }
L_0034EAE8:
    set32(c.r[4], c.r[29].w[0] + 46u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EAF4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 160u, depth + 1u); else { c.pc = 0x003458C0u; return; } if (c.pc != 0x0034EAF4u) [[unlikely]] return; }
L_0034EAF4:
    c.r[7].d[0] = ld8((c.r[29].w[0] + 47u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[3].d[0] = ld8((c.r[29].w[0] + 46u));
    set32(c.r[4], c.r[4].w[0] + 16512u);
    c.r[1].d[0] = c.r[1].d[0] | 15104ull;
    set32(c.r[2], c.r[7].w[0] << 5);
    set32(c.r[6], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[2].w[0] + c.r[1].w[0]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 46u));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EB50u); st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0091(c, 162u, depth + 1u); else { c.pc = 0x003458F0u; return; } if (c.pc != 0x0034EB50u) [[unlikely]] return; }
L_0034EB50:
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EB5Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 162u, depth + 1u); else { c.pc = 0x003458F0u; return; } if (c.pc != 0x0034EB5Cu) [[unlikely]] return; }
L_0034EB5C:
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EB68u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 162u, depth + 1u); else { c.pc = 0x003458F0u; return; } if (c.pc != 0x0034EB68u) [[unlikely]] return; }
L_0034EB68:
    set32(c.r[4], c.r[16].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EB74u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 160u, depth + 1u); else { c.pc = 0x003458C0u; return; } if (c.pc != 0x0034EB74u) [[unlikely]] return; }
L_0034EB74:
    set32(c.r[4], c.r[16].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EB80u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 162u, depth + 1u); else { c.pc = 0x003458F0u; return; } if (c.pc != 0x0034EB80u) [[unlikely]] return; }
L_0034EB80:
    set32(c.r[4], c.r[16].w[0] + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EB8Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 162u, depth + 1u); else { c.pc = 0x003458F0u; return; } if (c.pc != 0x0034EB8Cu) [[unlikely]] return; }
L_0034EB8C:
    set32(c.r[4], c.r[16].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EB98u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 162u, depth + 1u); else { c.pc = 0x003458F0u; return; } if (c.pc != 0x0034EB98u) [[unlikely]] return; }
L_0034EB98:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EBA4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 162u, depth + 1u); else { c.pc = 0x003458F0u; return; } if (c.pc != 0x0034EBA4u) [[unlikely]] return; }
L_0034EBA4:
    set32(c.r[4], c.r[16].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EBB0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 162u, depth + 1u); else { c.pc = 0x003458F0u; return; } if (c.pc != 0x0034EBB0u) [[unlikely]] return; }
L_0034EBB0:
    set32(c.r[4], c.r[16].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EBBCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 162u, depth + 1u); else { c.pc = 0x003458F0u; return; } if (c.pc != 0x0034EBBCu) [[unlikely]] return; }
L_0034EBBC:
    set32(c.r[4], c.r[16].w[0] + 44u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EBC8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 162u, depth + 1u); else { c.pc = 0x003458F0u; return; } if (c.pc != 0x0034EBC8u) [[unlikely]] return; }
L_0034EBC8:
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EBD4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 162u, depth + 1u); else { c.pc = 0x003458F0u; return; } if (c.pc != 0x0034EBD4u) [[unlikely]] return; }
L_0034EBD4:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EBE0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 162u, depth + 1u); else { c.pc = 0x003458F0u; return; } if (c.pc != 0x0034EBE0u) [[unlikely]] return; }
L_0034EBE0:
    set32(c.r[4], c.r[16].w[0] + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EBECu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 162u, depth + 1u); else { c.pc = 0x003458F0u; return; } if (c.pc != 0x0034EBECu) [[unlikely]] return; }
L_0034EBEC:
    c.budget -= 1;
L_0034EBF0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 20450u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] + 20450u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_0034EC08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034EC20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 20448u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);  if (t) { goto L_0034ED28; } }
    set32(c.r[3], 0u + 2u);
    c.r[4].d[0] = ld16((c.r[1].w[0] + 20594u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0034ED10; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_0034ED10; } }
    set32(c.r[4], c.r[29].w[0] + 47u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EC68u); set32(c.r[5], c.r[5].w[0] + 6064u);  if (depth < kMaxDepth) unit_0091(c, 160u, depth + 1u); else { c.pc = 0x003458C0u; return; } if (c.pc != 0x0034EC68u) [[unlikely]] return; }
L_0034EC68:
    set32(c.r[4], c.r[29].w[0] + 46u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EC74u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 160u, depth + 1u); else { c.pc = 0x003458C0u; return; } if (c.pc != 0x0034EC74u) [[unlikely]] return; }
L_0034EC74:
    c.r[6].d[0] = ld8((c.r[29].w[0] + 47u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[3].d[0] = ld8((c.r[29].w[0] + 46u));
    set32(c.r[4], c.r[4].w[0] + 16512u);
    c.r[1].d[0] = c.r[1].d[0] | 15104ull;
    set32(c.r[2], c.r[6].w[0] << 5);
    set32(c.r[6], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034ECC4u); set32(c.r[4], c.r[16].w[0] + 60u);  if (depth < kMaxDepth) unit_0091(c, 163u, depth + 1u); else { c.pc = 0x00345920u; return; } if (c.pc != 0x0034ECC4u) [[unlikely]] return; }
L_0034ECC4:
    set32(c.r[4], c.r[16].w[0] + 125u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034ECD0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 160u, depth + 1u); else { c.pc = 0x003458C0u; return; } if (c.pc != 0x0034ECD0u) [[unlikely]] return; }
L_0034ECD0:
    set32(c.r[4], c.r[16].w[0] + 126u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034ECDCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 160u, depth + 1u); else { c.pc = 0x003458C0u; return; } if (c.pc != 0x0034ECDCu) [[unlikely]] return; }
L_0034ECDC:
    set32(c.r[4], c.r[16].w[0] + 127u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034ECE8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 160u, depth + 1u); else { c.pc = 0x003458C0u; return; } if (c.pc != 0x0034ECE8u) [[unlikely]] return; }
L_0034ECE8:
    set32(c.r[4], c.r[16].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034ECF4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 160u, depth + 1u); else { c.pc = 0x003458C0u; return; } if (c.pc != 0x0034ECF4u) [[unlikely]] return; }
L_0034ECF4:
    set32(c.r[4], c.r[16].w[0] + 129u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034ED00u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 160u, depth + 1u); else { c.pc = 0x003458C0u; return; } if (c.pc != 0x0034ED00u) [[unlikely]] return; }
L_0034ED00:
    set32(c.r[4], c.r[16].w[0] + 130u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034ED0Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 160u, depth + 1u); else { c.pc = 0x003458C0u; return; } if (c.pc != 0x0034ED0Cu) [[unlikely]] return; }
L_0034ED0C:
    c.budget -= 1;
L_0034ED10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 20450u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] + 20450u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_0034ED28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034ED40:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    set32(c.r[3], 0u + 6603u);
    set32(c.r[5], c.r[5].w[0] + 31604u);
    c.budget -= 4;
L_0034ED50:
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034ED50u | kUnwind; return; } goto L_0034ED50; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0034ED80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[17].w[0] + 20440u);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8u));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0034EF10; } }
    c.r[5].d[0] = ld8((c.r[17].w[0] + 9u));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_0034EEF8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0034EED0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0034EE40; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0034EE18; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0034EDE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034EF10; } }
    c.budget -= 1;
L_0034EDE8:
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] + 31604u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 26412u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EE08u); st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0034EE08u) [[unlikely]] return; }
L_0034EE08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EE10u);  if (depth < kMaxDepth) unit_0093(c, 373u, depth + 1u); else { c.pc = 0x0034E860u; return; } if (c.pc != 0x0034EE10u) [[unlikely]] return; }
L_0034EE10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034EF10; } }
L_0034EE18:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 10u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_0034EF10; } }
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 16u), 0u);
    st32((c.r[17].w[0] + 20u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 24u), 0u);  if (t) { goto L_0034EF10; } }
    c.budget -= 1;
L_0034EE40:
    set32(c.r[16], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[18], ld32((c.r[17].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EE54u); c.r[5].d[0] = c.r[18].d[0] & 255ull;  if (depth < kMaxDepth) unit_0093(c, 377u, depth + 1u); else { c.pc = 0x0034E8A0u; return; } if (c.pc != 0x0034EE54u) [[unlikely]] return; }
L_0034EE54:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] & 255ull;  if (t) { goto L_0034EE68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EE68u); c.r[5].d[0] = c.r[18].d[0] & 255ull;  if (depth < kMaxDepth) unit_0093(c, 383u, depth + 1u); else { c.pc = 0x0034E920u; return; } if (c.pc != 0x0034EE68u) [[unlikely]] return; }
L_0034EE68:
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    set32(c.r[4], c.r[18].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 31605u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[17].w[0] + 24u), c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0034EF10; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    set32(c.r[4], c.r[16].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 31604u));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0034EEC8; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 9u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0034EF10; } }
L_0034EEC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 24u), 0u);  if (t) { goto L_0034EF10; } }
L_0034EED0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 31607u));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 10u));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + 6u);
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_0034EF10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0034EF10; } }
L_0034EEF8:
    st8((c.r[17].w[0] + 8u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EF10u); set32(c.r[5], c.r[29].w[0] + 72u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034EF10u) [[unlikely]] return; }
L_0034EF10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0034EF30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EF48u); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034EF48u) [[unlikely]] return; }
L_0034EF48:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 6858u));
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 23976u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 6859u));
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EF78u); c.r[6].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_008C(c, 195u, depth + 1u); else { c.pc = 0x003335C0u; return; } if (c.pc != 0x0034EF78u) [[unlikely]] return; }
L_0034EF78:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EF88u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 199u, depth + 1u); else { c.pc = 0x00345DF0u; return; } if (c.pc != 0x0034EF88u) [[unlikely]] return; }
L_0034EF88:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EF9Cu); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_0091(c, 201u, depth + 1u); else { c.pc = 0x00345E70u; return; } if (c.pc != 0x0034EF9Cu) [[unlikely]] return; }
L_0034EF9C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EFA8u); set32(c.r[4], c.r[4].w[0] + 23987u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0034EFA8u) [[unlikely]] return; }
L_0034EFA8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[4].w[0] + 6848u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EFC0u); set32(c.r[5], c.r[5].w[0] + 23987u);  if (depth < kMaxDepth) unit_0091(c, 208u, depth + 1u); else { c.pc = 0x00345F70u; return; } if (c.pc != 0x0034EFC0u) [[unlikely]] return; }
L_0034EFC0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EFCCu); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x0034EFCCu) [[unlikely]] return; }
L_0034EFCC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EFD8u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x0034EFD8u) [[unlikely]] return; }
L_0034EFD8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034EFF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 17u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F014u); set32(c.r[16], c.r[16].w[0] + 24094u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034F014u) [[unlikely]] return; }
L_0034F014:
    c.r[5].d[0] = ld8((c.r[16].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F024u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 198u, depth + 1u); else { c.pc = 0x00345DC0u; return; } if (c.pc != 0x0034F024u) [[unlikely]] return; }
L_0034F024:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 1u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F034u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 198u, depth + 1u); else { c.pc = 0x00345DC0u; return; } if (c.pc != 0x0034F034u) [[unlikely]] return; }
L_0034F034:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 2u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F044u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 198u, depth + 1u); else { c.pc = 0x00345DC0u; return; } if (c.pc != 0x0034F044u) [[unlikely]] return; }
L_0034F044:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[5], c.r[16].w[0] + 3u);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F058u); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_0091(c, 203u, depth + 1u); else { c.pc = 0x00345ED0u; return; } if (c.pc != 0x0034F058u) [[unlikely]] return; }
L_0034F058:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 20u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F068u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 199u, depth + 1u); else { c.pc = 0x00345DF0u; return; } if (c.pc != 0x0034F068u) [[unlikely]] return; }
L_0034F068:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 22u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F078u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 199u, depth + 1u); else { c.pc = 0x00345DF0u; return; } if (c.pc != 0x0034F078u) [[unlikely]] return; }
L_0034F078:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 24u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F088u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 199u, depth + 1u); else { c.pc = 0x00345DF0u; return; } if (c.pc != 0x0034F088u) [[unlikely]] return; }
L_0034F088:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 26u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F098u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 199u, depth + 1u); else { c.pc = 0x00345DF0u; return; } if (c.pc != 0x0034F098u) [[unlikely]] return; }
L_0034F098:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 28u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F0A8u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 199u, depth + 1u); else { c.pc = 0x00345DF0u; return; } if (c.pc != 0x0034F0A8u) [[unlikely]] return; }
L_0034F0A8:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 30u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F0B8u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 199u, depth + 1u); else { c.pc = 0x00345DF0u; return; } if (c.pc != 0x0034F0B8u) [[unlikely]] return; }
L_0034F0B8:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 32u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F0C8u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 199u, depth + 1u); else { c.pc = 0x00345DF0u; return; } if (c.pc != 0x0034F0C8u) [[unlikely]] return; }
L_0034F0C8:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 34u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F0D8u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 199u, depth + 1u); else { c.pc = 0x00345DF0u; return; } if (c.pc != 0x0034F0D8u) [[unlikely]] return; }
L_0034F0D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F0E4u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x0034F0E4u) [[unlikely]] return; }
L_0034F0E4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F0F0u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x0034F0F0u) [[unlikely]] return; }
L_0034F0F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034F100:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F118u); set32(c.r[5], 0u + 22u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034F118u) [[unlikely]] return; }
L_0034F118:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    set32(c.r[5], c.r[5].w[0] + 25024u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F130u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0091(c, 203u, depth + 1u); else { c.pc = 0x00345ED0u; return; } if (c.pc != 0x0034F130u) [[unlikely]] return; }
L_0034F130:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F13Cu); set32(c.r[4], c.r[4].w[0] + 25032u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0034F13Cu) [[unlikely]] return; }
L_0034F13C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[4].w[0] + 6848u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F154u); set32(c.r[5], c.r[5].w[0] + 25032u);  if (depth < kMaxDepth) unit_0091(c, 203u, depth + 1u); else { c.pc = 0x00345ED0u; return; } if (c.pc != 0x0034F154u) [[unlikely]] return; }
L_0034F154:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F160u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x0034F160u) [[unlikely]] return; }
L_0034F160:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F16Cu); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x0034F16Cu) [[unlikely]] return; }
L_0034F16C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034F180:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F198u); set32(c.r[5], 0u + 26u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034F198u) [[unlikely]] return; }
L_0034F198:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F1A4u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x0034F1A4u) [[unlikely]] return; }
L_0034F1A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F1B0u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x0034F1B0u) [[unlikely]] return; }
L_0034F1B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034F1C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F1D8u); set32(c.r[5], 0u + 15u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034F1D8u) [[unlikely]] return; }
L_0034F1D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F1E4u); set32(c.r[4], c.r[4].w[0] + 23946u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0034F1E4u) [[unlikely]] return; }
L_0034F1E4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[4].w[0] + 6848u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F1FCu); set32(c.r[5], c.r[5].w[0] + 23946u);  if (depth < kMaxDepth) unit_0091(c, 203u, depth + 1u); else { c.pc = 0x00345ED0u; return; } if (c.pc != 0x0034F1FCu) [[unlikely]] return; }
L_0034F1FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F208u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x0034F208u) [[unlikely]] return; }
L_0034F208:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F214u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x0034F214u) [[unlikely]] return; }
L_0034F214:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034F220:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F248u); set32(c.r[5], 0u + 33u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034F248u) [[unlikely]] return; }
L_0034F248:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[6].d[0] = c.r[16].d[0] & 255ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F25Cu); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 203u, depth + 1u); else { c.pc = 0x00345ED0u; return; } if (c.pc != 0x0034F25Cu) [[unlikely]] return; }
L_0034F25C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F268u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x0034F268u) [[unlikely]] return; }
L_0034F268:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F274u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x0034F274u) [[unlikely]] return; }
L_0034F274:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034F290:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F2B0u); st16((c.r[1].w[0] + 20664u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034F2B0u) [[unlikely]] return; }
L_0034F2B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    set32(c.r[5], c.r[5].w[0] + 5616u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F2C8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0091(c, 203u, depth + 1u); else { c.pc = 0x00345ED0u; return; } if (c.pc != 0x0034F2C8u) [[unlikely]] return; }
L_0034F2C8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F2D4u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x0034F2D4u) [[unlikely]] return; }
L_0034F2D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F2E0u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x0034F2E0u) [[unlikely]] return; }
L_0034F2E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034F2F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 24757u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 356u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F314u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0034F314u) [[unlikely]] return; }
L_0034F314:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[29].w[0] + 63u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F324u); set32(c.r[5], c.r[5].w[0] + 6064u);  if (depth < kMaxDepth) unit_0091(c, 160u, depth + 1u); else { c.pc = 0x003458C0u; return; } if (c.pc != 0x0034F324u) [[unlikely]] return; }
L_0034F324:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 63u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] + 24756u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0034F390; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[16], c.r[16].w[0] + 16512u);
    c.budget -= 3;
L_0034F348:
    set32(c.r[4], c.r[16].w[0] + 8245u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F358u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 167u, depth + 1u); else { c.pc = 0x003459D0u; return; } if (c.pc != 0x0034F358u) [[unlikely]] return; }
L_0034F358:
    set32(c.r[4], c.r[16].w[0] + 8253u);
    set32(c.r[5], 0u + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F368u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 167u, depth + 1u); else { c.pc = 0x003459D0u; return; } if (c.pc != 0x0034F368u) [[unlikely]] return; }
L_0034F368:
    set32(c.r[4], c.r[16].w[0] + 8270u);
    set32(c.r[5], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F378u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 167u, depth + 1u); else { c.pc = 0x003459D0u; return; } if (c.pc != 0x0034F378u) [[unlikely]] return; }
L_0034F378:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 63u));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 89u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034F348u | kUnwind; return; } goto L_0034F348; } }
    c.budget -= 1;
L_0034F390:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 2;
L_0034F398:
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0034F3B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 25024u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F3D0u); set32(c.r[6], c.r[6].w[0] + 6064u);  if (depth < kMaxDepth) unit_0091(c, 167u, depth + 1u); else { c.pc = 0x003459D0u; return; } if (c.pc != 0x0034F3D0u) [[unlikely]] return; }
L_0034F3D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034F3E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F3F8u); set32(c.r[5], 0u + 35u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034F3F8u) [[unlikely]] return; }
L_0034F3F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 24096u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F40Cu); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 198u, depth + 1u); else { c.pc = 0x00345DC0u; return; } if (c.pc != 0x0034F40Cu) [[unlikely]] return; }
L_0034F40C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F418u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x0034F418u) [[unlikely]] return; }
L_0034F418:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F424u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x0034F424u) [[unlikely]] return; }
L_0034F424:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034F430:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 20128u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);  if (t) { goto L_0034F4B8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0034F4A0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] + 2216u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F464u); set32(c.r[5], c.r[5].w[0] + 6064u);  if (depth < kMaxDepth) unit_0091(c, 162u, depth + 1u); else { c.pc = 0x003458F0u; return; } if (c.pc != 0x0034F464u) [[unlikely]] return; }
L_0034F464:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F474u); set32(c.r[4], c.r[4].w[0] + 2220u);  if (depth < kMaxDepth) unit_0091(c, 162u, depth + 1u); else { c.pc = 0x003458F0u; return; } if (c.pc != 0x0034F474u) [[unlikely]] return; }
L_0034F474:
    set32(c.r[2], 0u + 12u);
    st8((c.r[29].w[0] + 24u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[4].d[0] = ld64((c.r[29].w[0] + 24u));
    set32(c.r[2], ld32((c.r[1].w[0] + 20124u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F494u); set32(c.r[5], c.r[29].w[0] + 24u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034F494u) [[unlikely]] return; }
L_0034F494:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034F4B8; } }
    c.budget -= 1;
L_0034F4A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F4A8u);  if (depth < kMaxDepth) unit_0091(c, 169u, depth + 1u); else { c.pc = 0x00345A40u; return; } if (c.pc != 0x0034F4A8u) [[unlikely]] return; }
L_0034F4A8:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F4B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 88u, depth + 1u); else { c.pc = 0x00344E70u; return; } if (c.pc != 0x0034F4B4u) [[unlikely]] return; }
L_0034F4B4:
    c.budget -= 1;
L_0034F4B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034F4D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 2216u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_0034F4E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 2220u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_0034F4F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F500u);  if (depth < kMaxDepth) unit_0093(c, 521u, depth + 1u); else { c.pc = 0x0034F6C0u; return; } if (c.pc != 0x0034F500u) [[unlikely]] return; }
L_0034F500:
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F50Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 88u, depth + 1u); else { c.pc = 0x00344E70u; return; } if (c.pc != 0x0034F50Cu) [[unlikely]] return; }
L_0034F50C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034F520:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F548u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0091(c, 96u, depth + 1u); else { c.pc = 0x00344F90u; return; } if (c.pc != 0x0034F548u) [[unlikely]] return; }
L_0034F548:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0034F588; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F560u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0093(c, 514u, depth + 1u); else { c.pc = 0x0034F620u; return; } if (c.pc != 0x0034F560u) [[unlikely]] return; }
L_0034F560:
    set32(c.r[4], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16544u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0034F588; } }
    c.budget -= 1;
L_0034F588:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0034F5A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0034F5C8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F5C8u); set32(c.r[5], c.r[5].w[0] + 30640u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0034F5C8u) [[unlikely]] return; }
L_0034F5C8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00CC0000u);  if (t) { goto L_0034F5E0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F5DCu); set32(c.r[5], c.r[5].w[0] + 30648u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0034F5DCu) [[unlikely]] return; }
L_0034F5DC:
    c.budget -= 1;
L_0034F5E0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00CC0000u);  if (t) { goto L_0034F5F8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F5F4u); set32(c.r[5], c.r[5].w[0] + 30665u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0034F5F4u) [[unlikely]] return; }
L_0034F5F4:
    c.budget -= 1;
L_0034F5F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034F610:
    c.budget -= 2;
    { c.r[4].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00344EC0u | kUnwind; return; } [[clang::musttail]] return unit_0091(c, 90u, depth); }
L_0034F620:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    set32(c.r[5], 0u + 153u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F64Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034F64Cu) [[unlikely]] return; }
L_0034F64C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 6848u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F664u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0091(c, 203u, depth + 1u); else { c.pc = 0x00345ED0u; return; } if (c.pc != 0x0034F664u) [[unlikely]] return; }
L_0034F664:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F66Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0034F66Cu) [[unlikely]] return; }
L_0034F66C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F680u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 203u, depth + 1u); else { c.pc = 0x00345ED0u; return; } if (c.pc != 0x0034F680u) [[unlikely]] return; }
L_0034F680:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F68Cu); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x0034F68Cu) [[unlikely]] return; }
L_0034F68C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F698u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x0034F698u) [[unlikely]] return; }
L_0034F698:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0034F6C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 30640u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F6DCu); set32(c.r[5], c.r[5].w[0] + 6064u);  if (depth < kMaxDepth) unit_0091(c, 163u, depth + 1u); else { c.pc = 0x00345920u; return; } if (c.pc != 0x0034F6DCu) [[unlikely]] return; }
L_0034F6DC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F6ECu); set32(c.r[4], c.r[4].w[0] + 30648u);  if (depth < kMaxDepth) unit_0091(c, 163u, depth + 1u); else { c.pc = 0x00345920u; return; } if (c.pc != 0x0034F6ECu) [[unlikely]] return; }
L_0034F6EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F6FCu); set32(c.r[4], c.r[4].w[0] + 30665u);  if (depth < kMaxDepth) unit_0091(c, 163u, depth + 1u); else { c.pc = 0x00345920u; return; } if (c.pc != 0x0034F6FCu) [[unlikely]] return; }
L_0034F6FC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034F710:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F734u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0091(c, 96u, depth + 1u); else { c.pc = 0x00344F90u; return; } if (c.pc != 0x0034F734u) [[unlikely]] return; }
L_0034F734:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0034F770; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F74Cu);  if (depth < kMaxDepth) unit_0093(c, 533u, depth + 1u); else { c.pc = 0x0034F820u; return; } if (c.pc != 0x0034F74Cu) [[unlikely]] return; }
L_0034F74C:
    set32(c.r[4], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16544u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0034F770; } }
L_0034F770:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034F790:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 30794u));
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 30796u));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 30798u));
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 30801u));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0034F7D0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    c.budget -= 3;
    { set32(c.r[5], c.r[5].w[0] + 30802u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DC88u | kUnwind; return; } [[clang::musttail]] return unit_0007(c, 122u, depth); }
L_0034F7E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034F800; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F800u);  if (depth < kMaxDepth) unit_0093(c, 538u, depth + 1u); else { c.pc = 0x0034F890u; return; } if (c.pc != 0x0034F800u) [[unlikely]] return; }
L_0034F800:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F808u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 90u, depth + 1u); else { c.pc = 0x00344EC0u; return; } if (c.pc != 0x0034F808u) [[unlikely]] return; }
L_0034F808:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034F820:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 149u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F844u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034F844u) [[unlikely]] return; }
L_0034F844:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 6848u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F85Cu); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0091(c, 203u, depth + 1u); else { c.pc = 0x00345ED0u; return; } if (c.pc != 0x0034F85Cu) [[unlikely]] return; }
L_0034F85C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F868u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x0034F868u) [[unlikely]] return; }
L_0034F868:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F874u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x0034F874u) [[unlikely]] return; }
L_0034F874:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034F890:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F8A8u); set32(c.r[5], c.r[5].w[0] + 6064u);  if (depth < kMaxDepth) unit_0091(c, 163u, depth + 1u); else { c.pc = 0x00345920u; return; } if (c.pc != 0x0034F8A8u) [[unlikely]] return; }
L_0034F8A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F8B8u); set32(c.r[4], c.r[4].w[0] + 30794u);  if (depth < kMaxDepth) unit_0091(c, 161u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x0034F8B8u) [[unlikely]] return; }
L_0034F8B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F8C8u); set32(c.r[4], c.r[4].w[0] + 30796u);  if (depth < kMaxDepth) unit_0091(c, 161u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x0034F8C8u) [[unlikely]] return; }
L_0034F8C8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F8D8u); set32(c.r[4], c.r[4].w[0] + 30798u);  if (depth < kMaxDepth) unit_0091(c, 161u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x0034F8D8u) [[unlikely]] return; }
L_0034F8D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F8E8u); set32(c.r[4], c.r[4].w[0] + 30800u);  if (depth < kMaxDepth) unit_0091(c, 160u, depth + 1u); else { c.pc = 0x003458C0u; return; } if (c.pc != 0x0034F8E8u) [[unlikely]] return; }
L_0034F8E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F8F8u); set32(c.r[4], c.r[4].w[0] + 30801u);  if (depth < kMaxDepth) unit_0091(c, 160u, depth + 1u); else { c.pc = 0x003458C0u; return; } if (c.pc != 0x0034F8F8u) [[unlikely]] return; }
L_0034F8F8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F908u); set32(c.r[4], c.r[4].w[0] + 30802u);  if (depth < kMaxDepth) unit_0091(c, 163u, depth + 1u); else { c.pc = 0x00345920u; return; } if (c.pc != 0x0034F908u) [[unlikely]] return; }
L_0034F908:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034F920:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F944u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0091(c, 96u, depth + 1u); else { c.pc = 0x00344F90u; return; } if (c.pc != 0x0034F944u) [[unlikely]] return; }
L_0034F944:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0034F980; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F95Cu);  if (depth < kMaxDepth) unit_0093(c, 553u, depth + 1u); else { c.pc = 0x0034FA20u; return; } if (c.pc != 0x0034F95Cu) [[unlikely]] return; }
L_0034F95C:
    set32(c.r[4], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16544u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0034F980; } }
L_0034F980:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034F9A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 30794u));
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 30796u));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 30798u));
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 30801u));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0034F9E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034FA00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FA00u);  if (depth < kMaxDepth) unit_0093(c, 558u, depth + 1u); else { c.pc = 0x0034FA90u; return; } if (c.pc != 0x0034FA00u) [[unlikely]] return; }
L_0034FA00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FA08u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 90u, depth + 1u); else { c.pc = 0x00344EC0u; return; } if (c.pc != 0x0034FA08u) [[unlikely]] return; }
L_0034FA08:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034FA20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 151u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FA44u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034FA44u) [[unlikely]] return; }
L_0034FA44:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 6848u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FA5Cu); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0091(c, 203u, depth + 1u); else { c.pc = 0x00345ED0u; return; } if (c.pc != 0x0034FA5Cu) [[unlikely]] return; }
L_0034FA5C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FA68u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x0034FA68u) [[unlikely]] return; }
L_0034FA68:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FA74u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x0034FA74u) [[unlikely]] return; }
L_0034FA74:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034FA90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 30794u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FAACu); set32(c.r[5], c.r[5].w[0] + 6064u);  if (depth < kMaxDepth) unit_0091(c, 161u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x0034FAACu) [[unlikely]] return; }
L_0034FAAC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FABCu); set32(c.r[4], c.r[4].w[0] + 30796u);  if (depth < kMaxDepth) unit_0091(c, 161u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x0034FABCu) [[unlikely]] return; }
L_0034FABC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FACCu); set32(c.r[4], c.r[4].w[0] + 30798u);  if (depth < kMaxDepth) unit_0091(c, 161u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x0034FACCu) [[unlikely]] return; }
L_0034FACC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FADCu); set32(c.r[4], c.r[4].w[0] + 30801u);  if (depth < kMaxDepth) unit_0091(c, 160u, depth + 1u); else { c.pc = 0x003458C0u; return; } if (c.pc != 0x0034FADCu) [[unlikely]] return; }
L_0034FADC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034FAF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 30648u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FB0Cu); set32(c.r[5], c.r[5].w[0] + 6064u);  if (depth < kMaxDepth) unit_0091(c, 163u, depth + 1u); else { c.pc = 0x00345920u; return; } if (c.pc != 0x0034FB0Cu) [[unlikely]] return; }
L_0034FB0C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FB1Cu); set32(c.r[4], c.r[4].w[0] + 30665u);  if (depth < kMaxDepth) unit_0091(c, 163u, depth + 1u); else { c.pc = 0x00345920u; return; } if (c.pc != 0x0034FB1Cu) [[unlikely]] return; }
L_0034FB1C:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FB28u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 88u, depth + 1u); else { c.pc = 0x00344E70u; return; } if (c.pc != 0x0034FB28u) [[unlikely]] return; }
L_0034FB28:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034FB40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FB58u); set32(c.r[5], 0u + 157u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034FB58u) [[unlikely]] return; }
L_0034FB58:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FB64u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x0034FB64u) [[unlikely]] return; }
L_0034FB64:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FB70u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x0034FB70u) [[unlikely]] return; }
L_0034FB70:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034FB80:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[5].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00344E70u | kUnwind; return; } [[clang::musttail]] return unit_0091(c, 88u, depth); }
L_0034FB90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FBB4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0091(c, 96u, depth + 1u); else { c.pc = 0x00344F90u; return; } if (c.pc != 0x0034FBB4u) [[unlikely]] return; }
L_0034FBB4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0034FBF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FBCCu);  if (depth < kMaxDepth) unit_0093(c, 575u, depth + 1u); else { c.pc = 0x0034FC10u; return; } if (c.pc != 0x0034FBCCu) [[unlikely]] return; }
L_0034FBCC:
    set32(c.r[4], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16544u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0034FBF0; } }
L_0034FBF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034FC10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 158u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FC34u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034FC34u) [[unlikely]] return; }
L_0034FC34:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FC48u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 198u, depth + 1u); else { c.pc = 0x00345DC0u; return; } if (c.pc != 0x0034FC48u) [[unlikely]] return; }
L_0034FC48:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FC54u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x0034FC54u) [[unlikely]] return; }
L_0034FC54:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FC60u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x0034FC60u) [[unlikely]] return; }
L_0034FC60:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034FC80:
    c.budget -= 2;
    { c.r[4].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00344EC0u | kUnwind; return; } [[clang::musttail]] return unit_0091(c, 90u, depth); }
L_0034FC90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FCA8u); set32(c.r[5], 0u + 164u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034FCA8u) [[unlikely]] return; }
L_0034FCA8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FCB4u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x0034FCB4u) [[unlikely]] return; }
L_0034FCB4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FCC0u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x0034FCC0u) [[unlikely]] return; }
L_0034FCC0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034FCD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 20408u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0034FD38; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 29408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FD00u); set32(c.r[6], 0u + 1220u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0034FD00u) [[unlikely]] return; }
L_0034FD00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FD08u);  if (depth < kMaxDepth) unit_0094(c, 52u, depth + 1u); else { c.pc = 0x003504F0u; return; } if (c.pc != 0x0034FD08u) [[unlikely]] return; }
L_0034FD08:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[1].w[0] + 20404u), c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] + 20408u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[1].w[0] + 20409u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 20400u), 0u);  if (t) { goto L_0034FD40; } }
    c.budget -= 1;
L_0034FD38:
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_0034FD40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034FD50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 20408u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);  if (t) { goto L_0034FDC8; } }
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 20594u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0034FDC0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 31u);  if (t) { goto L_0034FDA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FD90u);  if (depth < kMaxDepth) unit_0091(c, 172u, depth + 1u); else { c.pc = 0x00345A80u; return; } if (c.pc != 0x0034FD90u) [[unlikely]] return; }
L_0034FD90:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 31u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 29408u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0034FDC0; } }
L_0034FDA0:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FDACu); st8((c.r[29].w[0] + 24u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0091(c, 169u, depth + 1u); else { c.pc = 0x00345A40u; return; } if (c.pc != 0x0034FDACu) [[unlikely]] return; }
L_0034FDAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FDB4u); c.r[4].d[0] = ld64((c.r[29].w[0] + 24u));  if (depth < kMaxDepth) unit_0094(c, 49u, depth + 1u); else { c.pc = 0x00350480u; return; } if (c.pc != 0x0034FDB4u) [[unlikely]] return; }
L_0034FDB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034FDC8; } }
    c.budget -= 1;
L_0034FDC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FDC8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0094(c, 56u, depth + 1u); else { c.pc = 0x00350540u; return; } if (c.pc != 0x0034FDC8u) [[unlikely]] return; }
L_0034FDC8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034FDE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 20408u));
    c.budget -= 4;
L_0034FDF0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);  if (t) { goto L_0034FE78; } }
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 20594u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0034FE68; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 31u);  if (t) { goto L_0034FE48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FE20u);  if (depth < kMaxDepth) unit_0091(c, 172u, depth + 1u); else { c.pc = 0x00345A80u; return; } if (c.pc != 0x0034FE20u) [[unlikely]] return; }
L_0034FE20:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 31u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034FE38; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[29].w[0] + 31u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0034FE38:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 31u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 29409u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0034FE68; } }
L_0034FE48:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FE54u); st8((c.r[29].w[0] + 24u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0091(c, 169u, depth + 1u); else { c.pc = 0x00345A40u; return; } if (c.pc != 0x0034FE54u) [[unlikely]] return; }
L_0034FE54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FE5Cu); c.r[4].d[0] = ld64((c.r[29].w[0] + 24u));  if (depth < kMaxDepth) unit_0094(c, 49u, depth + 1u); else { c.pc = 0x00350480u; return; } if (c.pc != 0x0034FE5Cu) [[unlikely]] return; }
L_0034FE5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034FE78; } }
    c.budget -= 1;
L_0034FE68:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FE74u); st8((c.r[28].w[0] - 22540u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (depth < kMaxDepth) unit_0094(c, 61u, depth + 1u); else { c.pc = 0x003505A0u; return; } if (c.pc != 0x0034FE74u) [[unlikely]] return; }
L_0034FE74:
    c.budget -= 1;
L_0034FE78:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034FE90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 20408u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);  if (t) { [[clang::musttail]] return unit_0094(c, 13u, depth); } }
    set32(c.r[3], 0u + 16u);
    c.r[4].d[0] = ld16((c.r[1].w[0] + 20594u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_0094(c, 13u, depth); } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);  if (t) { [[clang::musttail]] return unit_0094(c, 7u, depth); } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { [[clang::musttail]] return unit_0094(c, 3u, depth); } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    set32(c.r[4], c.r[29].w[0] + 47u);
    set32(c.r[5], c.r[5].w[0] + 6064u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FEE8u); set32(c.r[16], c.r[16].w[0] + 29408u);  if (depth < kMaxDepth) unit_0091(c, 160u, depth + 1u); else { c.pc = 0x003458C0u; return; } if (c.pc != 0x0034FEE8u) [[unlikely]] return; }
L_0034FEE8:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 47u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FF14u); set32(c.r[4], c.r[2].w[0] + 278u);  if (depth < kMaxDepth) unit_0091(c, 160u, depth + 1u); else { c.pc = 0x003458C0u; return; } if (c.pc != 0x0034FF14u) [[unlikely]] return; }
L_0034FF14:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 47u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FF40u); set32(c.r[4], c.r[2].w[0] + 279u);  if (depth < kMaxDepth) unit_0091(c, 163u, depth + 1u); else { c.pc = 0x00345920u; return; } if (c.pc != 0x0034FF40u) [[unlikely]] return; }
L_0034FF40:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 47u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FF6Cu); set32(c.r[4], c.r[2].w[0] + 287u);  if (depth < kMaxDepth) unit_0091(c, 163u, depth + 1u); else { c.pc = 0x00345920u; return; } if (c.pc != 0x0034FF6Cu) [[unlikely]] return; }
    goto L_0034FF6C;
L_0034FF68:
    set32(c.r[4], c.r[2].w[0] + 287u);
    c.budget -= 1;
L_0034FF6C:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 47u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FF98u); set32(c.r[4], c.r[2].w[0] + 304u);  if (depth < kMaxDepth) unit_0091(c, 163u, depth + 1u); else { c.pc = 0x00345920u; return; } if (c.pc != 0x0034FF98u) [[unlikely]] return; }
L_0034FF98:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 47u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FFC4u); set32(c.r[4], c.r[2].w[0] + 368u);  if (depth < kMaxDepth) unit_0091(c, 163u, depth + 1u); else { c.pc = 0x00345920u; return; } if (c.pc != 0x0034FFC4u) [[unlikely]] return; }
L_0034FFC4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[29].w[0] + 47u));
    set32(c.r[3], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FFF0u); set32(c.r[4], c.r[2].w[0] + 277u);  if (depth < kMaxDepth) unit_0091(c, 160u, depth + 1u); else { c.pc = 0x003458C0u; return; } if (c.pc != 0x0034FFF0u) [[unlikely]] return; }
L_0034FFF0:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 47u));
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 4;
    [[clang::musttail]] return unit_0094(c, 1u, depth);
}

}
