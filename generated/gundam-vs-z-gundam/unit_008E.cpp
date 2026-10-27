#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_008E[4096] = {
    1, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 7, 0,
    8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    10, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0,
    0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0,
    0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 0, 25, 26, 0,
    0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 0, 0,
    0, 36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0,
    0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0,
    0, 50, 0, 51, 0, 52, 0, 53, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0,
    65, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0,
    0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 76, 0, 77, 0, 78, 0, 79, 0, 0, 0,
    0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0,
    91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0,
    0, 0, 101, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106,
    0, 107, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0,
    112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0,
    115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 117, 0, 0, 0,
    0, 0, 0, 0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0,
    0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 127, 0, 128, 0, 129, 0, 130, 0, 0, 131, 0, 0,
    132, 0, 133, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 137, 0, 0, 138, 0, 0, 139, 0, 140, 0, 141, 0, 142, 0, 143, 0,
    0, 144, 0, 0, 145, 0, 146, 0, 147, 0, 148, 0, 0, 149, 0, 0, 150, 0, 151, 0, 152, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0,
    155, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    158, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0,
    163, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    166, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0,
    0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 182, 0, 183, 0,
    184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0,
    191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 202, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0,
    0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0,
    0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0,
    0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0,
    0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0,
    235, 0, 0, 0, 0, 0, 236, 0, 0, 237, 0, 0, 238, 0, 0, 239, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0,
    243, 0, 0, 244, 0, 0, 245, 0, 0, 246, 0, 0, 247, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 256, 0, 0, 0, 0, 0, 257, 0, 258, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 259, 0, 260, 0, 0, 0, 0, 0, 261, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0,
    0, 0, 0, 264, 0, 0, 265, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0,
    0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 282, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0,
    0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0,
    308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0,
    311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 320, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 326, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 332, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0,
    0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 340, 0, 0, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 343, 0, 344, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0,
    349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    351, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 354, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 364, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 369, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_008E(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00338000;
    case 2u: goto L_00338010;
    case 3u: goto L_00338018;
    case 4u: goto L_00338034;
    case 5u: goto L_00338054;
    case 6u: goto L_00338074;
    case 7u: goto L_00338078;
    case 8u: goto L_00338080;
    case 9u: goto L_003380D0;
    case 10u: goto L_00338100;
    case 11u: goto L_0033810C;
    case 12u: goto L_0033812C;
    case 13u: goto L_0033814C;
    case 14u: goto L_00338160;
    case 15u: goto L_00338170;
    case 16u: goto L_00338190;
    case 17u: goto L_003381A0;
    case 18u: goto L_003381B0;
    case 19u: goto L_003381F8;
    case 20u: goto L_00338208;
    case 21u: goto L_00338228;
    case 22u: goto L_00338238;
    case 23u: goto L_0033824C;
    case 24u: goto L_00338268;
    case 25u: goto L_00338274;
    case 26u: goto L_00338278;
    case 27u: goto L_00338290;
    case 28u: goto L_003382B0;
    case 29u: goto L_003382C8;
    case 30u: goto L_003382E0;
    case 31u: goto L_00338358;
    case 32u: goto L_00338388;
    case 33u: goto L_003383A0;
    case 34u: goto L_003383D8;
    case 35u: goto L_003383E4;
    case 36u: goto L_00338404;
    case 37u: goto L_00338424;
    case 38u: goto L_00338470;
    case 39u: goto L_00338490;
    case 40u: goto L_003384AC;
    case 41u: goto L_003384C0;
    case 42u: goto L_003384D8;
    case 43u: goto L_00338508;
    case 44u: goto L_00338520;
    case 45u: goto L_00338548;
    case 46u: goto L_00338550;
    case 47u: goto L_00338560;
    case 48u: goto L_003385C0;
    case 49u: goto L_003385E0;
    case 50u: goto L_00338604;
    case 51u: goto L_0033860C;
    case 52u: goto L_00338614;
    case 53u: goto L_0033861C;
    case 54u: goto L_00338624;
    case 55u: goto L_00338644;
    case 56u: goto L_00338660;
    case 57u: goto L_003386BC;
    case 58u: goto L_003386F8;
    case 59u: goto L_00338720;
    case 60u: goto L_00338744;
    case 61u: goto L_0033875C;
    case 62u: goto L_00338784;
    case 63u: goto L_0033879C;
    case 64u: goto L_003387E4;
    case 65u: goto L_00338800;
    case 66u: goto L_00338820;
    case 67u: goto L_0033882C;
    case 68u: goto L_00338864;
    case 69u: goto L_00338888;
    case 70u: goto L_003388A0;
    case 71u: goto L_003388E0;
    case 72u: goto L_00338944;
    case 73u: goto L_0033898C;
    case 74u: goto L_003389AC;
    case 75u: goto L_003389CC;
    case 76u: goto L_003389D8;
    case 77u: goto L_003389E0;
    case 78u: goto L_003389E8;
    case 79u: goto L_003389F0;
    case 80u: goto L_00338A08;
    case 81u: goto L_00338A14;
    case 82u: goto L_00338A40;
    case 83u: goto L_00338B50;
    case 84u: goto L_00338E30;
    case 85u: goto L_00338E70;
    case 86u: goto L_00338EC4;
    case 87u: goto L_00338ED8;
    case 88u: goto L_00338F50;
    case 89u: goto L_00338F68;
    case 90u: goto L_00338FF0;
    case 91u: goto L_00339000;
    case 92u: goto L_00339090;
    case 93u: goto L_00339144;
    case 94u: goto L_00339150;
    case 95u: goto L_00339294;
    case 96u: goto L_003392B0;
    case 97u: goto L_00339390;
    case 98u: goto L_00339440;
    case 99u: goto L_00339460;
    case 100u: goto L_003394F4;
    case 101u: goto L_00339508;
    case 102u: goto L_00339510;
    case 103u: goto L_00339540;
    case 104u: goto L_00339548;
    case 105u: goto L_003396B0;
    case 106u: goto L_003396FC;
    case 107u: goto L_00339704;
    case 108u: goto L_00339708;
    case 109u: goto L_00339738;
    case 110u: goto L_00339748;
    case 111u: goto L_00339768;
    case 112u: goto L_00339780;
    case 113u: goto L_003397A0;
    case 114u: goto L_003397F4;
    case 115u: goto L_00339800;
    case 116u: goto L_00339868;
    case 117u: goto L_00339870;
    case 118u: goto L_00339890;
    case 119u: goto L_00339898;
    case 120u: goto L_003398D4;
    case 121u: goto L_0033990C;
    case 122u: goto L_00339950;
    case 123u: goto L_00339974;
    case 124u: goto L_00339984;
    case 125u: goto L_0033999C;
    case 126u: goto L_003399C8;
    case 127u: goto L_003399D0;
    case 128u: goto L_003399D8;
    case 129u: goto L_003399E0;
    case 130u: goto L_003399E8;
    case 131u: goto L_003399F4;
    case 132u: goto L_00339A00;
    case 133u: goto L_00339A08;
    case 134u: goto L_00339A10;
    case 135u: goto L_00339A28;
    case 136u: goto L_00339A34;
    case 137u: goto L_00339A40;
    case 138u: goto L_00339A4C;
    case 139u: goto L_00339A58;
    case 140u: goto L_00339A60;
    case 141u: goto L_00339A68;
    case 142u: goto L_00339A70;
    case 143u: goto L_00339A78;
    case 144u: goto L_00339A84;
    case 145u: goto L_00339A90;
    case 146u: goto L_00339A98;
    case 147u: goto L_00339AA0;
    case 148u: goto L_00339AA8;
    case 149u: goto L_00339AB4;
    case 150u: goto L_00339AC0;
    case 151u: goto L_00339AC8;
    case 152u: goto L_00339AD0;
    case 153u: goto L_00339AD8;
    case 154u: goto L_00339AF0;
    case 155u: goto L_00339B00;
    case 156u: goto L_00339B08;
    case 157u: goto L_00339B20;
    case 158u: goto L_00339B80;
    case 159u: goto L_00339B90;
    case 160u: goto L_00339BA0;
    case 161u: goto L_00339BC0;
    case 162u: goto L_00339BE0;
    case 163u: goto L_00339C00;
    case 164u: goto L_00339C10;
    case 165u: goto L_00339C20;
    case 166u: goto L_00339C80;
    case 167u: goto L_00339C98;
    case 168u: goto L_00339CB8;
    case 169u: goto L_00339CD0;
    case 170u: goto L_00339CE8;
    case 171u: goto L_00339D08;
    case 172u: goto L_00339E00;
    case 173u: goto L_00339E1C;
    case 174u: goto L_00339E80;
    case 175u: goto L_00339EA0;
    case 176u: goto L_00339ED8;
    case 177u: goto L_00339F20;
    case 178u: goto L_00339F40;
    case 179u: goto L_00339FA0;
    case 180u: goto L_00339FC4;
    case 181u: goto L_00339FE8;
    case 182u: goto L_00339FF0;
    case 183u: goto L_00339FF8;
    case 184u: goto L_0033A000;
    case 185u: goto L_0033A02C;
    case 186u: goto L_0033A03C;
    case 187u: goto L_0033A060;
    case 188u: goto L_0033A0D0;
    case 189u: goto L_0033A260;
    case 190u: goto L_0033A270;
    case 191u: goto L_0033A280;
    case 192u: goto L_0033A2B0;
    case 193u: goto L_0033A2C0;
    case 194u: goto L_0033A380;
    case 195u: goto L_0033A398;
    case 196u: goto L_0033A3C0;
    case 197u: goto L_0033A408;
    case 198u: goto L_0033A420;
    case 199u: goto L_0033A458;
    case 200u: goto L_0033A4A8;
    case 201u: goto L_0033A4F0;
    case 202u: goto L_0033A4F8;
    case 203u: goto L_0033A52C;
    case 204u: goto L_0033A544;
    case 205u: goto L_0033A54C;
    case 206u: goto L_0033A568;
    case 207u: goto L_0033A58C;
    case 208u: goto L_0033A5A8;
    case 209u: goto L_0033A5B8;
    case 210u: goto L_0033A5C0;
    case 211u: goto L_0033A5D8;
    case 212u: goto L_0033A628;
    case 213u: goto L_0033A638;
    case 214u: goto L_0033A650;
    case 215u: goto L_0033A668;
    case 216u: goto L_0033A678;
    case 217u: goto L_0033A690;
    case 218u: goto L_0033A6A8;
    case 219u: goto L_0033A6B8;
    case 220u: goto L_0033A6D0;
    case 221u: goto L_0033A6F8;
    case 222u: goto L_0033A708;
    case 223u: goto L_0033A720;
    case 224u: goto L_0033A748;
    case 225u: goto L_0033A760;
    case 226u: goto L_0033A770;
    case 227u: goto L_0033A788;
    case 228u: goto L_0033A7B0;
    case 229u: goto L_0033A7C8;
    case 230u: goto L_0033A7D8;
    case 231u: goto L_0033A7F0;
    case 232u: goto L_0033A818;
    case 233u: goto L_0033A830;
    case 234u: goto L_0033A860;
    case 235u: goto L_0033A880;
    case 236u: goto L_0033A898;
    case 237u: goto L_0033A8A4;
    case 238u: goto L_0033A8B0;
    case 239u: goto L_0033A8BC;
    case 240u: goto L_0033A8C8;
    case 241u: goto L_0033A8D4;
    case 242u: goto L_0033A8E8;
    case 243u: goto L_0033A900;
    case 244u: goto L_0033A90C;
    case 245u: goto L_0033A918;
    case 246u: goto L_0033A924;
    case 247u: goto L_0033A930;
    case 248u: goto L_0033A93C;
    case 249u: goto L_0033A950;
    case 250u: goto L_0033AA08;
    case 251u: goto L_0033AAB0;
    case 252u: goto L_0033AAE0;
    case 253u: goto L_0033AB08;
    case 254u: goto L_0033AB24;
    case 255u: goto L_0033AB48;
    case 256u: goto L_0033AB50;
    case 257u: goto L_0033AB68;
    case 258u: goto L_0033AB70;
    case 259u: goto L_0033AB98;
    case 260u: goto L_0033ABA0;
    case 261u: goto L_0033ABB8;
    case 262u: goto L_0033ABC0;
    case 263u: goto L_0033ABF0;
    case 264u: goto L_0033AC0C;
    case 265u: goto L_0033AC18;
    case 266u: goto L_0033AC20;
    case 267u: goto L_0033AC50;
    case 268u: goto L_0033AC74;
    case 269u: goto L_0033AC90;
    case 270u: goto L_0033ACD0;
    case 271u: goto L_0033AD08;
    case 272u: goto L_0033AD20;
    case 273u: goto L_0033AD68;
    case 274u: goto L_0033ADA0;
    case 275u: goto L_0033AE40;
    case 276u: goto L_0033AED0;
    case 277u: goto L_0033AF08;
    case 278u: goto L_0033AF30;
    case 279u: goto L_0033AF58;
    case 280u: goto L_0033AFD0;
    case 281u: goto L_0033B018;
    case 282u: goto L_0033B034;
    case 283u: goto L_0033B040;
    case 284u: goto L_0033B068;
    case 285u: goto L_0033B090;
    case 286u: goto L_0033B0B0;
    case 287u: goto L_0033B0CC;
    case 288u: goto L_0033B0F0;
    case 289u: goto L_0033B120;
    case 290u: goto L_0033B158;
    case 291u: goto L_0033B170;
    case 292u: goto L_0033B198;
    case 293u: goto L_0033B1E0;
    case 294u: goto L_0033B220;
    case 295u: goto L_0033B23C;
    case 296u: goto L_0033B248;
    case 297u: goto L_0033B270;
    case 298u: goto L_0033B28C;
    case 299u: goto L_0033B2B0;
    case 300u: goto L_0033B2E0;
    case 301u: goto L_0033B328;
    case 302u: goto L_0033B344;
    case 303u: goto L_0033B350;
    case 304u: goto L_0033B378;
    case 305u: goto L_0033B3A0;
    case 306u: goto L_0033B3C0;
    case 307u: goto L_0033B3DC;
    case 308u: goto L_0033B400;
    case 309u: goto L_0033B430;
    case 310u: goto L_0033B468;
    case 311u: goto L_0033B480;
    case 312u: goto L_0033B4A8;
    case 313u: goto L_0033B4E0;
    case 314u: goto L_0033B518;
    case 315u: goto L_0033B52C;
    case 316u: goto L_0033B558;
    case 317u: goto L_0033B590;
    case 318u: goto L_0033B5A0;
    case 319u: goto L_0033B5D8;
    case 320u: goto L_0033B5F0;
    case 321u: goto L_0033B618;
    case 322u: goto L_0033B670;
    case 323u: goto L_0033B6B8;
    case 324u: goto L_0033B6D0;
    case 325u: goto L_0033B6E8;
    case 326u: goto L_0033B714;
    case 327u: goto L_0033B720;
    case 328u: goto L_0033B748;
    case 329u: goto L_0033B7A0;
    case 330u: goto L_0033B7C0;
    case 331u: goto L_0033B7DC;
    case 332u: goto L_0033B7F8;
    case 333u: goto L_0033B840;
    case 334u: goto L_0033B878;
    case 335u: goto L_0033B89C;
    case 336u: goto L_0033B8C8;
    case 337u: goto L_0033B920;
    case 338u: goto L_0033B98C;
    case 339u: goto L_0033B9AC;
    case 340u: goto L_0033B9B8;
    case 341u: goto L_0033B9D0;
    case 342u: goto L_0033B9E0;
    case 343u: goto L_0033BA08;
    case 344u: goto L_0033BA10;
    case 345u: goto L_0033BA20;
    case 346u: goto L_0033BA40;
    case 347u: goto L_0033BA50;
    case 348u: goto L_0033BA70;
    case 349u: goto L_0033BA80;
    case 350u: goto L_0033BAD0;
    case 351u: goto L_0033BB00;
    case 352u: goto L_0033BB14;
    case 353u: goto L_0033BB50;
    case 354u: goto L_0033BB90;
    case 355u: goto L_0033BBA4;
    case 356u: goto L_0033BC10;
    case 357u: goto L_0033BC20;
    case 358u: goto L_0033BCA4;
    case 359u: goto L_0033BCC4;
    case 360u: goto L_0033BCF0;
    case 361u: goto L_0033BD20;
    case 362u: goto L_0033BD68;
    case 363u: goto L_0033BDD0;
    case 364u: goto L_0033BE10;
    case 365u: goto L_0033BE20;
    case 366u: goto L_0033BE48;
    case 367u: goto L_0033BE78;
    case 368u: goto L_0033BEC4;
    case 369u: goto L_0033BF08;
    case 370u: goto L_0033BF20;
    case 371u: goto L_0033BFAC;
    case 372u: goto L_0033BFD8;
    default: bad_entry(c, 0x00338000u); return;
    }
L_00338000:
    st8((c.r[7].w[0] + 37u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338010u); st8((c.r[2].w[0] + 38u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008D(c, 321u, depth + 1u); else { c.pc = 0x003373E0u; return; } if (c.pc != 0x00338010u) [[unlikely]] return; }
L_00338010:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00338078; } }
L_00338018:
    c.r[3].d[0] = c.r[4].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00338040; } }
    st8((c.r[7].w[0] + 37u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338034u); st8((c.r[2].w[0] + 38u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008D(c, 321u, depth + 1u); else { c.pc = 0x003373E0u; return; } if (c.pc != 0x00338034u) [[unlikely]] return; }
L_00338034:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00338078; } }
    c.budget -= 1;
L_00338040:
    c.r[3].d[0] = c.r[4].d[0] & 2048ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00338060; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338054u);  if (depth < kMaxDepth) unit_00A5(c, 99u, depth + 1u); else { c.pc = 0x00394A00u; return; } if (c.pc != 0x00338054u) [[unlikely]] return; }
L_00338054:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00338078; } }
    c.budget -= 1;
L_00338060:
    c.r[3].d[0] = c.r[4].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00338078; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338074u);  if (depth < kMaxDepth) unit_00A5(c, 79u, depth + 1u); else { c.pc = 0x00394820u; return; } if (c.pc != 0x00338074u) [[unlikely]] return; }
L_00338074:
    c.budget -= 1;
L_00338078:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003380A8; } }
L_00338080:
    c.r[3].d[0] = c.r[4].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[16].d[0] = c.r[6].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.r[20].d[0] = c.r[3].d[0] & 2048ull;
    c.r[19].d[0] = c.r[3].d[0] & 1024ull;
    c.r[18].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[3].d[0] & 4096ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00337E00u | kUnwind; return; } [[clang::musttail]] return unit_008D(c, 390u, depth); } }
    c.budget -= 1;
L_003380A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003380D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 22568u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 48u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00338158; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 54u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00338118; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338100u);  if (depth < kMaxDepth) unit_00A5(c, 209u, depth + 1u); else { c.pc = 0x003957E0u; return; } if (c.pc != 0x00338100u) [[unlikely]] return; }
L_00338100:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033810Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 356u, depth + 1u); else { c.pc = 0x00337880u; return; } if (c.pc != 0x0033810Cu) [[unlikely]] return; }
L_0033810C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00338160; } }
    c.budget -= 1;
L_00338118:
    c.r[3].d[0] = ld8((c.r[6].w[0] + 47u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00338138; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033812Cu);  if (depth < kMaxDepth) unit_008E(c, 15u, depth + 1u); else { c.pc = 0x00338170u; return; } if (c.pc != 0x0033812Cu) [[unlikely]] return; }
L_0033812C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00338160; } }
    c.budget -= 1;
L_00338138:
    c.r[3].d[0] = ld8((c.r[6].w[0] + 38u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00338160; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033814Cu);  if (depth < kMaxDepth) unit_008E(c, 15u, depth + 1u); else { c.pc = 0x00338170u; return; } if (c.pc != 0x0033814Cu) [[unlikely]] return; }
L_0033814C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00338160; } }
    c.budget -= 1;
L_00338158:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338160u);  if (depth < kMaxDepth) unit_00A4(c, 277u, depth + 1u); else { c.pc = 0x00393480u; return; } if (c.pc != 0x00338160u) [[unlikely]] return; }
L_00338160:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00338170:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338190u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 206u, depth + 1u); else { c.pc = 0x00395730u; return; } if (c.pc != 0x00338190u) [[unlikely]] return; }
L_00338190:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003381B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003381A0u);  if (depth < kMaxDepth) unit_008E(c, 193u, depth + 1u); else { c.pc = 0x0033A2C0u; return; } if (c.pc != 0x003381A0u) [[unlikely]] return; }
L_003381A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00338230; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003381B0u); set32(c.r[5], 0u + 171u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x003381B0u) [[unlikely]] return; }
L_003381B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00338450; } }
L_003381B8:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 29u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 5u);  if (t) { goto L_00338210; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00338210; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 15u);  if (t) { goto L_00338210; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003381F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00338230; } }
L_003381F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003381F8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 201u, depth + 1u); else { c.pc = 0x0033A4F0u; return; } if (c.pc != 0x003381F8u) [[unlikely]] return; }
L_003381F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00338230; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338208u); set32(c.r[5], 0u + 171u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x00338208u) [[unlikely]] return; }
L_00338208:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00338450; } }
L_00338210:
    c.r[3].d[0] = ld8((c.r[18].w[0]));
    set32(c.r[2], 0u + 227u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00338230; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338228u); set32(c.r[5], 0u + 171u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x00338228u) [[unlikely]] return; }
L_00338228:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00338450; } }
L_00338230:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338238u);  if (depth < kMaxDepth) unit_00A5(c, 409u, depth + 1u); else { c.pc = 0x00397450u; return; } if (c.pc != 0x00338238u) [[unlikely]] return; }
L_00338238:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[18].w[0] + 2u);  if (t) { goto L_003382B8; } }
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033824Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x0033824Cu) [[unlikely]] return; }
L_0033824C:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    st8((c.r[29].w[0] + 77u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 348u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00338278; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338268u);  if (depth < kMaxDepth) unit_00A5(c, 189u, depth + 1u); else { c.pc = 0x00395570u; return; } if (c.pc != 0x00338268u) [[unlikely]] return; }
L_00338268:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338274u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 356u, depth + 1u); else { c.pc = 0x00337880u; return; } if (c.pc != 0x00338274u) [[unlikely]] return; }
L_00338274:
    c.budget -= 1;
L_00338278:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[5], c.r[29].w[0] + 76u);
    c.r[6].d[0] = ld16((c.r[2].w[0] + 42u));
    c.r[7].d[0] = ld16((c.r[2].w[0] + 58u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338290u); set32(c.r[4], c.r[2].w[0] + 72u);  if (depth < kMaxDepth) unit_00A5(c, 199u, depth + 1u); else { c.pc = 0x00395670u; return; } if (c.pc != 0x00338290u) [[unlikely]] return; }
L_00338290:
    set32(c.r[6], ld32((c.r[28].w[0] - 22568u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 192u);
    c.r[3].d[0] = ld16((c.r[6].w[0] + 42u));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003382B0u); st16((c.r[6].w[0] + 42u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x003382B0u) [[unlikely]] return; }
L_003382B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00338428; } }
L_003382B8:
    set32(c.r[4], c.r[29].w[0] + 76u);
    set32(c.r[5], c.r[18].w[0] + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003382C8u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x003382C8u) [[unlikely]] return; }
L_003382C8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[29].w[0] + 76u);
    set32(c.r[5], c.r[5].w[0] - 1104u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003382E0u); st8((c.r[29].w[0] + 78u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0007(c, 138u, depth + 1u); else { c.pc = 0x0011E108u; return; } if (c.pc != 0x003382E0u) [[unlikely]] return; }
L_003382E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00338310; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 22568u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 47u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003383D0; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 348u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00338278u | kUnwind; return; } goto L_00338278; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00338450; } }
    c.budget -= 1;
L_00338310:
    set32(c.r[4], ld32((c.r[28].w[0] - 22568u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 30u));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_00338350; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00338350; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 31u));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003383B0; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 53u));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003383B0; } }
    c.budget -= 1;
L_00338350:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338358u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 157u, depth + 1u); else { c.pc = 0x00339B20u; return; } if (c.pc != 0x00338358u) [[unlikely]] return; }
L_00338358:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00338398; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00338380; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003383B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003383B0; } }
    c.budget -= 1;
L_00338380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338388u); set32(c.r[4], ld32((c.r[28].w[0] - 27796u)));  if (depth < kMaxDepth) unit_008E(c, 85u, depth + 1u); else { c.pc = 0x00338E70u; return; } if (c.pc != 0x00338388u) [[unlikely]] return; }
L_00338388:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003383B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_003383B0; } }
L_00338398:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003383A0u); set32(c.r[4], ld32((c.r[28].w[0] - 27792u)));  if (depth < kMaxDepth) unit_008E(c, 85u, depth + 1u); else { c.pc = 0x00338E70u; return; } if (c.pc != 0x003383A0u) [[unlikely]] return; }
L_003383A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003383B0; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 2;
L_003383B0:
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00338418; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 47u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003383F0; } }
L_003383D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003383D8u);  if (depth < kMaxDepth) unit_00A5(c, 189u, depth + 1u); else { c.pc = 0x00395570u; return; } if (c.pc != 0x003383D8u) [[unlikely]] return; }
L_003383D8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003383E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 356u, depth + 1u); else { c.pc = 0x00337880u; return; } if (c.pc != 0x003383E4u) [[unlikely]] return; }
L_003383E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00338418; } }
    c.budget -= 1;
L_003383F0:
    c.r[6].d[0] = ld16((c.r[3].w[0] + 44u));
    set32(c.r[4], c.r[3].w[0] + 348u);
    set32(c.r[5], c.r[29].w[0] + 76u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338404u); set32(c.r[7], 0u + 72u);  if (depth < kMaxDepth) unit_00A5(c, 199u, depth + 1u); else { c.pc = 0x00395670u; return; } if (c.pc != 0x00338404u) [[unlikely]] return; }
L_00338404:
    set32(c.r[4], ld32((c.r[28].w[0] - 22568u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = ld16((c.r[4].w[0] + 44u));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[4].w[0] + 44u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
L_00338418:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338424u); set32(c.r[5], 0u + 192u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x00338424u) [[unlikely]] return; }
L_00338424:
    c.budget -= 1;
L_00338428:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00338438; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    st8((c.r[3].w[0] + 40u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00338438:
    set32(c.r[4], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 16u));
    c.r[3].d[0] = c.r[3].d[0] & 127ull;
    st8((c.r[4].w[0] + 41u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_00338450:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00338470:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00338508; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338490u);  if (depth < kMaxDepth) unit_00A5(c, 189u, depth + 1u); else { c.pc = 0x00395570u; return; } if (c.pc != 0x00338490u) [[unlikely]] return; }
L_00338490:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003384B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003384ACu); set32(c.r[5], 0u + 171u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x003384ACu) [[unlikely]] return; }
L_003384AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00338508; } }
    c.budget -= 1;
L_003384B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003384C0u); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x003384C0u) [[unlikely]] return; }
L_003384C0:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.r[6].d[0] = ld16((c.r[2].w[0] + 42u));
    c.r[7].d[0] = ld16((c.r[2].w[0] + 58u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003384D8u); set32(c.r[4], c.r[2].w[0] + 72u);  if (depth < kMaxDepth) unit_00A5(c, 199u, depth + 1u); else { c.pc = 0x00395670u; return; } if (c.pc != 0x003384D8u) [[unlikely]] return; }
L_003384D8:
    set32(c.r[6], ld32((c.r[28].w[0] - 22568u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 192u);
    c.r[3].d[0] = ld16((c.r[6].w[0] + 42u));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[6].w[0] + 42u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] & 127ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338508u); st8((c.r[3].w[0] + 41u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x00338508u) [[unlikely]] return; }
L_00338508:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_00338520:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 22568u)));
    c.r[3].d[0] = ld8((c.r[1].w[0] + 7131u));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 37u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00338550; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338548u);  if (depth < kMaxDepth) unit_008E(c, 154u, depth + 1u); else { c.pc = 0x00339AF0u; return; } if (c.pc != 0x00338548u) [[unlikely]] return; }
L_00338548:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338550u);  if (depth < kMaxDepth) unit_008E(c, 38u, depth + 1u); else { c.pc = 0x00338470u; return; } if (c.pc != 0x00338550u) [[unlikely]] return; }
L_00338550:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00338560:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] + 7136u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_003385A8; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 22568u)));
    c.r[4].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    set32(c.r[3], ld32((c.r[5].w[0] + 32u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003385A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003385B0; } }
L_003385A8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_003385B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003385C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[4].d[0] = ld8((c.r[2].w[0] + 30u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003385E0u); set32(c.r[6], 0u + 171u);  if (depth < kMaxDepth) unit_008E(c, 47u, depth + 1u); else { c.pc = 0x00338560u; return; } if (c.pc != 0x003385E0u) [[unlikely]] return; }
L_003385E0:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_00338638; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[17].d[0] = ld8((c.r[2].w[0] + 36u));
    c.r[16].d[0] = ld8((c.r[2].w[0] + 37u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338604u); st8((c.r[2].w[0] + 30u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_008E(c, 177u, depth + 1u); else { c.pc = 0x00339F20u; return; } if (c.pc != 0x00338604u) [[unlikely]] return; }
L_00338604:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033860Cu);  if (depth < kMaxDepth) unit_008E(c, 187u, depth + 1u); else { c.pc = 0x0033A060u; return; } if (c.pc != 0x0033860Cu) [[unlikely]] return; }
L_0033860C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338614u);  if (depth < kMaxDepth) unit_00A5(c, 189u, depth + 1u); else { c.pc = 0x00395570u; return; } if (c.pc != 0x00338614u) [[unlikely]] return; }
L_00338614:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033861Cu);  if (depth < kMaxDepth) unit_008E(c, 154u, depth + 1u); else { c.pc = 0x00339AF0u; return; } if (c.pc != 0x0033861Cu) [[unlikely]] return; }
L_0033861C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338624u);  if (depth < kMaxDepth) unit_00A5(c, 207u, depth + 1u); else { c.pc = 0x00395770u; return; } if (c.pc != 0x00338624u) [[unlikely]] return; }
L_00338624:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[6], 0u + 192u);
    st8((c.r[2].w[0] + 36u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    st8((c.r[2].w[0] + 37u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 5;
L_00338638:
    c.r[5].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338644u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x00338644u) [[unlikely]] return; }
L_00338644:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00338660:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 12u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 22568u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 29u));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 13u);  if (t) { goto L_003386C8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003386C8; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 348u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003386C8; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 72u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003386C8; } }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[5].w[0] + 50u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003386BCu); set32(c.r[5], 0u + 193u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x003386BCu) [[unlikely]] return; }
L_003386BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003387E8; } }
    c.budget -= 1;
L_003386C8:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 47u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[5].w[0] + 47u);  if (t) { goto L_003387A8; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 348u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[5].w[0] + 348u);  if (t) { goto L_00338728; } }
    c.r[3].d[0] = ld16((c.r[5].w[0] + 44u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003387E8; } }
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003386F8u); st8((c.r[5].w[0] - 2u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011D880u; return; } if (c.pc != 0x003386F8u) [[unlikely]] return; }
L_003386F8:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 44u));
    set32(c.r[2], c.r[2].w[0] - 2u);
    st16((c.r[3].w[0] + 44u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 44u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00338788; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338720u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 356u, depth + 1u); else { c.pc = 0x00337880u; return; } if (c.pc != 0x00338720u) [[unlikely]] return; }
L_00338720:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00338788; } }
L_00338728:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[16].d[0] = ld16((c.r[3].w[0] + 42u));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[17], c.r[3].w[0] + 72u);  if (t) { goto L_003387E8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338744u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 394u, depth + 1u); else { c.pc = 0x00397100u; return; } if (c.pc != 0x00338744u) [[unlikely]] return; }
L_00338744:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[5].w[0] - c.r[18].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033875Cu); st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011D880u; return; } if (c.pc != 0x0033875Cu) [[unlikely]] return; }
L_0033875C:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 42u));
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    st16((c.r[3].w[0] + 42u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 42u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00338788; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338784u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 356u, depth + 1u); else { c.pc = 0x00337880u; return; } if (c.pc != 0x00338784u) [[unlikely]] return; }
L_00338784:
    c.budget -= 1;
L_00338788:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 193u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033879Cu); st8((c.r[2].w[0] + 40u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x0033879Cu) [[unlikely]] return; }
L_0033879C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003387E8; } }
    c.budget -= 1;
L_003387A8:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    st8((c.r[2].w[0] + 40u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    st8((c.r[2].w[0] + 38u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 54u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003387D8; } }
    st16((c.r[3].w[0] + 44u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    st8((c.r[2].w[0] + 348u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_003387D8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003387E4u); set32(c.r[5], 0u + 193u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x003387E4u) [[unlikely]] return; }
L_003387E4:
    c.budget -= 1;
L_003387E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00338800:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 348u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00338838; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338820u);  if (depth < kMaxDepth) unit_00A5(c, 189u, depth + 1u); else { c.pc = 0x00395570u; return; } if (c.pc != 0x00338820u) [[unlikely]] return; }
L_00338820:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033882Cu); set32(c.r[5], 0u + 192u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x0033882Cu) [[unlikely]] return; }
L_0033882C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00338888; } }
    c.budget -= 1;
L_00338838:
    set32(c.r[2], ld32((c.r[3].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] + 68u);  if (t) { goto L_00338870; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00338858; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), 0u);  if (t) { goto L_00338870; } }
    c.budget -= 1;
L_00338858:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338864u); set32(c.r[5], 0u + 171u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x00338864u) [[unlikely]] return; }
L_00338864:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00338888; } }
    c.budget -= 1;
L_00338870:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 195u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338888u); st8((c.r[2].w[0] + 50u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x00338888u) [[unlikely]] return; }
L_00338888:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003388A0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[16].d[0] = ld8((c.r[2].w[0] + 31u));
    c.r[18].d[0] = ld8((c.r[2].w[0] + 30u));
    c.r[17].d[0] = c.r[16].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 16;
L_003388E0:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] - 1u);  if (t) { goto L_003388F8; } }
    c.r[17].d[0] = c.r[2].d[0] << 56;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);  if (t) { goto L_00338908; } }
    c.budget -= 1;
L_003388F8:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[2].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 4;
L_00338908:
    c.r[2].d[0] = c.r[17].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = c.r[3].d[0] & 3ull;  if (t) { goto L_00338928; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] << 56;  if (t) { goto L_0033892C; } }
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 1;
L_00338928:
    c.r[17].d[0] = c.r[2].d[0] << 56;
    c.budget -= 1;
L_0033892C:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.r[4].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[5], c.r[2].w[0] + 31u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338944u); set32(c.r[6], c.r[2].w[0] + 30u);  if (depth < kMaxDepth) unit_008E(c, 165u, depth + 1u); else { c.pc = 0x00339C20u; return; } if (c.pc != 0x00338944u) [[unlikely]] return; }
L_00338944:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00338958; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 1u);  if (t) { goto L_00338968; } }
    c.budget -= 1;
L_00338958:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003388E0u | kUnwind; return; } goto L_003388E0; } }
L_00338968:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_00338998; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 171u);
    st8((c.r[2].w[0] + 30u), static_cast<std::uint8_t>(c.r[18].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033898Cu); st8((c.r[2].w[0] + 31u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x0033898Cu) [[unlikely]] return; }
L_0033898C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003389B0; } }
    c.budget -= 1;
L_00338998:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 192u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003389ACu); st8((c.r[2].w[0] + 53u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x003389ACu) [[unlikely]] return; }
L_003389AC:
    c.budget -= 1;
L_003389B0:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[2], 0u + 4u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 30u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003389D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003389CCu);  if (depth < kMaxDepth) unit_008E(c, 189u, depth + 1u); else { c.pc = 0x0033A260u; return; } if (c.pc != 0x003389CCu) [[unlikely]] return; }
L_003389CC:
    c.budget -= 1;
L_003389D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003389D8u);  if (depth < kMaxDepth) unit_008E(c, 177u, depth + 1u); else { c.pc = 0x00339F20u; return; } if (c.pc != 0x003389D8u) [[unlikely]] return; }
L_003389D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003389E0u);  if (depth < kMaxDepth) unit_008E(c, 187u, depth + 1u); else { c.pc = 0x0033A060u; return; } if (c.pc != 0x003389E0u) [[unlikely]] return; }
L_003389E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003389E8u);  if (depth < kMaxDepth) unit_008E(c, 154u, depth + 1u); else { c.pc = 0x00339AF0u; return; } if (c.pc != 0x003389E8u) [[unlikely]] return; }
L_003389E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003389F0u);  if (depth < kMaxDepth) unit_00A5(c, 207u, depth + 1u); else { c.pc = 0x00395770u; return; } if (c.pc != 0x003389F0u) [[unlikely]] return; }
L_003389F0:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 54u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00338A18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338A08u);  if (depth < kMaxDepth) unit_00A5(c, 297u, depth + 1u); else { c.pc = 0x003962C0u; return; } if (c.pc != 0x00338A08u) [[unlikely]] return; }
L_00338A08:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338A14u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 356u, depth + 1u); else { c.pc = 0x00337880u; return; } if (c.pc != 0x00338A14u) [[unlikely]] return; }
L_00338A14:
    c.budget -= 1;
L_00338A18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00338A40:
    set32(c.r[9], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[6], c.r[4].w[0] + 4u);
    set32(c.r[3], c.r[6].w[0] << 2);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[5], c.r[4].w[0] + 5u);
    set32(c.r[10], c.r[10].w[0] + 6640u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + 6576u);
    set32(c.r[9], ld32((c.r[9].w[0] + 16u)));
    set32(c.r[4], c.r[10].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + 6580u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] + 6608u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], c.r[10].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 6612u);
    set32(c.r[10], ld32((c.r[9].w[0] + 32u)));
    set32(c.r[9], c.r[10].w[0] << 1);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], ld32((c.r[8].w[0])));
    st32((c.r[4].w[0] + 4u), c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[8], ld32((c.r[8].w[0] + 16u)));
    set32(c.r[9], ld32((c.r[8].w[0] + 32u)));
    set32(c.r[8], c.r[9].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], ld32((c.r[7].w[0])));
    st32((c.r[4].w[0] + 8u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[7], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[7], ld32((c.r[7].w[0] + 36u)));
    st32((c.r[4].w[0] + 12u), c.r[7].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[7], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[4], c.r[7].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[4], c.r[6].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 65;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 12u), c.r[4].w[0]);  c.pc = t; return; }
L_00338B50:
    set32(c.r[29], c.r[29].w[0] - 256u);
    c.r[25].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    c.r[24].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[3]);
    set32(c.r[23], c.r[23].w[0] + 932u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[22], c.r[22].w[0] + 4480u);
    set32(c.r[3], c.r[3].w[0] + 6584u);
    set32(c.r[21], c.r[21].w[0] + 3808u);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[3]);
    set32(c.r[20], c.r[20].w[0] + 5440u);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[3]);
    set32(c.r[19], c.r[19].w[0] + 4576u);
    set32(c.r[18], c.r[18].w[0] + 2656u);
    set32(c.r[17], c.r[17].w[0] + 1504u);
    set32(c.r[16], c.r[16].w[0] + 3520u);
    set32(c.r[25], c.r[25].w[0] + 3232u);
    set32(c.r[24], c.r[24].w[0] + 2368u);
    set32(c.r[15], c.r[15].w[0] + 1216u);
    set32(c.r[14], c.r[14].w[0] + 2080u);
    set32(c.r[13], c.r[13].w[0] + 4388u);
    set32(c.r[12], c.r[12].w[0] + 3812u);
    set32(c.r[11], c.r[11].w[0] + 5444u);
    set32(c.r[4], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[10], c.r[10].w[0] + 4580u);
    set32(c.r[9], c.r[9].w[0] + 2660u);
    set32(c.r[8], c.r[8].w[0] + 1508u);
    set32(c.r[7], c.r[7].w[0] + 3524u);
    set32(c.r[6], c.r[6].w[0] + 2372u);
    set32(c.r[5], c.r[5].w[0] + 3236u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], c.r[3].w[0] + 928u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], c.r[3].w[0] + 6616u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);
    set32(c.r[30], ld32((c.r[4].w[0] + 32u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], c.r[3].w[0] + 2084u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[23], c.r[30].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + 1220u);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[23]);
    set32(c.r[23], c.r[23].w[0] + c.r[30].w[0]);
    set32(c.r[30], c.r[23].w[0] << 2);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[23]);
    set32(c.r[30], c.r[23].w[0] + c.r[30].w[0]);
    c.r[23].sd[0] = static_cast<std::int16_t>(ld16((c.r[30].w[0])));
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[23]);
    c.r[30].sd[0] = static_cast<std::int16_t>(ld16((c.r[30].w[0] + 2u)));
    st16((c.r[22].w[0]), static_cast<std::uint16_t>(c.r[23].w[0]));
    st16((c.r[22].w[0] + 2u), static_cast<std::uint16_t>(c.r[30].w[0]));
    c.r[23].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0])));
    c.r[22].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 2u)));
    st16((c.r[21].w[0]), static_cast<std::uint16_t>(c.r[23].w[0]));
    st16((c.r[21].w[0] + 2u), static_cast<std::uint16_t>(c.r[22].w[0]));
    c.r[22].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0])));
    c.r[21].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 2u)));
    st16((c.r[20].w[0]), static_cast<std::uint16_t>(c.r[22].w[0]));
    st16((c.r[20].w[0] + 2u), static_cast<std::uint16_t>(c.r[21].w[0]));
    c.r[21].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0])));
    c.r[20].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 2u)));
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[21].w[0]));
    st16((c.r[19].w[0] + 2u), static_cast<std::uint16_t>(c.r[20].w[0]));
    c.r[20].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    c.r[19].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 2u)));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[20].w[0]));
    st16((c.r[18].w[0] + 2u), static_cast<std::uint16_t>(c.r[19].w[0]));
    c.r[19].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 2u)));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[19].w[0]));
    st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[18].w[0]));
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    st16((c.r[25].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    st16((c.r[25].w[0] + 2u), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[25].w[0])));
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[25].w[0] + 2u)));
    st16((c.r[24].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    st16((c.r[24].w[0] + 2u), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0])));
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0] + 2u)));
    st16((c.r[15].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    st16((c.r[15].w[0] + 2u), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[15].w[0])));
    c.r[15].sd[0] = static_cast<std::int16_t>(ld16((c.r[15].w[0] + 2u)));
    st16((c.r[14].w[0]), static_cast<std::uint16_t>(c.r[16].w[0]));
    st16((c.r[14].w[0] + 2u), static_cast<std::uint16_t>(c.r[15].w[0]));
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[14].w[0])));
    c.r[15].sd[0] = static_cast<std::int16_t>(ld16((c.r[14].w[0] + 2u)));
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[14]);
    st16((c.r[14].w[0]), static_cast<std::uint16_t>(c.r[16].w[0]));
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[14]);
    st16((c.r[14].w[0] + 2u), static_cast<std::uint16_t>(c.r[15].w[0]));
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[14]);
    set32(c.r[14], ld32((c.r[14].w[0] + 16u)));
    set32(c.r[15], ld32((c.r[14].w[0] + 40u)));
    set32(c.r[14], c.r[15].w[0] << 1);
    set32(c.r[14], c.r[14].w[0] + c.r[15].w[0]);
    set32(c.r[15], c.r[14].w[0] << 2);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[14]);
    set32(c.r[14], c.r[14].w[0] + c.r[15].w[0]);
    c.r[15].sd[0] = static_cast<std::int16_t>(ld16((c.r[14].w[0])));
    c.r[14].sd[0] = static_cast<std::int16_t>(ld16((c.r[14].w[0] + 2u)));
    st16((c.r[13].w[0]), static_cast<std::uint16_t>(c.r[15].w[0]));
    st16((c.r[13].w[0] + 2u), static_cast<std::uint16_t>(c.r[14].w[0]));
    c.r[14].sd[0] = static_cast<std::int16_t>(ld16((c.r[13].w[0])));
    c.r[13].sd[0] = static_cast<std::int16_t>(ld16((c.r[13].w[0] + 2u)));
    st16((c.r[12].w[0]), static_cast<std::uint16_t>(c.r[14].w[0]));
    st16((c.r[12].w[0] + 2u), static_cast<std::uint16_t>(c.r[13].w[0]));
    c.r[13].sd[0] = static_cast<std::int16_t>(ld16((c.r[12].w[0])));
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[12].w[0] + 2u)));
    st16((c.r[11].w[0]), static_cast<std::uint16_t>(c.r[13].w[0]));
    st16((c.r[11].w[0] + 2u), static_cast<std::uint16_t>(c.r[12].w[0]));
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[11].w[0])));
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[11].w[0] + 2u)));
    st16((c.r[10].w[0]), static_cast<std::uint16_t>(c.r[12].w[0]));
    st16((c.r[10].w[0] + 2u), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0])));
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0] + 2u)));
    st16((c.r[9].w[0]), static_cast<std::uint16_t>(c.r[11].w[0]));
    st16((c.r[9].w[0] + 2u), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0])));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 2u)));
    st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[10].w[0]));
    st16((c.r[8].w[0] + 2u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 2u)));
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[9].w[0]));
    st16((c.r[7].w[0] + 2u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 2u)));
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 2u)));
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 2u)));
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[3]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 184;
L_00338E30:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[3]);
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[4].w[0]));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_00338E70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 44u));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00338EA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00338F30; } }
L_00338EA0:
    set32(c.r[2], c.r[2].w[0] - 2u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 348u)));
    set32(c.r[16], c.r[2].w[0] + 348u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 349u));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338EC4u); c.r[18].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00338EC4u) [[unlikely]] return; }
L_00338EC4:
    set32(c.r[5], c.r[2].w[0] >> 2);
    c.r[1].d[0] = 0ll < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00338F28; } }
    c.r[4].d[0] = c.r[18].d[0] & 65535ull;
    c.budget -= 1;
L_00338ED8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 1u));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; set32(c.r[17], c.r[17].w[0] + 2u);  if (t) { goto L_00338F18; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 40u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00338F30; } }
L_00338F18:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00338ED8u | kUnwind; return; } goto L_00338ED8; } }
L_00338F28:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00338F30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00338F50:
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] + 1u);  if (t) { goto L_00338FE8; } }
    set32(c.r[6], 0u - 126u);
    c.budget -= 2;
L_00338F68:
    c.r[7].d[0] = c.r[8].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.r[3].d[0] = c.r[7].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[7].sd[0] < 91ll ? 1ull : 0ull;  if (t) { goto L_00338F98; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[7].w[0] + 31u);  if (t) { goto L_00338F98; } }
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { goto L_00338FD8; } }
L_00338F98:
    c.r[3].d[0] = c.r[7].sd[0] < 97ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[7].sd[0] < 123ll ? 1ull : 0ull;  if (t) { goto L_00338FC0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[7].w[0] + 32u);  if (t) { goto L_00338FC0; } }
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { goto L_00338FD8; } }
L_00338FC0:
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.budget -= 6;
L_00338FD8:
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[4], c.r[3].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00338F68u | kUnwind; return; } goto L_00338F68; } }
L_00338FE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00338FF0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00339080; } }
    c.budget -= 1;
L_00339000:
    c.r[7].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = c.r[7].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[7].sd[0] < 160ll ? 1ull : 0ull;  if (t) { goto L_00339018; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00339030; } }
L_00339018:
    c.r[3].d[0] = c.r[7].sd[0] < 224ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[7].sd[0] < 256ll ? 1ull : 0ull;  if (t) { goto L_00339048; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00339048; } }
    c.budget -= 1;
L_00339030:
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 2u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { goto L_00339070; } }
L_00339048:
    set32(c.r[3], ld32((c.r[28].w[0] - 27788u)));
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.budget -= 10;
L_00339070:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00339000u | kUnwind; return; } goto L_00339000; } }
    c.budget -= 1;
L_00339080:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00339090:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[7].d[0] = c.r[4].d[0] << 48;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[6], ld32((c.r[28].w[0] - 22568u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[29].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] - 112u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] - 108u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[8], ld32((c.r[6].w[0] + 4u)));
    c.f[0] = ld32((c.r[6].w[0] + 20u));
    c.f[1] = ld32((c.r[8].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[12], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    st16((c.r[29].w[0] + 16u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[8].w[0] + 6u));
    c.f[1] = ld32((c.r[8].w[0]));
    c.f[0] = ld32((c.r[6].w[0] + 20u));
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[12], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st16((c.r[29].w[0] + 20u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 4u)));
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    st16((c.r[29].w[0] + 18u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].d[0] = ld16((c.r[8].w[0] + 6u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 45;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339144u); st16((c.r[29].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008B(c, 150u, depth + 1u); else { c.pc = 0x0032DAC0u; return; } if (c.pc != 0x00339144u) [[unlikely]] return; }
L_00339144:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00339150:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[10], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[8], c.r[8].w[0] + 7120u);
    set32(c.r[7], c.r[7].w[0] + 7121u);
    set32(c.r[3], 0u + 1u);
    c.r[9].d[0] = ld8((c.r[10].w[0] + 31u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 48u)));
    set32(c.r[9], c.r[9].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[9].w[0]);
    c.r[7].d[0] = ld8((c.r[7].w[0]));
    c.budget -= 16;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; c.r[8].d[0] = ld8((c.r[8].w[0]));  if (t) { goto L_003391C0; } }
    c.r[3].d[0] = ld8((c.r[10].w[0] + 38u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003391C0; } }
    c.r[3].d[0] = ld8((c.r[10].w[0] + 36u));
    c.r[6].d[0] = c.r[8].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_003391C0; } }
    c.r[3].d[0] = ld8((c.r[10].w[0] + 37u));
    c.r[6].d[0] = c.r[7].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_00339298; } }
    c.budget -= 1;
L_003391C0:
    set32(c.r[9], ld32((c.r[28].w[0] - 22568u)));
    c.r[10].d[0] = c.r[4].d[0] << 48;
    c.r[2].d[0] = c.r[8].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 48);
    c.r[2].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[8], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[6], ld32((c.r[9].w[0])));
    set32(c.r[2], c.r[2].w[0] - 112u);
    set32(c.r[3], c.r[3].w[0] - 108u);
    set32(c.r[7], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    st32((c.r[29].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[5], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[9].w[0] + 20u));
    c.f[1] = ld32((c.r[6].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[12], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    st16((c.r[29].w[0] + 16u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[6].w[0] + 6u));
    c.f[1] = ld32((c.r[6].w[0]));
    c.f[0] = ld32((c.r[9].w[0] + 20u));
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[12], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st16((c.r[29].w[0] + 20u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 4u)));
    set32(c.r[2], c.r[10].w[0] + c.r[2].w[0]);
    st16((c.r[29].w[0] + 18u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].d[0] = ld16((c.r[6].w[0] + 6u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[10].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 53;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339294u); st16((c.r[29].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008B(c, 150u, depth + 1u); else { c.pc = 0x0032DAC0u; return; } if (c.pc != 0x00339294u) [[unlikely]] return; }
L_00339294:
    c.budget -= 1;
L_00339298:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003392B0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[30].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 56u)));
    c.budget -= 17;
    { const bool t = c.r[4].d[0] != 0ull; c.f[20] = ld32((c.r[3].w[0] + 64u));  if (t) { goto L_00339300; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00339310; } }
L_00339300:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 4;
L_00339310:
    set32(c.r[5], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43F40000u);
    c.r[18].d[0] = c.r[30].d[0] << 48;
    c.f[1] = c.r[2].w[0];
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    set32(c.r[16], c.r[29].w[0] + 212u);
    set32(c.r[20], c.r[29].w[0] + 210u);
    set32(c.r[2], c.r[18].w[0] - 4u);
    set32(c.r[21], c.r[29].w[0] + 214u);
    set32(c.r[17], c.r[29].w[0] + 216u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[20]);
    set32(c.r[3], c.f[0]);
    st16((c.r[29].w[0] + 208u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[20], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[20].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] + 104u);
    st16((c.r[21].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339390u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008B(c, 150u, depth + 1u); else { c.pc = 0x0032DAC0u; return; } if (c.pc != 0x00339390u) [[unlikely]] return; }
L_00339390:
    set32(c.r[6], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[1] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 208u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[18].w[0] + 20u);
    c.f[0] = ld32((c.r[6].w[0] + 20u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st16((c.r[29].w[0] + 208u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.f[0] = ld32((c.r[6].w[0] + 20u));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[20].w[0]), static_cast<std::uint16_t>(c.r[30].w[0]));
    st16((c.r[21].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 48u)));
    c.budget -= 29;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[7], c.r[6].w[0] + 16u);  if (t) { goto L_00339438; } }
    c.r[2].d[0] = ld8((c.r[6].w[0] + 38u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00339438; } }
    c.r[2].d[0] = ld8((c.r[6].w[0] + 47u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00339438; } }
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF0000000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 7;
L_00339438:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339440u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_008B(c, 150u, depth + 1u); else { c.pc = 0x0032DAC0u; return; } if (c.pc != 0x00339440u) [[unlikely]] return; }
L_00339440:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[19].d[0] = ld8((c.r[2].w[0] + 17u));
    c.budget -= 8;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[17], ld32((c.r[2].w[0] + 4u)));  if (t) { goto L_00339500; } }
L_00339460:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.f[1] = ld32((c.r[17].w[0]));
    set32(c.r[5], c.r[5].w[0] - 112u);
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[20], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st16((c.r[29].w[0] + 208u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 6u));
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[20], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    st16((c.r[20].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 6u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 37;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003394F4u); st16((c.r[21].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008B(c, 150u, depth + 1u); else { c.pc = 0x0032DAC0u; return; } if (c.pc != 0x003394F4u) [[unlikely]] return; }
L_003394F4:
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00339460u | kUnwind; return; } goto L_00339460; } }
L_00339500:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339508u);  if (depth < kMaxDepth) unit_00A2(c, 314u, depth + 1u); else { c.pc = 0x0038ABC0u; return; } if (c.pc != 0x00339508u) [[unlikely]] return; }
L_00339508:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339510u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00A2(c, 316u, depth + 1u); else { c.pc = 0x0038AC00u; return; } if (c.pc != 0x00339510u) [[unlikely]] return; }
L_00339510:
    set32(c.r[4], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 18u));
    set32(c.r[20], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[19], ld32((c.r[3].w[0])));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003396D0; } }
    set32(c.r[17], c.r[29].w[0] + 184u);
    set32(c.r[21], c.r[29].w[0] + 180u);
    set32(c.r[22], c.r[29].w[0] + 188u);
    set32(c.r[23], c.r[29].w[0] + 190u);
    c.budget -= 4;
L_00339540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339548u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 196u, depth + 1u); else { c.pc = 0x0033A3C0u; return; } if (c.pc != 0x00339548u) [[unlikely]] return; }
L_00339548:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00339570; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(197ll);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00339590; } }
L_00339570:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 1u));
    c.r[4].d[0] = ld8((c.r[19].w[0]));
    c.r[3].d[0] = c.r[2].d[0] & 15ull;
    c.budget -= 8;
L_00339590:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] + 880u);
    set32(c.r[8], c.r[8].w[0] - 112u);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[4].d[0] & 15ull;
    c.r[9].d[0] = ld8((c.r[5].w[0] + 2u));
    set32(c.r[3], c.r[2].w[0] << 4);
    c.r[2].d[0] = c.r[4].d[0] & 240ull;
    set32(c.r[7], c.r[3].w[0] + 1u);
    set32(c.r[6], c.r[2].w[0] + 1u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    c.r[3].d[0] = c.r[9].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[5].d[0] = ld8((c.r[5].w[0] + 1u));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 4));
    st16((c.r[21].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[5], c.r[29].w[0] + 182u);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld16((c.r[20].w[0] + 6u));
    c.f[0] = ld32((c.r[20].w[0]));
    set32(c.r[10], ld32((c.r[28].w[0] - 22568u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0])));
    set32(c.r[9], c.r[9].w[0] << 3);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    c.f[2] = ld32((c.r[10].w[0] + 20u));
    c.f[1] = ld32((c.r[8].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[0] = fp::add(c.f[20], c.f[0]);
    set32(c.r[8], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.r[8].d[0] = c.r[8].d[0] << 48;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 48);
    set32(c.r[5], c.r[8].w[0] - c.r[5].w[0]);
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 1));
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[5], c.r[8].w[0] + c.r[5].w[0]);
    st16((c.r[29].w[0] + 176u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 4u)));
    set32(c.r[5], c.r[18].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[29].w[0] + 178u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[22].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0])));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[29].w[0] + 192u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[23].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[23].w[0])));
    set32(c.r[3], c.r[2].w[0] + 15u);
    set32(c.r[2], c.r[29].w[0] + 194u);
    c.budget -= 72;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003396B0u); st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_008B(c, 153u, depth + 1u); else { c.pc = 0x0032DC60u; return; } if (c.pc != 0x003396B0u) [[unlikely]] return; }
L_003396B0:
    set32(c.r[4], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[20], c.r[20].w[0] + 8u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 18u));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00339540u | kUnwind; return; } goto L_00339540; } }
L_003396D0:
    set32(c.r[17], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00339760; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 53u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00339760; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[4], 0u + 20u);
    set32(c.r[5], 0u + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003396FCu); set32(c.r[19], c.r[2].w[0] + 96u);  if (depth < kMaxDepth) unit_00A2(c, 322u, depth + 1u); else { c.pc = 0x0038ACC0u; return; } if (c.pc != 0x003396FCu) [[unlikely]] return; }
L_003396FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339704u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 323u, depth + 1u); else { c.pc = 0x0038ACD0u; return; } if (c.pc != 0x00339704u) [[unlikely]] return; }
L_00339704:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00339708:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 4u)));
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[1] = ld32((c.r[3].w[0] + 20u));
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = c.r[2].d[0] << 48;
    fpu_div(c, 1u, c.f[20], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339738u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);  if (depth < kMaxDepth) unit_00A2(c, 324u, depth + 1u); else { c.pc = 0x0038ACE0u; return; } if (c.pc != 0x00339738u) [[unlikely]] return; }
L_00339738:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339748u); set32(c.r[4], c.r[4].w[0] - 632u);  if (depth < kMaxDepth) unit_00AA(c, 51u, depth + 1u); else { c.pc = 0x003A87A0u; return; } if (c.pc != 0x00339748u) [[unlikely]] return; }
L_00339748:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00339708u | kUnwind; return; } goto L_00339708; } }
    c.budget -= 1;
L_00339760:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339768u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 316u, depth + 1u); else { c.pc = 0x0038AC00u; return; } if (c.pc != 0x00339768u) [[unlikely]] return; }
L_00339768:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 38u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00339790; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339780u);  if (depth < kMaxDepth) unit_00A5(c, 78u, depth + 1u); else { c.pc = 0x003947A0u; return; } if (c.pc != 0x00339780u) [[unlikely]] return; }
L_00339780:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00339868; } }
    c.budget -= 1;
L_00339790:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003397A0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00A2(c, 319u, depth + 1u); else { c.pc = 0x0038AC60u; return; } if (c.pc != 0x003397A0u) [[unlikely]] return; }
L_003397A0:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 24u));
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    set32(c.r[2], c.r[2].w[0] << 10);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_003397C8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003397E0; } }
L_003397C8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_003397E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38C90000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[0] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003397F4u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0094(c, 201u, depth + 1u); else { c.pc = 0x00351480u; return; } if (c.pc != 0x003397F4u) [[unlikely]] return; }
L_003397F4:
    c.f[21] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339800u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 196u, depth + 1u); else { c.pc = 0x0033A3C0u; return; } if (c.pc != 0x00339800u) [[unlikely]] return; }
L_00339800:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00339820; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[2].w[0] + 24u)));  if (t) { goto L_00339830; } }
    c.budget -= 1;
L_00339820:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
L_00339830:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.f[0] = fp::mul(c.f[0], c.f[21]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + 191u);
    set32(c.r[2], c.r[2].w[0] << 24);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339868u); c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_008E(c, 92u, depth + 1u); else { c.pc = 0x00339090u; return; } if (c.pc != 0x00339868u) [[unlikely]] return; }
L_00339868:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339870u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00A2(c, 319u, depth + 1u); else { c.pc = 0x0038AC60u; return; } if (c.pc != 0x00339870u) [[unlikely]] return; }
L_00339870:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xD0000000u);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339890u); c.r[5].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_008E(c, 94u, depth + 1u); else { c.pc = 0x00339150u; return; } if (c.pc != 0x00339890u) [[unlikely]] return; }
L_00339890:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339898u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 319u, depth + 1u); else { c.pc = 0x0038AC60u; return; } if (c.pc != 0x00339898u) [[unlikely]] return; }
L_00339898:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    c.r[4].d[0] = c.r[18].d[0] << 48;
    c.f[1] = c.r[2].w[0];
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.f[20] = fp::add(c.f[1], c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = ld32((c.r[3].w[0] + 20u));
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 1u, c.f[20], c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003398D4u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00A5(c, 214u, depth + 1u); else { c.pc = 0x00395840u; return; } if (c.pc != 0x003398D4u) [[unlikely]] return; }
L_003398D4:
    set32(c.r[2], c.r[18].w[0] - 1u);
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.f[1] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = ld32((c.r[3].w[0] + 20u));
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 1u, c.f[20], c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033990Cu); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00A5(c, 379u, depth + 1u); else { c.pc = 0x00396D90u; return; } if (c.pc != 0x0033990Cu) [[unlikely]] return; }
L_0033990C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_00339950:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[5], c.r[2].w[0] + 31u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339974u); set32(c.r[6], c.r[2].w[0] + 30u);  if (depth < kMaxDepth) unit_008E(c, 172u, depth + 1u); else { c.pc = 0x00339E00u; return; } if (c.pc != 0x00339974u) [[unlikely]] return; }
L_00339974:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00339990; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339984u); set32(c.r[5], 0u + 171u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x00339984u) [[unlikely]] return; }
L_00339984:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00339AD8; } }
    c.budget -= 1;
L_00339990:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033999Cu); st8((c.r[2].w[0] + 53u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00A5(c, 207u, depth + 1u); else { c.pc = 0x00395770u; return; } if (c.pc != 0x0033999Cu) [[unlikely]] return; }
L_0033999C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_00339AD8; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 624u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00338000u < 16384u) { entry = entries_008E[(t - 0x00338000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003399C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003399D0u);  if (depth < kMaxDepth) unit_008E(c, 177u, depth + 1u); else { c.pc = 0x00339F20u; return; } if (c.pc != 0x003399D0u) [[unlikely]] return; }
L_003399D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003399D8u);  if (depth < kMaxDepth) unit_008E(c, 187u, depth + 1u); else { c.pc = 0x0033A060u; return; } if (c.pc != 0x003399D8u) [[unlikely]] return; }
L_003399D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003399E0u);  if (depth < kMaxDepth) unit_008E(c, 189u, depth + 1u); else { c.pc = 0x0033A260u; return; } if (c.pc != 0x003399E0u) [[unlikely]] return; }
L_003399E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003399E8u);  if (depth < kMaxDepth) unit_008E(c, 154u, depth + 1u); else { c.pc = 0x00339AF0u; return; } if (c.pc != 0x003399E8u) [[unlikely]] return; }
L_003399E8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003399F4u); set32(c.r[5], 0u + 192u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x003399F4u) [[unlikely]] return; }
L_003399F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00339AD8; } }
    c.budget -= 1;
L_00339A00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339A08u);  if (depth < kMaxDepth) unit_008E(c, 177u, depth + 1u); else { c.pc = 0x00339F20u; return; } if (c.pc != 0x00339A08u) [[unlikely]] return; }
L_00339A08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339A10u);  if (depth < kMaxDepth) unit_008E(c, 187u, depth + 1u); else { c.pc = 0x0033A060u; return; } if (c.pc != 0x00339A10u) [[unlikely]] return; }
L_00339A10:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 54u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00339A38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339A28u);  if (depth < kMaxDepth) unit_00A5(c, 209u, depth + 1u); else { c.pc = 0x003957E0u; return; } if (c.pc != 0x00339A28u) [[unlikely]] return; }
L_00339A28:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339A34u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 356u, depth + 1u); else { c.pc = 0x00337880u; return; } if (c.pc != 0x00339A34u) [[unlikely]] return; }
L_00339A34:
    c.budget -= 1;
L_00339A38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339A40u);  if (depth < kMaxDepth) unit_008E(c, 154u, depth + 1u); else { c.pc = 0x00339AF0u; return; } if (c.pc != 0x00339A40u) [[unlikely]] return; }
L_00339A40:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339A4Cu); set32(c.r[5], 0u + 192u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x00339A4Cu) [[unlikely]] return; }
L_00339A4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00339AD8; } }
    c.budget -= 1;
L_00339A58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339A60u);  if (depth < kMaxDepth) unit_00A5(c, 189u, depth + 1u); else { c.pc = 0x00395570u; return; } if (c.pc != 0x00339A60u) [[unlikely]] return; }
L_00339A60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339A68u);  if (depth < kMaxDepth) unit_008E(c, 177u, depth + 1u); else { c.pc = 0x00339F20u; return; } if (c.pc != 0x00339A68u) [[unlikely]] return; }
L_00339A68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339A70u);  if (depth < kMaxDepth) unit_008E(c, 187u, depth + 1u); else { c.pc = 0x0033A060u; return; } if (c.pc != 0x00339A70u) [[unlikely]] return; }
L_00339A70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339A78u);  if (depth < kMaxDepth) unit_008E(c, 154u, depth + 1u); else { c.pc = 0x00339AF0u; return; } if (c.pc != 0x00339A78u) [[unlikely]] return; }
L_00339A78:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339A84u); set32(c.r[5], 0u + 192u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x00339A84u) [[unlikely]] return; }
L_00339A84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00339AD8; } }
    c.budget -= 1;
L_00339A90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339A98u);  if (depth < kMaxDepth) unit_008E(c, 177u, depth + 1u); else { c.pc = 0x00339F20u; return; } if (c.pc != 0x00339A98u) [[unlikely]] return; }
L_00339A98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339AA0u);  if (depth < kMaxDepth) unit_008E(c, 187u, depth + 1u); else { c.pc = 0x0033A060u; return; } if (c.pc != 0x00339AA0u) [[unlikely]] return; }
L_00339AA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339AA8u);  if (depth < kMaxDepth) unit_008E(c, 154u, depth + 1u); else { c.pc = 0x00339AF0u; return; } if (c.pc != 0x00339AA8u) [[unlikely]] return; }
L_00339AA8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339AB4u); set32(c.r[5], 0u + 192u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x00339AB4u) [[unlikely]] return; }
L_00339AB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00339AD8; } }
    c.budget -= 1;
L_00339AC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339AC8u);  if (depth < kMaxDepth) unit_008E(c, 48u, depth + 1u); else { c.pc = 0x003385C0u; return; } if (c.pc != 0x00339AC8u) [[unlikely]] return; }
L_00339AC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00339AD8; } }
L_00339AD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339AD8u);  if (depth < kMaxDepth) unit_008E(c, 179u, depth + 1u); else { c.pc = 0x00339FA0u; return; } if (c.pc != 0x00339AD8u) [[unlikely]] return; }
L_00339AD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00339AF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339B00u);  if (depth < kMaxDepth) unit_008E(c, 188u, depth + 1u); else { c.pc = 0x0033A0D0u; return; } if (c.pc != 0x00339B00u) [[unlikely]] return; }
L_00339B00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339B08u);  if (depth < kMaxDepth) unit_008D(c, 321u, depth + 1u); else { c.pc = 0x003373E0u; return; } if (c.pc != 0x00339B08u) [[unlikely]] return; }
L_00339B08:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00339B20:
    c.r[5].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 27783u));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00339B48; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 27784u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00339B48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00339B78; } }
L_00339B48:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 27779u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00339B70; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 27780u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00339B70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00339B78; } }
    c.budget -= 1;
L_00339B70:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00339B78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00339B80:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[28].w[0] - 27796u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00338E70u | kUnwind; return; } goto L_00338E70; }
L_00339B90:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[28].w[0] - 27792u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00338E70u | kUnwind; return; } goto L_00338E70; }
L_00339BA0:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    st32((c.r[3].w[0] + 64u), c.f[12]);
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[3].w[0] + 56u), static_cast<std::uint16_t>(c.r[4].w[0]));  c.pc = t; return; }
L_00339BC0:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 48u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 38u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00339BE0:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 48u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 38u), static_cast<std::uint8_t>(c.r[4].w[0]));  c.pc = t; return; }
L_00339C00:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 49u), static_cast<std::uint8_t>(c.r[4].w[0]));  c.pc = t; return; }
L_00339C10:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 49u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00339C20:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[29], c.r[29].w[0] - 16u);  if (t) { goto L_00339C30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[29].w[0] + 15u);  if (t) { goto L_00339C48; } }
L_00339C30:
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00339C48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00339DF0; } }
L_00339C48:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_00339C58; } }
    set32(c.r[6], c.r[29].w[0] + 15u);
    c.budget -= 2;
L_00339C58:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_00339D28; } }
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] - 576u);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00338000u < 16384u) { entry = entries_008E[(t - 0x00338000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00339C80:
    c.r[2].d[0] = c.r[3].d[0] | 8ull;
    c.r[11].d[0] = c.r[3].d[0] + 0ull;
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_00339D38; } }
    c.budget -= 1;
L_00339C98:
    set32(c.r[2], c.r[3].w[0] + 5u);
    c.r[11].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].d[0] | 8ull;
    c.r[7].d[0] = c.r[11].d[0] + 0ull;
    c.r[10].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[3].w[0] + 13u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_00339D38; } }
L_00339CB8:
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(10ll);
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(15ll);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(7ll);  if (t) { goto L_00339D38; } }
L_00339CD0:
    set32(c.r[2], c.r[3].w[0] + 8u);
    c.r[11].d[0] = c.r[2].d[0] & 255ull;
    c.r[10].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[11].d[0] + 0ull;  if (t) { goto L_00339D38; } }
    c.budget -= 1;
L_00339CE8:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00339D28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00339DF0; } }
    c.budget -= 1;
L_00339D08:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00339D28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00339DF0; } }
    c.budget -= 1;
L_00339D28:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.r[10].d[0] = c.r[3].d[0] + 0ull;
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.r[11].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
L_00339D38:
    set32(c.r[9], ld32((c.r[28].w[0] - 22568u)));
    c.r[8].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    set32(c.r[8], c.r[2].w[0] << (c.r[8].w[0] & 31u));
    set32(c.r[9], ld32((c.r[9].w[0] + 32u)));
    c.r[8].d[0] = c.r[9].d[0] & c.r[8].d[0];
    c.budget -= 8;
    { const bool t = c.r[8].d[0] == 0ull; c.r[8].d[0] = c.r[10].d[0] & 255ull;  if (t) { goto L_00339DE0; } }
    set32(c.r[8], c.r[2].w[0] << (c.r[8].w[0] & 31u));
    c.r[8].d[0] = c.r[9].d[0] & c.r[8].d[0];
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_00339DD0; } }
    c.r[8].d[0] = c.r[11].d[0] & 255ull;
    set32(c.r[8], c.r[2].w[0] << (c.r[8].w[0] & 31u));
    c.r[8].d[0] = c.r[9].d[0] & c.r[8].d[0];
    c.budget -= 5;
    { const bool t = c.r[8].d[0] == 0ull; c.r[8].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_00339DC0; } }
    set32(c.r[8], c.r[2].w[0] << (c.r[8].w[0] & 31u));
    c.r[8].d[0] = c.r[9].d[0] & c.r[8].d[0];
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_00339DB0; } }
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.r[3].d[0] = c.r[9].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00339DF0; } }
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { goto L_00339DF0; } }
L_00339DB0:
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00339DF0; } }
L_00339DC0:
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00339DF0; } }
L_00339DD0:
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00339DF0; } }
L_00339DE0:
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00339DF0; } }
L_00339DF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00339E00:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00339E28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339E1Cu);  if (depth < kMaxDepth) unit_008E(c, 165u, depth + 1u); else { c.pc = 0x00339C20u; return; } if (c.pc != 0x00339E1Cu) [[unlikely]] return; }
L_00339E1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00339F10; } }
    c.budget -= 1;
L_00339E28:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_00339E3C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[2].w[0] + 30u));  if (t) { goto L_00339E40; } }
L_00339E3C:
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    c.budget -= 1;
L_00339E40:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 9u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00339ED0; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 7u);  if (t) { goto L_00339E98; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00339E78; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00339E78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00339F08; } }
L_00339E78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339E80u);  if (depth < kMaxDepth) unit_008E(c, 47u, depth + 1u); else { c.pc = 0x00338560u; return; } if (c.pc != 0x00339E80u) [[unlikely]] return; }
L_00339E80:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00339F08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00339F10; } }
L_00339E98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339EA0u);  if (depth < kMaxDepth) unit_008E(c, 178u, depth + 1u); else { c.pc = 0x00339F40u; return; } if (c.pc != 0x00339EA0u) [[unlikely]] return; }
L_00339EA0:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00339F08; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 30u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00339F08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00339F10; } }
    c.budget -= 1;
L_00339ED0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339ED8u);  if (depth < kMaxDepth) unit_008E(c, 178u, depth + 1u); else { c.pc = 0x00339F40u; return; } if (c.pc != 0x00339ED8u) [[unlikely]] return; }
L_00339ED8:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00339F08; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 30u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00339F08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00339F10; } }
    c.budget -= 1;
L_00339F08:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00339F10:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00339F20:
    set32(c.r[5], ld32((c.r[28].w[0] - 22568u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], c.r[3].w[0] + 7168u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 30u));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[5].w[0] + 31u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00339F40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] + 7200u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00339F88; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 22568u)));
    c.r[4].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    set32(c.r[3], ld32((c.r[5].w[0] + 32u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00339F88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00339F90; } }
L_00339F88:
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_00339F90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00339FA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[4].d[0] = ld8((c.r[2].w[0] + 30u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339FC4u); set32(c.r[18], 0u + 171u);  if (depth < kMaxDepth) unit_008E(c, 178u, depth + 1u); else { c.pc = 0x00339F40u; return; } if (c.pc != 0x00339FC4u) [[unlikely]] return; }
L_00339FC4:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_0033A030; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[17].d[0] = ld8((c.r[2].w[0] + 36u));
    c.r[16].d[0] = ld8((c.r[2].w[0] + 37u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339FE8u); st8((c.r[2].w[0] + 30u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_008E(c, 177u, depth + 1u); else { c.pc = 0x00339F20u; return; } if (c.pc != 0x00339FE8u) [[unlikely]] return; }
L_00339FE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339FF0u);  if (depth < kMaxDepth) unit_008E(c, 187u, depth + 1u); else { c.pc = 0x0033A060u; return; } if (c.pc != 0x00339FF0u) [[unlikely]] return; }
L_00339FF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339FF8u);  if (depth < kMaxDepth) unit_008E(c, 154u, depth + 1u); else { c.pc = 0x00339AF0u; return; } if (c.pc != 0x00339FF8u) [[unlikely]] return; }
L_00339FF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A000u);  if (depth < kMaxDepth) unit_00A5(c, 207u, depth + 1u); else { c.pc = 0x00395770u; return; } if (c.pc != 0x0033A000u) [[unlikely]] return; }
L_0033A000:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[18], 0u + 192u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] & 127ull;
    st8((c.r[3].w[0] + 41u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    st8((c.r[2].w[0] + 36u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A02Cu); st8((c.r[2].w[0] + 37u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_008D(c, 321u, depth + 1u); else { c.pc = 0x003373E0u; return; } if (c.pc != 0x0033A02Cu) [[unlikely]] return; }
L_0033A02C:
    c.budget -= 1;
L_0033A030:
    c.r[5].d[0] = c.r[18].d[0] & 255ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A03Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x0033A03Cu) [[unlikely]] return; }
L_0033A03C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0033A060:
    set32(c.r[5], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[3], 0u + 4u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 31u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 5u);  if (t) { goto L_0033A080; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0033A0C0; } }
    c.budget -= 1;
L_0033A080:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[4], c.r[3].w[0] << 1);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], c.r[3].w[0] + 7120u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], c.r[3].w[0] + 7121u);
    st8((c.r[5].w[0] + 36u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 22568u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 31u));
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[5].w[0] + 37u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 16;
L_0033A0C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033A0D0:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[4], 0u + 6u);
    c.r[5].d[0] = ld8((c.r[3].w[0] + 29u));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 10u);  if (t) { goto L_0033A1F8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0033A128; } }
    set32(c.r[4], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 8u);  if (t) { goto L_0033A128; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0033A128; } }
    set32(c.r[4], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0033A118; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033A208; } }
    c.budget -= 1;
L_0033A118:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[4].w[0] + 6980u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[4].w[0]);  if (t) { goto L_0033A228; } }
L_0033A128:
    c.r[6].d[0] = ld8((c.r[3].w[0] + 30u));
    set32(c.r[5], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[7], c.r[3].w[0] + 30u);  if (t) { goto L_0033A1C0; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 15u);  if (t) { goto L_0033A1B8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_0033A1A8; } }
    set32(c.r[4], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 10u);  if (t) { goto L_0033A198; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_0033A188; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_0033A178; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033A1D8; } }
    c.budget -= 1;
L_0033A178:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[4].w[0] + 7000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[4].w[0]);  if (t) { goto L_0033A228; } }
L_0033A188:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[4].w[0] + 7020u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[4].w[0]);  if (t) { goto L_0033A228; } }
L_0033A198:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[4].w[0] + 7040u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[4].w[0]);  if (t) { goto L_0033A228; } }
L_0033A1A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[4].w[0] + 7060u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[4].w[0]);  if (t) { goto L_0033A228; } }
L_0033A1B8:
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 2;
L_0033A1C0:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[4].w[0] + 7080u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[4].w[0]);  if (t) { goto L_0033A228; } }
    c.budget -= 1;
L_0033A1D8:
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[6].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 6640u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[4].w[0]);  if (t) { goto L_0033A228; } }
L_0033A1F8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[4].w[0] + 7100u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[4].w[0]);  if (t) { goto L_0033A228; } }
L_0033A208:
    c.r[6].d[0] = ld8((c.r[3].w[0] + 30u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[4].w[0] + 6640u);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 8;
L_0033A228:
    set32(c.r[5], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[3], 0u + 4u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 31u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0033A258; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 53u));
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_0033A258; } }
    set32(c.r[3], c.r[3].w[0] + 6640u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_0033A258:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033A260:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A270u);  if (depth < kMaxDepth) unit_00A5(c, 189u, depth + 1u); else { c.pc = 0x00395570u; return; } if (c.pc != 0x0033A270u) [[unlikely]] return; }
L_0033A270:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[4], c.r[2].w[0] + 72u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A280u); set32(c.r[5], c.r[2].w[0] + 42u);  if (depth < kMaxDepth) unit_008D(c, 316u, depth + 1u); else { c.pc = 0x00337380u; return; } if (c.pc != 0x0033A280u) [[unlikely]] return; }
L_0033A280:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0033A298; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 22568u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 53u));
    c.r[3].d[0] = c.r[3].d[0] | 15ull;
    st8((c.r[4].w[0] + 53u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0033A298:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0033A2B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[1].w[0] + 39u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0033A2C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 30u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0033A2E8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0033A370; } }
L_0033A2E8:
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[2], 0u + 243u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 225u);  if (t) { goto L_0033A368; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0033A368; } }
    set32(c.r[2], 0u + 224u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 185u);  if (t) { goto L_0033A368; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0033A368; } }
    set32(c.r[2], 0u + 184u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 183u);  if (t) { goto L_0033A368; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0033A368; } }
    set32(c.r[2], 0u + 182u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 181u);  if (t) { goto L_0033A368; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0033A368; } }
    set32(c.r[2], 0u + 168u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 153u);  if (t) { goto L_0033A368; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0033A368; } }
    set32(c.r[2], 0u + 152u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0033A368; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033A370; } }
    c.budget -= 1;
L_0033A368:
    set32(c.r[16], 0u + 1u);
    c.budget -= 2;
L_0033A370:
    set32(c.r[5], c.r[4].w[0] + 2u);
    set32(c.r[4], c.r[29].w[0] + 44u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A380u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x0033A380u) [[unlikely]] return; }
L_0033A380:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[29].w[0] + 44u);
    set32(c.r[5], c.r[5].w[0] - 1104u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A398u); st8((c.r[29].w[0] + 47u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0007(c, 138u, depth + 1u); else { c.pc = 0x0011E108u; return; } if (c.pc != 0x0033A398u) [[unlikely]] return; }
L_0033A398:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033A3A8; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 2;
L_0033A3A8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033A3C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[4].w[0] + 2u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0033A3E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0033A4D0; } }
L_0033A3E8:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 2u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0033A418; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 3u));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A408u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008E(c, 172u, depth + 1u); else { c.pc = 0x00339E00u; return; } if (c.pc != 0x0033A408u) [[unlikely]] return; }
L_0033A408:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033A4D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0033A4D0; } }
L_0033A418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A420u);  if (depth < kMaxDepth) unit_00A5(c, 206u, depth + 1u); else { c.pc = 0x00395730u; return; } if (c.pc != 0x0033A420u) [[unlikely]] return; }
L_0033A420:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0033A468; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 2u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0033A450; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 3u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0033A450; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0033A4D0; } }
L_0033A450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A458u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 193u, depth + 1u); else { c.pc = 0x0033A2C0u; return; } if (c.pc != 0x0033A458u) [[unlikely]] return; }
L_0033A458:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033A4D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0033A4D0; } }
L_0033A468:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 29u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 5u);  if (t) { goto L_0033A4B8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0033A4B8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[2], 0u + 15u);  if (t) { goto L_0033A4B8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0033A4A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033A4D0; } }
    c.budget -= 1;
L_0033A4A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A4A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 201u, depth + 1u); else { c.pc = 0x0033A4F0u; return; } if (c.pc != 0x0033A4A8u) [[unlikely]] return; }
L_0033A4A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033A4D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0033A4D0; } }
L_0033A4B8:
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[2], 0u + 227u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0033A4D0; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 2;
L_0033A4D0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033A4F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0033A4F8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 16280u)));
    set32(c.r[18], c.r[17].w[0] + 16280u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_0033A54C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A52Cu); set32(c.r[4], c.r[4].w[0] - 552u);  if (depth < kMaxDepth) unit_0002(c, 58u, depth + 1u); else { c.pc = 0x00108730u; return; } if (c.pc != 0x0033A52Cu) [[unlikely]] return; }
L_0033A52C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] < 0; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0033A54C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A544u); set32(c.r[6], 0u + 14u);  if (depth < kMaxDepth) unit_0002(c, 109u, depth + 1u); else { c.pc = 0x00108D70u; return; } if (c.pc != 0x0033A544u) [[unlikely]] return; }
L_0033A544:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A54Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 79u, depth + 1u); else { c.pc = 0x001089B8u; return; } if (c.pc != 0x0033A54Cu) [[unlikely]] return; }
L_0033A54C:
    set32(c.r[2], c.r[17].w[0] + 16280u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0033A568:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 16280u)));
    set32(c.r[16], c.r[3].w[0] + 16280u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_0033A58C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A58Cu);  if (depth < kMaxDepth) unit_008E(c, 202u, depth + 1u); else { c.pc = 0x0033A4F8u; return; } if (c.pc != 0x0033A58Cu) [[unlikely]] return; }
L_0033A58C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] ^ 84ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033A5A8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A5B8u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 78u, depth + 1u); else { c.pc = 0x00104390u; return; } if (c.pc != 0x0033A5B8u) [[unlikely]] return; }
L_0033A5B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A5C0u);  if (depth < kMaxDepth) unit_008E(c, 206u, depth + 1u); else { c.pc = 0x0033A568u; return; } if (c.pc != 0x0033A5C0u) [[unlikely]] return; }
L_0033A5C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_0033A5D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[2].w[0] + 16276u));  if (t) { goto L_0033A5FC; } }
L_0033A5D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A5D8u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 78u, depth + 1u); else { c.pc = 0x00104390u; return; } if (c.pc != 0x0033A5D8u) [[unlikely]] return; }
L_0033A5D8:
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[3].w[0] >> 13);
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[3].w[0] >> 16);  goto L_0033A5F8; }
    set32(c.r[2], c.r[3].w[0] >> 4);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 1ull;  if (t) { goto L_0033A5FC; } }
L_0033A5F8:
    c.r[2].d[0] = c.r[2].d[0] & 31ull;
    c.budget -= 1;
L_0033A5FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033A628:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A638u);  if (depth < kMaxDepth) unit_008E(c, 206u, depth + 1u); else { c.pc = 0x0033A568u; return; } if (c.pc != 0x0033A638u) [[unlikely]] return; }
L_0033A638:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_0033A648; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0] + 16274u));  if (t) { goto L_0033A65C; } }
L_0033A648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A650u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 78u, depth + 1u); else { c.pc = 0x00104390u; return; } if (c.pc != 0x0033A650u) [[unlikely]] return; }
L_0033A650:
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 3;
L_0033A65C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033A668:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A678u);  if (depth < kMaxDepth) unit_008E(c, 206u, depth + 1u); else { c.pc = 0x0033A568u; return; } if (c.pc != 0x0033A678u) [[unlikely]] return; }
L_0033A678:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_0033A688; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0] + 16277u));  if (t) { goto L_0033A698; } }
L_0033A688:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A690u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 78u, depth + 1u); else { c.pc = 0x00104390u; return; } if (c.pc != 0x0033A690u) [[unlikely]] return; }
L_0033A690:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 2;
L_0033A698:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033A6A8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A6B8u);  if (depth < kMaxDepth) unit_008E(c, 206u, depth + 1u); else { c.pc = 0x0033A568u; return; } if (c.pc != 0x0033A6B8u) [[unlikely]] return; }
L_0033A6B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_0033A6C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16272u)));  if (t) { goto L_0033A6E8; } }
L_0033A6C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A6D0u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 78u, depth + 1u); else { c.pc = 0x00104390u; return; } if (c.pc != 0x0033A6D0u) [[unlikely]] return; }
L_0033A6D0:
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[4], 0u + 540u);
    set32(c.r[3], c.r[2].w[0] >> 13);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 21));
    c.r[3].d[0] = c.r[3].d[0] & 7ull;
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];
    c.budget -= 6;
L_0033A6E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033A6F8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A708u);  if (depth < kMaxDepth) unit_008E(c, 206u, depth + 1u); else { c.pc = 0x0033A568u; return; } if (c.pc != 0x0033A708u) [[unlikely]] return; }
L_0033A708:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_0033A718; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[2].w[0] + 16275u));  if (t) { goto L_0033A750; } }
L_0033A718:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A720u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 78u, depth + 1u); else { c.pc = 0x00104390u; return; } if (c.pc != 0x0033A720u) [[unlikely]] return; }
L_0033A720:
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[2].w[0] >> 13);
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[29].d[0] | 4ull;  if (t) { goto L_0033A73C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0033A750; } }
L_0033A73C:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A748u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 88u, depth + 1u); else { c.pc = 0x001045F0u; return; } if (c.pc != 0x0033A748u) [[unlikely]] return; }
L_0033A748:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 4u));
    set32(c.r[2], c.r[3].w[0] >> 6);
    c.budget -= 2;
L_0033A750:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033A760:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A770u);  if (depth < kMaxDepth) unit_008E(c, 206u, depth + 1u); else { c.pc = 0x0033A568u; return; } if (c.pc != 0x0033A770u) [[unlikely]] return; }
L_0033A770:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_0033A780; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[2].w[0] + 16278u));  if (t) { goto L_0033A7BC; } }
L_0033A780:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A788u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 78u, depth + 1u); else { c.pc = 0x00104390u; return; } if (c.pc != 0x0033A788u) [[unlikely]] return; }
L_0033A788:
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[2].w[0] >> 13);
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[29].d[0] | 4ull;  if (t) { goto L_0033A7A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0033A7BC; } }
L_0033A7A4:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A7B0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 88u, depth + 1u); else { c.pc = 0x001045F0u; return; } if (c.pc != 0x0033A7B0u) [[unlikely]] return; }
L_0033A7B0:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] >> 4);
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
L_0033A7BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033A7C8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A7D8u);  if (depth < kMaxDepth) unit_008E(c, 206u, depth + 1u); else { c.pc = 0x0033A568u; return; } if (c.pc != 0x0033A7D8u) [[unlikely]] return; }
L_0033A7D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_0033A7E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[2].w[0] + 16279u));  if (t) { goto L_0033A824; } }
L_0033A7E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A7F0u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 78u, depth + 1u); else { c.pc = 0x00104390u; return; } if (c.pc != 0x0033A7F0u) [[unlikely]] return; }
L_0033A7F0:
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[2].w[0] >> 13);
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[29].d[0] | 4ull;  if (t) { goto L_0033A80C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0033A824; } }
L_0033A80C:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A818u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 88u, depth + 1u); else { c.pc = 0x001045F0u; return; } if (c.pc != 0x0033A818u) [[unlikely]] return; }
L_0033A818:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] >> 5);
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
L_0033A824:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033A830:
    set32(c.r[3], 0u + 10u);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    mmi::divu(c, 0, c.r[4].w[0], c.r[3].w[0]);
    set32(c.r[5], 0u + 6u);
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0033A844u);  goto L_0033A848; }
L_0033A848:
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 255ull;  c.pc = t; return; }
L_0033A860:
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] >> 4);
    set32(c.r[4], 0u + 6u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 255ull;  c.pc = t; return; }
L_0033A880:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A898u); c.r[4].d[0] = ld8((c.r[16].w[0] + 7u));  if (depth < kMaxDepth) unit_008E(c, 234u, depth + 1u); else { c.pc = 0x0033A860u; return; } if (c.pc != 0x0033A898u) [[unlikely]] return; }
L_0033A898:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 6u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A8A4u); st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008E(c, 234u, depth + 1u); else { c.pc = 0x0033A860u; return; } if (c.pc != 0x0033A8A4u) [[unlikely]] return; }
L_0033A8A4:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 5u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A8B0u); st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008E(c, 234u, depth + 1u); else { c.pc = 0x0033A860u; return; } if (c.pc != 0x0033A8B0u) [[unlikely]] return; }
L_0033A8B0:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 3u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A8BCu); st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008E(c, 234u, depth + 1u); else { c.pc = 0x0033A860u; return; } if (c.pc != 0x0033A8BCu) [[unlikely]] return; }
L_0033A8BC:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 2u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A8C8u); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008E(c, 234u, depth + 1u); else { c.pc = 0x0033A860u; return; } if (c.pc != 0x0033A8C8u) [[unlikely]] return; }
L_0033A8C8:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 1u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A8D4u); st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008E(c, 234u, depth + 1u); else { c.pc = 0x0033A860u; return; } if (c.pc != 0x0033A8D4u) [[unlikely]] return; }
L_0033A8D4:
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033A8E8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A900u); c.r[4].d[0] = ld8((c.r[16].w[0] + 7u));  if (depth < kMaxDepth) unit_008E(c, 233u, depth + 1u); else { c.pc = 0x0033A830u; return; } if (c.pc != 0x0033A900u) [[unlikely]] return; }
L_0033A900:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 6u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A90Cu); st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008E(c, 233u, depth + 1u); else { c.pc = 0x0033A830u; return; } if (c.pc != 0x0033A90Cu) [[unlikely]] return; }
L_0033A90C:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 5u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A918u); st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008E(c, 233u, depth + 1u); else { c.pc = 0x0033A830u; return; } if (c.pc != 0x0033A918u) [[unlikely]] return; }
L_0033A918:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 3u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A924u); st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008E(c, 233u, depth + 1u); else { c.pc = 0x0033A830u; return; } if (c.pc != 0x0033A924u) [[unlikely]] return; }
L_0033A924:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 2u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A930u); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008E(c, 233u, depth + 1u); else { c.pc = 0x0033A830u; return; } if (c.pc != 0x0033A930u) [[unlikely]] return; }
L_0033A930:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 1u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A93Cu); st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008E(c, 233u, depth + 1u); else { c.pc = 0x0033A830u; return; } if (c.pc != 0x0033A93Cu) [[unlikely]] return; }
L_0033A93C:
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033A950:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 5u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 7u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[9], c.r[2].w[0] - 536u);
    ldl(c.r[6], (c.r[9].w[0] + 7u));
    ldr(c.r[6], (c.r[9].w[0]));
    lwl(c.r[7], (c.r[9].w[0] + 11u));
    lwr(c.r[7], (c.r[9].w[0] + 8u));
    sdl(c.r[6], (c.r[29].w[0] + 7u));
    sdr(c.r[6], (c.r[29].w[0]));
    swl(c.r[7], (c.r[29].w[0] + 11u));
    swr(c.r[7], (c.r[29].w[0] + 8u));
    c.r[4].d[0] = c.r[4].d[0] & 3ull;
    c.budget -= 18;
    { const bool t = c.r[4].d[0] != 0ull; st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0033A9A0; } }
    set32(c.r[2], 0u + 29u);
    st8((c.r[29].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0033A9A0:
    c.r[2].d[0] = ld8((c.r[5].w[0] + 6u));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 5u));
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] - 1u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0033A9FC; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 6u));
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 13u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; st8((c.r[5].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0033A9FC; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 7u));
    set32(c.r[2], 0u + 99u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_0033A9F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 7u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0033A9F4; } }
L_0033A9F0:
    st8((c.r[5].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0033A9F4:
    set32(c.r[2], 0u + 1u);
    st8((c.r[5].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0033A9FC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0033AA08:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 5u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 7u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[9], c.r[2].w[0] - 536u);
    ldl(c.r[6], (c.r[9].w[0] + 7u));
    ldr(c.r[6], (c.r[9].w[0]));
    lwl(c.r[7], (c.r[9].w[0] + 11u));
    lwr(c.r[7], (c.r[9].w[0] + 8u));
    sdl(c.r[6], (c.r[29].w[0] + 7u));
    sdr(c.r[6], (c.r[29].w[0]));
    swl(c.r[7], (c.r[29].w[0] + 11u));
    swr(c.r[7], (c.r[29].w[0] + 8u));
    c.r[4].d[0] = c.r[4].d[0] & 3ull;
    c.budget -= 18;
    { const bool t = c.r[4].d[0] != 0ull; st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0033AA58; } }
    set32(c.r[2], 0u + 29u);
    st8((c.r[29].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0033AA58:
    c.r[2].d[0] = ld8((c.r[5].w[0] + 5u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033AAA4; } }
    c.r[2].d[0] = ld8((c.r[5].w[0] + 6u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[5].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0033AA94; } }
    c.r[2].d[0] = ld8((c.r[5].w[0] + 7u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[2].w[0] - 1u);  if (t) { goto L_0033AA88; } }
    set32(c.r[2], 0u + 99u);
    c.budget -= 1;
L_0033AA88:
    st8((c.r[5].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 12u);
    st8((c.r[5].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0033AA94:
    c.r[2].d[0] = ld8((c.r[5].w[0] + 6u));
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] - 1u));
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0033AAA4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0033AAB0:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], 0u + 24u);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 3u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0033AAD8; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033A950u | kUnwind; return; } goto L_0033A950; }
L_0033AAD8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033AAE0:
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[3].w[0] + 3u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[2].w[0] - 1u);  if (t) { goto L_0033AAFC; } }
    set32(c.r[2], 0u + 23u);
    c.budget -= 3;
    { st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033AA08u | kUnwind; return; } goto L_0033AA08; }
L_0033AAFC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  c.pc = t; return; }
L_0033AB08:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AB24u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 235u, depth + 1u); else { c.pc = 0x0033A880u; return; } if (c.pc != 0x0033AB24u) [[unlikely]] return; }
L_0033AB24:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 2u));
    set32(c.r[16], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    if (c.r[16].sd[0] < 0) { set32(c.r[16], c.r[16].w[0] + 60u);  goto L_0033AB68; }
    c.r[2].d[0] = c.r[16].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[16].w[0]));  goto L_0033AB7C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0033AB48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AB50u); set32(c.r[16], c.r[16].w[0] - 60u);  if (depth < kMaxDepth) unit_008E(c, 251u, depth + 1u); else { c.pc = 0x0033AAB0u; return; } if (c.pc != 0x0033AB50u) [[unlikely]] return; }
L_0033AB50:
    c.r[2].d[0] = c.r[16].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033AB48u | kUnwind; return; } goto L_0033AB48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (t) { goto L_0033AB80; } }
    c.budget -= 1;
L_0033AB68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AB70u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 252u, depth + 1u); else { c.pc = 0x0033AAE0u; return; } if (c.pc != 0x0033AB70u) [[unlikely]] return; }
L_0033AB70:
    c.budget -= 2;
    if (c.r[16].sd[0] < 0) { set32(c.r[16], c.r[16].w[0] + 60u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033AB68u | kUnwind; return; } goto L_0033AB68; }
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 1;
L_0033AB7C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0033AB80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033A8E8u | kUnwind; return; } goto L_0033A8E8; }
L_0033AB98:
    c.budget -= 2;
    { set32(c.r[5], 0u - 540u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033AB08u | kUnwind; return; } goto L_0033AB08; }
L_0033ABA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033ABB8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 218u, depth + 1u); else { c.pc = 0x0033A6A8u; return; } if (c.pc != 0x0033ABB8u) [[unlikely]] return; }
L_0033ABB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033ABC0u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 225u, depth + 1u); else { c.pc = 0x0033A760u; return; } if (c.pc != 0x0033ABC0u) [[unlikely]] return; }
L_0033ABC0:
    set32(c.r[3], 0u + 60u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], c.r[2].w[0] - 540u);
    set32(c.r[5], c.r[17].w[0] + c.r[2].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033AB08u | kUnwind; return; } goto L_0033AB08; }
L_0033ABF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 1792u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AC0Cu); set32(c.r[6], 0u + 232u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0033AC0Cu) [[unlikely]] return; }
L_0033AC0C:
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 1808u), c.r[2].w[0]);
    c.budget -= 3;
L_0033AC18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AC20u);  if (depth < kMaxDepth) unit_0003(c, 374u, depth + 1u); else { c.pc = 0x0010F538u; return; } if (c.pc != 0x0033AC20u) [[unlikely]] return; }
L_0033AC20:
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033AC18u | kUnwind; return; } goto L_0033AC18; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0033AC50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[2].w[0] + 24u);
    st32((c.r[4].w[0] + 24u), 0u);
    set32(c.r[6], c.r[2].w[0] + 28u);
    st32((c.r[4].w[0] + 28u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AC74u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0003(c, 440u, depth + 1u); else { c.pc = 0x0010FF48u; return; } if (c.pc != 0x0033AC74u) [[unlikely]] return; }
L_0033AC74:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0033AC90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0033AD60; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0033ACF0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033ACC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033AEB0; } }
L_0033ACC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033ACD0u);  if (depth < kMaxDepth) unit_008E(c, 267u, depth + 1u); else { c.pc = 0x0033AC50u; return; } if (c.pc != 0x0033ACD0u) [[unlikely]] return; }
L_0033ACD0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0033AEB0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 6;
L_0033ACF0:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[16].w[0] + 40u);
    set32(c.r[7], c.r[16].w[0] + 44u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AD08u); set32(c.r[8], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_0004(c, 12u, depth + 1u); else { c.pc = 0x00110068u; return; } if (c.pc != 0x0033AD08u) [[unlikely]] return; }
L_0033AD08:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0033AD50; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] > 0; st32((c.r[16].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_0033AEB0; } }
L_0033AD20:
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0] + 52u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 64u), 0u);  if (t) { goto L_0033AEB8; } }
    c.budget -= 1;
L_0033AD50:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0033AEB0; } }
L_0033AD60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AD68u);  if (depth < kMaxDepth) unit_008E(c, 267u, depth + 1u); else { c.pc = 0x0033AC50u; return; } if (c.pc != 0x0033AD68u) [[unlikely]] return; }
L_0033AD68:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0033AEB0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], 0u - 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_0033AE08; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0033ADE8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033AD98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033AE80; } }
L_0033AD98:
    set32(c.r[5], 0u + 1u);
    c.budget -= 2;
L_0033ADA0:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033AD20u | kUnwind; return; } goto L_0033AD20; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033AE30; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 52u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 64u), c.r[3].w[0]);  if (t) { goto L_0033AE98; } }
    c.budget -= 1;
L_0033ADE8:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[3], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033ADA0u | kUnwind; return; } goto L_0033ADA0; } }
L_0033AE08:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033AD20u | kUnwind; return; } goto L_0033AD20; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 6;
L_0033AE30:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_0033AE50; } }
L_0033AE40:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0033AEB8; } }
L_0033AE50:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], 0u + 8000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 52u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 64u), c.r[3].w[0]);  if (t) { goto L_0033AE98; } }
    c.budget -= 1;
L_0033AE80:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0] + 32u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033AD20u | kUnwind; return; } goto L_0033AD20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033AE40u | kUnwind; return; } goto L_0033AE40; } }
L_0033AE98:
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 52u)));  if (t) { goto L_0033AEB8; } }
L_0033AEB0:
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_0033AEB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033AED0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0033AF50; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033AF00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033AFB8; } }
    c.budget -= 1;
L_0033AF00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AF08u);  if (depth < kMaxDepth) unit_008E(c, 267u, depth + 1u); else { c.pc = 0x0033AC50u; return; } if (c.pc != 0x0033AF08u) [[unlikely]] return; }
L_0033AF08:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0033AFB8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[16].w[0] + 114u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AF30u); set32(c.r[9], c.r[9].w[0] + 1728u);  if (depth < kMaxDepth) unit_0004(c, 34u, depth + 1u); else { c.pc = 0x00110258u; return; } if (c.pc != 0x0033AF30u) [[unlikely]] return; }
L_0033AF30:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0033AF40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0033AFC0; } }
L_0033AF40:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0033AFB8; } }
L_0033AF50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AF58u);  if (depth < kMaxDepth) unit_008E(c, 267u, depth + 1u); else { c.pc = 0x0033AC50u; return; } if (c.pc != 0x0033AF58u) [[unlikely]] return; }
L_0033AF58:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0033AFB8; } }
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0033AF80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0033AFC0; } }
    c.budget -= 1;
L_0033AF80:
    set32(c.r[3], 0u - 5u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[1].d[0] = c.r[4].sd[0] < -10ll ? 1ull : 0ull;  if (t) { goto L_0033AF98; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0033AFA0; } }
    c.budget -= 1;
L_0033AF98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0033AFC0; } }
L_0033AFA0:
    set32(c.r[3], 0u - 6u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0033AFB0; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_0033AFB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033AFC0; } }
L_0033AFB8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_0033AFC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033AFD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0033B0E8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0033B0A8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0033B060; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033B010; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033B108; } }
L_0033B010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B018u);  if (depth < kMaxDepth) unit_008E(c, 267u, depth + 1u); else { c.pc = 0x0033AC50u; return; } if (c.pc != 0x0033B018u) [[unlikely]] return; }
L_0033B018:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0033B108; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[16].w[0] + 114u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B034u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0003(c, 402u, depth + 1u); else { c.pc = 0x0010F920u; return; } if (c.pc != 0x0033B034u) [[unlikely]] return; }
L_0033B034:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0033B050; } }
    c.budget -= 1;
L_0033B040:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0033B110; } }
    c.budget -= 1;
L_0033B050:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0033B108; } }
L_0033B060:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B068u);  if (depth < kMaxDepth) unit_008E(c, 267u, depth + 1u); else { c.pc = 0x0033AC50u; return; } if (c.pc != 0x0033B068u) [[unlikely]] return; }
L_0033B068:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0033B108; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033B040u | kUnwind; return; } goto L_0033B040; } }
    st32((c.r[16].w[0] + 180u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 208u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 188u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B090u); set32(c.r[4], ld32((c.r[16].w[0] + 180u)));  if (depth < kMaxDepth) unit_0003(c, 426u, depth + 1u); else { c.pc = 0x0010FCB8u; return; } if (c.pc != 0x0033B090u) [[unlikely]] return; }
L_0033B090:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033B040u | kUnwind; return; } goto L_0033B040; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0033B108; } }
L_0033B0A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B0B0u);  if (depth < kMaxDepth) unit_008E(c, 267u, depth + 1u); else { c.pc = 0x0033AC50u; return; } if (c.pc != 0x0033B0B0u) [[unlikely]] return; }
L_0033B0B0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0033B108; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033B040u | kUnwind; return; } goto L_0033B040; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B0CCu); set32(c.r[4], ld32((c.r[16].w[0] + 180u)));  if (depth < kMaxDepth) unit_0003(c, 411u, depth + 1u); else { c.pc = 0x0010FA80u; return; } if (c.pc != 0x0033B0CCu) [[unlikely]] return; }
L_0033B0CC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033B040u | kUnwind; return; } goto L_0033B040; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0033B108; } }
    c.budget -= 1;
L_0033B0E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B0F0u);  if (depth < kMaxDepth) unit_008E(c, 267u, depth + 1u); else { c.pc = 0x0033AC50u; return; } if (c.pc != 0x0033B0F0u) [[unlikely]] return; }
L_0033B0F0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0033B108; } }
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;  if (t) { goto L_0033B110; } }
L_0033B108:
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_0033B110:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033B120:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0033B190; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033B150; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033B1C8; } }
    c.budget -= 1;
L_0033B150:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B158u);  if (depth < kMaxDepth) unit_008E(c, 267u, depth + 1u); else { c.pc = 0x0033AC50u; return; } if (c.pc != 0x0033B158u) [[unlikely]] return; }
L_0033B158:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0033B1C8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B170u); set32(c.r[6], c.r[16].w[0] + 114u);  if (depth < kMaxDepth) unit_0003(c, 409u, depth + 1u); else { c.pc = 0x0010FA48u; return; } if (c.pc != 0x0033B170u) [[unlikely]] return; }
L_0033B170:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0033B180; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0033B1D0; } }
L_0033B180:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0033B1C8; } }
L_0033B190:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B198u);  if (depth < kMaxDepth) unit_008E(c, 267u, depth + 1u); else { c.pc = 0x0033AC50u; return; } if (c.pc != 0x0033B198u) [[unlikely]] return; }
L_0033B198:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0033B1C8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], 0u - 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0033B1B8; } }
    st32((c.r[16].w[0] + 28u), 0u);
    c.budget -= 2;
L_0033B1B8:
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;  if (t) { goto L_0033B1D0; } }
L_0033B1C8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_0033B1D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033B1E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0033B2A8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0033B268; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033B218; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033B2C8; } }
L_0033B218:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B220u);  if (depth < kMaxDepth) unit_008E(c, 267u, depth + 1u); else { c.pc = 0x0033AC50u; return; } if (c.pc != 0x0033B220u) [[unlikely]] return; }
L_0033B220:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0033B2C8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[16].w[0] + 114u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B23Cu); set32(c.r[7], 0u + 512u);  if (depth < kMaxDepth) unit_0003(c, 402u, depth + 1u); else { c.pc = 0x0010F920u; return; } if (c.pc != 0x0033B23Cu) [[unlikely]] return; }
L_0033B23C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0033B258; } }
    c.budget -= 1;
L_0033B248:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0033B2D0; } }
    c.budget -= 1;
L_0033B258:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0033B2C8; } }
L_0033B268:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B270u);  if (depth < kMaxDepth) unit_008E(c, 267u, depth + 1u); else { c.pc = 0x0033AC50u; return; } if (c.pc != 0x0033B270u) [[unlikely]] return; }
L_0033B270:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0033B2C8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033B248u | kUnwind; return; } goto L_0033B248; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B28Cu); set32(c.r[4], ld32((c.r[16].w[0] + 180u)));  if (depth < kMaxDepth) unit_0003(c, 411u, depth + 1u); else { c.pc = 0x0010FA80u; return; } if (c.pc != 0x0033B28Cu) [[unlikely]] return; }
L_0033B28C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033B248u | kUnwind; return; } goto L_0033B248; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0033B2C8; } }
    c.budget -= 1;
L_0033B2A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B2B0u);  if (depth < kMaxDepth) unit_008E(c, 267u, depth + 1u); else { c.pc = 0x0033AC50u; return; } if (c.pc != 0x0033B2B0u) [[unlikely]] return; }
L_0033B2B0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0033B2C8; } }
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;  if (t) { goto L_0033B2D0; } }
L_0033B2C8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_0033B2D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033B2E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0033B3F8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0033B3B8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0033B370; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033B320; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033B418; } }
L_0033B320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B328u);  if (depth < kMaxDepth) unit_008E(c, 267u, depth + 1u); else { c.pc = 0x0033AC50u; return; } if (c.pc != 0x0033B328u) [[unlikely]] return; }
L_0033B328:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0033B418; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[16].w[0] + 114u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B344u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_0003(c, 402u, depth + 1u); else { c.pc = 0x0010F920u; return; } if (c.pc != 0x0033B344u) [[unlikely]] return; }
L_0033B344:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0033B360; } }
    c.budget -= 1;
L_0033B350:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0033B420; } }
    c.budget -= 1;
L_0033B360:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0033B418; } }
L_0033B370:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B378u);  if (depth < kMaxDepth) unit_008E(c, 267u, depth + 1u); else { c.pc = 0x0033AC50u; return; } if (c.pc != 0x0033B378u) [[unlikely]] return; }
L_0033B378:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0033B418; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033B350u | kUnwind; return; } goto L_0033B350; } }
    st32((c.r[16].w[0] + 180u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 208u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 188u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B3A0u); set32(c.r[4], ld32((c.r[16].w[0] + 180u)));  if (depth < kMaxDepth) unit_0003(c, 432u, depth + 1u); else { c.pc = 0x0010FDD0u; return; } if (c.pc != 0x0033B3A0u) [[unlikely]] return; }
L_0033B3A0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033B350u | kUnwind; return; } goto L_0033B350; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0033B418; } }
L_0033B3B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B3C0u);  if (depth < kMaxDepth) unit_008E(c, 267u, depth + 1u); else { c.pc = 0x0033AC50u; return; } if (c.pc != 0x0033B3C0u) [[unlikely]] return; }
L_0033B3C0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0033B418; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033B350u | kUnwind; return; } goto L_0033B350; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B3DCu); set32(c.r[4], ld32((c.r[16].w[0] + 180u)));  if (depth < kMaxDepth) unit_0003(c, 411u, depth + 1u); else { c.pc = 0x0010FA80u; return; } if (c.pc != 0x0033B3DCu) [[unlikely]] return; }
L_0033B3DC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033B350u | kUnwind; return; } goto L_0033B350; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0033B418; } }
    c.budget -= 1;
L_0033B3F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B400u);  if (depth < kMaxDepth) unit_008E(c, 267u, depth + 1u); else { c.pc = 0x0033AC50u; return; } if (c.pc != 0x0033B400u) [[unlikely]] return; }
L_0033B400:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0033B418; } }
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;  if (t) { goto L_0033B420; } }
L_0033B418:
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_0033B420:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033B430:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0033B4A0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033B460; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033B4C0; } }
    c.budget -= 1;
L_0033B460:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B468u);  if (depth < kMaxDepth) unit_008E(c, 267u, depth + 1u); else { c.pc = 0x0033AC50u; return; } if (c.pc != 0x0033B468u) [[unlikely]] return; }
L_0033B468:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0033B4C0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B480u); set32(c.r[6], c.r[16].w[0] + 114u);  if (depth < kMaxDepth) unit_0004(c, 64u, depth + 1u); else { c.pc = 0x00110648u; return; } if (c.pc != 0x0033B480u) [[unlikely]] return; }
L_0033B480:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0033B490; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0033B4C8; } }
L_0033B490:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0033B4C0; } }
L_0033B4A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B4A8u);  if (depth < kMaxDepth) unit_008E(c, 267u, depth + 1u); else { c.pc = 0x0033AC50u; return; } if (c.pc != 0x0033B4A8u) [[unlikely]] return; }
L_0033B4A8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0033B4C0; } }
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;  if (t) { goto L_0033B4C8; } }
L_0033B4C0:
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_0033B4C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033B4E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0033B550; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033B510; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033B570; } }
    c.budget -= 1;
L_0033B510:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B518u);  if (depth < kMaxDepth) unit_008E(c, 267u, depth + 1u); else { c.pc = 0x0033AC50u; return; } if (c.pc != 0x0033B518u) [[unlikely]] return; }
L_0033B518:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0033B570; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B52Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0004(c, 59u, depth + 1u); else { c.pc = 0x00110578u; return; } if (c.pc != 0x0033B52Cu) [[unlikely]] return; }
L_0033B52C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0033B540; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0033B578; } }
    c.budget -= 1;
L_0033B540:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0033B570; } }
L_0033B550:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B558u);  if (depth < kMaxDepth) unit_008E(c, 267u, depth + 1u); else { c.pc = 0x0033AC50u; return; } if (c.pc != 0x0033B558u) [[unlikely]] return; }
L_0033B558:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0033B570; } }
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;  if (t) { goto L_0033B578; } }
L_0033B570:
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_0033B578:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033B590:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0033B5A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0033B610; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033B5D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033B658; } }
    c.budget -= 1;
L_0033B5D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B5D8u);  if (depth < kMaxDepth) unit_008E(c, 267u, depth + 1u); else { c.pc = 0x0033AC50u; return; } if (c.pc != 0x0033B5D8u) [[unlikely]] return; }
L_0033B5D8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0033B658; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B5F0u); set32(c.r[6], c.r[16].w[0] + 114u);  if (depth < kMaxDepth) unit_0004(c, 64u, depth + 1u); else { c.pc = 0x00110648u; return; } if (c.pc != 0x0033B5F0u) [[unlikely]] return; }
L_0033B5F0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0033B600; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0033B660; } }
L_0033B600:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0033B658; } }
L_0033B610:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B618u);  if (depth < kMaxDepth) unit_008E(c, 267u, depth + 1u); else { c.pc = 0x0033AC50u; return; } if (c.pc != 0x0033B618u) [[unlikely]] return; }
L_0033B618:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0033B658; } }
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], 0u - 4u);
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0033B648; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033B648; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033B650; } }
    c.budget -= 1;
L_0033B648:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0033B660; } }
L_0033B650:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0033B660; } }
L_0033B658:
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_0033B660:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033B670:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0033B7F0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0033B740; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0033B6F0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033B6B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033B828; } }
L_0033B6B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B6B8u);  if (depth < kMaxDepth) unit_008E(c, 267u, depth + 1u); else { c.pc = 0x0033AC50u; return; } if (c.pc != 0x0033B6B8u) [[unlikely]] return; }
L_0033B6B8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0033B828; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033B7A8; } }
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 1;
L_0033B6D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 1632u);
    set32(c.r[5], c.r[5].w[0] + 4688u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B6E8u); set32(c.r[6], c.r[16].w[0] + 114u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0033B6E8u) [[unlikely]] return; }
L_0033B6E8:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_0033B6F0:
    set32(c.r[7], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] + 1632u);
    set32(c.r[8], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B714u); set32(c.r[9], c.r[9].w[0] + 1728u);  if (depth < kMaxDepth) unit_0004(c, 34u, depth + 1u); else { c.pc = 0x00110258u; return; } if (c.pc != 0x0033B714u) [[unlikely]] return; }
L_0033B714:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0033B730; } }
    c.budget -= 1;
L_0033B720:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0033B830; } }
    c.budget -= 1;
L_0033B730:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0033B828; } }
L_0033B740:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B748u);  if (depth < kMaxDepth) unit_008E(c, 267u, depth + 1u); else { c.pc = 0x0033AC50u; return; } if (c.pc != 0x0033B748u) [[unlikely]] return; }
L_0033B748:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0033B828; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[2], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033B720u | kUnwind; return; } goto L_0033B720; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0033B7A8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], 0u + 46u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 1760u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033B6D0u | kUnwind; return; } goto L_0033B6D0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] + 1632u);
    set32(c.r[5], c.r[5].w[0] + 4696u);
    set32(c.r[6], c.r[16].w[0] + 114u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B7A0u); set32(c.r[7], c.r[7].w[0] + 1760u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0033B7A0u) [[unlikely]] return; }
L_0033B7A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 196u), 0u);  if (t) { goto L_0033B7C8; } }
L_0033B7A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 1632u);
    set32(c.r[5], c.r[5].w[0] + 4704u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B7C0u); set32(c.r[6], c.r[16].w[0] + 114u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0033B7C0u) [[unlikely]] return; }
L_0033B7C0:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 196u), c.r[2].w[0]);
    c.budget -= 2;
L_0033B7C8:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B7DCu); set32(c.r[6], c.r[6].w[0] + 1632u);  if (depth < kMaxDepth) unit_0004(c, 64u, depth + 1u); else { c.pc = 0x00110648u; return; } if (c.pc != 0x0033B7DCu) [[unlikely]] return; }
L_0033B7DC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033B720u | kUnwind; return; } goto L_0033B720; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0033B828; } }
L_0033B7F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B7F8u);  if (depth < kMaxDepth) unit_008E(c, 267u, depth + 1u); else { c.pc = 0x0033AC50u; return; } if (c.pc != 0x0033B7F8u) [[unlikely]] return; }
L_0033B7F8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0033B828; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033B720u | kUnwind; return; } goto L_0033B720; } }
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 196u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033B6D0u | kUnwind; return; } goto L_0033B6D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033B830; } }
    c.budget -= 1;
L_0033B828:
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_0033B830:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033B840:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0033B8C0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033B870; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033B900; } }
    c.budget -= 1;
L_0033B870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B878u);  if (depth < kMaxDepth) unit_008E(c, 267u, depth + 1u); else { c.pc = 0x0033AC50u; return; } if (c.pc != 0x0033B878u) [[unlikely]] return; }
L_0033B878:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0033B900; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[9], ld32((c.r[16].w[0] + 208u)));
    set32(c.r[6], c.r[16].w[0] + 114u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B89Cu); set32(c.r[8], 0u + 256u);  if (depth < kMaxDepth) unit_0004(c, 34u, depth + 1u); else { c.pc = 0x00110258u; return; } if (c.pc != 0x0033B89Cu) [[unlikely]] return; }
L_0033B89C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0033B8B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0033B908; } }
    c.budget -= 1;
L_0033B8B0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0033B900; } }
L_0033B8C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B8C8u);  if (depth < kMaxDepth) unit_008E(c, 267u, depth + 1u); else { c.pc = 0x0033AC50u; return; } if (c.pc != 0x0033B8C8u) [[unlikely]] return; }
L_0033B8C8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0033B900; } }
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0033B8F0; } }
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0033B908; } }
    c.budget -= 1;
L_0033B8F0:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0033B908; } }
    c.budget -= 1;
L_0033B900:
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_0033B908:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033B920:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] + 18336u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 1792u);
    st32((c.r[1].w[0] + 1792u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 1796u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 1996u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 2004u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 2008u), c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 88u)));
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B98Cu); set32(c.r[4], c.r[4].w[0] + 1872u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0033B98Cu) [[unlikely]] return; }
L_0033B98C:
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_0033B9B8; } }
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B9ACu); set32(c.r[5], c.r[5].w[0] + 4712u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0033B9ACu) [[unlikely]] return; }
L_0033B9AC:
    set32(c.r[4], c.r[16].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B9B8u); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011D880u; return; } if (c.pc != 0x0033B9B8u) [[unlikely]] return; }
L_0033B9B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0033B9D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B9E0u);  if (depth < kMaxDepth) unit_0060(c, 312u, depth + 1u); else { c.pc = 0x002826B0u; return; } if (c.pc != 0x0033B9E0u) [[unlikely]] return; }
L_0033B9E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 1996u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], c.r[2].w[0] + 18352u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BA08u); set32(c.r[4], c.r[4].w[0] + 1792u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033BA08u) [[unlikely]] return; }
L_0033BA08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BA10u);  if (depth < kMaxDepth) unit_0060(c, 313u, depth + 1u); else { c.pc = 0x002826C8u; return; } if (c.pc != 0x0033BA10u) [[unlikely]] return; }
L_0033BA10:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0033BA20:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 1996u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 2016u), 0u);  c.pc = t; return; }
L_0033BA40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033BA50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0033BA70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BA70u);  if (depth < kMaxDepth) unit_008E(c, 345u, depth + 1u); else { c.pc = 0x0033BA20u; return; } if (c.pc != 0x0033BA70u) [[unlikely]] return; }
L_0033BA70:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0033BA80:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 1792u), 0u);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], 0u - 1u);
    st32((c.r[1].w[0] + 1796u), 0u);
    set32(c.r[6], c.r[6].w[0] + 1792u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 1812u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 1996u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 1828u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 1808u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0033BAF0; } }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_0033BAD0:
    st32((c.r[5].w[0] + 52u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033BAD0u | kUnwind; return; } goto L_0033BAD0; } }
    c.budget -= 1;
L_0033BAF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033BB00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BB14u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 269u, depth + 1u); else { c.pc = 0x0033AC90u; return; } if (c.pc != 0x0033BB14u) [[unlikely]] return; }
L_0033BB14:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0033BB40; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[4], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033BB40; } }
    st32((c.r[16].w[0] + 20u), 0u);
    c.budget -= 2;
L_0033BB40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033BB50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[3], 0u + 2u);
    st32((c.r[1].w[0] + 1812u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 1792u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 1996u), c.r[3].w[0]);
    set32(c.r[3], 0u - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 1828u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 1796u), 0u);  c.pc = t; return; }
L_0033BB90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BBA4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 269u, depth + 1u); else { c.pc = 0x0033AC90u; return; } if (c.pc != 0x0033BBA4u) [[unlikely]] return; }
L_0033BBA4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], 0u + 3u);  if (t) { goto L_0033BC10; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033BC00; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0033BBF0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033BBE8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033BBD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033BC08; } }
L_0033BBD8:
    set32(c.r[2], 0u - 255u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_0033BC08; } }
    c.budget -= 1;
L_0033BBE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), 0u);  if (t) { goto L_0033BC08; } }
L_0033BBF0:
    set32(c.r[2], 0u - 250u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_0033BC08; } }
    c.budget -= 1;
L_0033BC00:
    set32(c.r[2], 0u - 254u);
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 2;
L_0033BC08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BC10u);  if (depth < kMaxDepth) unit_008E(c, 345u, depth + 1u); else { c.pc = 0x0033BA20u; return; } if (c.pc != 0x0033BC10u) [[unlikely]] return; }
L_0033BC10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033BC20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[7], c.r[7].w[0] + 18336u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[8], ld32((c.r[1].w[0] + 2004u)));
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[5], 0u + 255u);
    set32(c.r[17], c.r[17].w[0] + 1792u);
    set32(c.r[8], c.r[8].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[16], ld32((c.r[7].w[0])));
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
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[1].w[0] + 2000u), c.r[6].w[0]);
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BCA4u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0033BCA4u) [[unlikely]] return; }
L_0033BCA4:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_0033BCD0; } }
    set32(c.r[6], c.r[17].w[0] + 80u);
    set32(c.r[4], c.r[17].w[0] + 114u);
    set32(c.r[5], c.r[5].w[0] + 4696u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BCC4u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0033BCC4u) [[unlikely]] return; }
L_0033BCC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033BCF0; } }
    c.budget -= 1;
L_0033BCD0:
    set32(c.r[2], c.r[18].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[7], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[4], c.r[17].w[0] + 114u);
    set32(c.r[5], c.r[5].w[0] + 4696u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BCF0u); set32(c.r[6], c.r[17].w[0] + 80u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0033BCF0u) [[unlikely]] return; }
L_0033BCF0:
    set32(c.r[3], c.r[18].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    st32((c.r[17].w[0] + 188u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0033BD20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0033BE70; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0033BDC8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033BD60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033BF00; } }
    c.budget -= 1;
L_0033BD60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BD68u);  if (depth < kMaxDepth) unit_008E(c, 269u, depth + 1u); else { c.pc = 0x0033AC90u; return; } if (c.pc != 0x0033BD68u) [[unlikely]] return; }
L_0033BD68:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0033BDB8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033BDB8; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033BDA8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033BD98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033BF00; } }
L_0033BD98:
    set32(c.r[2], 0u - 255u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_0033BF00; } }
    c.budget -= 1;
L_0033BDA8:
    set32(c.r[2], 0u - 254u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_0033BF00; } }
    c.budget -= 1;
L_0033BDB8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0033BF00; } }
L_0033BDC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BDD0u);  if (depth < kMaxDepth) unit_008E(c, 276u, depth + 1u); else { c.pc = 0x0033AED0u; return; } if (c.pc != 0x0033BDD0u) [[unlikely]] return; }
L_0033BDD0:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0033BE60; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033BE50; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033BE30; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033BE00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033BF00; } }
L_0033BE00:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[17], c.r[17].w[0] + 1736u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BE10u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 94u, depth + 1u); else { c.pc = 0x0033D640u; return; } if (c.pc != 0x0033BE10u) [[unlikely]] return; }
L_0033BE10:
    set32(c.r[4], ld32((c.r[16].w[0] + 208u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BE20u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0033BE20u) [[unlikely]] return; }
L_0033BE20:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), 0u);  if (t) { goto L_0033BF00; } }
    c.budget -= 1;
L_0033BE30:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[16].w[0] + 114u);
    set32(c.r[5], c.r[16].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BE48u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0033BE48u) [[unlikely]] return; }
L_0033BE48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 188u), 0u);  if (t) { goto L_0033BF00; } }
L_0033BE50:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], 0u - 255u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_0033BF00; } }
L_0033BE60:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], 0u - 251u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_0033BF00; } }
L_0033BE70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BE78u);  if (depth < kMaxDepth) unit_008E(c, 276u, depth + 1u); else { c.pc = 0x0033AED0u; return; } if (c.pc != 0x0033BE78u) [[unlikely]] return; }
L_0033BE78:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0033BEF0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033BEE0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033BED0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033BEA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033BF00; } }
L_0033BEA8:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], 0u - 251u);
    set32(c.r[5], 0u + 254u);
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 208u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BEC4u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0033BEC4u) [[unlikely]] return; }
L_0033BEC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033BF00; } }
    c.budget -= 1;
L_0033BED0:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], 0u - 253u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_0033BF00; } }
L_0033BEE0:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], 0u - 255u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_0033BF00; } }
L_0033BEF0:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], 0u - 251u);
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 4;
L_0033BF00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BF08u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 347u, depth + 1u); else { c.pc = 0x0033BA50u; return; } if (c.pc != 0x0033BF08u) [[unlikely]] return; }
L_0033BF08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033BF20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[6], c.r[6].w[0] + 18336u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], 0u + 4u);
    set32(c.r[7], ld32((c.r[1].w[0] + 2004u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[7], c.r[7].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[17], ld32((c.r[6].w[0])));
    st32((c.r[1].w[0] + 1996u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 1828u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 1812u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 2000u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 1792u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 1796u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 29;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 1792u);  if (t) { goto L_0033BFC0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[6], c.r[16].w[0] + 80u);
    set32(c.r[4], c.r[16].w[0] + 114u);
    set32(c.r[5], c.r[5].w[0] + 4696u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BFACu); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0033BFACu) [[unlikely]] return; }
L_0033BFAC:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    st32((c.r[16].w[0] + 188u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 196u), 0u);  if (t) { goto L_0033BFE8; } }
    c.budget -= 1;
L_0033BFC0:
    set32(c.r[7], ld32((c.r[17].w[0] + 104u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[16].w[0] + 114u);
    set32(c.r[5], c.r[5].w[0] + 4696u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BFD8u); set32(c.r[6], c.r[16].w[0] + 80u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0033BFD8u) [[unlikely]] return; }
L_0033BFD8:
    set32(c.r[4], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 188u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 196u), c.r[3].w[0]);
    c.budget -= 4;
L_0033BFE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
}

}
