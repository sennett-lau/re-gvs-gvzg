#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0095[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0,
    0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0,
    0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0,
    18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0,
    0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0,
    0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0,
    0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0,
    47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 62, 0, 63, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0,
    71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0, 0, 0,
    75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0,
    78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81,
    0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 101, 0, 0, 0, 0, 102, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0,
    0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0,
    111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0,
    118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 125, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0,
    129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0,
    133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    140, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0,
    0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0,
    0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0,
    0, 161, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0,
    0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0,
    0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 176, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0,
    0, 180, 0, 0, 181, 0, 0, 182, 0, 0, 183, 0, 0, 184, 0, 0, 185, 0, 0, 186, 0, 0, 187, 0, 0, 188, 0, 0, 189, 0, 0, 190,
    0, 0, 191, 0, 0, 192, 0, 0, 193, 0, 0, 194, 0, 195, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 199, 0, 0, 200, 0,
    0, 201, 0, 0, 202, 0, 0, 203, 0, 0, 204, 0, 0, 205, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 210,
    0, 0, 211, 0, 0, 212, 0, 0, 213, 0, 0, 214, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 218, 0, 0, 219,
    0, 0, 220, 0, 0, 221, 0, 0, 222, 0, 0, 223, 0, 0, 224, 0, 0, 225, 0, 0, 226, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0, 0,
    229, 0, 0, 0, 0, 0, 230, 0, 0, 231, 0, 0, 232, 0, 0, 233, 0, 0, 234, 0, 0, 235, 0, 0, 236, 0, 0, 237, 0, 0, 238, 0,
    239, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 244, 0, 0, 245, 0, 0, 246, 0,
    0, 247, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 251, 0, 0, 252, 0, 0, 253, 0, 0, 254, 0, 0, 255, 0, 0, 256,
    0, 0, 257, 0, 0, 258, 0, 0, 259, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 263, 0, 0, 264, 0, 0, 265, 0,
    0, 266, 0, 0, 267, 0, 0, 268, 0, 0, 269, 0, 0, 270, 0, 271, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0,
    274, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 285, 0, 286, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0,
    0, 0, 291, 0, 292, 0, 293, 0, 294, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0,
    0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0,
    0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    328, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0,
    0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0,
    337, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 342, 0, 343, 0, 0, 0,
    344, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0,
    349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0,
    352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0, 0, 0, 356, 0,
    0, 357, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 0, 361, 0, 0, 362, 0, 0, 0, 0, 0, 0, 363,
    0, 0, 0, 364, 0, 0, 0, 365, 0, 0, 0, 0, 366, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 383, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0,
    0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 392, 0,
    0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    407, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410,
    0, 0, 0, 0, 0, 0, 411, 0, 412, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 415, 0, 416, 0, 0, 417, 0, 0, 0,
};

void unit_0095(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00354000;
    case 2u: goto L_00354020;
    case 3u: goto L_00354080;
    case 4u: goto L_003540C8;
    case 5u: goto L_003540D8;
    case 6u: goto L_00354158;
    case 7u: goto L_00354170;
    case 8u: goto L_00354188;
    case 9u: goto L_00354198;
    case 10u: goto L_003541B4;
    case 11u: goto L_003541D8;
    case 12u: goto L_003541F4;
    case 13u: goto L_00354218;
    case 14u: goto L_00354228;
    case 15u: goto L_00354230;
    case 16u: goto L_00354254;
    case 17u: goto L_0035425C;
    case 18u: goto L_00354280;
    case 19u: goto L_00354298;
    case 20u: goto L_003542A8;
    case 21u: goto L_003542C8;
    case 22u: goto L_003542D0;
    case 23u: goto L_003542F4;
    case 24u: goto L_0035430C;
    case 25u: goto L_00354320;
    case 26u: goto L_00354340;
    case 27u: goto L_00354348;
    case 28u: goto L_0035436C;
    case 29u: goto L_00354390;
    case 30u: goto L_003543A0;
    case 31u: goto L_003543C0;
    case 32u: goto L_00354420;
    case 33u: goto L_003545A4;
    case 34u: goto L_003545E0;
    case 35u: goto L_00354628;
    case 36u: goto L_00354670;
    case 37u: goto L_00354690;
    case 38u: goto L_003546E0;
    case 39u: goto L_00354724;
    case 40u: goto L_00354740;
    case 41u: goto L_00354760;
    case 42u: goto L_003547B0;
    case 43u: goto L_003547C0;
    case 44u: goto L_003547E0;
    case 45u: goto L_00354830;
    case 46u: goto L_00354870;
    case 47u: goto L_00354880;
    case 48u: goto L_003548A0;
    case 49u: goto L_003548F0;
    case 50u: goto L_00354950;
    case 51u: goto L_00354970;
    case 52u: goto L_003549C0;
    case 53u: goto L_00354A10;
    case 54u: goto L_00354A40;
    case 55u: goto L_00354A50;
    case 56u: goto L_00354A80;
    case 57u: goto L_00354A90;
    case 58u: goto L_00354AC0;
    case 59u: goto L_00354AD0;
    case 60u: goto L_00354B00;
    case 61u: goto L_00354B10;
    case 62u: goto L_00354B90;
    case 63u: goto L_00354B98;
    case 64u: goto L_00354BA8;
    case 65u: goto L_00354BB8;
    case 66u: goto L_00354BC8;
    case 67u: goto L_00354BE0;
    case 68u: goto L_00354C50;
    case 69u: goto L_00354C60;
    case 70u: goto L_00354C70;
    case 71u: goto L_00354C80;
    case 72u: goto L_00354CCC;
    case 73u: goto L_00354CE4;
    case 74u: goto L_00354CEC;
    case 75u: goto L_00354D00;
    case 76u: goto L_00354D30;
    case 77u: goto L_00354D70;
    case 78u: goto L_00354D80;
    case 79u: goto L_00354DB4;
    case 80u: goto L_00354DC8;
    case 81u: goto L_00354DFC;
    case 82u: goto L_00354E10;
    case 83u: goto L_00354E3C;
    case 84u: goto L_00354E50;
    case 85u: goto L_00354E7C;
    case 86u: goto L_00354EBC;
    case 87u: goto L_00354ED0;
    case 88u: goto L_00354F10;
    case 89u: goto L_00354F20;
    case 90u: goto L_00354F9C;
    case 91u: goto L_00354FB0;
    case 92u: goto L_00354FD0;
    case 93u: goto L_00355024;
    case 94u: goto L_00355058;
    case 95u: goto L_0035508C;
    case 96u: goto L_003550A4;
    case 97u: goto L_00355108;
    case 98u: goto L_00355194;
    case 99u: goto L_003551C4;
    case 100u: goto L_003551DC;
    case 101u: goto L_003551E4;
    case 102u: goto L_003551F8;
    case 103u: goto L_00355240;
    case 104u: goto L_00355258;
    case 105u: goto L_0035526C;
    case 106u: goto L_0035528C;
    case 107u: goto L_003552B8;
    case 108u: goto L_003552C0;
    case 109u: goto L_003552CC;
    case 110u: goto L_003552E8;
    case 111u: goto L_00355300;
    case 112u: goto L_00355358;
    case 113u: goto L_003553BC;
    case 114u: goto L_00355410;
    case 115u: goto L_00355444;
    case 116u: goto L_00355458;
    case 117u: goto L_00355474;
    case 118u: goto L_00355480;
    case 119u: goto L_0035549C;
    case 120u: goto L_003554E4;
    case 121u: goto L_00355550;
    case 122u: goto L_00355588;
    case 123u: goto L_003555A4;
    case 124u: goto L_003555EC;
    case 125u: goto L_003555F4;
    case 126u: goto L_00355630;
    case 127u: goto L_00355644;
    case 128u: goto L_00355670;
    case 129u: goto L_00355680;
    case 130u: goto L_00355690;
    case 131u: goto L_003556D8;
    case 132u: goto L_003556E8;
    case 133u: goto L_00355700;
    case 134u: goto L_00355730;
    case 135u: goto L_00355790;
    case 136u: goto L_003557E8;
    case 137u: goto L_00355828;
    case 138u: goto L_00355914;
    case 139u: goto L_00355940;
    case 140u: goto L_00355980;
    case 141u: goto L_00355988;
    case 142u: goto L_003559AC;
    case 143u: goto L_003559CC;
    case 144u: goto L_003559E0;
    case 145u: goto L_003559F0;
    case 146u: goto L_00355A60;
    case 147u: goto L_00355A74;
    case 148u: goto L_00355A90;
    case 149u: goto L_00355ABC;
    case 150u: goto L_00355AC8;
    case 151u: goto L_00355AF4;
    case 152u: goto L_00355B08;
    case 153u: goto L_00355B28;
    case 154u: goto L_00355B38;
    case 155u: goto L_00355B5C;
    case 156u: goto L_00355B98;
    case 157u: goto L_00355BC0;
    case 158u: goto L_00355BD4;
    case 159u: goto L_00355BDC;
    case 160u: goto L_00355BF8;
    case 161u: goto L_00355C04;
    case 162u: goto L_00355C0C;
    case 163u: goto L_00355C28;
    case 164u: goto L_00355C30;
    case 165u: goto L_00355C4C;
    case 166u: goto L_00355C54;
    case 167u: goto L_00355C84;
    case 168u: goto L_00355CD0;
    case 169u: goto L_00355CF8;
    case 170u: goto L_00355D08;
    case 171u: goto L_00355D28;
    case 172u: goto L_00355D70;
    case 173u: goto L_00355D88;
    case 174u: goto L_00355DD0;
    case 175u: goto L_00355DE8;
    case 176u: goto L_00355DF0;
    case 177u: goto L_00355E1C;
    case 178u: goto L_00355E60;
    case 179u: goto L_00355E70;
    case 180u: goto L_00355E84;
    case 181u: goto L_00355E90;
    case 182u: goto L_00355E9C;
    case 183u: goto L_00355EA8;
    case 184u: goto L_00355EB4;
    case 185u: goto L_00355EC0;
    case 186u: goto L_00355ECC;
    case 187u: goto L_00355ED8;
    case 188u: goto L_00355EE4;
    case 189u: goto L_00355EF0;
    case 190u: goto L_00355EFC;
    case 191u: goto L_00355F08;
    case 192u: goto L_00355F14;
    case 193u: goto L_00355F20;
    case 194u: goto L_00355F2C;
    case 195u: goto L_00355F34;
    case 196u: goto L_00355F40;
    case 197u: goto L_00355F54;
    case 198u: goto L_00355F60;
    case 199u: goto L_00355F6C;
    case 200u: goto L_00355F78;
    case 201u: goto L_00355F84;
    case 202u: goto L_00355F90;
    case 203u: goto L_00355F9C;
    case 204u: goto L_00355FA8;
    case 205u: goto L_00355FB4;
    case 206u: goto L_00355FC0;
    case 207u: goto L_00355FD0;
    case 208u: goto L_00355FE4;
    case 209u: goto L_00355FF0;
    case 210u: goto L_00355FFC;
    case 211u: goto L_00356008;
    case 212u: goto L_00356014;
    case 213u: goto L_00356020;
    case 214u: goto L_0035602C;
    case 215u: goto L_00356038;
    case 216u: goto L_00356050;
    case 217u: goto L_00356064;
    case 218u: goto L_00356070;
    case 219u: goto L_0035607C;
    case 220u: goto L_00356088;
    case 221u: goto L_00356094;
    case 222u: goto L_003560A0;
    case 223u: goto L_003560AC;
    case 224u: goto L_003560B8;
    case 225u: goto L_003560C4;
    case 226u: goto L_003560D0;
    case 227u: goto L_003560DC;
    case 228u: goto L_003560E8;
    case 229u: goto L_00356100;
    case 230u: goto L_00356118;
    case 231u: goto L_00356124;
    case 232u: goto L_00356130;
    case 233u: goto L_0035613C;
    case 234u: goto L_00356148;
    case 235u: goto L_00356154;
    case 236u: goto L_00356160;
    case 237u: goto L_0035616C;
    case 238u: goto L_00356178;
    case 239u: goto L_00356180;
    case 240u: goto L_0035618C;
    case 241u: goto L_003561A4;
    case 242u: goto L_003561C0;
    case 243u: goto L_003561D4;
    case 244u: goto L_003561E0;
    case 245u: goto L_003561EC;
    case 246u: goto L_003561F8;
    case 247u: goto L_00356204;
    case 248u: goto L_0035620C;
    case 249u: goto L_00356220;
    case 250u: goto L_00356234;
    case 251u: goto L_00356240;
    case 252u: goto L_0035624C;
    case 253u: goto L_00356258;
    case 254u: goto L_00356264;
    case 255u: goto L_00356270;
    case 256u: goto L_0035627C;
    case 257u: goto L_00356288;
    case 258u: goto L_00356294;
    case 259u: goto L_003562A0;
    case 260u: goto L_003562A8;
    case 261u: goto L_003562C0;
    case 262u: goto L_003562D4;
    case 263u: goto L_003562E0;
    case 264u: goto L_003562EC;
    case 265u: goto L_003562F8;
    case 266u: goto L_00356304;
    case 267u: goto L_00356310;
    case 268u: goto L_0035631C;
    case 269u: goto L_00356328;
    case 270u: goto L_00356334;
    case 271u: goto L_0035633C;
    case 272u: goto L_00356350;
    case 273u: goto L_00356370;
    case 274u: goto L_00356380;
    case 275u: goto L_003563A0;
    case 276u: goto L_003563D0;
    case 277u: goto L_00356438;
    case 278u: goto L_003564A0;
    case 279u: goto L_003564C8;
    case 280u: goto L_00356540;
    case 281u: goto L_00356550;
    case 282u: goto L_00356570;
    case 283u: goto L_003565A0;
    case 284u: goto L_003565C8;
    case 285u: goto L_003565E8;
    case 286u: goto L_003565F0;
    case 287u: goto L_0035661C;
    case 288u: goto L_0035662C;
    case 289u: goto L_00356634;
    case 290u: goto L_0035666C;
    case 291u: goto L_00356688;
    case 292u: goto L_00356690;
    case 293u: goto L_00356698;
    case 294u: goto L_003566A0;
    case 295u: goto L_003566C0;
    case 296u: goto L_003566D0;
    case 297u: goto L_003566F0;
    case 298u: goto L_00356720;
    case 299u: goto L_00356740;
    case 300u: goto L_00356770;
    case 301u: goto L_00356790;
    case 302u: goto L_003567C0;
    case 303u: goto L_003567E0;
    case 304u: goto L_00356890;
    case 305u: goto L_003568BC;
    case 306u: goto L_003568E4;
    case 307u: goto L_003569A0;
    case 308u: goto L_003569C8;
    case 309u: goto L_00356A20;
    case 310u: goto L_00356A40;
    case 311u: goto L_00356AC0;
    case 312u: goto L_00356AEC;
    case 313u: goto L_00356B2C;
    case 314u: goto L_00356B34;
    case 315u: goto L_00356B44;
    case 316u: goto L_00356B78;
    case 317u: goto L_00356B94;
    case 318u: goto L_00356BC0;
    case 319u: goto L_00356BE0;
    case 320u: goto L_00356C30;
    case 321u: goto L_00356C50;
    case 322u: goto L_00356DD0;
    case 323u: goto L_00356DF0;
    case 324u: goto L_00356E40;
    case 325u: goto L_00356E64;
    case 326u: goto L_00356F90;
    case 327u: goto L_00356FD8;
    case 328u: goto L_00357000;
    case 329u: goto L_00357020;
    case 330u: goto L_00357070;
    case 331u: goto L_00357090;
    case 332u: goto L_003570C0;
    case 333u: goto L_003570E0;
    case 334u: goto L_00357190;
    case 335u: goto L_003571B8;
    case 336u: goto L_00357260;
    case 337u: goto L_00357280;
    case 338u: goto L_003572A0;
    case 339u: goto L_003572E0;
    case 340u: goto L_00357320;
    case 341u: goto L_00357348;
    case 342u: goto L_00357368;
    case 343u: goto L_00357370;
    case 344u: goto L_00357380;
    case 345u: goto L_00357394;
    case 346u: goto L_003573B0;
    case 347u: goto L_003573CC;
    case 348u: goto L_003573E8;
    case 349u: goto L_00357400;
    case 350u: goto L_00357438;
    case 351u: goto L_0035745C;
    case 352u: goto L_00357480;
    case 353u: goto L_003574B8;
    case 354u: goto L_003574D0;
    case 355u: goto L_003574E0;
    case 356u: goto L_003574F8;
    case 357u: goto L_00357504;
    case 358u: goto L_00357520;
    case 359u: goto L_00357530;
    case 360u: goto L_00357540;
    case 361u: goto L_00357554;
    case 362u: goto L_00357560;
    case 363u: goto L_0035757C;
    case 364u: goto L_0035758C;
    case 365u: goto L_0035759C;
    case 366u: goto L_003575B0;
    case 367u: goto L_003575BC;
    case 368u: goto L_003575DC;
    case 369u: goto L_00357630;
    case 370u: goto L_00357650;
    case 371u: goto L_003576C0;
    case 372u: goto L_003576E4;
    case 373u: goto L_00357760;
    case 374u: goto L_003577D0;
    case 375u: goto L_003577F0;
    case 376u: goto L_00357840;
    case 377u: goto L_00357864;
    case 378u: goto L_003579B0;
    case 379u: goto L_003579D0;
    case 380u: goto L_00357A10;
    case 381u: goto L_00357A34;
    case 382u: goto L_00357A5C;
    case 383u: goto L_00357A70;
    case 384u: goto L_00357A98;
    case 385u: goto L_00357AB8;
    case 386u: goto L_00357AC8;
    case 387u: goto L_00357AE8;
    case 388u: goto L_00357B08;
    case 389u: goto L_00357B28;
    case 390u: goto L_00357B38;
    case 391u: goto L_00357B58;
    case 392u: goto L_00357B78;
    case 393u: goto L_00357B98;
    case 394u: goto L_00357BB8;
    case 395u: goto L_00357BC8;
    case 396u: goto L_00357BE4;
    case 397u: goto L_00357C10;
    case 398u: goto L_00357C50;
    case 399u: goto L_00357C70;
    case 400u: goto L_00357CD0;
    case 401u: goto L_00357CFC;
    case 402u: goto L_00357D70;
    case 403u: goto L_00357DD0;
    case 404u: goto L_00357E10;
    case 405u: goto L_00357E90;
    case 406u: goto L_00357EB0;
    case 407u: goto L_00357F00;
    case 408u: goto L_00357F20;
    case 409u: goto L_00357F50;
    case 410u: goto L_00357F7C;
    case 411u: goto L_00357F98;
    case 412u: goto L_00357FA0;
    case 413u: goto L_00357FAC;
    case 414u: goto L_00357FCC;
    case 415u: goto L_00357FDC;
    case 416u: goto L_00357FE4;
    case 417u: goto L_00357FF0;
    default: bad_entry(c, 0x00354000u); return;
    }
L_00354000:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FA00000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[16].w[0] + 112u), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 116u), c.r[3].w[0]);  if (t) { goto L_00354070; } }
    c.budget -= 1;
L_00354020:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FA00000u);
    c.f[2] = ld32((c.r[16].w[0] + 48u));
    c.f[1] = ld32((c.r[16].w[0] + 112u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[16].w[0] + 112u), c.f[1]);
    c.f[2] = ld32((c.r[16].w[0] + 52u));
    c.f[1] = ld32((c.r[16].w[0] + 116u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 116u), c.f[1]);  if (t) { goto L_00354070; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 112u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 116u), c.f[0]);
    c.budget -= 7;
L_00354070:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00354158; } }
    c.budget -= 1;
L_00354080:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 3418u));
    c.r[3].d[0] = c.r[4].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003540B0; } }
    set32(c.r[4], c.r[6].w[0] + 1u);
    set32(c.r[3], 0u + 15u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003540C8; } }
    c.budget -= 1;
L_003540B0:
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003540C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003540C8u);  if (depth < kMaxDepth) unit_0095(c, 7u, depth + 1u); else { c.pc = 0x00354170u; return; } if (c.pc != 0x003540C8u) [[unlikely]] return; }
L_003540C8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00354158; } }
    c.budget -= 1;
L_003540D8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00354108; } }
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3418u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00354158; } }
    c.budget -= 1;
L_00354108:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3EB30000u);
    c.f[2] = ld32((c.r[16].w[0] + 48u));
    c.r[3].d[0] = c.r[3].d[0] | 13107ull;
    c.f[1] = ld32((c.r[16].w[0] + 112u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[16].w[0] + 112u), c.f[1]);
    c.f[2] = ld32((c.r[16].w[0] + 52u));
    c.f[1] = ld32((c.r[16].w[0] + 116u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 116u), c.f[1]);  if (t) { goto L_00354150; } }
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3418u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00354158; } }
L_00354150:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00354158:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00354170:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354188u); set32(c.r[6], 0u + 22u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00354188u) [[unlikely]] return; }
L_00354188:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354198u); set32(c.r[6], 0u + 18u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00354198u) [[unlikely]] return; }
L_00354198:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], c.r[2].w[0] + 295u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 295u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 16u);  if (t) { goto L_003541C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003541B4u); set32(c.r[6], 0u + 21u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x003541B4u) [[unlikely]] return; }
L_003541B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003541D8; } }
    c.budget -= 1;
L_003541C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 2864u)));
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003541D8u); set32(c.r[6], 0u + 21u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x003541D8u) [[unlikely]] return; }
L_003541D8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], c.r[2].w[0] + 86u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 86u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 48u);  if (t) { goto L_00354200; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003541F4u); set32(c.r[6], 0u + 21u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x003541F4u) [[unlikely]] return; }
L_003541F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00354218; } }
    c.budget -= 1;
L_00354200:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 2864u)));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354218u); set32(c.r[6], 0u + 21u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x00354218u) [[unlikely]] return; }
L_00354218:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354228u);  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x00354228u) [[unlikely]] return; }
L_00354228:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354230u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00354230u) [[unlikely]] return; }
L_00354230:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43380000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C00000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.f[13] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354254u); set32(c.r[4], c.r[4].w[0] + 6048u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x00354254u) [[unlikely]] return; }
L_00354254:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035425Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x0035425Cu) [[unlikely]] return; }
L_0035425C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43380000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43180000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.f[13] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354280u); set32(c.r[4], c.r[4].w[0] + 6080u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x00354280u) [[unlikely]] return; }
L_00354280:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 86u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_003542A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354298u);  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00354298u) [[unlikely]] return; }
L_00354298:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003542A8; } }
L_003542A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003542A8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x003542A8u) [[unlikely]] return; }
L_003542A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437A0000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43180000u);
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003542C8u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x003542C8u) [[unlikely]] return; }
L_003542C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003542D0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x003542D0u) [[unlikely]] return; }
L_003542D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43200000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43380000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.f[13] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003542F4u); set32(c.r[4], c.r[4].w[0] + 6088u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x003542F4u) [[unlikely]] return; }
L_003542F4:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 295u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_00354318; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035430Cu);  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x0035430Cu) [[unlikely]] return; }
L_0035430C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00354320; } }
    c.budget -= 1;
L_00354318:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354320u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00354320u) [[unlikely]] return; }
L_00354320:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43780000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43380000u);
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354340u); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x00354340u) [[unlikely]] return; }
L_00354340:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354348u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00354348u) [[unlikely]] return; }
L_00354348:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43940000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437C0000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.f[13] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035436Cu); set32(c.r[4], c.r[4].w[0] + 6104u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x0035436Cu) [[unlikely]] return; }
L_0035436C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43900000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43920000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.f[13] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354390u); set32(c.r[4], c.r[4].w[0] + 6112u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x00354390u) [[unlikely]] return; }
L_00354390:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003543A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 21136u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00354000u < 16384u) { entry = entries_0095[(t - 0x00354000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003543C0:
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00330000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F330000u);
    set32(c.r[9], c.r[9].w[0] + 16288u);
    c.r[8].d[0] = c.r[3].d[0] | 13107ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    set32(c.r[6], 0u + 8u);
    set32(c.r[5], 0u + 26u);
    set32(c.r[3], 0u + 64u);
    set32(c.r[10], c.r[10].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 112u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 116u), c.r[7].w[0]);
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 313u), static_cast<std::uint8_t>(0u));
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 312u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00354420:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22528u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[9], c.r[16].w[0] + 304u);  if (t) { goto L_00354450; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003545C8; } }
    c.budget -= 1;
L_00354450:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[7], c.r[28].w[0] - 27772u);
    set32(c.r[6], 0u + 2u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 3419u));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == c.r[6].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_00354540; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_003544D0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003544A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003545C8; } }
L_003544A0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 3418u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_003544B8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003545C8; } }
L_003544B8:
    set32(c.r[3], 0u + 15u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003545C8; } }
L_003544D0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 3418u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003544E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003545C8; } }
L_003544E8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003545C8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 3419u));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));  if (t) { goto L_003545C8; } }
    c.budget -= 1;
L_00354540:
    set32(c.r[8], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 4u);
    c.r[5].d[0] = ld8((c.r[8].w[0] + 3420u));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00354580; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u + 40u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].d[0] = ld8((c.r[9].w[0] + 9u));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003545C8; } }
L_00354580:
    c.r[2].d[0] = ld8((c.r[8].w[0] + 3419u));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003545A4u); st32((c.r[16].w[0] + 36u), c.f[0]);  if (depth < kMaxDepth) unit_0094(c, 435u, depth + 1u); else { c.pc = 0x00353270u; return; } if (c.pc != 0x003545A4u) [[unlikely]] return; }
L_003545A4:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 3418u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003545C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003545C8; } }
    c.budget -= 1;
L_003545C0:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003545C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003545E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22528u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[4].w[0] + 304u);  if (t) { goto L_00354608; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00354658; } }
L_00354608:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00354630; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], 0u + 2u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354628u); st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 435u, depth + 1u); else { c.pc = 0x00353270u; return; } if (c.pc != 0x00354628u) [[unlikely]] return; }
L_00354628:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00354658; } }
L_00354630:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 3418u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00354658; } }
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[6].w[0] + 9u), static_cast<std::uint8_t>(0u));
    st8((c.r[6].w[0] + 8u), static_cast<std::uint8_t>(0u));
    st8((c.r[6].w[0] + 10u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_00354658:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00354670:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 21152u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00354000u < 16384u) { entry = entries_0095[(t - 0x00354000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00354690:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[7], c.r[7].w[0] + 15856u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[3], 0u + 17u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 116u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003546E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 10u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00354728; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A60000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42F40000u);
    c.f[13] = c.r[2].w[0];
    c.f[12] = c.r[3].w[0];
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[14] = c.r[3].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354724u); set32(c.r[4], c.r[2].w[0] + 14479u);  if (depth < kMaxDepth) unit_0089(c, 122u, depth + 1u); else { c.pc = 0x00325650u; return; } if (c.pc != 0x00354724u) [[unlikely]] return; }
L_00354724:
    c.budget -= 1;
L_00354728:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00354740:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 21168u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00354000u < 16384u) { entry = entries_0095[(t - 0x00354000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00354760:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[6], c.r[6].w[0] + 15776u);
    set32(c.r[5], 0u + 12u);
    set32(c.r[3], 0u + 13u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003547A0; } }
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003547A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003547B0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003547C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 21184u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00354000u < 16384u) { entry = entries_0095[(t - 0x00354000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003547E0:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00330000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F590000u);
    set32(c.r[7], c.r[7].w[0] + 15776u);
    set32(c.r[6], 0u + 30u);
    c.r[5].d[0] = c.r[5].d[0] | 39322ull;
    set32(c.r[3], 0u + 10u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[7].w[0]);
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 116u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[5].w[0]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00354830:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22528u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00354850; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00354868; } }
L_00354850:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15544u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_00354868; } }
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00354868:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00354870:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00354880:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 21200u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00354000u < 16384u) { entry = entries_0095[(t - 0x00354000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003548A0:
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00330000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xC33A0000u);
    set32(c.r[9], c.r[9].w[0] + 15856u);
    set32(c.r[8], 0u + 7u);
    set32(c.r[7], 0u + 25u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0xC3420000u);
    c.r[5].d[0] = c.r[5].d[0] | 32768ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[10], c.r[10].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[9].w[0]);
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[4].w[0] + 32u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 36u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 116u), c.r[3].w[0]);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 112u), c.r[3].w[0]);  c.pc = t; return; }
L_003548F0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22528u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00354910; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00354948; } }
L_00354910:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15544u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);  if (t) { goto L_00354948; } }
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00354940; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00354948; } }
    c.budget -= 1;
L_00354940:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00354948:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00354950:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 21216u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00354000u < 16384u) { entry = entries_0095[(t - 0x00354000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00354970:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00330000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC33A0000u);
    set32(c.r[8], c.r[8].w[0] + 15856u);
    c.r[5].d[0] = c.r[3].d[0] | 32768ull;
    set32(c.r[7], 0u + 25u);
    set32(c.r[6], 0u + 7u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[8].w[0]);
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 116u), c.r[3].w[0]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 112u), c.r[3].w[0]);  c.pc = t; return; }
L_003549C0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22528u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003549E0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00354A08; } }
L_003549E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15544u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);  if (t) { goto L_00354A08; } }
    set32(c.r[3], 0u + 2u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00354A08; } }
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00354A08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00354A10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st8((c.r[28].w[0] - 22528u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 21336u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00354A40u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00354A40u) [[unlikely]] return; }
L_00354A40:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22528u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00354A50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st8((c.r[28].w[0] - 22528u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 21344u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00354A80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00354A80u) [[unlikely]] return; }
L_00354A80:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22528u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00354A90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st8((c.r[28].w[0] - 22528u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 21352u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00354AC0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00354AC0u) [[unlikely]] return; }
L_00354AC0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22528u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00354AD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st8((c.r[28].w[0] - 22528u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 21360u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00354B00u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00354B00u) [[unlikely]] return; }
L_00354B00:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22528u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00354B10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23088u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 516u)));
    c.r[3].d[0] = c.r[5].d[0] & 4ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[5].d[0] & 32ull;  if (t) { goto L_00354BC8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00354BC8; } }
    c.r[5].d[0] = ld8((c.r[4].w[0] + 2u));
    set32(c.r[6], 0u - 1u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[5].w[0] + 2597u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[5].w[0] + 9846u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 7u));
    c.budget -= 12;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_00354BC0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00354BB0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00354BA0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00354B88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00354BC8; } }
L_00354B88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354B90u);  if (depth < kMaxDepth) unit_0095(c, 179u, depth + 1u); else { c.pc = 0x00355E70u; return; } if (c.pc != 0x00354B90u) [[unlikely]] return; }
L_00354B90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354B98u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 19u, depth + 1u); else { c.pc = 0x003341C0u; return; } if (c.pc != 0x00354B98u) [[unlikely]] return; }
L_00354B98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00354BC8; } }
L_00354BA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354BA8u);  if (depth < kMaxDepth) unit_0095(c, 196u, depth + 1u); else { c.pc = 0x00355F40u; return; } if (c.pc != 0x00354BA8u) [[unlikely]] return; }
L_00354BA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00354BC8; } }
L_00354BB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354BB8u);  if (depth < kMaxDepth) unit_0095(c, 207u, depth + 1u); else { c.pc = 0x00355FD0u; return; } if (c.pc != 0x00354BB8u) [[unlikely]] return; }
L_00354BB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00354BC8; } }
L_00354BC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354BC8u);  if (depth < kMaxDepth) unit_0095(c, 216u, depth + 1u); else { c.pc = 0x00356050u; return; } if (c.pc != 0x00354BC8u) [[unlikely]] return; }
L_00354BC8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00354BE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23088u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 516u)));
    c.r[3].d[0] = c.r[5].d[0] & 4ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[5].d[0] & 32ull;  if (t) { goto L_00354C70; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00354C70; } }
    c.r[5].d[0] = ld8((c.r[4].w[0] + 2u));
    set32(c.r[3], 0u + 5u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[5].w[0] + 2597u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 7u));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 10u);  if (t) { goto L_00354C68; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00354C58; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00354C48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00354C70; } }
L_00354C48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354C50u);  if (depth < kMaxDepth) unit_0095(c, 229u, depth + 1u); else { c.pc = 0x00356100u; return; } if (c.pc != 0x00354C50u) [[unlikely]] return; }
L_00354C50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00354C70; } }
L_00354C58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354C60u);  if (depth < kMaxDepth) unit_0095(c, 242u, depth + 1u); else { c.pc = 0x003561C0u; return; } if (c.pc != 0x00354C60u) [[unlikely]] return; }
L_00354C60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00354C70; } }
L_00354C68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354C70u);  if (depth < kMaxDepth) unit_0095(c, 249u, depth + 1u); else { c.pc = 0x00356220u; return; } if (c.pc != 0x00354C70u) [[unlikely]] return; }
L_00354C70:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00354C80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 3u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00354CF8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00354CD8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00354CB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00354D18; } }
L_00354CB8:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354CCCu); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_008D(c, 83u, depth + 1u); else { c.pc = 0x00334FC0u; return; } if (c.pc != 0x00354CCCu) [[unlikely]] return; }
L_00354CCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00354D18; } }
    c.budget -= 1;
L_00354CD8:
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354CE4u); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0095(c, 249u, depth + 1u); else { c.pc = 0x00356220u; return; } if (c.pc != 0x00354CE4u) [[unlikely]] return; }
L_00354CE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354CECu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 19u, depth + 1u); else { c.pc = 0x003341C0u; return; } if (c.pc != 0x00354CECu) [[unlikely]] return; }
L_00354CEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00354D18; } }
    c.budget -= 1;
L_00354CF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354D00u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x00354D00u) [[unlikely]] return; }
L_00354D00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00354D18; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_00354D18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00354D30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[4].w[0] + 3u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00354EC8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00354E88; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00354D68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00354EF8; } }
L_00354D68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354D70u);  if (depth < kMaxDepth) unit_0089(c, 28u, depth + 1u); else { c.pc = 0x00324360u; return; } if (c.pc != 0x00354D70u) [[unlikely]] return; }
L_00354D70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 32u);  if (t) { goto L_00354EF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354D80u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x00354D80u) [[unlikely]] return; }
L_00354D80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00354DC0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], 0u + 30u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[3].w[0] + 2600u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354DB4u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x00354DB4u) [[unlikely]] return; }
L_00354DB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00354EF8; } }
    c.budget -= 1;
L_00354DC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354DC8u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x00354DC8u) [[unlikely]] return; }
L_00354DC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00354E08; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], 0u + 30u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 3u);
    st8((c.r[3].w[0] + 2600u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354DFCu); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x00354DFCu) [[unlikely]] return; }
L_00354DFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00354EF8; } }
    c.budget -= 1;
L_00354E08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354E10u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x00354E10u) [[unlikely]] return; }
L_00354E10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00354E48; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8u));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354E3Cu); st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x00354E3Cu) [[unlikely]] return; }
L_00354E3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00354EF8; } }
    c.budget -= 1;
L_00354E48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354E50u); set32(c.r[4], 0u + 128u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x00354E50u) [[unlikely]] return; }
L_00354E50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00354EF8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8u));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354E7Cu); st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x00354E7Cu) [[unlikely]] return; }
L_00354E7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00354EF8; } }
    c.budget -= 1;
L_00354E88:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00354EF8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 3u));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 16u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354EBCu); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 85u, depth + 1u); else { c.pc = 0x00335000u; return; } if (c.pc != 0x00354EBCu) [[unlikely]] return; }
L_00354EBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00354EF8; } }
    c.budget -= 1;
L_00354EC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354ED0u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x00354ED0u) [[unlikely]] return; }
L_00354ED0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00354EF8; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[3], 0u - 2u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[4].w[0] + 2600u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 22528u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_00354EF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00354F10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00354F20:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 3u));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003551F0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003551C8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00354F68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00355218; } }
L_00354F68:
    set32(c.r[2], ld32((c.r[28].w[0] - 23088u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 516u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + 1u);  if (t) { goto L_003551C8; } }
    set32(c.r[2], 0u + 7u);
    st8((c.r[20].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[20].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2597u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354F9Cu); st8((c.r[2].w[0] + 2598u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008D(c, 56u, depth + 1u); else { c.pc = 0x00334D40u; return; } if (c.pc != 0x00354F9Cu) [[unlikely]] return; }
L_00354F9C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 2416u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354FB0u); set32(c.r[6], 0u + 2400u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00354FB0u) [[unlikely]] return; }
L_00354FB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01030000u);
    c.r[18].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 61440ull;
    st32((c.r[28].w[0] - 22432u), c.r[2].w[0]);
    st8((c.r[20].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 22432u)));
    c.r[19].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 3300u)));
    c.budget -= 8;
L_00354FD0:
    set32(c.r[2], c.r[19].w[0] - 1u);
    c.r[19].d[0] = c.r[2].d[0] << 48;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[19].sd[0] >= 0;  if (t) { goto L_00354FE8; } }
    set32(c.r[19], 0u + 49u);
    c.budget -= 1;
L_00354FE8:
    set32(c.r[3], ld32((c.r[28].w[0] - 22432u)));
    c.r[16].d[0] = c.r[19].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] << 4);  if (t) { goto L_00355170; } }
    set32(c.r[17], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 400u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00355170; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355024u);  if (depth < kMaxDepth) unit_0095(c, 168u, depth + 1u); else { c.pc = 0x00355CD0u; return; } if (c.pc != 0x00355024u) [[unlikely]] return; }
L_00355024:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00355170; } }
    c.r[5].d[0] = ld8((c.r[20].w[0] + 20u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 22432u)));
    set32(c.r[16], c.r[16].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + 2416u);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[4].w[0] << 4);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355058u); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00355058u) [[unlikely]] return; }
L_00355058:
    c.r[5].d[0] = ld8((c.r[20].w[0] + 20u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 22432u)));
    set32(c.r[3], c.r[3].w[0] + 2416u);
    set32(c.r[6], 0u + 16u);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[5], c.r[2].w[0] + 400u);
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035508Cu); set32(c.r[4], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x0035508Cu) [[unlikely]] return; }
L_0035508C:
    set32(c.r[2], ld32((c.r[28].w[0] - 22432u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], c.r[4].w[0] + 17040u);
    set32(c.r[5], 0u + 50u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003550A4u); set32(c.r[6], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_008D(c, 108u, depth + 1u); else { c.pc = 0x00335380u; return; } if (c.pc != 0x003550A4u) [[unlikely]] return; }
L_003550A4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003550D8; } }
    c.r[4].d[0] = ld8((c.r[20].w[0] + 20u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], c.r[2].w[0] + 2416u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 24u), 0u);  if (t) { goto L_00355160; } }
    c.budget -= 1;
L_003550D8:
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[6], 0u + 16u);
    set32(c.r[4], c.r[2].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 22432u)));
    set32(c.r[3], c.r[3].w[0] + 17040u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355108u); set32(c.r[5], c.r[2].w[0] + 400u);  if (depth < kMaxDepth) unit_0007(c, 138u, depth + 1u); else { c.pc = 0x0011E108u; return; } if (c.pc != 0x00355108u) [[unlikely]] return; }
L_00355108:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00355138; } }
    c.r[4].d[0] = ld8((c.r[20].w[0] + 20u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], c.r[2].w[0] + 2416u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 24u), c.r[5].w[0]);  if (t) { goto L_00355160; } }
L_00355138:
    c.r[4].d[0] = ld8((c.r[20].w[0] + 20u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[2], c.r[2].w[0] + 2416u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 24u), c.r[5].w[0]);
    c.budget -= 10;
L_00355160:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 20u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[20].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00355170:
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.r[2].d[0] = c.r[18].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00354FD0u | kUnwind; return; } goto L_00354FD0; } }
    set32(c.r[5], 0u + 50u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355194u); set32(c.r[4], c.r[4].w[0] + 17040u);  if (depth < kMaxDepth) unit_008D(c, 106u, depth + 1u); else { c.pc = 0x00335330u; return; } if (c.pc != 0x00355194u) [[unlikely]] return; }
L_00355194:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003551A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 19u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003551B8; } }
L_003551A8:
    set32(c.r[3], 0u + 50u);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st8((c.r[20].w[0] + 19u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_003551B8:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003551C4u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_008D(c, 83u, depth + 1u); else { c.pc = 0x00334FC0u; return; } if (c.pc != 0x003551C4u) [[unlikely]] return; }
L_003551C4:
    c.budget -= 1;
L_003551C8:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 3u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003551DCu); st8((c.r[20].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0095(c, 261u, depth + 1u); else { c.pc = 0x003562C0u; return; } if (c.pc != 0x003551DCu) [[unlikely]] return; }
L_003551DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003551E4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 19u, depth + 1u); else { c.pc = 0x003341C0u; return; } if (c.pc != 0x003551E4u) [[unlikely]] return; }
L_003551E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00355218; } }
    c.budget -= 1;
L_003551F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003551F8u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x003551F8u) [[unlikely]] return; }
L_003551F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00355218; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[20].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[20].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st16((c.r[28].w[0] - 22520u), static_cast<std::uint16_t>(0u));
    st8((c.r[28].w[0] - 22524u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_00355218:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00355240:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355258u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0089(c, 28u, depth + 1u); else { c.pc = 0x00324360u; return; } if (c.pc != 0x00355258u) [[unlikely]] return; }
L_00355258:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003552E8; } }
    c.r[16].d[0] = ld8((c.r[17].w[0] + 20u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035526Cu); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x0035526Cu) [[unlikely]] return; }
L_0035526C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00355298; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 2u));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 3u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035528Cu); st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0035528Cu) [[unlikely]] return; }
L_0035528C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003552E8; } }
    c.budget -= 1;
L_00355298:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003552E8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], c.r[16].w[0] - 1u);
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[6], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003552B8u); set32(c.r[4], c.r[3].w[0] + 2597u);  if (depth < kMaxDepth) unit_008D(c, 20u, depth + 1u); else { c.pc = 0x003341D0u; return; } if (c.pc != 0x003552B8u) [[unlikely]] return; }
L_003552B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003552C0u);  if (depth < kMaxDepth) unit_0095(c, 134u, depth + 1u); else { c.pc = 0x00355730u; return; } if (c.pc != 0x003552C0u) [[unlikely]] return; }
L_003552C0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003552CCu); st8((c.r[3].w[0] + 2601u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0095(c, 135u, depth + 1u); else { c.pc = 0x00355790u; return; } if (c.pc != 0x003552CCu) [[unlikely]] return; }
L_003552CC:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st8((c.r[3].w[0] + 2602u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003552E8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003552E8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x003552E8u) [[unlikely]] return; }
L_003552E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00355300:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 3u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003554F0; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_003554A8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00355408; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003553D8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00355350; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00355540; } }
    c.budget -= 1;
L_00355350:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355358u);  if (depth < kMaxDepth) unit_0095(c, 172u, depth + 1u); else { c.pc = 0x00355D70u; return; } if (c.pc != 0x00355358u) [[unlikely]] return; }
L_00355358:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_003553C8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00355390; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00355380; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00355540; } }
    c.budget -= 1;
L_00355380:
    set32(c.r[3], 0u + 5u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00355540; } }
L_00355390:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], 0u + 15u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 3419u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003553BCu); set32(c.r[5], c.r[2].w[0] + 3419u);  if (depth < kMaxDepth) unit_009E(c, 38u, depth + 1u); else { c.pc = 0x00378B40u; return; } if (c.pc != 0x003553BCu) [[unlikely]] return; }
L_003553BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00355540; } }
    c.budget -= 1;
L_003553C8:
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00355540; } }
L_003553D8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00355540; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00355540; } }
    c.budget -= 1;
L_00355408:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355410u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x00355410u) [[unlikely]] return; }
L_00355410:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00355450; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], 0u + 30u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 3420u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355444u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x00355444u) [[unlikely]] return; }
L_00355444:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00355540; } }
    c.budget -= 1;
L_00355450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355458u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x00355458u) [[unlikely]] return; }
L_00355458:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00355488; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], 0u + 3u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355474u); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x00355474u) [[unlikely]] return; }
L_00355474:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355480u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x00355480u) [[unlikely]] return; }
L_00355480:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00355540; } }
L_00355488:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035549Cu); set32(c.r[4], c.r[2].w[0] + 3419u);  if (depth < kMaxDepth) unit_008D(c, 20u, depth + 1u); else { c.pc = 0x003341D0u; return; } if (c.pc != 0x0035549Cu) [[unlikely]] return; }
L_0035549C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00355540; } }
    c.budget -= 1;
L_003554A8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00355540; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], 0u + 15u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 3420u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003554E4u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x003554E4u) [[unlikely]] return; }
L_003554E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00355540; } }
    c.budget -= 1;
L_003554F0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00355540; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 3419u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00355530; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00355540; } }
L_00355530:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_00355540:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00355550:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 20u));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003555D0; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[16], c.r[16].w[0] + 2416u);
    c.budget -= 2;
L_00355588:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);  if (t) { goto L_003555B8; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 17040u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003555A4u); set32(c.r[6], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_00A8(c, 264u, depth + 1u); else { c.pc = 0x003A2160u; return; } if (c.pc != 0x003555A4u) [[unlikely]] return; }
L_003555A4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003555B8; } }
    set32(c.r[17], 0u + 1u);
    c.budget -= 2;
L_003555B8:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 20u));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00355588u | kUnwind; return; } goto L_00355588; } }
    c.budget -= 1;
L_003555D0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00355600; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003555ECu); st8((c.r[2].w[0] + 2528u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008D(c, 111u, depth + 1u); else { c.pc = 0x00335410u; return; } if (c.pc != 0x003555ECu) [[unlikely]] return; }
L_003555EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003555F4u);  if (depth < kMaxDepth) unit_008D(c, 54u, depth + 1u); else { c.pc = 0x00334D00u; return; } if (c.pc != 0x003555F4u) [[unlikely]] return; }
L_003555F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00355610; } }
    c.budget -= 1;
L_00355600:
    set32(c.r[3], 0u + 5u);
    st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[19].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_00355610:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00355630:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355644u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 114u, depth + 1u); else { c.pc = 0x00335440u; return; } if (c.pc != 0x00355644u) [[unlikely]] return; }
L_00355644:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00355680; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], 0u + 5u);
    st8((c.r[4].w[0] + 2528u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00355678; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355670u);  if (depth < kMaxDepth) unit_008D(c, 56u, depth + 1u); else { c.pc = 0x00334D40u; return; } if (c.pc != 0x00355670u) [[unlikely]] return; }
L_00355670:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00355680; } }
L_00355678:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355680u);  if (depth < kMaxDepth) unit_008D(c, 55u, depth + 1u); else { c.pc = 0x00334D20u; return; } if (c.pc != 0x00355680u) [[unlikely]] return; }
L_00355680:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00355690:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 3u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00355708; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_003556E0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003556C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00355718; } }
L_003556C8:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003556D8u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_008D(c, 85u, depth + 1u); else { c.pc = 0x00335000u; return; } if (c.pc != 0x003556D8u) [[unlikely]] return; }
L_003556D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00355718; } }
L_003556E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003556E8u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x003556E8u) [[unlikely]] return; }
L_003556E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00355718; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355700u); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x00355700u) [[unlikely]] return; }
L_00355700:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00355718; } }
L_00355708:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 2528u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[28].w[0] - 22528u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_00355718:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00355730:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2598u));
    set32(c.r[4], c.r[3].w[0] + 2598u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2597u));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00355758; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00355780; } }
L_00355758:
    set32(c.r[2], c.r[2].w[0] + 12u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00355778; } }
    set32(c.r[3], c.r[3].w[0] - 11u);
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00355780; } }
L_00355778:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00355780:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00355790:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 2440u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2597u));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st8((c.r[5].w[0] + 2599u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 2599u));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003557E0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00355920; } }
    c.budget -= 1;
L_003557E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003557E8u); set32(c.r[4], 0u + 2048u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x003557E8u) [[unlikely]] return; }
L_003557E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00355820; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2599u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 2599u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_00355870; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 2599u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00355870; } }
    c.budget -= 1;
L_00355820:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355828u); set32(c.r[4], 0u + 1024u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x00355828u) [[unlikely]] return; }
L_00355828:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00355868; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2599u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[3].w[0] + 2599u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[16], 0u + 2u);  if (t) { goto L_00355870; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 2599u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00355870; } }
    c.budget -= 1;
L_00355868:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00355870:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00355928; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2599u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003558C0; } }
    c.r[4].d[0] = ld8((c.r[4].w[0] + 2597u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], c.r[2].w[0] + 2440u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 15555u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 15555u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00355928; } }
L_003558C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15555u));
    c.r[2].d[0] = c.r[3].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[2], c.r[3].w[0] - 1u);  if (t) { goto L_00355908; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 15555u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 2597u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], c.r[2].w[0] + 2440u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[5].w[0]);  if (t) { goto L_00355928; } }
L_00355908:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355914u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x00355914u) [[unlikely]] return; }
L_00355914:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00355928; } }
    c.budget -= 1;
L_00355920:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00355928:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00355940:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003559D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355980u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x00355980u) [[unlikely]] return; }
L_00355980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355988u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00355988u) [[unlikely]] return; }
L_00355988:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43680000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43580000u);
    c.f[12] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.f[13] = c.r[3].w[0];
    set32(c.r[2], ld32((c.r[1].w[0] - 2892u)));
    c.f[14] = 0u;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003559ACu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x003559ACu) [[unlikely]] return; }
L_003559AC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43E00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003559CCu); set32(c.r[4], c.r[4].w[0] + 6576u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x003559CCu) [[unlikely]] return; }
L_003559CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00355B60; } }
    c.budget -= 1;
L_003559D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003559E0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x003559E0u) [[unlikely]] return; }
L_003559E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003559F0u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x003559F0u) [[unlikely]] return; }
L_003559F0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 22520u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[28].w[0] - 22520u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].sd[0] < 120ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00355A30; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 22524u));
    st16((c.r[28].w[0] - 22520u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[28].w[0] - 22524u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 22524u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    st8((c.r[28].w[0] - 22524u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
L_00355A30:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 22524u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x43E40000u);  if (t) { goto L_00355A98; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.f[12] = c.r[2].w[0];
    c.f[21] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[1].w[0] - 2884u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355A60u); c.f[14] = c.f[21];  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x00355A60u) [[unlikely]] return; }
L_00355A60:
    c.r[6].d[0] = ld8((c.r[16].w[0] + 20u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355A74u); set32(c.r[5], c.r[5].w[0] + 6592u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x00355A74u) [[unlikely]] return; }
L_00355A74:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44080000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[12] = c.r[3].w[0];
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355A90u); c.f[14] = c.f[21];  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x00355A90u) [[unlikely]] return; }
L_00355A90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00355AC0; } }
L_00355A98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43E00000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.f[21] = 0u;
    set32(c.r[4], c.r[4].w[0] + 6576u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355ABCu); c.f[14] = c.f[21];  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x00355ABCu) [[unlikely]] return; }
L_00355ABC:
    c.budget -= 1;
L_00355AC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355AC8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00355AC8u) [[unlikely]] return; }
L_00355AC8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 19u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x43470000u);  if (t) { goto L_00355B30; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43CA0000u);
    c.f[12] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.f[13] = c.r[3].w[0];
    set32(c.r[2], ld32((c.r[1].w[0] - 2880u)));
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355AF4u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x00355AF4u) [[unlikely]] return; }
L_00355AF4:
    c.r[6].d[0] = ld8((c.r[16].w[0] + 19u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355B08u); set32(c.r[5], c.r[5].w[0] + 6592u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x00355B08u) [[unlikely]] return; }
L_00355B08:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43840000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43CA0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355B28u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x00355B28u) [[unlikely]] return; }
L_00355B28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00355B60; } }
L_00355B30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355B38u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00355B38u) [[unlikely]] return; }
L_00355B38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43260000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43CA0000u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[1].w[0] - 2876u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355B5Cu); c.f[14] = c.f[21];  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x00355B5Cu) [[unlikely]] return; }
L_00355B5C:
    c.budget -= 1;
L_00355B60:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00355CA0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[19].d[0] = c.r[3].d[0] & 255ull;
    c.r[1].d[0] = c.r[19].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = ld8((c.r[2].w[0] + 2598u));  if (t) { goto L_00355B88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = c.f[20];  if (t) { goto L_00355B90; } }
L_00355B88:
    set32(c.r[19], 0u + 12u);
    c.f[12] = c.f[20];
    c.budget -= 2;
L_00355B90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355B98u);  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x00355B98u) [[unlikely]] return; }
L_00355B98:
    c.r[1].d[0] = 0ll < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00355CA0; } }
    set32(c.r[2], c.r[20].w[0] << 1);
    set32(c.r[17], 0u + 96u);
    set32(c.r[3], c.r[2].w[0] + c.r[20].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 2416u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
L_00355BC0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[6], c.r[20].w[0] + 1u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355BD4u); set32(c.r[5], c.r[5].w[0] + 6592u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x00355BD4u) [[unlikely]] return; }
L_00355BD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355BDCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00355BDCu) [[unlikely]] return; }
L_00355BDC:
    c.f[0] = c.r[17].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42300000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355BF8u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x00355BF8u) [[unlikely]] return; }
L_00355BF8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355C04u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0099(c, 26u, depth + 1u); else { c.pc = 0x00364550u; return; } if (c.pc != 0x00355C04u) [[unlikely]] return; }
L_00355C04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355C0Cu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00355C0Cu) [[unlikely]] return; }
L_00355C0C:
    c.f[0] = c.r[17].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A80000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355C28u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x00355C28u) [[unlikely]] return; }
L_00355C28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355C30u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00355C30u) [[unlikely]] return; }
L_00355C30:
    c.f[0] = c.r[17].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43720000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355C4Cu); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x00355C4Cu) [[unlikely]] return; }
L_00355C4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355C54u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00355C54u) [[unlikely]] return; }
L_00355C54:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43F80000u);
    c.f[12] = c.r[2].w[0];
    c.f[0] = c.r[17].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] - 3200u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.f[14] = 0u;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355C84u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x00355C84u) [[unlikely]] return; }
L_00355C84:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 24u);
    c.r[3].d[0] = c.r[18].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    set32(c.r[16], c.r[16].w[0] + 48u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00355BC0u | kUnwind; return; } goto L_00355BC0; } }
    c.budget -= 1;
L_00355CA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00355CD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[16], c.r[16].w[0] + 2416u);
    c.budget -= 10;
L_00355CF8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355D08u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0007(c, 138u, depth + 1u); else { c.pc = 0x0011E108u; return; } if (c.pc != 0x00355D08u) [[unlikely]] return; }
L_00355D08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00355D18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00355D50; } }
L_00355D18:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355D28u); set32(c.r[4], c.r[2].w[0] + 560u);  if (depth < kMaxDepth) unit_0007(c, 117u, depth + 1u); else { c.pc = 0x0011DB40u; return; } if (c.pc != 0x00355D28u) [[unlikely]] return; }
L_00355D28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00355D38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00355D50; } }
L_00355D38:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00355CF8u | kUnwind; return; } goto L_00355CF8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00355D50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00355D70:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + 2416u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
L_00355D88:
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00355DA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00355DC8; } }
    c.budget -= 1;
L_00355DA0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00355DB0; } }
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_00355DB0:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00355D88u | kUnwind; return; } goto L_00355D88; } }
    set32(c.r[2], 0u + 2u);
    if (c.r[6].d[0] == 0) c.r[2].d[0] = 0ull;
    c.budget -= 2;
L_00355DC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00355DD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.f[12] = c.r[2].w[0];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355DE8u);  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x00355DE8u) [[unlikely]] return; }
L_00355DE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355DF0u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00355DF0u) [[unlikely]] return; }
L_00355DF0:
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8144u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x41E00000u);  if (t) { goto L_00355E28; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x439F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355E1Cu); set32(c.r[4], c.r[4].w[0] + 6608u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x00355E1Cu) [[unlikely]] return; }
L_00355E1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00355E60; } }
    c.budget -= 1;
L_00355E28:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 9846u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_00355E60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x439F0000u);
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] - 2944u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355E60u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x00355E60u) [[unlikely]] return; }
L_00355E60:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00355E70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355E84u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x00355E84u) [[unlikely]] return; }
L_00355E84:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355E90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x00355E90u) [[unlikely]] return; }
L_00355E90:
    set32(c.r[4], 0u + 30u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355E9Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x00355E9Cu) [[unlikely]] return; }
L_00355E9C:
    set32(c.r[4], 0u + 31u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355EA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x00355EA8u) [[unlikely]] return; }
L_00355EA8:
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355EB4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x00355EB4u) [[unlikely]] return; }
L_00355EB4:
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355EC0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x00355EC0u) [[unlikely]] return; }
L_00355EC0:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355ECCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x00355ECCu) [[unlikely]] return; }
L_00355ECC:
    set32(c.r[4], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355ED8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x00355ED8u) [[unlikely]] return; }
L_00355ED8:
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355EE4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x00355EE4u) [[unlikely]] return; }
L_00355EE4:
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355EF0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x00355EF0u) [[unlikely]] return; }
L_00355EF0:
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355EFCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x00355EFCu) [[unlikely]] return; }
L_00355EFC:
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355F08u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x00355F08u) [[unlikely]] return; }
L_00355F08:
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355F14u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x00355F14u) [[unlikely]] return; }
L_00355F14:
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355F20u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x00355F20u) [[unlikely]] return; }
L_00355F20:
    set32(c.r[4], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355F2Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x00355F2Cu) [[unlikely]] return; }
L_00355F2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355F34u);  if (depth < kMaxDepth) unit_0095(c, 272u, depth + 1u); else { c.pc = 0x00356350u; return; } if (c.pc != 0x00355F34u) [[unlikely]] return; }
L_00355F34:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00355F40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 10u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355F54u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x00355F54u) [[unlikely]] return; }
L_00355F54:
    set32(c.r[4], 0u + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355F60u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x00355F60u) [[unlikely]] return; }
L_00355F60:
    set32(c.r[4], 0u + 11u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355F6Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x00355F6Cu) [[unlikely]] return; }
L_00355F6C:
    set32(c.r[4], 0u + 25u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355F78u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x00355F78u) [[unlikely]] return; }
L_00355F78:
    set32(c.r[4], 0u + 25u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355F84u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x00355F84u) [[unlikely]] return; }
L_00355F84:
    set32(c.r[4], 0u + 25u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355F90u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x00355F90u) [[unlikely]] return; }
L_00355F90:
    set32(c.r[4], 0u + 25u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355F9Cu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x00355F9Cu) [[unlikely]] return; }
L_00355F9C:
    set32(c.r[4], 0u + 25u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355FA8u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x00355FA8u) [[unlikely]] return; }
L_00355FA8:
    set32(c.r[4], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355FB4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x00355FB4u) [[unlikely]] return; }
L_00355FB4:
    set32(c.r[4], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355FC0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x00355FC0u) [[unlikely]] return; }
L_00355FC0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00355FD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 13u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355FE4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x00355FE4u) [[unlikely]] return; }
L_00355FE4:
    set32(c.r[4], 0u + 13u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355FF0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x00355FF0u) [[unlikely]] return; }
L_00355FF0:
    set32(c.r[4], 0u + 13u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355FFCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x00355FFCu) [[unlikely]] return; }
L_00355FFC:
    set32(c.r[4], 0u + 14u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356008u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x00356008u) [[unlikely]] return; }
L_00356008:
    set32(c.r[4], 0u + 15u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356014u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x00356014u) [[unlikely]] return; }
L_00356014:
    set32(c.r[4], 0u + 15u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356020u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x00356020u) [[unlikely]] return; }
L_00356020:
    set32(c.r[4], 0u + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035602Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x0035602Cu) [[unlikely]] return; }
L_0035602C:
    set32(c.r[4], 0u + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356038u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x00356038u) [[unlikely]] return; }
L_00356038:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00356050:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 21u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356064u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x00356064u) [[unlikely]] return; }
L_00356064:
    set32(c.r[4], 0u + 21u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356070u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x00356070u) [[unlikely]] return; }
L_00356070:
    set32(c.r[4], 0u + 22u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035607Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x0035607Cu) [[unlikely]] return; }
L_0035607C:
    set32(c.r[4], 0u + 22u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356088u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x00356088u) [[unlikely]] return; }
L_00356088:
    set32(c.r[4], 0u + 22u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356094u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x00356094u) [[unlikely]] return; }
L_00356094:
    set32(c.r[4], 0u + 23u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003560A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x003560A0u) [[unlikely]] return; }
L_003560A0:
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003560ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x003560ACu) [[unlikely]] return; }
L_003560AC:
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003560B8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x003560B8u) [[unlikely]] return; }
L_003560B8:
    set32(c.r[4], 0u + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003560C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x003560C4u) [[unlikely]] return; }
L_003560C4:
    set32(c.r[4], 0u + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003560D0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x003560D0u) [[unlikely]] return; }
L_003560D0:
    set32(c.r[4], 0u + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003560DCu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x003560DCu) [[unlikely]] return; }
L_003560DC:
    set32(c.r[4], 0u + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003560E8u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x003560E8u) [[unlikely]] return; }
L_003560E8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00356100:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 16u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356118u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x00356118u) [[unlikely]] return; }
L_00356118:
    set32(c.r[4], 0u + 30u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356124u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x00356124u) [[unlikely]] return; }
L_00356124:
    set32(c.r[4], 0u + 31u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356130u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x00356130u) [[unlikely]] return; }
L_00356130:
    set32(c.r[4], 0u + 17u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035613Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x0035613Cu) [[unlikely]] return; }
L_0035613C:
    set32(c.r[4], 0u + 17u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356148u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x00356148u) [[unlikely]] return; }
L_00356148:
    set32(c.r[4], 0u + 18u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356154u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x00356154u) [[unlikely]] return; }
L_00356154:
    set32(c.r[4], 0u + 19u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356160u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x00356160u) [[unlikely]] return; }
L_00356160:
    set32(c.r[4], 0u + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035616Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x0035616Cu) [[unlikely]] return; }
L_0035616C:
    set32(c.r[4], 0u + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356178u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x00356178u) [[unlikely]] return; }
L_00356178:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00356180:
    set32(c.r[4], 0u + 43u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035618Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x0035618Cu) [[unlikely]] return; }
L_0035618C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00356180u | kUnwind; return; } goto L_00356180; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003561A4u);  if (depth < kMaxDepth) unit_0095(c, 272u, depth + 1u); else { c.pc = 0x00356350u; return; } if (c.pc != 0x003561A4u) [[unlikely]] return; }
L_003561A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003561C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 29u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003561D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x003561D4u) [[unlikely]] return; }
L_003561D4:
    set32(c.r[4], 0u + 30u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003561E0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x003561E0u) [[unlikely]] return; }
L_003561E0:
    set32(c.r[4], 0u + 31u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003561ECu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x003561ECu) [[unlikely]] return; }
L_003561EC:
    set32(c.r[4], 0u + 41u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003561F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x003561F8u) [[unlikely]] return; }
L_003561F8:
    set32(c.r[4], 0u + 42u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356204u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x00356204u) [[unlikely]] return; }
L_00356204:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035620Cu);  if (depth < kMaxDepth) unit_0095(c, 272u, depth + 1u); else { c.pc = 0x00356350u; return; } if (c.pc != 0x0035620Cu) [[unlikely]] return; }
L_0035620C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00356220:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 33u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356234u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x00356234u) [[unlikely]] return; }
L_00356234:
    set32(c.r[4], 0u + 33u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356240u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x00356240u) [[unlikely]] return; }
L_00356240:
    set32(c.r[4], 0u + 33u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035624Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x0035624Cu) [[unlikely]] return; }
L_0035624C:
    set32(c.r[4], 0u + 33u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356258u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x00356258u) [[unlikely]] return; }
L_00356258:
    set32(c.r[4], 0u + 33u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356264u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x00356264u) [[unlikely]] return; }
L_00356264:
    set32(c.r[4], 0u + 34u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356270u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x00356270u) [[unlikely]] return; }
L_00356270:
    set32(c.r[4], 0u + 37u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035627Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x0035627Cu) [[unlikely]] return; }
L_0035627C:
    set32(c.r[4], 0u + 37u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356288u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x00356288u) [[unlikely]] return; }
L_00356288:
    set32(c.r[4], 0u + 37u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356294u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x00356294u) [[unlikely]] return; }
L_00356294:
    set32(c.r[4], 0u + 37u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003562A0u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x003562A0u) [[unlikely]] return; }
L_003562A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003562A8u);  if (depth < kMaxDepth) unit_0095(c, 272u, depth + 1u); else { c.pc = 0x00356350u; return; } if (c.pc != 0x003562A8u) [[unlikely]] return; }
L_003562A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003562C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 35u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003562D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x003562D4u) [[unlikely]] return; }
L_003562D4:
    set32(c.r[4], 0u + 35u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003562E0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x003562E0u) [[unlikely]] return; }
L_003562E0:
    set32(c.r[4], 0u + 35u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003562ECu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x003562ECu) [[unlikely]] return; }
L_003562EC:
    set32(c.r[4], 0u + 38u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003562F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x003562F8u) [[unlikely]] return; }
L_003562F8:
    set32(c.r[4], 0u + 39u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356304u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x00356304u) [[unlikely]] return; }
L_00356304:
    set32(c.r[4], 0u + 39u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356310u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x00356310u) [[unlikely]] return; }
L_00356310:
    set32(c.r[4], 0u + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035631Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x0035631Cu) [[unlikely]] return; }
L_0035631C:
    set32(c.r[4], 0u + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356328u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x00356328u) [[unlikely]] return; }
L_00356328:
    set32(c.r[4], 0u + 26u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356334u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x00356334u) [[unlikely]] return; }
L_00356334:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035633Cu);  if (depth < kMaxDepth) unit_0095(c, 272u, depth + 1u); else { c.pc = 0x00356350u; return; } if (c.pc != 0x0035633Cu) [[unlikely]] return; }
L_0035633C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00356350:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 10363u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 44u);  if (t) { goto L_00356370; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356370u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 278u, depth + 1u); else { c.pc = 0x003564A0u; return; } if (c.pc != 0x00356370u) [[unlikely]] return; }
L_00356370:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00356380:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], 0u + 45u);
    c.budget -= 6;
    { st8((c.r[2].w[0] + 3424u), static_cast<std::uint8_t>(c.r[3].w[0]));  goto L_003564A0; }
L_003563A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23088u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 516u)));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00356490; } }
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003563D0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x003563D0u) [[unlikely]] return; }
L_003563D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00356420; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00360000u);
    set32(c.r[6], 0u + 20u);
    set32(c.r[5], 0u + 27u);
    set32(c.r[4], 0u + 9u);
    set32(c.r[3], c.r[3].w[0] - 28928u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23088u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 464u)));
    st32((c.r[2].w[0] + 304u), c.r[3].w[0]);
    c.budget -= 18;
L_00356420:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00356490; } }
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356438u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x00356438u) [[unlikely]] return; }
L_00356438:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00356490; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00360000u);
    set32(c.r[7], 0u + 20u);
    set32(c.r[6], 0u + 28u);
    set32(c.r[5], 0u + 9u);
    set32(c.r[4], 0u + 17u);
    set32(c.r[3], c.r[3].w[0] - 28160u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[2].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23088u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 212u)));
    st32((c.r[2].w[0] + 304u), c.r[3].w[0]);
    c.budget -= 20;
L_00356490:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003564A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003564C8u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x003564C8u) [[unlikely]] return; }
L_003564C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00356520; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 21392u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], 0u + 20u);
    set32(c.r[4], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23088u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 212u)));
    st32((c.r[2].w[0] + 304u), c.r[3].w[0]);
    c.budget -= 20;
L_00356520:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00356540:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_00356550:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 21584u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00354000u < 16384u) { entry = entries_0095[(t - 0x00354000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00356570:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[6], c.r[6].w[0] + 15776u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], 0u + 11u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003565A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003565D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003565C8u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x003565C8u) [[unlikely]] return; }
L_003565C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003566A8; } }
L_003565D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 16012u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003565E8u); set32(c.r[16], c.r[3].w[0] - 1u);  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x003565E8u) [[unlikely]] return; }
L_003565E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003565F0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x003565F0u) [[unlikely]] return; }
L_003565F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[13] = c.r[2].w[0];
    c.f[12] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 21232u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[14] = 0u;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035661Cu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x0035661Cu) [[unlikely]] return; }
L_0035661C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035662Cu);  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x0035662Cu) [[unlikely]] return; }
L_0035662C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356634u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00356634u) [[unlikely]] return; }
L_00356634:
    set32(c.r[2], 0u + 346u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + 4930u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + 4934u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld16((c.r[3].w[0]));
    c.r[7].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035666Cu); set32(c.r[5], c.r[5].w[0] + 6656u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0035666Cu) [[unlikely]] return; }
L_0035666C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x421C0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356688u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x00356688u) [[unlikely]] return; }
L_00356688:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356690u);  if (depth < kMaxDepth) unit_00A2(c, 384u, depth + 1u); else { c.pc = 0x0038B880u; return; } if (c.pc != 0x00356690u) [[unlikely]] return; }
L_00356690:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356698u);  if (depth < kMaxDepth) unit_0095(c, 174u, depth + 1u); else { c.pc = 0x00355DD0u; return; } if (c.pc != 0x00356698u) [[unlikely]] return; }
L_00356698:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003566A0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_009E(c, 196u, depth + 1u); else { c.pc = 0x0037ADE0u; return; } if (c.pc != 0x003566A0u) [[unlikely]] return; }
L_003566A0:
    set32(c.r[3], 0u + 2u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003566A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003566C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003566D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 21600u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00354000u < 16384u) { entry = entries_0095[(t - 0x00354000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003566F0:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[6], c.r[6].w[0] + 15776u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[3], 0u + 11u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00356720:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00356748; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356740u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x00356740u) [[unlikely]] return; }
L_00356740:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00356760; } }
L_00356748:
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 2u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3417u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00356760; } }
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00356760:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00356770:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 21616u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00354000u < 16384u) { entry = entries_0095[(t - 0x00354000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00356790:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[6], c.r[6].w[0] + 15776u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[3], 0u + 9u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003567C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 21632u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00354000u < 16384u) { entry = entries_0095[(t - 0x00354000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003567E0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00330000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3360000u);
    set32(c.r[5], c.r[5].w[0] + 16096u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2597u));
    c.budget -= 14;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[7], c.r[4].w[0] + 304u);  if (t) { goto L_00356824; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00356840; } }
L_00356824:
    set32(c.r[5], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 7;
L_00356840:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x42340000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC30E0000u);
    c.f[1] = c.r[5].w[0];
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[0] = c.r[3].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    set32(c.r[5], 0u + 9u);
    set32(c.r[3], 0u + 11u);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 36u), c.f[0]);
    st32((c.r[4].w[0] + 116u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[6].w[0]);
    st8((c.r[7].w[0] + 6u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[7].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[7].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[7].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[7].w[0] + 9u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00356890:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_003568C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003568BCu);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x003568BCu) [[unlikely]] return; }
L_003568BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00356980; } }
    c.budget -= 1;
L_003568C8:
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 2u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3417u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00356980; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003568E4u);  if (depth < kMaxDepth) unit_0094(c, 435u, depth + 1u); else { c.pc = 0x00353270u; return; } if (c.pc != 0x003568E4u) [[unlikely]] return; }
L_003568E4:
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 2u);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 2597u));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x42340000u);  if (t) { goto L_00356948; } }
    c.f[1] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0; set32(c.r[4], c.r[5].w[0] >> 1);  if (t) { goto L_00356910; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00356928; } }
L_00356910:
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_00356928:
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC30E0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.budget -= 8;
L_00356948:
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 2600u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00356978; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[4], 0u + 30u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_00356978:
    set32(c.r[3], 0u + 2u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00356980:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003569A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[16].w[0] + 304u);  if (t) { goto L_003569D8; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003569C8u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 435u, depth + 1u); else { c.pc = 0x00353270u; return; } if (c.pc != 0x003569C8u) [[unlikely]] return; }
L_003569C8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00356A10; } }
    c.budget -= 1;
L_003569D8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2600u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00356A00; } }
    st8((c.r[5].w[0] + 9u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 1u);
    st8((c.r[5].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00356A08; } }
L_00356A00:
    set32(c.r[3], 0u + 77u);
    st8((c.r[5].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00356A08:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00356A10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00356A20:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 21648u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00354000u < 16384u) { entry = entries_0095[(t - 0x00354000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00356A40:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00330000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42AE0000u);
    set32(c.r[7], c.r[7].w[0] + 15856u);
    c.f[1] = c.r[3].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0xC33C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC23C0000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[3], 0u + 11u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[7].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.f[2] = c.r[7].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 32u), c.f[0]);
    st32((c.r[4].w[0] + 36u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 116u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[5], c.r[5].w[0] + 4u);
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 29;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00356AC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00356AF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356AECu);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x00356AECu) [[unlikely]] return; }
L_00356AEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00356BA0; } }
    c.budget -= 1;
L_00356AF8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.f[12] = c.r[2].w[0];
    c.r[3].d[0] = ld8((c.r[1].w[0] + 16012u));
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[16], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356B2Cu); set32(c.r[17], c.r[2].w[0] + 290u);  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x00356B2Cu) [[unlikely]] return; }
L_00356B2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356B34u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00356B34u) [[unlikely]] return; }
L_00356B34:
    c.r[4].d[0] = c.r[17].d[0] << 48;
    set32(c.r[5], 0u + 398u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356B44u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_00AA(c, 46u, depth + 1u); else { c.pc = 0x003A8720u; return; } if (c.pc != 0x00356B44u) [[unlikely]] return; }
L_00356B44:
    set32(c.r[2], 0u + 346u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[2], c.r[2].w[0] + 4944u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356B78u); set32(c.r[5], c.r[5].w[0] + 6680u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x00356B78u) [[unlikely]] return; }
L_00356B78:
    c.f[0] = c.r[17].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C70000u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356B94u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x00356B94u) [[unlikely]] return; }
L_00356B94:
    set32(c.r[3], 0u + 2u);
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00356BA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00356BC0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 21664u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00354000u < 16384u) { entry = entries_0095[(t - 0x00354000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00356BE0:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00330000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F330000u);
    set32(c.r[6], c.r[6].w[0] + 15648u);
    c.r[5].d[0] = c.r[3].d[0] | 13107ull;
    set32(c.r[3], 0u + 12u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 116u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[5].w[0]);
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + 6u);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00356C30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00356C58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356C50u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x00356C50u) [[unlikely]] return; }
L_00356C50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00356DC0; } }
L_00356C58:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00356D78; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_00356D48; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_00356CE8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00356C88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00356DC0; } }
L_00356C88:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3417u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[3], c.r[6].w[0] + 1u);  if (t) { goto L_00356DC0; } }
    set32(c.r[5], 0u + 15u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3EB30000u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = c.r[3].d[0] | 13107ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F260000u);
    st32((c.r[4].w[0] + 116u), c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 26214ull;
    st32((c.r[4].w[0] + 112u), c.r[5].w[0]);
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 52u), c.f[0]);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 48u), c.f[0]);  if (t) { goto L_00356DC0; } }
    c.budget -= 1;
L_00356CE8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00356D20; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 48u));
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 52u));
    c.f[0] = ld32((c.r[4].w[0] + 116u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 116u), c.f[0]);  if (t) { goto L_00356D38; } }
L_00356D20:
    set32(c.r[3], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 116u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[3].w[0]);
    c.budget -= 6;
L_00356D38:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00356DC0; } }
    c.budget -= 1;
L_00356D48:
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3417u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[5], c.r[6].w[0] + 1u);  if (t) { goto L_00356D68; } }
    set32(c.r[3], 0u + 15u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00356D68:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00356DC0; } }
    c.budget -= 1;
L_00356D78:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[3].w[0] - 1u);  if (t) { goto L_00356DB8; } }
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[3], 0u + 2u);
    c.f[1] = ld32((c.r[4].w[0] + 48u));
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 52u));
    c.f[0] = ld32((c.r[4].w[0] + 116u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 116u), c.f[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00356DC0; } }
    c.budget -= 1;
L_00356DB8:
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00356DC0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00356DD0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 21680u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00354000u < 16384u) { entry = entries_0095[(t - 0x00354000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00356DF0:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[8], c.r[8].w[0] + 15648u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0xC1C80000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 8u);
    set32(c.r[3], 0u + 11u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 116u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00356E40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00356E70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356E64u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x00356E64u) [[unlikely]] return; }
L_00356E64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00356FF0; } }
    c.budget -= 1;
L_00356E70:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00356FA0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_00356F18; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_00356EE8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00356EA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00356FF0; } }
L_00356EA0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3417u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00356FF0; } }
    set32(c.r[4], c.r[5].w[0] + 1u);
    set32(c.r[3], 0u + 15u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2598u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x42DC0000u);  if (t) { goto L_00356ED8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 32u), c.r[3].w[0]);  if (t) { goto L_00356FF0; } }
L_00356ED8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2DC0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 32u), c.r[3].w[0]);  if (t) { goto L_00356FF0; } }
    c.budget -= 1;
L_00356EE8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00356FF0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00356FF0; } }
L_00356F18:
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3417u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00356F78; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2598u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x42DC0000u);  if (t) { goto L_00356F40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 32u), c.r[3].w[0]);  if (t) { goto L_00356F48; } }
L_00356F40:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2DC0000u);
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 2;
L_00356F48:
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 2600u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00356F70; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
L_00356F70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00356F80; } }
L_00356F78:
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00356F80:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00356FF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356F90u);  if (depth < kMaxDepth) unit_0094(c, 435u, depth + 1u); else { c.pc = 0x00353270u; return; } if (c.pc != 0x00356F90u) [[unlikely]] return; }
L_00356F90:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00356FF0; } }
    c.budget -= 1;
L_00356FA0:
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3417u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00356FC0; } }
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00356FE0; } }
L_00356FC0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00356FD8; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356FD8u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 435u, depth + 1u); else { c.pc = 0x00353270u; return; } if (c.pc != 0x00356FD8u) [[unlikely]] return; }
L_00356FD8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 2;
L_00356FE0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00356FF0; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00356FF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00357000:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 21696u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00354000u < 16384u) { entry = entries_0095[(t - 0x00354000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00357020:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00330000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[6], c.r[6].w[0] + 15776u);
    set32(c.r[5], c.r[5].w[0] + 21712u);
    set32(c.r[3], c.r[3].w[0] + 21713u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[5].d[0] = ld8((c.r[5].w[0]));
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00357070:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00357098; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357090u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x00357090u) [[unlikely]] return; }
L_00357090:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003570B0; } }
L_00357098:
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 2u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3417u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_003570B0; } }
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_003570B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003570C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 21728u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00354000u < 16384u) { entry = entries_0095[(t - 0x00354000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003570E0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[3], c.r[3].w[0] + 16096u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2597u));
    c.budget -= 11;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[8], c.r[4].w[0] + 304u);  if (t) { goto L_00357118; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00357134; } }
L_00357118:
    set32(c.r[5], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 7;
L_00357134:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C20000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xC3670000u);
    c.f[1] = c.r[3].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[5].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3340000u);
    c.r[7].d[0] = c.r[3].d[0] | 32768ull;
    set32(c.r[5], 0u + 12u);
    set32(c.r[3], 0u + 11u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 32u), c.f[0]);
    st32((c.r[4].w[0] + 36u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 116u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[6].w[0]);
    st8((c.r[8].w[0] + 6u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[8].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[8].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[8].w[0] + 9u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00357190:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[6], c.r[16].w[0] + 304u);  if (t) { goto L_003571C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003571B8u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x003571B8u) [[unlikely]] return; }
L_003571B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00357268; } }
L_003571C0:
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3417u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00357268; } }
    c.r[2].d[0] = ld8((c.r[5].w[0] + 2597u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_003571EC; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00357204; } }
L_003571EC:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 6;
L_00357204:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C20000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3670000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    set32(c.r[2], 0u + 1u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2600u));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00357258; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u + 30u);
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[6].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[6].w[0] + 10u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
L_00357258:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357260u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0094(c, 435u, depth + 1u); else { c.pc = 0x00353270u; return; } if (c.pc != 0x00357260u) [[unlikely]] return; }
L_00357260:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00357268:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00357280:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 21744u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00354000u < 16384u) { entry = entries_0095[(t - 0x00354000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003572A0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[5], c.r[5].w[0] + 15776u);
    set32(c.r[3], 0u + 11u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[5], c.r[5].w[0] + 13u);
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003572E0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 14;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[22].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00357328; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357320u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x00357320u) [[unlikely]] return; }
L_00357320:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00357600; } }
L_00357328:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003575F8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357348u); c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 8277u)));  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x00357348u) [[unlikely]] return; }
L_00357348:
    set32(c.r[3], 0u + 346u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 5456u);
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[18], 0u + 152u);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
L_00357368:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357370u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00357370u) [[unlikely]] return; }
L_00357370:
    c.r[5].d[0] = c.r[18].d[0] << 48;
    set32(c.r[4], 0u + 52u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357380u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);  if (depth < kMaxDepth) unit_00AA(c, 46u, depth + 1u); else { c.pc = 0x003A8720u; return; } if (c.pc != 0x00357380u) [[unlikely]] return; }
L_00357380:
    c.r[6].d[0] = ld16((c.r[17].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357394u); set32(c.r[5], c.r[5].w[0] + 6592u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x00357394u) [[unlikely]] return; }
L_00357394:
    c.f[0] = c.r[18].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42500000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003573B0u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x003573B0u) [[unlikely]] return; }
L_003573B0:
    c.f[0] = c.r[18].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B00000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[17].w[0] + 24u);
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003573CCu); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x003573CCu) [[unlikely]] return; }
L_003573CC:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 20u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] - 3184u);
    set32(c.r[16], c.r[3].w[0] << 2);
    set32(c.r[21], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003573E8u); set32(c.r[4], ld32((c.r[21].w[0])));  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x003573E8u) [[unlikely]] return; }
L_003573E8:
    set32(c.r[19], c.r[2].w[0] >> 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], c.r[2].w[0] + 6688u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357400u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00357400u) [[unlikely]] return; }
L_00357400:
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[3], 0u + 560u);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0])));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = c.r[18].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.f[14] = 0u;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357438u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x00357438u) [[unlikely]] return; }
L_00357438:
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 346u);
    c.r[2].d[0] = c.r[20].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 57u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00357368u | kUnwind; return; } goto L_00357368; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8277u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035745Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x0035745Cu) [[unlikely]] return; }
L_0035745C:
    set32(c.r[2], 0u + 346u);
    c.r[16].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[18], 0u + 138u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[17], 0u + 168u);
    set32(c.r[2], c.r[2].w[0] - 5456u);
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
L_00357480:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 20u));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00357498; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003574C0; } }
L_00357498:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43CE0000u);
    c.f[0] = c.r[18].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[4].w[0] + 6728u);
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003574B8u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x003574B8u) [[unlikely]] return; }
L_003574B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00357520; } }
L_003574C0:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003574D0u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003574D0u) [[unlikely]] return; }
L_003574D0:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003574E0u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003574E0u) [[unlikely]] return; }
L_003574E0:
    c.r[6].d[0] = ld16((c.r[19].w[0] + 2u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[7].d[0] = ld16((c.r[19].w[0] + 4u));
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003574F8u); set32(c.r[5], c.r[5].w[0] + 6744u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x003574F8u) [[unlikely]] return; }
L_003574F8:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357504u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0099(c, 26u, depth + 1u); else { c.pc = 0x00364550u; return; } if (c.pc != 0x00357504u) [[unlikely]] return; }
L_00357504:
    c.f[0] = c.r[18].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43CE0000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357520u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x00357520u) [[unlikely]] return; }
L_00357520:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357530u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00357530u) [[unlikely]] return; }
L_00357530:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357540u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00357540u) [[unlikely]] return; }
L_00357540:
    c.r[6].d[0] = ld16((c.r[19].w[0] + 16u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357554u); set32(c.r[5], c.r[5].w[0] + 6752u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x00357554u) [[unlikely]] return; }
L_00357554:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357560u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0099(c, 26u, depth + 1u); else { c.pc = 0x00364550u; return; } if (c.pc != 0x00357560u) [[unlikely]] return; }
L_00357560:
    c.f[0] = c.r[17].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43DA0000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035757Cu); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x0035757Cu) [[unlikely]] return; }
L_0035757C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035758Cu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0035758Cu) [[unlikely]] return; }
L_0035758C:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035759Cu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0035759Cu) [[unlikely]] return; }
L_0035759C:
    c.r[6].d[0] = ld16((c.r[19].w[0] + 18u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003575B0u); set32(c.r[5], c.r[5].w[0] + 6752u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x003575B0u) [[unlikely]] return; }
L_003575B0:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003575BCu); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0099(c, 26u, depth + 1u); else { c.pc = 0x00364550u; return; } if (c.pc != 0x003575BCu) [[unlikely]] return; }
L_003575BC:
    c.f[0] = c.r[17].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43F70000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003575DCu); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x003575DCu) [[unlikely]] return; }
L_003575DC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + 346u);
    c.r[3].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 57u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 57u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00357480u | kUnwind; return; } goto L_00357480; } }
    c.budget -= 1;
L_003575F8:
    set32(c.r[3], 0u + 2u);
    st8((c.r[22].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00357600:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00357630:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 21760u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00354000u < 16384u) { entry = entries_0095[(t - 0x00354000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00357650:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[7], c.r[7].w[0] + 15984u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 15u);
    set32(c.r[3], 0u + 9u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    st32((c.r[4].w[0] + 128u), c.f[3]);
    st32((c.r[4].w[0] + 132u), c.f[2]);
    st32((c.r[4].w[0] + 136u), c.f[1]);
    st32((c.r[4].w[0] + 140u), c.f[0]);
    st32((c.r[4].w[0] + 116u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[6].w[0]);
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 26;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003576C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[7].d[0];  if (t) { goto L_003576F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003576E4u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x003576E4u) [[unlikely]] return; }
L_003576E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00357750; } }
    c.budget -= 1;
L_003576F0:
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], c.r[3].w[0] + 21776u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8278u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8277u)));
    set32(c.r[5], c.r[6].w[0] - c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 36u), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2600u));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != c.r[7].d[0];  if (t) { goto L_00357748; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u + 30u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
L_00357748:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00357750:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00357760:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[4].w[0] + 304u);  if (t) { goto L_00357790; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003577C0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003577C0; } }
L_00357790:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2600u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003577B8; } }
    st8((c.r[5].w[0] + 9u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 1u);
    st8((c.r[5].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_003577B8:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003577C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003577D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 21792u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00354000u < 16384u) { entry = entries_0095[(t - 0x00354000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003577F0:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[6], c.r[6].w[0] + 15856u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], 0u + 8u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 116u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[5], c.r[5].w[0] + 16u);
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00357840:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00357870; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357864u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x00357864u) [[unlikely]] return; }
L_00357864:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00357998; } }
    c.budget -= 1;
L_00357870:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; c.r[8].d[0] = ld16((c.r[1].w[0] + 16018u));  if (t) { goto L_00357900; } }
    set32(c.r[8], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[6], 0u + 346u);
    set32(c.r[5], c.r[5].w[0] - 5456u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 8277u)));
    mmi::mult(c, 0, c.r[7].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].d[0] = ld16((c.r[5].w[0]));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_003578B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003578B0; } }
L_003578B0:
    c.r[6].d[0] = ld8((c.r[8].w[0] + 2601u));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[5].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0xC0C00000u);  if (t) { goto L_003578C8; } }
    st32((c.r[4].w[0] + 36u), c.r[5].w[0]);
    c.budget -= 2;
L_003578C8:
    c.f[1] = ld32((c.r[4].w[0] + 36u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[5].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);  if (t) { goto L_003578F8; } }
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 36u), c.f[0]);  if (t) { goto L_00357988; } }
L_003578F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 36u), c.f[0]);  if (t) { goto L_00357988; } }
L_00357900:
    set32(c.r[9], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[6], 0u + 346u);
    set32(c.r[5], c.r[5].w[0] - 5456u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 8277u)));
    set32(c.r[7], c.r[7].w[0] + 4u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].d[0] = ld16((c.r[5].w[0]));
    c.budget -= 11;
    { const bool t = c.r[8].d[0] != c.r[5].d[0];  if (t) { goto L_00357938; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00357938; } }
    c.budget -= 1;
L_00357938:
    c.r[6].d[0] = ld8((c.r[9].w[0] + 2601u));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[5].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x40C00000u);  if (t) { goto L_00357950; } }
    st32((c.r[4].w[0] + 36u), c.r[5].w[0]);
    c.budget -= 2;
L_00357950:
    c.f[1] = ld32((c.r[4].w[0] + 36u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[5].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);  if (t) { goto L_00357980; } }
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 36u), c.f[0]);  if (t) { goto L_00357988; } }
L_00357980:
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.budget -= 2;
L_00357988:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00357998; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00357998:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003579B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 21808u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00354000u < 16384u) { entry = entries_0095[(t - 0x00354000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003579D0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[5], c.r[5].w[0] + 15776u);
    set32(c.r[3], 0u + 11u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[5], c.r[5].w[0] + 18u);
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00357A10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 3u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00357A40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357A34u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x00357A34u) [[unlikely]] return; }
L_00357A34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00357A60; } }
    c.budget -= 1;
L_00357A40:
    set32(c.r[5], 0u + 2u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00357A60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357A5Cu);  if (depth < kMaxDepth) unit_0095(c, 383u, depth + 1u); else { c.pc = 0x00357A70u; return; } if (c.pc != 0x00357A5Cu) [[unlikely]] return; }
L_00357A5C:
    c.budget -= 1;
L_00357A60:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00357A70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357A98u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x00357A98u) [[unlikely]] return; }
L_00357A98:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 21840u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00357AB0; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00357AC0; } }
L_00357AB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357AB8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00357AB8u) [[unlikely]] return; }
L_00357AB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00357AC8; } }
L_00357AC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357AC8u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00357AC8u) [[unlikely]] return; }
L_00357AC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42500000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.f[14] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C00000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357AE8u); set32(c.r[4], c.r[4].w[0] + 6760u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x00357AE8u) [[unlikely]] return; }
L_00357AE8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43AF0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C00000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357B08u); set32(c.r[4], c.r[4].w[0] + 21858u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x00357B08u) [[unlikely]] return; }
L_00357B08:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 21841u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00357B20; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00357B30; } }
L_00357B20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357B28u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00357B28u) [[unlikely]] return; }
L_00357B28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00357B38; } }
L_00357B30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357B38u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00357B38u) [[unlikely]] return; }
L_00357B38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42500000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.f[14] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357B58u); set32(c.r[4], c.r[4].w[0] + 6776u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x00357B58u) [[unlikely]] return; }
L_00357B58:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43AF0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357B78u); set32(c.r[4], c.r[4].w[0] + 21842u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x00357B78u) [[unlikely]] return; }
L_00357B78:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 21924u));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00357C30; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[16], 0u + 144u);
    set32(c.r[17], c.r[17].w[0] + 21840u);
    c.budget -= 3;
L_00357B98:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 152u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00357BB0; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00357BC0; } }
    c.budget -= 1;
L_00357BB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357BB8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00357BB8u) [[unlikely]] return; }
L_00357BB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00357BC8; } }
L_00357BC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357BC8u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00357BC8u) [[unlikely]] return; }
L_00357BC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42500000u);
    c.f[0] = c.r[16].w[0];
    set32(c.r[4], c.r[17].w[0] + 86u);
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357BE4u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x00357BE4u) [[unlikely]] return; }
L_00357BE4:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 154u));
    c.f[0] = c.r[16].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43AF0000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.f[14] = 0u;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357C10u); set32(c.r[4], c.r[2].w[0] + 189u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x00357C10u) [[unlikely]] return; }
L_00357C10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 21924u));
    set32(c.r[17], c.r[17].w[0] + 5288u);
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 24u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00357B98u | kUnwind; return; } goto L_00357B98; } }
    c.budget -= 1;
L_00357C30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00357C50:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 21824u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00354000u < 16384u) { entry = entries_0095[(t - 0x00354000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00357C70:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[7], c.r[7].w[0] + 15984u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 21u);
    set32(c.r[3], 0u + 9u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 116u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 314u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 312u), static_cast<std::uint8_t>(0u));
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 313u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00357CD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], 0u + 3u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[7], c.r[16].w[0] + 304u);  if (t) { goto L_00357D08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357CFCu);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x00357CFCu) [[unlikely]] return; }
L_00357CFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00357DB8; } }
    c.budget -= 1;
L_00357D08:
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 1u);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 2598u));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 2600u));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00357D40; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[4], 0u + 24u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[7].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[7].w[0] + 10u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
L_00357D40:
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 27u);  if (t) { goto L_00357D78; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC33B0000u);
    st8((c.r[7].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[2], c.r[2].w[0] + 16096u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357D70u); st32((c.r[16].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0094(c, 435u, depth + 1u); else { c.pc = 0x00353270u; return; } if (c.pc != 0x00357D70u) [[unlikely]] return; }
L_00357D70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00357DB0; } }
L_00357D78:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[5], 0u + 21u);
    set32(c.r[4], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + 21840u);
    st8((c.r[7].w[0] + 6u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.f[0] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[3], c.r[3].w[0] + 15984u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    st32((c.r[16].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 14;
L_00357DB0:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00357DB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00357DD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[16].w[0] + 304u);  if (t) { goto L_00357E18; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_00357E08; } }
    st8((c.r[5].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00357E08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357E10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0094(c, 435u, depth + 1u); else { c.pc = 0x00353270u; return; } if (c.pc != 0x00357E10u) [[unlikely]] return; }
L_00357E10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00357E48; } }
L_00357E18:
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 2600u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00357E40; } }
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 10u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00357E48; } }
    c.budget -= 1;
L_00357E40:
    set32(c.r[3], 0u + 77u);
    st8((c.r[5].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00357E48:
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 12u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 2598u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00357E70; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00357E78; } }
    c.budget -= 1;
L_00357E70:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00357E78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00357E90:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 21864u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00354000u < 16384u) { entry = entries_0095[(t - 0x00354000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00357EB0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[3], c.r[3].w[0] + 15776u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + 23u);
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[6], c.r[4].w[0] + 304u);  if (t) { goto L_00357EF0; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00357EF8; } }
L_00357EF0:
    set32(c.r[3], 0u + 11u);
    st8((c.r[6].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00357EF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00357F00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 21880u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00354000u < 16384u) { entry = entries_0095[(t - 0x00354000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00357F20:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[6], c.r[6].w[0] + 15776u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], 0u + 11u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00357F50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], 0u + 4u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00357F88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357F7Cu);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x00357F7Cu) [[unlikely]] return; }
L_00357F7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0096(c, 15u, depth); } }
    c.budget -= 1;
L_00357F88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357F98u);  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x00357F98u) [[unlikely]] return; }
L_00357F98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357FA0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00357FA0u) [[unlikely]] return; }
L_00357FA0:
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357FACu); set32(c.r[5], 0u + 18u);  if (depth < kMaxDepth) unit_00AA(c, 46u, depth + 1u); else { c.pc = 0x003A8720u; return; } if (c.pc != 0x00357FACu) [[unlikely]] return; }
L_00357FAC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357FCCu); set32(c.r[4], c.r[4].w[0] + 21858u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x00357FCCu) [[unlikely]] return; }
L_00357FCC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357FDCu);  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x00357FDCu) [[unlikely]] return; }
L_00357FDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357FE4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00357FE4u) [[unlikely]] return; }
L_00357FE4:
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357FF0u); set32(c.r[5], 0u + 36u);  if (depth < kMaxDepth) unit_00AA(c, 46u, depth + 1u); else { c.pc = 0x003A8720u; return; } if (c.pc != 0x00357FF0u) [[unlikely]] return; }
L_00357FF0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 16016u));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    [[clang::musttail]] return unit_0096(c, 1u, depth);
}

}
