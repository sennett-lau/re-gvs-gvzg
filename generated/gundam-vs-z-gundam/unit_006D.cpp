#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_006D[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 12, 0, 0, 13, 0,
    14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 23,
    0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0,
    39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 43, 0, 44, 0, 45, 0, 46, 0,
    47, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 0, 0, 0,
    51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 61,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0,
    68, 0, 0, 0, 0, 0, 0, 0, 69, 0, 70, 0, 71, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 78, 0, 79, 0, 80, 0, 81, 0, 82, 0, 83, 0, 84, 0, 85, 0, 86, 0, 87, 0,
    88, 0, 89, 0, 90, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0, 94, 0, 95, 0, 96, 0, 97, 0, 98, 0, 99, 0, 100, 0,
    101, 0, 102, 0, 103, 0, 0, 0, 104, 0, 0, 0, 105, 0, 106, 0, 107, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 113, 0, 114, 0, 115, 0, 116, 0, 117, 0, 118, 0, 119, 0, 120, 0,
    121, 0, 122, 0, 123, 0, 124, 0, 125, 0, 126, 0, 0, 0, 127, 0, 128, 0, 129, 0, 130, 0, 131, 0, 132, 0, 133, 0, 134, 0, 135, 0,
    136, 0, 137, 0, 138, 0, 139, 0, 140, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 145, 0, 146, 0, 147,
    0, 0, 148, 0, 0, 149, 0, 0, 150, 0, 0, 151, 0, 0, 152, 0, 0, 153, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0,
    0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 167, 0, 0, 168, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0,
    176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    180, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 186, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    191, 0, 192, 0, 0, 0, 0, 0, 193, 0, 194, 0, 195, 0, 196, 0, 197, 0, 198, 0, 199, 0, 200, 0, 201, 0, 202, 0, 203, 0, 204, 0,
    205, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    208, 0, 209, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218,
    0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0,
    0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0,
    228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0,
    231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0,
    0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 0,
    0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0,
    0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0,
    270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 272, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 274, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0,
    282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 286, 0,
    287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 290, 0, 291, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 310, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 322,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 333, 0, 334, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0,
};

void unit_006D(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002B4000;
    case 2u: goto L_002B4028;
    case 3u: goto L_002B4070;
    case 4u: goto L_002B4138;
    case 5u: goto L_002B4140;
    case 6u: goto L_002B4150;
    case 7u: goto L_002B4188;
    case 8u: goto L_002B41D0;
    case 9u: goto L_002B4240;
    case 10u: goto L_002B4250;
    case 11u: goto L_002B4260;
    case 12u: goto L_002B426C;
    case 13u: goto L_002B4278;
    case 14u: goto L_002B4280;
    case 15u: goto L_002B42A0;
    case 16u: goto L_002B42E0;
    case 17u: goto L_002B4360;
    case 18u: goto L_002B43D0;
    case 19u: goto L_002B443C;
    case 20u: goto L_002B44C4;
    case 21u: goto L_002B44E0;
    case 22u: goto L_002B4570;
    case 23u: goto L_002B457C;
    case 24u: goto L_002B4584;
    case 25u: goto L_002B45A0;
    case 26u: goto L_002B4630;
    case 27u: goto L_002B46B8;
    case 28u: goto L_002B4700;
    case 29u: goto L_002B47F0;
    case 30u: goto L_002B4840;
    case 31u: goto L_002B4870;
    case 32u: goto L_002B48C0;
    case 33u: goto L_002B4918;
    case 34u: goto L_002B4920;
    case 35u: goto L_002B4940;
    case 36u: goto L_002B4B10;
    case 37u: goto L_002B4B40;
    case 38u: goto L_002B4B70;
    case 39u: goto L_002B4B80;
    case 40u: goto L_002B4BB0;
    case 41u: goto L_002B4BC0;
    case 42u: goto L_002B4BD4;
    case 43u: goto L_002B4BE0;
    case 44u: goto L_002B4BE8;
    case 45u: goto L_002B4BF0;
    case 46u: goto L_002B4BF8;
    case 47u: goto L_002B4C00;
    case 48u: goto L_002B4C08;
    case 49u: goto L_002B4C58;
    case 50u: goto L_002B4C60;
    case 51u: goto L_002B4C80;
    case 52u: goto L_002B4CE0;
    case 53u: goto L_002B4D30;
    case 54u: goto L_002B4D58;
    case 55u: goto L_002B4D68;
    case 56u: goto L_002B4D98;
    case 57u: goto L_002B4E50;
    case 58u: goto L_002B4E8C;
    case 59u: goto L_002B4ED0;
    case 60u: goto L_002B4EF0;
    case 61u: goto L_002B4EFC;
    case 62u: goto L_002B4F54;
    case 63u: goto L_002B4F8C;
    case 64u: goto L_002B4FA0;
    case 65u: goto L_002B4FC0;
    case 66u: goto L_002B4FD0;
    case 67u: goto L_002B4FE0;
    case 68u: goto L_002B5000;
    case 69u: goto L_002B5020;
    case 70u: goto L_002B5028;
    case 71u: goto L_002B5030;
    case 72u: goto L_002B5038;
    case 73u: goto L_002B5040;
    case 74u: goto L_002B505C;
    case 75u: goto L_002B5068;
    case 76u: goto L_002B50A0;
    case 77u: goto L_002B50A8;
    case 78u: goto L_002B50B0;
    case 79u: goto L_002B50B8;
    case 80u: goto L_002B50C0;
    case 81u: goto L_002B50C8;
    case 82u: goto L_002B50D0;
    case 83u: goto L_002B50D8;
    case 84u: goto L_002B50E0;
    case 85u: goto L_002B50E8;
    case 86u: goto L_002B50F0;
    case 87u: goto L_002B50F8;
    case 88u: goto L_002B5100;
    case 89u: goto L_002B5108;
    case 90u: goto L_002B5110;
    case 91u: goto L_002B5118;
    case 92u: goto L_002B5134;
    case 93u: goto L_002B5140;
    case 94u: goto L_002B5148;
    case 95u: goto L_002B5150;
    case 96u: goto L_002B5158;
    case 97u: goto L_002B5160;
    case 98u: goto L_002B5168;
    case 99u: goto L_002B5170;
    case 100u: goto L_002B5178;
    case 101u: goto L_002B5180;
    case 102u: goto L_002B5188;
    case 103u: goto L_002B5190;
    case 104u: goto L_002B51A0;
    case 105u: goto L_002B51B0;
    case 106u: goto L_002B51B8;
    case 107u: goto L_002B51C0;
    case 108u: goto L_002B51C8;
    case 109u: goto L_002B51E4;
    case 110u: goto L_002B51F0;
    case 111u: goto L_002B5228;
    case 112u: goto L_002B5238;
    case 113u: goto L_002B5240;
    case 114u: goto L_002B5248;
    case 115u: goto L_002B5250;
    case 116u: goto L_002B5258;
    case 117u: goto L_002B5260;
    case 118u: goto L_002B5268;
    case 119u: goto L_002B5270;
    case 120u: goto L_002B5278;
    case 121u: goto L_002B5280;
    case 122u: goto L_002B5288;
    case 123u: goto L_002B5290;
    case 124u: goto L_002B5298;
    case 125u: goto L_002B52A0;
    case 126u: goto L_002B52A8;
    case 127u: goto L_002B52B8;
    case 128u: goto L_002B52C0;
    case 129u: goto L_002B52C8;
    case 130u: goto L_002B52D0;
    case 131u: goto L_002B52D8;
    case 132u: goto L_002B52E0;
    case 133u: goto L_002B52E8;
    case 134u: goto L_002B52F0;
    case 135u: goto L_002B52F8;
    case 136u: goto L_002B5300;
    case 137u: goto L_002B5308;
    case 138u: goto L_002B5310;
    case 139u: goto L_002B5318;
    case 140u: goto L_002B5320;
    case 141u: goto L_002B5328;
    case 142u: goto L_002B5338;
    case 143u: goto L_002B5350;
    case 144u: goto L_002B5360;
    case 145u: goto L_002B536C;
    case 146u: goto L_002B5374;
    case 147u: goto L_002B537C;
    case 148u: goto L_002B5388;
    case 149u: goto L_002B5394;
    case 150u: goto L_002B53A0;
    case 151u: goto L_002B53AC;
    case 152u: goto L_002B53B8;
    case 153u: goto L_002B53C4;
    case 154u: goto L_002B53D0;
    case 155u: goto L_002B53E0;
    case 156u: goto L_002B5410;
    case 157u: goto L_002B5474;
    case 158u: goto L_002B54A0;
    case 159u: goto L_002B54C4;
    case 160u: goto L_002B54E4;
    case 161u: goto L_002B54F8;
    case 162u: goto L_002B5514;
    case 163u: goto L_002B5528;
    case 164u: goto L_002B5540;
    case 165u: goto L_002B5600;
    case 166u: goto L_002B5650;
    case 167u: goto L_002B5698;
    case 168u: goto L_002B56A4;
    case 169u: goto L_002B56AC;
    case 170u: goto L_002B5748;
    case 171u: goto L_002B578C;
    case 172u: goto L_002B57A4;
    case 173u: goto L_002B57C4;
    case 174u: goto L_002B57D8;
    case 175u: goto L_002B57F4;
    case 176u: goto L_002B5800;
    case 177u: goto L_002B586C;
    case 178u: goto L_002B5894;
    case 179u: goto L_002B58A0;
    case 180u: goto L_002B5900;
    case 181u: goto L_002B5924;
    case 182u: goto L_002B5930;
    case 183u: goto L_002B595C;
    case 184u: goto L_002B5998;
    case 185u: goto L_002B59B8;
    case 186u: goto L_002B59C0;
    case 187u: goto L_002B59C8;
    case 188u: goto L_002B59D8;
    case 189u: goto L_002B5A28;
    case 190u: goto L_002B5A40;
    case 191u: goto L_002B5A80;
    case 192u: goto L_002B5A88;
    case 193u: goto L_002B5AA0;
    case 194u: goto L_002B5AA8;
    case 195u: goto L_002B5AB0;
    case 196u: goto L_002B5AB8;
    case 197u: goto L_002B5AC0;
    case 198u: goto L_002B5AC8;
    case 199u: goto L_002B5AD0;
    case 200u: goto L_002B5AD8;
    case 201u: goto L_002B5AE0;
    case 202u: goto L_002B5AE8;
    case 203u: goto L_002B5AF0;
    case 204u: goto L_002B5AF8;
    case 205u: goto L_002B5B00;
    case 206u: goto L_002B5B20;
    case 207u: goto L_002B5B30;
    case 208u: goto L_002B5B80;
    case 209u: goto L_002B5B88;
    case 210u: goto L_002B5B90;
    case 211u: goto L_002B5C30;
    case 212u: goto L_002B5C64;
    case 213u: goto L_002B5DE4;
    case 214u: goto L_002B5E24;
    case 215u: goto L_002B5E50;
    case 216u: goto L_002B5E98;
    case 217u: goto L_002B5EC4;
    case 218u: goto L_002B5EFC;
    case 219u: goto L_002B5F14;
    case 220u: goto L_002B5F48;
    case 221u: goto L_002B5F60;
    case 222u: goto L_002B5F90;
    case 223u: goto L_002B5FA8;
    case 224u: goto L_002B5FE8;
    case 225u: goto L_002B6008;
    case 226u: goto L_002B6020;
    case 227u: goto L_002B6060;
    case 228u: goto L_002B6080;
    case 229u: goto L_002B6098;
    case 230u: goto L_002B60E0;
    case 231u: goto L_002B6100;
    case 232u: goto L_002B6148;
    case 233u: goto L_002B616C;
    case 234u: goto L_002B61B8;
    case 235u: goto L_002B61DC;
    case 236u: goto L_002B61F4;
    case 237u: goto L_002B6218;
    case 238u: goto L_002B6250;
    case 239u: goto L_002B6268;
    case 240u: goto L_002B629C;
    case 241u: goto L_002B62D0;
    case 242u: goto L_002B62F0;
    case 243u: goto L_002B6364;
    case 244u: goto L_002B63C0;
    case 245u: goto L_002B6498;
    case 246u: goto L_002B64C4;
    case 247u: goto L_002B6524;
    case 248u: goto L_002B653C;
    case 249u: goto L_002B6564;
    case 250u: goto L_002B6590;
    case 251u: goto L_002B65A0;
    case 252u: goto L_002B65C4;
    case 253u: goto L_002B65DC;
    case 254u: goto L_002B6628;
    case 255u: goto L_002B663C;
    case 256u: goto L_002B6658;
    case 257u: goto L_002B666C;
    case 258u: goto L_002B6684;
    case 259u: goto L_002B66A0;
    case 260u: goto L_002B66C0;
    case 261u: goto L_002B66E8;
    case 262u: goto L_002B66F8;
    case 263u: goto L_002B6758;
    case 264u: goto L_002B6768;
    case 265u: goto L_002B67A8;
    case 266u: goto L_002B67F4;
    case 267u: goto L_002B6804;
    case 268u: goto L_002B6830;
    case 269u: goto L_002B6870;
    case 270u: goto L_002B6880;
    case 271u: goto L_002B68B0;
    case 272u: goto L_002B68B8;
    case 273u: goto L_002B68C0;
    case 274u: goto L_002B6918;
    case 275u: goto L_002B6920;
    case 276u: goto L_002B69A0;
    case 277u: goto L_002B6A20;
    case 278u: goto L_002B6A40;
    case 279u: goto L_002B6A58;
    case 280u: goto L_002B6AB0;
    case 281u: goto L_002B6AF8;
    case 282u: goto L_002B6B00;
    case 283u: goto L_002B6B28;
    case 284u: goto L_002B6B3C;
    case 285u: goto L_002B6B5C;
    case 286u: goto L_002B6B78;
    case 287u: goto L_002B6B80;
    case 288u: goto L_002B6BA8;
    case 289u: goto L_002B6BBC;
    case 290u: goto L_002B6BD8;
    case 291u: goto L_002B6BE0;
    case 292u: goto L_002B6C08;
    case 293u: goto L_002B6C28;
    case 294u: goto L_002B6C84;
    case 295u: goto L_002B6D60;
    case 296u: goto L_002B6DC8;
    case 297u: goto L_002B6E08;
    case 298u: goto L_002B6E38;
    case 299u: goto L_002B6E90;
    case 300u: goto L_002B6ED0;
    case 301u: goto L_002B6F00;
    case 302u: goto L_002B6FF0;
    case 303u: goto L_002B7064;
    case 304u: goto L_002B70D4;
    case 305u: goto L_002B70DC;
    case 306u: goto L_002B7160;
    case 307u: goto L_002B7340;
    case 308u: goto L_002B7368;
    case 309u: goto L_002B7418;
    case 310u: goto L_002B7428;
    case 311u: goto L_002B7430;
    case 312u: goto L_002B7470;
    case 313u: goto L_002B74B4;
    case 314u: goto L_002B74E8;
    case 315u: goto L_002B7520;
    case 316u: goto L_002B7550;
    case 317u: goto L_002B7558;
    case 318u: goto L_002B7580;
    case 319u: goto L_002B75C8;
    case 320u: goto L_002B7610;
    case 321u: goto L_002B76F0;
    case 322u: goto L_002B76FC;
    case 323u: goto L_002B7758;
    case 324u: goto L_002B77B8;
    case 325u: goto L_002B7808;
    case 326u: goto L_002B7878;
    case 327u: goto L_002B78D8;
    case 328u: goto L_002B7924;
    case 329u: goto L_002B7AF0;
    case 330u: goto L_002B7B50;
    case 331u: goto L_002B7BE8;
    case 332u: goto L_002B7C40;
    case 333u: goto L_002B7C88;
    case 334u: goto L_002B7C90;
    case 335u: goto L_002B7C98;
    case 336u: goto L_002B7CC0;
    case 337u: goto L_002B7D40;
    case 338u: goto L_002B7F70;
    case 339u: goto L_002B7FE0;
    default: bad_entry(c, 0x002B4000u); return;
    }
L_002B4000:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 80u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 56u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4028u); st8((c.r[1].w[0] + 18100u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 35u, depth + 1u); else { c.pc = 0x002382B0u; return; } if (c.pc != 0x002B4028u) [[unlikely]] return; }
L_002B4028:
    set32(c.r[2], 0u - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    st8((c.r[1].w[0] + 18081u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    st8((c.r[1].w[0] + 18083u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] + 18090u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[9].d[0] = 0ull + 0ull;
    st8((c.r[1].w[0] + 18080u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[8], c.r[8].w[0] + 18080u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 3u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 18;
L_002B4070:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18100u)));
    set32(c.r[2], c.r[6].w[0] << (c.r[9].w[0] & 31u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B4120; } }
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 27u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B40B8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 26u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_002B40B8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_002B40C8; } }
    c.budget -= 1;
L_002B40B8:
    st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[8].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_002B4118; } }
    c.budget -= 1;
L_002B40C8:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[7], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[4], c.r[4].w[0] + c.r[9].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 116u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 20u)));
    set32(c.r[4], c.r[6].w[0] << (c.r[4].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B40F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002B4118; } }
    c.budget -= 1;
L_002B40F8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B4110; } }
    st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[8].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_002B4118; } }
L_002B4110:
    st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002B4118:
    set32(c.r[8], c.r[8].w[0] + 10u);
    c.budget -= 2;
L_002B4120:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[2].d[0] = c.r[9].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B4070u | kUnwind; return; } goto L_002B4070; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4138u);  if (depth < kMaxDepth) unit_006D(c, 64u, depth + 1u); else { c.pc = 0x002B4FA0u; return; } if (c.pc != 0x002B4138u) [[unlikely]] return; }
L_002B4138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4140u);  if (depth < kMaxDepth) unit_006D(c, 143u, depth + 1u); else { c.pc = 0x002B5350u; return; } if (c.pc != 0x002B4140u) [[unlikely]] return; }
L_002B4140:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B4150:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[16], c.r[16].w[0] + 18080u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 14;
L_002B4188:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);  if (t) { goto L_002B4200; } }
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18100u)));
    set32(c.r[2], c.r[2].w[0] << (c.r[4].w[0] & 31u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B4200; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[2].w[0] - 24544u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B41D0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B41D0u) [[unlikely]] return; }
L_002B41D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B41E8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.r[17].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.budget -= 4;
L_002B41E8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002B4200; } }
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002B4200:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 10u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B4188u | kUnwind; return; } goto L_002B4188; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18100u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_002B4270; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 30u);
    set32(c.r[6], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4240u); st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x002B4240u) [[unlikely]] return; }
L_002B4240:
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 30u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4250u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x002B4250u) [[unlikely]] return; }
L_002B4250:
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 30u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4260u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x002B4260u) [[unlikely]] return; }
L_002B4260:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B426Cu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x002B426Cu) [[unlikely]] return; }
L_002B426C:
    c.budget -= 1;
L_002B4270:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4278u);  if (depth < kMaxDepth) unit_006D(c, 64u, depth + 1u); else { c.pc = 0x002B4FA0u; return; } if (c.pc != 0x002B4278u) [[unlikely]] return; }
L_002B4278:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4280u);  if (depth < kMaxDepth) unit_006D(c, 143u, depth + 1u); else { c.pc = 0x002B5350u; return; } if (c.pc != 0x002B4280u) [[unlikely]] return; }
L_002B4280:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002B42A0:
    set32(c.r[2], c.r[4].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 18082u);
    set32(c.r[5], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 24528u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002B4000u < 16384u) { entry = entries_006D[(t - 0x002B4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002B42E0:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 18080u);
    set32(c.r[4], 0u + 990u);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xB60B0000u);
    c.r[3].d[0] = c.r[2].d[0] | 24759ull;
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[6].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[6].w[0] + 6u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 6u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    set32(c.r[4], c.r[5].w[0] >> 31);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 6));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[6].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 320u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 319u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 318u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 32;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 317u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_002B4360:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 18080u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[4], 0u + 1u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 80u)));
    set32(c.r[2], c.r[4].w[0] << (c.r[2].w[0] & 31u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 19;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_002B43D8; } }
    set32(c.r[2], 0u + 90u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[5], 0u + 165u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B43D0u); st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x002B43D0u) [[unlikely]] return; }
L_002B43D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B44C8; } }
L_002B43D8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B43F0; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002B44C8; } }
L_002B43F0:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[4].d[0] = c.r[2].d[0] << 48;
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xB60B0000u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] | 24759ull;
    set32(c.r[3], c.r[4].w[0] >> 31);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].d[0] = c.r[17].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B4480; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B443Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));  if (depth < kMaxDepth) unit_006D(c, 52u, depth + 1u); else { c.pc = 0x002B4CE0u; return; } if (c.pc != 0x002B443Cu) [[unlikely]] return; }
L_002B443C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B4480; } }
    set32(c.r[2], c.r[17].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B4480; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_002B4480:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xB60B0000u);
    c.r[2].d[0] = c.r[2].d[0] | 24759ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] >> 31);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    c.r[1].d[0] = c.r[2].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B44C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B44C4u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));  if (depth < kMaxDepth) unit_006D(c, 51u, depth + 1u); else { c.pc = 0x002B4C80u; return; } if (c.pc != 0x002B44C4u) [[unlikely]] return; }
L_002B44C4:
    c.budget -= 1;
L_002B44C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B44E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], c.r[4].w[0] << 2);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[4], c.r[2].w[0] << 1);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] + 18080u);
    set32(c.r[2], 0u + 2u);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B4588; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 10u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], c.r[3].w[0] << (c.r[5].w[0] & 31u));
    c.r[5].d[0] = ~(c.r[3].d[0] | 0ull);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 56u)));
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    st8((c.r[4].w[0] + 56u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4570u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0076(c, 302u, depth + 1u); else { c.pc = 0x002DBBD0u; return; } if (c.pc != 0x002B4570u) [[unlikely]] return; }
L_002B4570:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B457Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0044(c, 227u, depth + 1u); else { c.pc = 0x00211EF0u; return; } if (c.pc != 0x002B457Cu) [[unlikely]] return; }
L_002B457C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4584u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0074(c, 295u, depth + 1u); else { c.pc = 0x002D2CE0u; return; } if (c.pc != 0x002B4584u) [[unlikely]] return; }
L_002B4584:
    c.budget -= 1;
L_002B4588:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B45A0:
    set32(c.r[2], c.r[4].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 18080u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], 0u + 5u);
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[5].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B4620; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xB60B0000u);
    set32(c.r[3], 0u + 990u);
    c.r[2].d[0] = c.r[2].d[0] | 24759ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[5].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 6u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] >> 31);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[5].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 17;
L_002B4620:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_002B4630:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 18080u);
    set32(c.r[17], c.r[2].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[3], 0u + 5u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[2], c.r[2].w[0] + 9604u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0]));
    c.r[2].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 21;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 9u)));  if (t) { goto L_002B4690; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002B46A0; } }
    c.budget -= 1;
L_002B4690:
    c.r[2].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B46A0; } }
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002B46A0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 9u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_002B46B8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B46B8u); set32(c.r[5], 0u + 166u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x002B46B8u) [[unlikely]] return; }
L_002B46B8:
    c.r[2].d[0] = ld16((c.r[16].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 33776ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B46D8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B47D8; } }
    c.budget -= 1;
L_002B46D8:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    set32(c.r[3], 0u + 90u);
    set32(c.r[2], 0u + 6u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 165u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4700u); st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x002B4700u) [[unlikely]] return; }
L_002B4700:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 9u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_002B4790; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[2], 0u - 1u);
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0] + 137u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0] + 136u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0] + 129u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0] + 128u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0] + 121u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 32;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 120u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002B47D8; } }
L_002B4790:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[5].w[0] << (c.r[2].w[0] & 31u));
    c.r[4].d[0] = ~(c.r[2].d[0] | 0ull);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 80u)));
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st8((c.r[3].w[0] + 80u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], c.r[5].w[0] << (c.r[2].w[0] & 31u));
    c.r[4].d[0] = c.r[2].d[0] << 56;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 56u)));
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st8((c.r[3].w[0] + 56u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 18;
L_002B47D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B47F0:
    set32(c.r[2], c.r[4].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 18080u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], 0u + 6u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B4838; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002B4838:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_002B4840:
    set32(c.r[2], c.r[4].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 18085u);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[5], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_002B4870:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[5], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[2].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[2], c.r[2].w[0] + 18085u);
    set32(c.r[3], c.r[2].w[0] + c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], c.r[2].w[0] + 18082u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 24496u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 19;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002B4000u < 16384u) { entry = entries_006D[(t - 0x002B4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002B48C0:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 18080u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 660u);  if (t) { goto L_002B4908; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002B4910; } }
    c.budget -= 1;
L_002B4908:
    set32(c.r[2], 0u + 360u);
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002B4910:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4918u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0076(c, 304u, depth + 1u); else { c.pc = 0x002DBD50u; return; } if (c.pc != 0x002B4918u) [[unlikely]] return; }
L_002B4918:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4920u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0074(c, 297u, depth + 1u); else { c.pc = 0x002D2E00u; return; } if (c.pc != 0x002B4920u) [[unlikely]] return; }
L_002B4920:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B4940:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], c.r[4].w[0] << 2);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 18080u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B4AD8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], c.r[5].w[0] << (c.r[2].w[0] & 31u));
    c.r[4].d[0] = ~(c.r[2].d[0] | 0ull);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 56u)));
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st8((c.r[3].w[0] + 56u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[5].w[0] << (c.r[2].w[0] & 31u));
    c.r[4].d[0] = ~(c.r[2].d[0] | 0ull);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 288u)));
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st8((c.r[3].w[0] + 288u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 116u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[3].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 34;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_002B4A18; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 116u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0] + 12u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
L_002B4A18:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0] + 284u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0] + 280u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0] + 276u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0] + 116u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0] + 137u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0] + 136u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0] + 129u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0] + 128u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0] + 121u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 48;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 120u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002B4B50; } }
L_002B4AD8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B4B18; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6u)));
    set32(c.r[2], 0u + 180u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x006D0000u);  if (t) { goto L_002B4B10; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 24116u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4B10u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 46u, depth + 1u); else { c.pc = 0x00238530u; return; } if (c.pc != 0x002B4B10u) [[unlikely]] return; }
L_002B4B10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 480u);  if (t) { goto L_002B4B20; } }
L_002B4B18:
    set32(c.r[3], 0u + 180u);
    c.budget -= 2;
L_002B4B20:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6u)));
    c.r[1].d[0] = c.r[2].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;  if (t) { goto L_002B4B50; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002B4B50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4B40u);  if (depth < kMaxDepth) unit_006E(c, 10u, depth + 1u); else { c.pc = 0x002B8280u; return; } if (c.pc != 0x002B4B40u) [[unlikely]] return; }
L_002B4B40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B4B50; } }
    set32(c.r[2], 0u + 10u);
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002B4B50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B4B70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_002B4B80:
    set32(c.r[2], c.r[4].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 18085u);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[5], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_002B4BB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4BC0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x002B4BC0u) [[unlikely]] return; }
L_002B4BC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B4C50; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4BD4u); st8((c.r[2].w[0] + 41u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_004D(c, 130u, depth + 1u); else { c.pc = 0x002362E0u; return; } if (c.pc != 0x002B4BD4u) [[unlikely]] return; }
L_002B4BD4:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4BE0u); st8((c.r[2].w[0] + 99u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x002B4BE0u) [[unlikely]] return; }
L_002B4BE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4BE8u);  if (depth < kMaxDepth) unit_005B(c, 76u, depth + 1u); else { c.pc = 0x0026CAB0u; return; } if (c.pc != 0x002B4BE8u) [[unlikely]] return; }
L_002B4BE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4BF0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 25u, depth + 1u); else { c.pc = 0x001246A0u; return; } if (c.pc != 0x002B4BF0u) [[unlikely]] return; }
L_002B4BF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4BF8u);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x002B4BF8u) [[unlikely]] return; }
L_002B4BF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4C00u);  if (depth < kMaxDepth) unit_004E(c, 5u, depth + 1u); else { c.pc = 0x00238040u; return; } if (c.pc != 0x002B4C00u) [[unlikely]] return; }
L_002B4C00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4C08u);  if (depth < kMaxDepth) unit_0046(c, 207u, depth + 1u); else { c.pc = 0x0021B5B0u; return; } if (c.pc != 0x002B4C08u) [[unlikely]] return; }
L_002B4C08:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18081u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);  if (t) { goto L_002B4C28; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18091u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002B4C30; } }
L_002B4C28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B4C68; } }
L_002B4C30:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B4C40; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B4C48; } }
L_002B4C40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002B4C68; } }
L_002B4C48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_002B4C68; } }
L_002B4C50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4C58u);  if (depth < kMaxDepth) unit_006D(c, 64u, depth + 1u); else { c.pc = 0x002B4FA0u; return; } if (c.pc != 0x002B4C58u) [[unlikely]] return; }
L_002B4C58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4C60u);  if (depth < kMaxDepth) unit_006D(c, 143u, depth + 1u); else { c.pc = 0x002B5350u; return; } if (c.pc != 0x002B4C60u) [[unlikely]] return; }
L_002B4C60:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002B4C68:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B4C80:
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[8], c.r[5].w[0] << (c.r[4].w[0] & 31u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 80u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 56u)));
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[5].d[0];
    c.r[3].d[0] = c.r[8].d[0] & c.r[3].d[0];
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[7], c.r[6].w[0] + 80u);  if (t) { goto L_002B4CD8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + 9540u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[8].d[0] << 56;  if (t) { goto L_002B4CD8; } }
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_002B4CD8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B4CE0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << (c.r[4].w[0] & 31u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 56u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B4D1C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 9540u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 864ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
L_002B4D1C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B4D30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002B4D78; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 42u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 14u);  if (t) { goto L_002B4D60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4D58u);  if (depth < kMaxDepth) unit_004E(c, 177u, depth + 1u); else { c.pc = 0x0023A720u; return; } if (c.pc != 0x002B4D58u) [[unlikely]] return; }
L_002B4D58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B4D68; } }
L_002B4D60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4D68u); set32(c.r[4], 0u + 14u);  if (depth < kMaxDepth) unit_004E(c, 180u, depth + 1u); else { c.pc = 0x0023A860u; return; } if (c.pc != 0x002B4D68u) [[unlikely]] return; }
L_002B4D68:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 14u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_002B4F90; } }
L_002B4D78:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[5], c.r[4].w[0] + 14u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 14u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002B4DB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4D98u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 55u, depth + 1u); else { c.pc = 0x00238800u; return; } if (c.pc != 0x002B4D98u) [[unlikely]] return; }
L_002B4D98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B4F90; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 30u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 14u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_002B4F90; } }
L_002B4DB0:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] <= 0; set32(c.r[3], c.r[4].w[0] - 1u);  if (t) { goto L_002B4F90; } }
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B4F90; } }
    set32(c.r[10], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 42u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B4ED8; } }
    set32(c.r[9], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[8], ld32((c.r[28].w[0] - 23788u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 82u)));
    set32(c.r[6], c.r[8].w[0] + 68u);
    set32(c.r[3], c.r[6].w[0] + c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[7].w[0] + c.r[10].w[0]);  if (t) { goto L_002B4F90; } }
    set32(c.r[5], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 116u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 20u)));
    set32(c.r[4], c.r[5].w[0] << (c.r[4].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B4F90; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 159u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_002B4E38; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 73u)));
    set32(c.r[3], 0u + 52u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002B4F90; } }
    c.budget -= 1;
L_002B4E38:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 76u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[6].w[0] + c.r[7].w[0]);  if (t) { goto L_002B4E80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4E50u); c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x002B4E50u) [[unlikely]] return; }
L_002B4E50:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[4].d[0] = c.r[3].d[0] & 3ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[2], c.r[2].w[0] + 7248u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  if (t) { goto L_002B4EB8; } }
L_002B4E80:
    set32(c.r[2], c.r[6].w[0] + c.r[7].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4E8Cu); c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x002B4E8Cu) [[unlikely]] return; }
L_002B4E8C:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[4].d[0] = c.r[3].d[0] & 3ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[2], c.r[2].w[0] + 7632u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 11;
L_002B4EB8:
    c.r[6].d[0] = c.r[16].d[0] << 56;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    set32(c.r[4], c.r[4].w[0] - 18416u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4ED0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 46u, depth + 1u); else { c.pc = 0x00238530u; return; } if (c.pc != 0x002B4ED0u) [[unlikely]] return; }
L_002B4ED0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B4F90; } }
L_002B4ED8:
    set32(c.r[8], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 88u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002B4F08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4EF0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006C(c, 403u, depth + 1u); else { c.pc = 0x002B3190u; return; } if (c.pc != 0x002B4EF0u) [[unlikely]] return; }
L_002B4EF0:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4EFCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006C(c, 403u, depth + 1u); else { c.pc = 0x002B3190u; return; } if (c.pc != 0x002B4EFCu) [[unlikely]] return; }
L_002B4EFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B4F90; } }
    c.budget -= 1;
L_002B4F08:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 20u)));
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 82u)));
    set32(c.r[7], c.r[3].w[0] + c.r[10].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 116u)));
    set32(c.r[3], c.r[4].w[0] << (c.r[6].w[0] & 31u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B4F60; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[4].d[0];  if (t) { goto L_002B4F48; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 73u)));
    set32(c.r[3], 0u + 52u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002B4F90; } }
L_002B4F48:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4F54u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006C(c, 403u, depth + 1u); else { c.pc = 0x002B3190u; return; } if (c.pc != 0x002B4F54u) [[unlikely]] return; }
L_002B4F54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B4F90; } }
    c.budget -= 1;
L_002B4F60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 117u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002B4F80; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 73u)));
    set32(c.r[3], 0u + 52u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002B4F90; } }
    c.budget -= 1;
L_002B4F80:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4F8Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006C(c, 403u, depth + 1u); else { c.pc = 0x002B3190u; return; } if (c.pc != 0x002B4F8Cu) [[unlikely]] return; }
L_002B4F8C:
    c.budget -= 1;
L_002B4F90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B4FA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B4FC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4FC0u);  if (depth < kMaxDepth) unit_006D(c, 164u, depth + 1u); else { c.pc = 0x002B5540u; return; } if (c.pc != 0x002B4FC0u) [[unlikely]] return; }
L_002B4FC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B4FD0; } }
L_002B4FC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4FD0u);  if (depth < kMaxDepth) unit_006D(c, 67u, depth + 1u); else { c.pc = 0x002B4FE0u; return; } if (c.pc != 0x002B4FD0u) [[unlikely]] return; }
L_002B4FD0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B4FE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 39u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B5008; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5000u);  if (depth < kMaxDepth) unit_006D(c, 104u, depth + 1u); else { c.pc = 0x002B51A0u; return; } if (c.pc != 0x002B5000u) [[unlikely]] return; }
L_002B5000:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B5190; } }
L_002B5008:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 77u)));
    set32(c.r[2], 0u + 107u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B5020; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5020u);  if (depth < kMaxDepth) unit_006D(c, 339u, depth + 1u); else { c.pc = 0x002B7FE0u; return; } if (c.pc != 0x002B5020u) [[unlikely]] return; }
L_002B5020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5028u);  if (depth < kMaxDepth) unit_006B(c, 17u, depth + 1u); else { c.pc = 0x002AC350u; return; } if (c.pc != 0x002B5028u) [[unlikely]] return; }
L_002B5028:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5030u);  if (depth < kMaxDepth) unit_006A(c, 139u, depth + 1u); else { c.pc = 0x002AA020u; return; } if (c.pc != 0x002B5030u) [[unlikely]] return; }
L_002B5030:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5038u);  if (depth < kMaxDepth) unit_003A(c, 121u, depth + 1u); else { c.pc = 0x001EAB30u; return; } if (c.pc != 0x002B5038u) [[unlikely]] return; }
L_002B5038:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5040u);  if (depth < kMaxDepth) unit_004E(c, 70u, depth + 1u); else { c.pc = 0x00238B60u; return; } if (c.pc != 0x002B5040u) [[unlikely]] return; }
L_002B5040:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B5060; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B505Cu);  if (depth < kMaxDepth) unit_000E(c, 23u, depth + 1u); else { c.pc = 0x00138780u; return; } if (c.pc != 0x002B505Cu) [[unlikely]] return; }
L_002B505C:
    c.budget -= 1;
L_002B5060:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5068u);  if (depth < kMaxDepth) unit_0026(c, 271u, depth + 1u); else { c.pc = 0x0019BFC0u; return; } if (c.pc != 0x002B5068u) [[unlikely]] return; }
L_002B5068:
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 22u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[2].d[0] << 56;  if (t) { goto L_002B5098; } }
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B5108; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B5108; } }
L_002B5098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B50A0u);  if (depth < kMaxDepth) unit_0074(c, 360u, depth + 1u); else { c.pc = 0x002D3C20u; return; } if (c.pc != 0x002B50A0u) [[unlikely]] return; }
L_002B50A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B50A8u); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x002B50A8u) [[unlikely]] return; }
L_002B50A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B50B0u);  if (depth < kMaxDepth) unit_0032(c, 50u, depth + 1u); else { c.pc = 0x001C8B40u; return; } if (c.pc != 0x002B50B0u) [[unlikely]] return; }
L_002B50B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B50B8u);  if (depth < kMaxDepth) unit_004F(c, 83u, depth + 1u); else { c.pc = 0x0023D6E0u; return; } if (c.pc != 0x002B50B8u) [[unlikely]] return; }
L_002B50B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B50C0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x002B50C0u) [[unlikely]] return; }
L_002B50C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B50C8u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x002B50C8u) [[unlikely]] return; }
L_002B50C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B50D0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x002B50D0u) [[unlikely]] return; }
L_002B50D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B50D8u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x002B50D8u) [[unlikely]] return; }
L_002B50D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B50E0u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x002B50E0u) [[unlikely]] return; }
L_002B50E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B50E8u);  if (depth < kMaxDepth) unit_000E(c, 223u, depth + 1u); else { c.pc = 0x0013ABD0u; return; } if (c.pc != 0x002B50E8u) [[unlikely]] return; }
L_002B50E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B50F0u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x002B50F0u) [[unlikely]] return; }
L_002B50F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B50F8u);  if (depth < kMaxDepth) unit_004A(c, 360u, depth + 1u); else { c.pc = 0x0022B860u; return; } if (c.pc != 0x002B50F8u) [[unlikely]] return; }
L_002B50F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5100u);  if (depth < kMaxDepth) unit_004B(c, 49u, depth + 1u); else { c.pc = 0x0022C9B0u; return; } if (c.pc != 0x002B5100u) [[unlikely]] return; }
L_002B5100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5108u);  if (depth < kMaxDepth) unit_0075(c, 3u, depth + 1u); else { c.pc = 0x002D4080u; return; } if (c.pc != 0x002B5108u) [[unlikely]] return; }
L_002B5108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5110u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x002B5110u) [[unlikely]] return; }
L_002B5110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5118u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x002B5118u) [[unlikely]] return; }
L_002B5118:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 107u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 77u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B5138; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5134u);  if (depth < kMaxDepth) unit_006E(c, 3u, depth + 1u); else { c.pc = 0x002B8120u; return; } if (c.pc != 0x002B5134u) [[unlikely]] return; }
L_002B5134:
    c.budget -= 1;
L_002B5138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5140u);  if (depth < kMaxDepth) unit_006B(c, 20u, depth + 1u); else { c.pc = 0x002AC480u; return; } if (c.pc != 0x002B5140u) [[unlikely]] return; }
L_002B5140:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5148u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x002B5148u) [[unlikely]] return; }
L_002B5148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5150u); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x002B5150u) [[unlikely]] return; }
L_002B5150:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5158u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x002B5158u) [[unlikely]] return; }
L_002B5158:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5160u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x002B5160u) [[unlikely]] return; }
L_002B5160:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5168u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x002B5168u) [[unlikely]] return; }
L_002B5168:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5170u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x002B5170u) [[unlikely]] return; }
L_002B5170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5178u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x002B5178u) [[unlikely]] return; }
L_002B5178:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5180u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x002B5180u) [[unlikely]] return; }
L_002B5180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5188u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x002B5188u) [[unlikely]] return; }
L_002B5188:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5190u);  if (depth < kMaxDepth) unit_000B(c, 220u, depth + 1u); else { c.pc = 0x0012FAB0u; return; } if (c.pc != 0x002B5190u) [[unlikely]] return; }
L_002B5190:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B51A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B51B0u);  if (depth < kMaxDepth) unit_006B(c, 17u, depth + 1u); else { c.pc = 0x002AC350u; return; } if (c.pc != 0x002B51B0u) [[unlikely]] return; }
L_002B51B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B51B8u);  if (depth < kMaxDepth) unit_006A(c, 139u, depth + 1u); else { c.pc = 0x002AA020u; return; } if (c.pc != 0x002B51B8u) [[unlikely]] return; }
L_002B51B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B51C0u);  if (depth < kMaxDepth) unit_003A(c, 121u, depth + 1u); else { c.pc = 0x001EAB30u; return; } if (c.pc != 0x002B51C0u) [[unlikely]] return; }
L_002B51C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B51C8u);  if (depth < kMaxDepth) unit_004E(c, 70u, depth + 1u); else { c.pc = 0x00238B60u; return; } if (c.pc != 0x002B51C8u) [[unlikely]] return; }
L_002B51C8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B51E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B51E4u);  if (depth < kMaxDepth) unit_000E(c, 23u, depth + 1u); else { c.pc = 0x00138780u; return; } if (c.pc != 0x002B51E4u) [[unlikely]] return; }
L_002B51E4:
    c.budget -= 1;
L_002B51E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B51F0u);  if (depth < kMaxDepth) unit_0026(c, 271u, depth + 1u); else { c.pc = 0x0019BFC0u; return; } if (c.pc != 0x002B51F0u) [[unlikely]] return; }
L_002B51F0:
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 22u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[2].d[0] << 56;  if (t) { goto L_002B5220; } }
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B52A0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B52A0; } }
L_002B5220:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5228u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007A(c, 209u, depth + 1u); else { c.pc = 0x002EA680u; return; } if (c.pc != 0x002B5228u) [[unlikely]] return; }
L_002B5228:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B52A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5238u);  if (depth < kMaxDepth) unit_0074(c, 360u, depth + 1u); else { c.pc = 0x002D3C20u; return; } if (c.pc != 0x002B5238u) [[unlikely]] return; }
L_002B5238:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5240u); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x002B5240u) [[unlikely]] return; }
L_002B5240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5248u);  if (depth < kMaxDepth) unit_0032(c, 50u, depth + 1u); else { c.pc = 0x001C8B40u; return; } if (c.pc != 0x002B5248u) [[unlikely]] return; }
L_002B5248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5250u);  if (depth < kMaxDepth) unit_004F(c, 83u, depth + 1u); else { c.pc = 0x0023D6E0u; return; } if (c.pc != 0x002B5250u) [[unlikely]] return; }
L_002B5250:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5258u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x002B5258u) [[unlikely]] return; }
L_002B5258:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5260u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x002B5260u) [[unlikely]] return; }
L_002B5260:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5268u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x002B5268u) [[unlikely]] return; }
L_002B5268:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5270u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x002B5270u) [[unlikely]] return; }
L_002B5270:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5278u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x002B5278u) [[unlikely]] return; }
L_002B5278:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5280u);  if (depth < kMaxDepth) unit_000E(c, 223u, depth + 1u); else { c.pc = 0x0013ABD0u; return; } if (c.pc != 0x002B5280u) [[unlikely]] return; }
L_002B5280:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5288u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x002B5288u) [[unlikely]] return; }
L_002B5288:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5290u);  if (depth < kMaxDepth) unit_004A(c, 360u, depth + 1u); else { c.pc = 0x0022B860u; return; } if (c.pc != 0x002B5290u) [[unlikely]] return; }
L_002B5290:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5298u);  if (depth < kMaxDepth) unit_004B(c, 49u, depth + 1u); else { c.pc = 0x0022C9B0u; return; } if (c.pc != 0x002B5298u) [[unlikely]] return; }
L_002B5298:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B52A0u);  if (depth < kMaxDepth) unit_0075(c, 3u, depth + 1u); else { c.pc = 0x002D4080u; return; } if (c.pc != 0x002B52A0u) [[unlikely]] return; }
L_002B52A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B52A8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_007A(c, 209u, depth + 1u); else { c.pc = 0x002EA680u; return; } if (c.pc != 0x002B52A8u) [[unlikely]] return; }
L_002B52A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002B52C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B52B8u);  if (depth < kMaxDepth) unit_0074(c, 332u, depth + 1u); else { c.pc = 0x002D3750u; return; } if (c.pc != 0x002B52B8u) [[unlikely]] return; }
L_002B52B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B52C0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0074(c, 332u, depth + 1u); else { c.pc = 0x002D3750u; return; } if (c.pc != 0x002B52C0u) [[unlikely]] return; }
L_002B52C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B52C8u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x002B52C8u) [[unlikely]] return; }
L_002B52C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B52D0u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x002B52D0u) [[unlikely]] return; }
L_002B52D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B52D8u);  if (depth < kMaxDepth) unit_006B(c, 20u, depth + 1u); else { c.pc = 0x002AC480u; return; } if (c.pc != 0x002B52D8u) [[unlikely]] return; }
L_002B52D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B52E0u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x002B52E0u) [[unlikely]] return; }
L_002B52E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B52E8u); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x002B52E8u) [[unlikely]] return; }
L_002B52E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B52F0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x002B52F0u) [[unlikely]] return; }
L_002B52F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B52F8u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x002B52F8u) [[unlikely]] return; }
L_002B52F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5300u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x002B5300u) [[unlikely]] return; }
L_002B5300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5308u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x002B5308u) [[unlikely]] return; }
L_002B5308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5310u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x002B5310u) [[unlikely]] return; }
L_002B5310:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5318u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x002B5318u) [[unlikely]] return; }
L_002B5318:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5320u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x002B5320u) [[unlikely]] return; }
L_002B5320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5328u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007A(c, 209u, depth + 1u); else { c.pc = 0x002EA680u; return; } if (c.pc != 0x002B5328u) [[unlikely]] return; }
L_002B5328:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B5338; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5338u);  if (depth < kMaxDepth) unit_000B(c, 220u, depth + 1u); else { c.pc = 0x0012FAB0u; return; } if (c.pc != 0x002B5338u) [[unlikely]] return; }
L_002B5338:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B5350:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5360u);  if (depth < kMaxDepth) unit_0045(c, 88u, depth + 1u); else { c.pc = 0x00214D60u; return; } if (c.pc != 0x002B5360u) [[unlikely]] return; }
L_002B5360:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B536Cu); set32(c.r[4], c.r[4].w[0] - 9792u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x002B536Cu) [[unlikely]] return; }
L_002B536C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5374u);  if (depth < kMaxDepth) unit_0046(c, 204u, depth + 1u); else { c.pc = 0x0021B570u; return; } if (c.pc != 0x002B5374u) [[unlikely]] return; }
L_002B5374:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B537Cu);  if (depth < kMaxDepth) unit_004F(c, 70u, depth + 1u); else { c.pc = 0x0023D240u; return; } if (c.pc != 0x002B537Cu) [[unlikely]] return; }
L_002B537C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5388u); set32(c.r[4], c.r[4].w[0] - 15136u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x002B5388u) [[unlikely]] return; }
L_002B5388:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5394u); set32(c.r[4], c.r[4].w[0] + 21472u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x002B5394u) [[unlikely]] return; }
L_002B5394:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B53A0u); set32(c.r[4], c.r[4].w[0] - 15024u);  if (depth < kMaxDepth) unit_0043(c, 416u, depth + 1u); else { c.pc = 0x0020FEF0u; return; } if (c.pc != 0x002B53A0u) [[unlikely]] return; }
L_002B53A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B53ACu); set32(c.r[4], c.r[4].w[0] - 14928u);  if (depth < kMaxDepth) unit_0043(c, 416u, depth + 1u); else { c.pc = 0x0020FEF0u; return; } if (c.pc != 0x002B53ACu) [[unlikely]] return; }
L_002B53AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B53B8u); set32(c.r[4], c.r[4].w[0] - 14912u);  if (depth < kMaxDepth) unit_0043(c, 416u, depth + 1u); else { c.pc = 0x0020FEF0u; return; } if (c.pc != 0x002B53B8u) [[unlikely]] return; }
L_002B53B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B53C4u); set32(c.r[4], c.r[4].w[0] - 928u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x002B53C4u) [[unlikely]] return; }
L_002B53C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B53D0u); set32(c.r[4], c.r[4].w[0] - 912u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x002B53D0u) [[unlikely]] return; }
L_002B53D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B53E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 41u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B5528; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 21u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_002B54F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5410u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002B5410u) [[unlikely]] return; }
L_002B5410:
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002B5440; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002B5440; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B5458; } }
    c.budget -= 1;
L_002B5440:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 186u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B5458; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002B54A0; } }
    c.budget -= 1;
L_002B5458:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FA60000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5474u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002B5474u) [[unlikely]] return; }
L_002B5474:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_002B54A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FA60000u);
    c.f[12] = c.r[3].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B54A0u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002B54A0u) [[unlikely]] return; }
L_002B54A0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);  if (t) { goto L_002B54D0; } }
    set32(c.r[5], 0u + 5u);
    set32(c.r[4], c.r[4].w[0] + 10160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B54C4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002B54C4u) [[unlikely]] return; }
L_002B54C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B5528; } }
    c.budget -= 1;
L_002B54D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[4], c.r[4].w[0] - 11104u);
    set32(c.r[5], 0u + 5u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B54E4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002B54E4u) [[unlikely]] return; }
L_002B54E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B5528; } }
    c.budget -= 1;
L_002B54F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B54F8u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002B54F8u) [[unlikely]] return; }
L_002B54F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FA60000u);
    c.f[12] = c.r[3].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5514u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002B5514u) [[unlikely]] return; }
L_002B5514:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[4], c.r[4].w[0] - 11104u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5528u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002B5528u) [[unlikely]] return; }
L_002B5528:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B5540:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 190u));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[6], c.r[5].w[0] + 190u);  if (t) { goto L_002B5A78; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B59E0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002B59D0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B5588; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B5A78; } }
L_002B5588:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 234u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B55A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002B5B08; } }
    c.budget -= 1;
L_002B55A0:
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[5], 0u + 120u);
    c.r[3].d[0] = 0ull + 0ull;
    st8((c.r[4].w[0] + 184u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 23788u)));
    c.r[4].d[0] = ld8((c.r[6].w[0] + 234u));
    st8((c.r[6].w[0] + 186u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[4].w[0] + 187u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[4].w[0] + 189u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[4].w[0] + 50u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 23788u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 235u));
    c.r[4].d[0] = ld8((c.r[6].w[0] + 234u));
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0] + 235u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[4].w[0] + 188u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[4], c.r[4].w[0] + 140u);
    c.budget -= 24;
L_002B5600:
    set32(c.r[7], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[5], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.r[6].d[0] = ld8((c.r[7].w[0] + 234u));
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002B5680; } }
    c.r[6].d[0] = ld8((c.r[7].w[0] + 188u));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 13u));
    set32(c.r[9], c.r[9].w[0] - 27856u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st8((c.r[7].w[0] + 188u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[7], ld32((c.r[28].w[0] - 23788u)));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 13u));
    c.r[6].d[0] = ld8((c.r[7].w[0] + 236u));
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st8((c.r[7].w[0] + 236u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 8u)));
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 14;
L_002B5650:
    c.r[6].d[0] = ld8((c.r[4].w[0] + 13u));
    set32(c.r[5], c.r[2].w[0] << (c.r[8].w[0] & 31u));
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002B5670; } }
    set32(c.r[5], ld32((c.r[9].w[0] + 1560u)));
    set32(c.r[5], c.r[5].w[0] + 200u);
    st32((c.r[9].w[0] + 1560u), c.r[5].w[0]);
    c.budget -= 3;
L_002B5670:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[5].d[0] = c.r[8].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B5650u | kUnwind; return; } goto L_002B5650; } }
L_002B5680:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[5].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B5600u | kUnwind; return; } goto L_002B5600; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5698u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 173u, depth + 1u); else { c.pc = 0x0023A570u; return; } if (c.pc != 0x002B5698u) [[unlikely]] return; }
L_002B5698:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B56A4u); set32(c.r[5], 0u + 150u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x002B56A4u) [[unlikely]] return; }
L_002B56A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B56ACu); set32(c.r[4], 0u + 78u);  if (depth < kMaxDepth) unit_004E(c, 44u, depth + 1u); else { c.pc = 0x00238490u; return; } if (c.pc != 0x002B56ACu) [[unlikely]] return; }
L_002B56AC:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B5738; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 122u)));
    st8((c.r[3].w[0] + 228u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[2].w[0] + 122u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 123u)));
    st8((c.r[3].w[0] + 229u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[2].w[0] + 123u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 124u)));
    st8((c.r[3].w[0] + 230u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[2].w[0] + 124u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 125u)));
    st8((c.r[3].w[0] + 231u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[2].w[0] + 125u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 126u)));
    st8((c.r[3].w[0] + 232u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[2].w[0] + 126u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 127u)));
    st8((c.r[3].w[0] + 233u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[2].w[0] + 127u), static_cast<std::uint8_t>(0u));
    c.budget -= 30;
L_002B5738:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[16], c.r[16].w[0] - 27856u);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_002B5748:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B5800; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B5800; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[5], 0u + 1u);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 515u));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 234u));
    set32(c.r[2], c.r[5].w[0] << (c.r[2].w[0] & 31u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002B57D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B578Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 226u, depth + 1u); else { c.pc = 0x00137390u; return; } if (c.pc != 0x002B578Cu) [[unlikely]] return; }
L_002B578C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B57A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B57A4u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));  if (depth < kMaxDepth) unit_007D(c, 248u, depth + 1u); else { c.pc = 0x002F7550u; return; } if (c.pc != 0x002B57A4u) [[unlikely]] return; }
L_002B57A4:
    c.budget -= 1;
L_002B57A8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[2].d[0] | 65370ull;
    set32(c.r[7], 0u + 2u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B57C4u); set32(c.r[8], 0u + 30u);  if (depth < kMaxDepth) unit_00C0(c, 299u, depth + 1u); else { c.pc = 0x004031D0u; return; } if (c.pc != 0x002B57C4u) [[unlikely]] return; }
L_002B57C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B57F8; } }
    c.budget -= 1;
L_002B57D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B57D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 226u, depth + 1u); else { c.pc = 0x00137390u; return; } if (c.pc != 0x002B57D8u) [[unlikely]] return; }
L_002B57D8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xB0600000u);
    set32(c.r[5], 0u - 256u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[2].d[0] | 36954ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B57F4u); set32(c.r[8], 0u + 30u);  if (depth < kMaxDepth) unit_00C0(c, 299u, depth + 1u); else { c.pc = 0x004031D0u; return; } if (c.pc != 0x002B57F4u) [[unlikely]] return; }
L_002B57F4:
    c.budget -= 1;
L_002B57F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5800u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));  if (depth < kMaxDepth) unit_00C0(c, 295u, depth + 1u); else { c.pc = 0x00403150u; return; } if (c.pc != 0x002B5800u) [[unlikely]] return; }
L_002B5800:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B5748u | kUnwind; return; } goto L_002B5748; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 322u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B5930; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 100u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B5930; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 102u)));
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 186u));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 116u)));
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);  if (t) { goto L_002B5878; } }
    set32(c.r[4], 0u + 4u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 2u);
    c.r[6].d[0] = c.r[2].d[0] | 65370ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B586Cu); set32(c.r[8], 0u + 30u);  if (depth < kMaxDepth) unit_00C0(c, 299u, depth + 1u); else { c.pc = 0x004031D0u; return; } if (c.pc != 0x002B586Cu) [[unlikely]] return; }
L_002B586C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B5898; } }
    c.budget -= 1;
L_002B5878:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xB0600000u);
    set32(c.r[4], 0u + 4u);
    set32(c.r[5], 0u - 256u);
    c.r[6].d[0] = c.r[2].d[0] | 36954ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5894u); set32(c.r[8], 0u + 30u);  if (depth < kMaxDepth) unit_00C0(c, 299u, depth + 1u); else { c.pc = 0x004031D0u; return; } if (c.pc != 0x002B5894u) [[unlikely]] return; }
L_002B5894:
    c.budget -= 1;
L_002B5898:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B58A0u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_00C0(c, 295u, depth + 1u); else { c.pc = 0x00403150u; return; } if (c.pc != 0x002B58A0u) [[unlikely]] return; }
L_002B58A0:
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 41u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B58C0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 42u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B5930; } }
    c.budget -= 1;
L_002B58C0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 103u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 186u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 116u)));
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);  if (t) { goto L_002B5908; } }
    set32(c.r[4], 0u + 9u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 2u);
    c.r[6].d[0] = c.r[2].d[0] | 65370ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5900u); set32(c.r[8], 0u + 30u);  if (depth < kMaxDepth) unit_00C0(c, 299u, depth + 1u); else { c.pc = 0x004031D0u; return; } if (c.pc != 0x002B5900u) [[unlikely]] return; }
L_002B5900:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B5928; } }
L_002B5908:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xB0600000u);
    set32(c.r[4], 0u + 9u);
    set32(c.r[5], 0u - 256u);
    c.r[6].d[0] = c.r[2].d[0] | 36954ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5924u); set32(c.r[8], 0u + 30u);  if (depth < kMaxDepth) unit_00C0(c, 299u, depth + 1u); else { c.pc = 0x004031D0u; return; } if (c.pc != 0x002B5924u) [[unlikely]] return; }
L_002B5924:
    c.budget -= 1;
L_002B5928:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5930u); set32(c.r[4], 0u + 9u);  if (depth < kMaxDepth) unit_00C0(c, 295u, depth + 1u); else { c.pc = 0x00403150u; return; } if (c.pc != 0x002B5930u) [[unlikely]] return; }
L_002B5930:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B5968; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 82u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 191u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B595Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 211u, depth + 1u); else { c.pc = 0x002B5C30u; return; } if (c.pc != 0x002B595Cu) [[unlikely]] return; }
L_002B595C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B59B8; } }
    c.budget -= 1;
L_002B5968:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 41u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B5988; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 42u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B59A0; } }
    c.budget -= 1;
L_002B5988:
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5998u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 211u, depth + 1u); else { c.pc = 0x002B5C30u; return; } if (c.pc != 0x002B5998u) [[unlikely]] return; }
L_002B5998:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B59B8; } }
L_002B59A0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 82u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 191u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B59B8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 211u, depth + 1u); else { c.pc = 0x002B5C30u; return; } if (c.pc != 0x002B59B8u) [[unlikely]] return; }
L_002B59B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B59C0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 54u, depth + 1u); else { c.pc = 0x002387E0u; return; } if (c.pc != 0x002B59C0u) [[unlikely]] return; }
L_002B59C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B59C8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 54u, depth + 1u); else { c.pc = 0x002387E0u; return; } if (c.pc != 0x002B59C8u) [[unlikely]] return; }
L_002B59C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B5A78; } }
L_002B59D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B59D8u); st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_006D(c, 242u, depth + 1u); else { c.pc = 0x002B62F0u; return; } if (c.pc != 0x002B59D8u) [[unlikely]] return; }
L_002B59D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B5A78; } }
L_002B59E0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 41u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B5A00; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 42u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B5A38; } }
    c.budget -= 1;
L_002B5A00:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 189u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 172u)));
    c.r[1].d[0] = c.r[4].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002B5A30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5A28u);  if (depth < kMaxDepth) unit_004E(c, 55u, depth + 1u); else { c.pc = 0x00238800u; return; } if (c.pc != 0x002B5A28u) [[unlikely]] return; }
L_002B5A28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B5A40; } }
L_002B5A30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002B5A40; } }
L_002B5A38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5A40u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 55u, depth + 1u); else { c.pc = 0x00238800u; return; } if (c.pc != 0x002B5A40u) [[unlikely]] return; }
L_002B5A40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B5A78; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 189u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002B5A70; } }
    st8((c.r[4].w[0] + 190u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 189u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002B5A78; } }
    c.budget -= 1;
L_002B5A70:
    set32(c.r[2], 0u + 3u);
    st8((c.r[4].w[0] + 190u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002B5A78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5A80u);  if (depth < kMaxDepth) unit_00C0(c, 306u, depth + 1u); else { c.pc = 0x004032E0u; return; } if (c.pc != 0x002B5A80u) [[unlikely]] return; }
L_002B5A80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5A88u);  if (depth < kMaxDepth) unit_006D(c, 206u, depth + 1u); else { c.pc = 0x002B5B20u; return; } if (c.pc != 0x002B5A88u) [[unlikely]] return; }
L_002B5A88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B5A98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002B5B08; } }
L_002B5A98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5AA0u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x002B5AA0u) [[unlikely]] return; }
L_002B5AA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5AA8u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x002B5AA8u) [[unlikely]] return; }
L_002B5AA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5AB0u);  if (depth < kMaxDepth) unit_006B(c, 20u, depth + 1u); else { c.pc = 0x002AC480u; return; } if (c.pc != 0x002B5AB0u) [[unlikely]] return; }
L_002B5AB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5AB8u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x002B5AB8u) [[unlikely]] return; }
L_002B5AB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5AC0u); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x002B5AC0u) [[unlikely]] return; }
L_002B5AC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5AC8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x002B5AC8u) [[unlikely]] return; }
L_002B5AC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5AD0u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x002B5AD0u) [[unlikely]] return; }
L_002B5AD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5AD8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x002B5AD8u) [[unlikely]] return; }
L_002B5AD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5AE0u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x002B5AE0u) [[unlikely]] return; }
L_002B5AE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5AE8u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x002B5AE8u) [[unlikely]] return; }
L_002B5AE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5AF0u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x002B5AF0u) [[unlikely]] return; }
L_002B5AF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5AF8u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x002B5AF8u) [[unlikely]] return; }
L_002B5AF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5B00u);  if (depth < kMaxDepth) unit_000B(c, 220u, depth + 1u); else { c.pc = 0x0012FAB0u; return; } if (c.pc != 0x002B5B00u) [[unlikely]] return; }
L_002B5B00:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_002B5B08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B5B20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5B30u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007A(c, 209u, depth + 1u); else { c.pc = 0x002EA680u; return; } if (c.pc != 0x002B5B30u) [[unlikely]] return; }
L_002B5B30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B5B58; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], c.r[2].w[0] + 187u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 187u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B5B58; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002B5B58:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 187u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B5C10; } }
    st8((c.r[3].w[0] + 184u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[2].w[0] + 186u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5B80u); st8((c.r[2].w[0] + 190u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00C0(c, 297u, depth + 1u); else { c.pc = 0x00403180u; return; } if (c.pc != 0x002B5B80u) [[unlikely]] return; }
L_002B5B80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5B88u); set32(c.r[4], 0u + 117u);  if (depth < kMaxDepth) unit_004E(c, 44u, depth + 1u); else { c.pc = 0x00238490u; return; } if (c.pc != 0x002B5B88u) [[unlikely]] return; }
L_002B5B88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5B90u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 173u, depth + 1u); else { c.pc = 0x0023A570u; return; } if (c.pc != 0x002B5B90u) [[unlikely]] return; }
L_002B5B90:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 49u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B5BA8; } }
    st8((c.r[3].w[0] + 50u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002B5BA8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B5C08; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 228u)));
    st8((c.r[3].w[0] + 122u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 229u)));
    st8((c.r[3].w[0] + 123u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 230u)));
    st8((c.r[3].w[0] + 124u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 231u)));
    st8((c.r[3].w[0] + 125u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 232u)));
    st8((c.r[3].w[0] + 126u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 233u)));
    st8((c.r[3].w[0] + 127u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 19;
L_002B5C08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B5C18; } }
L_002B5C10:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002B5C18:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B5C30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[5], 0u - 1u);
    set32(c.r[6], 0u + 8u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5C64u); set32(c.r[4], c.r[2].w[0] + 172u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x002B5C64u) [[unlikely]] return; }
L_002B5C64:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[10], 0u - 1u);
    set32(c.r[7], 0u + 2u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[11].d[0] = c.r[10].d[0] + 0ull;
    c.r[4].d[0] = c.r[10].d[0] + 0ull;
    c.r[8].d[0] = c.r[10].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[7].d[0]; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002B5CD8; } }
    c.r[1].d[0] = c.r[18].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[9], c.r[18].w[0] << 4);  if (t) { goto L_002B5CB0; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[9], c.r[9].w[0] + c.r[18].w[0]);
    set32(c.r[7], c.r[7].w[0] - 27080u);
    set32(c.r[9], c.r[9].w[0] << 9);
    set32(c.r[7], c.r[7].w[0] + c.r[9].w[0]);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 6;
L_002B5CB0:
    c.r[1].d[0] = c.r[17].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[9], c.r[17].w[0] << 4);  if (t) { goto L_002B5CE0; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[9], c.r[9].w[0] + c.r[17].w[0]);
    set32(c.r[7], c.r[7].w[0] - 27080u);
    set32(c.r[9], c.r[9].w[0] << 9);
    set32(c.r[7], c.r[7].w[0] + c.r[9].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));  if (t) { goto L_002B5CE0; } }
L_002B5CD8:
    c.r[11].d[0] = c.r[18].d[0] + 0ull;
    c.r[10].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_002B5CE0:
    c.r[1].d[0] = c.r[18].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = c.r[11].sd[0] < 0ll ? 1ull : 0ull;  if (t) { goto L_002B5D10; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002B5D10; } }
    set32(c.r[7], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[7], c.r[11].w[0] + c.r[7].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 68u)));
    c.budget -= 5;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002B5D10; } }
    set32(c.r[6], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] << (c.r[18].w[0] & 31u));
    c.budget -= 2;
L_002B5D10:
    c.r[1].d[0] = c.r[17].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = c.r[10].sd[0] < 0ll ? 1ull : 0ull;  if (t) { goto L_002B5D40; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002B5D40; } }
    set32(c.r[7], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[7], c.r[10].w[0] + c.r[7].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 68u)));
    c.budget -= 5;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002B5D40; } }
    set32(c.r[5], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] << (c.r[17].w[0] & 31u));
    c.budget -= 2;
L_002B5D40:
    c.r[1].d[0] = c.r[18].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[10].d[0] = c.r[6].d[0] | c.r[5].d[0];  if (t) { goto L_002B5D68; } }
    set32(c.r[8], c.r[18].w[0] << 4);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[8], c.r[8].w[0] + c.r[18].w[0]);
    set32(c.r[7], c.r[7].w[0] - 19195u);
    set32(c.r[8], c.r[8].w[0] << 9);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 7;
L_002B5D68:
    c.r[1].d[0] = c.r[17].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[7], c.r[17].w[0] << 4);  if (t) { goto L_002B5D90; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[7], c.r[7].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19195u);
    set32(c.r[7], c.r[7].w[0] << 9);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 7;
L_002B5D90:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { goto L_002B5DF0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_002B5DE8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002B5DE8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[8].w[0] & 31u));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 186u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B5DE8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 11u);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 116u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5DE4u); set32(c.r[7], 0u + 5u);  if (depth < kMaxDepth) unit_006D(c, 259u, depth + 1u); else { c.pc = 0x002B66A0u; return; } if (c.pc != 0x002B5DE4u) [[unlikely]] return; }
L_002B5DE4:
    c.budget -= 1;
L_002B5DE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B62D0; } }
L_002B5DF0:
    set32(c.r[11], ld32((c.r[28].w[0] - 23788u)));
    c.r[9].d[0] = ld8((c.r[11].w[0] + 188u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[10].d[0];
    c.budget -= 5;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002B60A0; } }
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != c.r[6].d[0];  if (t) { goto L_002B5E30; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 8u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5E24u); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 259u, depth + 1u); else { c.pc = 0x002B66A0u; return; } if (c.pc != 0x002B5E24u) [[unlikely]] return; }
L_002B5E24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B62D0; } }
    c.budget -= 1;
L_002B5E30:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != c.r[5].d[0];  if (t) { goto L_002B5E58; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 9u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5E50u); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 259u, depth + 1u); else { c.pc = 0x002B66A0u; return; } if (c.pc != 0x002B5E50u) [[unlikely]] return; }
L_002B5E50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B62D0; } }
L_002B5E58:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[4].d[0];  if (t) { goto L_002B5F68; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[7], 0u + 1u);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 326u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[7].d[0]; set32(c.r[3], c.r[7].w[0] << (c.r[18].w[0] & 31u));  if (t) { goto L_002B5ED0; } }
    c.r[3].d[0] = c.r[9].d[0] & c.r[3].d[0];
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002B5EA0; } }
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 8u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5E98u); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 259u, depth + 1u); else { c.pc = 0x002B66A0u; return; } if (c.pc != 0x002B5E98u) [[unlikely]] return; }
L_002B5E98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B62D0; } }
L_002B5EA0:
    set32(c.r[3], c.r[7].w[0] << (c.r[17].w[0] & 31u));
    c.r[3].d[0] = c.r[9].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002B62D0; } }
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 9u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5EC4u); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 259u, depth + 1u); else { c.pc = 0x002B66A0u; return; } if (c.pc != 0x002B5EC4u) [[unlikely]] return; }
L_002B5EC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B62D0; } }
    c.budget -= 1;
L_002B5ED0:
    set32(c.r[5], c.r[11].w[0] + 154u);
    set32(c.r[3], c.r[8].w[0] << 4);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[18].d[0];  if (t) { goto L_002B5F20; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5EFCu); c.r[8].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 259u, depth + 1u); else { c.pc = 0x002B66A0u; return; } if (c.pc != 0x002B5EFCu) [[unlikely]] return; }
L_002B5EFC:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 9u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5F14u); c.r[7].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 259u, depth + 1u); else { c.pc = 0x002B66A0u; return; } if (c.pc != 0x002B5F14u) [[unlikely]] return; }
L_002B5F14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B62D0; } }
    c.budget -= 1;
L_002B5F20:
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[17].d[0];  if (t) { goto L_002B62D0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 9u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5F48u); c.r[8].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 259u, depth + 1u); else { c.pc = 0x002B66A0u; return; } if (c.pc != 0x002B5F48u) [[unlikely]] return; }
L_002B5F48:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5F60u); c.r[7].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 259u, depth + 1u); else { c.pc = 0x002B66A0u; return; } if (c.pc != 0x002B5F60u) [[unlikely]] return; }
L_002B5F60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B62D0; } }
L_002B5F68:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002B62D0; } }
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != c.r[7].d[0];  if (t) { goto L_002B5FB0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 8u);
    set32(c.r[7], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5F90u); c.r[8].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 259u, depth + 1u); else { c.pc = 0x002B66A0u; return; } if (c.pc != 0x002B5F90u) [[unlikely]] return; }
L_002B5F90:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    set32(c.r[6], 0u + 9u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5FA8u); set32(c.r[7], 0u + 3u);  if (depth < kMaxDepth) unit_006D(c, 259u, depth + 1u); else { c.pc = 0x002B66A0u; return; } if (c.pc != 0x002B5FA8u) [[unlikely]] return; }
L_002B5FA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B62D0; } }
L_002B5FB0:
    c.r[3].d[0] = c.r[9].d[0] & c.r[6].d[0];
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B6028; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 326u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002B5FF0; } }
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 8u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5FE8u); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 259u, depth + 1u); else { c.pc = 0x002B66A0u; return; } if (c.pc != 0x002B5FE8u) [[unlikely]] return; }
L_002B5FE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B62D0; } }
L_002B5FF0:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 8u);
    set32(c.r[7], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6008u); c.r[8].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 259u, depth + 1u); else { c.pc = 0x002B66A0u; return; } if (c.pc != 0x002B6008u) [[unlikely]] return; }
L_002B6008:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    set32(c.r[6], 0u + 9u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6020u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_006D(c, 259u, depth + 1u); else { c.pc = 0x002B66A0u; return; } if (c.pc != 0x002B6020u) [[unlikely]] return; }
L_002B6020:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B62D0; } }
L_002B6028:
    c.r[3].d[0] = c.r[9].d[0] & c.r[5].d[0];
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B62D0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 326u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002B6068; } }
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 9u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6060u); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 259u, depth + 1u); else { c.pc = 0x002B66A0u; return; } if (c.pc != 0x002B6060u) [[unlikely]] return; }
L_002B6060:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B62D0; } }
L_002B6068:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 9u);
    set32(c.r[7], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6080u); c.r[8].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 259u, depth + 1u); else { c.pc = 0x002B66A0u; return; } if (c.pc != 0x002B6080u) [[unlikely]] return; }
L_002B6080:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    set32(c.r[6], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6098u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_006D(c, 259u, depth + 1u); else { c.pc = 0x002B66A0u; return; } if (c.pc != 0x002B6098u) [[unlikely]] return; }
L_002B6098:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B62D0; } }
L_002B60A0:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != c.r[6].d[0];  if (t) { goto L_002B6108; } }
    c.r[5].d[0] = ld8((c.r[11].w[0] + 186u));
    set32(c.r[4], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] << (c.r[8].w[0] & 31u));
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B60E8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_002B62D0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002B62D0; } }
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 11u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B60E0u); set32(c.r[7], 0u + 5u);  if (depth < kMaxDepth) unit_006D(c, 259u, depth + 1u); else { c.pc = 0x002B66A0u; return; } if (c.pc != 0x002B60E0u) [[unlikely]] return; }
L_002B60E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B62D0; } }
L_002B60E8:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 8u);
    set32(c.r[7], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6100u); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 259u, depth + 1u); else { c.pc = 0x002B66A0u; return; } if (c.pc != 0x002B6100u) [[unlikely]] return; }
L_002B6100:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B62D0; } }
L_002B6108:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != c.r[5].d[0];  if (t) { goto L_002B6178; } }
    c.r[6].d[0] = ld8((c.r[11].w[0] + 186u));
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[5].w[0] << (c.r[4].w[0] & 31u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B6150; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_002B62D0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002B62D0; } }
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 11u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6148u); set32(c.r[7], 0u + 5u);  if (depth < kMaxDepth) unit_006D(c, 259u, depth + 1u); else { c.pc = 0x002B66A0u; return; } if (c.pc != 0x002B6148u) [[unlikely]] return; }
L_002B6148:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B62D0; } }
L_002B6150:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002B62D0; } }
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 9u);
    set32(c.r[7], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B616Cu); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 259u, depth + 1u); else { c.pc = 0x002B66A0u; return; } if (c.pc != 0x002B616Cu) [[unlikely]] return; }
L_002B616C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B62D0; } }
    c.budget -= 1;
L_002B6178:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[4].d[0];  if (t) { goto L_002B6220; } }
    c.r[5].d[0] = ld8((c.r[11].w[0] + 186u));
    set32(c.r[4], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] << (c.r[8].w[0] & 31u));
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B61C0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_002B62D0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002B62D0; } }
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 11u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B61B8u); set32(c.r[7], 0u + 5u);  if (depth < kMaxDepth) unit_006D(c, 259u, depth + 1u); else { c.pc = 0x002B66A0u; return; } if (c.pc != 0x002B61B8u) [[unlikely]] return; }
L_002B61B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B62D0; } }
L_002B61C0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002B6200; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 8u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B61DCu); c.r[8].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 259u, depth + 1u); else { c.pc = 0x002B66A0u; return; } if (c.pc != 0x002B61DCu) [[unlikely]] return; }
L_002B61DC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    set32(c.r[6], 0u + 9u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B61F4u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_006D(c, 259u, depth + 1u); else { c.pc = 0x002B66A0u; return; } if (c.pc != 0x002B61F4u) [[unlikely]] return; }
L_002B61F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B62D0; } }
    c.budget -= 1;
L_002B6200:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 8u);
    set32(c.r[7], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6218u); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 259u, depth + 1u); else { c.pc = 0x002B66A0u; return; } if (c.pc != 0x002B6218u) [[unlikely]] return; }
L_002B6218:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B62D0; } }
L_002B6220:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002B62D0; } }
    c.r[6].d[0] = ld8((c.r[11].w[0] + 186u));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_002B6270; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 8u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6250u); c.r[8].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 259u, depth + 1u); else { c.pc = 0x002B66A0u; return; } if (c.pc != 0x002B6250u) [[unlikely]] return; }
L_002B6250:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    set32(c.r[6], 0u + 9u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6268u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_006D(c, 259u, depth + 1u); else { c.pc = 0x002B66A0u; return; } if (c.pc != 0x002B6268u) [[unlikely]] return; }
L_002B6268:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B62D0; } }
L_002B6270:
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[5].w[0] << (c.r[8].w[0] & 31u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B62A8; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 9u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B629Cu); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_006D(c, 259u, depth + 1u); else { c.pc = 0x002B66A0u; return; } if (c.pc != 0x002B629Cu) [[unlikely]] return; }
L_002B629C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B62D0; } }
    c.budget -= 1;
L_002B62A8:
    set32(c.r[3], c.r[5].w[0] << (c.r[4].w[0] & 31u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B62D0; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B62D0u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_006D(c, 259u, depth + 1u); else { c.pc = 0x002B66A0u; return; } if (c.pc != 0x002B62D0u) [[unlikely]] return; }
L_002B62D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002B62F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 5u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].d[0] = ld8((c.r[7].w[0] + 189u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] + 172u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 174u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002B6370; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    set32(c.r[4], c.r[4].w[0] - 27856u);
    set32(c.r[2], c.r[6].w[0] + c.r[7].w[0]);
    st8((c.r[2].w[0] + 84u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 326u)));
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 9);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 20u);
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6364u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);  if (depth < kMaxDepth) unit_004E(c, 174u, depth + 1u); else { c.pc = 0x0023A5C0u; return; } if (c.pc != 0x002B6364u) [[unlikely]] return; }
L_002B6364:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B6690; } }
    c.budget -= 1;
L_002B6370:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[1].d[0] = c.r[4].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002B6388; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B6690; } }
L_002B6388:
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] << 9);
    set32(c.r[2], c.r[2].w[0] - 27856u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 76u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 11;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_002B63F8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 886u)));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 3;
L_002B63C0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_002B63E0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    set32(c.r[4], c.r[8].w[0] + c.r[7].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 80u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_002B6408; } }
    c.budget -= 1;
L_002B63E0:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[4].d[0] = c.r[8].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B63C0u | kUnwind; return; } goto L_002B63C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B6408; } }
L_002B63F8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8656u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    st8((c.r[4].w[0] + 80u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 4;
L_002B6408:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[4].d[0]; set32(c.r[5], 0u + 2u);  if (t) { goto L_002B6678; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[4], 0u + 3u);  if (t) { goto L_002B6660; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_002B65E8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_002B64D0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_002B6440; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B6688; } }
L_002B6440:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    c.r[1].d[0] = c.r[5].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002B64D0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 41u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B6470; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 42u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B64A0; } }
    c.budget -= 1;
L_002B6470:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 886u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8656u)));
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] << 9);
    set32(c.r[2], c.r[2].w[0] - 26970u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6498u); c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  if (depth < kMaxDepth) unit_004E(c, 222u, depth + 1u); else { c.pc = 0x0023BB00u; return; } if (c.pc != 0x002B6498u) [[unlikely]] return; }
L_002B6498:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B6688; } }
L_002B64A0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 886u)));
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 9);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] - 26970u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B64C4u); c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  if (depth < kMaxDepth) unit_004E(c, 214u, depth + 1u); else { c.pc = 0x0023B8B0u; return; } if (c.pc != 0x002B64C4u) [[unlikely]] return; }
L_002B64C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B6688; } }
    c.budget -= 1;
L_002B64D0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8661u)));
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[5], c.r[4].w[0] + c.r[6].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 326u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002B65A8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002B6548; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B6508; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B6688; } }
    c.budget -= 1;
L_002B6508:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 12u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002B6530; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 886u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6524u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 214u, depth + 1u); else { c.pc = 0x0023B8B0u; return; } if (c.pc != 0x002B6524u) [[unlikely]] return; }
L_002B6524:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B6688; } }
    c.budget -= 1;
L_002B6530:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B653Cu); set32(c.r[5], 0u + 23u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x002B653Cu) [[unlikely]] return; }
L_002B653C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B6688; } }
    c.budget -= 1;
L_002B6548:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8656u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 82u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002B6570; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6564u); set32(c.r[5], 0u + 25u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x002B6564u) [[unlikely]] return; }
L_002B6564:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B6688; } }
    c.budget -= 1;
L_002B6570:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 41u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B6588; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 42u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B6598; } }
L_002B6588:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6590u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 886u)));  if (depth < kMaxDepth) unit_004E(c, 225u, depth + 1u); else { c.pc = 0x0023BC40u; return; } if (c.pc != 0x002B6590u) [[unlikely]] return; }
L_002B6590:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B6688; } }
L_002B6598:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B65A0u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 886u)));  if (depth < kMaxDepth) unit_004E(c, 218u, depth + 1u); else { c.pc = 0x0023BA10u; return; } if (c.pc != 0x002B65A0u) [[unlikely]] return; }
L_002B65A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B6688; } }
L_002B65A8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 12u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002B65D0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 886u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B65C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 214u, depth + 1u); else { c.pc = 0x0023B8B0u; return; } if (c.pc != 0x002B65C4u) [[unlikely]] return; }
L_002B65C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B6688; } }
    c.budget -= 1;
L_002B65D0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B65DCu); set32(c.r[5], 0u + 26u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x002B65DCu) [[unlikely]] return; }
L_002B65DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B6688; } }
    c.budget -= 1;
L_002B65E8:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8661u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 326u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002B6648; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002B6630; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B6618; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B6688; } }
L_002B6618:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 886u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8656u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6628u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 222u, depth + 1u); else { c.pc = 0x0023BB00u; return; } if (c.pc != 0x002B6628u) [[unlikely]] return; }
L_002B6628:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B6688; } }
L_002B6630:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8656u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B663Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 886u)));  if (depth < kMaxDepth) unit_004E(c, 225u, depth + 1u); else { c.pc = 0x0023BC40u; return; } if (c.pc != 0x002B663Cu) [[unlikely]] return; }
L_002B663C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B6688; } }
    c.budget -= 1;
L_002B6648:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 886u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8656u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6658u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 222u, depth + 1u); else { c.pc = 0x0023BB00u; return; } if (c.pc != 0x002B6658u) [[unlikely]] return; }
L_002B6658:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B6688; } }
L_002B6660:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B666Cu); set32(c.r[5], 0u + 24u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x002B666Cu) [[unlikely]] return; }
L_002B666C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B6688; } }
    c.budget -= 1;
L_002B6678:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6684u); set32(c.r[5], 0u + 27u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x002B6684u) [[unlikely]] return; }
L_002B6684:
    c.budget -= 1;
L_002B6688:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_002B6690:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B66A0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0] + 172u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[3].w[0] + 173u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[3].w[0] + 174u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 175u), static_cast<std::uint8_t>(c.r[8].w[0]));  c.pc = t; return; }
L_002B66C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B66F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B66E8u);  if (depth < kMaxDepth) unit_0071(c, 45u, depth + 1u); else { c.pc = 0x002C4B10u; return; } if (c.pc != 0x002B66E8u) [[unlikely]] return; }
L_002B66E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B6870; } }
L_002B66F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B66F8u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x002B66F8u) [[unlikely]] return; }
L_002B66F8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 88u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B6728; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[6], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[6].d[0]; set32(c.r[2], 0u + 7u);  if (t) { goto L_002B6728; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B6770; } }
L_002B6728:
    set32(c.r[2], 0u + 19u);
    mmi::div(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.hi.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 12128u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6758u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 275u, depth + 1u); else { c.pc = 0x002B6920u; return; } if (c.pc != 0x002B6758u) [[unlikely]] return; }
L_002B6758:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6768u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 270u, depth + 1u); else { c.pc = 0x002B6880u; return; } if (c.pc != 0x002B6768u) [[unlikely]] return; }
L_002B6768:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B6808; } }
L_002B6770:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B67B0; } }
    set32(c.r[3], 0u + 14u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    mmi::div(c, 0, c.r[16].w[0], c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 12016u);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B67A8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 270u, depth + 1u); else { c.pc = 0x002B6880u; return; } if (c.pc != 0x002B67A8u) [[unlikely]] return; }
L_002B67A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B6808; } }
L_002B67B0:
    set32(c.r[2], 0u + 5u);
    mmi::div(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[3].w[0] - 12048u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 151u)));
    c.r[2].d[0] = c.r[2].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], ld32((c.r[3].w[0])));  if (t) { goto L_002B67E8; } }
    set32(c.r[4], 0u + 13u);
    c.budget -= 2;
L_002B67E8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B67F4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 275u, depth + 1u); else { c.pc = 0x002B6920u; return; } if (c.pc != 0x002B67F4u) [[unlikely]] return; }
L_002B67F4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6804u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 270u, depth + 1u); else { c.pc = 0x002B6880u; return; } if (c.pc != 0x002B6804u) [[unlikely]] return; }
L_002B6804:
    c.budget -= 1;
L_002B6808:
    set32(c.r[3], 0u + 5u);
    mmi::div(c, 0, c.r[16].w[0], c.r[3].w[0]);
    set32(c.r[8], ld32((c.r[28].w[0] - 23788u)));
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[6].d[0] = c.hi.d[0];
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 56u)));
    set32(c.r[4], 0u + 38u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 10;
L_002B6830:
    set32(c.r[3], c.r[5].w[0] << (c.r[9].w[0] & 31u));
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B6858; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002B6858; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_002B6858; } }
    set32(c.r[2], 0u + 31u);
    c.budget -= 1;
L_002B6858:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[3].d[0] = c.r[9].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B6830u | kUnwind; return; } goto L_002B6830; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6870u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 35u, depth + 1u); else { c.pc = 0x002382B0u; return; } if (c.pc != 0x002B6870u) [[unlikely]] return; }
L_002B6870:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B6880:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] - 13u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(26ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_002B6918; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 22112u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002B4000u < 16384u) { entry = entries_006D[(t - 0x002B4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002B68B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 29u);  if (t) { goto L_002B6918; } }
L_002B68B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 30u);  if (t) { goto L_002B6918; } }
L_002B68C0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_002B68F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    mmi::div(c, 0, c.r[5].w[0], c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 11920u);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0])));  if (t) { goto L_002B6918; } }
    c.budget -= 1;
L_002B68F0:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0; c.r[2].d[0] = c.r[5].d[0] & 3ull;  if (t) { goto L_002B6904; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[2].w[0] << 2);  if (t) { goto L_002B6908; } }
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 1;
L_002B6904:
    set32(c.r[3], c.r[2].w[0] << 2);
    c.budget -= 1;
L_002B6908:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 11920u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_002B6918:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_002B6920:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_002B6988; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], 0u + 13u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 150u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B6A10; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 151u)));
    set32(c.r[2], c.r[3].w[0] - 6u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 9u);  if (t) { goto L_002B6958; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B6A10; } }
L_002B6958:
    set32(c.r[2], 0u + 3u);
    mmi::div(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 11904u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0])));  if (t) { goto L_002B6A10; } }
    c.budget -= 1;
L_002B6988:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[9], ld32((c.r[28].w[0] - 23788u)));
    c.r[10].d[0] = 0ull + 0ull;
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 56u)));
    set32(c.r[3], 0u + 31u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
L_002B69A0:
    set32(c.r[2], c.r[7].w[0] << (c.r[10].w[0] & 31u));
    c.r[2].d[0] = c.r[8].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B6A00; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 68u)));
    set32(c.r[2], c.r[6].w[0] - 28u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002B69D0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_002B6A00; } }
    c.budget -= 1;
L_002B69D0:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0; c.r[2].d[0] = c.r[5].d[0] & 7ull;  if (t) { goto L_002B69E4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[2].w[0] << 2);  if (t) { goto L_002B69E8; } }
    set32(c.r[2], c.r[2].w[0] - 8u);
    c.budget -= 1;
L_002B69E4:
    set32(c.r[3], c.r[2].w[0] << 2);
    c.budget -= 1;
L_002B69E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 11888u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0])));  if (t) { goto L_002B6A10; } }
    c.budget -= 1;
L_002B6A00:
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[2].d[0] = c.r[10].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B69A0u | kUnwind; return; } goto L_002B69A0; } }
L_002B6A10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_002B6A20:
    c.r[5].d[0] = c.r[4].d[0] << 56;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 12152u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[3].w[0] - 12208u);
    c.budget -= 8;
L_002B6A40:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[8].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
L_002B6A58:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002B6A80; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], 0u + 1u);
    st8((c.r[3].w[0] + 150u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 151u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { goto L_002B6AA8; } }
    c.budget -= 1;
L_002B6A80:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B6A58u | kUnwind; return; } goto L_002B6A58; } }
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[2].d[0] = c.r[9].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B6A40u | kUnwind; return; } goto L_002B6A40; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002B6AA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B6AB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B6C48; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 156u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B6BD8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002B6B78; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B6AF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B6C78; } }
L_002B6AF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6B00u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x002B6B00u) [[unlikely]] return; }
L_002B6B00:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], 0u + 40u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].d[0] = c.hi.d[0];
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6B28u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  if (depth < kMaxDepth) unit_007C(c, 252u, depth + 1u); else { c.pc = 0x002F2300u; return; } if (c.pc != 0x002B6B28u) [[unlikely]] return; }
L_002B6B28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B6AF8u | kUnwind; return; } goto L_002B6AF8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6B3Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  if (depth < kMaxDepth) unit_004F(c, 68u, depth + 1u); else { c.pc = 0x0023D1E0u; return; } if (c.pc != 0x002B6B3Cu) [[unlikely]] return; }
L_002B6B3C:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B6AF8u | kUnwind; return; } goto L_002B6AF8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6B5Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  if (depth < kMaxDepth) unit_004F(c, 68u, depth + 1u); else { c.pc = 0x0023D1E0u; return; } if (c.pc != 0x002B6B5Cu) [[unlikely]] return; }
L_002B6B5C:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B6AF8u | kUnwind; return; } goto L_002B6AF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B6C78; } }
L_002B6B78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6B80u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x002B6B80u) [[unlikely]] return; }
L_002B6B80:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], 0u + 40u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].d[0] = c.hi.d[0];
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6BA8u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  if (depth < kMaxDepth) unit_007C(c, 252u, depth + 1u); else { c.pc = 0x002F2300u; return; } if (c.pc != 0x002B6BA8u) [[unlikely]] return; }
L_002B6BA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B6B78u | kUnwind; return; } goto L_002B6B78; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6BBCu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  if (depth < kMaxDepth) unit_004F(c, 68u, depth + 1u); else { c.pc = 0x0023D1E0u; return; } if (c.pc != 0x002B6BBCu) [[unlikely]] return; }
L_002B6BBC:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B6B78u | kUnwind; return; } goto L_002B6B78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B6C78; } }
L_002B6BD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6BE0u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x002B6BE0u) [[unlikely]] return; }
L_002B6BE0:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], 0u + 40u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].d[0] = c.hi.d[0];
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6C08u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  if (depth < kMaxDepth) unit_007C(c, 252u, depth + 1u); else { c.pc = 0x002F2300u; return; } if (c.pc != 0x002B6C08u) [[unlikely]] return; }
L_002B6C08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B6BD8u | kUnwind; return; } goto L_002B6BD8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B6C78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6C28u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));  if (depth < kMaxDepth) unit_004F(c, 68u, depth + 1u); else { c.pc = 0x0023D1E0u; return; } if (c.pc != 0x002B6C28u) [[unlikely]] return; }
L_002B6C28:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B6BD8u | kUnwind; return; } goto L_002B6BD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B6C78; } }
    c.budget -= 1;
L_002B6C48:
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 12208u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 150u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 151u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 12;
L_002B6C78:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6C84u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  if (depth < kMaxDepth) unit_004F(c, 68u, depth + 1u); else { c.pc = 0x0023D1E0u; return; } if (c.pc != 0x002B6C84u) [[unlikely]] return; }
L_002B6C84:
    c.r[5].d[0] = c.r[2].d[0] << 56;
    set32(c.r[3], 0u + 2u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_002B6CF0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_002B6CD0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002B6CB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B6D10; } }
L_002B6CB0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002B6D10; } }
    c.budget -= 1;
L_002B6CD0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002B6D10; } }
    c.budget -= 1;
L_002B6CF0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 8;
L_002B6D10:
    set32(c.r[6], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B6E90; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 88u)));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002B6DD0; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 5u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 150u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002B6DD0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[2], 0u - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[6].d[0] = 0ull + 0ull;
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[1].w[0] - 12188u)));
    c.budget -= 7;
L_002B6D60:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002B6D90; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 5u);
    st8((c.r[2].w[0] + 150u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 151u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002B6DA0; } }
    c.budget -= 1;
L_002B6D90:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 40ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B6D60u | kUnwind; return; } goto L_002B6D60; } }
L_002B6DA0:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 5u);  if (t) { goto L_002B6DC0; } }
    st8((c.r[4].w[0] + 150u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 151u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_002B6DC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6DC8u);  if (depth < kMaxDepth) unit_006D(c, 280u, depth + 1u); else { c.pc = 0x002B6AB0u; return; } if (c.pc != 0x002B6DC8u) [[unlikely]] return; }
L_002B6DC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B6E90; } }
L_002B6DD0:
    c.r[3].d[0] = c.r[7].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B6E90; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 5u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 150u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[7], c.r[5].w[0] + 150u);  if (t) { goto L_002B6E90; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 27u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B6E40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6E08u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));  if (depth < kMaxDepth) unit_006D(c, 277u, depth + 1u); else { c.pc = 0x002B6A20u; return; } if (c.pc != 0x002B6E08u) [[unlikely]] return; }
L_002B6E08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B6E30; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], 0u + 3u);
    st8((c.r[3].w[0] + 150u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    if (c.r[3].d[0] == 0) c.r[2].d[0] = 0ull;
    st8((c.r[4].w[0] + 151u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
L_002B6E30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6E38u);  if (depth < kMaxDepth) unit_006D(c, 280u, depth + 1u); else { c.pc = 0x002B6AB0u; return; } if (c.pc != 0x002B6E38u) [[unlikely]] return; }
L_002B6E38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B6E90; } }
L_002B6E40:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 82u)));
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 116u)));
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 144u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002B6E78; } }
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[4].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 146u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 151u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002B6E88; } }
L_002B6E78:
    set32(c.r[2], 0u + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 151u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_002B6E88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6E90u);  if (depth < kMaxDepth) unit_006D(c, 280u, depth + 1u); else { c.pc = 0x002B6AB0u; return; } if (c.pc != 0x002B6E90u) [[unlikely]] return; }
L_002B6E90:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 15u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 26u);  if (t) { goto L_002B6EB0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002B6EC0; } }
    c.budget -= 1;
L_002B6EB0:
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 89u)));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st8((c.r[4].w[0] + 89u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_002B6EC0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B6ED0:
    c.r[2].d[0] = c.r[4].d[0] << 56;
    c.r[3].d[0] = c.r[5].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[4], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 12208u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  c.pc = t; return; }
L_002B6F00:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[5], 0u + 2u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[3], 0u - 1u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[17], c.r[17].w[0] - 27856u);
    c.r[16].d[0] = 0ull + 0ull;
    st8((c.r[2].w[0] + 14u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 15u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[20].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 12u)));
    c.r[19].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 13u)));
    set32(c.r[4], c.r[5].w[0] - c.r[20].w[0]);
    st8((c.r[2].w[0] + 221u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 13u)));
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    st8((c.r[2].w[0] + 222u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 21u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 29u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 22u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 23u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 30u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 31u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 24u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 25u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 32u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 33u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 26u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 27u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 34u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 35u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 60;
L_002B6FF0:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[3].w[0] << (c.r[18].w[0] & 31u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 56u)));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B70B8; } }
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 8663u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 8687u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 116u)));
    st8((c.r[17].w[0] + 8661u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 8680u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 3u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 120u)));
    st8((c.r[17].w[0] + 8658u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8658u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 128u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7064u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 53u, depth + 1u); else { c.pc = 0x001E9250u; return; } if (c.pc != 0x002B7064u) [[unlikely]] return; }
L_002B7064:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 284u)));
    st8((c.r[17].w[0] + 8683u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 88u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B7098; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 276u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 8662u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002B70A8; } }
L_002B7098:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 280u)));
    st8((c.r[17].w[0] + 8662u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_002B70A8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 291u)));
    st8((c.r[17].w[0] + 886u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_002B70B8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 8704u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B6FF0u | kUnwind; return; } goto L_002B6FF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B70D4u);  if (depth < kMaxDepth) unit_0044(c, 202u, depth + 1u); else { c.pc = 0x00211540u; return; } if (c.pc != 0x002B70D4u) [[unlikely]] return; }
L_002B70D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B70DCu);  if (depth < kMaxDepth) unit_0044(c, 222u, depth + 1u); else { c.pc = 0x00211BA0u; return; } if (c.pc != 0x002B70DCu) [[unlikely]] return; }
L_002B70DC:
    set32(c.r[3], c.r[20].w[0] << 3);
    set32(c.r[2], c.r[19].w[0] << 3);
    set32(c.r[5], c.r[3].w[0] - c.r[20].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[19].w[0]);
    set32(c.r[4], c.r[5].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - 31179u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - 31178u);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[9], c.r[2].w[0] + c.r[4].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 31180u);
    set32(c.r[8], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 31184u);
    st8((c.r[10].w[0] + 14u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[7], c.r[2].w[0] + c.r[4].w[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    st8((c.r[2].w[0] + 15u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 31008u);
    c.budget -= 33;
L_002B7160:
    set32(c.r[12], ld32((c.r[28].w[0] - 23784u)));
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0])));
    set32(c.r[8], c.r[8].w[0] << 5);
    c.budget -= 6;
    { const bool t = c.r[10].d[0] == 0ull; set32(c.r[8], c.r[2].w[0] + c.r[8].w[0]);  if (t) { goto L_002B71A8; } }
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0] + 40u)));
    set32(c.r[10], c.r[12].w[0] + c.r[5].w[0]);
    c.r[11].d[0] = c.r[11].d[0] & 3ull;
    set32(c.r[11], c.r[11].w[0] << 1);
    set32(c.r[11], c.r[6].w[0] + c.r[11].w[0]);
    set32(c.r[12], c.r[8].w[0] + c.r[11].w[0]);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0])));
    st8((c.r[10].w[0] + 20u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[10], ld32((c.r[28].w[0] - 23784u)));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0] + 1u)));
    set32(c.r[10], c.r[10].w[0] + c.r[5].w[0]);
    st8((c.r[10].w[0] + 21u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.budget -= 12;
L_002B71A8:
    set32(c.r[11], c.r[3].w[0] + 2u);
    set32(c.r[10], c.r[4].w[0] + c.r[11].w[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    c.budget -= 5;
    { const bool t = c.r[10].d[0] == 0ull;  if (t) { goto L_002B71F8; } }
    set32(c.r[10], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[11], c.r[11].w[0] << 3);
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 40u)));
    c.r[12].d[0] = c.r[12].d[0] & 3ull;
    set32(c.r[10], c.r[10].w[0] + c.r[5].w[0]);
    set32(c.r[12], c.r[12].w[0] << 1);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    set32(c.r[11], c.r[8].w[0] + c.r[11].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0])));
    st8((c.r[10].w[0] + 28u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[8], ld32((c.r[28].w[0] - 23784u)));
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 1u)));
    set32(c.r[8], c.r[8].w[0] + c.r[5].w[0]);
    st8((c.r[8].w[0] + 29u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.budget -= 15;
L_002B71F8:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[8].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + 8u);
    c.budget -= 6;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7160u | kUnwind; return; } goto L_002B7160; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == c.r[2].d[0];  if (t) { goto L_002B7298; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[4], c.r[9].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - 29727u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 40u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[5].d[0] = c.r[5].d[0] & 12ull;
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 1));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);  if (t) { goto L_002B7278; } }
    set32(c.r[2], c.r[2].w[0] - 29728u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    st8((c.r[6].w[0] + 24u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 25u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002B7298; } }
L_002B7278:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 29728u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    st8((c.r[6].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 33u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
L_002B7298:
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], 0u - 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 27856u);
    st8((c.r[5].w[0] + 47u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 53u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 88u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 48u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 54u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 89u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 49u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 55u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 90u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 50u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 56u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 91u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 51u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 57u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 92u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 52u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 58u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 93u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], 0u + 1u);
    c.budget -= 42;
L_002B7340:
    set32(c.r[7], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], c.r[6].w[0] << (c.r[3].w[0] & 31u));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 56u)));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002B73D8; } }
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8680u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[11].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8659u)));
    c.budget -= 4;
L_002B7368:
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[9], c.r[5].w[0] + c.r[7].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 47u)));
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[11].d[0];  if (t) { goto L_002B73A0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 53u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[10].d[0];  if (t) { goto L_002B73A0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[12].d[0];  if (t) { goto L_002B73A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 6u);  if (t) { goto L_002B73C8; } }
    c.budget -= 1;
L_002B73A0:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[2].d[0];  if (t) { goto L_002B73C8; } }
    st8((c.r[9].w[0] + 88u), static_cast<std::uint8_t>(c.r[12].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    st8((c.r[5].w[0] + 47u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    st8((c.r[5].w[0] + 53u), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[7], 0u + 6u);
    c.budget -= 8;
L_002B73C8:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[5].d[0] = c.r[7].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7368u | kUnwind; return; } goto L_002B7368; } }
L_002B73D8:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[5].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7340u | kUnwind; return; } goto L_002B7340; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 6u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_002B7428; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002B7410; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B7420; } }
    c.budget -= 1;
L_002B7410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7418u);  if (depth < kMaxDepth) unit_0026(c, 74u, depth + 1u); else { c.pc = 0x00199260u; return; } if (c.pc != 0x002B7418u) [[unlikely]] return; }
L_002B7418:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B7428; } }
L_002B7420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7428u);  if (depth < kMaxDepth) unit_0026(c, 63u, depth + 1u); else { c.pc = 0x00198FB0u; return; } if (c.pc != 0x002B7428u) [[unlikely]] return; }
L_002B7428:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7430u);  if (depth < kMaxDepth) unit_0033(c, 128u, depth + 1u); else { c.pc = 0x001CD3D0u; return; } if (c.pc != 0x002B7430u) [[unlikely]] return; }
L_002B7430:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00830000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[18].w[0] + 18512u);
    set32(c.r[17], c.r[17].w[0] - 27856u);
    st8((c.r[2].w[0] + 43u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 44u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 45u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 46u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 108u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 109u), static_cast<std::uint8_t>(0u));
    c.budget -= 16;
L_002B7470:
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B74C8; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.r[2].d[0] = c.r[3].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 80ll ? 1ull : 0ull;  if (t) { goto L_002B74C8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B74C8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8661u)));
    c.r[4].d[0] = c.r[16].d[0] << 56;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 108u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B74B4u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);  if (depth < kMaxDepth) unit_0033(c, 127u, depth + 1u); else { c.pc = 0x001CD2A0u; return; } if (c.pc != 0x002B74B4u) [[unlikely]] return; }
L_002B74B4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8661u)));
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 108u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 108u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_002B74C8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 48u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7470u | kUnwind; return; } goto L_002B7470; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] - 27856u);
    c.budget -= 3;
L_002B74E8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B7538; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.r[1].d[0] = c.r[2].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B7538; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8661u)));
    c.r[4].d[0] = c.r[16].d[0] << 56;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 108u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7520u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);  if (depth < kMaxDepth) unit_0033(c, 127u, depth + 1u); else { c.pc = 0x001CD2A0u; return; } if (c.pc != 0x002B7520u) [[unlikely]] return; }
L_002B7520:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8661u)));
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 108u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 108u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_002B7538:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B74E8u | kUnwind; return; } goto L_002B74E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7550u);  if (depth < kMaxDepth) unit_0026(c, 96u, depth + 1u); else { c.pc = 0x00199D10u; return; } if (c.pc != 0x002B7550u) [[unlikely]] return; }
L_002B7550:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7558u);  if (depth < kMaxDepth) unit_0047(c, 47u, depth + 1u); else { c.pc = 0x0021C490u; return; } if (c.pc != 0x002B7558u) [[unlikely]] return; }
L_002B7558:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002B7580:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[2].w[0] + 68u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[2].w[0] + 69u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[2].w[0] + 70u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[2].w[0] + 71u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[2].w[0] + 72u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[2].w[0] + 73u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], 0u + 1u);
    c.budget -= 18;
L_002B75C8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 56u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B75F8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 291u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st8((c.r[2].w[0] + 68u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_002B75F8:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B75C8u | kUnwind; return; } goto L_002B75C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7610u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x002B7610u) [[unlikely]] return; }
L_002B7610:
    set32(c.r[3], 0u + 128u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3C670000u);
    st32((c.r[29].w[0] + 44u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[4].d[0] | 63502ull;
    st32((c.r[29].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[3].d[0] = c.r[6].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B7640; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 54u);  if (t) { goto L_002B76E0; } }
L_002B7640:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] >= 0; c.r[5].d[0] = c.r[6].d[0] & 31ull;  if (t) { goto L_002B7654; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_002B7658; } }
    set32(c.r[5], c.r[5].w[0] - 32u);
    c.budget -= 1;
L_002B7654:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_002B7658:
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 5));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] >= 0; set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));  if (t) { goto L_002B766C; } }
    set32(c.r[3], c.r[6].w[0] + 31u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    c.budget -= 2;
L_002B766C:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 40u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B7690; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 48u);  if (t) { goto L_002B76E0; } }
    c.budget -= 1;
L_002B7690:
    set32(c.r[3], 0u + 3u);
    mmi::divu(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[3], 0u + 2u);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002B76D8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002B76D0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B76C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B76E0; } }
L_002B76C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 47u);  if (t) { goto L_002B76E0; } }
L_002B76D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 49u);  if (t) { goto L_002B76E0; } }
L_002B76D8:
    set32(c.r[16], 0u + 54u);
    c.budget -= 2;
L_002B76E0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B76F0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 329u, depth + 1u); else { c.pc = 0x002B7AF0u; return; } if (c.pc != 0x002B76F0u) [[unlikely]] return; }
L_002B76F0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B76FCu); st8((c.r[3].w[0] + 72u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x002B76FCu) [[unlikely]] return; }
L_002B76FC:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[5].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 56u);  if (t) { goto L_002B7720; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B7850; } }
    c.budget -= 1;
L_002B7720:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], 0u + 50u);  if (t) { goto L_002B7730; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B7738; } }
L_002B7730:
    set32(c.r[4], 0u + 56u);
    c.budget -= 2;
L_002B7738:
    set32(c.r[10], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[9].d[0] = 0ull + 0ull;
    c.r[12].d[0] = c.r[3].d[0] + 0ull;
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 56u)));
    c.r[13].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], 0u + 12u);
    set32(c.r[8], 0u + 1u);
    c.budget -= 8;
L_002B7758:
    set32(c.r[6], c.r[8].w[0] << (c.r[9].w[0] & 31u));
    c.r[6].d[0] = c.r[11].d[0] & c.r[6].d[0];
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002B7788; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[7].d[0];  if (t) { goto L_002B7788; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[8].d[0];  if (t) { goto L_002B7788; } }
    set32(c.r[4], 0u + 52u);
    c.budget -= 2;
L_002B7788:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[6].d[0] = c.r[9].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[13], c.r[13].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[12], c.r[12].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7758u | kUnwind; return; } goto L_002B7758; } }
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 56u)));
    c.r[9].d[0] = 0ull + 0ull;
    c.r[11].d[0] = c.r[2].d[0] + 0ull;
    c.r[10].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[7], 0u + 21u);
    set32(c.r[8], 0u + 1u);
    c.budget -= 7;
L_002B77B8:
    set32(c.r[6], c.r[8].w[0] << (c.r[9].w[0] & 31u));
    c.r[6].d[0] = c.r[12].d[0] & c.r[6].d[0];
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002B77E8; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[7].d[0];  if (t) { goto L_002B77E8; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[8].d[0];  if (t) { goto L_002B77E8; } }
    set32(c.r[4], 0u + 52u);
    c.budget -= 2;
L_002B77E8:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[6].d[0] = c.r[9].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[10], c.r[10].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B77B8u | kUnwind; return; } goto L_002B77B8; } }
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 11u);
    set32(c.r[8], 0u + 1u);
    c.budget -= 3;
L_002B7808:
    set32(c.r[6], c.r[8].w[0] << (c.r[9].w[0] & 31u));
    c.r[6].d[0] = c.r[12].d[0] & c.r[6].d[0];
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002B7840; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[7].d[0];  if (t) { goto L_002B7840; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], 0u + 50u);  if (t) { goto L_002B7838; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B7840; } }
    c.budget -= 1;
L_002B7838:
    set32(c.r[4], 0u + 56u);
    c.budget -= 2;
L_002B7840:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[6].d[0] = c.r[9].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7808u | kUnwind; return; } goto L_002B7808; } }
L_002B7850:
    set32(c.r[11], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[10].d[0] = 0ull + 0ull;
    c.r[13].d[0] = c.r[3].d[0] + 0ull;
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 56u)));
    c.r[14].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[8], 0u + 18u);
    set32(c.r[9], 0u + 1u);
    set32(c.r[7], 0u + 31u);
    c.budget -= 10;
L_002B7878:
    set32(c.r[6], c.r[9].w[0] << (c.r[10].w[0] & 31u));
    c.r[6].d[0] = c.r[12].d[0] & c.r[6].d[0];
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002B78B0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[14].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[8].d[0];  if (t) { goto L_002B78A0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[7].d[0];  if (t) { goto L_002B78B0; } }
    c.budget -= 1;
L_002B78A0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[9].d[0];  if (t) { goto L_002B78B0; } }
    set32(c.r[4], 0u + 51u);
    c.budget -= 1;
L_002B78B0:
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[6].d[0] = c.r[10].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[14], c.r[14].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[13], c.r[13].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7878u | kUnwind; return; } goto L_002B7878; } }
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 56u)));
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 30u);
    set32(c.r[8], 0u + 1u);
    c.budget -= 5;
L_002B78D8:
    set32(c.r[6], c.r[8].w[0] << (c.r[9].w[0] & 31u));
    c.r[6].d[0] = c.r[10].d[0] & c.r[6].d[0];
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002B7908; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[7].d[0];  if (t) { goto L_002B7908; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[8].d[0];  if (t) { goto L_002B7908; } }
    set32(c.r[4], 0u + 51u);
    c.budget -= 2;
L_002B7908:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[6].d[0] = c.r[9].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B78D8u | kUnwind; return; } goto L_002B78D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7924u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 329u, depth + 1u); else { c.pc = 0x002B7AF0u; return; } if (c.pc != 0x002B7924u) [[unlikely]] return; }
L_002B7924:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[3].w[0] + 73u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 159u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B7A30; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], 0u + 61u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 72u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 60u);  if (t) { goto L_002B7A20; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002B7A10; } }
    set32(c.r[3], 0u + 59u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 58u);  if (t) { goto L_002B7A00; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002B79F0; } }
    set32(c.r[3], 0u + 57u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 54u);  if (t) { goto L_002B79E0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002B79D0; } }
    set32(c.r[3], 0u + 49u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 48u);  if (t) { goto L_002B79C0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002B79B0; } }
    set32(c.r[3], 0u + 47u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002B79A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B7AD8; } }
L_002B79A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 23u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002B7AD8; } }
L_002B79B0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 23u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002B7AD8; } }
    c.budget -= 1;
L_002B79C0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 23u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002B7AD8; } }
    c.budget -= 1;
L_002B79D0:
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 23u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002B7AD8; } }
    c.budget -= 1;
L_002B79E0:
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 23u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002B7AD8; } }
    c.budget -= 1;
L_002B79F0:
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 23u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002B7AD8; } }
    c.budget -= 1;
L_002B7A00:
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 23u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002B7AD8; } }
    c.budget -= 1;
L_002B7A10:
    set32(c.r[3], 0u + 13u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 23u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002B7AD8; } }
    c.budget -= 1;
L_002B7A20:
    set32(c.r[3], 0u + 14u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 23u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002B7AD8; } }
    c.budget -= 1;
L_002B7A30:
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], 0u + 63u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 73u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 62u);  if (t) { goto L_002B7AD0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002B7AC0; } }
    set32(c.r[3], 0u + 56u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 52u);  if (t) { goto L_002B7AB0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002B7AA0; } }
    set32(c.r[3], 0u + 51u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 50u);  if (t) { goto L_002B7A90; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002B7A80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B7AD8; } }
    c.budget -= 1;
L_002B7A80:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 23u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002B7AD8; } }
    c.budget -= 1;
L_002B7A90:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 23u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002B7AD8; } }
    c.budget -= 1;
L_002B7AA0:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 23u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002B7AD8; } }
    c.budget -= 1;
L_002B7AB0:
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 23u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002B7AD8; } }
    c.budget -= 1;
L_002B7AC0:
    set32(c.r[3], 0u + 15u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 23u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002B7AD8; } }
    c.budget -= 1;
L_002B7AD0:
    set32(c.r[3], 0u + 16u);
    st8((c.r[5].w[0] + 23u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002B7AD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B7AF0:
    set32(c.r[8], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[3].w[0] - 3u);  if (t) { goto L_002B7B20; } }
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002B7B20; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B7C88; } }
    c.budget -= 1;
L_002B7B20:
    set32(c.r[9], ld32((c.r[28].w[0] - 23784u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    set32(c.r[2], c.r[7].w[0] - 13u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(26ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_002B7C88; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 22000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002B4000u < 16384u) { entry = entries_006D[(t - 0x002B4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002B7B50:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[3], 0u + 5u);  if (t) { goto L_002B7C20; } }
    set32(c.r[2], 0u + 4u);
    mmi::div(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_002B7BC0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002B7BB8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B7BB0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002B7BA8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B7BA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B7BC8; } }
L_002B7BA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 57u);  if (t) { goto L_002B7BC8; } }
L_002B7BA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 58u);  if (t) { goto L_002B7BC8; } }
L_002B7BB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 59u);  if (t) { goto L_002B7BC8; } }
L_002B7BB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 60u);  if (t) { goto L_002B7BC8; } }
L_002B7BC0:
    set32(c.r[4], 0u + 61u);
    c.budget -= 2;
L_002B7BC8:
    set32(c.r[2], 0u + 59u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002B7C88; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 56u)));
    set32(c.r[7], ld32((c.r[28].w[0] - 23788u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 36u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
L_002B7BE8:
    set32(c.r[2], c.r[5].w[0] << (c.r[8].w[0] & 31u));
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B7C08; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002B7C08; } }
    set32(c.r[4], 0u + 61u);
    c.budget -= 1;
L_002B7C08:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = c.r[8].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7BE8u | kUnwind; return; } goto L_002B7BE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B7C88; } }
L_002B7C20:
    set32(c.r[2], 0u + 28u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 63u);  if (t) { goto L_002B7C88; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 56u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], 0u + 39u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
L_002B7C40:
    set32(c.r[2], c.r[5].w[0] << (c.r[6].w[0] & 31u));
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B7C70; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002B7C70; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_002B7C70; } }
    set32(c.r[4], 0u + 62u);
    c.budget -= 2;
L_002B7C70:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7C40u | kUnwind; return; } goto L_002B7C40; } }
    c.budget -= 1;
L_002B7C88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_002B7C90:
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 2;
L_002B7C98:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], c.r[5].w[0] << (c.r[7].w[0] & 31u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 56u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[6], c.r[7].w[0] + 1u);  if (t) { goto L_002B7D20; } }
    c.r[1].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B7D20; } }
    c.budget -= 1;
L_002B7CC0:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], c.r[5].w[0] << (c.r[6].w[0] & 31u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 56u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B7D10; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[4], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 116u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 116u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002B7D10; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 191u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st8((c.r[3].w[0] + 191u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 7;
L_002B7D10:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7CC0u | kUnwind; return; } goto L_002B7CC0; } }
L_002B7D20:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7C98u | kUnwind; return; } goto L_002B7C98; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B7D40:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002B7EB0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[7], c.r[7].w[0] - 8940u);
    set32(c.r[6], 0u + 600u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 159u)));
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 152u)));
    c.budget -= 11;
    { const bool t = c.r[6].sd[0] < 0; set32(c.r[4], c.r[3].w[0] + 159u);  if (t) { goto L_002B7DA8; } }
    c.r[1].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B7DA8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[6], 0u + 200u);
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));  if (t) { goto L_002B7E80; } }
L_002B7DA8:
    c.r[5].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; c.r[1].d[0] = c.r[6].sd[0] < 10ll ? 1ull : 0ull;  if (t) { goto L_002B7DE0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B7DE0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[5].w[0] - 8940u);
    set32(c.r[7], 0u + 300u);
    c.r[6].d[0] = c.r[6].d[0] ^ 1ull;
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));  if (t) { goto L_002B7E80; } }
L_002B7DE0:
    c.r[5].d[0] = c.r[6].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; c.r[1].d[0] = c.r[6].sd[0] < 20ll ? 1ull : 0ull;  if (t) { goto L_002B7E18; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B7E18; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[5].w[0] - 8940u);
    set32(c.r[7], 0u + 400u);
    c.r[6].d[0] = c.r[6].d[0] ^ 1ull;
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));  if (t) { goto L_002B7E80; } }
L_002B7E18:
    c.r[5].d[0] = c.r[6].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; c.r[1].d[0] = c.r[6].sd[0] < 30ll ? 1ull : 0ull;  if (t) { goto L_002B7E50; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B7E50; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[5].w[0] - 8940u);
    set32(c.r[7], 0u + 500u);
    c.r[6].d[0] = c.r[6].d[0] ^ 1ull;
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));  if (t) { goto L_002B7E80; } }
L_002B7E50:
    c.r[5].d[0] = c.r[6].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002B7E80; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[5].w[0] - 8940u);
    set32(c.r[7], 0u + 600u);
    c.r[6].d[0] = c.r[6].d[0] ^ 1ull;
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.budget -= 9;
L_002B7E80:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 146u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002B7F60; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] - 8940u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 328u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_002B7F60; } }
L_002B7EB0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);  if (t) { goto L_002B7F00; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8936u)));
    set32(c.r[5], c.r[5].w[0] - 24480u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8935u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 8940u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] - 8938u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002B7F60; } }
    c.budget -= 1;
L_002B7F00:
    set32(c.r[7], ld32((c.r[28].w[0] - 23784u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[6], c.r[6].w[0] - 11856u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 12u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 13u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[1].w[0] - 8940u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 13u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 12u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[1].w[0] - 8938u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 24;
L_002B7F60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B7F70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], 0u - 1u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 8944u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002B7FA0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[4], 0u + 1u);
    st16((c.r[3].w[0] + 180u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 289u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002B7FB0; } }
    c.budget -= 1;
L_002B7FA0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st16((c.r[3].w[0] + 180u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 289u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_002B7FB0:
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 180u)));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    st16((c.r[5].w[0] + 182u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 92u), 0u);  c.pc = t; return; }
L_002B7FE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 6u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.budget -= 8;
    [[clang::musttail]] return unit_006E(c, 1u, depth);
}

}
