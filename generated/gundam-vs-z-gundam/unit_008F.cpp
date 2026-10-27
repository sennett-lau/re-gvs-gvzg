#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_008F[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0,
    0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0,
    0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0,
    0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0,
    50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0,
    0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0,
    0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 98, 0, 0, 99, 0, 0, 100, 0, 0, 101, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 105, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0,
    108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 114, 0, 0,
    115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0,
    0, 0, 0, 0, 120, 0, 121, 0, 122, 0, 0, 123, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 126, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0,
    0, 130, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    135, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    141, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 145, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0,
    0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0,
    154, 0, 0, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 164,
    0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 170, 0, 0,
    171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0,
    176, 0, 177, 0, 178, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 182, 0, 0, 183, 0, 184, 0, 0, 0, 0, 185, 0,
    0, 0, 0, 0, 0, 0, 186, 0, 187, 0, 188, 0, 189, 0, 0, 190, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0,
    193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 198, 199, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 202, 0, 203, 0,
    204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 208, 0,
    0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 210, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 214, 0, 0, 0, 0,
    215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222,
    0, 0, 0, 0, 223, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 226, 0, 227, 0, 0, 0, 228, 0, 229, 0, 230, 0, 0, 0, 0, 0, 231, 0, 232, 0, 233, 0, 0, 234, 0, 0, 235, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 238, 239, 0, 240, 0, 0, 0,
    0, 0, 0, 241, 0, 0, 242, 0, 243, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 246, 0,
    0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 250, 0, 0, 251, 0, 252, 0, 0, 0, 0, 253, 0,
    254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 256, 0, 257, 0, 0, 0, 258, 0, 259, 0, 260, 0, 0, 0, 0, 0,
    261, 0, 262, 0, 263, 0, 0, 264, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    278, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0,
    0, 0, 283, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 286, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0,
    0, 0, 0, 0, 300, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 303,
    0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    308, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 312, 0, 0, 0, 313, 0, 314, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0,
    0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 320, 0, 321, 0, 322, 0, 0, 323, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 325, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0,
    0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0,
    332, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 336, 0, 0,
    0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 340, 0, 0, 0, 341, 0, 0, 342, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 350, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 353, 0, 0, 354, 0, 0, 355, 0, 0, 0, 0, 0,
    356, 0, 357, 0, 0, 358, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 362, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 367,
    0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 370, 0, 0, 0, 0, 0, 371, 0, 0,
    0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 374, 0,
    375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 381, 0, 0, 382, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 384, 0, 385, 0, 0, 0, 0, 0, 386, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 0, 389,
    0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    393, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 395, 0, 0, 396, 0, 0, 397, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    404, 0, 405, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 410, 0, 0, 0,
    411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 417, 0, 418, 0, 0, 0, 419, 0, 0, 0, 420, 0, 0, 421, 0, 422, 0, 0, 0, 0, 423, 0, 0, 0, 424, 0, 425, 0,
    426, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 430,
    0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 432, 0, 433, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0,
};

void unit_008F(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0033C000;
    case 2u: goto L_0033C050;
    case 3u: goto L_0033C0B8;
    case 4u: goto L_0033C0F8;
    case 5u: goto L_0033C11C;
    case 6u: goto L_0033C150;
    case 7u: goto L_0033C180;
    case 8u: goto L_0033C1BC;
    case 9u: goto L_0033C1E0;
    case 10u: goto L_0033C258;
    case 11u: goto L_0033C270;
    case 12u: goto L_0033C2F0;
    case 13u: goto L_0033C310;
    case 14u: goto L_0033C350;
    case 15u: goto L_0033C3B8;
    case 16u: goto L_0033C430;
    case 17u: goto L_0033C478;
    case 18u: goto L_0033C490;
    case 19u: goto L_0033C520;
    case 20u: goto L_0033C540;
    case 21u: goto L_0033C560;
    case 22u: goto L_0033C5C8;
    case 23u: goto L_0033C630;
    case 24u: goto L_0033C6A0;
    case 25u: goto L_0033C6D0;
    case 26u: goto L_0033C718;
    case 27u: goto L_0033C7C0;
    case 28u: goto L_0033C7E0;
    case 29u: goto L_0033C868;
    case 30u: goto L_0033C8C0;
    case 31u: goto L_0033C918;
    case 32u: goto L_0033C920;
    case 33u: goto L_0033C984;
    case 34u: goto L_0033C998;
    case 35u: goto L_0033C9A8;
    case 36u: goto L_0033C9B0;
    case 37u: goto L_0033C9F8;
    case 38u: goto L_0033CA3C;
    case 39u: goto L_0033CA54;
    case 40u: goto L_0033CA74;
    case 41u: goto L_0033CAB0;
    case 42u: goto L_0033CAB8;
    case 43u: goto L_0033CB60;
    case 44u: goto L_0033CB68;
    case 45u: goto L_0033CBA8;
    case 46u: goto L_0033CBB0;
    case 47u: goto L_0033CBF0;
    case 48u: goto L_0033CBF8;
    case 49u: goto L_0033CC60;
    case 50u: goto L_0033CC80;
    case 51u: goto L_0033CCA0;
    case 52u: goto L_0033CCE0;
    case 53u: goto L_0033CD08;
    case 54u: goto L_0033CD40;
    case 55u: goto L_0033CD50;
    case 56u: goto L_0033CD78;
    case 57u: goto L_0033CDB0;
    case 58u: goto L_0033CDC0;
    case 59u: goto L_0033CE44;
    case 60u: goto L_0033CE80;
    case 61u: goto L_0033CEB8;
    case 62u: goto L_0033CF18;
    case 63u: goto L_0033CF60;
    case 64u: goto L_0033CF70;
    case 65u: goto L_0033CFB0;
    case 66u: goto L_0033D018;
    case 67u: goto L_0033D090;
    case 68u: goto L_0033D0D8;
    case 69u: goto L_0033D0F0;
    case 70u: goto L_0033D118;
    case 71u: goto L_0033D150;
    case 72u: goto L_0033D160;
    case 73u: goto L_0033D1B8;
    case 74u: goto L_0033D1D0;
    case 75u: goto L_0033D208;
    case 76u: goto L_0033D270;
    case 77u: goto L_0033D2D0;
    case 78u: goto L_0033D2E0;
    case 79u: goto L_0033D2F0;
    case 80u: goto L_0033D310;
    case 81u: goto L_0033D320;
    case 82u: goto L_0033D340;
    case 83u: goto L_0033D350;
    case 84u: goto L_0033D388;
    case 85u: goto L_0033D3E0;
    case 86u: goto L_0033D450;
    case 87u: goto L_0033D474;
    case 88u: goto L_0033D484;
    case 89u: goto L_0033D4A0;
    case 90u: goto L_0033D510;
    case 91u: goto L_0033D540;
    case 92u: goto L_0033D570;
    case 93u: goto L_0033D5E4;
    case 94u: goto L_0033D640;
    case 95u: goto L_0033D700;
    case 96u: goto L_0033D748;
    case 97u: goto L_0033D764;
    case 98u: goto L_0033D78C;
    case 99u: goto L_0033D798;
    case 100u: goto L_0033D7A4;
    case 101u: goto L_0033D7B0;
    case 102u: goto L_0033D7BC;
    case 103u: goto L_0033D7E0;
    case 104u: goto L_0033D844;
    case 105u: goto L_0033D84C;
    case 106u: goto L_0033D854;
    case 107u: goto L_0033D86C;
    case 108u: goto L_0033D880;
    case 109u: goto L_0033D890;
    case 110u: goto L_0033D8B0;
    case 111u: goto L_0033D8C0;
    case 112u: goto L_0033D8C8;
    case 113u: goto L_0033D8EC;
    case 114u: goto L_0033D8F4;
    case 115u: goto L_0033D900;
    case 116u: goto L_0033D910;
    case 117u: goto L_0033D938;
    case 118u: goto L_0033D964;
    case 119u: goto L_0033D978;
    case 120u: goto L_0033D990;
    case 121u: goto L_0033D998;
    case 122u: goto L_0033D9A0;
    case 123u: goto L_0033D9AC;
    case 124u: goto L_0033D9B8;
    case 125u: goto L_0033D9D0;
    case 126u: goto L_0033DA10;
    case 127u: goto L_0033DA18;
    case 128u: goto L_0033DA50;
    case 129u: goto L_0033DA74;
    case 130u: goto L_0033DA84;
    case 131u: goto L_0033DA94;
    case 132u: goto L_0033DAA0;
    case 133u: goto L_0033DAC4;
    case 134u: goto L_0033DAD0;
    case 135u: goto L_0033DB00;
    case 136u: goto L_0033DB08;
    case 137u: goto L_0033DB18;
    case 138u: goto L_0033DB3C;
    case 139u: goto L_0033DB44;
    case 140u: goto L_0033DB58;
    case 141u: goto L_0033DB80;
    case 142u: goto L_0033DB88;
    case 143u: goto L_0033DBB0;
    case 144u: goto L_0033DC24;
    case 145u: goto L_0033DC30;
    case 146u: goto L_0033DC38;
    case 147u: goto L_0033DC94;
    case 148u: goto L_0033DCA8;
    case 149u: goto L_0033DCB0;
    case 150u: goto L_0033DCF0;
    case 151u: goto L_0033DD14;
    case 152u: goto L_0033DD40;
    case 153u: goto L_0033DD68;
    case 154u: goto L_0033DD80;
    case 155u: goto L_0033DD98;
    case 156u: goto L_0033DDA0;
    case 157u: goto L_0033DDC0;
    case 158u: goto L_0033DDD8;
    case 159u: goto L_0033DE10;
    case 160u: goto L_0033DE60;
    case 161u: goto L_0033DE98;
    case 162u: goto L_0033DEC4;
    case 163u: goto L_0033DED8;
    case 164u: goto L_0033DEFC;
    case 165u: goto L_0033DF10;
    case 166u: goto L_0033DF80;
    case 167u: goto L_0033DFC0;
    case 168u: goto L_0033DFD0;
    case 169u: goto L_0033DFEC;
    case 170u: goto L_0033DFF4;
    case 171u: goto L_0033E000;
    case 172u: goto L_0033E010;
    case 173u: goto L_0033E038;
    case 174u: goto L_0033E05C;
    case 175u: goto L_0033E070;
    case 176u: goto L_0033E080;
    case 177u: goto L_0033E088;
    case 178u: goto L_0033E090;
    case 179u: goto L_0033E098;
    case 180u: goto L_0033E0A8;
    case 181u: goto L_0033E0C4;
    case 182u: goto L_0033E0D0;
    case 183u: goto L_0033E0DC;
    case 184u: goto L_0033E0E4;
    case 185u: goto L_0033E0F8;
    case 186u: goto L_0033E118;
    case 187u: goto L_0033E120;
    case 188u: goto L_0033E128;
    case 189u: goto L_0033E130;
    case 190u: goto L_0033E13C;
    case 191u: goto L_0033E148;
    case 192u: goto L_0033E160;
    case 193u: goto L_0033E180;
    case 194u: goto L_0033E1A0;
    case 195u: goto L_0033E1A8;
    case 196u: goto L_0033E1F0;
    case 197u: goto L_0033E230;
    case 198u: goto L_0033E23C;
    case 199u: goto L_0033E240;
    case 200u: goto L_0033E248;
    case 201u: goto L_0033E264;
    case 202u: goto L_0033E270;
    case 203u: goto L_0033E278;
    case 204u: goto L_0033E280;
    case 205u: goto L_0033E2BC;
    case 206u: goto L_0033E2D8;
    case 207u: goto L_0033E2E8;
    case 208u: goto L_0033E2F8;
    case 209u: goto L_0033E31C;
    case 210u: goto L_0033E328;
    case 211u: goto L_0033E330;
    case 212u: goto L_0033E340;
    case 213u: goto L_0033E364;
    case 214u: goto L_0033E36C;
    case 215u: goto L_0033E380;
    case 216u: goto L_0033E3A8;
    case 217u: goto L_0033E3B0;
    case 218u: goto L_0033E424;
    case 219u: goto L_0033E430;
    case 220u: goto L_0033E438;
    case 221u: goto L_0033E468;
    case 222u: goto L_0033E47C;
    case 223u: goto L_0033E490;
    case 224u: goto L_0033E498;
    case 225u: goto L_0033E4E4;
    case 226u: goto L_0033E510;
    case 227u: goto L_0033E518;
    case 228u: goto L_0033E528;
    case 229u: goto L_0033E530;
    case 230u: goto L_0033E538;
    case 231u: goto L_0033E550;
    case 232u: goto L_0033E558;
    case 233u: goto L_0033E560;
    case 234u: goto L_0033E56C;
    case 235u: goto L_0033E578;
    case 236u: goto L_0033E5A0;
    case 237u: goto L_0033E5D8;
    case 238u: goto L_0033E5E4;
    case 239u: goto L_0033E5E8;
    case 240u: goto L_0033E5F0;
    case 241u: goto L_0033E60C;
    case 242u: goto L_0033E618;
    case 243u: goto L_0033E620;
    case 244u: goto L_0033E628;
    case 245u: goto L_0033E65C;
    case 246u: goto L_0033E678;
    case 247u: goto L_0033E688;
    case 248u: goto L_0033E698;
    case 249u: goto L_0033E6C4;
    case 250u: goto L_0033E6D0;
    case 251u: goto L_0033E6DC;
    case 252u: goto L_0033E6E4;
    case 253u: goto L_0033E6F8;
    case 254u: goto L_0033E700;
    case 255u: goto L_0033E734;
    case 256u: goto L_0033E740;
    case 257u: goto L_0033E748;
    case 258u: goto L_0033E758;
    case 259u: goto L_0033E760;
    case 260u: goto L_0033E768;
    case 261u: goto L_0033E780;
    case 262u: goto L_0033E788;
    case 263u: goto L_0033E790;
    case 264u: goto L_0033E79C;
    case 265u: goto L_0033E7A8;
    case 266u: goto L_0033E7C0;
    case 267u: goto L_0033E7D0;
    case 268u: goto L_0033E7F0;
    case 269u: goto L_0033E820;
    case 270u: goto L_0033E828;
    case 271u: goto L_0033E840;
    case 272u: goto L_0033E868;
    case 273u: goto L_0033E878;
    case 274u: goto L_0033E8B0;
    case 275u: goto L_0033E99C;
    case 276u: goto L_0033E9C0;
    case 277u: goto L_0033E9D0;
    case 278u: goto L_0033EA00;
    case 279u: goto L_0033EA08;
    case 280u: goto L_0033EA20;
    case 281u: goto L_0033EA30;
    case 282u: goto L_0033EA78;
    case 283u: goto L_0033EA88;
    case 284u: goto L_0033EA94;
    case 285u: goto L_0033EABC;
    case 286u: goto L_0033EAC4;
    case 287u: goto L_0033EAD0;
    case 288u: goto L_0033EB48;
    case 289u: goto L_0033EB74;
    case 290u: goto L_0033EB9C;
    case 291u: goto L_0033EBB0;
    case 292u: goto L_0033EBC0;
    case 293u: goto L_0033EBE0;
    case 294u: goto L_0033EC28;
    case 295u: goto L_0033EC44;
    case 296u: goto L_0033EC70;
    case 297u: goto L_0033ECB0;
    case 298u: goto L_0033ED20;
    case 299u: goto L_0033ED6C;
    case 300u: goto L_0033ED90;
    case 301u: goto L_0033ED98;
    case 302u: goto L_0033EDD8;
    case 303u: goto L_0033EDFC;
    case 304u: goto L_0033EE04;
    case 305u: goto L_0033EE38;
    case 306u: goto L_0033EE9C;
    case 307u: goto L_0033EEBC;
    case 308u: goto L_0033EF00;
    case 309u: goto L_0033EF20;
    case 310u: goto L_0033EF70;
    case 311u: goto L_0033EFB8;
    case 312u: goto L_0033EFD0;
    case 313u: goto L_0033EFE0;
    case 314u: goto L_0033EFE8;
    case 315u: goto L_0033F054;
    case 316u: goto L_0033F06C;
    case 317u: goto L_0033F090;
    case 318u: goto L_0033F0A0;
    case 319u: goto L_0033F0BC;
    case 320u: goto L_0033F0DC;
    case 321u: goto L_0033F0E4;
    case 322u: goto L_0033F0EC;
    case 323u: goto L_0033F0F8;
    case 324u: goto L_0033F120;
    case 325u: goto L_0033F128;
    case 326u: goto L_0033F13C;
    case 327u: goto L_0033F164;
    case 328u: goto L_0033F188;
    case 329u: goto L_0033F1B0;
    case 330u: goto L_0033F1B8;
    case 331u: goto L_0033F1DC;
    case 332u: goto L_0033F200;
    case 333u: goto L_0033F21C;
    case 334u: goto L_0033F244;
    case 335u: goto L_0033F260;
    case 336u: goto L_0033F274;
    case 337u: goto L_0033F28C;
    case 338u: goto L_0033F2A0;
    case 339u: goto L_0033F31C;
    case 340u: goto L_0033F328;
    case 341u: goto L_0033F338;
    case 342u: goto L_0033F344;
    case 343u: goto L_0033F350;
    case 344u: goto L_0033F384;
    case 345u: goto L_0033F3AC;
    case 346u: goto L_0033F3B8;
    case 347u: goto L_0033F438;
    case 348u: goto L_0033F484;
    case 349u: goto L_0033F4C0;
    case 350u: goto L_0033F514;
    case 351u: goto L_0033F520;
    case 352u: goto L_0033F544;
    case 353u: goto L_0033F550;
    case 354u: goto L_0033F55C;
    case 355u: goto L_0033F568;
    case 356u: goto L_0033F580;
    case 357u: goto L_0033F588;
    case 358u: goto L_0033F594;
    case 359u: goto L_0033F5A8;
    case 360u: goto L_0033F610;
    case 361u: goto L_0033F65C;
    case 362u: goto L_0033F668;
    case 363u: goto L_0033F6B8;
    case 364u: goto L_0033F6C8;
    case 365u: goto L_0033F720;
    case 366u: goto L_0033F768;
    case 367u: goto L_0033F77C;
    case 368u: goto L_0033F784;
    case 369u: goto L_0033F7D0;
    case 370u: goto L_0033F7DC;
    case 371u: goto L_0033F7F4;
    case 372u: goto L_0033F810;
    case 373u: goto L_0033F858;
    case 374u: goto L_0033F878;
    case 375u: goto L_0033F880;
    case 376u: goto L_0033F8B4;
    case 377u: goto L_0033F8CC;
    case 378u: goto L_0033F8E0;
    case 379u: goto L_0033F928;
    case 380u: goto L_0033F960;
    case 381u: goto L_0033F96C;
    case 382u: goto L_0033F978;
    case 383u: goto L_0033F9A4;
    case 384u: goto L_0033F9AC;
    case 385u: goto L_0033F9B4;
    case 386u: goto L_0033F9CC;
    case 387u: goto L_0033F9D8;
    case 388u: goto L_0033F9E8;
    case 389u: goto L_0033F9FC;
    case 390u: goto L_0033FA10;
    case 391u: goto L_0033FA70;
    case 392u: goto L_0033FAAC;
    case 393u: goto L_0033FB00;
    case 394u: goto L_0033FB24;
    case 395u: goto L_0033FB88;
    case 396u: goto L_0033FB94;
    case 397u: goto L_0033FBA0;
    case 398u: goto L_0033FBBC;
    case 399u: goto L_0033FBD0;
    case 400u: goto L_0033FBF0;
    case 401u: goto L_0033FC20;
    case 402u: goto L_0033FC40;
    case 403u: goto L_0033FC50;
    case 404u: goto L_0033FC80;
    case 405u: goto L_0033FC88;
    case 406u: goto L_0033FCA0;
    case 407u: goto L_0033FCF8;
    case 408u: goto L_0033FD30;
    case 409u: goto L_0033FD5C;
    case 410u: goto L_0033FD70;
    case 411u: goto L_0033FD80;
    case 412u: goto L_0033FDD0;
    case 413u: goto L_0033FDD8;
    case 414u: goto L_0033FE20;
    case 415u: goto L_0033FE3C;
    case 416u: goto L_0033FE64;
    case 417u: goto L_0033FE90;
    case 418u: goto L_0033FE98;
    case 419u: goto L_0033FEA8;
    case 420u: goto L_0033FEB8;
    case 421u: goto L_0033FEC4;
    case 422u: goto L_0033FECC;
    case 423u: goto L_0033FEE0;
    case 424u: goto L_0033FEF0;
    case 425u: goto L_0033FEF8;
    case 426u: goto L_0033FF00;
    case 427u: goto L_0033FF10;
    case 428u: goto L_0033FF4C;
    case 429u: goto L_0033FF6C;
    case 430u: goto L_0033FF7C;
    case 431u: goto L_0033FF90;
    case 432u: goto L_0033FFAC;
    case 433u: goto L_0033FFB4;
    case 434u: goto L_0033FFC0;
    case 435u: goto L_0033FFE8;
    default: bad_entry(c, 0x0033C000u); return;
    }
L_0033C000:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0033C1D8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0033C178; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0033C0B0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033C048; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033C250; } }
    c.budget -= 1;
L_0033C048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C050u);  if (depth < kMaxDepth) unit_008E(c, 269u, depth + 1u); else { c.pc = 0x0033AC90u; return; } if (c.pc != 0x0033C050u) [[unlikely]] return; }
L_0033C050:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0033C0A0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033C0A0; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033C090; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033C080; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033C250; } }
L_0033C080:
    set32(c.r[2], 0u - 255u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_0033C250; } }
    c.budget -= 1;
L_0033C090:
    set32(c.r[2], 0u - 254u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_0033C250; } }
    c.budget -= 1;
L_0033C0A0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0033C250; } }
L_0033C0B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C0B8u);  if (depth < kMaxDepth) unit_008E(c, 276u, depth + 1u); else { c.pc = 0x0033AED0u; return; } if (c.pc != 0x0033C0B8u) [[unlikely]] return; }
L_0033C0B8:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0033C168; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033C158; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033C138; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033C0E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033C250; } }
L_0033C0E8:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[17], c.r[17].w[0] + 1736u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C0F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 94u, depth + 1u); else { c.pc = 0x0033D640u; return; } if (c.pc != 0x0033C0F8u) [[unlikely]] return; }
L_0033C0F8:
    set32(c.r[2], ld32((c.r[16].w[0] + 196u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033C128; } }
    st32((c.r[16].w[0]), 0u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 36u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 208u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C11Cu); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0033C11Cu) [[unlikely]] return; }
L_0033C11C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033C250; } }
    c.budget -= 1;
L_0033C128:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0033C250; } }
L_0033C138:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[16].w[0] + 114u);
    set32(c.r[5], c.r[16].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C150u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0033C150u) [[unlikely]] return; }
L_0033C150:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 188u), 0u);  if (t) { goto L_0033C250; } }
L_0033C158:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], 0u - 255u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_0033C250; } }
L_0033C168:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], 0u - 251u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_0033C250; } }
L_0033C178:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C180u);  if (depth < kMaxDepth) unit_008E(c, 280u, depth + 1u); else { c.pc = 0x0033AFD0u; return; } if (c.pc != 0x0033C180u) [[unlikely]] return; }
L_0033C180:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033C1C8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033C1A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033C250; } }
    c.budget -= 1;
L_0033C1A0:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 208u)));
    set32(c.r[5], c.r[5].w[0] + 1736u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C1BCu); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0033C1BCu) [[unlikely]] return; }
L_0033C1BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033C250; } }
    c.budget -= 1;
L_0033C1C8:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], 0u - 256u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_0033C250; } }
L_0033C1D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C1E0u);  if (depth < kMaxDepth) unit_008E(c, 276u, depth + 1u); else { c.pc = 0x0033AED0u; return; } if (c.pc != 0x0033C1E0u) [[unlikely]] return; }
L_0033C1E0:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0033C240; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033C230; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033C220; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033C210; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033C250; } }
L_0033C210:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], 0u - 251u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_0033C250; } }
L_0033C220:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], 0u - 253u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_0033C250; } }
L_0033C230:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], 0u - 255u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_0033C250; } }
L_0033C240:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], 0u - 251u);
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 4;
L_0033C250:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C258u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 347u, depth + 1u); else { c.pc = 0x0033BA50u; return; } if (c.pc != 0x0033C258u) [[unlikely]] return; }
L_0033C258:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033C270:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[9], ld32((c.r[1].w[0] + 2004u)));
    set32(c.r[6], c.r[6].w[0] + 1872u);
    set32(c.r[8], c.r[8].w[0] + 18336u);
    set32(c.r[3], 0u + 5u);
    set32(c.r[2], 0u - 1u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[16], ld32((c.r[8].w[0])));
    st32((c.r[1].w[0] + 1996u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 1828u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 1792u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 1796u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 1812u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 2000u), c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1906u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C2F0u); set32(c.r[5], c.r[5].w[0] + 4696u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0033C2F0u) [[unlikely]] return; }
L_0033C2F0:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 1980u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033C310:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0033C428; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0033C3B0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033C348; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033C470; } }
L_0033C348:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C350u);  if (depth < kMaxDepth) unit_008E(c, 269u, depth + 1u); else { c.pc = 0x0033AC90u; return; } if (c.pc != 0x0033C350u) [[unlikely]] return; }
L_0033C350:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0033C3A0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033C3A0; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033C390; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033C380; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033C470; } }
L_0033C380:
    set32(c.r[2], 0u - 255u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_0033C470; } }
    c.budget -= 1;
L_0033C390:
    set32(c.r[2], 0u - 254u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_0033C470; } }
    c.budget -= 1;
L_0033C3A0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0033C470; } }
L_0033C3B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C3B8u);  if (depth < kMaxDepth) unit_008E(c, 276u, depth + 1u); else { c.pc = 0x0033AED0u; return; } if (c.pc != 0x0033C3B8u) [[unlikely]] return; }
L_0033C3B8:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0033C418; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033C408; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033C3F8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033C3E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033C470; } }
L_0033C3E8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0033C470; } }
L_0033C3F8:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], 0u - 253u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_0033C470; } }
L_0033C408:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], 0u - 255u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_0033C470; } }
L_0033C418:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], 0u - 251u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_0033C470; } }
L_0033C428:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C430u);  if (depth < kMaxDepth) unit_008E(c, 280u, depth + 1u); else { c.pc = 0x0033AFD0u; return; } if (c.pc != 0x0033C430u) [[unlikely]] return; }
L_0033C430:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033C460; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033C450; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033C470; } }
    c.budget -= 1;
L_0033C450:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), 0u);  if (t) { goto L_0033C470; } }
    c.budget -= 1;
L_0033C460:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], 0u - 256u);
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 4;
L_0033C470:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C478u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 347u, depth + 1u); else { c.pc = 0x0033BA50u; return; } if (c.pc != 0x0033C478u) [[unlikely]] return; }
L_0033C478:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033C490:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[7], c.r[7].w[0] + 18336u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], 0u + 6u);
    set32(c.r[8], ld32((c.r[1].w[0] + 2004u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[5], c.r[5].w[0] + 4696u);
    set32(c.r[8], c.r[8].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[17], ld32((c.r[7].w[0])));
    st32((c.r[1].w[0] + 1996u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 1828u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 1792u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 1796u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 1812u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 2000u), c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1906u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 1988u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[6], c.r[6].w[0] + 1872u);
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C520u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0033C520u) [[unlikely]] return; }
L_0033C520:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[1].w[0] + 1980u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[6], ld32((c.r[1].w[0] + 1980u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C540u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0033C540u) [[unlikely]] return; }
L_0033C540:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033C560:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] + 18336u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], 0u + 3u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[4].w[0] + 212u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[17], ld32((c.r[5].w[0])));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0033C710; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0033C6C8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0033C628; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033C5C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033C7B8; } }
    c.budget -= 1;
L_0033C5C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C5C8u);  if (depth < kMaxDepth) unit_008E(c, 269u, depth + 1u); else { c.pc = 0x0033AC90u; return; } if (c.pc != 0x0033C5C8u) [[unlikely]] return; }
L_0033C5C8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0033C618; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033C618; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033C608; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033C5F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033C7B8; } }
L_0033C5F8:
    set32(c.r[2], 0u - 255u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_0033C7B8; } }
    c.budget -= 1;
L_0033C608:
    set32(c.r[2], 0u - 254u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_0033C7B8; } }
    c.budget -= 1;
L_0033C618:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0033C7B8; } }
L_0033C628:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C630u);  if (depth < kMaxDepth) unit_008E(c, 276u, depth + 1u); else { c.pc = 0x0033AED0u; return; } if (c.pc != 0x0033C630u) [[unlikely]] return; }
L_0033C630:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0033C6B8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033C6A8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033C688; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033C660; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033C7B8; } }
L_0033C660:
    set32(c.r[2], ld32((c.r[16].w[0] + 196u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033C678; } }
    st32((c.r[16].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), 0u);  if (t) { goto L_0033C7B8; } }
L_0033C678:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0033C7B8; } }
L_0033C688:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[16].w[0] + 114u);
    set32(c.r[5], c.r[16].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C6A0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0033C6A0u) [[unlikely]] return; }
L_0033C6A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 188u), 0u);  if (t) { goto L_0033C7B8; } }
L_0033C6A8:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], 0u - 255u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_0033C7B8; } }
L_0033C6B8:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], 0u - 251u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_0033C7B8; } }
L_0033C6C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C6D0u);  if (depth < kMaxDepth) unit_008E(c, 280u, depth + 1u); else { c.pc = 0x0033AFD0u; return; } if (c.pc != 0x0033C6D0u) [[unlikely]] return; }
L_0033C6D0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033C700; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033C6F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033C7B8; } }
    c.budget -= 1;
L_0033C6F0:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), 0u);  if (t) { goto L_0033C7B8; } }
    c.budget -= 1;
L_0033C700:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], 0u - 256u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_0033C7B8; } }
L_0033C710:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C718u);  if (depth < kMaxDepth) unit_008E(c, 276u, depth + 1u); else { c.pc = 0x0033AED0u; return; } if (c.pc != 0x0033C718u) [[unlikely]] return; }
L_0033C718:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0033C7A8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033C798; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033C758; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033C748; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033C7B8; } }
L_0033C748:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), 0u);  if (t) { goto L_0033C7B8; } }
    c.budget -= 1;
L_0033C758:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 64u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 253u);  if (t) { goto L_0033C788; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_0033C7B8; } }
    c.budget -= 1;
L_0033C788:
    set32(c.r[2], 0u - 252u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_0033C7B8; } }
    c.budget -= 1;
L_0033C798:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], 0u - 255u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_0033C7B8; } }
L_0033C7A8:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], 0u - 251u);
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 4;
L_0033C7B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C7C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 347u, depth + 1u); else { c.pc = 0x0033BA50u; return; } if (c.pc != 0x0033C7C0u) [[unlikely]] return; }
L_0033C7C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033C7E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[6], c.r[6].w[0] + 1872u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[9], ld32((c.r[1].w[0] + 2004u)));
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[8], c.r[8].w[0] + 18336u);
    set32(c.r[3], 0u + 7u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[5], c.r[5].w[0] + 4696u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[16], ld32((c.r[8].w[0])));
    st32((c.r[1].w[0] + 1996u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 1828u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 1792u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 1796u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 1800u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 1812u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C868u); set32(c.r[4], c.r[4].w[0] + 1906u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0033C868u) [[unlikely]] return; }
L_0033C868:
    set32(c.r[5], ld32((c.r[16].w[0] + 96u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u + 255u);
    st32((c.r[1].w[0] + 1980u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 92u), c.r[17].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[5], ld32((c.r[1].w[0] + 1980u)));
    set32(c.r[5], c.r[17].w[0] + c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[16].w[0] + 108u), c.r[5].w[0]);
    st32((c.r[1].w[0] + 2016u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 2020u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033C8C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 18336u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 212u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0033CC58; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 4736u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0033C000u < 16384u) { entry = entries_008F[(t - 0x0033C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0033C918:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C920u);  if (depth < kMaxDepth) unit_008E(c, 269u, depth + 1u); else { c.pc = 0x0033AC90u; return; } if (c.pc != 0x0033C920u) [[unlikely]] return; }
L_0033C920:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0033C970; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033C970; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033C960; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033C950; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033CC58; } }
L_0033C950:
    set32(c.r[2], 0u - 255u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_0033CC58; } }
    c.budget -= 1;
L_0033C960:
    set32(c.r[2], 0u - 254u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_0033CC58; } }
    c.budget -= 1;
L_0033C970:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C984u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008F(c, 95u, depth + 1u); else { c.pc = 0x0033D700u; return; } if (c.pc != 0x0033C984u) [[unlikely]] return; }
L_0033C984:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[17].w[0] + 114u);
    set32(c.r[5], c.r[5].w[0] + 4704u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C998u); set32(c.r[6], c.r[17].w[0] + 80u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0033C998u) [[unlikely]] return; }
L_0033C998:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 200u), c.r[2].w[0]);  if (t) { goto L_0033CC58; } }
    c.budget -= 1;
L_0033C9A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C9B0u);  if (depth < kMaxDepth) unit_008E(c, 289u, depth + 1u); else { c.pc = 0x0033B120u; return; } if (c.pc != 0x0033C9B0u) [[unlikely]] return; }
L_0033C9B0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033C9E8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033C9D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033CC58; } }
    c.budget -= 1;
L_0033C9D0:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), 0u);  if (t) { goto L_0033CC58; } }
    c.budget -= 1;
L_0033C9E8:
    st32((c.r[17].w[0]), 0u);
    set32(c.r[2], 0u - 256u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_0033CC58; } }
L_0033C9F8:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 184u), c.r[2].w[0]);  if (t) { goto L_0033CC18; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[17].w[0] + 228u)));
    set32(c.r[3], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_0033CC18; } }
    set32(c.r[4], c.r[17].w[0] + 114u);
    set32(c.r[5], c.r[5].w[0] + 4720u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CA3Cu); set32(c.r[6], c.r[17].w[0] + 80u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0033CA3Cu) [[unlikely]] return; }
L_0033CA3C:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[17].w[0] + 114u);  if (t) { goto L_0033CA60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CA54u); set32(c.r[5], c.r[17].w[0] + 80u);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011D880u; return; } if (c.pc != 0x0033CA54u) [[unlikely]] return; }
L_0033CA54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033CA78; } }
    c.budget -= 1;
L_0033CA60:
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CA74u); set32(c.r[4], c.r[17].w[0] + 114u);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011D880u; return; } if (c.pc != 0x0033CA74u) [[unlikely]] return; }
L_0033CA74:
    c.budget -= 1;
L_0033CA78:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    st32((c.r[17].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    st32((c.r[17].w[0] + 188u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 14;
L_0033CAB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CAB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 276u, depth + 1u); else { c.pc = 0x0033AED0u; return; } if (c.pc != 0x0033CAB8u) [[unlikely]] return; }
L_0033CAB8:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0033CB50; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_0033CB40; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_0033CB30; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033CAE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033CC58; } }
    c.budget -= 1;
L_0033CAE8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 1744u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 188u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0033CB10; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0033CC58; } }
    c.budget -= 1;
L_0033CB10:
    set32(c.r[2], ld32((c.r[17].w[0] + 184u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_0033CC18; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 3u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0033CC58; } }
    c.budget -= 1;
L_0033CB30:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0033CC58; } }
L_0033CB40:
    st32((c.r[17].w[0]), 0u);
    set32(c.r[2], 0u - 255u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_0033CC58; } }
L_0033CB50:
    st32((c.r[17].w[0]), 0u);
    set32(c.r[2], 0u - 251u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_0033CC58; } }
L_0033CB60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CB68u);  if (depth < kMaxDepth) unit_008E(c, 309u, depth + 1u); else { c.pc = 0x0033B430u; return; } if (c.pc != 0x0033CB68u) [[unlikely]] return; }
L_0033CB68:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033CB98; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033CB88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033CC58; } }
    c.budget -= 1;
L_0033CB88:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0033CC58; } }
L_0033CB98:
    st32((c.r[17].w[0]), 0u);
    set32(c.r[2], 0u - 256u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_0033CC58; } }
L_0033CBA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CBB0u);  if (depth < kMaxDepth) unit_008E(c, 293u, depth + 1u); else { c.pc = 0x0033B1E0u; return; } if (c.pc != 0x0033CBB0u) [[unlikely]] return; }
L_0033CBB0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033CBE0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033CBD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033CC58; } }
    c.budget -= 1;
L_0033CBD0:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0033CC58; } }
L_0033CBE0:
    st32((c.r[17].w[0]), 0u);
    set32(c.r[2], 0u - 256u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_0033CC58; } }
L_0033CBF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CBF8u);  if (depth < kMaxDepth) unit_008E(c, 300u, depth + 1u); else { c.pc = 0x0033B2E0u; return; } if (c.pc != 0x0033CBF8u) [[unlikely]] return; }
L_0033CBF8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033CC48; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033CC18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033CC58; } }
    c.budget -= 1;
L_0033CC18:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0033CC38; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033C9F8u | kUnwind; return; } goto L_0033C9F8; } }
L_0033CC38:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 36u), 0u);  if (t) { goto L_0033CC58; } }
    c.budget -= 1;
L_0033CC48:
    st32((c.r[17].w[0]), 0u);
    set32(c.r[2], 0u - 256u);
    st32((c.r[17].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 4;
L_0033CC58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CC60u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 347u, depth + 1u); else { c.pc = 0x0033BA50u; return; } if (c.pc != 0x0033CC60u) [[unlikely]] return; }
L_0033CC60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033CC80:
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 2020u), c.r[3].w[0]);  c.pc = t; return; }
L_0033CCA0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[3], 0u + 8u);
    st32((c.r[1].w[0] + 1812u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 1792u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 1996u), c.r[3].w[0]);
    set32(c.r[3], 0u - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 1828u), c.r[3].w[0]);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 2016u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 1796u), 0u);  c.pc = t; return; }
L_0033CCE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0033CD00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033CD38; } }
L_0033CD00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CD08u);  if (depth < kMaxDepth) unit_008E(c, 313u, depth + 1u); else { c.pc = 0x0033B4E0u; return; } if (c.pc != 0x0033CD08u) [[unlikely]] return; }
L_0033CD08:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033CD30; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033CD28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033CD38; } }
    c.budget -= 1;
L_0033CD28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), 0u);  if (t) { goto L_0033CD38; } }
L_0033CD30:
    set32(c.r[2], 0u - 256u);
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 2;
L_0033CD38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CD40u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 347u, depth + 1u); else { c.pc = 0x0033BA50u; return; } if (c.pc != 0x0033CD40u) [[unlikely]] return; }
L_0033CD40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033CD50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033CD70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033CDA8; } }
    c.budget -= 1;
L_0033CD70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CD78u);  if (depth < kMaxDepth) unit_008E(c, 317u, depth + 1u); else { c.pc = 0x0033B590u; return; } if (c.pc != 0x0033CD78u) [[unlikely]] return; }
L_0033CD78:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033CDA0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033CD98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033CDA8; } }
    c.budget -= 1;
L_0033CD98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 36u), 0u);  if (t) { goto L_0033CDA8; } }
L_0033CDA0:
    set32(c.r[2], 0u - 256u);
    st32((c.r[4].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 2;
L_0033CDA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CDB0u);  if (depth < kMaxDepth) unit_008E(c, 347u, depth + 1u); else { c.pc = 0x0033BA50u; return; } if (c.pc != 0x0033CDB0u) [[unlikely]] return; }
L_0033CDB0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0033CDC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], c.r[7].w[0] + 18336u);
    set32(c.r[8], ld32((c.r[1].w[0] + 2004u)));
    set32(c.r[16], c.r[5].w[0] << 4);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], 0u + 10u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[5], c.r[5].w[0] + 4696u);
    set32(c.r[6], c.r[6].w[0] + 1872u);
    set32(c.r[8], c.r[8].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[17], ld32((c.r[7].w[0])));
    st32((c.r[1].w[0] + 1996u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], c.r[16].w[0] + c.r[17].w[0]);
    st32((c.r[1].w[0] + 1828u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 1792u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 1796u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 1812u), c.r[4].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0] + 24u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CE44u); set32(c.r[4], c.r[4].w[0] + 1906u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0033CE44u) [[unlikely]] return; }
L_0033CE44:
    set32(c.r[4], c.r[16].w[0] + c.r[17].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[3], 0u + 1u);
    st32((c.r[1].w[0] + 1980u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 2016u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033CE80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0033CF10; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033CEB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033CF58; } }
    c.budget -= 1;
L_0033CEB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CEB8u);  if (depth < kMaxDepth) unit_008E(c, 269u, depth + 1u); else { c.pc = 0x0033AC90u; return; } if (c.pc != 0x0033CEB8u) [[unlikely]] return; }
L_0033CEB8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0033CF00; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033CF00; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033CEF8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033CEE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033CF58; } }
L_0033CEE8:
    set32(c.r[2], 0u - 255u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_0033CF58; } }
    c.budget -= 1;
L_0033CEF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), 0u);  if (t) { goto L_0033CF58; } }
L_0033CF00:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0033CF58; } }
L_0033CF10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CF18u);  if (depth < kMaxDepth) unit_008E(c, 318u, depth + 1u); else { c.pc = 0x0033B5A0u; return; } if (c.pc != 0x0033CF18u) [[unlikely]] return; }
L_0033CF18:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033CF48; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033CF38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033CF58; } }
    c.budget -= 1;
L_0033CF38:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), 0u);  if (t) { goto L_0033CF58; } }
    c.budget -= 1;
L_0033CF48:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], 0u - 256u);
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 4;
L_0033CF58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CF60u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 347u, depth + 1u); else { c.pc = 0x0033BA50u; return; } if (c.pc != 0x0033CF60u) [[unlikely]] return; }
L_0033CF60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033CF70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0033D088; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0033D010; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033CFA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033D0D0; } }
L_0033CFA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CFB0u);  if (depth < kMaxDepth) unit_008E(c, 269u, depth + 1u); else { c.pc = 0x0033AC90u; return; } if (c.pc != 0x0033CFB0u) [[unlikely]] return; }
L_0033CFB0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0033D000; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033D000; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033CFF0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033CFE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033D0D0; } }
L_0033CFE0:
    set32(c.r[2], 0u - 255u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_0033D0D0; } }
    c.budget -= 1;
L_0033CFF0:
    set32(c.r[2], 0u - 254u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_0033D0D0; } }
    c.budget -= 1;
L_0033D000:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0033D0D0; } }
L_0033D010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D018u);  if (depth < kMaxDepth) unit_008E(c, 276u, depth + 1u); else { c.pc = 0x0033AED0u; return; } if (c.pc != 0x0033D018u) [[unlikely]] return; }
L_0033D018:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0033D078; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033D068; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033D058; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033D048; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033D0D0; } }
L_0033D048:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0033D0D0; } }
L_0033D058:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], 0u - 253u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_0033D0D0; } }
L_0033D068:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], 0u - 255u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_0033D0D0; } }
L_0033D078:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], 0u - 251u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_0033D0D0; } }
L_0033D088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D090u);  if (depth < kMaxDepth) unit_008E(c, 322u, depth + 1u); else { c.pc = 0x0033B670u; return; } if (c.pc != 0x0033D090u) [[unlikely]] return; }
L_0033D090:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033D0C0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033D0B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033D0D0; } }
    c.budget -= 1;
L_0033D0B0:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), 0u);  if (t) { goto L_0033D0D0; } }
    c.budget -= 1;
L_0033D0C0:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], 0u - 256u);
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 4;
L_0033D0D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D0D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 347u, depth + 1u); else { c.pc = 0x0033BA50u; return; } if (c.pc != 0x0033D0D8u) [[unlikely]] return; }
L_0033D0D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033D0F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0033D110; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033D148; } }
L_0033D110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D118u);  if (depth < kMaxDepth) unit_008E(c, 322u, depth + 1u); else { c.pc = 0x0033B670u; return; } if (c.pc != 0x0033D118u) [[unlikely]] return; }
L_0033D118:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033D140; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033D138; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033D148; } }
    c.budget -= 1;
L_0033D138:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), 0u);  if (t) { goto L_0033D148; } }
L_0033D140:
    set32(c.r[2], 0u - 256u);
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 2;
L_0033D148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D150u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 347u, depth + 1u); else { c.pc = 0x0033BA50u; return; } if (c.pc != 0x0033D150u) [[unlikely]] return; }
L_0033D150:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033D160:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u + 13u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[1].w[0] + 1792u), 0u);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[1].w[0] + 1796u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[5], c.r[5].w[0] + 4688u);
    st32((c.r[1].w[0] + 1812u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 1996u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1906u);
    set32(c.r[2], 0u - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D1B8u); st32((c.r[1].w[0] + 1828u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0033D1B8u) [[unlikely]] return; }
L_0033D1B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 2000u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033D1D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0033D268; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033D200; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033D2C8; } }
    c.budget -= 1;
L_0033D200:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D208u);  if (depth < kMaxDepth) unit_008E(c, 269u, depth + 1u); else { c.pc = 0x0033AC90u; return; } if (c.pc != 0x0033D208u) [[unlikely]] return; }
L_0033D208:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0033D258; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033D258; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033D248; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033D238; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033D2C8; } }
L_0033D238:
    set32(c.r[2], 0u - 255u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_0033D2C8; } }
    c.budget -= 1;
L_0033D248:
    set32(c.r[2], 0u - 254u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_0033D2C8; } }
    c.budget -= 1;
L_0033D258:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0033D2C8; } }
L_0033D268:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D270u);  if (depth < kMaxDepth) unit_008E(c, 333u, depth + 1u); else { c.pc = 0x0033B840u; return; } if (c.pc != 0x0033D270u) [[unlikely]] return; }
L_0033D270:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0033D2B8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033D2A8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033D298; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033D2C8; } }
    c.budget -= 1;
L_0033D298:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_0033D2C8; } }
L_0033D2A8:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], 0u - 256u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_0033D2C8; } }
L_0033D2B8:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], 0u - 253u);
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 4;
L_0033D2C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D2D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 347u, depth + 1u); else { c.pc = 0x0033BA50u; return; } if (c.pc != 0x0033D2D0u) [[unlikely]] return; }
L_0033D2D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033D2E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[1].w[0] + 1828u)));  c.pc = t; return; }
L_0033D2F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1844u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0])));  c.pc = t; return; }
L_0033D310:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 1868u), 0u);  c.pc = t; return; }
L_0033D320:
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[3], c.r[2].w[0] << (c.r[4].w[0] & 31u));
    set32(c.r[2], ld32((c.r[1].w[0] + 1868u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];  c.pc = t; return; }
L_0033D340:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[1].w[0] + 2016u)));  c.pc = t; return; }
L_0033D350:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 2004u)));
    set32(c.r[2], c.r[2].w[0] + 18336u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[7], ld32((c.r[2].w[0])));  if (t) { goto L_0033D3D0; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 8u);
    c.budget -= 6;
L_0033D388:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_0033D3D0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033D3C0; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st32((c.r[3].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    st32((c.r[3].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[3].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 8u);
    c.budget -= 9;
L_0033D3C0:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033D388u | kUnwind; return; } goto L_0033D388; } }
L_0033D3D0:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 4;
L_0033D3E0:
    set32(c.r[2], ld32((c.r[6].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033D410; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 32u)));
    set32(c.r[3], c.r[2].w[0] + 1023u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 10));  if (t) { goto L_0033D404; } }
    set32(c.r[2], c.r[3].w[0] + 1023u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));
    c.budget -= 2;
L_0033D404:
    set32(c.r[8], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 3;
L_0033D410:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033D3E0u | kUnwind; return; } goto L_0033D3E0; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_0033D434; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0033D434:
    set32(c.r[8], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[8].w[0] + 2u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[7].w[0] + 16u), c.r[2].w[0]);  c.pc = t; return; }
L_0033D450:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[16], c.r[16].w[0] + 1736u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D474u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 94u, depth + 1u); else { c.pc = 0x0033D640u; return; } if (c.pc != 0x0033D474u) [[unlikely]] return; }
L_0033D474:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D484u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0033D484u) [[unlikely]] return; }
L_0033D484:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033D4A0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 13;
    { const bool t = c.r[18].sd[0] <= 0; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0033D4E0; } }
    c.r[1].d[0] = c.r[18].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0033D4E8; } }
L_0033D4E0:
    set32(c.r[18], 0u + 10u);
    c.budget -= 2;
L_0033D4E8:
    set32(c.r[3], c.r[18].w[0] - 1u);
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    set32(c.r[17], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0033D560; } }
    c.r[1].d[0] = c.r[3].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[5], c.r[18].w[0] - 9u);  if (t) { goto L_0033D530; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x05F50000u);
    c.r[4].d[0] = c.r[3].d[0] | 57600ull;
    c.budget -= 2;
L_0033D510:
    set32(c.r[6], c.r[6].w[0] + 8u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[4].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033D510u | kUnwind; return; } goto L_0033D510; } }
    c.budget -= 1;
L_0033D530:
    set32(c.r[4], c.r[18].w[0] - 1u);
    c.r[1].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0033D560; } }
L_0033D540:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[17], c.r[3].w[0] << 1);
    c.r[3].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033D540u | kUnwind; return; } goto L_0033D540; } }
    c.budget -= 1;
L_0033D560:
    c.r[1].d[0] = 0ll < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0033D618; } }
    c.budget -= 1;
L_0033D570:
    mmi::div(c, 0, c.r[21].w[0], c.r[17].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[1].d[0] = c.r[4].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0033D590; } }
    set32(c.r[4], 0u + 9u);
    c.budget -= 1;
L_0033D590:
    mmi::div(c, 0, c.r[21].w[0], c.r[17].w[0]);
    c.r[21].d[0] = c.hi.d[0];
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_0033D5B0; } }
    set32(c.r[19], 0u + 1u);
    c.budget -= 2;
L_0033D5B0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[3], c.r[18].w[0] - 1u);  if (t) { goto L_0033D5C8; } }
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033D5E8; } }
    c.budget -= 1;
L_0033D5C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 18416u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D5E4u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x0033D5E4u) [[unlikely]] return; }
L_0033D5E4:
    set32(c.r[20], c.r[20].w[0] + 2u);
    c.budget -= 1;
L_0033D5E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[3].d[0] = c.r[3].d[0] | 26215ull;
    set32(c.r[16], c.r[16].w[0] + 1u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[17].w[0]);
    set32(c.r[5], c.r[17].w[0] >> 31);
    c.r[4].d[0] = c.hi.d[0];
    c.r[3].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[4].w[0] + c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033D570u | kUnwind; return; } goto L_0033D570; } }
    c.budget -= 1;
L_0033D618:
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0033D640:
    c.r[7].d[0] = ld8((c.r[4].w[0] + 5u));
    c.r[1].d[0] = c.r[7].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[13].d[0] = ld16((c.r[4].w[0] + 6u));  if (t) { goto L_0033D658; } }
    set32(c.r[13], c.r[13].w[0] - 1u);
    set32(c.r[7], c.r[7].w[0] + 12u);
    c.budget -= 2;
L_0033D658:
    c.budget -= 2;
    { const bool t = c.r[13].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[13].w[0]) >> 2));  if (t) { goto L_0033D668; } }
    set32(c.r[3], c.r[13].w[0] + 3u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_0033D668:
    set32(c.r[12], c.r[13].w[0] + c.r[3].w[0]);
    set32(c.r[11], c.r[13].w[0] >> 31);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    c.r[10].d[0] = c.r[3].d[0] | 34079ull;
    mmi::mult(c, 0, c.r[10].w[0], c.r[13].w[0]);
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[5], c.r[3].w[0] + c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x66660000u);
    set32(c.r[5], c.r[5].w[0] << 2);
    c.r[6].d[0] = c.r[3].d[0] | 26215ull;
    c.r[9].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[8], c.r[3].w[0] + 8u);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 4u));
    set32(c.r[7], c.r[8].w[0] >> 31);
    set32(c.r[3], 0u + 7u);
    mmi::mult(c, 0, c.r[10].w[0], c.r[13].w[0]);
    set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 5));
    set32(c.r[9], c.r[9].w[0] + c.r[11].w[0]);
    set32(c.r[10], c.r[12].w[0] - c.r[9].w[0]);
    c.r[9].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[6].w[0], c.r[8].w[0]);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 7));
    set32(c.r[6], c.r[6].w[0] + c.r[11].w[0]);
    set32(c.r[8], c.r[6].w[0] + c.r[10].w[0]);
    c.r[6].d[0] = c.hi.d[0];
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 1));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    mmi::div(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 36;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0033D700:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 18336u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 212u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033D7C0; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D748u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0033D748u) [[unlikely]] return; }
L_0033D748:
    st16((c.r[18].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[6], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[18].w[0] + 192u);
    set32(c.r[7], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D764u); set32(c.r[5], c.r[5].w[0] + 4768u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0033D764u) [[unlikely]] return; }
L_0033D764:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033D798; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 216u)));
    set32(c.r[5], c.r[29].w[0] + 72u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D78Cu); set32(c.r[4], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_008F(c, 89u, depth + 1u); else { c.pc = 0x0033D4A0u; return; } if (c.pc != 0x0033D78Cu) [[unlikely]] return; }
L_0033D78C:
    set32(c.r[4], c.r[18].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D798u); set32(c.r[5], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011D880u; return; } if (c.pc != 0x0033D798u) [[unlikely]] return; }
L_0033D798:
    set32(c.r[5], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D7A4u); set32(c.r[4], c.r[18].w[0] + 260u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0033D7A4u) [[unlikely]] return; }
L_0033D7A4:
    set32(c.r[5], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D7B0u); set32(c.r[4], c.r[18].w[0] + 324u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0033D7B0u) [[unlikely]] return; }
L_0033D7B0:
    set32(c.r[5], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D7BCu); set32(c.r[4], c.r[18].w[0] + 388u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0033D7BCu) [[unlikely]] return; }
L_0033D7BC:
    c.budget -= 1;
L_0033D7C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0033D7E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], c.r[3].w[0] + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0033D970; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0033D930; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0033D908; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0033D8C0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033D838; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033D988; } }
    c.budget -= 1;
L_0033D838:
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D844u); st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x0033D844u) [[unlikely]] return; }
L_0033D844:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D84Cu);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x0033D84Cu) [[unlikely]] return; }
L_0033D84C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D854u);  if (depth < kMaxDepth) unit_000B(c, 24u, depth + 1u); else { c.pc = 0x0012C850u; return; } if (c.pc != 0x0033D854u) [[unlikely]] return; }
L_0033D854:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01170000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] | 61440ull;
    set32(c.r[6], 0u + 740u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D86Cu); st32((c.r[28].w[0] - 24092u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0033D86Cu) [[unlikely]] return; }
L_0033D86C:
    set32(c.r[4], ld32((c.r[28].w[0] - 24092u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01170000u);
    c.r[5].d[0] = c.r[2].d[0] | 62180ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D880u); c.r[6].sd[0] = static_cast<std::int32_t>(0x01FE0000u);  if (depth < kMaxDepth) unit_0079(c, 141u, depth + 1u); else { c.pc = 0x002E6F00u; return; } if (c.pc != 0x0033D880u) [[unlikely]] return; }
L_0033D880:
    set32(c.r[6], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[5], 0u + 3161u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D890u); set32(c.r[4], c.r[6].w[0] + 12u);  if (depth < kMaxDepth) unit_0079(c, 151u, depth + 1u); else { c.pc = 0x002E7010u; return; } if (c.pc != 0x0033D890u) [[unlikely]] return; }
L_0033D890:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 28816u);
    set32(c.r[5], 0u + 3u);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D8B0u); set32(c.r[6], c.r[2].w[0] + 12u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x0033D8B0u) [[unlikely]] return; }
L_0033D8B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00130000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D8C0u); set32(c.r[4], c.r[4].w[0] - 13504u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x0033D8C0u) [[unlikely]] return; }
L_0033D8C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D8C8u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x0033D8C8u) [[unlikely]] return; }
L_0033D8C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033D988; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 2u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D8ECu); st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008F(c, 271u, depth + 1u); else { c.pc = 0x0033E840u; return; } if (c.pc != 0x0033D8ECu) [[unlikely]] return; }
L_0033D8EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D8F4u);  if (depth < kMaxDepth) unit_0044(c, 110u, depth + 1u); else { c.pc = 0x00210940u; return; } if (c.pc != 0x0033D8F4u) [[unlikely]] return; }
L_0033D8F4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D900u); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x0033D900u) [[unlikely]] return; }
L_0033D900:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033D988; } }
L_0033D908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D910u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x0033D910u) [[unlikely]] return; }
L_0033D910:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033D988; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0033D988; } }
    c.budget -= 1;
L_0033D930:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D938u);  if (depth < kMaxDepth) unit_008F(c, 277u, depth + 1u); else { c.pc = 0x0033E9D0u; return; } if (c.pc != 0x0033D938u) [[unlikely]] return; }
L_0033D938:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0033D988; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[6].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 8u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D964u); st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0046(c, 196u, depth + 1u); else { c.pc = 0x0021B320u; return; } if (c.pc != 0x0033D964u) [[unlikely]] return; }
L_0033D964:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033D988; } }
    c.budget -= 1;
L_0033D970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D978u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x0033D978u) [[unlikely]] return; }
L_0033D978:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033D988; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 2;
L_0033D988:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D990u);  if (depth < kMaxDepth) unit_006B(c, 17u, depth + 1u); else { c.pc = 0x002AC350u; return; } if (c.pc != 0x0033D990u) [[unlikely]] return; }
L_0033D990:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D998u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x0033D998u) [[unlikely]] return; }
L_0033D998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D9A0u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x0033D9A0u) [[unlikely]] return; }
L_0033D9A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D9ACu); set32(c.r[4], c.r[4].w[0] - 15136u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x0033D9ACu) [[unlikely]] return; }
L_0033D9AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D9B8u); set32(c.r[4], c.r[4].w[0] - 15024u);  if (depth < kMaxDepth) unit_0043(c, 416u, depth + 1u); else { c.pc = 0x0020FEF0u; return; } if (c.pc != 0x0033D9B8u) [[unlikely]] return; }
L_0033D9B8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033D9D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 7u)));
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[2].w[0] + 7u);  if (t) { goto L_0033DCD0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 4944u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0033C000u < 16384u) { entry = entries_008F[(t - 0x0033C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0033DA10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DA18u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x0033DA18u) [[unlikely]] return; }
L_0033DA18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033DCD0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 7u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DA50u); st16((c.r[2].w[0] + 14u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_004C(c, 171u, depth + 1u); else { c.pc = 0x00231B40u; return; } if (c.pc != 0x0033DA50u) [[unlikely]] return; }
L_0033DA50:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    st8((c.r[2].w[0] + 630u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DA74u); st8((c.r[2].w[0] + 629u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_004C(c, 171u, depth + 1u); else { c.pc = 0x00231B40u; return; } if (c.pc != 0x0033DA74u) [[unlikely]] return; }
L_0033DA74:
    set32(c.r[4], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DA84u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_004C(c, 171u, depth + 1u); else { c.pc = 0x00231B40u; return; } if (c.pc != 0x0033DA84u) [[unlikely]] return; }
L_0033DA84:
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DA94u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004C(c, 171u, depth + 1u); else { c.pc = 0x00231B40u; return; } if (c.pc != 0x0033DA94u) [[unlikely]] return; }
L_0033DA94:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 601u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0033DCD0; } }
L_0033DAA0:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 629u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] + 1u);  if (t) { goto L_0033DCD0; } }
    c.r[6].d[0] = 0ull + 0ull;
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DAC4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004C(c, 171u, depth + 1u); else { c.pc = 0x00231B40u; return; } if (c.pc != 0x0033DAC4u) [[unlikely]] return; }
L_0033DAC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033DCD0; } }
    c.budget -= 1;
L_0033DAD0:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 630u)));
    set32(c.r[4], c.r[2].w[0] + 630u);
    c.r[2].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 127ull;  if (t) { goto L_0033DCD0; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 7u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0033DCD0; } }
L_0033DB00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DB08u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x0033DB08u) [[unlikely]] return; }
L_0033DB08:
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DB18u); c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 14u)));  if (depth < kMaxDepth) unit_0090(c, 279u, depth + 1u); else { c.pc = 0x003425A0u; return; } if (c.pc != 0x0033DB18u) [[unlikely]] return; }
L_0033DB18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033DB50; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 7u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DB3Cu); st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0090(c, 288u, depth + 1u); else { c.pc = 0x00342670u; return; } if (c.pc != 0x0033DB3Cu) [[unlikely]] return; }
L_0033DB3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DB44u);  if (depth < kMaxDepth) unit_0090(c, 285u, depth + 1u); else { c.pc = 0x00342620u; return; } if (c.pc != 0x0033DB44u) [[unlikely]] return; }
L_0033DB44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033DCD0; } }
    c.budget -= 1;
L_0033DB50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DB58u);  if (depth < kMaxDepth) unit_0090(c, 282u, depth + 1u); else { c.pc = 0x003425E0u; return; } if (c.pc != 0x0033DB58u) [[unlikely]] return; }
L_0033DB58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033DB90; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DB80u); st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0090(c, 289u, depth + 1u); else { c.pc = 0x00342680u; return; } if (c.pc != 0x0033DB80u) [[unlikely]] return; }
L_0033DB80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DB88u);  if (depth < kMaxDepth) unit_0090(c, 286u, depth + 1u); else { c.pc = 0x00342640u; return; } if (c.pc != 0x0033DB88u) [[unlikely]] return; }
L_0033DB88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033DCD0; } }
L_0033DB90:
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & 12288ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[3].d[0] & 4096ull;  if (t) { goto L_0033DCD0; } }
    c.r[4].d[0] = c.r[3].d[0] & 8192ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], c.r[3].w[0] + 18464u);
    c.budget -= 4;
L_0033DBB0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0033DBD0; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0033DBD0; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0033DBD0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0033DBE8; } }
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_0033DBE8; } }
    set32(c.r[16], 0u + 2u);
    c.budget -= 1;
L_0033DBE8:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033DBB0u | kUnwind; return; } goto L_0033DBB0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], c.r[2].w[0] + 14u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 14u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_0033DCD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DC24u); st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_0090(c, 290u, depth + 1u); else { c.pc = 0x00342690u; return; } if (c.pc != 0x0033DC24u) [[unlikely]] return; }
L_0033DC24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033DCD0; } }
    c.budget -= 1;
L_0033DC30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DC38u);  if (depth < kMaxDepth) unit_0090(c, 287u, depth + 1u); else { c.pc = 0x00342660u; return; } if (c.pc != 0x0033DC38u) [[unlikely]] return; }
L_0033DC38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033DCD0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033DC68; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 601u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0033DCD8; } }
    c.budget -= 1;
L_0033DC68:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 14u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 18464u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    set32(c.r[4], c.r[3].w[0] - 48u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DC94u); set32(c.r[5], c.r[2].w[0] - 48u);  if (depth < kMaxDepth) unit_008F(c, 271u, depth + 1u); else { c.pc = 0x0033E840u; return; } if (c.pc != 0x0033DC94u) [[unlikely]] return; }
L_0033DC94:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 7u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_0033DCA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DCB0u);  if (depth < kMaxDepth) unit_008F(c, 277u, depth + 1u); else { c.pc = 0x0033E9D0u; return; } if (c.pc != 0x0033DCB0u) [[unlikely]] return; }
L_0033DCB0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0033DCD0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    st8((c.r[2].w[0] + 631u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_0033DCD0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0033DCD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033DCF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 8688u);
    set32(c.r[5], c.r[5].w[0] - 8624u);
    set32(c.r[6], 0u + 64u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DD14u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0006(c, 189u, depth + 1u); else { c.pc = 0x0011A900u; return; } if (c.pc != 0x0033DD14u) [[unlikely]] return; }
L_0033DD14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033DD28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0033DDA8; } }
    c.budget -= 1;
L_0033DD28:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[6], 0u + 32u);
    set32(c.r[4], c.r[4].w[0] + 3776u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DD40u); set32(c.r[5], c.r[2].w[0] + 155u);  if (depth < kMaxDepth) unit_0006(c, 189u, depth + 1u); else { c.pc = 0x0011A900u; return; } if (c.pc != 0x0033DD40u) [[unlikely]] return; }
L_0033DD40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033DD50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0033DDA8; } }
L_0033DD50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], c.r[4].w[0] + 2032u);
    set32(c.r[5], c.r[5].w[0] + 7472u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DD68u); set32(c.r[6], 0u + 1732u);  if (depth < kMaxDepth) unit_0006(c, 189u, depth + 1u); else { c.pc = 0x0011A900u; return; } if (c.pc != 0x0033DD68u) [[unlikely]] return; }
L_0033DD68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033DD78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0033DDA8; } }
L_0033DD78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DD80u);  if (depth < kMaxDepth) unit_00AB(c, 292u, depth + 1u); else { c.pc = 0x003AF490u; return; } if (c.pc != 0x0033DD80u) [[unlikely]] return; }
L_0033DD80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[4], c.r[4].w[0] + 3812u);
    set32(c.r[5], c.r[5].w[0] + 8180u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DD98u); set32(c.r[6], 0u + 656u);  if (depth < kMaxDepth) unit_0006(c, 189u, depth + 1u); else { c.pc = 0x0011A900u; return; } if (c.pc != 0x0033DD98u) [[unlikely]] return; }
L_0033DD98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DDA0u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 288u, depth + 1u); else { c.pc = 0x003AF3B0u; return; } if (c.pc != 0x0033DDA0u) [[unlikely]] return; }
L_0033DDA0:
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0033DDA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033DDC0:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[7], c.r[7].w[0] + 7472u);
    set32(c.r[6], c.r[6].w[0] + 2032u);
    set32(c.r[5], 0u + 54u);
    c.budget -= 6;
L_0033DDD8:
    ld128((c.r[7].w[0]) & ~15u, c.r[4]);
    set32(c.r[5], c.r[5].w[0] - 1u);
    ld128((c.r[7].w[0] + 16u) & ~15u, c.r[3]);
    st128((c.r[6].w[0]) & ~15u, c.r[4]);
    set32(c.r[7], c.r[7].w[0] + 32u);
    st128((c.r[6].w[0] + 16u) & ~15u, c.r[3]);
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033DDD8u | kUnwind; return; } goto L_0033DDD8; } }
    c.f[0] = ld32((c.r[7].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0]), c.f[0]);  c.pc = t; return; }
L_0033DE10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 8624u);
    ld128((c.r[2].w[0]) & ~15u, c.r[7]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[6]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[3]);
    set32(c.r[8], c.r[8].w[0] - 8688u);
    set32(c.r[5], c.r[5].w[0] + 3776u);
    set32(c.r[4], 0u + 16u);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[2]);
    st128((c.r[8].w[0]) & ~15u, c.r[7]);
    st128((c.r[8].w[0] + 16u) & ~15u, c.r[6]);
    st128((c.r[8].w[0] + 32u) & ~15u, c.r[3]);
    st128((c.r[8].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[6], c.r[2].w[0] + 155u);
    c.budget -= 20;
L_0033DE60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 2u);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033DE60u | kUnwind; return; } goto L_0033DE60; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[6], c.r[6].w[0] + 7472u);
    set32(c.r[5], c.r[5].w[0] + 2032u);
    set32(c.r[4], 0u + 54u);
    c.budget -= 6;
L_0033DE98:
    ld128((c.r[6].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    ld128((c.r[6].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[6].w[0] + 32u);
    st128((c.r[5].w[0] + 16u) & ~15u, c.r[2]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033DE98u | kUnwind; return; } goto L_0033DE98; } }
    c.f[0] = ld32((c.r[6].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DEC4u); st32((c.r[5].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_00AB(c, 292u, depth + 1u); else { c.pc = 0x003AF490u; return; } if (c.pc != 0x0033DEC4u) [[unlikely]] return; }
L_0033DEC4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[5], c.r[5].w[0] + 8176u);
    set32(c.r[4], c.r[4].w[0] + 3808u);
    set32(c.r[3], 0u + 165u);
    c.budget -= 5;
L_0033DED8:
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033DED8u | kUnwind; return; } goto L_0033DED8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DEFCu);  if (depth < kMaxDepth) unit_00AB(c, 288u, depth + 1u); else { c.pc = 0x003AF3B0u; return; } if (c.pc != 0x0033DEFCu) [[unlikely]] return; }
L_0033DEFC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0033DF10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 13u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 11u);  if (t) { goto L_0033E0F0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0033E0A0; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_0033E068; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0033E030; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0033E008; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0033E008; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0033DFC8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033DF78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033E118; } }
L_0033DF78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DF80u);  if (depth < kMaxDepth) unit_008F(c, 150u, depth + 1u); else { c.pc = 0x0033DCF0u; return; } if (c.pc != 0x0033DF80u) [[unlikely]] return; }
L_0033DF80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);  if (t) { goto L_0033E078; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8617u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033DFA8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 11u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0033DFB8; } }
    c.budget -= 1;
L_0033DFA8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0033DFB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DFC0u);  if (depth < kMaxDepth) unit_0044(c, 86u, depth + 1u); else { c.pc = 0x00210740u; return; } if (c.pc != 0x0033DFC0u) [[unlikely]] return; }
L_0033DFC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033E118; } }
L_0033DFC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DFD0u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x0033DFD0u) [[unlikely]] return; }
L_0033DFD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033E118; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DFECu); st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0044(c, 110u, depth + 1u); else { c.pc = 0x00210940u; return; } if (c.pc != 0x0033DFECu) [[unlikely]] return; }
L_0033DFEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DFF4u);  if (depth < kMaxDepth) unit_008F(c, 267u, depth + 1u); else { c.pc = 0x0033E7D0u; return; } if (c.pc != 0x0033DFF4u) [[unlikely]] return; }
L_0033DFF4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E000u); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x0033E000u) [[unlikely]] return; }
L_0033E000:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033E118; } }
L_0033E008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E010u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x0033E010u) [[unlikely]] return; }
L_0033E010:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033E118; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0033E118; } }
    c.budget -= 1;
L_0033E030:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E038u);  if (depth < kMaxDepth) unit_008F(c, 268u, depth + 1u); else { c.pc = 0x0033E7F0u; return; } if (c.pc != 0x0033E038u) [[unlikely]] return; }
L_0033E038:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033E118; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 8u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E05Cu); st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x0033E05Cu) [[unlikely]] return; }
L_0033E05C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033E118; } }
    c.budget -= 1;
L_0033E068:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E070u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x0033E070u) [[unlikely]] return; }
L_0033E070:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033E118; } }
L_0033E078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E080u);  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x0033E080u) [[unlikely]] return; }
L_0033E080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E088u);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x0033E088u) [[unlikely]] return; }
L_0033E088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E090u);  if (depth < kMaxDepth) unit_000B(c, 24u, depth + 1u); else { c.pc = 0x0012C850u; return; } if (c.pc != 0x0033E090u) [[unlikely]] return; }
L_0033E090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E098u);  if (depth < kMaxDepth) unit_008F(c, 159u, depth + 1u); else { c.pc = 0x0033DE10u; return; } if (c.pc != 0x0033E098u) [[unlikely]] return; }
L_0033E098:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0033E150; } }
L_0033E0A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E0A8u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x0033E0A8u) [[unlikely]] return; }
L_0033E0A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033E118; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E0C4u); st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0044(c, 110u, depth + 1u); else { c.pc = 0x00210940u; return; } if (c.pc != 0x0033E0C4u) [[unlikely]] return; }
L_0033E0C4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E0D0u); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x0033E0D0u) [[unlikely]] return; }
L_0033E0D0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E0DCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008F(c, 271u, depth + 1u); else { c.pc = 0x0033E840u; return; } if (c.pc != 0x0033E0DCu) [[unlikely]] return; }
L_0033E0DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E0E4u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_008F(c, 276u, depth + 1u); else { c.pc = 0x0033E9C0u; return; } if (c.pc != 0x0033E0E4u) [[unlikely]] return; }
L_0033E0E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033E118; } }
    c.budget -= 1;
L_0033E0F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E0F8u);  if (depth < kMaxDepth) unit_008F(c, 277u, depth + 1u); else { c.pc = 0x0033E9D0u; return; } if (c.pc != 0x0033E0F8u) [[unlikely]] return; }
L_0033E0F8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0033E118; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 4u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E118u); st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x0033E118u) [[unlikely]] return; }
L_0033E118:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E120u);  if (depth < kMaxDepth) unit_006B(c, 17u, depth + 1u); else { c.pc = 0x002AC350u; return; } if (c.pc != 0x0033E120u) [[unlikely]] return; }
L_0033E120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E128u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x0033E128u) [[unlikely]] return; }
L_0033E128:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E130u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x0033E130u) [[unlikely]] return; }
L_0033E130:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E13Cu); set32(c.r[4], c.r[4].w[0] - 15136u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x0033E13Cu) [[unlikely]] return; }
L_0033E13C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E148u); set32(c.r[4], c.r[4].w[0] - 15024u);  if (depth < kMaxDepth) unit_0043(c, 416u, depth + 1u); else { c.pc = 0x0020FEF0u; return; } if (c.pc != 0x0033E148u) [[unlikely]] return; }
L_0033E148:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0033E150:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0033E160:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0033E1A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E180u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008F(c, 271u, depth + 1u); else { c.pc = 0x0033E840u; return; } if (c.pc != 0x0033E180u) [[unlikely]] return; }
L_0033E180:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 4976u);
    set32(c.r[5], 0u + 14308u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E1A0u); st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0006(c, 279u, depth + 1u); else { c.pc = 0x0011BDB8u; return; } if (c.pc != 0x0033E1A0u) [[unlikely]] return; }
L_0033E1A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E1A8u);  if (depth < kMaxDepth) unit_008F(c, 277u, depth + 1u); else { c.pc = 0x0033E9D0u; return; } if (c.pc != 0x0033E1A8u) [[unlikely]] return; }
L_0033E1A8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033E1D0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033E1C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033E1D8; } }
    c.budget -= 1;
L_0033E1C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0033E1E0; } }
L_0033E1D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0033E1E0; } }
L_0033E1D8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0033E1E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0033E1F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 3u)));
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[2].w[0] + 3u);  if (t) { goto L_0033E548; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 5008u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0033C000u < 16384u) { entry = entries_008F[(t - 0x0033C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0033E230:
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E23Cu); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0044(c, 107u, depth + 1u); else { c.pc = 0x00210910u; return; } if (c.pc != 0x0033E23Cu) [[unlikely]] return; }
L_0033E23C:
    c.budget -= 1;
L_0033E240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E248u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x0033E248u) [[unlikely]] return; }
L_0033E248:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033E548; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E264u); st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0044(c, 110u, depth + 1u); else { c.pc = 0x00210940u; return; } if (c.pc != 0x0033E264u) [[unlikely]] return; }
L_0033E264:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E270u); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x0033E270u) [[unlikely]] return; }
L_0033E270:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033E548; } }
L_0033E278:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E280u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x0033E280u) [[unlikely]] return; }
L_0033E280:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033E548; } }
    set32(c.r[7], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 40u);
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[7].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E2BCu); st16((c.r[2].w[0] + 14u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_004C(c, 171u, depth + 1u); else { c.pc = 0x00231B40u; return; } if (c.pc != 0x0033E2BCu) [[unlikely]] return; }
L_0033E2BC:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E2D8u); st8((c.r[2].w[0] + 629u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_004C(c, 171u, depth + 1u); else { c.pc = 0x00231B40u; return; } if (c.pc != 0x0033E2D8u) [[unlikely]] return; }
L_0033E2D8:
    set32(c.r[4], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E2E8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_004C(c, 171u, depth + 1u); else { c.pc = 0x00231B40u; return; } if (c.pc != 0x0033E2E8u) [[unlikely]] return; }
L_0033E2E8:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 601u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0033E548; } }
    c.budget -= 1;
L_0033E2F8:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 629u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] + 1u);  if (t) { goto L_0033E548; } }
    c.r[6].d[0] = 0ull + 0ull;
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E31Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004C(c, 171u, depth + 1u); else { c.pc = 0x00231B40u; return; } if (c.pc != 0x0033E31Cu) [[unlikely]] return; }
L_0033E31C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033E548; } }
    c.budget -= 1;
L_0033E328:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E330u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x0033E330u) [[unlikely]] return; }
L_0033E330:
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E340u); c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 14u)));  if (depth < kMaxDepth) unit_0090(c, 279u, depth + 1u); else { c.pc = 0x003425A0u; return; } if (c.pc != 0x0033E340u) [[unlikely]] return; }
L_0033E340:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033E378; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E364u); st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0090(c, 288u, depth + 1u); else { c.pc = 0x00342670u; return; } if (c.pc != 0x0033E364u) [[unlikely]] return; }
L_0033E364:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E36Cu);  if (depth < kMaxDepth) unit_0090(c, 285u, depth + 1u); else { c.pc = 0x00342620u; return; } if (c.pc != 0x0033E36Cu) [[unlikely]] return; }
L_0033E36C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033E548; } }
    c.budget -= 1;
L_0033E378:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E380u);  if (depth < kMaxDepth) unit_0090(c, 282u, depth + 1u); else { c.pc = 0x003425E0u; return; } if (c.pc != 0x0033E380u) [[unlikely]] return; }
L_0033E380:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033E3B8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E3A8u); st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0090(c, 289u, depth + 1u); else { c.pc = 0x00342680u; return; } if (c.pc != 0x0033E3A8u) [[unlikely]] return; }
L_0033E3A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E3B0u);  if (depth < kMaxDepth) unit_0090(c, 286u, depth + 1u); else { c.pc = 0x00342640u; return; } if (c.pc != 0x0033E3B0u) [[unlikely]] return; }
L_0033E3B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033E548; } }
L_0033E3B8:
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & 12288ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 4096ull;  if (t) { goto L_0033E548; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033E3E8; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0033E3E8; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0033E3E8:
    c.r[2].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033E408; } }
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_0033E408; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 2;
L_0033E408:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], c.r[2].w[0] + 14u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 14u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_0033E548; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E424u); st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_0090(c, 290u, depth + 1u); else { c.pc = 0x00342690u; return; } if (c.pc != 0x0033E424u) [[unlikely]] return; }
L_0033E424:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033E548; } }
    c.budget -= 1;
L_0033E430:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E438u);  if (depth < kMaxDepth) unit_0090(c, 287u, depth + 1u); else { c.pc = 0x00342660u; return; } if (c.pc != 0x0033E438u) [[unlikely]] return; }
L_0033E438:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033E548; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 9u);  if (t) { goto L_0033E470; } }
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 8u);
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E468u); st8((c.r[2].w[0] + 601u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x0033E468u) [[unlikely]] return; }
L_0033E468:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033E548; } }
L_0033E470:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 14u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E47Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_008F(c, 271u, depth + 1u); else { c.pc = 0x0033E840u; return; } if (c.pc != 0x0033E47Cu) [[unlikely]] return; }
L_0033E47C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_0033E490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E498u);  if (depth < kMaxDepth) unit_008F(c, 277u, depth + 1u); else { c.pc = 0x0033E9D0u; return; } if (c.pc != 0x0033E498u) [[unlikely]] return; }
L_0033E498:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033E4F0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033E4B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033E548; } }
    c.budget -= 1;
L_0033E4B8:
    set32(c.r[7], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 8u);
    set32(c.r[2], 0u + 7u);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 14u)));
    if (c.r[6].d[0] == 0) c.r[3].d[0] = c.r[2].d[0];
    st8((c.r[7].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E4E4u); st8((c.r[2].w[0] + 601u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x0033E4E4u) [[unlikely]] return; }
L_0033E4E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033E548; } }
    c.budget -= 1;
L_0033E4F0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 4u);
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 631u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0033E548; } }
    c.budget -= 1;
L_0033E510:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E518u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x0033E518u) [[unlikely]] return; }
L_0033E518:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033E548; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E528u);  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x0033E528u) [[unlikely]] return; }
L_0033E528:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E530u);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x0033E530u) [[unlikely]] return; }
L_0033E530:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E538u);  if (depth < kMaxDepth) unit_000B(c, 24u, depth + 1u); else { c.pc = 0x0012C850u; return; } if (c.pc != 0x0033E538u) [[unlikely]] return; }
L_0033E538:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 3u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 6u);  if (t) { goto L_0033E580; } }
L_0033E548:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E550u);  if (depth < kMaxDepth) unit_006B(c, 17u, depth + 1u); else { c.pc = 0x002AC350u; return; } if (c.pc != 0x0033E550u) [[unlikely]] return; }
L_0033E550:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E558u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x0033E558u) [[unlikely]] return; }
L_0033E558:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E560u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x0033E560u) [[unlikely]] return; }
L_0033E560:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E56Cu); set32(c.r[4], c.r[4].w[0] - 15136u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x0033E56Cu) [[unlikely]] return; }
L_0033E56C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E578u); set32(c.r[4], c.r[4].w[0] - 15024u);  if (depth < kMaxDepth) unit_0043(c, 416u, depth + 1u); else { c.pc = 0x0020FEF0u; return; } if (c.pc != 0x0033E578u) [[unlikely]] return; }
L_0033E578:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0033E580:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033E5A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 3u)));
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], c.r[2].w[0] + 3u);  if (t) { goto L_0033E778; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 5056u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0033C000u < 16384u) { entry = entries_008F[(t - 0x0033C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0033E5D8:
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E5E4u); st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0044(c, 107u, depth + 1u); else { c.pc = 0x00210910u; return; } if (c.pc != 0x0033E5E4u) [[unlikely]] return; }
L_0033E5E4:
    c.budget -= 1;
L_0033E5E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E5F0u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x0033E5F0u) [[unlikely]] return; }
L_0033E5F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033E778; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E60Cu); st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0044(c, 110u, depth + 1u); else { c.pc = 0x00210940u; return; } if (c.pc != 0x0033E60Cu) [[unlikely]] return; }
L_0033E60C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E618u); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x0033E618u) [[unlikely]] return; }
L_0033E618:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033E778; } }
L_0033E620:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E628u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x0033E628u) [[unlikely]] return; }
L_0033E628:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033E778; } }
    set32(c.r[7], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 40u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[7].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E65Cu); st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_004C(c, 171u, depth + 1u); else { c.pc = 0x00231B40u; return; } if (c.pc != 0x0033E65Cu) [[unlikely]] return; }
L_0033E65C:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E678u); st8((c.r[2].w[0] + 629u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_004C(c, 171u, depth + 1u); else { c.pc = 0x00231B40u; return; } if (c.pc != 0x0033E678u) [[unlikely]] return; }
L_0033E678:
    set32(c.r[4], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E688u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_004C(c, 171u, depth + 1u); else { c.pc = 0x00231B40u; return; } if (c.pc != 0x0033E688u) [[unlikely]] return; }
L_0033E688:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 601u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0033E778; } }
    c.budget -= 1;
L_0033E698:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 629u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] + 1u);  if (t) { goto L_0033E778; } }
    set32(c.r[5], 0u + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 2u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E6C4u); st16((c.r[2].w[0] + 14u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_004C(c, 171u, depth + 1u); else { c.pc = 0x00231B40u; return; } if (c.pc != 0x0033E6C4u) [[unlikely]] return; }
L_0033E6C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033E778; } }
    c.budget -= 1;
L_0033E6D0:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E6DCu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 271u, depth + 1u); else { c.pc = 0x0033E840u; return; } if (c.pc != 0x0033E6DCu) [[unlikely]] return; }
L_0033E6DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E6E4u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_008F(c, 276u, depth + 1u); else { c.pc = 0x0033E9C0u; return; } if (c.pc != 0x0033E6E4u) [[unlikely]] return; }
L_0033E6E4:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_0033E6F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E700u);  if (depth < kMaxDepth) unit_008F(c, 277u, depth + 1u); else { c.pc = 0x0033E9D0u; return; } if (c.pc != 0x0033E700u) [[unlikely]] return; }
L_0033E700:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[6], 0u + 6u);  if (t) { goto L_0033E778; } }
    set32(c.r[3], 0u + 7u);
    if (c.r[2].d[0] != 0) c.r[6].d[0] = c.r[3].d[0];
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], 0u + 8u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    st8((c.r[2].w[0] + 631u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E734u); st8((c.r[2].w[0] + 601u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x0033E734u) [[unlikely]] return; }
L_0033E734:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033E778; } }
    c.budget -= 1;
L_0033E740:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E748u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x0033E748u) [[unlikely]] return; }
L_0033E748:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033E778; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E758u);  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x0033E758u) [[unlikely]] return; }
L_0033E758:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E760u);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x0033E760u) [[unlikely]] return; }
L_0033E760:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E768u);  if (depth < kMaxDepth) unit_000B(c, 24u, depth + 1u); else { c.pc = 0x0012C850u; return; } if (c.pc != 0x0033E768u) [[unlikely]] return; }
L_0033E768:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 3u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 5u);  if (t) { goto L_0033E7B0; } }
L_0033E778:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E780u);  if (depth < kMaxDepth) unit_006B(c, 17u, depth + 1u); else { c.pc = 0x002AC350u; return; } if (c.pc != 0x0033E780u) [[unlikely]] return; }
L_0033E780:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E788u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x0033E788u) [[unlikely]] return; }
L_0033E788:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E790u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x0033E790u) [[unlikely]] return; }
L_0033E790:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E79Cu); set32(c.r[4], c.r[4].w[0] - 15136u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x0033E79Cu) [[unlikely]] return; }
L_0033E79C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E7A8u); set32(c.r[4], c.r[4].w[0] - 15024u);  if (depth < kMaxDepth) unit_0043(c, 416u, depth + 1u); else { c.pc = 0x0020FEF0u; return; } if (c.pc != 0x0033E7A8u) [[unlikely]] return; }
L_0033E7A8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0033E7B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0033E7C0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033ABF0u | kUnwind; return; } [[clang::musttail]] return unit_008E(c, 263u, depth); }
L_0033E7D0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 601u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0033E7F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], c.r[2].w[0] + 4u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033E820; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E820u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_008F(c, 271u, depth + 1u); else { c.pc = 0x0033E840u; return; } if (c.pc != 0x0033E820u) [[unlikely]] return; }
L_0033E820:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E828u);  if (depth < kMaxDepth) unit_008F(c, 277u, depth + 1u); else { c.pc = 0x0033E9D0u; return; } if (c.pc != 0x0033E828u) [[unlikely]] return; }
L_0033E828:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0033E840:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E868u); set32(c.r[16], c.r[16].w[0] + 10112u);  if (depth < kMaxDepth) unit_0049(c, 163u, depth + 1u); else { c.pc = 0x002251C0u; return; } if (c.pc != 0x0033E868u) [[unlikely]] return; }
L_0033E868:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E878u); set32(c.r[6], 0u + 6216u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0033E878u) [[unlikely]] return; }
L_0033E878:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[1].w[0] + 10130u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[1].w[0] + 10128u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] + 10131u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8617u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E8B0u); st8((c.r[1].w[0] + 10136u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008E(c, 337u, depth + 1u); else { c.pc = 0x0033B920u; return; } if (c.pc != 0x0033E8B0u) [[unlikely]] return; }
L_0033E8B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[5], 0u - 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 10131u)));
    set32(c.r[3], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] + 10158u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st8((c.r[1].w[0] + 10165u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0033E8F8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 22564u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033E8E8; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 44u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0033E8E8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 45u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0033E930; } }
    c.budget -= 1;
L_0033E8F8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033E918; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 22560u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 44u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0033E920; } }
    c.budget -= 1;
L_0033E918:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 44u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0033E920:
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0] + 45u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 44u)));
    st8((c.r[16].w[0] + 25u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0033E930:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.r[4].d[0] = c.r[3].d[0] | 12288ull;
    st32((c.r[16].w[0] + 32u), c.r[4].w[0]);
    set32(c.r[3], 0u + 2u);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; st32((c.r[16].w[0] + 28u), c.r[4].w[0]);  if (t) { goto L_0033E958; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00F50000u);
    c.r[3].d[0] = c.r[3].d[0] | 59392ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[3].w[0]);  if (t) { goto L_0033E968; } }
L_0033E958:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00F70000u);
    c.r[3].d[0] = c.r[3].d[0] | 38912ull;
    st32((c.r[16].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 4;
L_0033E968:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[3].d[0];  if (t) { goto L_0033E980; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0033E9A0; } }
    c.budget -= 1;
L_0033E980:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 18448u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E99Cu); set32(c.r[5], ld32((c.r[16].w[0] + 36u)));  if (depth < kMaxDepth) unit_0045(c, 59u, depth + 1u); else { c.pc = 0x002147C0u; return; } if (c.pc != 0x0033E99Cu) [[unlikely]] return; }
L_0033E99C:
    c.budget -= 1;
L_0033E9A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0033E9C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[1].w[0] + 10135u), static_cast<std::uint8_t>(c.r[4].w[0]));  c.pc = t; return; }
L_0033E9D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 10112u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], c.r[2].w[0] + 18512u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EA00u); set32(c.r[4], c.r[4].w[0] + 10112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033EA00u) [[unlikely]] return; }
L_0033EA00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EA08u);  if (depth < kMaxDepth) unit_008E(c, 341u, depth + 1u); else { c.pc = 0x0033B9D0u; return; } if (c.pc != 0x0033EA08u) [[unlikely]] return; }
L_0033EA08:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 10128u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0033EA20:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 6004u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 6005u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_0033EA30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0033EB40; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0033EB28; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0033EA70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033EBA0; } }
    c.budget -= 1;
L_0033EA70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EA78u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x0033EA78u) [[unlikely]] return; }
L_0033EA78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033EBA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EA88u); set32(c.r[4], ld32((c.r[16].w[0] + 36u)));  if (depth < kMaxDepth) unit_008F(c, 83u, depth + 1u); else { c.pc = 0x0033D350u; return; } if (c.pc != 0x0033EA88u) [[unlikely]] return; }
L_0033EA88:
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EA94u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 418u, depth + 1u); else { c.pc = 0x003438C0u; return; } if (c.pc != 0x0033EA94u) [[unlikely]] return; }
L_0033EA94:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 23u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0033EAD0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 50u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EABCu); st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x0033EABCu) [[unlikely]] return; }
L_0033EABC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EAC4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0090(c, 313u, depth + 1u); else { c.pc = 0x00342970u; return; } if (c.pc != 0x0033EAC4u) [[unlikely]] return; }
L_0033EAC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033EBA0; } }
    c.budget -= 1;
L_0033EAD0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 19u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0033EB10; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0033EB00; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0033EB18; } }
    c.budget -= 1;
L_0033EB00:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0033EB18; } }
    c.budget -= 1;
L_0033EB10:
    set32(c.r[3], 0u + 5u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0033EB18:
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0033EBA0; } }
    c.budget -= 1;
L_0033EB28:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 6004u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033EBA0; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_0033EB40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EB48u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 314u, depth + 1u); else { c.pc = 0x00342980u; return; } if (c.pc != 0x0033EB48u) [[unlikely]] return; }
L_0033EB48:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033EB80; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033EB68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033EBA0; } }
L_0033EB68:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EB74u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x0033EB74u) [[unlikely]] return; }
L_0033EB74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033EAD0u | kUnwind; return; } goto L_0033EAD0; } }
    c.budget -= 1;
L_0033EB80:
    set32(c.r[3], 0u + 6u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EB9Cu); st8((c.r[16].w[0] + 23u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x0033EB9Cu) [[unlikely]] return; }
L_0033EB9C:
    c.budget -= 1;
L_0033EBA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033EBB0:
    set32(c.r[3], 0u + 9u);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033EA20u | kUnwind; return; } goto L_0033EA20; }
L_0033EBC0:
    set32(c.r[3], 0u + 2u);
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033EA20u | kUnwind; return; } goto L_0033EA20; }
L_0033EBE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0033EC70; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0033EC10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033EC98; } }
    c.budget -= 1;
L_0033EC10:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 10u);
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EC28u); st8((c.r[16].w[0] + 6208u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0091(c, 59u, depth + 1u); else { c.pc = 0x003447C0u; return; } if (c.pc != 0x0033EC28u) [[unlikely]] return; }
L_0033EC28:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0033EC50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EC44u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 63u, depth + 1u); else { c.pc = 0x00344840u; return; } if (c.pc != 0x0033EC44u) [[unlikely]] return; }
L_0033EC44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033EC70; } }
    c.budget -= 1;
L_0033EC50:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 5u);  if (t) { goto L_0033EC68; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0033EC70; } }
    c.budget -= 1;
L_0033EC68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EC70u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 67u, depth + 1u); else { c.pc = 0x003448A0u; return; } if (c.pc != 0x0033EC70u) [[unlikely]] return; }
L_0033EC70:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_0033EC98; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_0033EC98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033ECB0:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 4u);
    st8((c.r[4].w[0] + 46u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 19u)));
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0033ED10; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0033ED00; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0033ECF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033ED18; } }
    c.budget -= 1;
L_0033ECF0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 18u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[3].w[0] + 2u);  if (t) { goto L_0033ED18; } }
    c.budget -= 1;
L_0033ED00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 18u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[3].w[0] + 6u);  if (t) { goto L_0033ED18; } }
    c.budget -= 1;
L_0033ED10:
    set32(c.r[5], 0u + 10u);
    c.budget -= 2;
L_0033ED18:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033EA20u | kUnwind; return; } goto L_0033EA20; }
L_0033ED20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0033EEA8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0033ED58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033EF00; } }
    c.budget -= 1;
L_0033ED58:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 6004u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033EF00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033ED6Cu); c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 44u)));  if (depth < kMaxDepth) unit_0090(c, 279u, depth + 1u); else { c.pc = 0x003425A0u; return; } if (c.pc != 0x0033ED6Cu) [[unlikely]] return; }
L_0033ED6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033EDD0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 46u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033ED90u); st8((c.r[17].w[0] + 22u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0090(c, 288u, depth + 1u); else { c.pc = 0x00342670u; return; } if (c.pc != 0x0033ED90u) [[unlikely]] return; }
L_0033ED90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033ED98u);  if (depth < kMaxDepth) unit_0090(c, 285u, depth + 1u); else { c.pc = 0x00342620u; return; } if (c.pc != 0x0033ED98u) [[unlikely]] return; }
L_0033ED98:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 19u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0033EF00; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 44u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);  if (t) { goto L_0033EF00; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[1].w[0] - 8617u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 24u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 25u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 22u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0033EF00; } }
L_0033EDD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EDD8u);  if (depth < kMaxDepth) unit_0090(c, 282u, depth + 1u); else { c.pc = 0x003425E0u; return; } if (c.pc != 0x0033EDD8u) [[unlikely]] return; }
L_0033EDD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033EE10; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 46u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EDFCu); st8((c.r[17].w[0] + 22u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0090(c, 289u, depth + 1u); else { c.pc = 0x00342680u; return; } if (c.pc != 0x0033EDFCu) [[unlikely]] return; }
L_0033EDFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EE04u);  if (depth < kMaxDepth) unit_0090(c, 286u, depth + 1u); else { c.pc = 0x00342640u; return; } if (c.pc != 0x0033EE04u) [[unlikely]] return; }
L_0033EE04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033EF00; } }
    c.budget -= 1;
L_0033EE10:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0033EE30; } }
    c.r[2].d[0] = c.r[4].d[0] | 2ull;
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
L_0033EE30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EE38u); c.r[4].d[0] = c.r[4].d[0] & 255ull;  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x0033EE38u) [[unlikely]] return; }
L_0033EE38:
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033EE68; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 45u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0033EE68; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0033EE68:
    c.r[3].d[0] = c.r[4].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033EE88; } }
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_0033EE88; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 45u)));
    set32(c.r[16], c.r[3].w[0] - 1u);
    c.budget -= 2;
L_0033EE88:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_0033EF00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EE9Cu); st8((c.r[17].w[0] + 44u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_0090(c, 290u, depth + 1u); else { c.pc = 0x00342690u; return; } if (c.pc != 0x0033EE9Cu) [[unlikely]] return; }
L_0033EE9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033EF00; } }
    c.budget -= 1;
L_0033EEA8:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 22u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033EED0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EEBCu);  if (depth < kMaxDepth) unit_0090(c, 287u, depth + 1u); else { c.pc = 0x00342660u; return; } if (c.pc != 0x0033EEBCu) [[unlikely]] return; }
L_0033EEBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 10u);  if (t) { goto L_0033EF00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0033EEF0; } }
    c.budget -= 1;
L_0033EED0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 18u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_0033EEE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0033EEF0; } }
L_0033EEE8:
    set32(c.r[3], 0u + 4u);
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0033EEF0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EF00u); st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x0033EF00u) [[unlikely]] return; }
L_0033EF00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033EF20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0033EFE0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0033EF70; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0033EF58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F290; } }
L_0033EF58:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 6004u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_0033F290; } }
    set32(c.r[5], 0u + 11u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EF70u); st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x0033EF70u) [[unlikely]] return; }
L_0033EF70:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 6004u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033F290; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 6016u), 0u);
    st32((c.r[16].w[0] + 6080u), 0u);
    st32((c.r[16].w[0] + 6144u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 18u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0033EFC0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EFB8u); c.r[6].d[0] = c.r[2].d[0] | 45712ull;  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0033EFB8u) [[unlikely]] return; }
L_0033EFB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033EFD0; } }
L_0033EFC0:
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EFD0u); set32(c.r[6], 0u + 7148u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0033EFD0u) [[unlikely]] return; }
L_0033EFD0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EFE0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_008F(c, 18u, depth + 1u); else { c.pc = 0x0033C490u; return; } if (c.pc != 0x0033EFE0u) [[unlikely]] return; }
L_0033EFE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EFE8u);  if (depth < kMaxDepth) unit_008F(c, 78u, depth + 1u); else { c.pc = 0x0033D2E0u; return; } if (c.pc != 0x0033EFE8u) [[unlikely]] return; }
L_0033EFE8:
    set32(c.r[3], 0u - 256u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; st32((c.r[16].w[0] + 6000u), c.r[2].w[0]);  if (t) { goto L_0033F280; } }
    set32(c.r[3], 0u - 251u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 252u);  if (t) { goto L_0033F268; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033F228; } }
    set32(c.r[3], 0u - 253u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 254u);  if (t) { goto L_0033F1C0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033F148; } }
    set32(c.r[3], 0u - 255u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 1u);  if (t) { goto L_0033F130; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033F290; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033F040; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F290; } }
L_0033F040:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 19u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F054u); c.r[5].d[0] = c.r[2].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_0090(c, 385u, depth + 1u); else { c.pc = 0x00343310u; return; } if (c.pc != 0x0033F054u) [[unlikely]] return; }
L_0033F054:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u - 256u);  if (t) { goto L_0033F078; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 6000u), c.r[3].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F06Cu); set32(c.r[5], 0u + 33u);  if (depth < kMaxDepth) unit_008F(c, 291u, depth + 1u); else { c.pc = 0x0033EBB0u; return; } if (c.pc != 0x0033F06Cu) [[unlikely]] return; }
L_0033F06C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F290; } }
    c.budget -= 1;
L_0033F078:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 18u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0033F0C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F090u);  if (depth < kMaxDepth) unit_0090(c, 292u, depth + 1u); else { c.pc = 0x003426B0u; return; } if (c.pc != 0x0033F090u) [[unlikely]] return; }
L_0033F090:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0033F0A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F0A0u);  if (depth < kMaxDepth) unit_008F(c, 292u, depth + 1u); else { c.pc = 0x0033EBC0u; return; } if (c.pc != 0x0033F0A0u) [[unlikely]] return; }
L_0033F0A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F290; } }
L_0033F0A8:
    set32(c.r[3], 0u - 256u);
    st32((c.r[16].w[0] + 6000u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F0BCu); set32(c.r[5], 0u + 18u);  if (depth < kMaxDepth) unit_008F(c, 291u, depth + 1u); else { c.pc = 0x0033EBB0u; return; } if (c.pc != 0x0033F0BCu) [[unlikely]] return; }
L_0033F0BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F290; } }
    c.budget -= 1;
L_0033F0C8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 19u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0033F100; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F0DCu);  if (depth < kMaxDepth) unit_0090(c, 405u, depth + 1u); else { c.pc = 0x00343530u; return; } if (c.pc != 0x0033F0DCu) [[unlikely]] return; }
L_0033F0DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F0E4u);  if (depth < kMaxDepth) unit_0090(c, 308u, depth + 1u); else { c.pc = 0x00342880u; return; } if (c.pc != 0x0033F0E4u) [[unlikely]] return; }
L_0033F0E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F0ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 306u, depth + 1u); else { c.pc = 0x00342850u; return; } if (c.pc != 0x0033F0ECu) [[unlikely]] return; }
L_0033F0EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F0F8u); set32(c.r[5], 0u + 34u);  if (depth < kMaxDepth) unit_008F(c, 291u, depth + 1u); else { c.pc = 0x0033EBB0u; return; } if (c.pc != 0x0033F0F8u) [[unlikely]] return; }
L_0033F0F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F290; } }
L_0033F100:
    set32(c.r[2], 0u + 5u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], 0u + 8u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 22u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F120u); st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x0033F120u) [[unlikely]] return; }
L_0033F120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F128u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0090(c, 313u, depth + 1u); else { c.pc = 0x00342970u; return; } if (c.pc != 0x0033F128u) [[unlikely]] return; }
L_0033F128:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F290; } }
L_0033F130:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F13Cu); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_008F(c, 291u, depth + 1u); else { c.pc = 0x0033EBB0u; return; } if (c.pc != 0x0033F13Cu) [[unlikely]] return; }
L_0033F13C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F290; } }
    c.budget -= 1;
L_0033F148:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 19u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033F170; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 18u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F164u); set32(c.r[5], c.r[3].w[0] + 17u);  if (depth < kMaxDepth) unit_008F(c, 291u, depth + 1u); else { c.pc = 0x0033EBB0u; return; } if (c.pc != 0x0033F164u) [[unlikely]] return; }
L_0033F164:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F290; } }
    c.budget -= 1;
L_0033F170:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 18u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0033F190; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F188u);  if (depth < kMaxDepth) unit_008F(c, 292u, depth + 1u); else { c.pc = 0x0033EBC0u; return; } if (c.pc != 0x0033F188u) [[unlikely]] return; }
L_0033F188:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F290; } }
L_0033F190:
    set32(c.r[2], 0u + 5u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], 0u + 7u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 36u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F1B0u); st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x0033F1B0u) [[unlikely]] return; }
L_0033F1B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F1B8u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0090(c, 313u, depth + 1u); else { c.pc = 0x00342970u; return; } if (c.pc != 0x0033F1B8u) [[unlikely]] return; }
L_0033F1B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F290; } }
L_0033F1C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 19u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033F1E8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 18u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F1DCu); set32(c.r[5], c.r[3].w[0] + 17u);  if (depth < kMaxDepth) unit_008F(c, 291u, depth + 1u); else { c.pc = 0x0033EBB0u; return; } if (c.pc != 0x0033F1DCu) [[unlikely]] return; }
L_0033F1DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F290; } }
    c.budget -= 1;
L_0033F1E8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 18u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0033F208; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F200u);  if (depth < kMaxDepth) unit_008F(c, 292u, depth + 1u); else { c.pc = 0x0033EBC0u; return; } if (c.pc != 0x0033F200u) [[unlikely]] return; }
L_0033F200:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F290; } }
L_0033F208:
    set32(c.r[2], 0u + 8u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F21Cu); st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0090(c, 342u, depth + 1u); else { c.pc = 0x00342CF0u; return; } if (c.pc != 0x0033F21Cu) [[unlikely]] return; }
L_0033F21C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F290; } }
    c.budget -= 1;
L_0033F228:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 19u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033F250; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 18u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F244u); set32(c.r[5], c.r[3].w[0] + 17u);  if (depth < kMaxDepth) unit_008F(c, 291u, depth + 1u); else { c.pc = 0x0033EBB0u; return; } if (c.pc != 0x0033F244u) [[unlikely]] return; }
L_0033F244:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F290; } }
    c.budget -= 1;
L_0033F250:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 18u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F260u); set32(c.r[5], c.r[3].w[0] + 13u);  if (depth < kMaxDepth) unit_008F(c, 291u, depth + 1u); else { c.pc = 0x0033EBB0u; return; } if (c.pc != 0x0033F260u) [[unlikely]] return; }
L_0033F260:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F290; } }
L_0033F268:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F274u); set32(c.r[5], 0u + 51u);  if (depth < kMaxDepth) unit_008F(c, 291u, depth + 1u); else { c.pc = 0x0033EBB0u; return; } if (c.pc != 0x0033F274u) [[unlikely]] return; }
L_0033F274:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F290; } }
    c.budget -= 1;
L_0033F280:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F28Cu); set32(c.r[5], 0u + 52u);  if (depth < kMaxDepth) unit_008F(c, 291u, depth + 1u); else { c.pc = 0x0033EBB0u; return; } if (c.pc != 0x0033F28Cu) [[unlikely]] return; }
L_0033F28C:
    c.budget -= 1;
L_0033F290:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033F2A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0033F5A0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0033F3B0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0033F360; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0033F2F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F5F8; } }
    c.budget -= 1;
L_0033F2F0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 6004u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033F5F8; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[2], 0u + 20u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], 0u + 11u);
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 10u), static_cast<std::uint16_t>(0u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F31Cu); st8((c.r[16].w[0] + 51u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x0033F31Cu) [[unlikely]] return; }
L_0033F31C:
    set32(c.r[17], c.r[16].w[0] + 80u);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0033F328:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 255u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F338u); set32(c.r[6], 0u + 280u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0033F338u) [[unlikely]] return; }
L_0033F338:
    set32(c.r[4], c.r[17].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F344u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 298u, depth + 1u); else { c.pc = 0x00342790u; return; } if (c.pc != 0x0033F344u) [[unlikely]] return; }
L_0033F344:
    set32(c.r[4], c.r[17].w[0] + 85u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F350u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 302u, depth + 1u); else { c.pc = 0x003427F0u; return; } if (c.pc != 0x0033F350u) [[unlikely]] return; }
L_0033F350:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 280u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033F328u | kUnwind; return; } goto L_0033F328; } }
L_0033F360:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 6004u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033F5F8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F384u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 18u)));  if (depth < kMaxDepth) unit_008E(c, 337u, depth + 1u); else { c.pc = 0x0033B920u; return; } if (c.pc != 0x0033F384u) [[unlikely]] return; }
L_0033F384:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 44u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F3ACu); set32(c.r[5], c.r[2].w[0] + 80u);  if (depth < kMaxDepth) unit_008E(c, 370u, depth + 1u); else { c.pc = 0x0033BF20u; return; } if (c.pc != 0x0033F3ACu) [[unlikely]] return; }
L_0033F3AC:
    c.budget -= 1;
L_0033F3B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F3B8u);  if (depth < kMaxDepth) unit_008F(c, 78u, depth + 1u); else { c.pc = 0x0033D2E0u; return; } if (c.pc != 0x0033F3B8u) [[unlikely]] return; }
L_0033F3B8:
    set32(c.r[3], 0u - 256u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; st32((c.r[16].w[0] + 6000u), c.r[2].w[0]);  if (t) { goto L_0033F588; } }
    set32(c.r[3], 0u - 254u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033F568; } }
    set32(c.r[3], 0u - 255u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033F550; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033F5F8; } }
    set32(c.r[3], 0u - 253u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033F4C0; } }
    set32(c.r[3], 0u - 251u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033F490; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033F410; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F5F8; } }
L_0033F410:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F438u); set32(c.r[5], c.r[2].w[0] + 80u);  if (depth < kMaxDepth) unit_0090(c, 406u, depth + 1u); else { c.pc = 0x00343550u; return; } if (c.pc != 0x0033F438u) [[unlikely]] return; }
L_0033F438:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033F490; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[5], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[16].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 44u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F484u); set32(c.r[6], c.r[2].w[0] + 80u);  if (depth < kMaxDepth) unit_008E(c, 357u, depth + 1u); else { c.pc = 0x0033BC20u; return; } if (c.pc != 0x0033F484u) [[unlikely]] return; }
L_0033F484:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F5F8; } }
    c.budget -= 1;
L_0033F490:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10u)));
    set32(c.r[5], 0u + 254u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[16].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st8((c.r[3].w[0] + 80u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 12;
L_0033F4C0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[4].d[0] = c.r[3].d[0] << 48;
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 51u)));
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0033F4F0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0033F5F8; } }
L_0033F4F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 19u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033F520; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033F520; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F514u); set32(c.r[5], 0u + 19u);  if (depth < kMaxDepth) unit_008F(c, 291u, depth + 1u); else { c.pc = 0x0033EBB0u; return; } if (c.pc != 0x0033F514u) [[unlikely]] return; }
L_0033F514:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F5F8; } }
    c.budget -= 1;
L_0033F520:
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F544u); st8((c.r[16].w[0] + 50u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x0033F544u) [[unlikely]] return; }
L_0033F544:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F5F8; } }
    c.budget -= 1;
L_0033F550:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F55Cu); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_008F(c, 291u, depth + 1u); else { c.pc = 0x0033EBB0u; return; } if (c.pc != 0x0033F55Cu) [[unlikely]] return; }
L_0033F55C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F5F8; } }
    c.budget -= 1;
L_0033F568:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 19u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033F520u | kUnwind; return; } goto L_0033F520; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F580u); set32(c.r[5], 0u + 19u);  if (depth < kMaxDepth) unit_008F(c, 291u, depth + 1u); else { c.pc = 0x0033EBB0u; return; } if (c.pc != 0x0033F580u) [[unlikely]] return; }
L_0033F580:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F5F8; } }
L_0033F588:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F594u); set32(c.r[5], 0u + 52u);  if (depth < kMaxDepth) unit_008F(c, 291u, depth + 1u); else { c.pc = 0x0033EBB0u; return; } if (c.pc != 0x0033F594u) [[unlikely]] return; }
L_0033F594:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F5F8; } }
    c.budget -= 1;
L_0033F5A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F5A8u);  if (depth < kMaxDepth) unit_008F(c, 78u, depth + 1u); else { c.pc = 0x0033D2E0u; return; } if (c.pc != 0x0033F5A8u) [[unlikely]] return; }
L_0033F5A8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; st32((c.r[16].w[0] + 6000u), c.r[2].w[0]);  if (t) { goto L_0033F5F8; } }
    set32(c.r[3], 0u - 256u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033F588u | kUnwind; return; } goto L_0033F588; } }
    set32(c.r[3], 0u - 254u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033F568u | kUnwind; return; } goto L_0033F568; } }
    set32(c.r[3], 0u - 255u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033F550u | kUnwind; return; } goto L_0033F550; } }
    set32(c.r[3], 0u - 253u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033F4C0u | kUnwind; return; } goto L_0033F4C0; } }
    set32(c.r[3], 0u - 251u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033F4C0u | kUnwind; return; } goto L_0033F4C0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033F4C0u | kUnwind; return; } goto L_0033F4C0; } }
L_0033F5F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0033F610:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0033F660; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0033F640; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F708; } }
L_0033F640:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 6004u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033F708; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F65Cu); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008E(c, 349u, depth + 1u); else { c.pc = 0x0033BA80u; return; } if (c.pc != 0x0033F65Cu) [[unlikely]] return; }
L_0033F65C:
    c.budget -= 1;
L_0033F660:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F668u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 44u)));  if (depth < kMaxDepth) unit_008F(c, 79u, depth + 1u); else { c.pc = 0x0033D2F0u; return; } if (c.pc != 0x0033F668u) [[unlikely]] return; }
L_0033F668:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0033F6B8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033F6A8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_0033F6A8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033F698; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F6C0; } }
    c.budget -= 1;
L_0033F698:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7u)));
    set32(c.r[2], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0033F6C0; } }
L_0033F6A8:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F6B8u); st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0090(c, 286u, depth + 1u); else { c.pc = 0x00342640u; return; } if (c.pc != 0x0033F6B8u) [[unlikely]] return; }
L_0033F6B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F708; } }
L_0033F6C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F6C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 314u, depth + 1u); else { c.pc = 0x00342980u; return; } if (c.pc != 0x0033F6C8u) [[unlikely]] return; }
L_0033F6C8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0033F6F8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033F6E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F708; } }
    c.budget -= 1;
L_0033F6E8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7u)));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0033F708; } }
L_0033F6F8:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_0033F708:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033F720:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0033F7A0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0033F768; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0033F758; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F7F8; } }
L_0033F758:
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F768u); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x0033F768u) [[unlikely]] return; }
L_0033F768:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 6004u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0033F7F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F77Cu);  if (depth < kMaxDepth) unit_0090(c, 405u, depth + 1u); else { c.pc = 0x00343530u; return; } if (c.pc != 0x0033F77Cu) [[unlikely]] return; }
L_0033F77C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F784u);  if (depth < kMaxDepth) unit_0090(c, 308u, depth + 1u); else { c.pc = 0x00342880u; return; } if (c.pc != 0x0033F784u) [[unlikely]] return; }
L_0033F784:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[3], 0u + 60u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 6000u), 0u);
    c.budget -= 7;
L_0033F7A0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0033F7F8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 6000u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0033F7E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F7D0u);  if (depth < kMaxDepth) unit_0090(c, 306u, depth + 1u); else { c.pc = 0x00342850u; return; } if (c.pc != 0x0033F7D0u) [[unlikely]] return; }
L_0033F7D0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F7DCu); set32(c.r[5], 0u + 34u);  if (depth < kMaxDepth) unit_008F(c, 291u, depth + 1u); else { c.pc = 0x0033EBB0u; return; } if (c.pc != 0x0033F7DCu) [[unlikely]] return; }
L_0033F7DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F7F8; } }
    c.budget -= 1;
L_0033F7E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F7F4u); set32(c.r[5], 0u + 33u);  if (depth < kMaxDepth) unit_008F(c, 291u, depth + 1u); else { c.pc = 0x0033EBB0u; return; } if (c.pc != 0x0033F7F4u) [[unlikely]] return; }
L_0033F7F4:
    c.budget -= 1;
L_0033F7F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033F810:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0033F878; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0033F858; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0033F848; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F8D0; } }
L_0033F848:
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F858u); set32(c.r[5], 0u + 37u);  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x0033F858u) [[unlikely]] return; }
L_0033F858:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 6004u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033F8D0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F878u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 44u)));  if (depth < kMaxDepth) unit_008F(c, 51u, depth + 1u); else { c.pc = 0x0033CCA0u; return; } if (c.pc != 0x0033F878u) [[unlikely]] return; }
L_0033F878:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F880u);  if (depth < kMaxDepth) unit_008F(c, 78u, depth + 1u); else { c.pc = 0x0033D2E0u; return; } if (c.pc != 0x0033F880u) [[unlikely]] return; }
L_0033F880:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; st32((c.r[16].w[0] + 6000u), c.r[2].w[0]);  if (t) { goto L_0033F8D0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033F8A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F8C0; } }
    c.budget -= 1;
L_0033F8A0:
    set32(c.r[2], 0u + 8u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F8B4u); st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0090(c, 342u, depth + 1u); else { c.pc = 0x00342CF0u; return; } if (c.pc != 0x0033F8B4u) [[unlikely]] return; }
L_0033F8B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F8D0; } }
    c.budget -= 1;
L_0033F8C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F8CCu); set32(c.r[5], 0u + 38u);  if (depth < kMaxDepth) unit_008F(c, 291u, depth + 1u); else { c.pc = 0x0033EBB0u; return; } if (c.pc != 0x0033F8CCu) [[unlikely]] return; }
L_0033F8CC:
    c.budget -= 1;
L_0033F8D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033F8E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0033F970; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0033F928; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0033F918; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033FA00; } }
L_0033F918:
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F928u); set32(c.r[5], 0u + 24u);  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x0033F928u) [[unlikely]] return; }
L_0033F928:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 6004u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033FA00; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 19u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0033F958; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 8617u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0033F958:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F960u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 369u, depth + 1u); else { c.pc = 0x003430C0u; return; } if (c.pc != 0x0033F960u) [[unlikely]] return; }
L_0033F960:
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F96Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 44u)));  if (depth < kMaxDepth) unit_008F(c, 28u, depth + 1u); else { c.pc = 0x0033C7E0u; return; } if (c.pc != 0x0033F96Cu) [[unlikely]] return; }
L_0033F96C:
    c.budget -= 1;
L_0033F970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F978u);  if (depth < kMaxDepth) unit_008F(c, 78u, depth + 1u); else { c.pc = 0x0033D2E0u; return; } if (c.pc != 0x0033F978u) [[unlikely]] return; }
L_0033F978:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; st32((c.r[16].w[0] + 6000u), c.r[2].w[0]);  if (t) { goto L_0033FA00; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033F998; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F9F0; } }
    c.budget -= 1;
L_0033F998:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F9A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0090(c, 385u, depth + 1u); else { c.pc = 0x00343310u; return; } if (c.pc != 0x0033F9A4u) [[unlikely]] return; }
L_0033F9A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F9ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 405u, depth + 1u); else { c.pc = 0x00343530u; return; } if (c.pc != 0x0033F9ACu) [[unlikely]] return; }
L_0033F9AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F9B4u);  if (depth < kMaxDepth) unit_0090(c, 308u, depth + 1u); else { c.pc = 0x00342880u; return; } if (c.pc != 0x0033F9B4u) [[unlikely]] return; }
L_0033F9B4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 18u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0033F9E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F9CCu);  if (depth < kMaxDepth) unit_0090(c, 306u, depth + 1u); else { c.pc = 0x00342850u; return; } if (c.pc != 0x0033F9CCu) [[unlikely]] return; }
L_0033F9CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F9D8u); set32(c.r[5], 0u + 25u);  if (depth < kMaxDepth) unit_008F(c, 291u, depth + 1u); else { c.pc = 0x0033EBB0u; return; } if (c.pc != 0x0033F9D8u) [[unlikely]] return; }
L_0033F9D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 23u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0033FA00; } }
L_0033F9E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F9E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 292u, depth + 1u); else { c.pc = 0x0033EBC0u; return; } if (c.pc != 0x0033F9E8u) [[unlikely]] return; }
L_0033F9E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033FA00; } }
L_0033F9F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F9FCu); set32(c.r[5], 0u + 26u);  if (depth < kMaxDepth) unit_008F(c, 291u, depth + 1u); else { c.pc = 0x0033EBB0u; return; } if (c.pc != 0x0033F9FCu) [[unlikely]] return; }
L_0033F9FC:
    c.budget -= 1;
L_0033FA00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033FA10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 10u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0033FBC8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_0033FB98; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0033FAF8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0033FA50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033FBE0; } }
L_0033FA50:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 6004u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033FBE0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 6000u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033FA70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FA70u); st8((c.r[16].w[0] + 17u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (depth < kMaxDepth) unit_008F(c, 80u, depth + 1u); else { c.pc = 0x0033D310u; return; } if (c.pc != 0x0033FA70u) [[unlikely]] return; }
L_0033FA70:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 19u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0033FAC8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 6000u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033FAB8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 44u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[5].w[0] - 8624u);
    set32(c.r[6], 0u + 64u);
    st8((c.r[16].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FAACu); set32(c.r[4], c.r[2].w[0] + 634u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0033FAACu) [[unlikely]] return; }
L_0033FAAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033FAC8; } }
    c.budget -= 1;
L_0033FAB8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 24u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 8617u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0033FAC8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 19u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033FAF8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 6000u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 10u);  if (t) { goto L_0033FAF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0033FBE0; } }
L_0033FAF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FB00u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 309u, depth + 1u); else { c.pc = 0x003428A0u; return; } if (c.pc != 0x0033FB00u) [[unlikely]] return; }
L_0033FB00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033FBE0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 6000u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033FB30; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FB24u); st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0090(c, 286u, depth + 1u); else { c.pc = 0x00342640u; return; } if (c.pc != 0x0033FB24u) [[unlikely]] return; }
L_0033FB24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033FBE0; } }
    c.budget -= 1;
L_0033FB30:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8617u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033FBA8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033FB70; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 19u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0033FB70; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 22564u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 22560u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0033FBA8; } }
    c.budget -= 1;
L_0033FB70:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FB88u); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0090(c, 307u, depth + 1u); else { c.pc = 0x00342870u; return; } if (c.pc != 0x0033FB88u) [[unlikely]] return; }
L_0033FB88:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FB94u); set32(c.r[5], 0u + 39u);  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x0033FB94u) [[unlikely]] return; }
L_0033FB94:
    c.budget -= 1;
L_0033FB98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FBA0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 309u, depth + 1u); else { c.pc = 0x003428A0u; return; } if (c.pc != 0x0033FBA0u) [[unlikely]] return; }
L_0033FBA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033FBE0; } }
L_0033FBA8:
    set32(c.r[3], 0u + 10u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FBBCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x0033FBBCu) [[unlikely]] return; }
L_0033FBBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033FBE0; } }
    c.budget -= 1;
L_0033FBC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FBD0u);  if (depth < kMaxDepth) unit_0091(c, 72u, depth + 1u); else { c.pc = 0x00344910u; return; } if (c.pc != 0x0033FBD0u) [[unlikely]] return; }
L_0033FBD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0033FBE0; } }
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0033FBE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033FBF0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 6004u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], 0u + 6u);  if (t) { goto L_0033FC10; } }
    set32(c.r[3], 0u - 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 6208u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 46u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_0033FC10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033FC20:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 18544u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0033C000u < 16384u) { entry = entries_008F[(t - 0x0033C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0033FC40:
    set32(c.r[3], 0u + 8u);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033EA20u | kUnwind; return; } goto L_0033EA20; }
L_0033FC50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], 0u - 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 6208u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 53u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FC80u); st8((c.r[4].w[0] + 52u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x0033FC80u) [[unlikely]] return; }
L_0033FC80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FC88u);  if (depth < kMaxDepth) unit_0090(c, 286u, depth + 1u); else { c.pc = 0x00342640u; return; } if (c.pc != 0x0033FC88u) [[unlikely]] return; }
L_0033FC88:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0033FCA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0033FCF8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0033FCD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033FD18; } }
    c.budget -= 1;
L_0033FCD0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 6004u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_0033FD18; } }
    set32(c.r[2], 0u + 10u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 6208u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FCF8u); st8((c.r[16].w[0] + 6208u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0090(c, 294u, depth + 1u); else { c.pc = 0x00342710u; return; } if (c.pc != 0x0033FCF8u) [[unlikely]] return; }
L_0033FCF8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_0033FD18; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0033FD18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033FD30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 53u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 19u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], 0u + 28u);  if (t) { goto L_0033FD68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FD5Cu);  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x0033FD5Cu) [[unlikely]] return; }
L_0033FD5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033FD70; } }
    c.budget -= 1;
L_0033FD68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FD70u); set32(c.r[5], 0u + 21u);  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x0033FD70u) [[unlikely]] return; }
L_0033FD70:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0033FD80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0033FDD0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0033FDB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033FF70; } }
L_0033FDB8:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 6004u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033FF70; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FDD0u); st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008E(c, 349u, depth + 1u); else { c.pc = 0x0033BA80u; return; } if (c.pc != 0x0033FDD0u) [[unlikely]] return; }
L_0033FDD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FDD8u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 44u)));  if (depth < kMaxDepth) unit_008F(c, 79u, depth + 1u); else { c.pc = 0x0033D2F0u; return; } if (c.pc != 0x0033FDD8u) [[unlikely]] return; }
L_0033FDD8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0033FE20; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033FE18; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_0033FE18; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033FE08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033FE28; } }
    c.budget -= 1;
L_0033FE08:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 19u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033FE28; } }
    c.budget -= 1;
L_0033FE18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FE20u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 403u, depth + 1u); else { c.pc = 0x0033FC50u; return; } if (c.pc != 0x0033FE20u) [[unlikely]] return; }
L_0033FE20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033FF70; } }
L_0033FE28:
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 52u)));
    set32(c.r[2], c.r[16].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FE3Cu); set32(c.r[18], c.r[2].w[0] + 6016u);  if (depth < kMaxDepth) unit_0090(c, 279u, depth + 1u); else { c.pc = 0x003425A0u; return; } if (c.pc != 0x0033FE3Cu) [[unlikely]] return; }
L_0033FE3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033FED8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 19u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033FEA0; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033FE70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FE64u);  if (depth < kMaxDepth) unit_0090(c, 291u, depth + 1u); else { c.pc = 0x003426A0u; return; } if (c.pc != 0x0033FE64u) [[unlikely]] return; }
L_0033FE64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033FF70; } }
    c.budget -= 1;
L_0033FE70:
    set32(c.r[2], 0u + 5u);
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], 0u + 3u);
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 30u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FE90u); st8((c.r[17].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x0033FE90u) [[unlikely]] return; }
L_0033FE90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FE98u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0090(c, 313u, depth + 1u); else { c.pc = 0x00342970u; return; } if (c.pc != 0x0033FE98u) [[unlikely]] return; }
L_0033FE98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033FEB8; } }
L_0033FEA0:
    set32(c.r[2], 0u + 4u);
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0033FEA8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FEB8u); st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x0033FEB8u) [[unlikely]] return; }
L_0033FEB8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FEC4u); st8((c.r[17].w[0] + 53u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0090(c, 285u, depth + 1u); else { c.pc = 0x00342620u; return; } if (c.pc != 0x0033FEC4u) [[unlikely]] return; }
L_0033FEC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FECCu);  if (depth < kMaxDepth) unit_0090(c, 288u, depth + 1u); else { c.pc = 0x00342670u; return; } if (c.pc != 0x0033FECCu) [[unlikely]] return; }
L_0033FECC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033FF70; } }
    c.budget -= 1;
L_0033FED8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FEE0u);  if (depth < kMaxDepth) unit_0090(c, 282u, depth + 1u); else { c.pc = 0x003425E0u; return; } if (c.pc != 0x0033FEE0u) [[unlikely]] return; }
L_0033FEE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0033FF08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FEF0u);  if (depth < kMaxDepth) unit_008F(c, 403u, depth + 1u); else { c.pc = 0x0033FC50u; return; } if (c.pc != 0x0033FEF0u) [[unlikely]] return; }
L_0033FEF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FEF8u);  if (depth < kMaxDepth) unit_0090(c, 286u, depth + 1u); else { c.pc = 0x00342640u; return; } if (c.pc != 0x0033FEF8u) [[unlikely]] return; }
L_0033FEF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FF00u);  if (depth < kMaxDepth) unit_0090(c, 289u, depth + 1u); else { c.pc = 0x00342680u; return; } if (c.pc != 0x0033FF00u) [[unlikely]] return; }
L_0033FF00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033FF70; } }
L_0033FF08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FF10u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x0033FF10u) [[unlikely]] return; }
L_0033FF10:
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033FF38; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0033FF38; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0033FF38:
    c.r[3].d[0] = c.r[4].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033FF58; } }
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_0033FF58; } }
    goto L_0033FF50;
L_0033FF4C:
    c.budget -= 1;
L_0033FF50:
    set32(c.r[16], 0u + 2u);
    c.budget -= 2;
L_0033FF58:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_0033FF70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FF6Cu); st8((c.r[17].w[0] + 52u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_0090(c, 290u, depth + 1u); else { c.pc = 0x00342690u; return; } if (c.pc != 0x0033FF6Cu) [[unlikely]] return; }
L_0033FF6C:
    c.budget -= 1;
L_0033FF70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 3;
L_0033FF7C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0033FF90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FFACu); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 405u, depth + 1u); else { c.pc = 0x00343530u; return; } if (c.pc != 0x0033FFACu) [[unlikely]] return; }
L_0033FFAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FFB4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 306u, depth + 1u); else { c.pc = 0x00342850u; return; } if (c.pc != 0x0033FFB4u) [[unlikely]] return; }
L_0033FFB4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FFC0u); set32(c.r[5], 0u + 35u);  if (depth < kMaxDepth) unit_008F(c, 402u, depth + 1u); else { c.pc = 0x0033FC40u; return; } if (c.pc != 0x0033FFC0u) [[unlikely]] return; }
L_0033FFC0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 11);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 2676u)));
    st32((c.r[3].w[0] + 192u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
L_0033FFE8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
}

}
