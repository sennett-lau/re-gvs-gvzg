#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0015[4096] = {
    1, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0,
    0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18,
    0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0,
    0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 40, 0,
    41, 0, 0, 0, 42, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0,
    47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0,
    56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 58, 0, 59, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 64, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0,
    73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 84, 0, 0, 0, 85, 0, 86, 0, 0, 0, 87, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 91, 0, 0, 0, 0, 0,
    0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 100,
    0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106,
    0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 113, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0,
    0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 126,
    0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0,
    130, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136,
    0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0,
    140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 157, 0, 0, 0, 0, 0,
    0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    161, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0,
    0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0,
    0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 181, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 183, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 187, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199,
    0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0,
    208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 215, 0, 0,
    0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 233, 0, 0, 0, 0, 0, 0,
    234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 239, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 246, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    248, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0,
    0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0,
    0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0,
    266, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 270, 0, 0, 0, 271, 0,
    0, 272, 0, 0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 286, 0, 0, 0, 0,
    0, 0, 0, 0, 287, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0,
    0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 303, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 305, 0,
    0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0,
    0, 0, 0, 317, 0, 0, 0, 0, 318, 0, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0,
    0, 327, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 330, 0, 0, 0, 0,
    331, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333,
    0, 334, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 337, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0,
    340, 0, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0,
};

void unit_0015(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00154000;
    case 2u: goto L_00154004;
    case 3u: goto L_00154018;
    case 4u: goto L_00154034;
    case 5u: goto L_00154044;
    case 6u: goto L_00154058;
    case 7u: goto L_00154070;
    case 8u: goto L_00154084;
    case 9u: goto L_001540C0;
    case 10u: goto L_001540DC;
    case 11u: goto L_00154120;
    case 12u: goto L_00154134;
    case 13u: goto L_00154148;
    case 14u: goto L_001541A0;
    case 15u: goto L_001541B4;
    case 16u: goto L_001541C8;
    case 17u: goto L_001541E8;
    case 18u: goto L_001541FC;
    case 19u: goto L_00154204;
    case 20u: goto L_00154218;
    case 21u: goto L_00154230;
    case 22u: goto L_00154244;
    case 23u: goto L_00154260;
    case 24u: goto L_00154308;
    case 25u: goto L_00154310;
    case 26u: goto L_00154350;
    case 27u: goto L_00154364;
    case 28u: goto L_00154390;
    case 29u: goto L_001543A0;
    case 30u: goto L_001543AC;
    case 31u: goto L_001543D4;
    case 32u: goto L_001543F8;
    case 33u: goto L_00154408;
    case 34u: goto L_00154414;
    case 35u: goto L_00154428;
    case 36u: goto L_00154444;
    case 37u: goto L_0015444C;
    case 38u: goto L_0015445C;
    case 39u: goto L_00154470;
    case 40u: goto L_00154478;
    case 41u: goto L_00154480;
    case 42u: goto L_00154490;
    case 43u: goto L_00154498;
    case 44u: goto L_001544A8;
    case 45u: goto L_001544E0;
    case 46u: goto L_001544EC;
    case 47u: goto L_00154500;
    case 48u: goto L_00154544;
    case 49u: goto L_0015454C;
    case 50u: goto L_00154600;
    case 51u: goto L_00154628;
    case 52u: goto L_0015463C;
    case 53u: goto L_0015464C;
    case 54u: goto L_001546D0;
    case 55u: goto L_001546E4;
    case 56u: goto L_00154700;
    case 57u: goto L_001547C0;
    case 58u: goto L_00154810;
    case 59u: goto L_00154818;
    case 60u: goto L_00154820;
    case 61u: goto L_00154840;
    case 62u: goto L_00154854;
    case 63u: goto L_00154868;
    case 64u: goto L_00154870;
    case 65u: goto L_001548AC;
    case 66u: goto L_00154900;
    case 67u: goto L_00154914;
    case 68u: goto L_00154990;
    case 69u: goto L_001549CC;
    case 70u: goto L_00154A08;
    case 71u: goto L_00154A1C;
    case 72u: goto L_00154A6C;
    case 73u: goto L_00154A80;
    case 74u: goto L_00154A94;
    case 75u: goto L_00154AB4;
    case 76u: goto L_00154AC8;
    case 77u: goto L_00154ADC;
    case 78u: goto L_00154B20;
    case 79u: goto L_00154B44;
    case 80u: goto L_00154B58;
    case 81u: goto L_00154B90;
    case 82u: goto L_00154CE8;
    case 83u: goto L_00154D30;
    case 84u: goto L_00154D88;
    case 85u: goto L_00154D98;
    case 86u: goto L_00154DA0;
    case 87u: goto L_00154DB0;
    case 88u: goto L_00154DB8;
    case 89u: goto L_00154DD8;
    case 90u: goto L_00154DE0;
    case 91u: goto L_00154DE8;
    case 92u: goto L_00154E08;
    case 93u: goto L_00154E1C;
    case 94u: goto L_00154E30;
    case 95u: goto L_00154E38;
    case 96u: goto L_00154E78;
    case 97u: goto L_00154ECC;
    case 98u: goto L_00154EE0;
    case 99u: goto L_00154EF4;
    case 100u: goto L_00154EFC;
    case 101u: goto L_00154F1C;
    case 102u: goto L_00154F30;
    case 103u: goto L_00154F40;
    case 104u: goto L_00154F48;
    case 105u: goto L_00154F68;
    case 106u: goto L_00154F7C;
    case 107u: goto L_00154F90;
    case 108u: goto L_00154F98;
    case 109u: goto L_00154FAC;
    case 110u: goto L_00155000;
    case 111u: goto L_00155014;
    case 112u: goto L_00155028;
    case 113u: goto L_00155030;
    case 114u: goto L_00155050;
    case 115u: goto L_00155064;
    case 116u: goto L_00155070;
    case 117u: goto L_00155108;
    case 118u: goto L_0015511C;
    case 119u: goto L_00155130;
    case 120u: goto L_00155170;
    case 121u: goto L_00155184;
    case 122u: goto L_00155198;
    case 123u: goto L_001551AC;
    case 124u: goto L_001551B8;
    case 125u: goto L_00155258;
    case 126u: goto L_0015527C;
    case 127u: goto L_00155290;
    case 128u: goto L_001552D8;
    case 129u: goto L_001552EC;
    case 130u: goto L_00155300;
    case 131u: goto L_00155320;
    case 132u: goto L_00155334;
    case 133u: goto L_00155348;
    case 134u: goto L_001553A8;
    case 135u: goto L_001553E8;
    case 136u: goto L_001553FC;
    case 137u: goto L_00155410;
    case 138u: goto L_00155458;
    case 139u: goto L_0015546C;
    case 140u: goto L_00155480;
    case 141u: goto L_001554A0;
    case 142u: goto L_001554B4;
    case 143u: goto L_001554C8;
    case 144u: goto L_001554E0;
    case 145u: goto L_00155540;
    case 146u: goto L_00155554;
    case 147u: goto L_00155570;
    case 148u: goto L_001555F0;
    case 149u: goto L_00155638;
    case 150u: goto L_00155650;
    case 151u: goto L_00155688;
    case 152u: goto L_0015569C;
    case 153u: goto L_001556B0;
    case 154u: goto L_001556B8;
    case 155u: goto L_001556CC;
    case 156u: goto L_001556E0;
    case 157u: goto L_001556E8;
    case 158u: goto L_00155704;
    case 159u: goto L_00155738;
    case 160u: goto L_0015574C;
    case 161u: goto L_00155780;
    case 162u: goto L_001557A4;
    case 163u: goto L_001557E0;
    case 164u: goto L_00155868;
    case 165u: goto L_00155900;
    case 166u: goto L_00155950;
    case 167u: goto L_001559A0;
    case 168u: goto L_001559C4;
    case 169u: goto L_001559D8;
    case 170u: goto L_001559EC;
    case 171u: goto L_00155A0C;
    case 172u: goto L_00155A20;
    case 173u: goto L_00155A28;
    case 174u: goto L_00155A40;
    case 175u: goto L_00155A54;
    case 176u: goto L_00155A68;
    case 177u: goto L_00155A88;
    case 178u: goto L_00155A9C;
    case 179u: goto L_00155AC4;
    case 180u: goto L_00155AE0;
    case 181u: goto L_00155AE8;
    case 182u: goto L_00155B28;
    case 183u: goto L_00155B84;
    case 184u: goto L_00155B8C;
    case 185u: goto L_00155BCC;
    case 186u: goto L_00155BE0;
    case 187u: goto L_00155C08;
    case 188u: goto L_00155C10;
    case 189u: goto L_00155C2C;
    case 190u: goto L_00155C34;
    case 191u: goto L_00155C74;
    case 192u: goto L_00155CCC;
    case 193u: goto L_00155CD4;
    case 194u: goto L_00155D14;
    case 195u: goto L_00155D28;
    case 196u: goto L_00155D30;
    case 197u: goto L_00155D4C;
    case 198u: goto L_00155DE8;
    case 199u: goto L_00155DFC;
    case 200u: goto L_00155E04;
    case 201u: goto L_00155E20;
    case 202u: goto L_00155E98;
    case 203u: goto L_00155EAC;
    case 204u: goto L_00155EB4;
    case 205u: goto L_00155ED4;
    case 206u: goto L_00155F64;
    case 207u: goto L_00155F78;
    case 208u: goto L_00155F80;
    case 209u: goto L_00155FA0;
    case 210u: goto L_0015600C;
    case 211u: goto L_00156020;
    case 212u: goto L_00156038;
    case 213u: goto L_00156054;
    case 214u: goto L_0015606C;
    case 215u: goto L_00156074;
    case 216u: goto L_00156090;
    case 217u: goto L_001560AC;
    case 218u: goto L_001560C0;
    case 219u: goto L_001560F0;
    case 220u: goto L_00156150;
    case 221u: goto L_00156160;
    case 222u: goto L_001563A8;
    case 223u: goto L_001563BC;
    case 224u: goto L_00156470;
    case 225u: goto L_00156500;
    case 226u: goto L_00156540;
    case 227u: goto L_00156594;
    case 228u: goto L_001565C4;
    case 229u: goto L_001565CC;
    case 230u: goto L_00156620;
    case 231u: goto L_001566C8;
    case 232u: goto L_001566DC;
    case 233u: goto L_001566E4;
    case 234u: goto L_00156700;
    case 235u: goto L_0015671C;
    case 236u: goto L_00156744;
    case 237u: goto L_00156794;
    case 238u: goto L_001567E8;
    case 239u: goto L_00156818;
    case 240u: goto L_00156820;
    case 241u: goto L_00156874;
    case 242u: goto L_00156920;
    case 243u: goto L_00156934;
    case 244u: goto L_0015693C;
    case 245u: goto L_00156958;
    case 246u: goto L_00156974;
    case 247u: goto L_001569B0;
    case 248u: goto L_00156A00;
    case 249u: goto L_00156A10;
    case 250u: goto L_00156A20;
    case 251u: goto L_00156A34;
    case 252u: goto L_00156A58;
    case 253u: goto L_00156B40;
    case 254u: goto L_00156BC8;
    case 255u: goto L_00156C34;
    case 256u: goto L_00156C64;
    case 257u: goto L_00156C88;
    case 258u: goto L_00156CAC;
    case 259u: goto L_00156CC4;
    case 260u: goto L_00156CF4;
    case 261u: goto L_00156D18;
    case 262u: goto L_00156D3C;
    case 263u: goto L_00156D80;
    case 264u: goto L_00156DA8;
    case 265u: goto L_00156DE4;
    case 266u: goto L_00156E00;
    case 267u: goto L_00156E20;
    case 268u: goto L_00156EB0;
    case 269u: goto L_00156EE0;
    case 270u: goto L_00156EE8;
    case 271u: goto L_00156EF8;
    case 272u: goto L_00156F04;
    case 273u: goto L_00156F10;
    case 274u: goto L_00156F2C;
    case 275u: goto L_00156F38;
    case 276u: goto L_00156FA0;
    case 277u: goto L_00156FBC;
    case 278u: goto L_00157000;
    case 279u: goto L_0015702C;
    case 280u: goto L_00157040;
    case 281u: goto L_00157088;
    case 282u: goto L_001570B8;
    case 283u: goto L_001570F8;
    case 284u: goto L_00157124;
    case 285u: goto L_00157160;
    case 286u: goto L_0015716C;
    case 287u: goto L_00157190;
    case 288u: goto L_0015719C;
    case 289u: goto L_001571D8;
    case 290u: goto L_00157230;
    case 291u: goto L_0015727C;
    case 292u: goto L_001572C8;
    case 293u: goto L_00157390;
    case 294u: goto L_001573AC;
    case 295u: goto L_001573CC;
    case 296u: goto L_001573EC;
    case 297u: goto L_0015740C;
    case 298u: goto L_00157490;
    case 299u: goto L_00157538;
    case 300u: goto L_00157540;
    case 301u: goto L_001575C0;
    case 302u: goto L_0015763C;
    case 303u: goto L_00157648;
    case 304u: goto L_0015765C;
    case 305u: goto L_00157678;
    case 306u: goto L_00157688;
    case 307u: goto L_0015769C;
    case 308u: goto L_001576B4;
    case 309u: goto L_00157764;
    case 310u: goto L_00157790;
    case 311u: goto L_001577B0;
    case 312u: goto L_001577EC;
    case 313u: goto L_00157870;
    case 314u: goto L_00157900;
    case 315u: goto L_00157BD0;
    case 316u: goto L_00157C70;
    case 317u: goto L_00157C8C;
    case 318u: goto L_00157CA0;
    case 319u: goto L_00157CB4;
    case 320u: goto L_00157CC8;
    case 321u: goto L_00157CE4;
    case 322u: goto L_00157D10;
    case 323u: goto L_00157D2C;
    case 324u: goto L_00157D40;
    case 325u: goto L_00157D54;
    case 326u: goto L_00157D68;
    case 327u: goto L_00157D84;
    case 328u: goto L_00157DA0;
    case 329u: goto L_00157DE4;
    case 330u: goto L_00157DEC;
    case 331u: goto L_00157E00;
    case 332u: goto L_00157E1C;
    case 333u: goto L_00157E7C;
    case 334u: goto L_00157E84;
    case 335u: goto L_00157E98;
    case 336u: goto L_00157EB4;
    case 337u: goto L_00157EC8;
    case 338u: goto L_00157ED0;
    case 339u: goto L_00157EE4;
    case 340u: goto L_00157F00;
    case 341u: goto L_00157F14;
    case 342u: goto L_00157F28;
    case 343u: goto L_00157F40;
    case 344u: goto L_00157F7C;
    case 345u: goto L_00157FB8;
    case 346u: goto L_00157FEC;
    default: bad_entry(c, 0x00154000u); return;
    }
L_00154000:
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_00154004:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154018u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00154018u) [[unlikely]] return; }
L_00154018:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00154218; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154034u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00154034u) [[unlikely]] return; }
L_00154034:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 52u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154044u); set32(c.r[4], c.r[4].w[0] + 19408u);  if (depth < kMaxDepth) unit_0018(c, 203u, depth + 1u); else { c.pc = 0x001624C0u; return; } if (c.pc != 0x00154044u) [[unlikely]] return; }
L_00154044:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154058u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00154058u) [[unlikely]] return; }
L_00154058:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[13] = c.r[2].w[0];
    c.f[12] = c.r[3].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154070u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00154070u) [[unlikely]] return; }
L_00154070:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154084u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00154084u) [[unlikely]] return; }
L_00154084:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] - 1840u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    set32(c.r[2], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19408u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001540C0u); st32((c.r[1].w[0] + 19456u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x001540C0u) [[unlikely]] return; }
L_001540C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1900000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43290000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001540DCu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001540DCu) [[unlikely]] return; }
L_001540DC:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].d[0] = c.r[2].d[0] | 34079ull;
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 152u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154120u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x00154120u) [[unlikely]] return; }
L_00154120:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154134u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00154134u) [[unlikely]] return; }
L_00154134:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154148u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00154148u) [[unlikely]] return; }
L_00154148:
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], 0u + 100u);
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 152u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    mmi::div(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.r[16].d[0] = c.r[3].d[0] & 255ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    set32(c.r[3], c.r[16].w[0] >> 31);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001541A0u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x001541A0u) [[unlikely]] return; }
L_001541A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001541B4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x001541B4u) [[unlikely]] return; }
L_001541B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001541C8u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001541C8u) [[unlikely]] return; }
L_001541C8:
    set32(c.r[2], 0u + 10u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    mmi::div(c, 0, c.r[16].w[0], c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001541E8u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x001541E8u) [[unlikely]] return; }
L_001541E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001541FCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x001541FCu) [[unlikely]] return; }
L_001541FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154204u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00154204u) [[unlikely]] return; }
L_00154204:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 10400u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154218u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00154218u) [[unlikely]] return; }
L_00154218:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00154230:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154244u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 214u, depth + 1u); else { c.pc = 0x00162790u; return; } if (c.pc != 0x00154244u) [[unlikely]] return; }
L_00154244:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_00154250; } }
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00154250:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00154260:
    set32(c.r[29], c.r[29].w[0] - 384u);
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
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 50u)));
    c.budget -= 19;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00154688; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);  if (t) { goto L_001542C8; } }
    c.f[22] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001542CC; } }
L_001542C8:
    c.f[22] = 0u;
    c.budget -= 1;
L_001542CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] + 29024u);
    set32(c.r[20], c.r[20].w[0] - 27856u);
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[23], c.r[29].w[0] + 312u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42D00000u);
    st32((c.r[29].w[0] + 192u), 0u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[17], c.r[29].w[0] + 308u);
    set32(c.r[30], c.r[29].w[0] + 292u);
    set32(c.r[16], c.r[29].w[0] + 280u);
    c.f[21] = fp::add(c.f[0], c.f[22]);
    set32(c.r[21], c.r[29].w[0] + 284u);
    set32(c.r[22], c.r[29].w[0] + 288u);
    c.budget -= 15;
L_00154308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154310u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00154310u) [[unlikely]] return; }
L_00154310:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3850000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44050000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[0] = c.r[2].w[0];
    c.f[2] = c.r[3].w[0];
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.f[14] = 0u;
    c.f[13] = c.f[21];
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[20] = fp::add(c.f[0], c.f[1]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154350u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00154350u) [[unlikely]] return; }
L_00154350:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[4].w[0] + 4640u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154364u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00154364u) [[unlikely]] return; }
L_00154364:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00154428; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001543E0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154390u); set32(c.r[4], c.r[2].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x00154390u) [[unlikely]] return; }
L_00154390:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001543A0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x001543A0u) [[unlikely]] return; }
L_001543A0:
    set32(c.r[4], c.r[20].w[0] + 8624u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001543ACu); set32(c.r[5], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x001543ACu) [[unlikely]] return; }
L_001543AC:
    c.f[12] = ld32((c.r[29].w[0] + 304u));
    c.f[13] = ld32((c.r[23].w[0]));
    c.f[0] = 0u;
    c.facc = fp::mul(c.f[12], c.f[12]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[13], c.f[13]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001543F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001543D4u);  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001543D4u) [[unlikely]] return; }
L_001543D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 176u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001543F0; } }
    c.budget -= 1;
L_001543E0:
    set32(c.r[3], ld32((c.r[20].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 1252u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st16((c.r[29].w[0] + 176u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001543F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001543F8u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x001543F8u) [[unlikely]] return; }
L_001543F8:
    c.f[14] = 0u;
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154408u); c.f[13] = c.f[21];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00154408u) [[unlikely]] return; }
L_00154408:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 176u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154414u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x00154414u) [[unlikely]] return; }
L_00154414:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 12u);
    set32(c.r[4], c.r[4].w[0] + 4160u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154428u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00154428u) [[unlikely]] return; }
L_00154428:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00154468; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154444u); set32(c.r[4], c.r[2].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x00154444u) [[unlikely]] return; }
L_00154444:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015444Cu); set32(c.r[4], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x0015444Cu) [[unlikely]] return; }
L_0015444C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015445Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x0015445Cu) [[unlikely]] return; }
L_0015445C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00154490; } }
    c.budget -= 1;
L_00154468:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154470u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00154470u) [[unlikely]] return; }
L_00154470:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154478u); set32(c.r[4], ld32((c.r[20].w[0] + 1252u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x00154478u) [[unlikely]] return; }
L_00154478:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154480u); set32(c.r[4], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x00154480u) [[unlikely]] return; }
L_00154480:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154490u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x00154490u) [[unlikely]] return; }
L_00154490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154498u); set32(c.r[4], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x00154498u) [[unlikely]] return; }
L_00154498:
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[19], c.r[19].w[0] - 27856u);
    c.budget -= 4;
L_001544A8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8656u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00154650; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00154650; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 5u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 320u);  if (t) { goto L_00154650; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001544E0u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001544E0u) [[unlikely]] return; }
L_001544E0:
    set32(c.r[4], c.r[19].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001544ECu); set32(c.r[5], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001544ECu) [[unlikely]] return; }
L_001544EC:
    c.f[0] = ld32((c.r[29].w[0] + 304u));
    c.f[1] = ld32((c.r[23].w[0]));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154500u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x00154500u) [[unlikely]] return; }
L_00154500:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44160000u);
    c.f[2] = c.r[4].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    fpu_div(c, 12u, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00154650; } }
    c.f[23] = ld32((c.r[17].w[0]));
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], c.r[29].w[0] + 304u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154544u); st32((c.r[17].w[0]), 0u);  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x00154544u) [[unlikely]] return; }
L_00154544:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015454Cu); c.f[12] = c.f[23];  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x0015454Cu) [[unlikely]] return; }
L_0015454C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[2] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00154580; } }
    c.f[2] = c.f[0];
    c.budget -= 1;
L_00154580:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[3].d[0] = c.r[2].d[0] | 39322ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[2], c.r[2].w[0] + 4400u);
    st32((c.r[30].w[0]), c.r[2].w[0]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 240u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 276u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[19].w[0] + 515u));
    c.f[23] = fp::add(c.f[1], c.f[0]);
    c.r[2].d[0] = ld8((c.r[20].w[0] + 515u));
    c.f[0] = c.r[4].w[0];
    c.budget -= 21;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001545E8; } }
    st32((c.r[16].w[0]), 0u);
    st32((c.r[21].w[0]), c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[22].w[0]), 0u);  if (t) { goto L_001545F8; } }
    c.budget -= 1;
L_001545E8:
    st32((c.r[16].w[0]), c.f[0]);
    st32((c.r[21].w[0]), 0u);
    st32((c.r[22].w[0]), 0u);
    c.budget -= 4;
L_001545F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154600u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00154600u) [[unlikely]] return; }
L_00154600:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42D00000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = ld32((c.r[29].w[0] + 224u));
    set32(c.r[2], c.r[29].w[0] + 232u);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[14] = 0u;
    c.f[12] = fp::sub(c.f[20], c.f[2]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154628u); c.f[13] = fp::add(c.f[0], c.f[22]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00154628u) [[unlikely]] return; }
L_00154628:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.f[12] = c.f[23];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015463Cu); c.f[13] = c.f[23];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0015463Cu) [[unlikely]] return; }
L_0015463C:
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], 0u + 11u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015464Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0015464Cu) [[unlikely]] return; }
L_0015464C:
    c.budget -= 1;
L_00154650:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001544A8u | kUnwind; return; } goto L_001544A8; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 192u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[3], c.r[3].w[0] + 384u);
    st32((c.r[29].w[0] + 208u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00154308u | kUnwind; return; } goto L_00154308; } }
L_00154688:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 384u);  c.pc = t; return; }
L_001546D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001546E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 214u, depth + 1u); else { c.pc = 0x00162790u; return; } if (c.pc != 0x001546E4u) [[unlikely]] return; }
L_001546E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[9].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_001547A8; } }
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[9].w[0] - 27856u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 15u);
    c.budget -= 5;
L_00154700:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 496u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 498u)));
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));  if (t) { goto L_00154718; } }
    set32(c.r[3], c.r[4].w[0] + 3u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_00154718:
    c.r[1].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00154740; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[7].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] & 31ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[7].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00154748; } }
L_00154740:
    st16((c.r[7].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 2;
L_00154748:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 500u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 498u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;  if (t) { goto L_00154788; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] - 1u);  if (t) { goto L_00154768; } }
    st16((c.r[9].w[0] + 500u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00154768:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 498u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 500u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00154788; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[9].w[0] + 500u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00154788:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[7], c.r[7].w[0] + 2u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00154700u | kUnwind; return; } goto L_00154700; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001547A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001547C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 50u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00154AF8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 322u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[20].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_00154AF8; } }
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[20], c.r[20].w[0] - 27856u);
    c.r[19].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 5;
L_00154810:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154818u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 219u, depth + 1u); else { c.pc = 0x00162A40u; return; } if (c.pc != 0x00154818u) [[unlikely]] return; }
L_00154818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154820u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x00154820u) [[unlikely]] return; }
L_00154820:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3880000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2C60000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154840u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00154840u) [[unlikely]] return; }
L_00154840:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 21u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154854u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 206u, depth + 1u); else { c.pc = 0x001625F0u; return; } if (c.pc != 0x00154854u) [[unlikely]] return; }
L_00154854:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154868u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00154868u) [[unlikely]] return; }
L_00154868:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154870u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 219u, depth + 1u); else { c.pc = 0x00162A40u; return; } if (c.pc != 0x00154870u) [[unlikely]] return; }
L_00154870:
    c.f[1] = c.r[19].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44080000u);
    c.r[4].d[0] = c.r[3].d[0] | 49152ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3880000u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[3].d[0] = c.r[2].d[0] | 49152ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2EE0000u);
    c.f[2] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001548ACu); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001548ACu) [[unlikely]] return; }
L_001548AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 2720u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    set32(c.r[3], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[1].w[0] + 19408u), c.r[3].w[0]);
    c.f[12] = 0u;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], 0u + 1u);
    st32((c.r[1].w[0] + 19444u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42840000u);
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42820000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[15] = c.r[2].w[0];
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154900u); set32(c.r[5], c.r[5].w[0] + 19408u);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x00154900u) [[unlikely]] return; }
L_00154900:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154914u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00154914u) [[unlikely]] return; }
L_00154914:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] - 1840u);
    set32(c.r[3], 0u + 6u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[1].w[0] + 19408u), c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19444u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_00154970; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st32((c.r[1].w[0] + 19452u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 19456u), 0u);  if (t) { goto L_00154988; } }
    c.budget -= 1;
L_00154970:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19456u), c.f[0]);
    c.budget -= 6;
L_00154988:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154990u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 219u, depth + 1u); else { c.pc = 0x00162A40u; return; } if (c.pc != 0x00154990u) [[unlikely]] return; }
L_00154990:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 500u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    c.r[2].d[0] = c.r[2].d[0] | 34079ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001549CCu); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x001549CCu) [[unlikely]] return; }
L_001549CC:
    c.f[1] = c.r[19].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44080000u);
    c.r[4].d[0] = c.r[3].d[0] | 32768ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3910000u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[3].d[0] = c.r[2].d[0] | 32768ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2C60000u);
    c.f[2] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154A08u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00154A08u) [[unlikely]] return; }
L_00154A08:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154A1Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00154A1Cu) [[unlikely]] return; }
L_00154A1C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 500u)));
    set32(c.r[3], 0u + 100u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    mmi::div(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.r[16].d[0] = c.r[3].d[0] & 255ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    set32(c.r[3], c.r[16].w[0] >> 31);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154A6Cu); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x00154A6Cu) [[unlikely]] return; }
L_00154A6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154A80u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00154A80u) [[unlikely]] return; }
L_00154A80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154A94u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00154A94u) [[unlikely]] return; }
L_00154A94:
    set32(c.r[2], 0u + 10u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    mmi::div(c, 0, c.r[16].w[0], c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154AB4u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x00154AB4u) [[unlikely]] return; }
L_00154AB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154AC8u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00154AC8u) [[unlikely]] return; }
L_00154AC8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154ADCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00154ADCu) [[unlikely]] return; }
L_00154ADC:
    set32(c.r[3], c.r[18].w[0] + 32767u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[18], c.r[3].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 2u);
    c.r[3].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00154810u | kUnwind; return; } goto L_00154810; } }
L_00154AF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00154B20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 39u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00154D20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154B44u);  if (depth < kMaxDepth) unit_0018(c, 214u, depth + 1u); else { c.pc = 0x00162790u; return; } if (c.pc != 0x00154B44u) [[unlikely]] return; }
L_00154B44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[13].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_00154D20; } }
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[13], c.r[13].w[0] - 27856u);  if (t) { goto L_00154D00; } }
L_00154B58:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[6].d[0]; set32(c.r[12], c.r[13].w[0] + 1568u);  if (t) { goto L_00154B78; } }
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[11].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[11].w[0]), c.r[5].w[0]);
    c.budget -= 5;
L_00154B78:
    c.r[14].sd[0] = static_cast<std::int16_t>(ld16((c.r[12].w[0] + 8u)));
    c.r[10].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[11].d[0] + 0ull;
    st16((c.r[8].w[0] + 16u), static_cast<std::uint16_t>(c.r[14].w[0]));
    c.r[14].sd[0] = static_cast<std::int16_t>(ld16((c.r[12].w[0] + 24u)));
    st16((c.r[8].w[0] + 18u), static_cast<std::uint16_t>(c.r[14].w[0]));
    c.budget -= 6;
L_00154B90:
    c.r[15].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0])));
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull;  if (t) { goto L_00154CC0; } }
    c.budget -= 2;
    { const bool t = c.r[15].d[0] != c.r[4].d[0];  if (t) { goto L_00154BB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), 0u);  if (t) { goto L_00154CC0; } }
    c.budget -= 1;
L_00154BB0:
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[14].d[0] == c.r[3].d[0];  if (t) { goto L_00154C40; } }
    c.budget -= 2;
    { const bool t = c.r[14].d[0] == 0ull;  if (t) { goto L_00154BD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00154C98; } }
    c.budget -= 1;
L_00154BD0:
    c.budget -= 2;
    { const bool t = c.r[15].d[0] != c.r[3].d[0];  if (t) { goto L_00154C08; } }
    c.r[15].sd[0] = static_cast<std::int16_t>(ld16((c.r[12].w[0] + 8u)));
    c.r[14].sd[0] = static_cast<std::int16_t>(ld16((c.r[12].w[0] + 6u)));
    c.f[1] = c.r[15].w[0];
    c.f[0] = c.r[14].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.f[0]);  if (t) { goto L_00154CC0; } }
L_00154C08:
    c.r[14].sd[0] = static_cast<std::int16_t>(ld16((c.r[12].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[14].d[0] == 0ull;  if (t) { goto L_00154CC0; } }
    c.f[0] = c.r[14].w[0];
    c.r[14].sd[0] = static_cast<std::int16_t>(ld16((c.r[12].w[0] + 14u)));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = c.r[14].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.f[0]);  if (t) { goto L_00154CC0; } }
L_00154C40:
    c.r[14].sd[0] = static_cast<std::int16_t>(ld16((c.r[12].w[0] + 14u)));
    c.budget -= 3;
    { const bool t = c.r[14].d[0] == 0ull;  if (t) { goto L_00154C90; } }
    c.r[24].sd[0] = static_cast<std::int16_t>(ld16((c.r[12].w[0] + 6u)));
    c.r[14].d[0] = c.r[14].d[0] << 48;
    c.r[15].sd[0] = static_cast<std::int16_t>(ld16((c.r[12].w[0] + 12u)));
    c.r[14].d[0] = static_cast<std::uint64_t>(c.r[14].sd[0] >> 48);
    mmi::mult(c, 0, c.r[24].w[0], c.r[15].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[14], c.r[15].w[0] - c.r[14].w[0]);
    c.f[1] = c.r[14].w[0];
    c.f[0] = c.r[15].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.f[0]);  if (t) { goto L_00154CC0; } }
    c.budget -= 1;
L_00154C90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.r[5].w[0]);  if (t) { goto L_00154CC0; } }
L_00154C98:
    c.r[15].sd[0] = static_cast<std::int16_t>(ld16((c.r[12].w[0] + 8u)));
    c.r[14].sd[0] = static_cast<std::int16_t>(ld16((c.r[12].w[0] + 6u)));
    c.f[1] = c.r[15].w[0];
    c.f[0] = c.r[14].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[7].w[0]), c.f[0]);
    c.budget -= 10;
L_00154CC0:
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[14].d[0] = c.r[10].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[14].d[0] != 0ull; set32(c.r[12], c.r[12].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00154B90u | kUnwind; return; } goto L_00154B90; } }
    set32(c.r[11], c.r[11].w[0] + 8u);
    set32(c.r[8], c.r[8].w[0] + 4u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[13], c.r[13].w[0] + 8704u);
    c.budget -= 5;
L_00154CE8:
    c.r[7].d[0] = c.r[9].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00154B58u | kUnwind; return; } goto L_00154B58; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00154D20; } }
L_00154D00:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[11], c.r[16].w[0] + 304u);
    set32(c.r[4], 0u - 1u);
    c.f[2] = c.r[5].w[0];
    c.r[8].d[0] = c.r[11].d[0] + 0ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00154CE8u | kUnwind; return; } goto L_00154CE8; } }
L_00154D20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00154D30:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 50u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00155508; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 322u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[21].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_00155508; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[21].w[0] - 27856u);  if (t) { goto L_001554F8; } }
L_00154D88:
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 1568u)));
    c.r[19].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 1584u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154D98u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8656u)));  if (depth < kMaxDepth) unit_003A(c, 56u, depth + 1u); else { c.pc = 0x001E9320u; return; } if (c.pc != 0x00154D98u) [[unlikely]] return; }
L_00154D98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154DA0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 219u, depth + 1u); else { c.pc = 0x00162A40u; return; } if (c.pc != 0x00154DA0u) [[unlikely]] return; }
L_00154DA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 24u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154DB0u); set32(c.r[4], c.r[4].w[0] + 19408u);  if (depth < kMaxDepth) unit_0018(c, 203u, depth + 1u); else { c.pc = 0x001624C0u; return; } if (c.pc != 0x00154DB0u) [[unlikely]] return; }
L_00154DB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154DB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x00154DB8u) [[unlikely]] return; }
L_00154DB8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3880000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2C60000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154DD8u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00154DD8u) [[unlikely]] return; }
L_00154DD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154DE0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 219u, depth + 1u); else { c.pc = 0x00162A40u; return; } if (c.pc != 0x00154DE0u) [[unlikely]] return; }
L_00154DE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154DE8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x00154DE8u) [[unlikely]] return; }
L_00154DE8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3880000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC30F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154E08u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00154E08u) [[unlikely]] return; }
L_00154E08:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 24u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154E1Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 206u, depth + 1u); else { c.pc = 0x001625F0u; return; } if (c.pc != 0x00154E1Cu) [[unlikely]] return; }
L_00154E1C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154E30u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00154E30u) [[unlikely]] return; }
L_00154E30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154E38u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 219u, depth + 1u); else { c.pc = 0x00162A40u; return; } if (c.pc != 0x00154E38u) [[unlikely]] return; }
L_00154E38:
    c.f[1] = c.r[18].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44080000u);
    c.r[4].d[0] = c.r[3].d[0] | 49152ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3880000u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[3].d[0] = c.r[2].d[0] | 49152ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3230000u);
    c.f[2] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[20] = fp::add(c.f[0], c.f[1]);
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154E78u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00154E78u) [[unlikely]] return; }
L_00154E78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 2720u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    set32(c.r[3], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[1].w[0] + 19408u), c.r[3].w[0]);
    c.f[12] = 0u;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], 0u + 1u);
    st32((c.r[1].w[0] + 19444u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x429C0000u);
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42820000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[15] = c.r[2].w[0];
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154ECCu); set32(c.r[5], c.r[5].w[0] + 19408u);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x00154ECCu) [[unlikely]] return; }
L_00154ECC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154EE0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00154EE0u) [[unlikely]] return; }
L_00154EE0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_00154F30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154EF4u);  if (depth < kMaxDepth) unit_0018(c, 219u, depth + 1u); else { c.pc = 0x00162A40u; return; } if (c.pc != 0x00154EF4u) [[unlikely]] return; }
L_00154EF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154EFCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x00154EFCu) [[unlikely]] return; }
L_00154EFC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3880000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC30F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154F1Cu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00154F1Cu) [[unlikely]] return; }
L_00154F1C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 9u);
    set32(c.r[4], c.r[4].w[0] + 3680u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154F30u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00154F30u) [[unlikely]] return; }
L_00154F30:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_00155068; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154F40u);  if (depth < kMaxDepth) unit_0018(c, 219u, depth + 1u); else { c.pc = 0x00162A40u; return; } if (c.pc != 0x00154F40u) [[unlikely]] return; }
L_00154F40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154F48u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x00154F48u) [[unlikely]] return; }
L_00154F48:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3880000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC33B0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154F68u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00154F68u) [[unlikely]] return; }
L_00154F68:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 24u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154F7Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 206u, depth + 1u); else { c.pc = 0x001625F0u; return; } if (c.pc != 0x00154F7Cu) [[unlikely]] return; }
L_00154F7C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154F90u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00154F90u) [[unlikely]] return; }
L_00154F90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154F98u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 219u, depth + 1u); else { c.pc = 0x00162A40u; return; } if (c.pc != 0x00154F98u) [[unlikely]] return; }
L_00154F98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC34F0000u);
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154FACu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00154FACu) [[unlikely]] return; }
L_00154FAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 2720u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    set32(c.r[3], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[1].w[0] + 19408u), c.r[3].w[0]);
    c.f[12] = 0u;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], 0u + 1u);
    st32((c.r[1].w[0] + 19444u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42820000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[15] = c.r[2].w[0];
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155000u); set32(c.r[5], c.r[5].w[0] + 19408u);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x00155000u) [[unlikely]] return; }
L_00155000:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155014u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00155014u) [[unlikely]] return; }
L_00155014:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_00155068; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155028u);  if (depth < kMaxDepth) unit_0018(c, 219u, depth + 1u); else { c.pc = 0x00162A40u; return; } if (c.pc != 0x00155028u) [[unlikely]] return; }
L_00155028:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155030u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x00155030u) [[unlikely]] return; }
L_00155030:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3880000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC33B0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155050u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00155050u) [[unlikely]] return; }
L_00155050:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 9u);
    set32(c.r[4], c.r[4].w[0] + 3680u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155064u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00155064u) [[unlikely]] return; }
L_00155064:
    c.budget -= 1;
L_00155068:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155070u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 219u, depth + 1u); else { c.pc = 0x00162A40u; return; } if (c.pc != 0x00155070u) [[unlikely]] return; }
L_00155070:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    st32((c.r[1].w[0] + 19456u), 0u);
    set32(c.r[2], c.r[2].w[0] + 3440u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    c.f[0] = 0u;
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19408u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19444u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 18;
    { const bool t = c.r[22].d[0] == c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_001550C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 19452u), c.f[0]);  if (t) { goto L_001550D0; } }
L_001550C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.r[2].w[0]);
    c.budget -= 4;
L_001550D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44080000u);
    c.f[1] = c.r[18].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.f[2] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC37A0000u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3070000u);
    c.f[21] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[20] = fp::add(c.f[0], c.f[21]);
    c.f[14] = 0u;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155108u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00155108u) [[unlikely]] return; }
L_00155108:
    c.f[12] = ld32((c.r[20].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015511Cu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0015511Cu) [[unlikely]] return; }
L_0015511C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155130u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00155130u) [[unlikely]] return; }
L_00155130:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00BD0000u);  if (t) { goto L_001551B0; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 3440u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 5;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; st32((c.r[1].w[0] + 19460u), c.r[3].w[0]);  if (t) { goto L_00155158; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 19452u), 0u);  if (t) { goto L_00155168; } }
L_00155158:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.r[2].w[0]);
    c.budget -= 4;
L_00155168:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155170u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 219u, depth + 1u); else { c.pc = 0x00162A40u; return; } if (c.pc != 0x00155170u) [[unlikely]] return; }
L_00155170:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3330000u);
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155184u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00155184u) [[unlikely]] return; }
L_00155184:
    c.f[12] = ld32((c.r[20].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155198u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00155198u) [[unlikely]] return; }
L_00155198:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001551ACu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x001551ACu) [[unlikely]] return; }
L_001551AC:
    c.budget -= 1;
L_001551B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001551B8u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 219u, depth + 1u); else { c.pc = 0x00162A40u; return; } if (c.pc != 0x001551B8u) [[unlikely]] return; }
L_001551B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    st32((c.r[1].w[0] + 19456u), 0u);
    set32(c.r[2], c.r[2].w[0] - 1600u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    c.f[0] = 0u;
    set32(c.r[2], 0u + 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19408u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19444u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 18;
    { const bool t = c.r[22].d[0] == c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_00155208; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 19452u), c.f[0]);  if (t) { goto L_00155218; } }
L_00155208:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.r[2].w[0]);
    c.budget -= 4;
L_00155218:
    c.r[22].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].d[0] = c.r[2].d[0] | 34079ull;
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[22].w[0]);
    set32(c.r[3], c.r[22].w[0] >> 31);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155258u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x00155258u) [[unlikely]] return; }
L_00155258:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC38F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3140000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[0] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[20] = fp::add(c.f[0], c.f[21]);
    c.f[14] = 0u;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015527Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0015527Cu) [[unlikely]] return; }
L_0015527C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155290u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00155290u) [[unlikely]] return; }
L_00155290:
    set32(c.r[3], 0u + 100u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);
    mmi::div(c, 0, c.r[22].w[0], c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.hi.d[0];
    c.r[22].d[0] = c.r[3].d[0] << 48;
    c.r[22].d[0] = static_cast<std::uint64_t>(c.r[22].sd[0] >> 48);
    mmi::mult(c, 0, c.r[2].w[0], c.r[22].w[0]);
    set32(c.r[3], c.r[22].w[0] >> 31);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001552D8u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x001552D8u) [[unlikely]] return; }
L_001552D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001552ECu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001552ECu) [[unlikely]] return; }
L_001552EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155300u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00155300u) [[unlikely]] return; }
L_00155300:
    set32(c.r[2], 0u + 10u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    mmi::div(c, 0, c.r[22].w[0], c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155320u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x00155320u) [[unlikely]] return; }
L_00155320:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155334u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00155334u) [[unlikely]] return; }
L_00155334:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155348u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00155348u) [[unlikely]] return; }
L_00155348:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_001554C8; } }
    set32(c.r[2], 0u + 10u);
    st32((c.r[1].w[0] + 19456u), 0u);
    c.f[0] = 0u;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19408u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19444u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 13;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_00155390; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 19452u), c.f[0]);  if (t) { goto L_001553A0; } }
L_00155390:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.r[2].w[0]);
    c.budget -= 4;
L_001553A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001553A8u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 219u, depth + 1u); else { c.pc = 0x00162A40u; return; } if (c.pc != 0x001553A8u) [[unlikely]] return; }
L_001553A8:
    c.r[19].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 18u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    c.r[2].d[0] = c.r[2].d[0] | 34079ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    set32(c.r[3], c.r[19].w[0] >> 31);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001553E8u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x001553E8u) [[unlikely]] return; }
L_001553E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3400000u);
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001553FCu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001553FCu) [[unlikely]] return; }
L_001553FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155410u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00155410u) [[unlikely]] return; }
L_00155410:
    set32(c.r[3], 0u + 100u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);
    mmi::div(c, 0, c.r[19].w[0], c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.hi.d[0];
    c.r[19].d[0] = c.r[3].d[0] << 48;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    set32(c.r[3], c.r[19].w[0] >> 31);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155458u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x00155458u) [[unlikely]] return; }
L_00155458:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015546Cu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0015546Cu) [[unlikely]] return; }
L_0015546C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155480u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00155480u) [[unlikely]] return; }
L_00155480:
    set32(c.r[2], 0u + 10u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    mmi::div(c, 0, c.r[19].w[0], c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001554A0u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x001554A0u) [[unlikely]] return; }
L_001554A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001554B4u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001554B4u) [[unlikely]] return; }
L_001554B4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001554C8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x001554C8u) [[unlikely]] return; }
L_001554C8:
    set32(c.r[3], c.r[17].w[0] + 32767u);
    set32(c.r[17], c.r[3].w[0] + 1u);
    set32(c.r[20], c.r[20].w[0] + 8u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[21], c.r[21].w[0] + 8704u);
    c.budget -= 6;
L_001554E0:
    c.r[3].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00154D88u | kUnwind; return; } goto L_00154D88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00155508; } }
    c.budget -= 1;
L_001554F8:
    set32(c.r[20], c.r[4].w[0] + 304u);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[20].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001554E0u | kUnwind; return; } goto L_001554E0; } }
L_00155508:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00155540:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155554u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 214u, depth + 1u); else { c.pc = 0x00162790u; return; } if (c.pc != 0x00155554u) [[unlikely]] return; }
L_00155554:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[10].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_001555D8; } }
    set32(c.r[9], c.r[16].w[0] + 304u);
    set32(c.r[10], c.r[10].w[0] - 27856u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 4000u);
    c.budget -= 5;
L_00155570:
    set32(c.r[7], c.r[9].w[0] + c.r[8].w[0]);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0] + 824u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0] + 826u)));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_00155590; } }
    st16((c.r[10].w[0] + 826u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 2;
L_00155590:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001555C0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0] + 824u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001555C0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 797u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001555C0; } }
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 2;
L_001555C0:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[10], c.r[10].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00155570u | kUnwind; return; } goto L_00155570; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001555D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001555F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 50u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00155760; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 322u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_00155760; } }
    set32(c.r[17], c.r[4].w[0] + 304u);
    set32(c.r[18], c.r[18].w[0] - 27856u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_00155638:
    set32(c.r[3], c.r[17].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00155750; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155650u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00155650u) [[unlikely]] return; }
L_00155650:
    c.f[1] = c.r[16].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[2] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3200000u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3460000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.f[21] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[20] = fp::add(c.f[0], c.f[21]);
    c.f[14] = 0u;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155688u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00155688u) [[unlikely]] return; }
L_00155688:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 18u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015569Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 206u, depth + 1u); else { c.pc = 0x001625F0u; return; } if (c.pc != 0x0015569Cu) [[unlikely]] return; }
L_0015569C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001556B0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x001556B0u) [[unlikely]] return; }
L_001556B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001556B8u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x001556B8u) [[unlikely]] return; }
L_001556B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC34F0000u);
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001556CCu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001556CCu) [[unlikely]] return; }
L_001556CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 2240u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001556E0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x001556E0u) [[unlikely]] return; }
L_001556E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001556E8u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x001556E8u) [[unlikely]] return; }
L_001556E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2F00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3410000u);
    c.f[0] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155704u); c.f[12] = fp::add(c.f[0], c.f[21]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00155704u) [[unlikely]] return; }
L_00155704:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 826u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x457A0000u);
    c.f[0] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[14] = c.f[13];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155738u);  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00155738u) [[unlikely]] return; }
L_00155738:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[4], c.r[4].w[0] + 2000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015574Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0015574Cu) [[unlikely]] return; }
L_0015574C:
    c.budget -= 1;
L_00155750:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00155638u | kUnwind; return; } goto L_00155638; } }
L_00155760:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00155780:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001557A4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0018(c, 214u, depth + 1u); else { c.pc = 0x00162790u; return; } if (c.pc != 0x001557A4u) [[unlikely]] return; }
L_001557A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00155978; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 116u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00155978; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[18], c.r[20].w[0] + 304u);
    c.r[11].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 39u)));
    st8((c.r[20].w[0] + 304u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[12], c.r[3].w[0] + 128u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], 0u + 40u);
    c.budget -= 9;
L_001557E0:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[12].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[12].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[7].d[0]; set32(c.r[10], c.r[18].w[0] + c.r[11].w[0]);  if (t) { goto L_00155848; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[9], c.r[10].w[0] + 3u);  if (t) { goto L_00155808; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00155848; } }
L_00155808:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[8], c.r[10].w[0] + 1u);  if (t) { goto L_00155820; } }
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00155848; } }
L_00155820:
    set32(c.r[3], c.r[7].w[0] - c.r[6].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00155840; } }
    st16((c.r[12].w[0] + 4u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[8].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_00155848; } }
    c.budget -= 1;
L_00155840:
    set32(c.r[3], c.r[7].w[0] - 5u);
    st16((c.r[12].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00155848:
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.r[3].d[0] = c.r[11].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[12], c.r[12].w[0] + 6u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001557E0u | kUnwind; return; } goto L_001557E0; } }
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[19], c.r[19].w[0] - 27856u);
    c.budget -= 4;
L_00155868:
    set32(c.r[8], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00155960; } }
    c.r[7].d[0] = ld8((c.r[19].w[0] + 515u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[4], c.r[7].w[0] << 1);
    c.r[5].d[0] = c.r[7].d[0] ^ 1ull;
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 159u)));
    set32(c.r[6], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[5], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[5].w[0] + 128u);
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != c.r[7].d[0]; set32(c.r[17], c.r[4].w[0] + 128u);  if (t) { goto L_00155960; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00155960; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));  if (t) { goto L_001558D8; } }
    set32(c.r[3], c.r[4].w[0] + 3u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_001558D8:
    c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00155910; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00155908; } }
    set32(c.r[2], 0u + 1200u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155900u); st16((c.r[18].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 177u, depth + 1u); else { c.pc = 0x0023A720u; return; } if (c.pc != 0x00155900u) [[unlikely]] return; }
L_00155900:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00155910; } }
L_00155908:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[18].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00155910:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));  if (t) { goto L_00155928; } }
    set32(c.r[3], c.r[4].w[0] + 3u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_00155928:
    c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00155960; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00155958; } }
    set32(c.r[2], 0u + 1200u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155950u); st16((c.r[18].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 177u, depth + 1u); else { c.pc = 0x0023A720u; return; } if (c.pc != 0x00155950u) [[unlikely]] return; }
L_00155950:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00155960; } }
L_00155958:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[18].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00155960:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00155868u | kUnwind; return; } goto L_00155868; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[20].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00155978:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001559A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 50u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001560B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001559C4u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x001559C4u) [[unlikely]] return; }
L_001559C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 40u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001559D8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 206u, depth + 1u); else { c.pc = 0x001625F0u; return; } if (c.pc != 0x001559D8u) [[unlikely]] return; }
L_001559D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001559ECu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x001559ECu) [[unlikely]] return; }
L_001559EC:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 101u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_00155A20; } }
    set32(c.r[5], 0u + 41u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155A0Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 206u, depth + 1u); else { c.pc = 0x001625F0u; return; } if (c.pc != 0x00155A0Cu) [[unlikely]] return; }
L_00155A0C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155A20u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00155A20u) [[unlikely]] return; }
L_00155A20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155A28u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00155A28u) [[unlikely]] return; }
L_00155A28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[13] = c.r[2].w[0];
    c.f[12] = c.r[3].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155A40u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00155A40u) [[unlikely]] return; }
L_00155A40:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 40u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155A54u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 206u, depth + 1u); else { c.pc = 0x001625F0u; return; } if (c.pc != 0x00155A54u) [[unlikely]] return; }
L_00155A54:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155A68u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00155A68u) [[unlikely]] return; }
L_00155A68:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 101u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_00155AA0; } }
    set32(c.r[5], 0u + 41u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155A88u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 206u, depth + 1u); else { c.pc = 0x001625F0u; return; } if (c.pc != 0x00155A88u) [[unlikely]] return; }
L_00155A88:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155A9Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00155A9Cu) [[unlikely]] return; }
L_00155A9C:
    c.budget -= 1;
L_00155AA0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] - 27341u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155AC4u); set32(c.r[16], c.r[2].w[0] + 128u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00155AC4u) [[unlikely]] return; }
L_00155AC4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3880000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43420000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155AE0u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00155AE0u) [[unlikely]] return; }
L_00155AE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155AE8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x00155AE8u) [[unlikely]] return; }
L_00155AE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.f[14] = c.f[13];
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155B28u);  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00155B28u) [[unlikely]] return; }
L_00155B28:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[3].w[0] + 6800u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19460u), c.r[3].w[0]);
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[1].w[0] + 19408u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.r[2].w[0]);
    set32(c.r[5], 0u + 10u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.r[2].w[0]);
    set32(c.r[6], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19444u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155B84u); st32((c.r[1].w[0] + 19456u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00155B84u) [[unlikely]] return; }
L_00155B84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155B8Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x00155B8Cu) [[unlikely]] return; }
L_00155B8C:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.f[13] = c.r[2].w[0];
    c.f[14] = c.f[13];
    c.f[1] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155BCCu);  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00155BCCu) [[unlikely]] return; }
L_00155BCC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 7040u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155BE0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00155BE0u) [[unlikely]] return; }
L_00155BE0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].d[0] = ld8((c.r[1].w[0] - 27341u));
    c.r[4].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155C08u); set32(c.r[16], c.r[2].w[0] + 128u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00155C08u) [[unlikely]] return; }
L_00155C08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155C10u); c.r[4].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x00155C10u) [[unlikely]] return; }
L_00155C10:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3880000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43420000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155C2Cu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00155C2Cu) [[unlikely]] return; }
L_00155C2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155C34u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x00155C34u) [[unlikely]] return; }
L_00155C34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.f[14] = c.f[13];
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155C74u);  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00155C74u) [[unlikely]] return; }
L_00155C74:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[3].w[0] + 6800u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19460u), c.r[3].w[0]);
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[1].w[0] + 19408u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    st32((c.r[1].w[0] + 19444u), c.r[3].w[0]);
    set32(c.r[5], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[1].w[0] + 19448u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155CCCu); st32((c.r[1].w[0] + 19456u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00155CCCu) [[unlikely]] return; }
L_00155CCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155CD4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x00155CD4u) [[unlikely]] return; }
L_00155CD4:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.f[13] = c.r[2].w[0];
    c.f[14] = c.f[13];
    c.f[1] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155D14u);  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00155D14u) [[unlikely]] return; }
L_00155D14:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 7040u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155D28u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00155D28u) [[unlikely]] return; }
L_00155D28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155D30u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00155D30u) [[unlikely]] return; }
L_00155D30:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3750000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43540000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155D4Cu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00155D4Cu) [[unlikely]] return; }
L_00155D4C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[3].w[0] + 6320u);
    set32(c.r[2], 0u + 4u);
    st32((c.r[1].w[0] + 19460u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[1].w[0] + 19408u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19444u), c.r[3].w[0]);
    c.f[1] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 27341u));
    c.budget -= 16;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_00155D98; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00155DB0; } }
L_00155D98:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_00155DB0:
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x428A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x430D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + 19408u);
    c.f[0] = c.r[7].w[0];
    c.f[12] = c.r[6].w[0];
    c.f[14] = c.r[3].w[0];
    c.f[15] = c.r[2].w[0];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155DE8u); c.f[13] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x00155DE8u) [[unlikely]] return; }
L_00155DE8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155DFCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00155DFCu) [[unlikely]] return; }
L_00155DFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155E04u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00155E04u) [[unlikely]] return; }
L_00155E04:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43750000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43540000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155E20u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00155E20u) [[unlikely]] return; }
L_00155E20:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[3].w[0] + 6320u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19460u), c.r[3].w[0]);
    set32(c.r[2], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[1].w[0] + 19408u), c.r[2].w[0]);
    set32(c.r[4], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[15] = c.r[2].w[0];
    st32((c.r[1].w[0] + 19444u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[5], c.r[5].w[0] + 19408u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x428A0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 27341u));
    c.f[0] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x430D0000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].d[0] = c.r[3].d[0] ^ 1ull;
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::mul(c.f[15], c.f[1]);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155E98u); c.f[13] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x00155E98u) [[unlikely]] return; }
L_00155E98:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155EACu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00155EACu) [[unlikely]] return; }
L_00155EAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155EB4u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00155EB4u) [[unlikely]] return; }
L_00155EB4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3910000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43430000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155ED4u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00155ED4u) [[unlikely]] return; }
L_00155ED4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[3].w[0] + 6560u);
    set32(c.r[2], 0u + 4u);
    st32((c.r[1].w[0] + 19460u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[1].w[0] + 19408u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19444u), c.r[3].w[0]);
    c.f[1] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 27341u));
    c.budget -= 16;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_00155F20; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00155F38; } }
L_00155F20:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_00155F38:
    c.f[12] = fp::mul(c.f[1], c.f[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], 0u + 1u);
    c.f[13] = c.r[6].w[0];
    c.f[14] = c.r[3].w[0];
    c.f[15] = c.r[2].w[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155F64u); set32(c.r[5], c.r[5].w[0] + 19408u);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x00155F64u) [[unlikely]] return; }
L_00155F64:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155F78u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00155F78u) [[unlikely]] return; }
L_00155F78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155F80u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00155F80u) [[unlikely]] return; }
L_00155F80:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43910000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43430000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155FA0u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00155FA0u) [[unlikely]] return; }
L_00155FA0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[3].w[0] + 6560u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19460u), c.r[3].w[0]);
    set32(c.r[2], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[1].w[0] + 19408u), c.r[2].w[0]);
    set32(c.r[4], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19444u), c.r[3].w[0]);
    c.f[14] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[5], c.r[5].w[0] + 19408u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 27341u));
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[15] = c.r[2].w[0];
    c.r[2].d[0] = c.r[3].d[0] ^ 1ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015600Cu); c.f[12] = fp::mul(c.f[14], c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x0015600Cu) [[unlikely]] return; }
L_0015600C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156020u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00156020u) [[unlikely]] return; }
L_00156020:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 101u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001560B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156038u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00156038u) [[unlikely]] return; }
L_00156038:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC32D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43290000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156054u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00156054u) [[unlikely]] return; }
L_00156054:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 82u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015606Cu); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_0076(c, 73u, depth + 1u); else { c.pc = 0x002D90F0u; return; } if (c.pc != 0x0015606Cu) [[unlikely]] return; }
L_0015606C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156074u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00156074u) [[unlikely]] return; }
L_00156074:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43640000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43290000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156090u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00156090u) [[unlikely]] return; }
L_00156090:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 11u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 82u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001560ACu); set32(c.r[4], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0076(c, 73u, depth + 1u); else { c.pc = 0x002D90F0u; return; } if (c.pc != 0x001560ACu) [[unlikely]] return; }
L_001560AC:
    c.budget -= 1;
L_001560B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001560C0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001560F0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0018(c, 214u, depth + 1u); else { c.pc = 0x00162790u; return; } if (c.pc != 0x001560F0u) [[unlikely]] return; }
L_001560F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00156440; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[23].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00156140; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[5], c.r[5].w[0] - 26288u);
    st8((c.r[23].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] - 17584u);
    st8((c.r[23].w[0] + 307u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 16u)));
    st8((c.r[23].w[0] + 315u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    st8((c.r[23].w[0] + 323u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 16u)));
    st8((c.r[23].w[0] + 331u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 15;
L_00156140:
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[21], c.r[21].w[0] - 27856u);
    set32(c.r[22], c.r[23].w[0] + 304u);
    c.budget -= 4;
L_00156150:
    set32(c.r[16], c.r[21].w[0] + 1568u);
    c.r[17].d[0] = c.r[22].d[0] + 0ull;
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_00156160:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00156410; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[18].d[0] = c.r[20].d[0] ^ 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; c.r[18].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_001561B8; } }
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001561B8; } }
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = c.r[18].d[0] & 255ull;
    c.r[3].d[0] = ld16((c.r[28].w[0] - 24152u));
    set32(c.r[4], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    c.r[4].d[0] = ~(c.r[4].d[0] | 0ull);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    st16((c.r[28].w[0] - 24152u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 10;
L_001561B8:
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_001562E0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00156230; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001561E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00156410; } }
L_001561E0:
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00156410; } }
    c.r[6].d[0] = ld8((c.r[17].w[0]));
    c.r[3].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[3], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    set32(c.r[5], 0u + 32u);
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[3], 0u + 8u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[17].w[0] + 4u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[28].w[0] - 24152u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 24152u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00156410; } }
    c.budget -= 1;
L_00156230:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00156288; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] & 31ull;
    st16((c.r[17].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 32u);  if (t) { goto L_00156270; } }
    st16((c.r[17].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 6u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00156270; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00156270:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001562B0; } }
    c.budget -= 1;
L_00156288:
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].d[0] = c.r[18].d[0] & 255ull;
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    c.r[3].d[0] = ld16((c.r[28].w[0] - 24152u));
    c.r[4].d[0] = ~(c.r[4].d[0] | 0ull);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    st16((c.r[28].w[0] - 24152u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 10;
L_001562B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; c.r[3].d[0] = c.r[18].d[0] & 255ull;  if (t) { goto L_00156410; } }
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    c.r[3].d[0] = ld16((c.r[28].w[0] - 24152u));
    c.r[4].d[0] = ~(c.r[4].d[0] | 0ull);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 24152u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00156410; } }
L_001562E0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 822u)));
    c.r[3].d[0] = c.r[5].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001563E0; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[4], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[4].d[0]; c.r[3].d[0] = ld8((c.r[21].w[0] + 754u));  if (t) { goto L_00156308; } }
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 2;
L_00156308:
    c.r[4].d[0] = c.r[5].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00156328; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];  if (t) { goto L_00156338; } }
L_00156328:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.budget -= 4;
L_00156338:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_001563E0; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_001563E0; } }
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[4], 0u + 2u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_00156368; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00156370; } }
    c.budget -= 1;
L_00156368:
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 2;
L_00156370:
    set32(c.r[4], 0u + 32u);
    st16((c.r[17].w[0] + 4u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], 0u + 8u);
    st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 20u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001563C0; } }
    c.r[3].d[0] = c.r[3].d[0] & 7ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_001563B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001563A8u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x001563A8u) [[unlikely]] return; }
L_001563A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001563C0; } }
L_001563B0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001563BCu); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x001563BCu) [[unlikely]] return; }
L_001563BC:
    c.budget -= 1;
L_001563C0:
    c.r[3].d[0] = ld16((c.r[28].w[0] - 24152u));
    c.r[5].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[4], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[28].w[0] - 24152u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 8;
L_001563E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; c.r[3].d[0] = c.r[18].d[0] & 255ull;  if (t) { goto L_00156410; } }
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    c.r[3].d[0] = ld16((c.r[28].w[0] - 24152u));
    c.r[4].d[0] = ~(c.r[4].d[0] | 0ull);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    st16((c.r[28].w[0] - 24152u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 8;
L_00156410:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].d[0] = c.r[20].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[16], c.r[16].w[0] + 16u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00156160u | kUnwind; return; } goto L_00156160; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[21], c.r[21].w[0] + 8704u);
    c.r[3].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[22], c.r[22].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00156150u | kUnwind; return; } goto L_00156150; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[23].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00156440:
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
L_00156470:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 50u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001569D0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 322u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_001569D0; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    st32((c.r[1].w[0] + 19452u), 0u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], 0u + 2u);
    st32((c.r[1].w[0] + 19456u), 0u);
    set32(c.r[20], c.r[4].w[0] + 304u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[21].d[0] = 0ull + 0ull;
    st32((c.r[1].w[0] + 19408u), c.r[3].w[0]);
    c.r[19].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19444u), c.r[3].w[0]);
    set32(c.r[18], c.r[18].w[0] - 9904u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.r[3].w[0]);
    set32(c.r[17], c.r[17].w[0] - 27856u);
    c.budget -= 19;
L_00156500:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00430000u);  if (t) { goto L_00156748; } }
    c.r[4].d[0] = ld16((c.r[28].w[0] - 24152u));
    c.r[3].d[0] = ld8((c.r[1].w[0] + 12793u));
    set32(c.r[3], c.r[3].w[0] << (c.r[19].w[0] & 31u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00156748; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[16], 0u + 28u);  if (t) { goto L_00156538; } }
    set32(c.r[16], 0u + 7u);
    c.budget -= 1;
L_00156538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156540u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00156540u) [[unlikely]] return; }
L_00156540:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = c.r[21].sd[0] < 0; set32(c.r[3], c.r[21].w[0] >> 1);  if (t) { goto L_0015655C; } }
    c.f[0] = c.r[21].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00156574; } }
L_0015655C:
    c.r[2].d[0] = c.r[21].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_00156574:
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2FA0000u);
    c.f[0] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156594u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00156594u) [[unlikely]] return; }
L_00156594:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[3].w[0] + 5600u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19460u), c.r[3].w[0]);
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    st32((c.r[1].w[0] + 19408u), c.r[2].w[0]);
    set32(c.r[5], 0u + 13u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001565C4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x001565C4u) [[unlikely]] return; }
L_001565C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001565CCu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x001565CCu) [[unlikely]] return; }
L_001565CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x439E0000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = c.r[21].sd[0] < 0; set32(c.r[3], c.r[21].w[0] >> 1);  if (t) { goto L_001565E8; } }
    c.f[0] = c.r[21].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00156600; } }
L_001565E8:
    c.r[2].d[0] = c.r[21].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_00156600:
    c.f[20] = fp::mul(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3020000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2FA0000u);
    c.f[0] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156620u); c.f[12] = fp::add(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00156620u) [[unlikely]] return; }
L_00156620:
    set32(c.r[2], c.r[16].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[4], c.r[2].w[0] - c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] - 1840u);
    st32((c.r[1].w[0] + 19408u), c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] << 4);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], 0u + 7u);
    c.budget -= 13;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; st32((c.r[1].w[0] + 19460u), c.r[3].w[0]);  if (t) { goto L_00156660; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 19408u), 0u);  if (t) { goto L_001566C8; } }
L_00156660:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_00156678; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00156690; } }
L_00156678:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_00156690:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41980000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F80000u);
    c.f[15] = c.r[3].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], 0u + 1u);
    c.f[1] = fp::mul(c.f[15], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x430D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42980000u);
    set32(c.r[5], c.r[5].w[0] + 19408u);
    c.f[12] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001566C8u); c.f[13] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x001566C8u) [[unlikely]] return; }
L_001566C8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    set32(c.r[5], 0u + 11u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001566DCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x001566DCu) [[unlikely]] return; }
L_001566DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001566E4u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x001566E4u) [[unlikely]] return; }
L_001566E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC33A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2FA0000u);
    c.f[0] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156700u); c.f[12] = fp::add(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00156700u) [[unlikely]] return; }
L_00156700:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[12] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015671Cu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0015671Cu) [[unlikely]] return; }
L_0015671C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19460u), c.r[18].w[0]);
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    st32((c.r[1].w[0] + 19408u), c.r[2].w[0]);
    set32(c.r[5], 0u + 11u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156744u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00156744u) [[unlikely]] return; }
L_00156744:
    c.budget -= 1;
L_00156748:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1584u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00430000u);  if (t) { goto L_001569B0; } }
    c.r[4].d[0] = ld16((c.r[28].w[0] - 24152u));
    c.r[3].d[0] = ld8((c.r[1].w[0] + 12792u));
    set32(c.r[3], c.r[3].w[0] << (c.r[19].w[0] & 31u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001569B0; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 10u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001569B0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 11u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[16], 0u + 28u);  if (t) { goto L_0015678C; } }
    set32(c.r[16], 0u + 7u);
    c.budget -= 1;
L_0015678C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156794u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00156794u) [[unlikely]] return; }
L_00156794:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = c.r[21].sd[0] < 0; set32(c.r[3], c.r[21].w[0] >> 1);  if (t) { goto L_001567B0; } }
    c.f[0] = c.r[21].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001567C8; } }
L_001567B0:
    c.r[2].d[0] = c.r[21].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_001567C8:
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3170000u);
    c.f[0] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001567E8u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001567E8u) [[unlikely]] return; }
L_001567E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[3].w[0] + 5600u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19460u), c.r[3].w[0]);
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    st32((c.r[1].w[0] + 19408u), c.r[2].w[0]);
    set32(c.r[5], 0u + 13u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156818u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00156818u) [[unlikely]] return; }
L_00156818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156820u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00156820u) [[unlikely]] return; }
L_00156820:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x439E0000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = c.r[21].sd[0] < 0; set32(c.r[3], c.r[21].w[0] >> 1);  if (t) { goto L_0015683C; } }
    c.f[0] = c.r[21].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00156854; } }
L_0015683C:
    c.r[2].d[0] = c.r[21].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_00156854:
    c.f[20] = fp::mul(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3020000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3170000u);
    c.f[0] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156874u); c.f[12] = fp::add(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00156874u) [[unlikely]] return; }
L_00156874:
    set32(c.r[2], c.r[16].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[4], c.r[2].w[0] - c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] - 1840u);
    st32((c.r[1].w[0] + 19408u), c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] << 4);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], 0u + 7u);
    c.budget -= 13;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; st32((c.r[1].w[0] + 19460u), c.r[3].w[0]);  if (t) { goto L_001568B8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 19408u), 0u);  if (t) { goto L_00156920; } }
    c.budget -= 1;
L_001568B8:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 9u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_001568D0; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001568E8; } }
L_001568D0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_001568E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41980000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F80000u);
    c.f[15] = c.r[3].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], 0u + 1u);
    c.f[1] = fp::mul(c.f[15], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x430D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42980000u);
    set32(c.r[5], c.r[5].w[0] + 19408u);
    c.f[12] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156920u); c.f[13] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x00156920u) [[unlikely]] return; }
L_00156920:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    set32(c.r[5], 0u + 11u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156934u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00156934u) [[unlikely]] return; }
L_00156934:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015693Cu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0015693Cu) [[unlikely]] return; }
L_0015693C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC33A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3170000u);
    c.f[0] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156958u); c.f[12] = fp::add(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00156958u) [[unlikely]] return; }
L_00156958:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[12] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156974u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00156974u) [[unlikely]] return; }
L_00156974:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19460u), c.r[18].w[0]);
    set32(c.r[2], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    st32((c.r[1].w[0] + 19408u), c.r[2].w[0]);
    set32(c.r[5], 0u + 11u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19416u), c.r[2].w[0]);
    set32(c.r[6], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001569B0u); st32((c.r[1].w[0] + 19412u), 0u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x001569B0u) [[unlikely]] return; }
L_001569B0:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[3].d[0] = c.r[21].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    set32(c.r[20], c.r[20].w[0] + 16u);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[18], c.r[18].w[0] + 240u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00156500u | kUnwind; return; } goto L_00156500; } }
    c.budget -= 1;
L_001569D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00156A00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00156A10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00156A20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156A34u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 214u, depth + 1u); else { c.pc = 0x00162790u; return; } if (c.pc != 0x00156A34u) [[unlikely]] return; }
L_00156A34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[10].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_00156B30; } }
    set32(c.r[9], c.r[16].w[0] + 304u);
    set32(c.r[10], c.r[10].w[0] - 27856u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 32u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 7;
L_00156A58:
    st8((c.r[9].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[7].d[0] = ld8((c.r[9].w[0]));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_00156A88; } }
    c.r[3].d[0] = ld8((c.r[10].w[0] + 811u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[7].w[0] + 1u);  if (t) { goto L_00156B10; } }
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[9].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00156B10; } }
    c.budget -= 1;
L_00156A88:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00156AF0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[9].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].d[0] & 31ull;
    st8((c.r[9].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 2u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00156AD8; } }
    st8((c.r[9].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 3u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00156AD8; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[9].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00156AD8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 2u)));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00156AF8; } }
    c.budget -= 1;
L_00156AF0:
    st8((c.r[9].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 2;
L_00156AF8:
    c.r[3].d[0] = ld8((c.r[10].w[0] + 811u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00156B10; } }
    st8((c.r[9].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_00156B10:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[10], c.r[10].w[0] + 8704u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00156A58u | kUnwind; return; } goto L_00156A58; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00156B30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00156B40:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 50u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00156D58; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 322u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00156D58; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 76u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x41C80000u);  if (t) { goto L_00156B98; } }
    c.f[2] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x429E0000u);  if (t) { goto L_00156BA0; } }
L_00156B98:
    c.f[2] = 0u;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x429E0000u);
    c.budget -= 2;
L_00156BA0:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[17], c.r[4].w[0] + 304u);
    set32(c.r[18], c.r[18].w[0] - 27856u);
    c.r[16].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42D20000u);
    c.f[0] = c.r[3].w[0];
    c.f[21] = fp::add(c.f[1], c.f[2]);
    c.f[20] = fp::add(c.f[0], c.f[2]);
    c.budget -= 10;
L_00156BC8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19456u), 0u);
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[1].w[0] + 19408u), c.r[3].w[0]);
    c.f[0] = 0u;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st32((c.r[1].w[0] + 19444u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 797u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_00156C10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 19452u), c.f[0]);  if (t) { goto L_00156C20; } }
    c.budget -= 1;
L_00156C10:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.r[3].w[0]);
    c.budget -= 4;
L_00156C20:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00156CB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156C34u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00156C34u) [[unlikely]] return; }
L_00156C34:
    c.f[1] = c.r[16].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3200000u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[2] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[12] = fp::add(c.f[0], c.f[1]);
    c.f[14] = 0u;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156C64u); c.f[13] = c.f[21];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00156C64u) [[unlikely]] return; }
L_00156C64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 5600u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    set32(c.r[5], 0u + 13u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156C88u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00156C88u) [[unlikely]] return; }
L_00156C88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 5360u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    set32(c.r[5], 0u + 11u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156CACu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00156CACu) [[unlikely]] return; }
L_00156CAC:
    c.budget -= 1;
L_00156CB0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 797u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00156D40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156CC4u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00156CC4u) [[unlikely]] return; }
L_00156CC4:
    c.f[1] = c.r[16].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3200000u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[2] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[12] = fp::add(c.f[0], c.f[1]);
    c.f[14] = 0u;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156CF4u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00156CF4u) [[unlikely]] return; }
L_00156CF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 5600u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    set32(c.r[5], 0u + 13u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156D18u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00156D18u) [[unlikely]] return; }
L_00156D18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 5120u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    set32(c.r[5], 0u + 11u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156D3Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00156D3Cu) [[unlikely]] return; }
L_00156D3C:
    c.budget -= 1;
L_00156D40:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 8704u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00156BC8u | kUnwind; return; } goto L_00156BC8; } }
    c.budget -= 1;
L_00156D58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00156D80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 39u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00156E08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156DA8u);  if (depth < kMaxDepth) unit_0018(c, 214u, depth + 1u); else { c.pc = 0x00162790u; return; } if (c.pc != 0x00156DA8u) [[unlikely]] return; }
L_00156DA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00156E08; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[16].w[0] + 304u);  if (t) { goto L_00156DC8; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[28].w[0] - 24172u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_00156DC8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00830000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 27856u);
    set32(c.r[6], c.r[6].w[0] + 29024u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156DE4u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0015(c, 267u, depth + 1u); else { c.pc = 0x00156E20u; return; } if (c.pc != 0x00156DE4u) [[unlikely]] return; }
L_00156DE4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[7], c.r[17].w[0] + 16u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 19152u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156E00u); set32(c.r[6], c.r[6].w[0] + 29408u);  if (depth < kMaxDepth) unit_0015(c, 267u, depth + 1u); else { c.pc = 0x00156E20u; return; } if (c.pc != 0x00156E00u) [[unlikely]] return; }
L_00156E00:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00156E08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00156E20:
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[8], c.r[28].w[0] - 32736u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 761u)));
    set32(c.r[6], c.r[8].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[6].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 760u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    st16((c.r[7].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[7].w[0]));
    c.budget -= 30;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00157300; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] - 27856u);
    set32(c.r[22], c.r[29].w[0] + 168u);
    set32(c.r[30], c.r[29].w[0] + 164u);
    c.budget -= 6;
L_00156EB0:
    c.r[4].d[0] = ld16((c.r[19].w[0] + 860u));
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[16].w[0] & 31u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001572F0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[23].w[0] + 144u);  if (t) { goto L_00157150; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156EE0u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x00156EE0u) [[unlikely]] return; }
L_00156EE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156EE8u); set32(c.r[4], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x00156EE8u) [[unlikely]] return; }
L_00156EE8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156EF8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x00156EF8u) [[unlikely]] return; }
L_00156EF8:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156F04u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x00156F04u) [[unlikely]] return; }
L_00156F04:
    c.f[13] = ld32((c.r[22].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156F10u); c.f[12] = ld32((c.r[29].w[0] + 160u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x00156F10u) [[unlikely]] return; }
L_00156F10:
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    c.r[20].d[0] = c.r[2].d[0] << 48;
    c.f[1] = ld32((c.r[22].w[0]));
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156F2Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x00156F2Cu) [[unlikely]] return; }
L_00156F2C:
    c.f[12] = ld32((c.r[30].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156F38u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x00156F38u) [[unlikely]] return; }
L_00156F38:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 10u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    set32(c.r[3], 0u + 3u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (t) { goto L_001570F0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00157058; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00156FF8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00156F70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001572F0; } }
L_00156F70:
    c.r[3].d[0] = c.r[4].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[3].sd[0] < 5632ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 16384ll ? 1ull : 0ull;  if (t) { goto L_00156F98; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00156F98; } }
    c.r[2].d[0] = ld16((c.r[18].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00156F98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156FA0u);  if (depth < kMaxDepth) unit_0009(c, 159u, depth + 1u); else { c.pc = 0x001260C0u; return; } if (c.pc != 0x00156FA0u) [[unlikely]] return; }
L_00156FA0:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < 5632ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001572F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156FBCu);  if (depth < kMaxDepth) unit_0009(c, 159u, depth + 1u); else { c.pc = 0x001260C0u; return; } if (c.pc != 0x00156FBCu) [[unlikely]] return; }
L_00156FBC:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < 11264ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[20].d[0] << 48;  if (t) { goto L_001572F0; } }
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + 16384u);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_001572F0; } }
    c.r[3].d[0] = ld16((c.r[18].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001572F0; } }
L_00156FF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157000u);  if (depth < kMaxDepth) unit_0009(c, 159u, depth + 1u); else { c.pc = 0x001260C0u; return; } if (c.pc != 0x00157000u) [[unlikely]] return; }
L_00157000:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < 5632ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001572F0; } }
    c.r[20].d[0] = c.r[20].d[0] << 48;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    set32(c.r[2], c.r[20].w[0] - 16384u);
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015702Cu); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 159u, depth + 1u); else { c.pc = 0x001260C0u; return; } if (c.pc != 0x0015702Cu) [[unlikely]] return; }
L_0015702C:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < 5120ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001572F0; } }
L_00157040:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] < 0;  if (t) { goto L_001572F0; } }
    c.r[3].d[0] = ld16((c.r[18].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001572F0; } }
L_00157058:
    c.r[2].d[0] = c.r[4].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < -5631ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[2].sd[0] < -16383ll ? 1ull : 0ull;  if (t) { goto L_00157080; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00157080; } }
    c.r[2].d[0] = ld16((c.r[18].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00157080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157088u);  if (depth < kMaxDepth) unit_0009(c, 159u, depth + 1u); else { c.pc = 0x001260C0u; return; } if (c.pc != 0x00157088u) [[unlikely]] return; }
L_00157088:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < 5632ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001572F0; } }
    c.r[20].d[0] = c.r[20].d[0] << 48;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    set32(c.r[2], c.r[20].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001570B8u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 159u, depth + 1u); else { c.pc = 0x001260C0u; return; } if (c.pc != 0x001570B8u) [[unlikely]] return; }
L_001570B8:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < 11264ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[20].w[0] + 16384u);  if (t) { goto L_001572F0; } }
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_001572F0; } }
    c.r[3].d[0] = ld16((c.r[18].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001572F0; } }
    c.budget -= 1;
L_001570F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001570F8u);  if (depth < kMaxDepth) unit_0009(c, 159u, depth + 1u); else { c.pc = 0x001260C0u; return; } if (c.pc != 0x001570F8u) [[unlikely]] return; }
L_001570F8:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < 5632ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001572F0; } }
    c.r[20].d[0] = c.r[20].d[0] << 48;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    set32(c.r[2], c.r[20].w[0] + 16384u);
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157124u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 159u, depth + 1u); else { c.pc = 0x001260C0u; return; } if (c.pc != 0x00157124u) [[unlikely]] return; }
L_00157124:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < 5120ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001572F0; } }
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] >= 0;  if (t) { goto L_001572F0; } }
    c.r[3].d[0] = ld16((c.r[18].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001572F0; } }
L_00157150:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157160u); set32(c.r[6], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00157160u) [[unlikely]] return; }
L_00157160:
    c.f[13] = ld32((c.r[22].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015716Cu); c.f[12] = ld32((c.r[29].w[0] + 160u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0015716Cu) [[unlikely]] return; }
L_0015716C:
    set32(c.r[3], ld32((c.r[19].w[0] + 1252u)));
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    c.f[1] = ld32((c.r[22].w[0]));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.r[20].d[0] = c.r[2].d[0] << 48;
    c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157190u); c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x00157190u) [[unlikely]] return; }
L_00157190:
    c.f[12] = ld32((c.r[30].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015719Cu); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0015719Cu) [[unlikely]] return; }
L_0015719C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 10u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_001572B0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00157260; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00157218; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001571D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001572F0; } }
L_001571D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001571D8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 159u, depth + 1u); else { c.pc = 0x001260C0u; return; } if (c.pc != 0x001571D8u) [[unlikely]] return; }
L_001571D8:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < 11264ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[20].d[0] << 48;  if (t) { goto L_001572F0; } }
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + 16384u);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_001572F0; } }
    c.r[3].d[0] = ld16((c.r[18].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001572F0; } }
    c.budget -= 1;
L_00157218:
    c.r[20].d[0] = c.r[20].d[0] << 48;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    set32(c.r[2], c.r[20].w[0] - 16384u);
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157230u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 159u, depth + 1u); else { c.pc = 0x001260C0u; return; } if (c.pc != 0x00157230u) [[unlikely]] return; }
L_00157230:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < 5120ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001572F0; } }
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] < 0;  if (t) { goto L_001572F0; } }
    c.r[3].d[0] = ld16((c.r[18].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001572F0; } }
    c.budget -= 1;
L_00157260:
    c.r[20].d[0] = c.r[20].d[0] << 48;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    set32(c.r[2], c.r[20].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015727Cu); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 159u, depth + 1u); else { c.pc = 0x001260C0u; return; } if (c.pc != 0x0015727Cu) [[unlikely]] return; }
L_0015727C:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < 11264ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[20].w[0] + 16384u);  if (t) { goto L_001572F0; } }
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_001572F0; } }
    c.r[3].d[0] = ld16((c.r[18].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001572F0; } }
L_001572B0:
    c.r[20].d[0] = c.r[20].d[0] << 48;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    set32(c.r[2], c.r[20].w[0] + 16384u);
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001572C8u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 159u, depth + 1u); else { c.pc = 0x001260C0u; return; } if (c.pc != 0x001572C8u) [[unlikely]] return; }
L_001572C8:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < 5120ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001572F0; } }
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] >= 0;  if (t) { goto L_001572F0; } }
    c.r[3].d[0] = ld16((c.r[18].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001572F0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00156EB0u | kUnwind; return; } goto L_00156EB0; } }
L_00157300:
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 184u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 300u);  if (t) { goto L_00157318; } }
    st16((c.r[4].w[0] + 34u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00157318:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 6u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00157430; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00157430; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 34u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00157430; } }
    c.r[5].d[0] = ld16((c.r[18].w[0]));
    c.r[3].d[0] = c.r[5].d[0] & 63ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);  if (t) { goto L_00157430; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8927u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00157430; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.r[3].d[0] = ld8((c.r[28].w[0] - 24172u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[3], c.r[4].w[0] + c.r[6].w[0]);  if (t) { goto L_00157430; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00157420; } }
    c.r[3].d[0] = c.r[5].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00157398; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157390u); set32(c.r[5], 0u + 18u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x00157390u) [[unlikely]] return; }
L_00157390:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00157410; } }
L_00157398:
    c.r[3].d[0] = c.r[5].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001573B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001573ACu); set32(c.r[5], 0u + 19u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x001573ACu) [[unlikely]] return; }
L_001573AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00157410; } }
    c.budget -= 1;
L_001573B8:
    c.r[3].d[0] = c.r[5].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001573D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001573CCu); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x001573CCu) [[unlikely]] return; }
L_001573CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00157410; } }
    c.budget -= 1;
L_001573D8:
    c.r[3].d[0] = c.r[5].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001573F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001573ECu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x001573ECu) [[unlikely]] return; }
L_001573EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00157410; } }
    c.budget -= 1;
L_001573F8:
    c.r[3].d[0] = c.r[5].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00157410; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015740Cu); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x0015740Cu) [[unlikely]] return; }
L_0015740C:
    c.budget -= 1;
L_00157410:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 24172u));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    st8((c.r[28].w[0] - 24172u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00157420:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[4], 0u + 300u);
    st16((c.r[3].w[0] + 34u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 4;
L_00157430:
    c.r[3].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00157440; } }
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00157440:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[6], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[6].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_001574E0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_001574A0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00157468; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00157568; } }
L_00157468:
    c.r[3].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00157498; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[18].w[0] + 8u), 0u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 10u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157490u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 169u, depth + 1u); else { c.pc = 0x0023A430u; return; } if (c.pc != 0x00157490u) [[unlikely]] return; }
L_00157490:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00157568; } }
L_00157498:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00157568; } }
L_001574A0:
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.f[2] = ld32((c.r[18].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D880000u);
    c.r[4].d[0] = c.r[3].d[0] | 34953ull;
    c.f[1] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[18].w[0] + 8u), c.f[1]);  if (t) { goto L_00157568; } }
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[2], 0u + 90u);
    st32((c.r[18].w[0] + 8u), c.f[0]);
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 4;
L_001574E0:
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00157500; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 3;
L_00157500:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00157520; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] + 512u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00157530; } }
    c.budget -= 1;
L_00157520:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] + 1024u);
    st16((c.r[18].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00157530:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157538u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 6u)));  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x00157538u) [[unlikely]] return; }
L_00157538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157540u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x00157540u) [[unlikely]] return; }
L_00157540:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[4].d[0] | 52429ull;
    c.f[2] = c.r[4].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 8u), c.f[0]);
    c.budget -= 10;
L_00157568:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 803u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00157588; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00157590; } }
    c.budget -= 1;
L_00157588:
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00157590:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_001575C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 50u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00157790; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 322u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00157790; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    c.f[20] = 0u;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00157628; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);  if (t) { goto L_00157628; } }
    c.f[20] = c.r[2].w[0];
    c.budget -= 2;
L_00157628:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[4], c.r[4].w[0] - 16848u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015763Cu); set32(c.r[6], 0u + 11u);  if (depth < kMaxDepth) unit_0076(c, 4u, depth + 1u); else { c.pc = 0x002D8040u; return; } if (c.pc != 0x0015763Cu) [[unlikely]] return; }
L_0015763C:
    set32(c.r[18], c.r[19].w[0] + 304u);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_00157648:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00157768; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015765Cu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0015765Cu) [[unlikely]] return; }
L_0015765C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] + 13488u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157678u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x00157678u) [[unlikely]] return; }
L_00157678:
    c.f[12] = 0u;
    c.f[13] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157688u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00157688u) [[unlikely]] return; }
L_00157688:
    c.f[12] = ld32((c.r[18].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015769Cu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0015769Cu) [[unlikely]] return; }
L_0015769C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = 0ull | 32768ull;  if (t) { goto L_001576B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001576B4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001576B4u) [[unlikely]] return; }
L_001576B4:
    c.budget -= 1;
L_001576B8:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], c.r[5].w[0] + 13472u);
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[4], c.r[4].w[0] - 1840u);
    c.f[0] = 0u;
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    st32((c.r[1].w[0] + 19408u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[5].w[0] << 4);
    st32((c.r[1].w[0] + 19444u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[3].w[0] << 4);
    st32((c.r[1].w[0] + 19456u), 0u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 2u));
    c.budget -= 26;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_00157738; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    st32((c.r[1].w[0] + 19452u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 19448u), c.r[2].w[0]);  if (t) { goto L_00157750; } }
    c.budget -= 1;
L_00157738:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.r[2].w[0]);
    c.budget -= 6;
L_00157750:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    set32(c.r[5], 0u + 11u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157764u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00157764u) [[unlikely]] return; }
L_00157764:
    c.budget -= 1;
L_00157768:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00157648u | kUnwind; return; } goto L_00157648; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 16832u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157790u); set32(c.r[6], 0u + 11u);  if (depth < kMaxDepth) unit_0076(c, 4u, depth + 1u); else { c.pc = 0x002D8040u; return; } if (c.pc != 0x00157790u) [[unlikely]] return; }
L_00157790:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001577B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 39u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00157BB0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00157BB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001577ECu);  if (depth < kMaxDepth) unit_0018(c, 214u, depth + 1u); else { c.pc = 0x00162790u; return; } if (c.pc != 0x001577ECu) [[unlikely]] return; }
L_001577EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_00157BB0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].d[0] = ld8((c.r[1].w[0] - 27341u));
    set32(c.r[14], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 12u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[14].d[0]; set32(c.r[24], c.r[16].w[0] + 304u);  if (t) { goto L_00157BB0; } }
    c.r[15].d[0] = 0ull + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3D080000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F940000u);
    c.r[17].d[0] = c.r[6].d[0] | 34953ull;
    c.r[11].d[0] = c.r[3].d[0] | 31457ull;
    c.f[2] = c.r[17].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FA80000u);
    c.r[25].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.r[10].d[0] = c.r[3].d[0] | 62915ull;
    c.r[17].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[17].d[0] = c.r[17].d[0] | 52429ull;
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.f[1] = c.r[25].w[0];
    c.r[12].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[17].w[0];
    set32(c.r[8], c.r[8].w[0] - 19152u);
    set32(c.r[9], c.r[9].w[0] - 27856u);
    set32(c.r[7], 0u + 7u);
    set32(c.r[13], 0u + 1u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[4], 0u + 16u);
    set32(c.r[3], 0u + 120u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 24;
L_00157870:
    c.r[17].d[0] = ld16((c.r[24].w[0]));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[13].d[0];  if (t) { goto L_001578D0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00157890; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00157960; } }
    c.budget -= 1;
L_00157890:
    set32(c.r[17], c.r[17].w[0] + 1u);
    st16((c.r[24].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    st16((c.r[24].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st16((c.r[24].w[0] + 2u), static_cast<std::uint16_t>(0u));
    st16((c.r[24].w[0] + 10u), static_cast<std::uint16_t>(0u));
    st16((c.r[24].w[0] + 12u), static_cast<std::uint16_t>(0u));
    st16((c.r[24].w[0] + 8u), static_cast<std::uint16_t>(0u));
    st32((c.r[24].w[0] + 24u), c.r[12].w[0]);
    st32((c.r[24].w[0] + 28u), c.r[11].w[0]);
    c.budget -= 11;
    { const bool t = c.r[15].d[0] != 0ull; st32((c.r[24].w[0] + 32u), c.r[10].w[0]);  if (t) { goto L_001578C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[24].w[0] + 20u), c.r[9].w[0]);  if (t) { goto L_001578D0; } }
    c.budget -= 1;
L_001578C8:
    st32((c.r[24].w[0] + 20u), c.r[8].w[0]);
    c.budget -= 2;
L_001578D0:
    set32(c.r[18], ld32((c.r[24].w[0] + 20u)));
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 785u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[14].d[0];  if (t) { goto L_00157928; } }
    st16((c.r[24].w[0] + 2u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st16((c.r[24].w[0] + 6u), static_cast<std::uint16_t>(0u));
    set32(c.r[25], ld32((c.r[24].w[0] + 20u)));
    set32(c.r[18], ld32((c.r[28].w[0] - 23788u)));
    c.r[17].d[0] = ld8((c.r[25].w[0] + 515u));
    c.r[18].d[0] = ld8((c.r[18].w[0] + 186u));
    set32(c.r[17], c.r[13].w[0] << (c.r[17].w[0] & 31u));
    c.r[17].d[0] = c.r[18].d[0] & c.r[17].d[0];
    c.budget -= 8;
L_00157900:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00157960; } }
    st16((c.r[24].w[0] + 10u), static_cast<std::uint16_t>(0u));
    st16((c.r[24].w[0] + 12u), static_cast<std::uint16_t>(0u));
    st32((c.r[24].w[0] + 16u), 0u);
    st16((c.r[24].w[0] + 8u), static_cast<std::uint16_t>(0u));
    st16((c.r[24].w[0] + 2u), static_cast<std::uint16_t>(0u));
    st16((c.r[24].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[25].w[0] + 785u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00157960; } }
L_00157928:
    c.r[17].d[0] = ld16((c.r[24].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[7].d[0];  if (t) { goto L_00157960; } }
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    c.r[17].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_00157960; } }
    st16((c.r[24].w[0] + 10u), static_cast<std::uint16_t>(0u));
    st16((c.r[24].w[0] + 12u), static_cast<std::uint16_t>(0u));
    st32((c.r[24].w[0] + 16u), 0u);
    st16((c.r[24].w[0] + 8u), static_cast<std::uint16_t>(0u));
    st16((c.r[24].w[0] + 2u), static_cast<std::uint16_t>(0u));
    st16((c.r[24].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.budget -= 7;
L_00157960:
    set32(c.r[17], ld32((c.r[24].w[0] + 20u)));
    set32(c.r[18], ld32((c.r[28].w[0] - 23788u)));
    c.r[17].d[0] = ld8((c.r[17].w[0] + 515u));
    c.r[18].d[0] = ld8((c.r[18].w[0] + 186u));
    set32(c.r[17], c.r[13].w[0] << (c.r[17].w[0] & 31u));
    c.r[17].d[0] = c.r[18].d[0] & c.r[17].d[0];
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001579A8; } }
    st16((c.r[24].w[0] + 10u), static_cast<std::uint16_t>(0u));
    st16((c.r[24].w[0] + 12u), static_cast<std::uint16_t>(0u));
    st32((c.r[24].w[0] + 16u), 0u);
    st16((c.r[24].w[0] + 8u), static_cast<std::uint16_t>(0u));
    st16((c.r[24].w[0] + 2u), static_cast<std::uint16_t>(0u));
    st16((c.r[24].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[17].d[0] = ld16((c.r[28].w[0] - 24152u));
    c.r[17].d[0] = c.r[17].d[0] & 61423ull;
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 24152u), static_cast<std::uint16_t>(c.r[17].w[0]));  if (t) { goto L_00157B98; } }
L_001579A8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_00157B98; } }
    c.r[25].d[0] = ld16((c.r[24].w[0] + 10u));
    c.budget -= 3;
    { const bool t = c.r[25].d[0] == c.r[6].d[0];  if (t) { goto L_00157B30; } }
    c.budget -= 2;
    { const bool t = c.r[25].d[0] == c.r[14].d[0];  if (t) { goto L_00157A70; } }
    c.budget -= 2;
    { const bool t = c.r[25].d[0] == c.r[13].d[0];  if (t) { goto L_00157A28; } }
    c.budget -= 2;
    { const bool t = c.r[25].d[0] == 0ull;  if (t) { goto L_001579E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00157B98; } }
    c.budget -= 1;
L_001579E0:
    c.r[18].d[0] = ld16((c.r[24].w[0] + 2u));
    c.r[17].d[0] = ld16((c.r[24].w[0] + 4u));
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[17].d[0]; set32(c.r[18], c.r[25].w[0] + 1u);  if (t) { goto L_00157B98; } }
    c.r[17].d[0] = c.r[15].d[0] ^ 1ull;
    st16((c.r[24].w[0] + 10u), static_cast<std::uint16_t>(c.r[18].w[0]));
    set32(c.r[17], c.r[17].w[0] << 3);
    c.r[18].d[0] = ld16((c.r[24].w[0] + 2u));
    set32(c.r[17], c.r[4].w[0] << (c.r[17].w[0] & 31u));
    c.r[25].d[0] = c.r[17].d[0] & 65535ull;
    st16((c.r[24].w[0] + 4u), static_cast<std::uint16_t>(c.r[18].w[0]));
    st16((c.r[24].w[0] + 12u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[24].w[0] + 16u), 0u);
    st16((c.r[24].w[0] + 8u), static_cast<std::uint16_t>(c.r[13].w[0]));
    c.r[17].d[0] = ld16((c.r[28].w[0] - 24152u));
    c.r[17].d[0] = c.r[17].d[0] | c.r[25].d[0];
    st16((c.r[28].w[0] - 24152u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.budget -= 14;
L_00157A28:
    c.f[0] = ld32((c.r[24].w[0] + 16u));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[24].w[0] + 16u), c.f[0]);
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0] + 12u)));
    set32(c.r[17], c.r[17].w[0] - 1u);
    st16((c.r[24].w[0] + 12u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.r[17].d[0] = c.r[17].d[0] << 48;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    c.budget -= 10;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_00157B98; } }
    c.r[17].d[0] = ld16((c.r[24].w[0] + 10u));
    set32(c.r[17], c.r[17].w[0] + 1u);
    st16((c.r[24].w[0] + 10u), static_cast<std::uint16_t>(c.r[17].w[0]));
    st32((c.r[24].w[0] + 16u), c.r[12].w[0]);
    st16((c.r[24].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[17].d[0] = ld16((c.r[24].w[0] + 2u));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[24].w[0] + 4u), static_cast<std::uint16_t>(c.r[17].w[0]));  if (t) { goto L_00157B98; } }
L_00157A70:
    c.r[25].d[0] = ld16((c.r[24].w[0] + 2u));
    c.r[17].d[0] = ld16((c.r[24].w[0] + 4u));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[25].d[0];  if (t) { goto L_00157A88; } }
    st16((c.r[24].w[0] + 4u), static_cast<std::uint16_t>(c.r[25].w[0]));
    st16((c.r[24].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00157A88:
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0] + 12u)));
    set32(c.r[17], c.r[17].w[0] - 1u);
    st16((c.r[24].w[0] + 12u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.r[17].d[0] = c.r[17].d[0] << 48;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_00157AB8; } }
    c.r[17].d[0] = ld16((c.r[24].w[0] + 10u));
    set32(c.r[17], c.r[17].w[0] + 1u);
    st16((c.r[24].w[0] + 10u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[24].w[0] + 12u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_00157B98; } }
L_00157AB8:
    c.r[17].d[0] = ld16((c.r[24].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[7].d[0];  if (t) { goto L_00157B98; } }
    c.f[0] = ld32((c.r[24].w[0] + 24u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[24].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[24].w[0] + 28u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[24].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[24].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[24].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[24].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00157B00; } }
    st32((c.r[24].w[0] + 24u), c.r[12].w[0]);
    c.budget -= 2;
L_00157B00:
    c.f[0] = ld32((c.r[24].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00157B18; } }
    st32((c.r[24].w[0] + 28u), c.r[12].w[0]);
    c.budget -= 2;
L_00157B18:
    c.f[0] = ld32((c.r[24].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00157B98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[24].w[0] + 32u), c.r[12].w[0]);  if (t) { goto L_00157B98; } }
L_00157B30:
    c.f[0] = ld32((c.r[24].w[0] + 16u));
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    st32((c.r[24].w[0] + 16u), c.f[0]);
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0] + 12u)));
    set32(c.r[17], c.r[17].w[0] - 1u);
    st16((c.r[24].w[0] + 12u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.r[17].d[0] = c.r[17].d[0] << 48;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    c.budget -= 10;
    { const bool t = c.r[17].d[0] != 0ull; c.r[17].d[0] = c.r[15].d[0] ^ 1ull;  if (t) { goto L_00157B98; } }
    st16((c.r[24].w[0] + 10u), static_cast<std::uint16_t>(0u));
    set32(c.r[17], c.r[17].w[0] << 3);
    st16((c.r[24].w[0] + 8u), static_cast<std::uint16_t>(0u));
    set32(c.r[25], c.r[4].w[0] << (c.r[17].w[0] & 31u));
    c.r[17].d[0] = ld16((c.r[28].w[0] - 24152u));
    c.r[25].d[0] = ~(c.r[25].d[0] | 0ull);
    c.r[25].d[0] = c.r[25].d[0] & 65535ull;
    c.r[17].d[0] = c.r[17].d[0] & c.r[25].d[0];
    st16((c.r[28].w[0] - 24152u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.r[17].d[0] = ld16((c.r[24].w[0] + 2u));
    c.r[25].d[0] = ld16((c.r[24].w[0] + 4u));
    c.budget -= 13;
    { const bool t = c.r[17].d[0] != c.r[25].d[0];  if (t) { goto L_00157B98; } }
    st16((c.r[24].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st16((c.r[24].w[0] + 2u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
L_00157B98:
    set32(c.r[15], c.r[15].w[0] + 1u);
    c.r[25].d[0] = c.r[15].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[25].d[0] != 0ull; set32(c.r[24], c.r[24].w[0] + 36u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00157870u | kUnwind; return; } goto L_00157870; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00157BB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00157BD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 50u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00157D88; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 322u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_00157D88; } }
    set32(c.r[4], 0u + 2u);
    st32((c.r[1].w[0] + 19456u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19408u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st32((c.r[1].w[0] + 19444u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[3].w[0] + 5600u);
    st32((c.r[1].w[0] + 19460u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 312u));
    c.budget -= 19;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_00157CE8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[4].d[0] = ld16((c.r[28].w[0] - 24152u));
    c.r[3].d[0] = ld8((c.r[1].w[0] + 12796u));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00157CE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157C70u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00157C70u) [[unlikely]] return; }
L_00157C70:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2FA0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157C8Cu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00157C8Cu) [[unlikely]] return; }
L_00157C8C:
    c.f[12] = ld32((c.r[16].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157CA0u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00157CA0u) [[unlikely]] return; }
L_00157CA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157CB4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00157CB4u) [[unlikely]] return; }
L_00157CB4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 9440u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157CC8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00157CC8u) [[unlikely]] return; }
L_00157CC8:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 4u));
    set32(c.r[3], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00157CE8; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157CE4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0015(c, 328u, depth + 1u); else { c.pc = 0x00157DA0u; return; } if (c.pc != 0x00157CE4u) [[unlikely]] return; }
L_00157CE4:
    c.budget -= 1;
L_00157CE8:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00430000u);  if (t) { goto L_00157D88; } }
    c.r[4].d[0] = ld16((c.r[28].w[0] - 24152u));
    c.r[3].d[0] = ld8((c.r[1].w[0] + 12796u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00157D88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157D10u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00157D10u) [[unlikely]] return; }
L_00157D10:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2FA0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157D2Cu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00157D2Cu) [[unlikely]] return; }
L_00157D2C:
    c.f[12] = ld32((c.r[16].w[0] + 52u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157D40u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00157D40u) [[unlikely]] return; }
L_00157D40:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157D54u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00157D54u) [[unlikely]] return; }
L_00157D54:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 9440u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157D68u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00157D68u) [[unlikely]] return; }
L_00157D68:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 40u));
    set32(c.r[3], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00157D88; } }
    set32(c.r[5], c.r[16].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157D84u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0015(c, 328u, depth + 1u); else { c.pc = 0x00157DA0u; return; } if (c.pc != 0x00157D84u) [[unlikely]] return; }
L_00157D84:
    c.budget -= 1;
L_00157D88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00157DA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00157DC8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43200000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00157DD0; } }
L_00157DC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3200000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 2;
L_00157DD0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 16848u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157DE4u); set32(c.r[6], 0u + 12u);  if (depth < kMaxDepth) unit_0076(c, 4u, depth + 1u); else { c.pc = 0x002D8040u; return; } if (c.pc != 0x00157DE4u) [[unlikely]] return; }
L_00157DE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157DECu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00157DECu) [[unlikely]] return; }
L_00157DEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2FA0000u);
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157E00u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00157E00u) [[unlikely]] return; }
L_00157E00:
    c.f[13] = ld32((c.r[16].w[0] + 24u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 16u));
    c.f[0] = fp::sub(c.f[13], c.f[14]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157E1Cu); c.f[12] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00157E1Cu) [[unlikely]] return; }
L_00157E1C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19456u), 0u);
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    st32((c.r[1].w[0] + 19408u), c.r[2].w[0]);
    set32(c.r[5], 0u + 12u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x422A0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[3].d[0] = c.r[2].d[0] | 43691ull;
    set32(c.r[6], 0u + 1u);
    st32((c.r[1].w[0] + 19444u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42A40000u);
    st32((c.r[1].w[0] + 19448u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    st32((c.r[1].w[0] + 19452u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 5600u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157E7Cu); st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00157E7Cu) [[unlikely]] return; }
L_00157E7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157E84u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00157E84u) [[unlikely]] return; }
L_00157E84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2FA0000u);
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157E98u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00157E98u) [[unlikely]] return; }
L_00157E98:
    c.f[13] = ld32((c.r[16].w[0] + 28u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 16u));
    c.f[0] = fp::sub(c.f[13], c.f[14]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157EB4u); c.f[12] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00157EB4u) [[unlikely]] return; }
L_00157EB4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 12u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157EC8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00157EC8u) [[unlikely]] return; }
L_00157EC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157ED0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00157ED0u) [[unlikely]] return; }
L_00157ED0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2FA0000u);
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157EE4u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00157EE4u) [[unlikely]] return; }
L_00157EE4:
    c.f[13] = ld32((c.r[16].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 16u));
    c.f[0] = fp::sub(c.f[13], c.f[14]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157F00u); c.f[12] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00157F00u) [[unlikely]] return; }
L_00157F00:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 12u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157F14u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00157F14u) [[unlikely]] return; }
L_00157F14:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 16832u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157F28u); set32(c.r[6], 0u + 12u);  if (depth < kMaxDepth) unit_0076(c, 4u, depth + 1u); else { c.pc = 0x002D8040u; return; } if (c.pc != 0x00157F28u) [[unlikely]] return; }
L_00157F28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00157F40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 39u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0016(c, 3u, depth); } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0016(c, 3u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157F7Cu);  if (depth < kMaxDepth) unit_0018(c, 214u, depth + 1u); else { c.pc = 0x00162790u; return; } if (c.pc != 0x00157F7Cu) [[unlikely]] return; }
L_00157F7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0016(c, 3u, depth); } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0016(c, 2u, depth); } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[16], c.r[18].w[0] + 356u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[17], c.r[18].w[0] + 352u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    st32((c.r[18].w[0] + 356u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 352u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157FB8u); set32(c.r[4], c.r[2].w[0] + 161u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00157FB8u) [[unlikely]] return; }
L_00157FB8:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(20ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00157FE0; } }
    c.f[1] = ld32((c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40BB0000u);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0]), c.f[0]);
    c.budget -= 7;
L_00157FE0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157FECu); set32(c.r[4], c.r[2].w[0] + 182u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00157FECu) [[unlikely]] return; }
L_00157FEC:
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(20ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0016(c, 2u, depth); } }
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40BB0000u);
    c.budget -= 2;
    [[clang::musttail]] return unit_0016(c, 1u, depth);
}

}
