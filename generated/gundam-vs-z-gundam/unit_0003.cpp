#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0003[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5,
    0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0,
    18, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 31, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    37, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0,
    50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51,
    0, 0, 52, 0, 0, 53, 0, 0, 0, 54, 0, 0, 55, 0, 0, 0, 56, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0,
    59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 63, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 69, 0, 0, 0, 0,
    70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 78, 0, 79, 0, 0, 0,
    80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 83, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0,
    0, 0, 0, 0, 87, 0, 88, 0, 89, 0, 0, 90, 0, 0, 91, 0, 92, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 97, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0,
    0, 103, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0,
    0, 106, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 111, 0, 0,
    0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 115, 0, 0, 0,
    116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0,
    124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0,
    0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0,
    0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 136, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0,
    0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 146, 0, 147, 0, 0, 0, 148, 0, 149, 0, 150, 0, 151, 0, 152, 0,
    153, 0, 154, 0, 155, 0, 0, 0, 156, 0, 157, 0, 158, 0, 159, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0,
    163, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0,
    0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 173, 0, 174, 0, 0, 175, 176, 0, 177, 0, 0, 0, 178, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 180, 0, 181, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 184, 0, 185, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 0, 188, 0, 0, 0, 0,
    189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    195, 0, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 201, 0, 202, 0, 203, 0, 204, 0, 0, 0, 205, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0,
    0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 212, 0, 213, 0, 0, 214, 215, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0,
    221, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224,
    0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 230, 0, 231, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 237, 0, 238, 0, 239,
    0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 245, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0, 0,
    0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    255, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 278, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 0, 0,
    0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0,
    294, 0, 0, 0, 0, 295, 0, 296, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 0,
    0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 304, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 307, 0, 0,
    0, 308, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 311, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 316, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0,
    0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0,
    0, 0, 0, 0, 322, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 327, 0, 328, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0,
    0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 338,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 0,
    0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0,
    0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 349, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 353,
    0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357,
    0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0,
    0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    375, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 377, 0, 378, 0, 379, 0, 0, 0, 380, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 382, 0, 0, 0, 0, 383, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 386, 0, 0,
    387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 398, 0, 0, 399, 0, 400, 0, 0, 0, 401,
    0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0,
    0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406,
    0, 0, 0, 407, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    413, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 415, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 420,
    0, 0, 421, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 423, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    430, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    437, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 439, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 442,
    0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 444, 0, 0, 0, 445, 446, 0, 447, 448, 449, 0, 0, 450, 0, 451, 0, 0, 0, 0, 0, 452,
};

void unit_0003(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0010C000;
    case 2u: goto L_0010C010;
    case 3u: goto L_0010C028;
    case 4u: goto L_0010C038;
    case 5u: goto L_0010C07C;
    case 6u: goto L_0010C0A0;
    case 7u: goto L_0010C0B4;
    case 8u: goto L_0010C0C4;
    case 9u: goto L_0010C0EC;
    case 10u: goto L_0010C120;
    case 11u: goto L_0010C140;
    case 12u: goto L_0010C158;
    case 13u: goto L_0010C168;
    case 14u: goto L_0010C1AC;
    case 15u: goto L_0010C1D0;
    case 16u: goto L_0010C1E0;
    case 17u: goto L_0010C1F0;
    case 18u: goto L_0010C200;
    case 19u: goto L_0010C210;
    case 20u: goto L_0010C248;
    case 21u: goto L_0010C258;
    case 22u: goto L_0010C280;
    case 23u: goto L_0010C2B8;
    case 24u: goto L_0010C320;
    case 25u: goto L_0010C3B0;
    case 26u: goto L_0010C3F4;
    case 27u: goto L_0010C438;
    case 28u: goto L_0010C44C;
    case 29u: goto L_0010C458;
    case 30u: goto L_0010C468;
    case 31u: goto L_0010C478;
    case 32u: goto L_0010C4A8;
    case 33u: goto L_0010C4B8;
    case 34u: goto L_0010C4E4;
    case 35u: goto L_0010C4F8;
    case 36u: goto L_0010C528;
    case 37u: goto L_0010C580;
    case 38u: goto L_0010C590;
    case 39u: goto L_0010C5C8;
    case 40u: goto L_0010C5F0;
    case 41u: goto L_0010C640;
    case 42u: goto L_0010C6B8;
    case 43u: goto L_0010C6DC;
    case 44u: goto L_0010C764;
    case 45u: goto L_0010C798;
    case 46u: goto L_0010C7BC;
    case 47u: goto L_0010C7C8;
    case 48u: goto L_0010C7D0;
    case 49u: goto L_0010C7DC;
    case 50u: goto L_0010C800;
    case 51u: goto L_0010C87C;
    case 52u: goto L_0010C888;
    case 53u: goto L_0010C894;
    case 54u: goto L_0010C8A4;
    case 55u: goto L_0010C8B0;
    case 56u: goto L_0010C8C0;
    case 57u: goto L_0010C8CC;
    case 58u: goto L_0010C8F0;
    case 59u: goto L_0010C900;
    case 60u: goto L_0010C918;
    case 61u: goto L_0010C928;
    case 62u: goto L_0010C940;
    case 63u: goto L_0010C94C;
    case 64u: goto L_0010C958;
    case 65u: goto L_0010C968;
    case 66u: goto L_0010C990;
    case 67u: goto L_0010C9D4;
    case 68u: goto L_0010C9E4;
    case 69u: goto L_0010C9EC;
    case 70u: goto L_0010CA00;
    case 71u: goto L_0010CA38;
    case 72u: goto L_0010CA64;
    case 73u: goto L_0010CA78;
    case 74u: goto L_0010CAA8;
    case 75u: goto L_0010CAB4;
    case 76u: goto L_0010CAC0;
    case 77u: goto L_0010CB60;
    case 78u: goto L_0010CB68;
    case 79u: goto L_0010CB70;
    case 80u: goto L_0010CB80;
    case 81u: goto L_0010CBA8;
    case 82u: goto L_0010CBB0;
    case 83u: goto L_0010CBB8;
    case 84u: goto L_0010CBC0;
    case 85u: goto L_0010CBC8;
    case 86u: goto L_0010CBF8;
    case 87u: goto L_0010CC10;
    case 88u: goto L_0010CC18;
    case 89u: goto L_0010CC20;
    case 90u: goto L_0010CC2C;
    case 91u: goto L_0010CC38;
    case 92u: goto L_0010CC40;
    case 93u: goto L_0010CC48;
    case 94u: goto L_0010CC58;
    case 95u: goto L_0010CC6C;
    case 96u: goto L_0010CCB0;
    case 97u: goto L_0010CCB8;
    case 98u: goto L_0010CCC0;
    case 99u: goto L_0010CCE4;
    case 100u: goto L_0010CD50;
    case 101u: goto L_0010CD60;
    case 102u: goto L_0010CD74;
    case 103u: goto L_0010CD84;
    case 104u: goto L_0010CD90;
    case 105u: goto L_0010CDE0;
    case 106u: goto L_0010CE04;
    case 107u: goto L_0010CE0C;
    case 108u: goto L_0010CE20;
    case 109u: goto L_0010CE38;
    case 110u: goto L_0010CE6C;
    case 111u: goto L_0010CE74;
    case 112u: goto L_0010CE88;
    case 113u: goto L_0010CEA0;
    case 114u: goto L_0010CEE8;
    case 115u: goto L_0010CEF0;
    case 116u: goto L_0010CF00;
    case 117u: goto L_0010CF18;
    case 118u: goto L_0010CF40;
    case 119u: goto L_0010CF5C;
    case 120u: goto L_0010CFC0;
    case 121u: goto L_0010D0C0;
    case 122u: goto L_0010D0D4;
    case 123u: goto L_0010D0DC;
    case 124u: goto L_0010D100;
    case 125u: goto L_0010D320;
    case 126u: goto L_0010D338;
    case 127u: goto L_0010D378;
    case 128u: goto L_0010D390;
    case 129u: goto L_0010D3B4;
    case 130u: goto L_0010D3C4;
    case 131u: goto L_0010D3F8;
    case 132u: goto L_0010D408;
    case 133u: goto L_0010D430;
    case 134u: goto L_0010D448;
    case 135u: goto L_0010D470;
    case 136u: goto L_0010D478;
    case 137u: goto L_0010D4B8;
    case 138u: goto L_0010D4F8;
    case 139u: goto L_0010D504;
    case 140u: goto L_0010D514;
    case 141u: goto L_0010D528;
    case 142u: goto L_0010D540;
    case 143u: goto L_0010D554;
    case 144u: goto L_0010D570;
    case 145u: goto L_0010D5B8;
    case 146u: goto L_0010D5C0;
    case 147u: goto L_0010D5C8;
    case 148u: goto L_0010D5D8;
    case 149u: goto L_0010D5E0;
    case 150u: goto L_0010D5E8;
    case 151u: goto L_0010D5F0;
    case 152u: goto L_0010D5F8;
    case 153u: goto L_0010D600;
    case 154u: goto L_0010D608;
    case 155u: goto L_0010D610;
    case 156u: goto L_0010D620;
    case 157u: goto L_0010D628;
    case 158u: goto L_0010D630;
    case 159u: goto L_0010D638;
    case 160u: goto L_0010D640;
    case 161u: goto L_0010D650;
    case 162u: goto L_0010D678;
    case 163u: goto L_0010D680;
    case 164u: goto L_0010D688;
    case 165u: goto L_0010D69C;
    case 166u: goto L_0010D6C0;
    case 167u: goto L_0010D6C8;
    case 168u: goto L_0010D6D0;
    case 169u: goto L_0010D6F0;
    case 170u: goto L_0010D708;
    case 171u: goto L_0010D728;
    case 172u: goto L_0010D740;
    case 173u: goto L_0010D748;
    case 174u: goto L_0010D750;
    case 175u: goto L_0010D75C;
    case 176u: goto L_0010D760;
    case 177u: goto L_0010D768;
    case 178u: goto L_0010D778;
    case 179u: goto L_0010D7A0;
    case 180u: goto L_0010D7A8;
    case 181u: goto L_0010D7B0;
    case 182u: goto L_0010D7B8;
    case 183u: goto L_0010D7E0;
    case 184u: goto L_0010D7E8;
    case 185u: goto L_0010D7F0;
    case 186u: goto L_0010D844;
    case 187u: goto L_0010D860;
    case 188u: goto L_0010D86C;
    case 189u: goto L_0010D880;
    case 190u: goto L_0010D898;
    case 191u: goto L_0010D8AC;
    case 192u: goto L_0010D8B8;
    case 193u: goto L_0010D8D0;
    case 194u: goto L_0010D908;
    case 195u: goto L_0010D980;
    case 196u: goto L_0010D998;
    case 197u: goto L_0010D9A0;
    case 198u: goto L_0010D9C8;
    case 199u: goto L_0010D9DC;
    case 200u: goto L_0010DA40;
    case 201u: goto L_0010DA48;
    case 202u: goto L_0010DA50;
    case 203u: goto L_0010DA58;
    case 204u: goto L_0010DA60;
    case 205u: goto L_0010DA70;
    case 206u: goto L_0010DA98;
    case 207u: goto L_0010DAA0;
    case 208u: goto L_0010DAA8;
    case 209u: goto L_0010DAF0;
    case 210u: goto L_0010DB08;
    case 211u: goto L_0010DB20;
    case 212u: goto L_0010DB28;
    case 213u: goto L_0010DB30;
    case 214u: goto L_0010DB3C;
    case 215u: goto L_0010DB40;
    case 216u: goto L_0010DB48;
    case 217u: goto L_0010DB58;
    case 218u: goto L_0010DB80;
    case 219u: goto L_0010DB98;
    case 220u: goto L_0010DBF0;
    case 221u: goto L_0010DC00;
    case 222u: goto L_0010DC10;
    case 223u: goto L_0010DC20;
    case 224u: goto L_0010DC7C;
    case 225u: goto L_0010DC90;
    case 226u: goto L_0010DCB8;
    case 227u: goto L_0010DCD0;
    case 228u: goto L_0010DCF0;
    case 229u: goto L_0010DD28;
    case 230u: goto L_0010DD30;
    case 231u: goto L_0010DD38;
    case 232u: goto L_0010DD40;
    case 233u: goto L_0010DD50;
    case 234u: goto L_0010DD78;
    case 235u: goto L_0010DDCC;
    case 236u: goto L_0010DDDC;
    case 237u: goto L_0010DDEC;
    case 238u: goto L_0010DDF4;
    case 239u: goto L_0010DDFC;
    case 240u: goto L_0010DE14;
    case 241u: goto L_0010DE60;
    case 242u: goto L_0010DE74;
    case 243u: goto L_0010DEA0;
    case 244u: goto L_0010DEBC;
    case 245u: goto L_0010DEC4;
    case 246u: goto L_0010DECC;
    case 247u: goto L_0010DEDC;
    case 248u: goto L_0010DEF0;
    case 249u: goto L_0010DF04;
    case 250u: goto L_0010DF30;
    case 251u: goto L_0010DF48;
    case 252u: goto L_0010DF58;
    case 253u: goto L_0010DF70;
    case 254u: goto L_0010DFB8;
    case 255u: goto L_0010E000;
    case 256u: goto L_0010E020;
    case 257u: goto L_0010E08C;
    case 258u: goto L_0010E0C0;
    case 259u: goto L_0010E100;
    case 260u: goto L_0010E130;
    case 261u: goto L_0010E188;
    case 262u: goto L_0010E1C0;
    case 263u: goto L_0010E220;
    case 264u: goto L_0010E270;
    case 265u: goto L_0010E2AC;
    case 266u: goto L_0010E2E0;
    case 267u: goto L_0010E2F0;
    case 268u: goto L_0010E350;
    case 269u: goto L_0010E3B4;
    case 270u: goto L_0010E3E0;
    case 271u: goto L_0010E41C;
    case 272u: goto L_0010E460;
    case 273u: goto L_0010E4B0;
    case 274u: goto L_0010E4C4;
    case 275u: goto L_0010E518;
    case 276u: goto L_0010E530;
    case 277u: goto L_0010E5A0;
    case 278u: goto L_0010E5B8;
    case 279u: goto L_0010E5C0;
    case 280u: goto L_0010E5D0;
    case 281u: goto L_0010E5E8;
    case 282u: goto L_0010E650;
    case 283u: goto L_0010E688;
    case 284u: goto L_0010E6A0;
    case 285u: goto L_0010E6AC;
    case 286u: goto L_0010E6BC;
    case 287u: goto L_0010E6D8;
    case 288u: goto L_0010E728;
    case 289u: goto L_0010E748;
    case 290u: goto L_0010E758;
    case 291u: goto L_0010E768;
    case 292u: goto L_0010E788;
    case 293u: goto L_0010E7F0;
    case 294u: goto L_0010E800;
    case 295u: goto L_0010E814;
    case 296u: goto L_0010E81C;
    case 297u: goto L_0010E838;
    case 298u: goto L_0010E850;
    case 299u: goto L_0010E85C;
    case 300u: goto L_0010E86C;
    case 301u: goto L_0010E888;
    case 302u: goto L_0010E8F0;
    case 303u: goto L_0010E92C;
    case 304u: goto L_0010E934;
    case 305u: goto L_0010E950;
    case 306u: goto L_0010E968;
    case 307u: goto L_0010E974;
    case 308u: goto L_0010E984;
    case 309u: goto L_0010E9A0;
    case 310u: goto L_0010E9CC;
    case 311u: goto L_0010EA04;
    case 312u: goto L_0010EA20;
    case 313u: goto L_0010EA4C;
    case 314u: goto L_0010EA70;
    case 315u: goto L_0010EAB8;
    case 316u: goto L_0010EAD0;
    case 317u: goto L_0010EADC;
    case 318u: goto L_0010EAEC;
    case 319u: goto L_0010EB08;
    case 320u: goto L_0010EB50;
    case 321u: goto L_0010EB78;
    case 322u: goto L_0010EB90;
    case 323u: goto L_0010EB9C;
    case 324u: goto L_0010EBAC;
    case 325u: goto L_0010EBC8;
    case 326u: goto L_0010EC44;
    case 327u: goto L_0010EC8C;
    case 328u: goto L_0010EC94;
    case 329u: goto L_0010EC9C;
    case 330u: goto L_0010ECC0;
    case 331u: goto L_0010ECF0;
    case 332u: goto L_0010ED08;
    case 333u: goto L_0010ED18;
    case 334u: goto L_0010ED40;
    case 335u: goto L_0010ED68;
    case 336u: goto L_0010EDC4;
    case 337u: goto L_0010EDE8;
    case 338u: goto L_0010EDFC;
    case 339u: goto L_0010EE44;
    case 340u: goto L_0010EE58;
    case 341u: goto L_0010EE6C;
    case 342u: goto L_0010EE84;
    case 343u: goto L_0010EEE8;
    case 344u: goto L_0010EF08;
    case 345u: goto L_0010EF38;
    case 346u: goto L_0010EF64;
    case 347u: goto L_0010EF98;
    case 348u: goto L_0010EFE0;
    case 349u: goto L_0010F00C;
    case 350u: goto L_0010F020;
    case 351u: goto L_0010F04C;
    case 352u: goto L_0010F074;
    case 353u: goto L_0010F07C;
    case 354u: goto L_0010F08C;
    case 355u: goto L_0010F0C8;
    case 356u: goto L_0010F138;
    case 357u: goto L_0010F17C;
    case 358u: goto L_0010F184;
    case 359u: goto L_0010F1B8;
    case 360u: goto L_0010F1DC;
    case 361u: goto L_0010F208;
    case 362u: goto L_0010F220;
    case 363u: goto L_0010F244;
    case 364u: goto L_0010F260;
    case 365u: goto L_0010F2A4;
    case 366u: goto L_0010F380;
    case 367u: goto L_0010F3F4;
    case 368u: goto L_0010F418;
    case 369u: goto L_0010F440;
    case 370u: goto L_0010F490;
    case 371u: goto L_0010F4E0;
    case 372u: goto L_0010F508;
    case 373u: goto L_0010F52C;
    case 374u: goto L_0010F538;
    case 375u: goto L_0010F580;
    case 376u: goto L_0010F598;
    case 377u: goto L_0010F5B0;
    case 378u: goto L_0010F5B8;
    case 379u: goto L_0010F5C0;
    case 380u: goto L_0010F5D0;
    case 381u: goto L_0010F5D8;
    case 382u: goto L_0010F608;
    case 383u: goto L_0010F61C;
    case 384u: goto L_0010F620;
    case 385u: goto L_0010F660;
    case 386u: goto L_0010F674;
    case 387u: goto L_0010F680;
    case 388u: goto L_0010F6A8;
    case 389u: goto L_0010F6CC;
    case 390u: goto L_0010F6D8;
    case 391u: goto L_0010F708;
    case 392u: goto L_0010F72C;
    case 393u: goto L_0010F740;
    case 394u: goto L_0010F788;
    case 395u: goto L_0010F858;
    case 396u: goto L_0010F898;
    case 397u: goto L_0010F8C0;
    case 398u: goto L_0010F8D8;
    case 399u: goto L_0010F8E4;
    case 400u: goto L_0010F8EC;
    case 401u: goto L_0010F8FC;
    case 402u: goto L_0010F920;
    case 403u: goto L_0010F978;
    case 404u: goto L_0010F99C;
    case 405u: goto L_0010F9B8;
    case 406u: goto L_0010F9FC;
    case 407u: goto L_0010FA0C;
    case 408u: goto L_0010FA1C;
    case 409u: goto L_0010FA48;
    case 410u: goto L_0010FA58;
    case 411u: goto L_0010FA80;
    case 412u: goto L_0010FABC;
    case 413u: goto L_0010FB00;
    case 414u: goto L_0010FB20;
    case 415u: goto L_0010FB40;
    case 416u: goto L_0010FB48;
    case 417u: goto L_0010FB8C;
    case 418u: goto L_0010FBA8;
    case 419u: goto L_0010FBDC;
    case 420u: goto L_0010FBFC;
    case 421u: goto L_0010FC08;
    case 422u: goto L_0010FC20;
    case 423u: goto L_0010FC44;
    case 424u: goto L_0010FC48;
    case 425u: goto L_0010FC90;
    case 426u: goto L_0010FCB8;
    case 427u: goto L_0010FD0C;
    case 428u: goto L_0010FD44;
    case 429u: goto L_0010FD50;
    case 430u: goto L_0010FD80;
    case 431u: goto L_0010FDA0;
    case 432u: goto L_0010FDD0;
    case 433u: goto L_0010FE20;
    case 434u: goto L_0010FE48;
    case 435u: goto L_0010FEA0;
    case 436u: goto L_0010FED8;
    case 437u: goto L_0010FF00;
    case 438u: goto L_0010FF20;
    case 439u: goto L_0010FF34;
    case 440u: goto L_0010FF48;
    case 441u: goto L_0010FF74;
    case 442u: goto L_0010FF7C;
    case 443u: goto L_0010FF94;
    case 444u: goto L_0010FFAC;
    case 445u: goto L_0010FFBC;
    case 446u: goto L_0010FFC0;
    case 447u: goto L_0010FFC8;
    case 448u: goto L_0010FFCC;
    case 449u: goto L_0010FFD0;
    case 450u: goto L_0010FFDC;
    case 451u: goto L_0010FFE4;
    case 452u: goto L_0010FFFC;
    default: bad_entry(c, 0x0010C000u); return;
    }
L_0010C000:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0010C010:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C028u); st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0002(c, 425u, depth + 1u); else { c.pc = 0x0010BA38u; return; } if (c.pc != 0x0010C028u) [[unlikely]] return; }
L_0010C028:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);  if (t) { goto L_0010C08C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C038u);  if (depth < kMaxDepth) unit_0002(c, 430u, depth + 1u); else { c.pc = 0x0010BB38u; return; } if (c.pc != 0x0010C038u) [[unlikely]] return; }
L_0010C038:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_0010C04C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65532ull;  if (t) { goto L_0010C08C; } }
L_0010C04C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[7], c.r[16].w[0] - 15040u);
    st32((c.r[16].w[0] - 15040u), c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] - 14528u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 8u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 4u);
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C07Cu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 459u, depth + 1u); else { c.pc = 0x001076A8u; return; } if (c.pc != 0x0010C07Cu) [[unlikely]] return; }
L_0010C07C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] - 15040u)));  goto L_0010C08C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 2;
L_0010C08C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0010C0A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C0B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 425u, depth + 1u); else { c.pc = 0x0010BA38u; return; } if (c.pc != 0x0010C0B4u) [[unlikely]] return; }
L_0010C0B4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);  if (t) { goto L_0010C130; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C0C4u);  if (depth < kMaxDepth) unit_0002(c, 430u, depth + 1u); else { c.pc = 0x0010BB38u; return; } if (c.pc != 0x0010C0C4u) [[unlikely]] return; }
L_0010C0C4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);  goto L_0010C0D8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65532ull;  if (t) { goto L_0010C130; } }
L_0010C0D8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[2].w[0] - 15032u);
    set32(c.r[6], 0u + 252u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C0ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x0010C0ECu) [[unlikely]] return; }
L_0010C0EC:
    set32(c.r[3], c.r[16].w[0] - 8u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    st8((c.r[3].w[0] + 259u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] - 14528u);
    set32(c.r[5], 0u + 9u);
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 512u);
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C120u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 459u, depth + 1u); else { c.pc = 0x001076A8u; return; } if (c.pc != 0x0010C120u) [[unlikely]] return; }
L_0010C120:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] - 8u)));  goto L_0010C130; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 2;
L_0010C130:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0010C140:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C158u); st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0002(c, 425u, depth + 1u); else { c.pc = 0x0010BA38u; return; } if (c.pc != 0x0010C158u) [[unlikely]] return; }
L_0010C158:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);  if (t) { goto L_0010C1BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C168u);  if (depth < kMaxDepth) unit_0002(c, 430u, depth + 1u); else { c.pc = 0x0010BB38u; return; } if (c.pc != 0x0010C168u) [[unlikely]] return; }
L_0010C168:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_0010C17C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65532ull;  if (t) { goto L_0010C1BC; } }
L_0010C17C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[7], c.r[16].w[0] - 15040u);
    st32((c.r[16].w[0] - 15040u), c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] - 14528u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 10u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 4u);
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C1ACu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 459u, depth + 1u); else { c.pc = 0x001076A8u; return; } if (c.pc != 0x0010C1ACu) [[unlikely]] return; }
L_0010C1AC:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] - 15040u)));  goto L_0010C1BC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 2;
L_0010C1BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0010C1D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C1E0u); c.r[7].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 436u, depth + 1u); else { c.pc = 0x0010BC00u; return; } if (c.pc != 0x0010C1E0u) [[unlikely]] return; }
L_0010C1E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0010C1F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C200u);  if (depth < kMaxDepth) unit_0002(c, 436u, depth + 1u); else { c.pc = 0x0010BC00u; return; } if (c.pc != 0x0010C200u) [[unlikely]] return; }
L_0010C200:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0010C210:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C248u); st64((c.r[29].w[0] + 96u), c.r[21].d[0]);  if (depth < kMaxDepth) unit_0002(c, 425u, depth + 1u); else { c.pc = 0x0010BA38u; return; } if (c.pc != 0x0010C248u) [[unlikely]] return; }
L_0010C248:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);  if (t) { goto L_0010C410; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C258u);  if (depth < kMaxDepth) unit_0002(c, 430u, depth + 1u); else { c.pc = 0x0010BB38u; return; } if (c.pc != 0x0010C258u) [[unlikely]] return; }
L_0010C258:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);  goto L_0010C26C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65532ull;  if (t) { goto L_0010C410; } }
L_0010C26C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], c.r[2].w[0] - 15032u);
    set32(c.r[6], 0u + 252u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C280u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x0010C280u) [[unlikely]] return; }
L_0010C280:
    set32(c.r[2], c.r[17].w[0] - 8u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st8((c.r[2].w[0] + 259u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0010C3B8; } }
    c.r[2].d[0] = c.r[18].sd[0] < 253ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0010C3A0; } }
    set32(c.r[4], c.r[17].w[0] + 252u);
    c.r[2].d[0] = c.r[16].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0010C314; } }
    set32(c.r[2], c.r[16].w[0] + 224u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 3;
L_0010C2B8:
    ldl(c.r[6], (c.r[3].w[0] + 7u));
    ldr(c.r[6], (c.r[3].w[0]));
    ldl(c.r[7], (c.r[3].w[0] + 15u));
    ldr(c.r[7], (c.r[3].w[0] + 8u));
    ldl(c.r[8], (c.r[3].w[0] + 23u));
    ldr(c.r[8], (c.r[3].w[0] + 16u));
    ldl(c.r[9], (c.r[3].w[0] + 31u));
    ldr(c.r[9], (c.r[3].w[0] + 24u));
    sdl(c.r[6], (c.r[4].w[0] + 7u));
    sdr(c.r[6], (c.r[4].w[0]));
    sdl(c.r[7], (c.r[4].w[0] + 15u));
    sdr(c.r[7], (c.r[4].w[0] + 8u));
    sdl(c.r[8], (c.r[4].w[0] + 23u));
    sdr(c.r[8], (c.r[4].w[0] + 16u));
    sdl(c.r[9], (c.r[4].w[0] + 31u));
    sdr(c.r[9], (c.r[4].w[0] + 24u));
    set32(c.r[3], c.r[3].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 21;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010C2B8u | kUnwind; return; } goto L_0010C2B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010C354; } }
L_0010C314:
    set32(c.r[2], c.r[16].w[0] + 224u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 3;
L_0010C320:
    c.r[6].d[0] = ld64((c.r[3].w[0]));
    c.r[7].d[0] = ld64((c.r[3].w[0] + 8u));
    c.r[8].d[0] = ld64((c.r[3].w[0] + 16u));
    c.r[9].d[0] = ld64((c.r[3].w[0] + 24u));
    st64((c.r[4].w[0]), c.r[6].d[0]);
    st64((c.r[4].w[0] + 8u), c.r[7].d[0]);
    st64((c.r[4].w[0] + 16u), c.r[8].d[0]);
    st64((c.r[4].w[0] + 24u), c.r[9].d[0]);
    set32(c.r[3], c.r[3].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010C320u | kUnwind; return; } goto L_0010C320; } }
L_0010C354:
    ldl(c.r[6], (c.r[3].w[0] + 7u));
    ldr(c.r[6], (c.r[3].w[0]));
    ldl(c.r[7], (c.r[3].w[0] + 15u));
    ldr(c.r[7], (c.r[3].w[0] + 8u));
    ldl(c.r[8], (c.r[3].w[0] + 23u));
    ldr(c.r[8], (c.r[3].w[0] + 16u));
    lwl(c.r[9], (c.r[3].w[0] + 27u));
    lwr(c.r[9], (c.r[3].w[0] + 24u));
    sdl(c.r[6], (c.r[4].w[0] + 7u));
    sdr(c.r[6], (c.r[4].w[0]));
    sdl(c.r[7], (c.r[4].w[0] + 15u));
    sdr(c.r[7], (c.r[4].w[0] + 8u));
    sdl(c.r[8], (c.r[4].w[0] + 23u));
    sdr(c.r[8], (c.r[4].w[0] + 16u));
    swl(c.r[9], (c.r[4].w[0] + 27u));
    set32(c.r[2], 0u + 252u);
    swr(c.r[9], (c.r[4].w[0] + 24u));
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] - 15040u), c.r[2].w[0]);  if (t) { goto L_0010C3C8; } }
L_0010C3A0:
    set32(c.r[4], c.r[17].w[0] + 252u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C3B0u); c.r[21].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0010C3B0u) [[unlikely]] return; }
L_0010C3B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] - 8u), c.r[18].w[0]);  if (t) { goto L_0010C3C4; } }
L_0010C3B8:
    st8((c.r[2].w[0] + 260u), static_cast<std::uint8_t>(0u));
    c.r[21].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[17].w[0] - 8u), 0u);
    c.budget -= 3;
L_0010C3C4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 1;
L_0010C3C8:
    set32(c.r[16], c.r[21].w[0] - 15040u);
    set32(c.r[4], c.r[5].w[0] - 14528u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 512u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 8u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C3F4u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 459u, depth + 1u); else { c.pc = 0x001076A8u; return; } if (c.pc != 0x0010C3F4u) [[unlikely]] return; }
L_0010C3F4:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_0010C408; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65535ull;  if (t) { goto L_0010C410; } }
L_0010C408:
    set32(c.r[2], ld32((c.r[21].w[0] - 15040u)));
    st32((c.r[20].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_0010C410:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0010C438:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[8].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C44Cu); c.r[7].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 19u, depth + 1u); else { c.pc = 0x0010C210u; return; } if (c.pc != 0x0010C44Cu) [[unlikely]] return; }
L_0010C44C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0010C458:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C468u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 19u, depth + 1u); else { c.pc = 0x0010C210u; return; } if (c.pc != 0x0010C468u) [[unlikely]] return; }
L_0010C468:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0010C478:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C4A8u); st64((c.r[29].w[0] + 32u), c.r[17].d[0]);  if (depth < kMaxDepth) unit_0002(c, 425u, depth + 1u); else { c.pc = 0x0010BA38u; return; } if (c.pc != 0x0010C4A8u) [[unlikely]] return; }
L_0010C4A8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);  if (t) { goto L_0010C55C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C4B8u);  if (depth < kMaxDepth) unit_0002(c, 430u, depth + 1u); else { c.pc = 0x0010BB38u; return; } if (c.pc != 0x0010C4B8u) [[unlikely]] return; }
L_0010C4B8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);  goto L_0010C4CC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65532ull;  if (t) { goto L_0010C55C; } }
L_0010C4CC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[2].w[0] - 15032u);
    set32(c.r[6], 0u + 252u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C4E4u); set32(c.r[16], c.r[17].w[0] - 8u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x0010C4E4u) [[unlikely]] return; }
L_0010C4E4:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[16].w[0] + 259u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[17].w[0] + 252u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C4F8u); set32(c.r[6], 0u + 252u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x0010C4F8u) [[unlikely]] return; }
L_0010C4F8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st8((c.r[16].w[0] + 511u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 14528u);
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 512u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 16u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C528u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 459u, depth + 1u); else { c.pc = 0x001076A8u; return; } if (c.pc != 0x0010C528u) [[unlikely]] return; }
L_0010C528:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[17].w[0] - 8u)));  goto L_0010C53C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65535ull;  if (t) { goto L_0010C55C; } }
L_0010C53C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[20].w[0]), c.r[2].w[0]);  goto L_0010C550; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65533ull;  if (t) { goto L_0010C55C; } }
L_0010C550:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[20].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_0010C55C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0010C580:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C590u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0003(c, 31u, depth + 1u); else { c.pc = 0x0010C478u; return; } if (c.pc != 0x0010C590u) [[unlikely]] return; }
L_0010C590:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0010C5C8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C5F0u); st64((c.r[29].w[0] + 32u), c.r[17].d[0]);  if (depth < kMaxDepth) unit_0002(c, 425u, depth + 1u); else { c.pc = 0x0010BA38u; return; } if (c.pc != 0x0010C5F0u) [[unlikely]] return; }
L_0010C5F0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;  if (t) { goto L_0010C600; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);  if (t) { goto L_0010C698; } }
L_0010C600:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_0010C684; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[17].w[0] - 15040u);
    st32((c.r[17].w[0] - 15040u), c.r[19].w[0]);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] - 14528u);
    set32(c.r[5], 0u + 3u);
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 32u);
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[10], 0u + 32u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C640u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 459u, depth + 1u); else { c.pc = 0x001076A8u; return; } if (c.pc != 0x0010C640u) [[unlikely]] return; }
L_0010C640:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0010C654; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65535ull;  if (t) { goto L_0010C698; } }
L_0010C654:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0010C668; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] - 15040u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0010C694; } }
L_0010C668:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0010C67C; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] - 15040u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0010C694; } }
L_0010C67C:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] - 15040u)));  goto L_0010C690; }
L_0010C684:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65534ull;  if (t) { goto L_0010C698; } }
L_0010C690:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0010C694:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010C698:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0010C6B8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C6DCu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 425u, depth + 1u); else { c.pc = 0x0010BA38u; return; } if (c.pc != 0x0010C6DCu) [[unlikely]] return; }
L_0010C6DC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[7].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_0010C6EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);  if (t) { goto L_0010C77C; } }
L_0010C6EC:
    set32(c.r[3], c.r[7].w[0] - 15040u);
    st32((c.r[7].w[0] - 15040u), c.r[18].w[0]);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[3].w[0] + 4u), c.r[16].w[0]);  if (t) { goto L_0010C708; } }
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0010C738; } }
L_0010C708:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0010C720; } }
    c.r[2].d[0] = ld16((c.r[17].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0010C738; } }
L_0010C720:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_0010C734; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65534ull;  if (t) { goto L_0010C77C; } }
L_0010C734:
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 1;
L_0010C738:
    set32(c.r[7], c.r[7].w[0] - 15040u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] - 14528u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 32u);
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[10], 0u + 16u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C764u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 459u, depth + 1u); else { c.pc = 0x001076A8u; return; } if (c.pc != 0x0010C764u) [[unlikely]] return; }
L_0010C764:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = 0ull;
    c.budget -= 6;
L_0010C77C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0010C798:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C7BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 370u, depth + 1u); else { c.pc = 0x0010F490u; return; } if (c.pc != 0x0010C7BCu) [[unlikely]] return; }
L_0010C7BC:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C7C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 370u, depth + 1u); else { c.pc = 0x0010F490u; return; } if (c.pc != 0x0010C7C8u) [[unlikely]] return; }
L_0010C7C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C7D0u);  if (depth < kMaxDepth) unit_0001(c, 86u, depth + 1u); else { c.pc = 0x001045B0u; return; } if (c.pc != 0x0010C7D0u) [[unlikely]] return; }
L_0010C7D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C7DCu);  if (depth < kMaxDepth) unit_0001(c, 106u, depth + 1u); else { c.pc = 0x001046F0u; return; } if (c.pc != 0x0010C7DCu) [[unlikely]] return; }
L_0010C7DC:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[11].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[10].w[0] - 14464u);
    st32((c.r[3].w[0] + 20u), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_0010C820; } }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 2;
L_0010C800:
    set32(c.r[3], c.r[10].w[0] - 14464u);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[3].w[0] + 24u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], c.r[17].w[0] + c.r[9].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = ld8((c.r[2].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010C800u | kUnwind; return; } goto L_0010C800; }
L_0010C820:
    set32(c.r[6], c.r[10].w[0] - 14464u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[6].w[0] + 4u), 0u);
    set32(c.r[4], 0u - 1u);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] | 255ull;
    c.r[3].d[0] = c.r[3].d[0] | 3ull;
    set32(c.r[5], 0u + 104u);
    c.r[2].d[0] = ld64((c.r[10].w[0] - 14464u));
    set32(c.r[7], 0u + 104u);
    st32((c.r[6].w[0] + 16u), c.r[9].w[0]);
    set32(c.r[8], 0u + 68u);
    st32((c.r[6].w[0] + 8u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st64((c.r[10].w[0] - 14464u), c.r[2].d[0]);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    st8((c.r[10].w[0] - 14464u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], 0u + 104u);
    st32((c.r[29].w[0] + 4u), c.r[11].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 12u), c.r[8].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C87Cu); st32((c.r[29].w[0]), c.r[6].w[0]);  if (depth < kMaxDepth) unit_0001(c, 389u, depth + 1u); else { c.pc = 0x00106C90u; return; } if (c.pc != 0x0010C87Cu) [[unlikely]] return; }
L_0010C87C:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C888u); c.r[5].sd[0] = static_cast<std::int32_t>(0x00040000u);  if (depth < kMaxDepth) unit_0001(c, 104u, depth + 1u); else { c.pc = 0x001046E0u; return; } if (c.pc != 0x0010C888u) [[unlikely]] return; }
L_0010C888:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C894u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 96u, depth + 1u); else { c.pc = 0x001046A0u; return; } if (c.pc != 0x0010C894u) [[unlikely]] return; }
L_0010C894:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 4u);  if (t) { goto L_0010C8D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C8A4u); c.r[5].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (depth < kMaxDepth) unit_0001(c, 104u, depth + 1u); else { c.pc = 0x001046E0u; return; } if (c.pc != 0x0010C8A4u) [[unlikely]] return; }
L_0010C8A4:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C8B0u); c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);  if (depth < kMaxDepth) unit_0001(c, 104u, depth + 1u); else { c.pc = 0x001046E0u; return; } if (c.pc != 0x0010C8B0u) [[unlikely]] return; }
L_0010C8B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C8C0u); c.r[4].d[0] = c.r[4].d[0] | 2ull;  if (depth < kMaxDepth) unit_0001(c, 104u, depth + 1u); else { c.pc = 0x001046E0u; return; } if (c.pc != 0x0010C8C0u) [[unlikely]] return; }
L_0010C8C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C8CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 104u, depth + 1u); else { c.pc = 0x001046E0u; return; } if (c.pc != 0x0010C8CCu) [[unlikely]] return; }
L_0010C8CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0010C8D8; } }
L_0010C8D4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010C8D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0010C8F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C900u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0001(c, 106u, depth + 1u); else { c.pc = 0x001046F0u; return; } if (c.pc != 0x0010C900u) [[unlikely]] return; }
L_0010C900:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0010C918:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C928u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0001(c, 106u, depth + 1u); else { c.pc = 0x001046F0u; return; } if (c.pc != 0x0010C928u) [[unlikely]] return; }
L_0010C928:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010C95C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C940u);  if (depth < kMaxDepth) unit_0001(c, 114u, depth + 1u); else { c.pc = 0x00104760u; return; } if (c.pc != 0x0010C940u) [[unlikely]] return; }
L_0010C940:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C94Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0003(c, 370u, depth + 1u); else { c.pc = 0x0010F490u; return; } if (c.pc != 0x0010C94Cu) [[unlikely]] return; }
L_0010C94C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C958u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0003(c, 370u, depth + 1u); else { c.pc = 0x0010F490u; return; } if (c.pc != 0x0010C958u) [[unlikely]] return; }
L_0010C958:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0010C95C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0010C968:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    st64((c.r[29].w[0] + 96u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[17], c.r[2].w[0] + 7344u);  if (t) { goto L_0010C9B4; } }
    set32(c.r[3], c.r[16].w[0] - 11u);
    c.budget -= 1;
L_0010C990:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010C990u | kUnwind; return; } goto L_0010C990; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[4].w[0] - c.r[3].w[0]);  if (t) { goto L_0010C9BC; } }
L_0010C9B4:
    set32(c.r[3], c.r[16].w[0] - 11u);
    set32(c.r[2], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 2;
L_0010C9BC:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(81ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_0010C9DC; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C9D4u); set32(c.r[4], c.r[4].w[0] + 7360u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x0010C9D4u) [[unlikely]] return; }
L_0010C9D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010CA64; } }
L_0010C9DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C9E4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 392u, depth + 1u); else { c.pc = 0x00106D40u; return; } if (c.pc != 0x0010C9E4u) [[unlikely]] return; }
L_0010C9E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C9ECu);  if (depth < kMaxDepth) unit_0001(c, 406u, depth + 1u); else { c.pc = 0x00106EE0u; return; } if (c.pc != 0x0010C9ECu) [[unlikely]] return; }
L_0010C9EC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[3].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = ld8((c.r[17].w[0]));  if (t) { goto L_0010CA24; } }
    c.r[5].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 1;
L_0010CA00:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[4].d[0] = ld8((c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010CA00u | kUnwind; return; } goto L_0010CA00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0010CA2C; } }
L_0010CA24:
    c.r[5].d[0] = ld8((c.r[16].w[0]));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 2;
L_0010CA2C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));  goto L_0010CA58; }
    c.budget -= 1;
L_0010CA38:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010CA38u | kUnwind; return; } goto L_0010CA38; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0010CA58:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CA64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 45u, depth + 1u); else { c.pc = 0x0010C798u; return; } if (c.pc != 0x0010CA64u) [[unlikely]] return; }
L_0010CA64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0010CA78:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00110000u);
    set32(c.r[16], c.r[16].w[0] - 12352u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[2].w[0] - 23464u), c.r[17].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CAA8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0000(c, 371u, depth + 1u); else { c.pc = 0x00103F90u; return; } if (c.pc != 0x0010CAA8u) [[unlikely]] return; }
L_0010CAA8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CAB4u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 371u, depth + 1u); else { c.pc = 0x00103F90u; return; } if (c.pc != 0x0010CAB4u) [[unlikely]] return; }
L_0010CAB4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CAC0u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0000(c, 371u, depth + 1u); else { c.pc = 0x00103F90u; return; } if (c.pc != 0x0010CAC0u) [[unlikely]] return; }
L_0010CAC0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0010CB60:
    set32(c.r[3], 0u + 90u);
    c.budget -= 1;
    c.pc = 0x0010CB68u; syscall(c, 0x0010CB64u); if (c.pc != 0x0010CB68u) return;
    c.budget -= 1;
L_0010CB68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010CB70:
    set32(c.r[6], c.r[6].w[0] >> 2);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0010CBA0; } }
    c.budget -= 1;
L_0010CB80:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010CB80u | kUnwind; return; } goto L_0010CB80; } }
L_0010CBA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0010CBA8:
    set32(c.r[3], 0u + 91u);
    c.budget -= 1;
    c.pc = 0x0010CBB0u; syscall(c, 0x0010CBACu); if (c.pc != 0x0010CBB0u) return;
    c.budget -= 1;
L_0010CBB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010CBB8:
    set32(c.r[3], 0u + 116u);
    c.budget -= 1;
    c.pc = 0x0010CBC0u; syscall(c, 0x0010CBBCu); if (c.pc != 0x0010CBC0u) return;
    c.budget -= 1;
L_0010CBC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010CBC8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[18], 0u + 3u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[16], c.r[2].w[0] - 23384u);
    set32(c.r[4], ld32((c.r[2].w[0] - 23384u)));
    set32(c.r[17], c.r[16].w[0] + 24u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CBF8u); set32(c.r[5], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0003(c, 83u, depth + 1u); else { c.pc = 0x0010CBB8u; return; } if (c.pc != 0x0010CBF8u) [[unlikely]] return; }
L_0010CBF8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80070000u);
    set32(c.r[6], 0u + 816u);
    set32(c.r[5], c.r[5].w[0] - 24280u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CC10u); c.r[4].d[0] = c.r[4].d[0] | 20480ull;  if (depth < kMaxDepth) unit_0003(c, 77u, depth + 1u); else { c.pc = 0x0010CB60u; return; } if (c.pc != 0x0010CC10u) [[unlikely]] return; }
L_0010CC10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CC18u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 82u, depth + 1u); else { c.pc = 0x00104560u; return; } if (c.pc != 0x0010CC18u) [[unlikely]] return; }
L_0010CC18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CC20u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 82u, depth + 1u); else { c.pc = 0x00104560u; return; } if (c.pc != 0x0010CC20u) [[unlikely]] return; }
L_0010CC20:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CC2Cu); set32(c.r[5], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_0003(c, 83u, depth + 1u); else { c.pc = 0x0010CBB8u; return; } if (c.pc != 0x0010CC2Cu) [[unlikely]] return; }
L_0010CC2C:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CC38u); set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (depth < kMaxDepth) unit_0003(c, 83u, depth + 1u); else { c.pc = 0x0010CBB8u; return; } if (c.pc != 0x0010CC38u) [[unlikely]] return; }
L_0010CC38:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 2;
L_0010CC40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CC48u); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_0003(c, 81u, depth + 1u); else { c.pc = 0x0010CBA8u; return; } if (c.pc != 0x0010CC48u) [[unlikely]] return; }
L_0010CC48:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CC58u); set32(c.r[17], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_0003(c, 83u, depth + 1u); else { c.pc = 0x0010CBB8u; return; } if (c.pc != 0x0010CC58u) [[unlikely]] return; }
L_0010CC58:
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010CC40u | kUnwind; return; } goto L_0010CC40; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CC6Cu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0003(c, 81u, depth + 1u); else { c.pc = 0x0010CBA8u; return; } if (c.pc != 0x0010CC6Cu) [[unlikely]] return; }
L_0010CC6C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0] - 23392u), c.r[2].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0010CCB0:
    set32(c.r[3], 0u + 86u);
    c.budget -= 1;
    c.pc = 0x0010CCB8u; syscall(c, 0x0010CCB4u); if (c.pc != 0x0010CCB8u) return;
    c.budget -= 1;
L_0010CCB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010CCC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], c.r[4].w[0] - 13u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(35ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0010CCDC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0010CCE4; } }
L_0010CCDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CCE4u);  if (depth < kMaxDepth) unit_0003(c, 96u, depth + 1u); else { c.pc = 0x0010CCB0u; return; } if (c.pc != 0x0010CCE4u) [[unlikely]] return; }
L_0010CCE4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0010CD50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CD60u);  if (depth < kMaxDepth) unit_0001(c, 110u, depth + 1u); else { c.pc = 0x00104740u; return; } if (c.pc != 0x0010CD60u) [[unlikely]] return; }
L_0010CD60:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0010CD7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CD74u);  if (depth < kMaxDepth) unit_0003(c, 104u, depth + 1u); else { c.pc = 0x0010CD90u; return; } if (c.pc != 0x0010CD74u) [[unlikely]] return; }
L_0010CD74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0010CD88; } }
L_0010CD7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CD84u);  if (depth < kMaxDepth) unit_0001(c, 112u, depth + 1u); else { c.pc = 0x00104750u; return; } if (c.pc != 0x0010CD84u) [[unlikely]] return; }
L_0010CD84:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0010CD88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0010CD90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[4], c.r[4].w[0] + 7392u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[16], c.r[18].w[0] - 22696u);
    set32(c.r[5], ld32((c.r[18].w[0] - 22696u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[9], ld32((c.r[16].w[0] + 8u)));
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[9], c.r[7].w[0] + c.r[9].w[0]);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[9], c.r[9].w[0] - 1u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CDE0u); set32(c.r[7], c.r[7].w[0] - 1u);  if (depth < kMaxDepth) unit_0001(c, 348u, depth + 1u); else { c.pc = 0x001064D0u; return; } if (c.pc != 0x0010CDE0u) [[unlikely]] return; }
L_0010CDE0:
    mtc0(c, 6u, 0u);
    set32(c.r[17], ld32((c.r[18].w[0] - 22696u)));
    c.r[2].d[0] = c.r[17].sd[0] < 49ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[25].d[0] = 0ull + 0ull;  if (t) { goto L_0010CE0C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CE04u); set32(c.r[4], c.r[4].w[0] + 7448u);  if (depth < kMaxDepth) unit_0001(c, 348u, depth + 1u); else { c.pc = 0x001064D0u; return; } if (c.pc != 0x0010CE04u) [[unlikely]] return; }
L_0010CE04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CE0Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0003(c, 198u, depth + 1u); else { c.pc = 0x0010D9C8u; return; } if (c.pc != 0x0010CE0Cu) [[unlikely]] return; }
L_0010CE0C:
    c.r[2].d[0] = c.r[25].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], ld32((c.r[16].w[0] + 16u)));  if (t) { goto L_0010CE48; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 2;
L_0010CE20:
    c.r[4].d[0] = c.r[25].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CE38u); set32(c.r[16], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0003(c, 96u, depth + 1u); else { c.pc = 0x0010CCB0u; return; } if (c.pc != 0x0010CE38u) [[unlikely]] return; }
L_0010CE38:
    set32(c.r[25], c.r[25].w[0] + 1u);
    c.r[2].d[0] = c.r[25].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010CE20u | kUnwind; return; } goto L_0010CE20; }
L_0010CE48:
    set32(c.r[16], c.r[18].w[0] - 22696u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[17], c.r[25].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[17].sd[0] < 49ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = c.r[25].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;  if (t) { goto L_0010CE78; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CE6Cu); set32(c.r[4], c.r[4].w[0] + 7472u);  if (depth < kMaxDepth) unit_0001(c, 348u, depth + 1u); else { c.pc = 0x001064D0u; return; } if (c.pc != 0x0010CE6Cu) [[unlikely]] return; }
L_0010CE6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CE74u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0003(c, 198u, depth + 1u); else { c.pc = 0x0010D9C8u; return; } if (c.pc != 0x0010CE74u) [[unlikely]] return; }
L_0010CE74:
    c.r[2].d[0] = c.r[25].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0010CE78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_0010CEB0; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 2;
L_0010CE88:
    c.r[4].d[0] = c.r[25].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CEA0u); set32(c.r[16], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0003(c, 96u, depth + 1u); else { c.pc = 0x0010CCB0u; return; } if (c.pc != 0x0010CEA0u) [[unlikely]] return; }
L_0010CEA0:
    set32(c.r[25], c.r[25].w[0] + 1u);
    c.r[2].d[0] = c.r[25].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010CE88u | kUnwind; return; } goto L_0010CE88; }
L_0010CEB0:
    set32(c.r[16], c.r[18].w[0] - 22696u);
    st32((c.r[16].w[0] + 12u), c.r[25].w[0]);
    mtc0(c, 6u, c.r[25].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 7;
    if (c.r[2].sd[0] <= 0) { c.r[16].d[0] = c.r[25].d[0] + 0ull;  goto L_0010CF2C; }
    set32(c.r[17], c.r[25].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].sd[0] < 49ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[25].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;  if (t) { goto L_0010CEF4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CEE8u); set32(c.r[4], c.r[4].w[0] + 7496u);  if (depth < kMaxDepth) unit_0001(c, 348u, depth + 1u); else { c.pc = 0x001064D0u; return; } if (c.pc != 0x0010CEE8u) [[unlikely]] return; }
L_0010CEE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CEF0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0003(c, 198u, depth + 1u); else { c.pc = 0x0010D9C8u; return; } if (c.pc != 0x0010CEF0u) [[unlikely]] return; }
L_0010CEF0:
    c.r[2].d[0] = c.r[25].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0010CEF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], ld32((c.r[16].w[0] + 24u)));  if (t) { goto L_0010CF28; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_0010CF00:
    c.r[4].d[0] = c.r[25].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CF18u); set32(c.r[16], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0003(c, 96u, depth + 1u); else { c.pc = 0x0010CCB0u; return; } if (c.pc != 0x0010CF18u) [[unlikely]] return; }
L_0010CF18:
    set32(c.r[25], c.r[25].w[0] + 1u);
    c.r[2].d[0] = c.r[25].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010CF00u | kUnwind; return; } goto L_0010CF00; }
L_0010CF28:
    c.r[16].d[0] = c.r[25].d[0] + 0ull;
    c.budget -= 1;
L_0010CF2C:
    c.r[2].d[0] = c.r[16].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[25], c.r[25].w[0] << 13);  if (t) { goto L_0010CF68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xE0000000u);
    set32(c.r[17], c.r[25].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_0010CF40:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CF5Cu); set32(c.r[16], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0003(c, 96u, depth + 1u); else { c.pc = 0x0010CCB0u; return; } if (c.pc != 0x0010CF5Cu) [[unlikely]] return; }
L_0010CF5C:
    c.r[2].d[0] = c.r[16].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8192u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010CF40u | kUnwind; return; } goto L_0010CF40; } }
L_0010CF68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[2].d[0] = c.r[25].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0010CFC0:
    c.r[26].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[26], c.r[26].w[0] - 10240u);
    st128((c.r[26].w[0] + 16u) & ~15u, c.r[1]);
    st128((c.r[26].w[0] + 32u) & ~15u, c.r[2]);
    st128((c.r[26].w[0] + 48u) & ~15u, c.r[3]);
    st128((c.r[26].w[0] + 64u) & ~15u, c.r[4]);
    st128((c.r[26].w[0] + 80u) & ~15u, c.r[5]);
    st128((c.r[26].w[0] + 96u) & ~15u, c.r[6]);
    st128((c.r[26].w[0] + 112u) & ~15u, c.r[7]);
    st128((c.r[26].w[0] + 128u) & ~15u, c.r[8]);
    st128((c.r[26].w[0] + 144u) & ~15u, c.r[9]);
    st128((c.r[26].w[0] + 160u) & ~15u, c.r[10]);
    st128((c.r[26].w[0] + 176u) & ~15u, c.r[11]);
    st128((c.r[26].w[0] + 192u) & ~15u, c.r[12]);
    st128((c.r[26].w[0] + 208u) & ~15u, c.r[13]);
    st128((c.r[26].w[0] + 224u) & ~15u, c.r[14]);
    st128((c.r[26].w[0] + 240u) & ~15u, c.r[15]);
    st128((c.r[26].w[0] + 256u) & ~15u, c.r[16]);
    st128((c.r[26].w[0] + 272u) & ~15u, c.r[17]);
    st128((c.r[26].w[0] + 288u) & ~15u, c.r[18]);
    st128((c.r[26].w[0] + 304u) & ~15u, c.r[19]);
    st128((c.r[26].w[0] + 320u) & ~15u, c.r[20]);
    st128((c.r[26].w[0] + 336u) & ~15u, c.r[21]);
    st128((c.r[26].w[0] + 352u) & ~15u, c.r[22]);
    st128((c.r[26].w[0] + 368u) & ~15u, c.r[23]);
    st128((c.r[26].w[0] + 384u) & ~15u, c.r[24]);
    st128((c.r[26].w[0] + 400u) & ~15u, c.r[25]);
    st128((c.r[26].w[0] + 448u) & ~15u, c.r[28]);
    st128((c.r[26].w[0] + 464u) & ~15u, c.r[29]);
    st128((c.r[26].w[0] + 480u) & ~15u, c.r[30]);
    st128((c.r[26].w[0] + 496u) & ~15u, c.r[31]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st64((c.r[1].w[0] - 9728u), c.r[2].d[0]);
    c.r[2].d[0] = c.hi.d[1];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st64((c.r[1].w[0] - 9720u), c.r[2].d[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st64((c.r[1].w[0] - 9712u), c.r[2].d[0]);
    c.r[2].d[0] = c.lo.d[1];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st64((c.r[1].w[0] - 9704u), c.r[2].d[0]);
    c.r[2].d[0] = c.sa;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st64((c.r[1].w[0] - 9696u), c.r[2].d[0]);
    set32(c.r[4], mfc0(c, 12u, 0u));
    set32(c.r[5], mfc0(c, 13u, 0u));
    set32(c.r[6], mfc0(c, 14u, 0u));
    set32(c.r[7], mfc0(c, 8u, 0u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[8], c.r[8].w[0] - 10240u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] - 9688u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00110000u);
    set32(c.r[1], c.r[1].w[0] - 12096u);
    mtc0(c, 14u, c.r[1].w[0]);
    set32(c.r[1], mfc0(c, 12u, 0u));
    set32(c.r[2], 0u - 2u);
    c.r[1].d[0] = c.r[1].d[0] & c.r[2].d[0];
    mtc0(c, 12u, c.r[1].w[0]);
    c.budget -= 63;
    { const std::uint32_t t = eret(c); c.pc = t; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0010D0C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[1], ld32((c.r[1].w[0] - 23464u)));
    c.r[29].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[1].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D0D4u); set32(c.r[29], c.r[29].w[0] - 10240u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010D0D4u) [[unlikely]] return; }
L_0010D0D4:
    set32(c.r[3], 0u - 84u);
    c.budget -= 1;
    c.pc = 0x0010D0DCu; syscall(c, 0x0010D0D8u); if (c.pc != 0x0010D0DCu) return;
    c.budget -= 1;
L_0010D0DC:
    c.budget -= 9;
L_0010D100:
    set32(c.r[1], mfc0(c, 12u, 0u));
    set32(c.r[26], 0u - 28u);
    c.r[1].d[0] = c.r[1].d[0] & c.r[26].d[0];
    mtc0(c, 12u, c.r[1].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 9688u)));
    mtc0(c, 14u, c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].d[0] = ld64((c.r[2].w[0] - 9728u));
    c.hi.d[0] = c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].d[0] = ld64((c.r[2].w[0] - 9720u));
    c.hi.d[1] = c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].d[0] = ld64((c.r[2].w[0] - 9712u));
    c.lo.d[0] = c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].d[0] = ld64((c.r[2].w[0] - 9704u));
    c.lo.d[1] = c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].d[0] = ld64((c.r[2].w[0] - 9696u));
    c.sa = c.r[2].w[0] & 15u;
    c.r[26].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[26], c.r[26].w[0] - 10240u);
    ld128((c.r[26].w[0] + 16u) & ~15u, c.r[1]);
    ld128((c.r[26].w[0] + 32u) & ~15u, c.r[2]);
    ld128((c.r[26].w[0] + 48u) & ~15u, c.r[3]);
    ld128((c.r[26].w[0] + 64u) & ~15u, c.r[4]);
    ld128((c.r[26].w[0] + 80u) & ~15u, c.r[5]);
    ld128((c.r[26].w[0] + 96u) & ~15u, c.r[6]);
    ld128((c.r[26].w[0] + 112u) & ~15u, c.r[7]);
    ld128((c.r[26].w[0] + 128u) & ~15u, c.r[8]);
    ld128((c.r[26].w[0] + 144u) & ~15u, c.r[9]);
    ld128((c.r[26].w[0] + 160u) & ~15u, c.r[10]);
    ld128((c.r[26].w[0] + 176u) & ~15u, c.r[11]);
    ld128((c.r[26].w[0] + 192u) & ~15u, c.r[12]);
    ld128((c.r[26].w[0] + 208u) & ~15u, c.r[13]);
    ld128((c.r[26].w[0] + 224u) & ~15u, c.r[14]);
    ld128((c.r[26].w[0] + 240u) & ~15u, c.r[15]);
    ld128((c.r[26].w[0] + 256u) & ~15u, c.r[16]);
    ld128((c.r[26].w[0] + 272u) & ~15u, c.r[17]);
    ld128((c.r[26].w[0] + 288u) & ~15u, c.r[18]);
    ld128((c.r[26].w[0] + 304u) & ~15u, c.r[19]);
    ld128((c.r[26].w[0] + 320u) & ~15u, c.r[20]);
    ld128((c.r[26].w[0] + 336u) & ~15u, c.r[21]);
    ld128((c.r[26].w[0] + 352u) & ~15u, c.r[22]);
    ld128((c.r[26].w[0] + 368u) & ~15u, c.r[23]);
    ld128((c.r[26].w[0] + 384u) & ~15u, c.r[24]);
    ld128((c.r[26].w[0] + 400u) & ~15u, c.r[25]);
    ld128((c.r[26].w[0] + 448u) & ~15u, c.r[28]);
    ld128((c.r[26].w[0] + 464u) & ~15u, c.r[29]);
    ld128((c.r[26].w[0] + 480u) & ~15u, c.r[30]);
    ld128((c.r[26].w[0] + 496u) & ~15u, c.r[31]);
    set32(c.r[26], mfc0(c, 12u, 0u));
    c.r[26].d[0] = c.r[26].d[0] | 19ull;
    mtc0(c, 12u, c.r[26].w[0]);
    c.budget -= 60;
    { const std::uint32_t t = eret(c); c.pc = t; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0010D320:
    set32(c.r[3], mfc0(c, 12u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { goto L_0010D364; } }
    c.budget -= 1;
L_0010D338:
    set_interrupts(c, false);
    set32(c.r[2], mfc0(c, 12u, 0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010D338u | kUnwind; return; } goto L_0010D338; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0010D364:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010D378:
    set32(c.r[2], mfc0(c, 12u, 0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set_interrupts(c, true);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_0010D390:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D3B4u); st32((c.r[29].w[0] + 36u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0001(c, 60u, depth + 1u); else { c.pc = 0x001042E0u; return; } if (c.pc != 0x0010D3B4u) [[unlikely]] return; }
L_0010D3B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D3C4u); st32((c.r[3].w[0] - 22640u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0001(c, 60u, depth + 1u); else { c.pc = 0x001042E0u; return; } if (c.pc != 0x0010D3C4u) [[unlikely]] return; }
L_0010D3C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    st32((c.r[3].w[0] - 22636u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0010D3F8:
    set32(c.r[6], c.r[6].w[0] >> 2);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0010D428; } }
    c.budget -= 1;
L_0010D408:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010D408u | kUnwind; return; } goto L_0010D408; } }
L_0010D428:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0010D430:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0]; c.r[2].d[0] = c.r[4].d[0] < c.r[5].d[0] ? 1ull : 0ull;  if (t) { goto L_0010D464; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { if (c.r[2].d[0] == 0) c.r[4].d[0] = 0ull;  goto L_0010D468; }
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 1;
L_0010D448:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0]; c.r[2].d[0] = c.r[4].d[0] < c.r[5].d[0] ? 1ull : 0ull;  if (t) { goto L_0010D464; } }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] + 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010D448u | kUnwind; return; } goto L_0010D448; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; if (c.r[2].d[0] == 0) c.r[4].d[0] = 0ull;  if (t) { goto L_0010D468; } }
L_0010D464:
    if (c.r[2].d[0] == 0) c.r[4].d[0] = 0ull;
    c.budget -= 1;
L_0010D468:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0010D470:
    set32(c.r[3], 0u + 131u);
    c.budget -= 1;
    c.pc = 0x0010D478u; syscall(c, 0x0010D474u); if (c.pc != 0x0010D478u) return;
    c.budget -= 1;
L_0010D478:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010D4B8:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00110000u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00110000u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[16], c.r[2].w[0] - 22656u);
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    set32(c.r[4], ld32((c.r[2].w[0] - 22656u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D4F8u); set32(c.r[5], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0003(c, 145u, depth + 1u); else { c.pc = 0x0010D5B8u; return; } if (c.pc != 0x0010D4F8u) [[unlikely]] return; }
L_0010D4F8:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D504u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_0003(c, 145u, depth + 1u); else { c.pc = 0x0010D5B8u; return; } if (c.pc != 0x0010D504u) [[unlikely]] return; }
L_0010D504:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80080000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D514u); set32(c.r[6], c.r[21].w[0] - 11216u);  if (depth < kMaxDepth) unit_0003(c, 135u, depth + 1u); else { c.pc = 0x0010D470u; return; } if (c.pc != 0x0010D514u) [[unlikely]] return; }
L_0010D514:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80080000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D528u); set32(c.r[6], c.r[20].w[0] - 11272u);  if (depth < kMaxDepth) unit_0003(c, 135u, depth + 1u); else { c.pc = 0x0010D470u; return; } if (c.pc != 0x0010D528u) [[unlikely]] return; }
L_0010D528:
    set32(c.r[17], c.r[19].w[0] - 524u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], c.r[18].w[0] - 360u);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == c.r[16].d[0]; c.r[22].sd[0] = static_cast<std::int32_t>(0x00430000u);  if (t) { goto L_0010D588; } }
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0010D540:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[19].w[0] + 4u);  if (t) { goto L_0010D560; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80080000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D554u); set32(c.r[6], c.r[21].w[0] - 11216u);  if (depth < kMaxDepth) unit_0003(c, 135u, depth + 1u); else { c.pc = 0x0010D470u; return; } if (c.pc != 0x0010D554u) [[unlikely]] return; }
L_0010D554:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[19].w[0] - 524u);  if (t) { goto L_0010D578; } }
L_0010D560:
    set32(c.r[4], c.r[18].w[0] + 4u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80080000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D570u); set32(c.r[6], c.r[20].w[0] - 11272u);  if (depth < kMaxDepth) unit_0003(c, 135u, depth + 1u); else { c.pc = 0x0010D470u; return; } if (c.pc != 0x0010D570u) [[unlikely]] return; }
L_0010D570:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], c.r[18].w[0] - 360u);
    c.budget -= 2;
L_0010D578:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[16].d[0]; c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010D540u | kUnwind; return; } goto L_0010D540; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[22].w[0] - 22664u), c.r[17].w[0]);  if (t) { goto L_0010D58C; } }
L_0010D588:
    st32((c.r[22].w[0] - 22664u), c.r[17].w[0]);
    c.budget -= 1;
L_0010D58C:
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
L_0010D5B8:
    set32(c.r[3], 0u + 116u);
    c.budget -= 1;
    c.pc = 0x0010D5C0u; syscall(c, 0x0010D5BCu); if (c.pc != 0x0010D5C0u) return;
    c.budget -= 1;
L_0010D5C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010D5C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D5D8u);  if (depth < kMaxDepth) unit_0003(c, 128u, depth + 1u); else { c.pc = 0x0010D390u; return; } if (c.pc != 0x0010D5D8u) [[unlikely]] return; }
L_0010D5D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D5E0u);  if (depth < kMaxDepth) unit_0003(c, 137u, depth + 1u); else { c.pc = 0x0010D4B8u; return; } if (c.pc != 0x0010D5E0u) [[unlikely]] return; }
L_0010D5E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D5E8u);  if (depth < kMaxDepth) unit_0003(c, 208u, depth + 1u); else { c.pc = 0x0010DAA8u; return; } if (c.pc != 0x0010D5E8u) [[unlikely]] return; }
L_0010D5E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D5F0u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0003(c, 223u, depth + 1u); else { c.pc = 0x0010DC20u; return; } if (c.pc != 0x0010D5F0u) [[unlikely]] return; }
L_0010D5F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D5F8u);  if (depth < kMaxDepth) unit_0003(c, 241u, depth + 1u); else { c.pc = 0x0010DE60u; return; } if (c.pc != 0x0010D5F8u) [[unlikely]] return; }
L_0010D5F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D600u);  if (depth < kMaxDepth) unit_0001(c, 195u, depth + 1u); else { c.pc = 0x001050B8u; return; } if (c.pc != 0x0010D600u) [[unlikely]] return; }
L_0010D600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D608u);  if (depth < kMaxDepth) unit_0003(c, 169u, depth + 1u); else { c.pc = 0x0010D6F0u; return; } if (c.pc != 0x0010D608u) [[unlikely]] return; }
L_0010D608:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D610u);  if (depth < kMaxDepth) unit_0003(c, 85u, depth + 1u); else { c.pc = 0x0010CBC8u; return; } if (c.pc != 0x0010D610u) [[unlikely]] return; }
L_0010D610:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_0010F2D8; }
L_0010D620:
    set32(c.r[3], 0u + 116u);
    c.budget -= 1;
    c.pc = 0x0010D628u; syscall(c, 0x0010D624u); if (c.pc != 0x0010D628u) return;
    c.budget -= 1;
L_0010D628:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010D630:
    set32(c.r[3], 0u + 90u);
    c.budget -= 1;
    c.pc = 0x0010D638u; syscall(c, 0x0010D634u); if (c.pc != 0x0010D638u) return;
    c.budget -= 1;
L_0010D638:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010D640:
    set32(c.r[6], c.r[6].w[0] >> 2);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0010D670; } }
    c.budget -= 1;
L_0010D650:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010D650u | kUnwind; return; } goto L_0010D650; } }
L_0010D670:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0010D678:
    set32(c.r[3], 0u + 91u);
    c.budget -= 1;
    c.pc = 0x0010D680u; syscall(c, 0x0010D67Cu); if (c.pc != 0x0010D680u) return;
    c.budget -= 1;
L_0010D680:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010D688:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D69Cu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 78u, depth + 1u); else { c.pc = 0x00104390u; return; } if (c.pc != 0x0010D69Cu) [[unlikely]] return; }
L_0010D69C:
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 8191ull;
    set32(c.r[16], c.r[29].w[0] + 4u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D6C0u); st32((c.r[29].w[0] + 4u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0001(c, 76u, depth + 1u); else { c.pc = 0x00104380u; return; } if (c.pc != 0x0010D6C0u) [[unlikely]] return; }
L_0010D6C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D6C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 78u, depth + 1u); else { c.pc = 0x00104390u; return; } if (c.pc != 0x0010D6C8u) [[unlikely]] return; }
L_0010D6C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D6D0u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 76u, depth + 1u); else { c.pc = 0x00104380u; return; } if (c.pc != 0x0010D6D0u) [[unlikely]] return; }
L_0010D6D0:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], c.r[2].w[0] >> 13);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0010D6F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D708u); st64((c.r[29].w[0]), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0003(c, 164u, depth + 1u); else { c.pc = 0x0010D688u; return; } if (c.pc != 0x0010D708u) [[unlikely]] return; }
L_0010D708:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);  if (t) { goto L_0010D784; } }
    set32(c.r[18], 0u + 2u);
    set32(c.r[16], c.r[2].w[0] - 20672u);
    set32(c.r[4], ld32((c.r[2].w[0] - 20672u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D728u); set32(c.r[17], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0003(c, 156u, depth + 1u); else { c.pc = 0x0010D620u; return; } if (c.pc != 0x0010D728u) [[unlikely]] return; }
L_0010D728:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80070000u);
    set32(c.r[6], 0u + 1960u);
    set32(c.r[5], c.r[5].w[0] - 22632u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D740u); c.r[4].d[0] = c.r[4].d[0] | 16384ull;  if (depth < kMaxDepth) unit_0003(c, 158u, depth + 1u); else { c.pc = 0x0010D630u; return; } if (c.pc != 0x0010D740u) [[unlikely]] return; }
L_0010D740:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D748u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 82u, depth + 1u); else { c.pc = 0x00104560u; return; } if (c.pc != 0x0010D748u) [[unlikely]] return; }
L_0010D748:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D750u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 82u, depth + 1u); else { c.pc = 0x00104560u; return; } if (c.pc != 0x0010D750u) [[unlikely]] return; }
L_0010D750:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D75Cu); set32(c.r[5], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_0003(c, 156u, depth + 1u); else { c.pc = 0x0010D620u; return; } if (c.pc != 0x0010D75Cu) [[unlikely]] return; }
L_0010D75C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_0010D760:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D768u); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_0003(c, 162u, depth + 1u); else { c.pc = 0x0010D678u; return; } if (c.pc != 0x0010D768u) [[unlikely]] return; }
L_0010D768:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D778u); set32(c.r[17], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_0003(c, 156u, depth + 1u); else { c.pc = 0x0010D620u; return; } if (c.pc != 0x0010D778u) [[unlikely]] return; }
L_0010D778:
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010D760u | kUnwind; return; } goto L_0010D760; }
L_0010D784:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0010D7A0:
    set32(c.r[3], 0u + 90u);
    c.budget -= 1;
    c.pc = 0x0010D7A8u; syscall(c, 0x0010D7A4u); if (c.pc != 0x0010D7A8u) return;
    c.budget -= 1;
L_0010D7A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010D7B0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0010D7D8; } }
L_0010D7B8:
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010D7B8u | kUnwind; return; } goto L_0010D7B8; } }
L_0010D7D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0010D7E0:
    set32(c.r[3], 0u + 116u);
    c.budget -= 1;
    c.pc = 0x0010D7E8u; syscall(c, 0x0010D7E4u); if (c.pc != 0x0010D7E8u) return;
    c.budget -= 1;
L_0010D7E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010D7F0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[19], ld32((c.r[2].w[0] - 23392u)));
    set32(c.r[7], c.r[3].w[0] - 20648u);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    set32(c.r[2], c.r[19].w[0] + 64u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] - 20648u)));
    set32(c.r[5], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D844u); st32((c.r[29].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0003(c, 183u, depth + 1u); else { c.pc = 0x0010D7E0u; return; } if (c.pc != 0x0010D844u) [[unlikely]] return; }
L_0010D844:
    c.r[3].d[0] = c.r[18].sd[0] < 16ll ? 1ull : 0ull;
    set32(c.r[2], 0u + 15u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    if (c.r[3].d[0] == 0) c.r[18].d[0] = c.r[2].d[0];
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D860u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0003(c, 179u, depth + 1u); else { c.pc = 0x0010D7A0u; return; } if (c.pc != 0x0010D860u) [[unlikely]] return; }
L_0010D860:
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D86Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0010D86Cu) [[unlikely]] return; }
L_0010D86C:
    set32(c.r[17], c.r[2].w[0] + 1u);
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D880u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 179u, depth + 1u); else { c.pc = 0x0010D7A0u; return; } if (c.pc != 0x0010D880u) [[unlikely]] return; }
L_0010D880:
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 4;
    { const bool t = c.r[18].sd[0] <= 0; st32((c.r[29].w[0]), c.r[3].w[0]);  if (t) { goto L_0010D8E0; } }
    c.r[16].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 2;
L_0010D898:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D8ACu); set32(c.r[19], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0003(c, 179u, depth + 1u); else { c.pc = 0x0010D7A0u; return; } if (c.pc != 0x0010D8ACu) [[unlikely]] return; }
L_0010D8AC:
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D8B8u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0010D8B8u) [[unlikely]] return; }
L_0010D8B8:
    set32(c.r[17], c.r[2].w[0] + 1u);
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D8D0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0003(c, 179u, depth + 1u); else { c.pc = 0x0010D7A0u; return; } if (c.pc != 0x0010D8D0u) [[unlikely]] return; }
L_0010D8D0:
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != 0ull; st32((c.r[29].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010D898u | kUnwind; return; } goto L_0010D898; } }
L_0010D8E0:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0010D908:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010CD50u | kUnwind; return; } goto L_0010CD50; }
L_0010D980:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D998u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 185u, depth + 1u); else { c.pc = 0x0010D7F0u; return; } if (c.pc != 0x0010D998u) [[unlikely]] return; }
L_0010D998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D9A0u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 194u, depth + 1u); else { c.pc = 0x0010D908u; return; } if (c.pc != 0x0010D9A0u) [[unlikely]] return; }
L_0010D9A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] - 23392u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00103F20u | kUnwind; return; } [[clang::musttail]] return unit_0000(c, 367u, depth); }
L_0010D9C8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D9DCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 194u, depth + 1u); else { c.pc = 0x0010D908u; return; } if (c.pc != 0x0010D9DCu) [[unlikely]] return; }
L_0010D9DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00103F00u | kUnwind; return; } [[clang::musttail]] return unit_0000(c, 365u, depth); }
L_0010DA40:
    set32(c.r[3], 0u + 116u);
    c.budget -= 1;
    c.pc = 0x0010DA48u; syscall(c, 0x0010DA44u); if (c.pc != 0x0010DA48u) return;
    c.budget -= 1;
L_0010DA48:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010DA50:
    set32(c.r[3], 0u + 90u);
    c.budget -= 1;
    c.pc = 0x0010DA58u; syscall(c, 0x0010DA54u); if (c.pc != 0x0010DA58u) return;
    c.budget -= 1;
L_0010DA58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010DA60:
    set32(c.r[6], c.r[6].w[0] >> 2);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0010DA90; } }
    c.budget -= 1;
L_0010DA70:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010DA70u | kUnwind; return; } goto L_0010DA70; } }
L_0010DA90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0010DA98:
    set32(c.r[3], 0u + 91u);
    c.budget -= 1;
    c.pc = 0x0010DAA0u; syscall(c, 0x0010DA9Cu); if (c.pc != 0x0010DAA0u) return;
    c.budget -= 1;
L_0010DAA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010DAA8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 6160ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0010DB68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[18], 0u + 2u);
    set32(c.r[16], c.r[2].w[0] - 18744u);
    set32(c.r[4], ld32((c.r[2].w[0] - 18744u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DAF0u); set32(c.r[17], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0003(c, 200u, depth + 1u); else { c.pc = 0x0010DA40u; return; } if (c.pc != 0x0010DAF0u) [[unlikely]] return; }
L_0010DAF0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80070000u);
    set32(c.r[5], c.r[5].w[0] - 20640u);
    c.r[4].d[0] = c.r[4].d[0] | 24576ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DB08u); set32(c.r[6], 0u + 1856u);  if (depth < kMaxDepth) unit_0003(c, 202u, depth + 1u); else { c.pc = 0x0010DA50u; return; } if (c.pc != 0x0010DB08u) [[unlikely]] return; }
L_0010DB08:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    set32(c.r[5], c.r[5].w[0] - 18784u);
    c.r[4].d[0] = c.r[4].d[0] | 8192ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DB20u); set32(c.r[6], 0u + 40u);  if (depth < kMaxDepth) unit_0003(c, 202u, depth + 1u); else { c.pc = 0x0010DA50u; return; } if (c.pc != 0x0010DB20u) [[unlikely]] return; }
L_0010DB20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DB28u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 82u, depth + 1u); else { c.pc = 0x00104560u; return; } if (c.pc != 0x0010DB28u) [[unlikely]] return; }
L_0010DB28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DB30u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 82u, depth + 1u); else { c.pc = 0x00104560u; return; } if (c.pc != 0x0010DB30u) [[unlikely]] return; }
L_0010DB30:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DB3Cu); set32(c.r[5], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_0003(c, 200u, depth + 1u); else { c.pc = 0x0010DA40u; return; } if (c.pc != 0x0010DB3Cu) [[unlikely]] return; }
L_0010DB3C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_0010DB40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DB48u); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_0003(c, 206u, depth + 1u); else { c.pc = 0x0010DA98u; return; } if (c.pc != 0x0010DB48u) [[unlikely]] return; }
L_0010DB48:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DB58u); set32(c.r[17], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_0003(c, 200u, depth + 1u); else { c.pc = 0x0010DA40u; return; } if (c.pc != 0x0010DB58u) [[unlikely]] return; }
L_0010DB58:
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010DB40u | kUnwind; return; } goto L_0010DB40; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0010DB68:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0010DB80:
    set32(c.r[3], mfc0(c, 12u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[6].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0010DBBC; } }
    c.budget -= 1;
L_0010DB98:
    set_interrupts(c, false);
    set32(c.r[2], mfc0(c, 12u, 0u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010DB98u | kUnwind; return; } goto L_0010DB98; } }
L_0010DBBC:
    set32(c.r[2], mfc0(c, 12u, 0u));
    c.r[2].d[0] = c.r[2].d[0] | 6ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    mtc0(c, 12u, c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    mtc0(c, 30u, c.r[31].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = eret(c); c.pc = t; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0010DBF0:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0xB0000000u);
    c.budget -= 4;
    { c.r[4].d[0] = c.r[4].d[0] | 4096ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010DB80u | kUnwind; return; } goto L_0010DB80; }
L_0010DC00:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0xB0000000u);
    c.budget -= 4;
    { c.r[4].d[0] = c.r[4].d[0] | 4112ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010DB80u | kUnwind; return; } goto L_0010DB80; }
L_0010DC10:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0xB0000000u);
    c.budget -= 4;
    { c.r[4].d[0] = c.r[4].d[0] | 4128ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010DB80u | kUnwind; return; } goto L_0010DB80; }
L_0010DC20:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[17], c.r[18].w[0] - 18680u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 12;
    { const bool t = c.r[2].sd[0] < 0; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0010DC5C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 32769ull;  if (t) { goto L_0010DD54; } }
L_0010DC5C:
    c.r[19].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st64((c.r[18].w[0] - 18680u), 0ull);
    set32(c.r[16], c.r[19].w[0] - 9664u);
    st32((c.r[17].w[0] + 16u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DC7Cu); set32(c.r[6], 0u + 8192u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0010DC7Cu) [[unlikely]] return; }
L_0010DC7C:
    st32((c.r[17].w[0] + 20u), c.r[16].w[0]);
    set32(c.r[3], c.r[16].w[0] + 8192u);
    set32(c.r[2], 0u + 127u);
    set32(c.r[16], c.r[16].w[0] + 8128u);
    c.budget -= 5;
L_0010DC90:
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[16], c.r[16].w[0] - 64u);
    set32(c.r[3], c.r[3].w[0] - 64u);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010DC90u | kUnwind; return; } goto L_0010DC90; } }
    set32(c.r[2], c.r[19].w[0] - 9664u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DCB8u); st32((c.r[2].w[0] + 8128u), 0u);  if (depth < kMaxDepth) unit_0003(c, 343u, depth + 1u); else { c.pc = 0x0010EEE8u; return; } if (c.pc != 0x0010DCB8u) [[unlikely]] return; }
L_0010DCB8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00110000u);
    set32(c.r[4], 0u + 11u);
    set32(c.r[5], c.r[5].w[0] - 7744u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DCD0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 375u, depth + 1u); else { c.pc = 0x00103FD0u; return; } if (c.pc != 0x0010DCD0u) [[unlikely]] return; }
L_0010DCD0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[3].sd[0] >= 0) { set32(c.r[2], c.r[18].w[0] - 18680u);  goto L_0010DCE8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 36897ull;  if (t) { goto L_0010DD54; } }
L_0010DCE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DCF0u); st32((c.r[2].w[0] + 8u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x0010DCF0u) [[unlikely]] return; }
L_0010DCF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 4112ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 65532ull;
    c.r[2].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.r[16].d[0] = c.r[2].d[0] | c.r[20].d[0];
    c.r[16].d[0] = c.r[16].d[0] | 768ull;
    c.r[2].d[0] = c.r[16].d[0] & 128ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0010DD30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DD28u); c.r[16].d[0] = c.r[16].d[0] | 3200ull;  if (depth < kMaxDepth) unit_0003(c, 220u, depth + 1u); else { c.pc = 0x0010DBF0u; return; } if (c.pc != 0x0010DD28u) [[unlikely]] return; }
L_0010DD28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DD30u); c.r[4].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_0003(c, 222u, depth + 1u); else { c.pc = 0x0010DC10u; return; } if (c.pc != 0x0010DD30u) [[unlikely]] return; }
L_0010DD30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DD38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 221u, depth + 1u); else { c.pc = 0x0010DC00u; return; } if (c.pc != 0x0010DD38u) [[unlikely]] return; }
L_0010DD38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DD40u); set32(c.r[4], 0u + 11u);  if (depth < kMaxDepth) unit_0001(c, 167u, depth + 1u); else { c.pc = 0x00104E28u; return; } if (c.pc != 0x0010DD40u) [[unlikely]] return; }
L_0010DD40:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010DD54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DD50u);  if (depth < kMaxDepth) unit_0003(c, 127u, depth + 1u); else { c.pc = 0x0010D378u; return; } if (c.pc != 0x0010DD50u) [[unlikely]] return; }
L_0010DD50:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010DD54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0010DD78:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[16], c.r[18].w[0] - 18680u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0010DDAC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 32769ull;  if (t) { goto L_0010DE18; } }
L_0010DDAC:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010DDC4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 16ull;  if (t) { goto L_0010DE18; } }
L_0010DDC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DDCCu);  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x0010DDCCu) [[unlikely]] return; }
L_0010DDCC:
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DDDCu); set32(c.r[4], 0u + 11u);  if (depth < kMaxDepth) unit_0000(c, 377u, depth + 1u); else { c.pc = 0x00103FE0u; return; } if (c.pc != 0x0010DDDCu) [[unlikely]] return; }
L_0010DDDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0010DE00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DDECu); set32(c.r[4], 0u + 11u);  if (depth < kMaxDepth) unit_0001(c, 163u, depth + 1u); else { c.pc = 0x00104DC0u; return; } if (c.pc != 0x0010DDECu) [[unlikely]] return; }
L_0010DDEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DDF4u); set32(c.r[4], 0u + 3072u);  if (depth < kMaxDepth) unit_0003(c, 221u, depth + 1u); else { c.pc = 0x0010DC00u; return; } if (c.pc != 0x0010DDF4u) [[unlikely]] return; }
L_0010DDF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DDFCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 220u, depth + 1u); else { c.pc = 0x0010DBF0u; return; } if (c.pc != 0x0010DDFCu) [[unlikely]] return; }
L_0010DDFC:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0010DE00:
    st64((c.r[18].w[0] - 18680u), 0ull);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0010DE14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DE14u);  if (depth < kMaxDepth) unit_0003(c, 127u, depth + 1u); else { c.pc = 0x0010D378u; return; } if (c.pc != 0x0010DE14u) [[unlikely]] return; }
L_0010DE14:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010DE18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0010DE60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DE74u);  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x0010DE74u) [[unlikely]] return; }
L_0010DE74:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 4112ull;
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0010DEA8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0010DEE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DEA0u);  if (depth < kMaxDepth) unit_0003(c, 127u, depth + 1u); else { c.pc = 0x0010D378u; return; } if (c.pc != 0x0010DEA0u) [[unlikely]] return; }
L_0010DEA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0010DEE0; } }
L_0010DEA8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 62463ull;
    c.r[4].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DEBCu); c.r[4].d[0] = c.r[4].d[0] | 128ull;  if (depth < kMaxDepth) unit_0003(c, 221u, depth + 1u); else { c.pc = 0x0010DC00u; return; } if (c.pc != 0x0010DEBCu) [[unlikely]] return; }
L_0010DEBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DEC4u);  if (depth < kMaxDepth) unit_0003(c, 272u, depth + 1u); else { c.pc = 0x0010E460u; return; } if (c.pc != 0x0010DEC4u) [[unlikely]] return; }
L_0010DEC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DECCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 253u, depth + 1u); else { c.pc = 0x0010DF70u; return; } if (c.pc != 0x0010DECCu) [[unlikely]] return; }
L_0010DECC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010DEE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DEDCu);  if (depth < kMaxDepth) unit_0003(c, 127u, depth + 1u); else { c.pc = 0x0010D378u; return; } if (c.pc != 0x0010DEDCu) [[unlikely]] return; }
L_0010DEDC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010DEE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0010DEF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DF04u);  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x0010DF04u) [[unlikely]] return; }
L_0010DF04:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 4112ull;
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0010DF38; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010DF5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DF30u);  if (depth < kMaxDepth) unit_0003(c, 127u, depth + 1u); else { c.pc = 0x0010D378u; return; } if (c.pc != 0x0010DF30u) [[unlikely]] return; }
L_0010DF30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010DF5C; } }
L_0010DF38:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 62335ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DF48u); c.r[4].d[0] = c.r[2].d[0] & c.r[4].d[0];  if (depth < kMaxDepth) unit_0003(c, 221u, depth + 1u); else { c.pc = 0x0010DC00u; return; } if (c.pc != 0x0010DF48u) [[unlikely]] return; }
L_0010DF48:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0010DF5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DF58u);  if (depth < kMaxDepth) unit_0003(c, 127u, depth + 1u); else { c.pc = 0x0010D378u; return; } if (c.pc != 0x0010DF58u) [[unlikely]] return; }
L_0010DF58:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0010DF5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0010DF70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 18680u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 11;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[6], ld32((c.r[2].w[0] + 24u)));  if (t) { goto L_0010E0E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 4112ull;
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[6].d[0] != 0ull) { c.r[2].d[0] = ld64((c.r[6].w[0] + 32u));  goto L_0010DFDC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DFB8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 222u, depth + 1u); else { c.pc = 0x0010DC10u; return; } if (c.pc != 0x0010DFB8u) [[unlikely]] return; }
L_0010DFB8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[4].d[0] = c.r[4].d[0] | 63487ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[4].d[0] = c.r[18].d[0] & c.r[4].d[0];
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010DC00u | kUnwind; return; } goto L_0010DC00; }
L_0010DFDC:
    c.r[3].d[0] = ld64((c.r[6].w[0] + 16u));
    c.r[4].d[0] = ld64((c.r[6].w[0] + 24u));
    c.r[2].d[0] = c.r[2].d[0] + c.r[3].d[0];
    set32(c.r[6], ld32((c.r[6].w[0])));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] - c.r[4].d[0];  if (t) { goto L_0010E054; } }
    c.r[2].d[0] = ld64((c.r[6].w[0] + 32u));
    c.r[3].d[0] = c.r[16].d[0] + static_cast<std::uint64_t>(29491ll);
    c.r[4].d[0] = ld64((c.r[6].w[0] + 16u));
    c.budget -= 3;
L_0010E000:
    c.r[5].d[0] = ld64((c.r[6].w[0] + 24u));
    c.r[2].d[0] = c.r[2].d[0] + c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] - c.r[5].d[0];
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[18].d[0] & 3ull;  if (t) { goto L_0010E054; } }
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0010E020:
    set32(c.r[6], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; c.r[3].d[0] = c.r[16].d[0] + static_cast<std::uint64_t>(29491ll);  if (t) { goto L_0010E058; } }
    c.r[2].d[0] = ld64((c.r[6].w[0] + 32u));
    c.r[4].d[0] = ld64((c.r[6].w[0] + 16u));
    c.r[5].d[0] = ld64((c.r[6].w[0] + 24u));
    c.r[2].d[0] = c.r[2].d[0] + c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] - c.r[5].d[0];
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] - c.r[7].d[0];  goto L_0010E05C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010E020u | kUnwind; return; } goto L_0010E020; } }
L_0010E054:
    c.r[17].d[0] = c.r[18].d[0] & 3ull;
    c.budget -= 1;
L_0010E058:
    c.r[2].d[0] = c.r[16].d[0] - c.r[7].d[0];
    c.budget -= 1;
L_0010E05C:
    c.r[2].d[0] = c.r[2].sd[0] < 29491ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_0010E0B0; } }
    set32(c.r[5], c.r[17].w[0] << 2);
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    set32(c.r[4], 0u + 29491u);
    c.r[4].d[0] = c.r[4].d[0] >> (c.r[5].w[0] & 63u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E08Cu); set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);  if (depth < kMaxDepth) unit_0003(c, 222u, depth + 1u); else { c.pc = 0x0010DC10u; return; } if (c.pc != 0x0010E08Cu) [[unlikely]] return; }
L_0010E08C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[4].d[0] = c.r[4].d[0] | 63487ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[4].d[0] = c.r[18].d[0] & c.r[4].d[0];
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010DC00u | kUnwind; return; } goto L_0010DC00; }
L_0010E0B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 63487ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E0C0u); c.r[4].d[0] = c.r[18].d[0] & c.r[4].d[0];  if (depth < kMaxDepth) unit_0003(c, 221u, depth + 1u); else { c.pc = 0x0010DC00u; return; } if (c.pc != 0x0010E0C0u) [[unlikely]] return; }
L_0010E0C0:
    set32(c.r[4], c.r[17].w[0] << 2);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[4].d[0] = c.r[16].d[0] >> (c.r[4].w[0] & 63u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010DC10u | kUnwind; return; } goto L_0010DC10; }
L_0010E0E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0010E100:
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[2].d[0] = ld64((c.r[6].w[0] + 32u));
    set32(c.r[5], c.r[9].w[0] - 18680u);
    c.r[3].d[0] = ld64((c.r[6].w[0] + 16u));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[4].d[0] = ld64((c.r[6].w[0] + 24u));
    c.r[2].d[0] = c.r[2].d[0] + c.r[3].d[0];
    set32(c.r[5], ld32((c.r[5].w[0] + 24u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[2].d[0] - c.r[4].d[0];  if (t) { goto L_0010E134; } }
    c.budget -= 1;
L_0010E130:
    set32(c.r[5], ld32((c.r[8].w[0])));
    c.budget -= 1;
L_0010E134:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { st32((c.r[6].w[0] + 4u), c.r[8].w[0]);  goto L_0010E160; }
    c.r[2].d[0] = ld64((c.r[5].w[0] + 32u));
    c.r[3].d[0] = ld64((c.r[5].w[0] + 16u));
    c.r[4].d[0] = ld64((c.r[5].w[0] + 24u));
    c.r[2].d[0] = c.r[2].d[0] + c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] - c.r[4].d[0];
    c.r[2].d[0] = c.r[7].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { c.r[8].d[0] = c.r[5].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010E130u | kUnwind; return; } goto L_0010E130; }
    st32((c.r[6].w[0] + 4u), c.r[8].w[0]);
    c.budget -= 1;
L_0010E160:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[6].w[0]), c.r[5].w[0]);  if (t) { goto L_0010E16C; } }
    st32((c.r[5].w[0] + 4u), c.r[6].w[0]);
    c.budget -= 1;
L_0010E16C:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[2], c.r[9].w[0] - 18680u);  if (t) { goto L_0010E17C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[8].w[0]), c.r[6].w[0]);  c.pc = t; return; }
L_0010E17C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0] + 24u), c.r[6].w[0]);  c.pc = t; return; }
L_0010E188:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[4].w[0])));  if (t) { goto L_0010E19C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_0010E1A4; } }
L_0010E19C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st32((c.r[2].w[0] - 18656u), c.r[3].w[0]);
    c.budget -= 2;
L_0010E1A4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[4].w[0] + 4u), 0u);  goto L_0010E1B8; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 3;
L_0010E1B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[3].d[0] + 0ull;  c.pc = t; return; }
L_0010E1C0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    c.r[3].d[0] = c.r[3].d[0] | 4112ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 17;
    { const bool t = c.r[2].d[0] == 0ull; c.r[21].sd[0] = static_cast<std::int32_t>(0x00430000u);  if (t) { goto L_0010E364; } }
    set32(c.r[2], c.r[21].w[0] - 18680u);
    set32(c.r[16], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[20].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0010E364; } }
    set32(c.r[23], 0u + 14745u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 3;
L_0010E220:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.r[3].d[0] = c.r[3].d[0] | 4112ull;
    set32(c.r[6], ld32((c.r[2].w[0])));
    set32(c.r[17], ld32((c.r[3].w[0])));
    c.r[4].d[0] = ld64((c.r[16].w[0] + 32u));
    c.r[2].d[0] = ld64((c.r[16].w[0] + 16u));
    c.r[5].d[0] = c.r[17].d[0] & 2048ull;
    c.r[3].d[0] = ld64((c.r[16].w[0] + 24u));
    c.r[4].d[0] = c.r[4].d[0] + c.r[2].d[0];
    c.budget -= 12;
    { const bool t = c.r[5].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] - c.r[3].d[0];  if (t) { goto L_0010E278; } }
    c.r[2].d[0] = ld64((c.r[20].w[0] - 18680u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 64511ull;
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = c.r[17].d[0] & c.r[4].d[0];
    st64((c.r[20].w[0] - 18680u), c.r[2].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E270u);  if (depth < kMaxDepth) unit_0003(c, 221u, depth + 1u); else { c.pc = 0x0010DC00u; return; } if (c.pc != 0x0010E270u) [[unlikely]] return; }
L_0010E270:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[6], ld32((c.r[6].w[0] + 4096u)));
    c.budget -= 2;
L_0010E278:
    c.r[4].d[0] = ld64((c.r[20].w[0] - 18680u));
    c.r[2].d[0] = c.r[6].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[3].d[0] = c.r[17].d[0] & 3ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[17].d[0] = c.r[4].d[0] << (c.r[3].w[0] & 63u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[20].w[0] - 18680u);  if (t) { goto L_0010E364; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E2ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 261u, depth + 1u); else { c.pc = 0x0010E188u; return; } if (c.pc != 0x0010E2ACu) [[unlikely]] return; }
L_0010E2AC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = ld64((c.r[16].w[0] + 24u));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[7], c.r[16].w[0] << 4);
    c.r[3].d[0] = ld64((c.r[16].w[0] + 16u));
    c.r[6].d[0] = c.r[17].d[0] + c.r[6].d[0];
    c.r[2].d[0] = c.r[7].d[0] | c.r[2].d[0];
    st32((c.r[19].w[0] + 28u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[6].d[0] - c.r[3].d[0];
    set32(c.r[28], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 13;
L_0010E2E0:
    c.r[4].d[0] = c.r[7].d[0] | c.r[4].d[0];
    c.r[5].d[0] = ld64((c.r[16].w[0] + 32u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E2F0u); set32(c.r[7], ld32((c.r[16].w[0] + 48u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010E2F0u) [[unlikely]] return; }
L_0010E2F0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0010E314; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65533ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0010E350; } }
L_0010E314:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 14744u);  if (t) { goto L_0010E334; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    st32((c.r[19].w[0] + 20u), c.r[16].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), 0u);  if (t) { goto L_0010E350; } }
L_0010E334:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 32u));
    c.r[2].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[23].d[0];
    c.r[3].d[0] = c.r[3].d[0] + c.r[5].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E350u); st64((c.r[16].w[0] + 32u), c.r[3].d[0]);  if (depth < kMaxDepth) unit_0003(c, 259u, depth + 1u); else { c.pc = 0x0010E100u; return; } if (c.pc != 0x0010E350u) [[unlikely]] return; }
L_0010E350:
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010E220u | kUnwind; return; } goto L_0010E220; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[21].w[0] - 18680u);  if (t) { goto L_0010E368; } }
L_0010E364:
    set32(c.r[4], c.r[21].w[0] - 18680u);
    c.budget -= 1;
L_0010E368:
    set32(c.r[3], 0u - 1u);
    st32((c.r[4].w[0] + 28u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 4112ull;
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[16].d[0] & 2048ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010E3BC; } }
    c.r[2].d[0] = ld64((c.r[21].w[0] - 18680u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 64511ull;
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = c.r[16].d[0] & c.r[4].d[0];
    st64((c.r[21].w[0] - 18680u), c.r[2].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E3B4u);  if (depth < kMaxDepth) unit_0003(c, 221u, depth + 1u); else { c.pc = 0x0010DC00u; return; } if (c.pc != 0x0010E3B4u) [[unlikely]] return; }
L_0010E3B4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4096u)));
    c.budget -= 2;
L_0010E3BC:
    c.r[2].d[0] = ld64((c.r[21].w[0] - 18680u));
    c.r[3].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[4].d[0] = c.r[16].d[0] & 3ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E3E0u); c.r[4].d[0] = c.r[2].d[0] << (c.r[4].w[0] & 63u);  if (depth < kMaxDepth) unit_0003(c, 253u, depth + 1u); else { c.pc = 0x0010DF70u; return; } if (c.pc != 0x0010E3E0u) [[unlikely]] return; }
L_0010E3E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4096u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 4112u)));
    c.r[2].d[0] = c.r[3].d[0] & 2048ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010E424; } }
    c.r[2].d[0] = ld64((c.r[21].w[0] - 18680u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 64511ull;
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = c.r[3].d[0] & c.r[4].d[0];
    st64((c.r[21].w[0] - 18680u), c.r[2].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E41Cu);  if (depth < kMaxDepth) unit_0003(c, 221u, depth + 1u); else { c.pc = 0x0010DC00u; return; } if (c.pc != 0x0010E41Cu) [[unlikely]] return; }
L_0010E41C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4096u)));
    c.budget -= 2;
L_0010E424:
    c.r[2].d[0] = ld64((c.r[21].w[0] - 18680u));
    set_interrupts(c, true);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[2].d[0] = 0ull + 0ull;
    c.r[23].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0010E460:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    c.r[2].d[0] = ld32((c.r[3].w[0]));
    set32(c.r[8], ld32((c.r[3].w[0] + 16u)));
    c.r[10].d[0] = ld64((c.r[4].w[0] - 18680u));
    c.r[9].d[0] = c.r[8].d[0] & 2048ull;
    c.budget -= 9;
    { const bool t = c.r[9].d[0] == 0ull; set32(c.r[9], 0u + 2u);  if (t) { goto L_0010E48C; } }
    c.r[2].d[0] = ld32((c.r[3].w[0]));
    c.r[10].d[0] = c.r[10].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_0010E48C:
    c.r[8].d[0] = c.r[8].d[0] & 3ull;
    c.r[10].d[0] = c.r[10].d[0] << 16;
    if (c.r[8].d[0] == 0) c.r[9].d[0] = 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[10].d[0];
    c.r[9].d[0] = c.r[9].d[0] << (c.r[8].w[0] & 63u);
    c.r[2].d[0] = c.r[2].d[0] << (c.r[9].w[0] & 63u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010E4B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E4C4u);  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x0010E4C4u) [[unlikely]] return; }
L_0010E4C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    c.r[16].d[0] = ld32((c.r[3].w[0]));
    set32(c.r[8], ld32((c.r[3].w[0] + 16u)));
    c.r[10].d[0] = ld64((c.r[4].w[0] - 18680u));
    c.r[9].d[0] = c.r[8].d[0] & 2048ull;
    c.budget -= 9;
    { const bool t = c.r[9].d[0] == 0ull; set32(c.r[9], 0u + 2u);  if (t) { goto L_0010E4F0; } }
    c.r[16].d[0] = ld32((c.r[3].w[0]));
    c.r[10].d[0] = c.r[10].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_0010E4F0:
    c.r[8].d[0] = c.r[8].d[0] & 3ull;
    c.r[10].d[0] = c.r[10].d[0] << 16;
    if (c.r[8].d[0] == 0) c.r[9].d[0] = 0ull;
    c.r[16].d[0] = c.r[16].d[0] | c.r[10].d[0];
    c.r[9].d[0] = c.r[9].d[0] << (c.r[8].w[0] & 63u);
    c.r[16].d[0] = c.r[16].d[0] << (c.r[9].w[0] & 63u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0010E51C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E518u);  if (depth < kMaxDepth) unit_0003(c, 127u, depth + 1u); else { c.pc = 0x0010D378u; return; } if (c.pc != 0x0010E518u) [[unlikely]] return; }
L_0010E518:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0010E51C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0010E530:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[7], c.r[2].w[0] - 18680u);
    set32(c.r[6], ld32((c.r[7].w[0] + 20u)));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0010E550; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] | 32773ull;  c.pc = t; return; }
L_0010E550:
    set32(c.r[2], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[5], c.r[6].w[0] << 4);
    set32(c.r[4], ld32((c.r[6].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[6].w[0] + 40u), 0u);
    st32((c.r[7].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[6].w[0] + 12u), 0u);
    st32((c.r[7].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 12u)));
    st64((c.r[6].w[0] + 24u), 0ull);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[7].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[7].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    c.r[2].d[0] = c.r[2].d[0] & 1022ull;
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st32((c.r[6].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[5].d[0] | c.r[2].d[0];  c.pc = t; return; }
L_0010E5A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E5B8u);  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x0010E5B8u) [[unlikely]] return; }
L_0010E5B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E5C0u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 276u, depth + 1u); else { c.pc = 0x0010E530u; return; } if (c.pc != 0x0010E5C0u) [[unlikely]] return; }
L_0010E5C0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0010E5D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E5D0u);  if (depth < kMaxDepth) unit_0003(c, 127u, depth + 1u); else { c.pc = 0x0010D378u; return; } if (c.pc != 0x0010E5D0u) [[unlikely]] return; }
L_0010E5D0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0010E5E8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], c.r[4].w[0] >> 10);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[16], c.r[2].w[0] << 6);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] < 0; st64((c.r[29].w[0] + 16u), c.r[17].d[0]);  if (t) { goto L_0010E614; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[4].d[0] & 1023ull;
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);  goto L_0010E620; }
L_0010E614:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 32770ull;  if (t) { goto L_0010E674; } }
L_0010E620:
    set32(c.r[17], c.r[2].w[0] - 18680u);
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[4].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  goto L_0010E63C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 16ull;  if (t) { goto L_0010E674; } }
L_0010E63C:
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010E650; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E650u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 261u, depth + 1u); else { c.pc = 0x0010E188u; return; } if (c.pc != 0x0010E650u) [[unlikely]] return; }
L_0010E650:
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    st32((c.r[16].w[0]), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[17].w[0] + 20u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 9;
L_0010E674:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0010E688:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E6A0u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x0010E6A0u) [[unlikely]] return; }
L_0010E6A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E6ACu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 281u, depth + 1u); else { c.pc = 0x0010E5E8u; return; } if (c.pc != 0x0010E6ACu) [[unlikely]] return; }
L_0010E6AC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0010E6BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E6BCu);  if (depth < kMaxDepth) unit_0003(c, 127u, depth + 1u); else { c.pc = 0x0010D378u; return; } if (c.pc != 0x0010E6BCu) [[unlikely]] return; }
L_0010E6BC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0010E6D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[2].w[0] - 18680u);
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0010E6F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] | 32769ull;  c.pc = t; return; }
L_0010E6F8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0010E708; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0010E708:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0010E720; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], 0u + 128u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_0010E720:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0010E728:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E748u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x0010E748u) [[unlikely]] return; }
L_0010E748:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E758u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 287u, depth + 1u); else { c.pc = 0x0010E6D8u; return; } if (c.pc != 0x0010E758u) [[unlikely]] return; }
L_0010E758:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0010E768; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E768u);  if (depth < kMaxDepth) unit_0003(c, 127u, depth + 1u); else { c.pc = 0x0010D378u; return; } if (c.pc != 0x0010E768u) [[unlikely]] return; }
L_0010E768:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0010E788:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], c.r[4].w[0] >> 10);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[16], c.r[2].w[0] << 6);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] < 0; st64((c.r[29].w[0] + 16u), c.r[17].d[0]);  if (t) { goto L_0010E7B4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[4].d[0] & 1023ull;
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);  goto L_0010E7C0; }
L_0010E7B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 32770ull;  if (t) { goto L_0010E820; } }
L_0010E7C0:
    set32(c.r[2], c.r[2].w[0] - 18680u);
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[4].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  goto L_0010E7DC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 16ull;  if (t) { goto L_0010E820; } }
L_0010E7DC:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0010E820; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E7F0u);  if (depth < kMaxDepth) unit_0003(c, 272u, depth + 1u); else { c.pc = 0x0010E460u; return; } if (c.pc != 0x0010E7F0u) [[unlikely]] return; }
L_0010E7F0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    st64((c.r[16].w[0] + 16u), c.r[17].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 4;
L_0010E800:
    c.r[3].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0010E81C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E814u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 259u, depth + 1u); else { c.pc = 0x0010E100u; return; } if (c.pc != 0x0010E814u) [[unlikely]] return; }
L_0010E814:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E81Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 253u, depth + 1u); else { c.pc = 0x0010DF70u; return; } if (c.pc != 0x0010E81Cu) [[unlikely]] return; }
L_0010E81C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010E820:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0010E838:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E850u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x0010E850u) [[unlikely]] return; }
L_0010E850:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E85Cu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 292u, depth + 1u); else { c.pc = 0x0010E788u; return; } if (c.pc != 0x0010E85Cu) [[unlikely]] return; }
L_0010E85C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0010E86C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E86Cu);  if (depth < kMaxDepth) unit_0003(c, 127u, depth + 1u); else { c.pc = 0x0010D378u; return; } if (c.pc != 0x0010E86Cu) [[unlikely]] return; }
L_0010E86C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0010E888:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], c.r[4].w[0] >> 10);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[16], c.r[2].w[0] << 6);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] < 0; st64((c.r[29].w[0] + 16u), c.r[17].d[0]);  if (t) { goto L_0010E8B4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[4].d[0] & 1023ull;
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);  goto L_0010E8C0; }
L_0010E8B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 32770ull;  if (t) { goto L_0010E938; } }
L_0010E8C0:
    set32(c.r[2], c.r[2].w[0] - 18680u);
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[4].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  goto L_0010E8DC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 16ull;  if (t) { goto L_0010E938; } }
L_0010E8DC:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010E938; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E8F0u);  if (depth < kMaxDepth) unit_0003(c, 272u, depth + 1u); else { c.pc = 0x0010E460u; return; } if (c.pc != 0x0010E8F0u) [[unlikely]] return; }
L_0010E8F0:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = ld64((c.r[16].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = ld64((c.r[16].w[0] + 24u));
    c.r[2].d[0] = c.r[2].d[0] | 65534ull;
    c.r[4].d[0] = c.r[17].d[0] - c.r[4].d[0];
    c.r[6].d[0] = c.r[5].d[0] & 2ull;
    c.r[3].d[0] = c.r[3].d[0] + c.r[4].d[0];
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    st64((c.r[16].w[0] + 24u), c.r[3].d[0]);
    c.budget -= 13;
    { const bool t = c.r[6].d[0] == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_0010E934; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E92Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 261u, depth + 1u); else { c.pc = 0x0010E188u; return; } if (c.pc != 0x0010E92Cu) [[unlikely]] return; }
L_0010E92C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E934u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 253u, depth + 1u); else { c.pc = 0x0010DF70u; return; } if (c.pc != 0x0010E934u) [[unlikely]] return; }
L_0010E934:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0010E938:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0010E950:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E968u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x0010E968u) [[unlikely]] return; }
L_0010E968:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E974u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 301u, depth + 1u); else { c.pc = 0x0010E888u; return; } if (c.pc != 0x0010E974u) [[unlikely]] return; }
L_0010E974:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0010E984; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E984u);  if (depth < kMaxDepth) unit_0003(c, 127u, depth + 1u); else { c.pc = 0x0010D378u; return; } if (c.pc != 0x0010E984u) [[unlikely]] return; }
L_0010E984:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0010E9A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], c.r[17].w[0] >> 10);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E9CCu); set32(c.r[16], c.r[2].w[0] << 6);  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x0010E9CCu) [[unlikely]] return; }
L_0010E9CC:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] < 0; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0010E9F4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[17].d[0] & 1023ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);  if (t) { goto L_0010E9F4; } }
    set32(c.r[2], c.r[2].w[0] - 18680u);
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[17].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  goto L_0010EA0C; }
L_0010E9F4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0010EA50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EA04u);  if (depth < kMaxDepth) unit_0003(c, 127u, depth + 1u); else { c.pc = 0x0010D378u; return; } if (c.pc != 0x0010EA04u) [[unlikely]] return; }
L_0010EA04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0010EA50; } }
L_0010EA0C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = ld64((c.r[16].w[0] + 24u));  if (t) { goto L_0010EA38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EA20u);  if (depth < kMaxDepth) unit_0003(c, 272u, depth + 1u); else { c.pc = 0x0010E460u; return; } if (c.pc != 0x0010EA20u) [[unlikely]] return; }
L_0010EA20:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 16u));
    st64((c.r[16].w[0] + 24u), c.r[18].d[0]);
    c.r[3].d[0] = c.r[2].d[0] - c.r[3].d[0];
    st64((c.r[16].w[0] + 16u), c.r[2].d[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] + c.r[3].d[0];  if (t) { goto L_0010EA3C; } }
L_0010EA38:
    st64((c.r[16].w[0] + 24u), c.r[18].d[0]);
    c.budget -= 1;
L_0010EA3C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0010EA50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EA4Cu);  if (depth < kMaxDepth) unit_0003(c, 127u, depth + 1u); else { c.pc = 0x0010D378u; return; } if (c.pc != 0x0010EA4Cu) [[unlikely]] return; }
L_0010EA4C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0010EA50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0010EA70:
    set32(c.r[2], c.r[4].w[0] >> 10);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0; set32(c.r[5], c.r[2].w[0] << 6);  if (t) { goto L_0010EA8C; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    c.r[2].d[0] = c.r[4].d[0] & 1023ull;
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[5].w[0] + 12u)));  goto L_0010EA94; }
L_0010EA8C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 1u);  c.pc = t; return; }
L_0010EA94:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010EAB0; } }
    c.r[3].d[0] = ld64((c.r[5].w[0] + 24u));
    c.r[2].d[0] = ld64((c.r[5].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] - c.r[3].d[0];  c.pc = t; return; }
L_0010EAB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0010EAB8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EAD0u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x0010EAD0u) [[unlikely]] return; }
L_0010EAD0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EADCu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 314u, depth + 1u); else { c.pc = 0x0010EA70u; return; } if (c.pc != 0x0010EADCu) [[unlikely]] return; }
L_0010EADC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0010EAEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EAECu);  if (depth < kMaxDepth) unit_0003(c, 127u, depth + 1u); else { c.pc = 0x0010D378u; return; } if (c.pc != 0x0010EAECu) [[unlikely]] return; }
L_0010EAEC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0010EB08:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], c.r[4].w[0] >> 10);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[17], c.r[2].w[0] << 6);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] < 0; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_0010EB34; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[4].d[0] & 1023ull;
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  goto L_0010EB3C; }
L_0010EB34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0010EB60; } }
L_0010EB3C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = ld64((c.r[17].w[0] + 24u));  if (t) { goto L_0010EB5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EB50u);  if (depth < kMaxDepth) unit_0003(c, 272u, depth + 1u); else { c.pc = 0x0010E460u; return; } if (c.pc != 0x0010EB50u) [[unlikely]] return; }
L_0010EB50:
    c.r[3].d[0] = ld64((c.r[17].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] - c.r[3].d[0];
    c.r[16].d[0] = c.r[16].d[0] + c.r[2].d[0];
    c.budget -= 3;
L_0010EB5C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0010EB60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0010EB78:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EB90u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x0010EB90u) [[unlikely]] return; }
L_0010EB90:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EB9Cu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 319u, depth + 1u); else { c.pc = 0x0010EB08u; return; } if (c.pc != 0x0010EB9Cu) [[unlikely]] return; }
L_0010EB9C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0010EBAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EBACu);  if (depth < kMaxDepth) unit_0003(c, 127u, depth + 1u); else { c.pc = 0x0010D378u; return; } if (c.pc != 0x0010EBACu) [[unlikely]] return; }
L_0010EBAC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0010EBC8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], c.r[4].w[0] >> 10);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 12;
    { const bool t = c.r[4].sd[0] < 0; set32(c.r[16], c.r[2].w[0] << 6);  if (t) { goto L_0010EC08; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[4].d[0] & 1023ull;
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);  goto L_0010EC14; }
L_0010EC08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 32770ull;  if (t) { goto L_0010ECA0; } }
L_0010EC14:
    set32(c.r[2], c.r[2].w[0] - 18680u);
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[4].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 12u)));  goto L_0010EC30; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 16ull;  if (t) { goto L_0010ECA0; } }
L_0010EC30:
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010EC48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EC44u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 261u, depth + 1u); else { c.pc = 0x0010E188u; return; } if (c.pc != 0x0010EC44u) [[unlikely]] return; }
L_0010EC44:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_0010EC48:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; st32((c.r[16].w[0] + 40u), c.r[17].w[0]);  if (t) { goto L_0010EC64; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65533ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0010EC8C; } }
L_0010EC64:
    c.r[2].d[0] = c.r[3].d[0] | 2ull;
    st64((c.r[16].w[0] + 32u), c.r[18].d[0]);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 44u), c.r[28].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 48u), c.r[19].w[0]);  if (t) { goto L_0010EC8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EC8Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 259u, depth + 1u); else { c.pc = 0x0010E100u; return; } if (c.pc != 0x0010EC8Cu) [[unlikely]] return; }
L_0010EC8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EC94u);  if (depth < kMaxDepth) unit_0003(c, 272u, depth + 1u); else { c.pc = 0x0010E460u; return; } if (c.pc != 0x0010EC94u) [[unlikely]] return; }
L_0010EC94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EC9Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 253u, depth + 1u); else { c.pc = 0x0010DF70u; return; } if (c.pc != 0x0010EC9Cu) [[unlikely]] return; }
L_0010EC9C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010ECA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0010ECC0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010ECF0u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x0010ECF0u) [[unlikely]] return; }
L_0010ECF0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010ED08u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 325u, depth + 1u); else { c.pc = 0x0010EBC8u; return; } if (c.pc != 0x0010ED08u) [[unlikely]] return; }
L_0010ED08:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0010ED18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010ED18u);  if (depth < kMaxDepth) unit_0003(c, 127u, depth + 1u); else { c.pc = 0x0010D378u; return; } if (c.pc != 0x0010ED18u) [[unlikely]] return; }
L_0010ED18:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0010ED40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010ED68u); c.r[5].sd[0] = static_cast<std::int32_t>(0x08CA0000u);  if (depth < kMaxDepth) unit_0005(c, 6u, depth + 1u); else { c.pc = 0x00114868u; return; } if (c.pc != 0x0010ED68u) [[unlikely]] return; }
L_0010ED68:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    if (c.r[16].d[0] != 0ull) { st32((c.r[16].w[0]), c.r[2].w[0]);  goto L_0010ED78; }
L_0010ED78:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x08CA0000u);  if (t) { goto L_0010EDD0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x08CA0000u);
    mmi::multu(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.hi.d[0];
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[6].d[0] = c.r[6].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[17].d[0] - c.r[3].d[0];
    c.r[2].d[0] = c.r[3].d[0] << 5;
    c.r[2].d[0] = c.r[2].d[0] - c.r[3].d[0];
    c.r[4].d[0] = c.r[2].d[0] << 6;
    c.r[4].d[0] = c.r[4].d[0] - c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] << 3;
    c.r[4].d[0] = c.r[4].d[0] + c.r[3].d[0];
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EDC4u); c.r[4].d[0] = c.r[4].d[0] << 6;  if (depth < kMaxDepth) unit_0005(c, 6u, depth + 1u); else { c.pc = 0x00114868u; return; } if (c.pc != 0x0010EDC4u) [[unlikely]] return; }
L_0010EDC4:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0010EDD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0010EDE8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08CA0000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
L_0010EDFC:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    mmi::multu(c, 1, c.r[16].w[0], c.r[2].w[0]);
    mmi::multu(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[5].d[0] = c.r[5].d[0] | 16960ull;
    c.r[16].d[0] = c.hi.d[1];
    c.r[6].d[0] = c.lo.d[0];
    c.r[16].d[0] = c.r[16].d[0] << 32;
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[4].d[0] = c.hi.d[0];
    c.r[6].d[0] = c.r[6].d[0] >> 32;
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    c.r[6].d[0] = c.lo.d[1];
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[6].d[0] = c.r[6].d[0] >> 32;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EE44u); c.r[16].d[0] = c.r[16].d[0] | c.r[6].d[0];  if (depth < kMaxDepth) unit_0005(c, 6u, depth + 1u); else { c.pc = 0x00114868u; return; } if (c.pc != 0x0010EE44u) [[unlikely]] return; }
L_0010EE44:
    c.r[2].d[0] = c.r[16].d[0] + c.r[2].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0010EE58:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0010EE74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EE6Cu);  if (depth < kMaxDepth) unit_0005(c, 18u, depth + 1u); else { c.pc = 0x001153F8u; return; } if (c.pc != 0x0010EE6Cu) [[unlikely]] return; }
L_0010EE6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = c.f[0];  if (t) { goto L_0010EE88; } }
L_0010EE74:
    c.r[2].d[0] = c.r[4].d[0] >> 1;
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EE84u); c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0005(c, 18u, depth + 1u); else { c.pc = 0x001153F8u; return; } if (c.pc != 0x0010EE84u) [[unlikely]] return; }
L_0010EE84:
    c.f[1] = fp::add(c.f[0], c.f[0]);
    c.budget -= 1;
L_0010EE88:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x4D0C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 40960ull;
    c.f[0] = c.r[1].w[0];
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0010EEE8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[5].w[0] - 1472u);
    set32(c.r[4], 0u + 63u);
    st32((c.r[3].w[0] - 448u), c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] + 1024u);
    set32(c.r[2], c.r[2].w[0] + 1008u);
    c.budget -= 8;
L_0010EF08:
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 16u);
    set32(c.r[3], c.r[3].w[0] - 16u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010EF08u | kUnwind; return; } goto L_0010EF08; } }
    set32(c.r[3], c.r[5].w[0] - 1472u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 1008u), 0u);  c.pc = t; return; }
L_0010EF38:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].d[0] = c.r[4].d[0] & 254ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[16].w[0] << 4);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EF64u); c.r[4].d[0] = c.r[3].d[0] | 1ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010EF64u) [[unlikely]] return; }
L_0010EF64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0010EF88; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[4], ld32((c.r[3].w[0] - 448u)));
    st32((c.r[3].w[0] - 448u), c.r[16].w[0]);
    st32((c.r[16].w[0]), c.r[4].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
L_0010EF88:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0010EF98:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.budget -= 13;
    { const bool t = c.r[20].d[0] != 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_0010EFD8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 22ull;  if (t) { goto L_0010F09C; } }
L_0010EFD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EFE0u); c.r[18].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x0010EFE0u) [[unlikely]] return; }
L_0010EFE0:
    set32(c.r[16], ld32((c.r[18].w[0] - 448u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0010EFF4; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[18].w[0] - 448u), c.r[2].w[0]);
    c.budget -= 2;
L_0010EFF4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0010F018; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0010F00C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F00Cu);  if (depth < kMaxDepth) unit_0003(c, 127u, depth + 1u); else { c.pc = 0x0010D378u; return; } if (c.pc != 0x0010F00Cu) [[unlikely]] return; }
L_0010F00C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 32773ull;  if (t) { goto L_0010F09C; } }
L_0010F018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F020u);  if (depth < kMaxDepth) unit_0003(c, 277u, depth + 1u); else { c.pc = 0x0010E5A0u; return; } if (c.pc != 0x0010F020u) [[unlikely]] return; }
L_0010F020:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].sd[0] >= 0) { st32((c.r[16].w[0] + 8u), c.r[20].w[0]);  goto L_0010F054; }
    set32(c.r[2], ld32((c.r[18].w[0] - 448u)));
    st32((c.r[18].w[0] - 448u), c.r[16].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0010F09C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F04Cu);  if (depth < kMaxDepth) unit_0003(c, 127u, depth + 1u); else { c.pc = 0x0010D378u; return; } if (c.pc != 0x0010F04Cu) [[unlikely]] return; }
L_0010F04C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0010F09C; } }
L_0010F054:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00110000u);
    st32((c.r[16].w[0] + 12u), c.r[21].w[0]);
    set32(c.r[6], c.r[6].w[0] - 4296u);
    st32((c.r[16].w[0] + 4u), c.r[17].w[0]);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F074u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 330u, depth + 1u); else { c.pc = 0x0010ECC0u; return; } if (c.pc != 0x0010F074u) [[unlikely]] return; }
L_0010F074:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F07Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 297u, depth + 1u); else { c.pc = 0x0010E838u; return; } if (c.pc != 0x0010F07Cu) [[unlikely]] return; }
L_0010F07C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] << 4);  if (t) { goto L_0010F090; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F08Cu);  if (depth < kMaxDepth) unit_0003(c, 127u, depth + 1u); else { c.pc = 0x0010D378u; return; } if (c.pc != 0x0010F08Cu) [[unlikely]] return; }
L_0010F08C:
    set32(c.r[2], c.r[16].w[0] << 4);
    c.budget -= 1;
L_0010F090:
    c.r[3].d[0] = c.r[17].d[0] & 254ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 3;
L_0010F09C:
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
L_0010F0C8:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.budget -= 12;
    { const bool t = c.r[19].d[0] != 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_0010F104; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 22ull;  if (t) { goto L_0010F194; } }
L_0010F104:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[16], ld32((c.r[18].w[0] - 448u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0010F11C; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[18].w[0] - 448u), c.r[2].w[0]);
    c.budget -= 2;
L_0010F11C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0010F130; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 32773ull;  if (t) { goto L_0010F194; } }
L_0010F130:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F138u);  if (depth < kMaxDepth) unit_0003(c, 276u, depth + 1u); else { c.pc = 0x0010E530u; return; } if (c.pc != 0x0010F138u) [[unlikely]] return; }
L_0010F138:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].sd[0] >= 0) { st32((c.r[16].w[0] + 8u), c.r[19].w[0]);  goto L_0010F15C; }
    set32(c.r[3], ld32((c.r[18].w[0] - 448u)));
    st32((c.r[18].w[0] - 448u), c.r[16].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_0010F198; } }
L_0010F15C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00110000u);
    st32((c.r[16].w[0] + 12u), c.r[20].w[0]);
    set32(c.r[6], c.r[6].w[0] - 4296u);
    st32((c.r[16].w[0] + 4u), c.r[17].w[0]);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F17Cu); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 325u, depth + 1u); else { c.pc = 0x0010EBC8u; return; } if (c.pc != 0x0010F17Cu) [[unlikely]] return; }
L_0010F17C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F184u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 292u, depth + 1u); else { c.pc = 0x0010E788u; return; } if (c.pc != 0x0010F184u) [[unlikely]] return; }
L_0010F184:
    set32(c.r[2], c.r[16].w[0] << 4);
    c.r[3].d[0] = c.r[17].d[0] & 254ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 4;
L_0010F194:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0010F198:
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0010F1B8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[2], c.r[16].w[0] >> 8);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F1DCu); set32(c.r[17], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x0010F1DCu) [[unlikely]] return; }
L_0010F1DC:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0010F1F8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[16].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010F214; } }
L_0010F1F8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0010F208; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F208u);  if (depth < kMaxDepth) unit_0003(c, 127u, depth + 1u); else { c.pc = 0x0010D378u; return; } if (c.pc != 0x0010F208u) [[unlikely]] return; }
L_0010F208:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 32770ull;  if (t) { goto L_0010F248; } }
L_0010F214:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F220u);  if (depth < kMaxDepth) unit_0003(c, 283u, depth + 1u); else { c.pc = 0x0010E688u; return; } if (c.pc != 0x0010F220u) [[unlikely]] return; }
L_0010F220:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 448u)));
    st32((c.r[3].w[0] - 448u), c.r[17].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 7;
    { const bool t = c.r[18].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010F248; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F244u);  if (depth < kMaxDepth) unit_0003(c, 127u, depth + 1u); else { c.pc = 0x0010D378u; return; } if (c.pc != 0x0010F244u) [[unlikely]] return; }
L_0010F244:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010F248:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0010F260:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], c.r[4].w[0] >> 8);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] < 0; set32(c.r[16], c.r[2].w[0] << 4);  if (t) { goto L_0010F28C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010F298; } }
L_0010F28C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 32770ull;  if (t) { goto L_0010F2C8; } }
L_0010F298:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F2A4u);  if (depth < kMaxDepth) unit_0003(c, 281u, depth + 1u); else { c.pc = 0x0010E5E8u; return; } if (c.pc != 0x0010F2A4u) [[unlikely]] return; }
L_0010F2A4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0010F2C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 448u)));
    st32((c.r[2].w[0] - 448u), c.r[16].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
L_0010F2C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0010F2D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[2].w[0] - 18648u), 0u);
    st32((c.r[3].w[0] - 18644u), 0u);
    set32(c.r[4], c.r[4].w[0] - 440u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { set32(c.r[6], 0u + 512u);  [[clang::musttail]] return unit_0006(c, 201u, depth); }
L_0010F380:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[16].sd[0] >= 0; st64((c.r[29].w[0] + 16u), c.r[17].d[0]);  if (t) { goto L_0010F3C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[17], c.r[3].w[0] - 440u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 32u);  if (t) { goto L_0010F3D4; } }
L_0010F3C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[17], ld32((c.r[2].w[0] - 18648u)));
    set32(c.r[2], ld32((c.r[3].w[0] - 18644u)));
    c.budget -= 4;
L_0010F3D4:
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010F3EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 105ull;  if (t) { goto L_0010F41C; } }
L_0010F3EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F3F4u);  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D320u; return; } if (c.pc != 0x0010F3F4u) [[unlikely]] return; }
L_0010F3F4:
    set32(c.r[3], c.r[16].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[3].w[0]), c.r[18].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[19].w[0]);
    c.r[4].d[0] = c.r[28].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[3].w[0] + 8u), c.r[4].w[0]);  if (t) { goto L_0010F418; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F418u);  if (depth < kMaxDepth) unit_0003(c, 127u, depth + 1u); else { c.pc = 0x0010D378u; return; } if (c.pc != 0x0010F418u) [[unlikely]] return; }
L_0010F418:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010F41C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0010F440:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[5], c.r[3].w[0] - 440u);
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 32u);  if (t) { goto L_0010F468; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 18648u)));
    set32(c.r[2], ld32((c.r[3].w[0] - 18644u)));
    c.budget -= 3;
L_0010F468:
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] << 4);  if (t) { goto L_0010F47C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 105u);  c.pc = t; return; }
L_0010F47C:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), 0u);  c.pc = t; return; }
L_0010F490:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_0010F4C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], 0u + 32u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 440u);  if (t) { goto L_0010F4D0; } }
L_0010F4C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 18648u)));
    set32(c.r[3], ld32((c.r[3].w[0] - 18644u)));
    c.budget -= 4;
L_0010F4D0:
    c.r[18].d[0] = c.r[28].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0010F514; } }
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_0010F4E0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_0010F50C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[3].d[0] = c.r[28].d[0] + 0ull;
    c.r[28].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F508u); set32(c.r[5], ld32((c.r[16].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010F508u) [[unlikely]] return; }
L_0010F508:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_0010F50C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010F4E0u | kUnwind; return; } goto L_0010F4E0; } }
L_0010F514:
    c.r[2].d[0] = c.r[28].d[0] + 0ull;
    c.r[28].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_0010F52C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0010F538:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 128u), c.r[21].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[21].w[0] - 18620u)));
    st64((c.r[29].w[0] + 144u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[17].d[0]);
    c.budget -= 12;
    { const bool t = c.r[2].sd[0] >= 0; st64((c.r[29].w[0] + 48u), c.r[16].d[0]);  if (t) { goto L_0010F5A0; } }
    set32(c.r[16], 0u + 1u);
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 24u), c.r[16].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F580u); st32((c.r[29].w[0] + 20u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0001(c, 60u, depth + 1u); else { c.pc = 0x001042E0u; return; } if (c.pc != 0x0010F580u) [[unlikely]] return; }
L_0010F580:
    st32((c.r[21].w[0] - 18620u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 20u), c.r[16].w[0]);
    st32((c.r[29].w[0] + 24u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F598u); st32((c.r[29].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0001(c, 60u, depth + 1u); else { c.pc = 0x001042E0u; return; } if (c.pc != 0x0010F598u) [[unlikely]] return; }
L_0010F598:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st32((c.r[3].w[0] - 18616u), c.r[2].w[0]);
    c.budget -= 2;
L_0010F5A0:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F5B0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 440u, depth + 1u); else { c.pc = 0x0010FF48u; return; } if (c.pc != 0x0010F5B0u) [[unlikely]] return; }
L_0010F5B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F5B8u); set32(c.r[4], ld32((c.r[21].w[0] - 18620u)));  if (depth < kMaxDepth) unit_0001(c, 68u, depth + 1u); else { c.pc = 0x00104320u; return; } if (c.pc != 0x0010F5B8u) [[unlikely]] return; }
L_0010F5B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F5C0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 392u, depth + 1u); else { c.pc = 0x00106D40u; return; } if (c.pc != 0x0010F5C0u) [[unlikely]] return; }
L_0010F5C0:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[20].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_0010F5F4; } }
L_0010F5D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.budget -= 2;
L_0010F5D8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010F5D8u | kUnwind; return; } goto L_0010F5D8; } }
L_0010F5F4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], c.r[16].w[0] + 128u);
    c.r[5].d[0] = c.r[5].d[0] | 1024ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F608u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 447u, depth + 1u); else { c.pc = 0x001074D8u; return; } if (c.pc != 0x0010F608u) [[unlikely]] return; }
L_0010F608:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[18], c.r[16].w[0] + 128u);  if (t) { goto L_0010F63C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F61Cu); set32(c.r[4], c.r[4].w[0] + 7528u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x0010F61Cu) [[unlikely]] return; }
L_0010F61C:
    c.budget -= 1;
L_0010F620:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010F620u | kUnwind; return; } goto L_0010F620; } }
L_0010F63C:
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[18].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010F5D0u | kUnwind; return; } goto L_0010F5D0; } }
    set32(c.r[17], c.r[20].w[0] + 5696u);
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[22].w[0] + 256u);
    st32((c.r[29].w[0]), 0u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 254u);
    c.budget -= 6;
L_0010F660:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 48u);
    set32(c.r[10], 0u + 12u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F674u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 459u, depth + 1u); else { c.pc = 0x001076A8u; return; } if (c.pc != 0x0010F674u) [[unlikely]] return; }
L_0010F674:
    set32(c.r[4], ld32((c.r[21].w[0] - 18620u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F680u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 64u, depth + 1u); else { c.pc = 0x00104300u; return; } if (c.pc != 0x0010F680u) [[unlikely]] return; }
L_0010F680:
    c.budget -= 2;
    if (c.r[16].sd[0] >= 0) { set32(c.r[2], ld32((c.r[17].w[0] + 4u)));  goto L_0010F694; }
    st32((c.r[19].w[0] + 36u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[16].w[0] - 100u);  if (t) { goto L_0010F6DC; } }
L_0010F694:
    c.r[2].d[0] = c.r[2].sd[0] < 522ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_0010F6B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F6A8u); set32(c.r[4], c.r[4].w[0] + 7552u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x0010F6A8u) [[unlikely]] return; }
L_0010F6A8:
    st32((c.r[19].w[0] + 36u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 120u);  if (t) { goto L_0010F6DC; } }
L_0010F6B4:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].sd[0] < 526ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_0010F6D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F6CCu); set32(c.r[4], c.r[4].w[0] + 7592u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x0010F6CCu) [[unlikely]] return; }
L_0010F6CC:
    st32((c.r[18].w[0] + 36u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 121u);  if (t) { goto L_0010F6DC; } }
L_0010F6D8:
    set32(c.r[2], ld32((c.r[20].w[0] + 5696u)));
    c.budget -= 1;
L_0010F6DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0010F708:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[16].w[0] - 18620u)));
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] < 0; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0010F744; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F72Cu);  if (depth < kMaxDepth) unit_0001(c, 62u, depth + 1u); else { c.pc = 0x001042F0u; return; } if (c.pc != 0x0010F72Cu) [[unlikely]] return; }
L_0010F72C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[4], ld32((c.r[3].w[0] - 18616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F740u); st32((c.r[16].w[0] - 18620u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0001(c, 62u, depth + 1u); else { c.pc = 0x001042F0u; return; } if (c.pc != 0x0010F740u) [[unlikely]] return; }
L_0010F740:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0010F744:
    set32(c.r[2], 0u + 1u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0010F788:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[2].w[0] - 18616u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00104310u | kUnwind; return; } [[clang::musttail]] return unit_0001(c, 66u, depth); }
L_0010F858:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[18], c.r[3].w[0] + 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0010F88C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_0010F900; } }
L_0010F88C:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F898u); set32(c.r[4], ld32((c.r[17].w[0] - 18620u)));  if (depth < kMaxDepth) unit_0001(c, 70u, depth + 1u); else { c.pc = 0x00104330u; return; } if (c.pc != 0x0010F898u) [[unlikely]] return; }
L_0010F898:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[7].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_0010F8A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 200u);  if (t) { goto L_0010F900; } }
L_0010F8A8:
    c.r[19].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[7], c.r[7].w[0] + 256u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[7].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[5], 0u + 21u);
    st32((c.r[29].w[0]), 0u);
    c.budget -= 6;
L_0010F8C0:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 48u);
    set32(c.r[9], c.r[19].w[0] + 5696u);
    set32(c.r[10], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F8D8u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 459u, depth + 1u); else { c.pc = 0x001076A8u; return; } if (c.pc != 0x0010F8D8u) [[unlikely]] return; }
L_0010F8D8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0010F8F4; } }
L_0010F8E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F8ECu); set32(c.r[4], ld32((c.r[17].w[0] - 18620u)));  if (depth < kMaxDepth) unit_0001(c, 64u, depth + 1u); else { c.pc = 0x00104300u; return; } if (c.pc != 0x0010F8ECu) [[unlikely]] return; }
L_0010F8EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0010F900; } }
L_0010F8F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F8FCu); set32(c.r[4], ld32((c.r[17].w[0] - 18620u)));  if (depth < kMaxDepth) unit_0001(c, 64u, depth + 1u); else { c.pc = 0x00104300u; return; } if (c.pc != 0x0010F8FCu) [[unlikely]] return; }
L_0010F8FC:
    set32(c.r[2], ld32((c.r[19].w[0] + 5696u)));
    c.budget -= 1;
L_0010F900:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0010F920:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    set32(c.r[22], c.r[2].w[0] + 128u);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[2], ld32((c.r[22].w[0] + 36u)));
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0010F96C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_0010FA20; } }
L_0010F96C:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F978u); set32(c.r[4], ld32((c.r[18].w[0] - 18620u)));  if (depth < kMaxDepth) unit_0001(c, 70u, depth + 1u); else { c.pc = 0x00104330u; return; } if (c.pc != 0x0010F978u) [[unlikely]] return; }
L_0010F978:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[2], 0u - 200u);  if (t) { goto L_0010FA20; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0010F994; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_0010F9A4; } }
L_0010F994:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F99Cu); set32(c.r[4], ld32((c.r[18].w[0] - 18620u)));  if (depth < kMaxDepth) unit_0001(c, 64u, depth + 1u); else { c.pc = 0x00104300u; return; } if (c.pc != 0x0010F99Cu) [[unlikely]] return; }
L_0010F99C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 210u);  if (t) { goto L_0010FA20; } }
L_0010F9A4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 324u);
    set32(c.r[6], 0u + 1023u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F9B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x0010F9B8u) [[unlikely]] return; }
L_0010F9B8:
    set32(c.r[3], c.r[16].w[0] - 20u);
    st32((c.r[16].w[0] - 20u), c.r[20].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[19].w[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[3].w[0] + 4u), c.r[21].w[0]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00110000u);
    st8((c.r[3].w[0] + 1043u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] + 5696u);
    set32(c.r[11], c.r[11].w[0] - 2168u);
    set32(c.r[5], 0u + 2u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 1044u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F9FCu); set32(c.r[10], 0u + 4u);  if (depth < kMaxDepth) unit_0001(c, 459u, depth + 1u); else { c.pc = 0x001076A8u; return; } if (c.pc != 0x0010F9FCu) [[unlikely]] return; }
L_0010F9FC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);  if (t) { goto L_0010FA14; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0010FA0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 18624u), c.r[2].w[0]);  if (t) { goto L_0010FA1C; } }
L_0010FA14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FA1Cu); set32(c.r[4], ld32((c.r[18].w[0] - 18620u)));  if (depth < kMaxDepth) unit_0001(c, 64u, depth + 1u); else { c.pc = 0x00104300u; return; } if (c.pc != 0x0010FA1Cu) [[unlikely]] return; }
L_0010FA1C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0010FA20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0010FA48:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FA58u); set32(c.r[7], 0u + 64u);  if (depth < kMaxDepth) unit_0003(c, 402u, depth + 1u); else { c.pc = 0x0010F920u; return; } if (c.pc != 0x0010FA58u) [[unlikely]] return; }
L_0010FA58:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0010FA70; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], 0u + 11u);
    st32((c.r[3].w[0] - 18624u), c.r[2].w[0]);
    c.budget -= 3;
L_0010FA70:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0010FA80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[17], c.r[3].w[0] + 128u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0010FAB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_0010FB24; } }
L_0010FAB0:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FABCu); set32(c.r[4], ld32((c.r[18].w[0] - 18620u)));  if (depth < kMaxDepth) unit_0001(c, 70u, depth + 1u); else { c.pc = 0x00104330u; return; } if (c.pc != 0x0010FABCu) [[unlikely]] return; }
L_0010FABC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[7].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_0010FACC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 200u);  if (t) { goto L_0010FB24; } }
L_0010FACC:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[7].w[0] + 256u), c.r[16].w[0]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00110000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] + 256u);
    set32(c.r[9], c.r[9].w[0] + 5696u);
    set32(c.r[11], c.r[11].w[0] - 2168u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 48u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FB00u); set32(c.r[10], 0u + 4u);  if (depth < kMaxDepth) unit_0001(c, 459u, depth + 1u); else { c.pc = 0x001076A8u; return; } if (c.pc != 0x0010FB00u) [[unlikely]] return; }
L_0010FB00:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);  if (t) { goto L_0010FB18; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 18624u), c.r[2].w[0]);  if (t) { goto L_0010FB20; } }
L_0010FB18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FB20u); set32(c.r[4], ld32((c.r[18].w[0] - 18620u)));  if (depth < kMaxDepth) unit_0001(c, 64u, depth + 1u); else { c.pc = 0x00104300u; return; } if (c.pc != 0x0010FB20u) [[unlikely]] return; }
L_0010FB20:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0010FB24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0010FB40:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 2;
L_0010FB48:
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    set32(c.r[19], c.r[2].w[0] + 128u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0010FB80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_0010FC00; } }
L_0010FB80:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FB8Cu); set32(c.r[4], ld32((c.r[20].w[0] - 18620u)));  if (depth < kMaxDepth) unit_0001(c, 70u, depth + 1u); else { c.pc = 0x00104330u; return; } if (c.pc != 0x0010FB8Cu) [[unlikely]] return; }
L_0010FB8C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_0010FB9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 200u);  if (t) { goto L_0010FC00; } }
L_0010FB9C:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[3].w[0] + 256u);
    st32((c.r[3].w[0] + 256u), c.r[16].w[0]);
    c.budget -= 3;
L_0010FBA8:
    st32((c.r[2].w[0] + 16u), c.r[17].w[0]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00110000u);
    st32((c.r[2].w[0] + 20u), c.r[18].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] + 5696u);
    set32(c.r[11], c.r[11].w[0] - 2168u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 48u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FBDCu); set32(c.r[10], 0u + 4u);  if (depth < kMaxDepth) unit_0001(c, 459u, depth + 1u); else { c.pc = 0x001076A8u; return; } if (c.pc != 0x0010FBDCu) [[unlikely]] return; }
L_0010FBDC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);  if (t) { goto L_0010FBF4; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 18624u), c.r[2].w[0]);  if (t) { goto L_0010FBFC; } }
L_0010FBF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FBFCu); set32(c.r[4], ld32((c.r[20].w[0] - 18620u)));  if (depth < kMaxDepth) unit_0001(c, 64u, depth + 1u); else { c.pc = 0x00104300u; return; } if (c.pc != 0x0010FBFCu) [[unlikely]] return; }
L_0010FBFC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0010FC00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 2;
L_0010FC08:
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0010FC20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[8].sd[0] = static_cast<std::int32_t>(0x00430000u);  if (t) { goto L_0010FC70; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0010FC70; } }
    set32(c.r[7], c.r[4].w[0] + 16u);
    c.budget -= 1;
L_0010FC44:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.budget -= 1;
L_0010FC48:
    set32(c.r[2], c.r[7].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010FC48u | kUnwind; return; } goto L_0010FC48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[4].w[0] + 4u)));  if (t) { goto L_0010FC74; } }
L_0010FC70:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_0010FC74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010FCB0; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0010FCB0; } }
    set32(c.r[7], c.r[4].w[0] + 80u);
    c.budget -= 2;
L_0010FC90:
    set32(c.r[2], c.r[7].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010FC90u | kUnwind; return; } goto L_0010FC90; } }
L_0010FCB0:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[8].w[0] - 18616u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00104310u | kUnwind; return; } [[clang::musttail]] return unit_0001(c, 66u, depth); }
L_0010FCB8:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    set32(c.r[21], c.r[2].w[0] + 128u);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 36u)));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0010FD00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_0010FDA4; } }
L_0010FD00:
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FD0Cu); set32(c.r[4], ld32((c.r[22].w[0] - 18620u)));  if (depth < kMaxDepth) unit_0001(c, 70u, depth + 1u); else { c.pc = 0x00104330u; return; } if (c.pc != 0x0010FD0Cu) [[unlikely]] return; }
L_0010FD0C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_0010FD1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 200u);  if (t) { goto L_0010FDA4; } }
L_0010FD1C:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[16], c.r[16].w[0] + 1408u);
    set32(c.r[17], c.r[2].w[0] + 256u);
    st32((c.r[2].w[0] + 256u), c.r[20].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[17].w[0] + 28u), c.r[16].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[17].w[0] + 24u), c.r[19].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FD44u); st32((c.r[17].w[0] + 12u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0001(c, 389u, depth + 1u); else { c.pc = 0x00106C90u; return; } if (c.pc != 0x0010FD44u) [[unlikely]] return; }
L_0010FD44:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FD50u); set32(c.r[5], 0u + 192u);  if (depth < kMaxDepth) unit_0001(c, 389u, depth + 1u); else { c.pc = 0x00106C90u; return; } if (c.pc != 0x0010FD50u) [[unlikely]] return; }
L_0010FD50:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00110000u);
    st32((c.r[29].w[0]), c.r[16].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] + 5696u);
    set32(c.r[11], c.r[11].w[0] - 992u);
    set32(c.r[5], 0u + 5u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 48u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FD80u); set32(c.r[10], 0u + 4u);  if (depth < kMaxDepth) unit_0001(c, 459u, depth + 1u); else { c.pc = 0x001076A8u; return; } if (c.pc != 0x0010FD80u) [[unlikely]] return; }
L_0010FD80:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);  if (t) { goto L_0010FD98; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 18624u), c.r[2].w[0]);  if (t) { goto L_0010FDA0; } }
L_0010FD98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FDA0u); set32(c.r[4], ld32((c.r[22].w[0] - 18620u)));  if (depth < kMaxDepth) unit_0001(c, 64u, depth + 1u); else { c.pc = 0x00104300u; return; } if (c.pc != 0x0010FDA0u) [[unlikely]] return; }
L_0010FDA0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0010FDA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0010FDD0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    set32(c.r[2], c.r[20].w[0] + 128u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0010FE14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_0010FF24; } }
L_0010FE14:
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FE20u); set32(c.r[4], ld32((c.r[21].w[0] - 18620u)));  if (depth < kMaxDepth) unit_0001(c, 70u, depth + 1u); else { c.pc = 0x00104330u; return; } if (c.pc != 0x0010FE20u) [[unlikely]] return; }
L_0010FE20:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[19].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_0010FE30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 200u);  if (t) { goto L_0010FF24; } }
L_0010FE30:
    c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    set32(c.r[6], c.r[19].w[0] + 256u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[19].w[0] + 256u), c.r[18].w[0]);  if (t) { goto L_0010FE50; } }
    st32((c.r[6].w[0] + 20u), c.r[16].w[0]);
    st32((c.r[6].w[0] + 24u), 0u);
    c.budget -= 2;
L_0010FE48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 12u), 0u);  if (t) { goto L_0010FE7C; } }
L_0010FE50:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[2], c.r[17].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] | 65520ull;
    set32(c.r[4], c.r[17].w[0] - 16u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[5], c.r[16].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[17].w[0] + c.r[2].w[0]);
    st32((c.r[6].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 11;
L_0010FE7C:
    set32(c.r[2], c.r[19].w[0] + 256u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0010FEC8; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00110000u);
    set32(c.r[2], c.r[17].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[7].w[0] + 256u);
    c.budget -= 4;
L_0010FEA0:
    c.r[5].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[3], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[3].w[0] + 32u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.r[2].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010FEA0u | kUnwind; return; } goto L_0010FEA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010FED0; } }
L_0010FEC8:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00110000u);
    c.budget -= 2;
L_0010FED0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FED8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 82u, depth + 1u); else { c.pc = 0x00104560u; return; } if (c.pc != 0x0010FED8u) [[unlikely]] return; }
L_0010FED8:
    set32(c.r[11], c.r[16].w[0] - 2168u);
    set32(c.r[4], c.r[20].w[0] + 128u);
    set32(c.r[7], c.r[19].w[0] + 256u);
    set32(c.r[9], c.r[18].w[0] + 5696u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 48u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FF00u); set32(c.r[10], 0u + 4u);  if (depth < kMaxDepth) unit_0001(c, 459u, depth + 1u); else { c.pc = 0x001076A8u; return; } if (c.pc != 0x0010FF00u) [[unlikely]] return; }
L_0010FF00:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);  if (t) { goto L_0010FF18; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 18624u), c.r[2].w[0]);  if (t) { goto L_0010FF20; } }
L_0010FF18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FF20u); set32(c.r[4], ld32((c.r[21].w[0] - 18620u)));  if (depth < kMaxDepth) unit_0001(c, 64u, depth + 1u); else { c.pc = 0x00104300u; return; } if (c.pc != 0x0010FF20u) [[unlikely]] return; }
L_0010FF20:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0010FF24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 4;
L_0010FF34:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0010FF48:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] - 18624u)));
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.budget -= 11;
L_0010FF74:
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_0010FF88; } }
    goto L_0010FF80;
L_0010FF7C:
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 1;
L_0010FF80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0010FFE8; } }
L_0010FF88:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FF94u); set32(c.r[4], ld32((c.r[17].w[0] - 18616u)));  if (depth < kMaxDepth) unit_0001(c, 70u, depth + 1u); else { c.pc = 0x00104330u; return; } if (c.pc != 0x0010FF94u) [[unlikely]] return; }
L_0010FF94:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; c.r[16].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;  if (t) { goto L_0010FFAC; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[4], ld32((c.r[17].w[0] - 18616u)));  if (t) { goto L_0010FFAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FFACu); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 68u, depth + 1u); else { c.pc = 0x00104320u; return; } if (c.pc != 0x0010FFACu) [[unlikely]] return; }
L_0010FFAC:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[16].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_0010FFBC; } }
    set32(c.r[2], ld32((c.r[19].w[0] - 18624u)));
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0010FFBC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0010FFE8; } }
    goto L_0010FFC4;
L_0010FFC0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0010FFC4:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[19].w[0] - 18624u), 0u);  if (t) { goto L_0010FFD8; } }
    goto L_0010FFCC;
L_0010FFC8:
    st32((c.r[19].w[0] - 18624u), 0u);
    c.budget -= 1;
L_0010FFCC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 1;
L_0010FFD0:
    set32(c.r[3], ld32((c.r[2].w[0] + 5696u)));
    st32((c.r[21].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_0010FFD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.budget -= 1;
L_0010FFDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FFE4u); set32(c.r[4], ld32((c.r[2].w[0] - 18620u)));  if (depth < kMaxDepth) unit_0001(c, 64u, depth + 1u); else { c.pc = 0x00104300u; return; } if (c.pc != 0x0010FFE4u) [[unlikely]] return; }
L_0010FFE4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0010FFE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
L_0010FFFC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
    [[clang::musttail]] return unit_0004(c, 1u, depth);
}

}
