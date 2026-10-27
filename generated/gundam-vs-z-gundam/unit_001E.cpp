#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_001E[4096] = {
    1, 0, 2, 0, 3, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0,
    7, 0, 8, 0, 9, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 19,
    0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 0,
    0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 37, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    39, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    48, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 52, 0, 0, 0, 0,
    0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0,
    0, 0, 0, 57, 0, 0, 0, 58, 0, 59, 0, 0, 0, 60, 0, 61, 0, 0, 0, 62, 0, 63, 0, 0, 0, 64, 0, 65, 0, 0, 0, 66,
    0, 67, 0, 0, 0, 68, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 75, 0, 0,
    0, 0, 76, 0, 0, 0, 77, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 84, 0,
    0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0,
    92, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0,
    96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0,
    100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0,
    104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 107, 0, 108, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0,
    0, 0, 111, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115,
    0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0,
    0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 122, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0,
    0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 138, 0, 0, 0, 0, 0, 139, 0,
    140, 0, 0, 0, 0, 0, 141, 0, 142, 0, 0, 0, 0, 0, 143, 0, 144, 0, 0, 0, 0, 0, 145, 0, 146, 0, 0, 0, 0, 0, 147, 0,
    148, 0, 0, 0, 0, 0, 149, 0, 150, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 155, 0, 0,
    0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162,
    0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0,
    0, 0, 0, 0, 0, 168, 0, 169, 0, 170, 0, 171, 0, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 175, 0, 176, 0, 0,
    0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 184, 0, 0, 0,
    0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193,
    0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0,
    0, 197, 0, 198, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205,
    0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0,
    208, 0, 0, 0, 0, 209, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 214, 0, 0, 0,
    0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0,
    0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    236, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0,
    248, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0,
    256, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0,
    0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 263, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0,
    0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0,
    280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0,
    0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 307, 0, 308, 0, 0, 0, 0, 309,
    0, 310, 0, 311, 0, 0, 0, 312, 0, 313, 0, 314, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 318, 0, 0, 319, 0, 0, 320,
    0, 0, 0, 0, 0, 321, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0,
    325, 0, 326, 0, 327, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_001E(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00178000;
    case 2u: goto L_00178008;
    case 3u: goto L_00178010;
    case 4u: goto L_00178018;
    case 5u: goto L_00178020;
    case 6u: goto L_00178078;
    case 7u: goto L_00178080;
    case 8u: goto L_00178088;
    case 9u: goto L_00178090;
    case 10u: goto L_00178098;
    case 11u: goto L_001780B0;
    case 12u: goto L_001780C0;
    case 13u: goto L_001780E4;
    case 14u: goto L_00178160;
    case 15u: goto L_001781A0;
    case 16u: goto L_001781C0;
    case 17u: goto L_001782DC;
    case 18u: goto L_001782EC;
    case 19u: goto L_001782FC;
    case 20u: goto L_0017830C;
    case 21u: goto L_001783C0;
    case 22u: goto L_001783D0;
    case 23u: goto L_001783E4;
    case 24u: goto L_001783F4;
    case 25u: goto L_001784B0;
    case 26u: goto L_00178520;
    case 27u: goto L_00178540;
    case 28u: goto L_0017863C;
    case 29u: goto L_001786D0;
    case 30u: goto L_00178770;
    case 31u: goto L_00178840;
    case 32u: goto L_00178958;
    case 33u: goto L_00178964;
    case 34u: goto L_00178988;
    case 35u: goto L_001789B8;
    case 36u: goto L_00178A28;
    case 37u: goto L_00178B10;
    case 38u: goto L_00178B18;
    case 39u: goto L_00178B80;
    case 40u: goto L_00178BA4;
    case 41u: goto L_00178C08;
    case 42u: goto L_00178C28;
    case 43u: goto L_00178C88;
    case 44u: goto L_00178CB0;
    case 45u: goto L_00178D88;
    case 46u: goto L_00178E40;
    case 47u: goto L_00178EF0;
    case 48u: goto L_00179080;
    case 49u: goto L_00179090;
    case 50u: goto L_001790A0;
    case 51u: goto L_001790E4;
    case 52u: goto L_001790EC;
    case 53u: goto L_0017910C;
    case 54u: goto L_00179138;
    case 55u: goto L_00179154;
    case 56u: goto L_00179178;
    case 57u: goto L_0017918C;
    case 58u: goto L_0017919C;
    case 59u: goto L_001791A4;
    case 60u: goto L_001791B4;
    case 61u: goto L_001791BC;
    case 62u: goto L_001791CC;
    case 63u: goto L_001791D4;
    case 64u: goto L_001791E4;
    case 65u: goto L_001791EC;
    case 66u: goto L_001791FC;
    case 67u: goto L_00179204;
    case 68u: goto L_00179214;
    case 69u: goto L_0017921C;
    case 70u: goto L_00179230;
    case 71u: goto L_00179240;
    case 72u: goto L_00179248;
    case 73u: goto L_0017925C;
    case 74u: goto L_0017926C;
    case 75u: goto L_00179274;
    case 76u: goto L_00179288;
    case 77u: goto L_00179298;
    case 78u: goto L_001792A0;
    case 79u: goto L_001792B4;
    case 80u: goto L_001792C4;
    case 81u: goto L_001792CC;
    case 82u: goto L_001792E0;
    case 83u: goto L_001792F0;
    case 84u: goto L_001792F8;
    case 85u: goto L_0017930C;
    case 86u: goto L_0017931C;
    case 87u: goto L_00179340;
    case 88u: goto L_00179388;
    case 89u: goto L_001793A0;
    case 90u: goto L_001793C0;
    case 91u: goto L_001793E0;
    case 92u: goto L_00179400;
    case 93u: goto L_00179420;
    case 94u: goto L_00179440;
    case 95u: goto L_00179460;
    case 96u: goto L_00179480;
    case 97u: goto L_001794A0;
    case 98u: goto L_001794C0;
    case 99u: goto L_001794E0;
    case 100u: goto L_00179500;
    case 101u: goto L_00179520;
    case 102u: goto L_00179540;
    case 103u: goto L_00179560;
    case 104u: goto L_00179580;
    case 105u: goto L_001795B8;
    case 106u: goto L_001795E8;
    case 107u: goto L_001795F0;
    case 108u: goto L_001795F8;
    case 109u: goto L_00179644;
    case 110u: goto L_00179674;
    case 111u: goto L_00179688;
    case 112u: goto L_00179694;
    case 113u: goto L_001796C4;
    case 114u: goto L_001796D0;
    case 115u: goto L_0017977C;
    case 116u: goto L_00179790;
    case 117u: goto L_001797F4;
    case 118u: goto L_00179808;
    case 119u: goto L_00179888;
    case 120u: goto L_001798A4;
    case 121u: goto L_001798D8;
    case 122u: goto L_00179908;
    case 123u: goto L_00179910;
    case 124u: goto L_0017996C;
    case 125u: goto L_001799B4;
    case 126u: goto L_001799CC;
    case 127u: goto L_001799F4;
    case 128u: goto L_00179A0C;
    case 129u: goto L_00179A30;
    case 130u: goto L_00179AF0;
    case 131u: goto L_00179D88;
    case 132u: goto L_00179DB0;
    case 133u: goto L_00179DC0;
    case 134u: goto L_00179E54;
    case 135u: goto L_00179E6C;
    case 136u: goto L_00179EB0;
    case 137u: goto L_00179ED8;
    case 138u: goto L_00179EE0;
    case 139u: goto L_00179EF8;
    case 140u: goto L_00179F00;
    case 141u: goto L_00179F18;
    case 142u: goto L_00179F20;
    case 143u: goto L_00179F38;
    case 144u: goto L_00179F40;
    case 145u: goto L_00179F58;
    case 146u: goto L_00179F60;
    case 147u: goto L_00179F78;
    case 148u: goto L_00179F80;
    case 149u: goto L_00179F98;
    case 150u: goto L_00179FA0;
    case 151u: goto L_00179FB8;
    case 152u: goto L_00179FC0;
    case 153u: goto L_00179FD4;
    case 154u: goto L_00179FEC;
    case 155u: goto L_00179FF4;
    case 156u: goto L_0017A008;
    case 157u: goto L_0017A020;
    case 158u: goto L_0017A028;
    case 159u: goto L_0017A03C;
    case 160u: goto L_0017A054;
    case 161u: goto L_0017A05C;
    case 162u: goto L_0017A07C;
    case 163u: goto L_0017A084;
    case 164u: goto L_0017A094;
    case 165u: goto L_0017A0B4;
    case 166u: goto L_0017A0EC;
    case 167u: goto L_0017A0F4;
    case 168u: goto L_0017A114;
    case 169u: goto L_0017A11C;
    case 170u: goto L_0017A124;
    case 171u: goto L_0017A12C;
    case 172u: goto L_0017A140;
    case 173u: goto L_0017A148;
    case 174u: goto L_0017A164;
    case 175u: goto L_0017A16C;
    case 176u: goto L_0017A174;
    case 177u: goto L_0017A18C;
    case 178u: goto L_0017A198;
    case 179u: goto L_0017A1AC;
    case 180u: goto L_0017A1BC;
    case 181u: goto L_0017A1C4;
    case 182u: goto L_0017A1D8;
    case 183u: goto L_0017A1E8;
    case 184u: goto L_0017A1F0;
    case 185u: goto L_0017A204;
    case 186u: goto L_0017A214;
    case 187u: goto L_0017A230;
    case 188u: goto L_0017A25C;
    case 189u: goto L_0017A28C;
    case 190u: goto L_0017A2B0;
    case 191u: goto L_0017A314;
    case 192u: goto L_0017A344;
    case 193u: goto L_0017A37C;
    case 194u: goto L_0017A3A0;
    case 195u: goto L_0017A3D0;
    case 196u: goto L_0017A3F4;
    case 197u: goto L_0017A404;
    case 198u: goto L_0017A40C;
    case 199u: goto L_0017A428;
    case 200u: goto L_0017A440;
    case 201u: goto L_0017A48C;
    case 202u: goto L_0017A4B0;
    case 203u: goto L_0017A4C0;
    case 204u: goto L_0017A540;
    case 205u: goto L_0017A57C;
    case 206u: goto L_0017A58C;
    case 207u: goto L_0017A678;
    case 208u: goto L_0017A680;
    case 209u: goto L_0017A694;
    case 210u: goto L_0017A69C;
    case 211u: goto L_0017A6C0;
    case 212u: goto L_0017A6D8;
    case 213u: goto L_0017A6E8;
    case 214u: goto L_0017A6F0;
    case 215u: goto L_0017A708;
    case 216u: goto L_0017A738;
    case 217u: goto L_0017A760;
    case 218u: goto L_0017A794;
    case 219u: goto L_0017A7A4;
    case 220u: goto L_0017A7E4;
    case 221u: goto L_0017A834;
    case 222u: goto L_0017A858;
    case 223u: goto L_0017A8C8;
    case 224u: goto L_0017A8E0;
    case 225u: goto L_0017A8FC;
    case 226u: goto L_0017A93C;
    case 227u: goto L_0017A960;
    case 228u: goto L_0017A974;
    case 229u: goto L_0017A988;
    case 230u: goto L_0017A99C;
    case 231u: goto L_0017A9B0;
    case 232u: goto L_0017A9C0;
    case 233u: goto L_0017A9D4;
    case 234u: goto L_0017AA34;
    case 235u: goto L_0017AA50;
    case 236u: goto L_0017AA80;
    case 237u: goto L_0017AAA0;
    case 238u: goto L_0017AAB4;
    case 239u: goto L_0017AB2C;
    case 240u: goto L_0017AB40;
    case 241u: goto L_0017AB60;
    case 242u: goto L_0017AB74;
    case 243u: goto L_0017ABAC;
    case 244u: goto L_0017ABCC;
    case 245u: goto L_0017ABE0;
    case 246u: goto L_0017AC40;
    case 247u: goto L_0017AC5C;
    case 248u: goto L_0017AC80;
    case 249u: goto L_0017ACA4;
    case 250u: goto L_0017ACC0;
    case 251u: goto L_0017ACD4;
    case 252u: goto L_0017AD00;
    case 253u: goto L_0017AD1C;
    case 254u: goto L_0017AD40;
    case 255u: goto L_0017AD64;
    case 256u: goto L_0017AD80;
    case 257u: goto L_0017AD94;
    case 258u: goto L_0017ADC4;
    case 259u: goto L_0017ADE8;
    case 260u: goto L_0017AE04;
    case 261u: goto L_0017AE18;
    case 262u: goto L_0017AE3C;
    case 263u: goto L_0017AE44;
    case 264u: goto L_0017AE60;
    case 265u: goto L_0017AE74;
    case 266u: goto L_0017AEA4;
    case 267u: goto L_0017AEC8;
    case 268u: goto L_0017AEE4;
    case 269u: goto L_0017AEF8;
    case 270u: goto L_0017AF24;
    case 271u: goto L_0017AF40;
    case 272u: goto L_0017AF50;
    case 273u: goto L_0017AF64;
    case 274u: goto L_0017AF78;
    case 275u: goto L_0017AF90;
    case 276u: goto L_0017AFA8;
    case 277u: goto L_0017AFC0;
    case 278u: goto L_0017AFD4;
    case 279u: goto L_0017AFE8;
    case 280u: goto L_0017B000;
    case 281u: goto L_0017B044;
    case 282u: goto L_0017B054;
    case 283u: goto L_0017B0E4;
    case 284u: goto L_0017B0F8;
    case 285u: goto L_0017B168;
    case 286u: goto L_0017B1B8;
    case 287u: goto L_0017B1D4;
    case 288u: goto L_0017B2F0;
    case 289u: goto L_0017B320;
    case 290u: goto L_0017B620;
    case 291u: goto L_0017B680;
    case 292u: goto L_0017B690;
    case 293u: goto L_0017B708;
    case 294u: goto L_0017B788;
    case 295u: goto L_0017B830;
    case 296u: goto L_0017B850;
    case 297u: goto L_0017B8FC;
    case 298u: goto L_0017BA6C;
    case 299u: goto L_0017BA90;
    case 300u: goto L_0017BB58;
    case 301u: goto L_0017BB68;
    case 302u: goto L_0017BC3C;
    case 303u: goto L_0017BCC0;
    case 304u: goto L_0017BCD0;
    case 305u: goto L_0017BCE0;
    case 306u: goto L_0017BD54;
    case 307u: goto L_0017BD60;
    case 308u: goto L_0017BD68;
    case 309u: goto L_0017BD7C;
    case 310u: goto L_0017BD84;
    case 311u: goto L_0017BD8C;
    case 312u: goto L_0017BD9C;
    case 313u: goto L_0017BDA4;
    case 314u: goto L_0017BDAC;
    case 315u: goto L_0017BDB8;
    case 316u: goto L_0017BDC8;
    case 317u: goto L_0017BDD8;
    case 318u: goto L_0017BDE4;
    case 319u: goto L_0017BDF0;
    case 320u: goto L_0017BDFC;
    case 321u: goto L_0017BE14;
    case 322u: goto L_0017BE1C;
    case 323u: goto L_0017BF38;
    case 324u: goto L_0017BF70;
    case 325u: goto L_0017BF80;
    case 326u: goto L_0017BF88;
    case 327u: goto L_0017BF90;
    case 328u: goto L_0017BFA0;
    default: bad_entry(c, 0x00178000u); return;
    }
L_00178000:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00178098; } }
L_00178008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178010u);  if (depth < kMaxDepth) unit_001E(c, 25u, depth + 1u); else { c.pc = 0x001784B0u; return; } if (c.pc != 0x00178010u) [[unlikely]] return; }
L_00178010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178018u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001E(c, 16u, depth + 1u); else { c.pc = 0x001781C0u; return; } if (c.pc != 0x00178018u) [[unlikely]] return; }
L_00178018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178020u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001E(c, 12u, depth + 1u); else { c.pc = 0x001780C0u; return; } if (c.pc != 0x00178020u) [[unlikely]] return; }
L_00178020:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40880000u);
    c.r[3].d[0] = c.r[3].d[0] | 34953ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);  if (t) { goto L_00178068; } }
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00178068:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00178098; } }
    c.budget -= 1;
L_00178078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178080u);  if (depth < kMaxDepth) unit_001E(c, 25u, depth + 1u); else { c.pc = 0x001784B0u; return; } if (c.pc != 0x00178080u) [[unlikely]] return; }
L_00178080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178088u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001E(c, 16u, depth + 1u); else { c.pc = 0x001781C0u; return; } if (c.pc != 0x00178088u) [[unlikely]] return; }
L_00178088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178090u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001E(c, 12u, depth + 1u); else { c.pc = 0x001780C0u; return; } if (c.pc != 0x00178090u) [[unlikely]] return; }
L_00178090:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00178098:
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] + 256u);
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 84u));
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 6;
L_001780B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001780C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 36u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    c.f[12] = c.f[1] ^ fp::kSign;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001780E4u); c.f[13] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001780E4u) [[unlikely]] return; }
L_001780E4:
    set32(c.r[2], c.r[2].w[0] - 16384u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 6448u);
    c.r[6].d[0] = ld16((c.r[16].w[0] + 80u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[2], c.r[2].w[0] - 6444u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[16].w[0] + 80u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 112u), 0u);
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    st32((c.r[29].w[0] + 60u), 0u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[29].w[0] + 36u), c.f[0]);
    st32((c.r[29].w[0] + 40u), 0u);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178160u); st32((c.r[29].w[0] + 44u), 0u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x00178160u) [[unlikely]] return; }
L_00178160:
    st32((c.r[16].w[0] + 120u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[3], c.r[3].w[0] - 6444u);
    set32(c.r[2], c.r[2].w[0] - 6448u);
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001781A0u); c.f[13] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001781A0u) [[unlikely]] return; }
L_001781A0:
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 88u));
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001781C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] + 18512u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], 0u + 2u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[18].w[0] + 304u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 4);
    c.budget -= 17;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[5].w[0] + c.r[6].w[0]);  if (t) { goto L_00178450; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00178328; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00178220; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00178498; } }
L_00178220:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 33u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00178250; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00178250; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 321u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001782F0; } }
L_00178250:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[6], c.r[6].w[0] - 22720u);
    set32(c.r[2], 0u + 67u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[16].w[0] + 24u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    c.budget -= 32;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001782F0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001782DCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0032(c, 218u, depth + 1u); else { c.pc = 0x001CAD30u; return; } if (c.pc != 0x001782DCu) [[unlikely]] return; }
L_001782DC:
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001782ECu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0032(c, 218u, depth + 1u); else { c.pc = 0x001CAD30u; return; } if (c.pc != 0x001782ECu) [[unlikely]] return; }
L_001782EC:
    st32((c.r[16].w[0] + 24u), c.f[0]);
    c.budget -= 1;
L_001782F0:
    c.f[12] = ld32((c.r[16].w[0] + 24u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001782FCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001E(c, 203u, depth + 1u); else { c.pc = 0x0017A4C0u; return; } if (c.pc != 0x001782FCu) [[unlikely]] return; }
L_001782FC:
    st32((c.r[18].w[0] + 32u), c.f[0]);
    c.f[12] = ld32((c.r[16].w[0] + 16u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017830Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_001E(c, 203u, depth + 1u); else { c.pc = 0x0017A4C0u; return; } if (c.pc != 0x0017830Cu) [[unlikely]] return; }
L_0017830C:
    st32((c.r[18].w[0] + 36u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7u)));
    st8((c.r[17].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 6u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00178498; } }
L_00178328:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00178440; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[6], c.r[6].w[0] - 22720u);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[2], 0u + 67u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[18].w[0] + 128u), c.f[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[18].w[0] + 136u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    c.budget -= 31;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001783D8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001783C0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0032(c, 218u, depth + 1u); else { c.pc = 0x001CAD30u; return; } if (c.pc != 0x001783C0u) [[unlikely]] return; }
L_001783C0:
    st32((c.r[18].w[0] + 128u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001783D0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0032(c, 218u, depth + 1u); else { c.pc = 0x001CAD30u; return; } if (c.pc != 0x001783D0u) [[unlikely]] return; }
L_001783D0:
    st32((c.r[18].w[0] + 136u), c.f[0]);
    c.budget -= 2;
L_001783D8:
    c.f[12] = ld32((c.r[18].w[0] + 136u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001783E4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001E(c, 203u, depth + 1u); else { c.pc = 0x0017A4C0u; return; } if (c.pc != 0x001783E4u) [[unlikely]] return; }
L_001783E4:
    st32((c.r[18].w[0] + 144u), c.f[0]);
    c.f[12] = ld32((c.r[18].w[0] + 128u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001783F4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_001E(c, 203u, depth + 1u); else { c.pc = 0x0017A4C0u; return; } if (c.pc != 0x001783F4u) [[unlikely]] return; }
L_001783F4:
    st32((c.r[18].w[0] + 148u), c.f[0]);
    set32(c.r[3], 0u + 5u);
    st16((c.r[18].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[18].w[0] + 144u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = ld32((c.r[18].w[0] + 32u));
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    st32((c.r[18].w[0] + 48u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 148u));
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    st32((c.r[18].w[0] + 52u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 6u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 19;
L_00178440:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00178498; } }
    c.budget -= 1;
L_00178450:
    c.f[1] = ld32((c.r[18].w[0] + 48u));
    c.f[0] = ld32((c.r[18].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 52u));
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 36u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 166u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[18].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00178498; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 6u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00178498:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001784B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 18512u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[16], c.r[4].w[0] + 304u);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00178528; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 33u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00178518; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00178518; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 321u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00178528; } }
L_00178518:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178520u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 34u)));  if (depth < kMaxDepth) unit_004D(c, 275u, depth + 1u); else { c.pc = 0x00237990u; return; } if (c.pc != 0x00178520u) [[unlikely]] return; }
L_00178520:
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00178528:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00178540:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[3], c.r[3].w[0] + 18512u);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00178578; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001786C0; } }
L_00178578:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_001785F0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00178598; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001786B8; } }
L_00178598:
    st32((c.r[4].w[0] + 104u), 0u);
    set32(c.r[3], 0u + 20u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] - 6544u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[3], c.r[3].w[0] - 6540u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 40u), 0u);  if (t) { goto L_001786B8; } }
L_001785F0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40CC0000u);
    c.f[1] = ld32((c.r[4].w[0] + 104u));
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.f[0] = c.r[5].w[0];
    set32(c.r[3], 0u + 4u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_00178668; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00178668; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00178668; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[6].d[0];  if (t) { goto L_00178648; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00178648; } }
L_0017863C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00178680; } }
    c.budget -= 1;
L_00178648:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 32u), c.f[0]);  if (t) { goto L_00178680; } }
    c.budget -= 1;
L_00178668:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.budget -= 6;
L_00178680:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x43000000u);  if (t) { goto L_001786B8; } }
    set32(c.r[3], 0u + 10u);
    st32((c.r[4].w[0] + 104u), c.r[5].w[0]);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_001786B8:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001786C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001786D0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00178710; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001786F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00178758; } }
L_001786F0:
    st32((c.r[4].w[0] + 112u), 0u);
    set32(c.r[3], 0u + 20u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00178758; } }
    c.budget -= 1;
L_00178710:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.f[1] = ld32((c.r[4].w[0] + 112u));
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00178758; } }
    st32((c.r[4].w[0] + 112u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00178758:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00178770:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_001787F0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001787B0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00178798; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00178828; } }
L_00178798:
    st32((c.r[4].w[0] + 104u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00178828; } }
    c.budget -= 1;
L_001787B0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40880000u);
    c.f[2] = ld32((c.r[4].w[0] + 104u));
    c.r[5].d[0] = c.r[5].d[0] | 34953ull;
    c.f[1] = c.r[5].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 104u), c.f[1]);  if (t) { goto L_00178828; } }
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00178828; } }
L_001787F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40880000u);
    c.f[2] = ld32((c.r[4].w[0] + 104u));
    c.r[3].d[0] = c.r[3].d[0] | 34953ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 104u), c.f[1]);  if (t) { goto L_00178828; } }
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00178828:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00178840:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[17], c.r[18].w[0] + 304u);  if (t) { goto L_00178A48; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00178970; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001788B0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00178890; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00178B30; } }
    c.budget -= 1;
L_00178890:
    st32((c.r[18].w[0] + 112u), 0u);
    set32(c.r[3], 0u + 10u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00178B30; } }
    c.budget -= 1;
L_001788B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D610000u);
    c.f[1] = ld32((c.r[18].w[0] + 112u));
    c.r[3].d[0] = c.r[3].d[0] | 18350ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 112u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F0C0000u);  if (t) { goto L_00178B30; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[18].w[0] + 112u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 3504u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[4], c.r[4].w[0] - 18496u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0]), 0u);
    st32((c.r[17].w[0] + 4u), 0u);
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[6], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 6u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 23u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178958u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 46u, depth + 1u); else { c.pc = 0x00238530u; return; } if (c.pc != 0x00178958u) [[unlikely]] return; }
L_00178958:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178964u); set32(c.r[5], 0u + 169u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x00178964u) [[unlikely]] return; }
L_00178964:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00178B30; } }
    c.budget -= 1;
L_00178970:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178988u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 57u, depth + 1u); else { c.pc = 0x00238840u; return; } if (c.pc != 0x00178988u) [[unlikely]] return; }
L_00178988:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00178998; } }
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 1;
L_00178998:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00178A18; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00178A20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001789B8u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x001789B8u) [[unlikely]] return; }
L_001789B8:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[3], 0u + 3u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.hi.d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_001789F0; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    c.budget -= 6;
L_001789F0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00178A10; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00178A10; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 88u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[4], c.r[2].w[0] + 1u);
    c.budget -= 4;
L_00178A10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[4].w[0]);  if (t) { goto L_00178A20; } }
L_00178A18:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_00178A20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178A28u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 55u, depth + 1u); else { c.pc = 0x00238800u; return; } if (c.pc != 0x00178A28u) [[unlikely]] return; }
L_00178A28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00178B30; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[3], 0u + 20u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00178B30; } }
L_00178A48:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00178B30; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 6u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 6u)));
    c.r[3].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 99u);  if (t) { goto L_00178A88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00178B30; } }
    c.budget -= 1;
L_00178A88:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[3].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_00178AB0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00178AB0; } }
    set32(c.r[3], 0u + 99u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00178B30; } }
L_00178AB0:
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[3].w[0] + 3504u);
    set32(c.r[2], 0u - 1u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 23u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 17;
    { const bool t = c.r[7].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 99u);  if (t) { goto L_00178B00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00178B10; } }
    c.budget -= 1;
L_00178B00:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[4], c.r[4].w[0] - 18496u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178B10u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 46u, depth + 1u); else { c.pc = 0x00238530u; return; } if (c.pc != 0x00178B10u) [[unlikely]] return; }
L_00178B10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178B18u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001E(c, 39u, depth + 1u); else { c.pc = 0x00178B80u; return; } if (c.pc != 0x00178B18u) [[unlikely]] return; }
L_00178B18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_00178B30; } }
    set32(c.r[3], 0u + 99u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00178B30:
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], 0u + 4u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 23u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 16u);  if (t) { goto L_00178B50; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00178B58; } }
    c.budget -= 1;
L_00178B50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00178B60; } }
L_00178B58:
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00178B60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00178B80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 99u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00178C10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178BA4u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x00178BA4u) [[unlikely]] return; }
L_00178BA4:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00178C10; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[2], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 23u)));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_00178C10; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 82u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] << (c.r[4].w[0] & 31u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);  if (t) { goto L_00178C10; } }
    set32(c.r[2], 0u + 4u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 68u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_00178C10; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 18496u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178C08u); set32(c.r[7], 0u + 35u);  if (depth < kMaxDepth) unit_004E(c, 46u, depth + 1u); else { c.pc = 0x00238530u; return; } if (c.pc != 0x00178C08u) [[unlikely]] return; }
L_00178C08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00178C98; } }
L_00178C10:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[2], 0u + 99u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00178C90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178C28u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x00178C28u) [[unlikely]] return; }
L_00178C28:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00178C90; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[2], 0u + 1u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 23u)));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_00178C90; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 82u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] << (c.r[4].w[0] & 31u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);  if (t) { goto L_00178C90; } }
    set32(c.r[2], 0u + 6u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 68u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_00178C90; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 18496u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178C88u); set32(c.r[7], 0u + 101u);  if (depth < kMaxDepth) unit_004E(c, 46u, depth + 1u); else { c.pc = 0x00238530u; return; } if (c.pc != 0x00178C88u) [[unlikely]] return; }
L_00178C88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00178C98; } }
L_00178C90:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00178C98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00178CB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00178DB8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00178D80; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00178D18; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00178CF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00178E20; } }
L_00178CF0:
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 112u), 0u);
    set32(c.r[3], 0u + 10u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00178E20; } }
    c.budget -= 1;
L_00178D18:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.f[2] = ld32((c.r[16].w[0] + 112u));
    c.r[4].d[0] = c.r[4].d[0] | 52429ull;
    c.f[1] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x414C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[16].w[0] + 112u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 17;
    { const bool t = c.r[4].d[0] != 0ull; st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00178E20; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], 0u + 180u);
    st32((c.r[16].w[0] + 112u), c.r[4].w[0]);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00178E20; } }
    c.budget -= 1;
L_00178D80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178D88u);  if (depth < kMaxDepth) unit_001E(c, 46u, depth + 1u); else { c.pc = 0x00178E40u; return; } if (c.pc != 0x00178D88u) [[unlikely]] return; }
L_00178D88:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00178E20; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], 0u + 10u);
    st32((c.r[16].w[0] + 112u), c.r[4].w[0]);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00178E20; } }
L_00178DB8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.f[2] = ld32((c.r[16].w[0] + 112u));
    c.r[4].d[0] = c.r[4].d[0] | 52429ull;
    c.f[1] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x414C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    st32((c.r[16].w[0] + 112u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00178E20; } }
    st32((c.r[16].w[0] + 112u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_00178E20:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00178E40:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00178EA0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00178E60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00178EE0; } }
L_00178E60:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F880000u);
    c.f[2] = ld32((c.r[4].w[0] + 104u));
    c.r[5].d[0] = c.r[5].d[0] | 34953ull;
    c.f[1] = c.r[5].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 104u), c.f[1]);  if (t) { goto L_00178EE0; } }
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00178EE0; } }
L_00178EA0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F880000u);
    c.f[2] = ld32((c.r[4].w[0] + 104u));
    c.r[5].d[0] = c.r[5].d[0] | 34953ull;
    c.f[1] = c.r[5].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C00000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 104u), c.f[1]);  if (t) { goto L_00178EE0; } }
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_00178EE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00178EF0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[3], c.r[3].w[0] + 18512u);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00178F28; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00179070; } }
L_00178F28:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_00178FA0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00178F48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00179068; } }
L_00178F48:
    st32((c.r[4].w[0] + 104u), 0u);
    set32(c.r[3], 0u + 20u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] - 6496u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[3], c.r[3].w[0] - 6492u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 40u), 0u);  if (t) { goto L_00179068; } }
L_00178FA0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40CC0000u);
    c.f[1] = ld32((c.r[4].w[0] + 104u));
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.f[0] = c.r[5].w[0];
    set32(c.r[3], 0u + 4u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_00179018; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00179018; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00179018; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[6].d[0];  if (t) { goto L_00178FF8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00178FF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00179030; } }
    c.budget -= 1;
L_00178FF8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 32u), c.f[0]);  if (t) { goto L_00179030; } }
    c.budget -= 1;
L_00179018:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.budget -= 6;
L_00179030:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x43000000u);  if (t) { goto L_00179068; } }
    set32(c.r[3], 0u + 10u);
    st32((c.r[4].w[0] + 104u), c.r[5].w[0]);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_00179068:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00179070:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00179080:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00179090:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_001790A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[18].w[0] + 304u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 82u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 116u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001790E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004D(c, 273u, depth + 1u); else { c.pc = 0x00237910u; return; } if (c.pc != 0x001790E4u) [[unlikely]] return; }
L_001790E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001790ECu); c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x001790ECu) [[unlikely]] return; }
L_001790EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 6336u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = ld32((c.r[2].w[0]));
    c.f[13] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017910Cu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0017910Cu) [[unlikely]] return; }
L_0017910C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[2], c.r[2].w[0] - 14192u);
    set32(c.r[5], 0u + 9u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], c.r[3].w[0] + 91u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179138u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00179138u) [[unlikely]] return; }
L_00179138:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[6], 0u + 32u);  if (t) { goto L_00179160; } }
    set32(c.r[4], c.r[17].w[0] + 12u);
    set32(c.r[5], 0u + 9u);
    set32(c.r[8], 0u + 127u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179154u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 87u, depth + 1u); else { c.pc = 0x003B0F00u; return; } if (c.pc != 0x00179154u) [[unlikely]] return; }
L_00179154:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00179178; } }
    c.budget -= 1;
L_00179160:
    set32(c.r[7], 0u + 22u);
    set32(c.r[4], c.r[17].w[0] + 12u);
    set32(c.r[5], 0u + 9u);
    set32(c.r[6], 0u + 127u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179178u); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 87u, depth + 1u); else { c.pc = 0x003B0F00u; return; } if (c.pc != 0x00179178u) [[unlikely]] return; }
L_00179178:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00179320; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017918Cu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0017918Cu) [[unlikely]] return; }
L_0017918C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 69u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017919Cu); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_001E(c, 87u, depth + 1u); else { c.pc = 0x00179340u; return; } if (c.pc != 0x0017919Cu) [[unlikely]] return; }
L_0017919C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001791A4u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x001791A4u) [[unlikely]] return; }
L_001791A4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 70u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001791B4u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_001E(c, 87u, depth + 1u); else { c.pc = 0x00179340u; return; } if (c.pc != 0x001791B4u) [[unlikely]] return; }
L_001791B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001791BCu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x001791BCu) [[unlikely]] return; }
L_001791BC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 71u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001791CCu); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_001E(c, 87u, depth + 1u); else { c.pc = 0x00179340u; return; } if (c.pc != 0x001791CCu) [[unlikely]] return; }
L_001791CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001791D4u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x001791D4u) [[unlikely]] return; }
L_001791D4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 26u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001791E4u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_001E(c, 87u, depth + 1u); else { c.pc = 0x00179340u; return; } if (c.pc != 0x001791E4u) [[unlikely]] return; }
L_001791E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001791ECu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x001791ECu) [[unlikely]] return; }
L_001791EC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 27u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001791FCu); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_001E(c, 87u, depth + 1u); else { c.pc = 0x00179340u; return; } if (c.pc != 0x001791FCu) [[unlikely]] return; }
L_001791FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179204u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00179204u) [[unlikely]] return; }
L_00179204:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179214u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_001E(c, 87u, depth + 1u); else { c.pc = 0x00179340u; return; } if (c.pc != 0x00179214u) [[unlikely]] return; }
L_00179214:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017921Cu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0017921Cu) [[unlikely]] return; }
L_0017921C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.f[12] = ld32((c.r[1].w[0] - 6336u));
    c.f[13] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179230u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00179230u) [[unlikely]] return; }
L_00179230:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 29u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179240u); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_001E(c, 87u, depth + 1u); else { c.pc = 0x00179340u; return; } if (c.pc != 0x00179240u) [[unlikely]] return; }
L_00179240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179248u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00179248u) [[unlikely]] return; }
L_00179248:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.f[12] = ld32((c.r[1].w[0] - 6332u));
    c.f[13] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017925Cu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0017925Cu) [[unlikely]] return; }
L_0017925C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 29u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017926Cu); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_001E(c, 87u, depth + 1u); else { c.pc = 0x00179340u; return; } if (c.pc != 0x0017926Cu) [[unlikely]] return; }
L_0017926C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179274u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00179274u) [[unlikely]] return; }
L_00179274:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.f[12] = ld32((c.r[1].w[0] - 6328u));
    c.f[13] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179288u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00179288u) [[unlikely]] return; }
L_00179288:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 29u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179298u); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_001E(c, 87u, depth + 1u); else { c.pc = 0x00179340u; return; } if (c.pc != 0x00179298u) [[unlikely]] return; }
L_00179298:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001792A0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x001792A0u) [[unlikely]] return; }
L_001792A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.f[12] = ld32((c.r[1].w[0] - 6336u));
    c.f[13] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001792B4u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001792B4u) [[unlikely]] return; }
L_001792B4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 89u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001792C4u); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_001E(c, 87u, depth + 1u); else { c.pc = 0x00179340u; return; } if (c.pc != 0x001792C4u) [[unlikely]] return; }
L_001792C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001792CCu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x001792CCu) [[unlikely]] return; }
L_001792CC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.f[12] = ld32((c.r[1].w[0] - 6332u));
    c.f[13] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001792E0u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001792E0u) [[unlikely]] return; }
L_001792E0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 89u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001792F0u); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_001E(c, 87u, depth + 1u); else { c.pc = 0x00179340u; return; } if (c.pc != 0x001792F0u) [[unlikely]] return; }
L_001792F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001792F8u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x001792F8u) [[unlikely]] return; }
L_001792F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.f[12] = ld32((c.r[1].w[0] - 6328u));
    c.f[13] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017930Cu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0017930Cu) [[unlikely]] return; }
L_0017930C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 89u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017931Cu); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_001E(c, 87u, depth + 1u); else { c.pc = 0x00179340u; return; } if (c.pc != 0x0017931Cu) [[unlikely]] return; }
L_0017931C:
    c.budget -= 1;
L_00179320:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00179340:
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - 14192u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[1].w[0] + 20052u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[6].d[0] & 255ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20068u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 20016u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179388u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00179388u) [[unlikely]] return; }
L_00179388:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20016u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001793A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001793C0u); set32(c.r[17], c.r[18].w[0] + 304u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x001793C0u) [[unlikely]] return; }
L_001793C0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[3].w[0] + 448u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20068u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 159u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001793E0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_001E(c, 289u, depth + 1u); else { c.pc = 0x0017B320u; return; } if (c.pc != 0x001793E0u) [[unlikely]] return; }
L_001793E0:
    c.f[0] = ld32((c.r[18].w[0] + 104u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 20016u);
    set32(c.r[5], 0u + 14u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179400u); st32((c.r[1].w[0] + 20052u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00179400u) [[unlikely]] return; }
L_00179400:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[3].w[0] + 688u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20068u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 159u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179420u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_001E(c, 289u, depth + 1u); else { c.pc = 0x0017B320u; return; } if (c.pc != 0x00179420u) [[unlikely]] return; }
L_00179420:
    c.f[0] = ld32((c.r[18].w[0] + 104u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 20016u);
    set32(c.r[5], 0u + 14u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179440u); st32((c.r[1].w[0] + 20052u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00179440u) [[unlikely]] return; }
L_00179440:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[3].w[0] - 13952u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20068u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 159u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179460u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_001E(c, 289u, depth + 1u); else { c.pc = 0x0017B320u; return; } if (c.pc != 0x00179460u) [[unlikely]] return; }
L_00179460:
    c.f[0] = ld32((c.r[18].w[0] + 104u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 20016u);
    set32(c.r[5], 0u + 17u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179480u); st32((c.r[1].w[0] + 20052u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00179480u) [[unlikely]] return; }
L_00179480:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[3].w[0] + 5008u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20068u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 159u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001794A0u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_001E(c, 289u, depth + 1u); else { c.pc = 0x0017B320u; return; } if (c.pc != 0x001794A0u) [[unlikely]] return; }
L_001794A0:
    c.f[0] = ld32((c.r[18].w[0] + 104u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 20016u);
    set32(c.r[5], 0u + 17u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001794C0u); st32((c.r[1].w[0] + 20052u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x001794C0u) [[unlikely]] return; }
L_001794C0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[3].w[0] + 5248u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20068u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 159u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001794E0u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_001E(c, 289u, depth + 1u); else { c.pc = 0x0017B320u; return; } if (c.pc != 0x001794E0u) [[unlikely]] return; }
L_001794E0:
    c.f[0] = ld32((c.r[18].w[0] + 104u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 20016u);
    set32(c.r[5], 0u + 17u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179500u); st32((c.r[1].w[0] + 20052u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00179500u) [[unlikely]] return; }
L_00179500:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[3].w[0] + 5488u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20068u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 159u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179520u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_001E(c, 289u, depth + 1u); else { c.pc = 0x0017B320u; return; } if (c.pc != 0x00179520u) [[unlikely]] return; }
L_00179520:
    c.f[0] = ld32((c.r[18].w[0] + 104u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 20016u);
    set32(c.r[5], 0u + 17u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179540u); st32((c.r[1].w[0] + 20052u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00179540u) [[unlikely]] return; }
L_00179540:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[3].w[0] - 14192u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20068u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 159u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179560u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001E(c, 289u, depth + 1u); else { c.pc = 0x0017B320u; return; } if (c.pc != 0x00179560u) [[unlikely]] return; }
L_00179560:
    c.f[0] = ld32((c.r[18].w[0] + 104u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 20016u);
    set32(c.r[5], 0u + 17u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179580u); st32((c.r[1].w[0] + 20052u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00179580u) [[unlikely]] return; }
L_00179580:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st32((c.r[1].w[0] + 20016u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] - 8192u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20068u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 20016u);
    c.f[0] = ld32((c.r[18].w[0] + 104u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001795B8u); st32((c.r[1].w[0] + 20052u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x001795B8u) [[unlikely]] return; }
L_001795B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] - 14432u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20068u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 20016u);
    c.f[0] = ld32((c.r[18].w[0] + 104u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001795E8u); st32((c.r[1].w[0] + 20052u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x001795E8u) [[unlikely]] return; }
L_001795E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001795F0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x001795F0u) [[unlikely]] return; }
L_001795F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001795F8u);  if (depth < kMaxDepth) unit_004D(c, 280u, depth + 1u); else { c.pc = 0x00237AA0u; return; } if (c.pc != 0x001795F8u) [[unlikely]] return; }
L_001795F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00179620; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 101u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);  if (t) { goto L_00179620; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8926u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00179628; } }
    c.budget -= 1;
L_00179620:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 47u);  if (t) { goto L_00179648; } }
L_00179628:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3390000u);
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3090000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179644u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00179644u) [[unlikely]] return; }
L_00179644:
    set32(c.r[3], 0u + 67u);
    c.budget -= 1;
L_00179648:
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - 14192u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], 0u + 7u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179674u); st32((c.r[1].w[0] + 20068u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001E(c, 289u, depth + 1u); else { c.pc = 0x0017B320u; return; } if (c.pc != 0x00179674u) [[unlikely]] return; }
L_00179674:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[4], c.r[4].w[0] + 20016u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179688u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00179688u) [[unlikely]] return; }
L_00179688:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179694u); st32((c.r[1].w[0] + 20016u), 0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00179694u) [[unlikely]] return; }
L_00179694:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 3088u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20068u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 20016u);
    c.f[0] = ld32((c.r[18].w[0] + 104u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001796C4u); st32((c.r[1].w[0] + 20052u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x001796C4u) [[unlikely]] return; }
L_001796C4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001796D0u); st32((c.r[1].w[0] + 20016u), 0u);  if (depth < kMaxDepth) unit_004D(c, 274u, depth + 1u); else { c.pc = 0x00237940u; return; } if (c.pc != 0x001796D0u) [[unlikely]] return; }
L_001796D0:
    c.r[3].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x66660000u);  if (t) { goto L_00179710; } }
    set32(c.r[4], c.r[2].w[0] >> 31);
    c.r[3].d[0] = c.r[3].d[0] | 26215ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] - c.r[3].w[0]);  if (t) { goto L_00179718; } }
L_00179710:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00179718:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[2], c.r[2].w[0] + 3568u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20068u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], 0u + 8u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20016u), c.r[2].w[0]);
    c.f[13] = 0u;
    set32(c.r[2], c.r[4].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + 20016u);
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[4], 0u + 1u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = ld32((c.r[18].w[0] + 104u));
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.f[14] = c.r[2].w[0];
    st32((c.r[1].w[0] + 20052u), c.f[1]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017977Cu); c.f[15] = c.f[14];  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x0017977Cu) [[unlikely]] return; }
L_0017977C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[4], c.r[4].w[0] + 20016u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179790u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00179790u) [[unlikely]] return; }
L_00179790:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 3808u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20068u), c.r[2].w[0]);
    set32(c.r[3], 0u + 8u);
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[1].w[0] + 20016u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[5], c.r[5].w[0] + 20016u);
    c.f[1] = ld32((c.r[18].w[0] + 104u));
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.f[14] = c.r[2].w[0];
    c.f[13] = 0u;
    st32((c.r[1].w[0] + 20052u), c.f[1]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001797F4u); c.f[15] = c.f[14];  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x001797F4u) [[unlikely]] return; }
L_001797F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[4], c.r[4].w[0] + 20016u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179808u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00179808u) [[unlikely]] return; }
L_00179808:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20016u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00179888; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] - 19195u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 82u)));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 9);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);  if (t) { goto L_00179858; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] - 10592u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 20068u), c.r[2].w[0]);  if (t) { goto L_00179868; } }
L_00179858:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[2], c.r[2].w[0] - 10352u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20068u), c.r[2].w[0]);
    c.budget -= 4;
L_00179868:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[0] = ld32((c.r[18].w[0] + 104u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 20016u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179888u); st32((c.r[1].w[0] + 20052u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00179888u) [[unlikely]] return; }
L_00179888:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0xC2480000u);  if (t) { goto L_001798A8; } }
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001798A4u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001798A4u) [[unlikely]] return; }
L_001798A4:
    c.budget -= 1;
L_001798A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[2], c.r[2].w[0] - 9632u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20068u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[0] = ld32((c.r[18].w[0] + 104u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 20016u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001798D8u); st32((c.r[1].w[0] + 20052u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x001798D8u) [[unlikely]] return; }
L_001798D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] - 9392u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20068u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 20016u);
    c.f[0] = ld32((c.r[18].w[0] + 104u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179908u); st32((c.r[1].w[0] + 20052u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00179908u) [[unlikely]] return; }
L_00179908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179910u);  if (depth < kMaxDepth) unit_001E(c, 129u, depth + 1u); else { c.pc = 0x00179A30u; return; } if (c.pc != 0x00179910u) [[unlikely]] return; }
L_00179910:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00179978; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00179978; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 88u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);  if (t) { goto L_00179978; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] - 10832u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20068u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 20016u);
    c.f[0] = ld32((c.r[18].w[0] + 104u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017996Cu); st32((c.r[1].w[0] + 20052u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0017996Cu) [[unlikely]] return; }
L_0017996C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00179A10; } }
    c.budget -= 1;
L_00179978:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_00179998; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001799D8; } }
    c.budget -= 1;
L_00179998:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2820000u);
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43430000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001799B4u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001799B4u) [[unlikely]] return; }
L_001799B4:
    c.f[12] = ld32((c.r[18].w[0] + 104u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001799CCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001E(c, 130u, depth + 1u); else { c.pc = 0x00179AF0u; return; } if (c.pc != 0x001799CCu) [[unlikely]] return; }
L_001799CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00179A10; } }
    c.budget -= 1;
L_001799D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2820000u);
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43430000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001799F4u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001799F4u) [[unlikely]] return; }
L_001799F4:
    c.f[12] = ld32((c.r[18].w[0] + 104u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179A0Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001E(c, 130u, depth + 1u); else { c.pc = 0x00179AF0u; return; } if (c.pc != 0x00179A0Cu) [[unlikely]] return; }
L_00179A0C:
    c.budget -= 1;
L_00179A10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00179A30:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 7u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00179A50; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 315u)));  if (t) { goto L_00179AE8; } }
L_00179A50:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00179A70; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 296u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { goto L_00179AE8; } }
    c.budget -= 1;
L_00179A70:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00179A90; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 152u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { goto L_00179AE8; } }
    c.budget -= 1;
L_00179A90:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 27u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_00179AA8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00179AB0; } }
    c.budget -= 1;
L_00179AA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00179AE8; } }
L_00179AB0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 88u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00179AD8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 159u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 148u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { goto L_00179AE8; } }
L_00179AD8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 151u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
L_00179AE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00179AF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12E00000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x4F8B0000u);
    c.r[2].d[0] = c.r[2].d[0] | 48771ull;
    c.r[15].d[0] = c.r[8].d[0] | 22671ull;
    mmi::multu(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0xD1B70000u);
    c.r[13].d[0] = c.r[8].d[0] | 5977ull;
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x10620000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[12].d[0] = c.r[8].d[0] | 19923ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[9].d[0] = c.hi.d[0];
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[11].d[0] = c.r[8].d[0] | 34079ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[8], c.r[5].w[0] - c.r[9].w[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[8], c.r[8].w[0] >> 1);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[9], c.r[8].w[0] + c.r[9].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3B9A0000u);
    c.r[7].d[0] = c.r[3].d[0] | 51712ull;
    set32(c.r[24], c.r[9].w[0] >> 29);
    mmi::mult(c, 0, c.r[24].w[0], c.r[7].w[0]);
    c.r[20].d[0] = c.lo.d[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0xCCCC0000u);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x05F50000u);
    c.r[6].d[0] = c.r[2].d[0] | 57600ull;
    c.r[9].d[0] = c.r[8].d[0] | 52429ull;
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55E60000u);
    c.r[4].d[0] = c.r[2].d[0] | 15241ull;
    set32(c.r[5], c.r[5].w[0] - c.r[20].w[0]);
    mmi::multu(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x6B5F0000u);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = c.r[2].d[0] | 51819ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x431B0000u);
    set32(c.r[8], 0u + 8u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[1].w[0] + 20016u), c.r[8].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].d[0] = c.r[2].d[0] | 56963ull;
    st32((c.r[1].w[0] + 20052u), c.r[7].w[0]);
    set32(c.r[14], 0u + 10000u);
    set32(c.r[7], c.r[4].w[0] >> 25);
    set32(c.r[10], 0u + 10u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[6].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    st32((c.r[29].w[0] + 112u), c.r[24].w[0]);
    st32((c.r[29].w[0] + 116u), c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] - c.r[4].w[0]);
    mmi::multu(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[6], c.r[3].w[0] >> 22);
    set32(c.r[3], c.r[6].w[0] << 6);
    st32((c.r[29].w[0] + 120u), c.r[6].w[0]);
    set32(c.r[4], c.r[3].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[5], c.r[5].w[0] - c.r[3].w[0]);
    mmi::multu(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[2].w[0] >> 18);
    set32(c.r[2], c.r[4].w[0] << 6);
    st32((c.r[29].w[0] + 124u), c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[5], c.r[5].w[0] - c.r[2].w[0]);
    mmi::multu(c, 0, c.r[15].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] >> 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] >> 16);
    set32(c.r[2], c.r[3].w[0] << 5);
    st32((c.r[29].w[0] + 128u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[5], c.r[5].w[0] - c.r[2].w[0]);
    mmi::multu(c, 0, c.r[13].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[2].w[0] >> 13);
    mmi::mult(c, 0, c.r[3].w[0], c.r[14].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[29].w[0] + 132u), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] - c.r[2].w[0]);
    mmi::multu(c, 0, c.r[12].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[2].w[0] >> 6);
    set32(c.r[2], c.r[3].w[0] << 5);
    st32((c.r[29].w[0] + 136u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] - c.r[2].w[0]);
    mmi::multu(c, 0, c.r[11].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[2].w[0] >> 5);
    st32((c.r[29].w[0] + 140u), c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - c.r[2].w[0]);
    mmi::multu(c, 0, c.r[9].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[2].w[0] >> 3);
    set32(c.r[2], c.r[3].w[0] << 2);
    st32((c.r[29].w[0] + 144u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] - c.r[2].w[0]);
    c.budget -= 149;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[29].w[0] + 148u), c.r[5].w[0]);  if (t) { goto L_00179D50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00179D78; } }
    c.budget -= 1;
L_00179D50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[20] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20052u), c.f[12]);
    c.r[16].d[0] = c.r[10].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] - 9152u);
    st32((c.r[1].w[0] + 20068u), c.r[2].w[0]);
    c.budget -= 10;
L_00179D78:
    c.f[13] = 0u;
    c.f[12] = c.f[20] ^ fp::kSign;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179D88u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00179D88u) [[unlikely]] return; }
L_00179D88:
    set32(c.r[3], 0u + 10u);
    c.r[4].d[0] = 0ull < c.r[17].d[0] ? 1ull : 0ull;
    set32(c.r[20], c.r[3].w[0] - c.r[18].w[0]);
    c.r[1].d[0] = c.r[20].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] ^ 1ull;  if (t) { goto L_00179E80; } }
    set32(c.r[2], c.r[20].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[17], c.r[2].w[0] + 112u);
    c.budget -= 4;
L_00179DB0:
    c.f[13] = 0u;
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179DC0u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00179DC0u) [[unlikely]] return; }
L_00179DC0:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_00179DE0; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[3], 0u + 9u);  if (t) { goto L_00179DE0; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[3].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00179DE0; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_00179DE0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00179E70; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00179DF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00179E58; } }
L_00179DF8:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_00179E18; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00179E30; } }
L_00179E18:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.f[12] = fp::add(c.f[12], c.f[12]);
    c.budget -= 6;
L_00179E30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[14] = c.r[2].w[0];
    set32(c.r[4], 0u + 1u);
    c.f[13] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[15] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179E54u); set32(c.r[5], c.r[5].w[0] + 20016u);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x00179E54u) [[unlikely]] return; }
L_00179E54:
    c.budget -= 1;
L_00179E58:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[5].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] + 20016u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179E6Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00179E6Cu) [[unlikely]] return; }
L_00179E6C:
    set32(c.r[18], 0u + 1u);
    c.budget -= 1;
L_00179E70:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].d[0] = c.r[20].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00179DB0u | kUnwind; return; } goto L_00179DB0; } }
L_00179E80:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20016u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00179EB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[16], c.r[18].w[0] + 304u);
    set32(c.r[4], c.r[16].w[0] + 12u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179ED8u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x00179ED8u) [[unlikely]] return; }
L_00179ED8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179EE0u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00179EE0u) [[unlikely]] return; }
L_00179EE0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 82u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179EF8u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 116u)));  if (depth < kMaxDepth) unit_004D(c, 273u, depth + 1u); else { c.pc = 0x00237910u; return; } if (c.pc != 0x00179EF8u) [[unlikely]] return; }
L_00179EF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179F00u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00179F00u) [[unlikely]] return; }
L_00179F00:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 69u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179F18u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_001E(c, 190u, depth + 1u); else { c.pc = 0x0017A2B0u; return; } if (c.pc != 0x00179F18u) [[unlikely]] return; }
L_00179F18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179F20u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00179F20u) [[unlikely]] return; }
L_00179F20:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 70u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179F38u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_001E(c, 190u, depth + 1u); else { c.pc = 0x0017A2B0u; return; } if (c.pc != 0x00179F38u) [[unlikely]] return; }
L_00179F38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179F40u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00179F40u) [[unlikely]] return; }
L_00179F40:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 71u);
    set32(c.r[6], 0u + 2u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179F58u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_001E(c, 190u, depth + 1u); else { c.pc = 0x0017A2B0u; return; } if (c.pc != 0x00179F58u) [[unlikely]] return; }
L_00179F58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179F60u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00179F60u) [[unlikely]] return; }
L_00179F60:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 26u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179F78u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_001E(c, 190u, depth + 1u); else { c.pc = 0x0017A2B0u; return; } if (c.pc != 0x00179F78u) [[unlikely]] return; }
L_00179F78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179F80u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00179F80u) [[unlikely]] return; }
L_00179F80:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 27u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179F98u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_001E(c, 190u, depth + 1u); else { c.pc = 0x0017A2B0u; return; } if (c.pc != 0x00179F98u) [[unlikely]] return; }
L_00179F98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179FA0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00179FA0u) [[unlikely]] return; }
L_00179FA0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 28u);
    set32(c.r[6], 0u + 2u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179FB8u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_001E(c, 190u, depth + 1u); else { c.pc = 0x0017A2B0u; return; } if (c.pc != 0x00179FB8u) [[unlikely]] return; }
L_00179FB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179FC0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00179FC0u) [[unlikely]] return; }
L_00179FC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.f[12] = ld32((c.r[1].w[0] - 6336u));
    c.f[13] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179FD4u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00179FD4u) [[unlikely]] return; }
L_00179FD4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 29u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179FECu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_001E(c, 190u, depth + 1u); else { c.pc = 0x0017A2B0u; return; } if (c.pc != 0x00179FECu) [[unlikely]] return; }
L_00179FEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179FF4u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00179FF4u) [[unlikely]] return; }
L_00179FF4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.f[12] = ld32((c.r[1].w[0] - 6332u));
    c.f[13] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A008u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0017A008u) [[unlikely]] return; }
L_0017A008:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 29u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A020u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_001E(c, 190u, depth + 1u); else { c.pc = 0x0017A2B0u; return; } if (c.pc != 0x0017A020u) [[unlikely]] return; }
L_0017A020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A028u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0017A028u) [[unlikely]] return; }
L_0017A028:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.f[12] = ld32((c.r[1].w[0] - 6328u));
    c.f[13] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A03Cu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0017A03Cu) [[unlikely]] return; }
L_0017A03C:
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 29u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A054u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001E(c, 190u, depth + 1u); else { c.pc = 0x0017A2B0u; return; } if (c.pc != 0x0017A054u) [[unlikely]] return; }
L_0017A054:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A05Cu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0017A05Cu) [[unlikely]] return; }
L_0017A05C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 6336u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = ld32((c.r[2].w[0]));
    c.f[13] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A07Cu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0017A07Cu) [[unlikely]] return; }
L_0017A07C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A084u);  if (depth < kMaxDepth) unit_004D(c, 280u, depth + 1u); else { c.pc = 0x00237AA0u; return; } if (c.pc != 0x0017A084u) [[unlikely]] return; }
L_0017A084:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 12u);  if (t) { goto L_0017A180; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A094u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_00AC(c, 67u, depth + 1u); else { c.pc = 0x003B0B80u; return; } if (c.pc != 0x0017A094u) [[unlikely]] return; }
L_0017A094:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);  if (t) { goto L_0017A190; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8926u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0017A190; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A0B4u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0017A0B4u) [[unlikely]] return; }
L_0017A0B4:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0017A150; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0017A100; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0017A0D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017A190; } }
L_0017A0D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2C00000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A0ECu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0017A0ECu) [[unlikely]] return; }
L_0017A0EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A0F4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001E(c, 187u, depth + 1u); else { c.pc = 0x0017A230u; return; } if (c.pc != 0x0017A0F4u) [[unlikely]] return; }
L_0017A0F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017A190; } }
    c.budget -= 1;
L_0017A100:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2C00000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A114u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0017A114u) [[unlikely]] return; }
L_0017A114:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A11Cu); c.r[4].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x0017A11Cu) [[unlikely]] return; }
L_0017A11C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A124u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001E(c, 187u, depth + 1u); else { c.pc = 0x0017A230u; return; } if (c.pc != 0x0017A124u) [[unlikely]] return; }
L_0017A124:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A12Cu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0017A12Cu) [[unlikely]] return; }
L_0017A12C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C00000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A140u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0017A140u) [[unlikely]] return; }
L_0017A140:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A148u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001E(c, 187u, depth + 1u); else { c.pc = 0x0017A230u; return; } if (c.pc != 0x0017A148u) [[unlikely]] return; }
L_0017A148:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017A190; } }
L_0017A150:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C00000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A164u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0017A164u) [[unlikely]] return; }
L_0017A164:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A16Cu); c.r[4].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x0017A16Cu) [[unlikely]] return; }
L_0017A16C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A174u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001E(c, 187u, depth + 1u); else { c.pc = 0x0017A230u; return; } if (c.pc != 0x0017A174u) [[unlikely]] return; }
L_0017A174:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017A190; } }
    c.budget -= 1;
L_0017A180:
    set32(c.r[4], c.r[16].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A18Cu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_00AC(c, 67u, depth + 1u); else { c.pc = 0x003B0B80u; return; } if (c.pc != 0x0017A18Cu) [[unlikely]] return; }
L_0017A18C:
    c.budget -= 1;
L_0017A190:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A198u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0017A198u) [[unlikely]] return; }
L_0017A198:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.f[12] = ld32((c.r[1].w[0] - 6336u));
    c.f[13] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A1ACu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0017A1ACu) [[unlikely]] return; }
L_0017A1AC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A1BCu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001E(c, 194u, depth + 1u); else { c.pc = 0x0017A3A0u; return; } if (c.pc != 0x0017A1BCu) [[unlikely]] return; }
L_0017A1BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A1C4u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0017A1C4u) [[unlikely]] return; }
L_0017A1C4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.f[12] = ld32((c.r[1].w[0] - 6332u));
    c.f[13] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A1D8u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0017A1D8u) [[unlikely]] return; }
L_0017A1D8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A1E8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001E(c, 194u, depth + 1u); else { c.pc = 0x0017A3A0u; return; } if (c.pc != 0x0017A1E8u) [[unlikely]] return; }
L_0017A1E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A1F0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0017A1F0u) [[unlikely]] return; }
L_0017A1F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.f[12] = ld32((c.r[1].w[0] - 6328u));
    c.f[13] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A204u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0017A204u) [[unlikely]] return; }
L_0017A204:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A214u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_001E(c, 194u, depth + 1u); else { c.pc = 0x0017A3A0u; return; } if (c.pc != 0x0017A214u) [[unlikely]] return; }
L_0017A214:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0017A230:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 2128u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[1].w[0] + 20068u), c.r[2].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A25Cu); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_001E(c, 289u, depth + 1u); else { c.pc = 0x0017B320u; return; } if (c.pc != 0x0017A25Cu) [[unlikely]] return; }
L_0017A25C:
    c.f[0] = ld32((c.r[16].w[0] + 336u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[1] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 20016u);
    set32(c.r[5], 0u + 8u);
    set32(c.r[6], 0u + 1u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A28Cu); st32((c.r[1].w[0] + 20052u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0017A28Cu) [[unlikely]] return; }
L_0017A28C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20016u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017A2B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[13] = c.f[12];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] <= 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0017A2D8; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_0017A388; } }
    c.budget -= 1;
L_0017A2D8:
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] - c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - 14192u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = c.r[7].d[0] != c.r[6].d[0]; st32((c.r[1].w[0] + 20068u), c.r[2].w[0]);  if (t) { goto L_0017A320; } }
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20052u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A314u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0017A314u) [[unlikely]] return; }
L_0017A314:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017A330; } }
    c.budget -= 1;
L_0017A320:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20052u), c.r[2].w[0]);
    c.budget -= 4;
L_0017A330:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0017A368; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A344u);  if (depth < kMaxDepth) unit_004D(c, 280u, depth + 1u); else { c.pc = 0x00237AA0u; return; } if (c.pc != 0x0017A344u) [[unlikely]] return; }
L_0017A344:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_0017A368; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = ld32((c.r[1].w[0] + 20052u));
    c.f[1] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20052u), c.f[0]);
    c.budget -= 7;
L_0017A368:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 20016u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A37Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0017A37Cu) [[unlikely]] return; }
L_0017A37C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20016u), 0u);
    c.budget -= 3;
L_0017A388:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017A3A0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[5].d[0]; set32(c.r[4], 0u + 89u);  if (t) { goto L_0017A3AC; } }
    set32(c.r[4], 0u + 90u);
    c.budget -= 1;
L_0017A3AC:
    set32(c.r[3], c.r[4].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - 14192u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 9;
    { set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  [[clang::musttail]] return unit_0076(c, 8u, depth); }
L_0017A3D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 309u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0017A498; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A3F4u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0017A3F4u) [[unlikely]] return; }
L_0017A3F4:
    c.f[13] = ld32((c.r[16].w[0] + 36u));
    c.f[14] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A404u); c.f[12] = ld32((c.r[16].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0017A404u) [[unlikely]] return; }
L_0017A404:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A40Cu); set32(c.r[4], ld32((c.r[16].w[0] + 88u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x0017A40Cu) [[unlikely]] return; }
L_0017A40C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 159u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[5], 0u + 99u);  if (t) { goto L_0017A430; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A428u); set32(c.r[17], 0u + 3u);  if (depth < kMaxDepth) unit_001E(c, 289u, depth + 1u); else { c.pc = 0x0017B320u; return; } if (c.pc != 0x0017A428u) [[unlikely]] return; }
L_0017A428:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017A440; } }
L_0017A430:
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    set32(c.r[5], 0u + 99u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A440u); set32(c.r[17], 0u + 4u);  if (depth < kMaxDepth) unit_001E(c, 289u, depth + 1u); else { c.pc = 0x0017B320u; return; } if (c.pc != 0x0017A440u) [[unlikely]] return; }
L_0017A440:
    set32(c.r[2], c.r[17].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - 14192u);
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20016u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20068u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 20016u);
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 15u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A48Cu); st32((c.r[1].w[0] + 20052u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0017A48Cu) [[unlikely]] return; }
L_0017A48C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20016u), 0u);
    c.budget -= 3;
L_0017A498:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0017A4B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017A4C0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x43E10000u);  if (t) { goto L_0017A4F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E8F0000u);
    c.f[1] = c.r[3].w[0];
    c.r[4].d[0] = c.r[2].d[0] | 23593ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x430C0000u);
    c.f[1] = fp::sub(c.f[12], c.f[1]);
    c.f[2] = c.r[4].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.f[0] = fp::sub(c.f[1], c.f[0]);  if (t) { goto L_0017A538; } }
    c.budget -= 1;
L_0017A4F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E8F0000u);
    c.r[3].d[0] = c.r[2].d[0] | 23593ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43E10000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[12], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x430C0000u);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 16;
L_0017A538:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017A540:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 18512u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[18].w[0] + 304u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A57Cu); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0017A57Cu) [[unlikely]] return; }
L_0017A57C:
    c.f[13] = ld32((c.r[18].w[0] + 36u));
    c.f[14] = ld32((c.r[18].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A58Cu); c.f[12] = ld32((c.r[18].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0017A58Cu) [[unlikely]] return; }
L_0017A58C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    c.r[2].d[0] = c.r[2].sd[0] < 80ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);  if (t) { goto L_0017A5B0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] - 12752u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 20068u), c.r[2].w[0]);  if (t) { goto L_0017A5C0; } }
    c.budget -= 1;
L_0017A5B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[2], c.r[2].w[0] - 12992u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20068u), c.r[2].w[0]);
    c.budget -= 4;
L_0017A5C0:
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st32((c.r[1].w[0] + 20016u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 104u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20052u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 42u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 99u);  if (t) { goto L_0017A628; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 159u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0017A670; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 34u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 82u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0017A670; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 101u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0017A670; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 9u);  if (t) { goto L_0017A670; } }
    c.budget -= 1;
L_0017A628:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 33u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0017A640; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017A670; } }
    c.budget -= 1;
L_0017A640:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0017A658; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 9u);  if (t) { goto L_0017A670; } }
    c.budget -= 1;
L_0017A658:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 6u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0017A670; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 9u);  if (t) { goto L_0017A670; } }
L_0017A670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A678u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));  if (depth < kMaxDepth) unit_001E(c, 289u, depth + 1u); else { c.pc = 0x0017B320u; return; } if (c.pc != 0x0017A678u) [[unlikely]] return; }
L_0017A678:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A680u); set32(c.r[4], ld32((c.r[18].w[0] + 80u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x0017A680u) [[unlikely]] return; }
L_0017A680:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[4].w[0] + 20016u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A694u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0017A694u) [[unlikely]] return; }
L_0017A694:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A69Cu); set32(c.r[4], ld32((c.r[18].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x0017A69Cu) [[unlikely]] return; }
L_0017A69C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] - 12512u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 20016u);
    st32((c.r[1].w[0] + 20068u), c.r[2].w[0]);
    set32(c.r[5], 0u + 13u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A6C0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0017A6C0u) [[unlikely]] return; }
L_0017A6C0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    c.r[1].d[0] = c.r[3].sd[0] < 80ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0017A740; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A6D8u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0017A6D8u) [[unlikely]] return; }
L_0017A6D8:
    c.f[13] = ld32((c.r[18].w[0] + 36u));
    c.f[14] = ld32((c.r[18].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A6E8u); c.f[12] = ld32((c.r[18].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0017A6E8u) [[unlikely]] return; }
L_0017A6E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A6F0u); set32(c.r[4], ld32((c.r[18].w[0] + 88u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x0017A6F0u) [[unlikely]] return; }
L_0017A6F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A708u); c.f[12] = ld32((c.r[18].w[0] + 120u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0017A708u) [[unlikely]] return; }
L_0017A708:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[3].w[0] - 8672u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20068u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 20016u);
    st32((c.r[1].w[0] + 20052u), c.r[2].w[0]);
    set32(c.r[5], 0u + 13u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A738u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0017A738u) [[unlikely]] return; }
L_0017A738:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20016u), 0u);
    c.budget -= 2;
L_0017A740:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0017A760:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 18512u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A794u); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0017A794u) [[unlikely]] return; }
L_0017A794:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A7A4u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0017A7A4u) [[unlikely]] return; }
L_0017A7A4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] - 6320u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 20016u);
    set32(c.r[5], 0u + 12u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[1].w[0] + 20068u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A7E4u); st32((c.r[1].w[0] + 20052u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0017A7E4u) [[unlikely]] return; }
L_0017A7E4:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20016u), 0u);
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 34u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017A8E8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 101u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x42C00000u);  if (t) { goto L_0017A8E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A80000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A834u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0017A834u) [[unlikely]] return; }
L_0017A834:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 34u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A858u); set32(c.r[4], c.r[2].w[0] + 161u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0017A858u) [[unlikely]] return; }
L_0017A858:
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] >> 1);
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0017A884; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0017A89C; } }
L_0017A884:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 6;
L_0017A89C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F2B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[3].d[0] | 34079ull;
    c.f[1] = c.r[3].w[0];
    c.f[13] = 0u;
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = c.r[2].w[0];
    c.f[14] = c.f[13];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A8C8u); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0017A8C8u) [[unlikely]] return; }
L_0017A8C8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 34u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F2B0000u);
    c.r[2].d[0] = c.r[2].d[0] | 34079ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A8E0u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0076(c, 73u, depth + 1u); else { c.pc = 0x002D90F0u; return; } if (c.pc != 0x0017A8E0u) [[unlikely]] return; }
L_0017A8E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017A948; } }
L_0017A8E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A80000u);
    c.f[12] = 0u;
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A8FCu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0017A8FCu) [[unlikely]] return; }
L_0017A8FC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] - 6316u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 20016u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[1].w[0] + 20068u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A93Cu); st32((c.r[1].w[0] + 20052u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0017A93Cu) [[unlikely]] return; }
L_0017A93C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20016u), 0u);
    c.budget -= 3;
L_0017A948:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0017A960:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A974u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0017A974u) [[unlikely]] return; }
L_0017A974:
    c.f[12] = ld32((c.r[16].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A988u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0017A988u) [[unlikely]] return; }
L_0017A988:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[5], 0u + 16u);
    set32(c.r[4], c.r[4].w[0] - 14912u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A99Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0017A99Cu) [[unlikely]] return; }
L_0017A99C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[5], 0u + 16u);
    set32(c.r[4], c.r[4].w[0] - 14672u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A9B0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0017A9B0u) [[unlikely]] return; }
L_0017A9B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017A9C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A9D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0017A9D4u) [[unlikely]] return; }
L_0017A9D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] - 13712u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20068u), c.r[2].w[0]);
    set32(c.r[8], 0u + 2u);
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    set32(c.r[4], c.r[4].w[0] + 20016u);
    set32(c.r[5], 0u + 14u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[1].w[0] + 20052u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20016u), c.r[8].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20056u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20060u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AA34u); st32((c.r[1].w[0] + 20064u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0017AA34u) [[unlikely]] return; }
L_0017AA34:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20016u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017AA50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_0017AB48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AA80u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0017AA80u) [[unlikely]] return; }
L_0017AA80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC36D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42FA0000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AAA0u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0017AAA0u) [[unlikely]] return; }
L_0017AAA0:
    c.f[12] = ld32((c.r[17].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AAB4u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0017AAB4u) [[unlikely]] return; }
L_0017AAB4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st32((c.r[1].w[0] + 20020u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] - 17792u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20068u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[2], 0u + 8u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20016u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 20016u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E280000u);
    st32((c.r[1].w[0] + 20052u), c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 9u);
    set32(c.r[6], 0u + 1u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[1].w[0] + 20056u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20060u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20064u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AB2Cu); st32((c.r[1].w[0] + 20024u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0017AB2Cu) [[unlikely]] return; }
L_0017AB2C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[4], c.r[4].w[0] - 17552u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AB40u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0017AB40u) [[unlikely]] return; }
L_0017AB40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20016u), 0u);
    c.budget -= 2;
L_0017AB48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0017AB60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AB74u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0017AB74u) [[unlikely]] return; }
L_0017AB74:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0017AB98; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0017AB98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017ABB8; } }
    c.budget -= 1;
L_0017AB98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1F00000u);
    c.f[12] = 0u;
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017ABACu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0017ABACu) [[unlikely]] return; }
L_0017ABAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017ABD0; } }
    c.budget -= 1;
L_0017ABB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[12] = 0u;
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017ABCCu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0017ABCCu) [[unlikely]] return; }
L_0017ABCC:
    c.budget -= 1;
L_0017ABD0:
    c.f[12] = ld32((c.r[16].w[0] + 112u));
    c.f[13] = c.f[12];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017ABE0u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0017ABE0u) [[unlikely]] return; }
L_0017ABE0:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], 0u + 3u);
    st32((c.r[1].w[0] + 20052u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0017AE80; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[6], 0u + 1u);  if (t) { goto L_0017ADA0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[6].d[0];  if (t) { goto L_0017ACE0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0017AC20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017AF28; } }
    c.budget -= 1;
L_0017AC20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] - 1952u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 20016u);
    st32((c.r[1].w[0] + 20068u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AC40u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0017AC40u) [[unlikely]] return; }
L_0017AC40:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F330000u);
    c.f[12] = c.r[3].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AC5Cu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0017AC5Cu) [[unlikely]] return; }
L_0017AC5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] - 2432u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 20016u);
    st32((c.r[1].w[0] + 20068u), c.r[2].w[0]);
    set32(c.r[5], 0u + 9u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AC80u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0017AC80u) [[unlikely]] return; }
L_0017AC80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] - 2192u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 20016u);
    st32((c.r[1].w[0] + 20068u), c.r[2].w[0]);
    set32(c.r[5], 0u + 8u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017ACA4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0017ACA4u) [[unlikely]] return; }
L_0017ACA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] - 1472u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[1].w[0] + 20068u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017ACC0u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_001E(c, 289u, depth + 1u); else { c.pc = 0x0017B320u; return; } if (c.pc != 0x0017ACC0u) [[unlikely]] return; }
L_0017ACC0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 8u);
    set32(c.r[4], c.r[4].w[0] + 20016u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017ACD4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0017ACD4u) [[unlikely]] return; }
L_0017ACD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017AF28; } }
    c.budget -= 1;
L_0017ACE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] - 1712u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 20016u);
    st32((c.r[1].w[0] + 20068u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AD00u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0017AD00u) [[unlikely]] return; }
L_0017AD00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F330000u);
    c.f[12] = c.r[3].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AD1Cu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0017AD1Cu) [[unlikely]] return; }
L_0017AD1C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] - 2432u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 20016u);
    st32((c.r[1].w[0] + 20068u), c.r[2].w[0]);
    set32(c.r[5], 0u + 9u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AD40u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0017AD40u) [[unlikely]] return; }
L_0017AD40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] - 2192u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 20016u);
    st32((c.r[1].w[0] + 20068u), c.r[2].w[0]);
    set32(c.r[5], 0u + 8u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AD64u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0017AD64u) [[unlikely]] return; }
L_0017AD64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] - 1472u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[1].w[0] + 20068u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AD80u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_001E(c, 289u, depth + 1u); else { c.pc = 0x0017B320u; return; } if (c.pc != 0x0017AD80u) [[unlikely]] return; }
L_0017AD80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 8u);
    set32(c.r[4], c.r[4].w[0] + 20016u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AD94u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0017AD94u) [[unlikely]] return; }
L_0017AD94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017AF28; } }
    c.budget -= 1;
L_0017ADA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] - 2432u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 20016u);
    st32((c.r[1].w[0] + 20068u), c.r[2].w[0]);
    set32(c.r[5], 0u + 9u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017ADC4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0017ADC4u) [[unlikely]] return; }
L_0017ADC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] - 2192u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 20016u);
    st32((c.r[1].w[0] + 20068u), c.r[2].w[0]);
    set32(c.r[5], 0u + 8u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017ADE8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0017ADE8u) [[unlikely]] return; }
L_0017ADE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] - 1472u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[1].w[0] + 20068u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AE04u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_001E(c, 289u, depth + 1u); else { c.pc = 0x0017B320u; return; } if (c.pc != 0x0017AE04u) [[unlikely]] return; }
L_0017AE04:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 8u);
    set32(c.r[4], c.r[4].w[0] + 20016u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AE18u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0017AE18u) [[unlikely]] return; }
L_0017AE18:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st32((c.r[1].w[0] + 20016u), 0u);
    c.f[12] = 0u;
    set32(c.r[2], c.r[2].w[0] + 1888u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20068u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 9;
L_0017AE3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AE44u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0017AE44u) [[unlikely]] return; }
L_0017AE44:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F990000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[12] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AE60u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0017AE60u) [[unlikely]] return; }
L_0017AE60:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 8u);
    set32(c.r[4], c.r[4].w[0] + 20016u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AE74u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0017AE74u) [[unlikely]] return; }
L_0017AE74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017AF28; } }
    c.budget -= 1;
L_0017AE80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] - 2432u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 20016u);
    st32((c.r[1].w[0] + 20068u), c.r[2].w[0]);
    set32(c.r[5], 0u + 9u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AEA4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0017AEA4u) [[unlikely]] return; }
L_0017AEA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] - 2192u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 20016u);
    st32((c.r[1].w[0] + 20068u), c.r[2].w[0]);
    set32(c.r[5], 0u + 8u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AEC8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0017AEC8u) [[unlikely]] return; }
L_0017AEC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] - 1472u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[1].w[0] + 20068u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AEE4u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_001E(c, 289u, depth + 1u); else { c.pc = 0x0017B320u; return; } if (c.pc != 0x0017AEE4u) [[unlikely]] return; }
L_0017AEE4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 8u);
    set32(c.r[4], c.r[4].w[0] + 20016u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AEF8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0017AEF8u) [[unlikely]] return; }
L_0017AEF8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st32((c.r[1].w[0] + 20016u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] - 2672u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20068u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 20016u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AF24u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0017AF24u) [[unlikely]] return; }
L_0017AF24:
    c.budget -= 1;
L_0017AF28:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20016u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017AF40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AF50u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0017AF50u) [[unlikely]] return; }
L_0017AF50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[4], c.r[4].w[0] - 752u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AF64u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0017AF64u) [[unlikely]] return; }
L_0017AF64:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AF78u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0017AF78u) [[unlikely]] return; }
L_0017AF78:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF7F0000u);
    set32(c.r[4], c.r[4].w[0] - 1472u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AF90u); c.r[6].d[0] = c.r[2].d[0] | 8192ull;  if (depth < kMaxDepth) unit_0076(c, 24u, depth + 1u); else { c.pc = 0x002D8580u; return; } if (c.pc != 0x0017AF90u) [[unlikely]] return; }
L_0017AF90:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF7F0000u);
    set32(c.r[4], c.r[4].w[0] - 1472u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AFA8u); c.r[6].d[0] = c.r[2].d[0] | 8192ull;  if (depth < kMaxDepth) unit_0076(c, 24u, depth + 1u); else { c.pc = 0x002D8580u; return; } if (c.pc != 0x0017AFA8u) [[unlikely]] return; }
L_0017AFA8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF7F0000u);
    set32(c.r[4], c.r[4].w[0] - 1472u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AFC0u); c.r[6].d[0] = c.r[2].d[0] | 8192ull;  if (depth < kMaxDepth) unit_0076(c, 24u, depth + 1u); else { c.pc = 0x002D8580u; return; } if (c.pc != 0x0017AFC0u) [[unlikely]] return; }
L_0017AFC0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[4], c.r[4].w[0] - 2192u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AFD4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0017AFD4u) [[unlikely]] return; }
L_0017AFD4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[5], 0u + 7u);
    set32(c.r[4], c.r[4].w[0] - 2432u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AFE8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0017AFE8u) [[unlikely]] return; }
L_0017AFE8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0017B000:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 18512u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], c.r[19].w[0] + 304u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B044u); set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0017B044u) [[unlikely]] return; }
L_0017B044:
    c.f[13] = ld32((c.r[19].w[0] + 36u));
    c.f[14] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B054u); c.f[12] = ld32((c.r[19].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0017B054u) [[unlikely]] return; }
L_0017B054:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_0017B098; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0017B098; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0017B098; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0017B090; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0017B090; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017B0A0; } }
L_0017B090:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 58u);  if (t) { goto L_0017B0A0; } }
L_0017B098:
    set32(c.r[18], 0u + 59u);
    c.budget -= 2;
L_0017B0A0:
    set32(c.r[2], c.r[18].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - 14192u);
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20016u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20068u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[19].w[0] + 104u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20052u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B0E4u); set32(c.r[5], 0u + 99u);  if (depth < kMaxDepth) unit_001E(c, 289u, depth + 1u); else { c.pc = 0x0017B320u; return; } if (c.pc != 0x0017B0E4u) [[unlikely]] return; }
L_0017B0E4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 12u);
    set32(c.r[4], c.r[4].w[0] + 20016u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B0F8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0017B0F8u) [[unlikely]] return; }
L_0017B0F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], 0u + 4u);
    st32((c.r[1].w[0] + 20016u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_0017B150; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0017B150; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0017B150; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0017B140; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0017B140; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017B158; } }
    c.budget -= 1;
L_0017B140:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1E00000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017B158; } }
L_0017B150:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 2;
L_0017B158:
    c.f[13] = 0u;
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B168u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0017B168u) [[unlikely]] return; }
L_0017B168:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[7], 0u + 9u);
    set32(c.r[3], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] - 14192u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 20016u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[6], 0u + 1u);
    if (c.r[8].d[0] == 0) c.r[7].d[0] = c.r[3].d[0];
    set32(c.r[3], c.r[7].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[1].w[0] + 20068u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[19].w[0] + 104u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B1B8u); st32((c.r[1].w[0] + 20052u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0017B1B8u) [[unlikely]] return; }
L_0017B1B8:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42280000u);
    c.f[13] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[14] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B1D4u); st32((c.r[1].w[0] + 20016u), 0u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0017B1D4u) [[unlikely]] return; }
L_0017B1D4:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 101u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0017B2F8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 42u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0017B260; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 159u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0017B240; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 34u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 82u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[3], 0u + 10u);  if (t) { goto L_0017B220; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017B2B0; } }
L_0017B220:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[2].d[0] = c.r[2].sd[0] < 80ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 60u);  if (t) { goto L_0017B238; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017B2B0; } }
L_0017B238:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 11u);  if (t) { goto L_0017B2B0; } }
L_0017B240:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[2].d[0] = c.r[2].sd[0] < 80ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 13u);  if (t) { goto L_0017B258; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017B2B0; } }
L_0017B258:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 12u);  if (t) { goto L_0017B2B0; } }
L_0017B260:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 33u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 10u);  if (t) { goto L_0017B278; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017B2B0; } }
    c.budget -= 1;
L_0017B278:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 11u);  if (t) { goto L_0017B290; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017B2B0; } }
    c.budget -= 1;
L_0017B290:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 6u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[3], 0u + 11u);  if (t) { goto L_0017B2A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017B2B0; } }
L_0017B2A8:
    set32(c.r[3], 0u + 12u);
    c.budget -= 2;
L_0017B2B0:
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - 14192u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 20016u);
    st32((c.r[1].w[0] + 20068u), c.r[2].w[0]);
    set32(c.r[5], 0u + 10u);
    c.f[0] = ld32((c.r[19].w[0] + 104u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B2F0u); st32((c.r[1].w[0] + 20052u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0017B2F0u) [[unlikely]] return; }
L_0017B2F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20016u), 0u);
    c.budget -= 2;
L_0017B2F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0017B320:
    set32(c.r[6], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], 0u + 99u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; st32((c.r[1].w[0] + 20016u), c.r[6].w[0]);  if (t) { goto L_0017B5C0; } }
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 8u);  if (t) { goto L_0017B5A0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0017B580; } }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 5u);  if (t) { goto L_0017B560; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0017B540; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_0017B4E8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0017B490; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[6].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0017B440; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0017B3E8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0017B390; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017B5C0; } }
L_0017B390:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);  if (t) { goto L_0017B3C0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20056u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
    st32((c.r[1].w[0] + 20060u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 20064u), c.r[3].w[0]);  if (t) { goto L_0017B610; } }
    c.budget -= 1;
L_0017B3C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42100000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20056u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20060u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 20064u), c.r[3].w[0]);  if (t) { goto L_0017B610; } }
L_0017B3E8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x42280000u);  if (t) { goto L_0017B418; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20056u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42980000u);
    st32((c.r[1].w[0] + 20060u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 20064u), c.r[3].w[0]);  if (t) { goto L_0017B610; } }
    c.budget -= 1;
L_0017B418:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20056u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42400000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20060u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 20064u), c.r[3].w[0]);  if (t) { goto L_0017B610; } }
    c.budget -= 1;
L_0017B440:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x41980000u);  if (t) { goto L_0017B468; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20064u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20056u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 20060u), c.r[4].w[0]);  if (t) { goto L_0017B610; } }
L_0017B468:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20056u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20060u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 20064u), c.r[3].w[0]);  if (t) { goto L_0017B610; } }
    c.budget -= 1;
L_0017B490:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x41D00000u);  if (t) { goto L_0017B4C0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20056u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41E80000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42580000u);
    st32((c.r[1].w[0] + 20060u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 20064u), c.r[3].w[0]);  if (t) { goto L_0017B610; } }
    c.budget -= 1;
L_0017B4C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42600000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20056u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41D00000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20060u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 20064u), c.r[3].w[0]);  if (t) { goto L_0017B610; } }
L_0017B4E8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x428E0000u);  if (t) { goto L_0017B518; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20056u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    st32((c.r[1].w[0] + 20060u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 20064u), c.r[3].w[0]);  if (t) { goto L_0017B610; } }
    c.budget -= 1;
L_0017B518:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20056u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x428E0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20060u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 20064u), c.r[3].w[0]);  if (t) { goto L_0017B610; } }
L_0017B540:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20056u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20064u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 20060u), c.r[3].w[0]);  if (t) { goto L_0017B610; } }
L_0017B560:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20064u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20056u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 20060u), c.r[3].w[0]);  if (t) { goto L_0017B610; } }
L_0017B580:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20064u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20056u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 20060u), c.r[3].w[0]);  if (t) { goto L_0017B610; } }
L_0017B5A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20056u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42DC0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20064u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 20060u), c.r[3].w[0]);  if (t) { goto L_0017B610; } }
L_0017B5C0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);  if (t) { goto L_0017B5F0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20056u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[1].w[0] + 20060u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 20064u), c.r[3].w[0]);  if (t) { goto L_0017B610; } }
    c.budget -= 1;
L_0017B5F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20056u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20060u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 20064u), c.r[3].w[0]);
    c.budget -= 8;
L_0017B610:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017B620:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] - 6271u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0017B810; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23824u)));
    c.r[16].d[0] = c.r[3].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ll < c.r[16].sd[0] ? 1ull : 0ull;  if (t) { goto L_0017B810; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0017B810; } }
L_0017B680:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B690u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x0017B690u) [[unlikely]] return; }
L_0017B690:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017B6F8; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00180000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00180000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[7], 0u + 19u);
    set32(c.r[6], 0u + 23u);
    set32(c.r[5], c.r[5].w[0] - 18384u);
    set32(c.r[4], c.r[4].w[0] - 17184u);
    set32(c.r[3], c.r[3].w[0] - 6272u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[2].w[0] + 24u), c.r[18].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[18].w[0] + 8658u));
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[2].w[0] + 376u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 375u), static_cast<std::uint8_t>(0u));
    c.budget -= 24;
L_0017B6F8:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B708u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x0017B708u) [[unlikely]] return; }
L_0017B708:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017B778; } }
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00180000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00180000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[8], 0u + 19u);
    set32(c.r[7], 0u + 23u);
    set32(c.r[6], c.r[6].w[0] - 18384u);
    set32(c.r[5], c.r[5].w[0] - 17184u);
    set32(c.r[4], c.r[4].w[0] - 6272u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[2].w[0] + 24u), c.r[18].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[18].w[0] + 8658u));
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    st8((c.r[2].w[0] + 376u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 375u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 26;
L_0017B778:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B788u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x0017B788u) [[unlikely]] return; }
L_0017B788:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017B7F8; } }
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00180000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00180000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[8], 0u + 19u);
    set32(c.r[7], 0u + 23u);
    set32(c.r[6], c.r[6].w[0] - 18384u);
    set32(c.r[5], c.r[5].w[0] - 17184u);
    set32(c.r[4], c.r[4].w[0] - 6272u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[2].w[0] + 24u), c.r[18].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[18].w[0] + 8658u));
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    st8((c.r[2].w[0] + 376u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 375u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 26;
L_0017B7F8:
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[3].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017B680u | kUnwind; return; } goto L_0017B680; } }
L_0017B810:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0017B830:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[2], c.r[2].w[0] + 9760u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00178000u < 16384u) { entry = entries_001E[(t - 0x00178000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0017B850:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[7], c.r[7].w[0] + 9168u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[5].w[0] + 9172u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - 6160u);
    set32(c.r[2], 0u + 2u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 376u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 375u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[10], c.r[9].w[0] << 4);
    set32(c.r[9], c.r[7].w[0] + c.r[10].w[0]);
    set32(c.r[7], c.r[5].w[0] + c.r[10].w[0]);
    set32(c.r[17], ld32((c.r[9].w[0])));
    set32(c.r[5], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[16], ld32((c.r[7].w[0])));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[17].w[0] + c.r[5].w[0]);
    c.r[6].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[4].w[0] + 372u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 375u)));
    c.budget -= 41;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[18], c.r[19].w[0] + 304u);  if (t) { goto L_0017B910; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B8FCu);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x0017B8FCu) [[unlikely]] return; }
L_0017B8FC:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = ld8((c.r[18].w[0] + 68u));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[18].w[0] + 68u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_0017B910:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    st8((c.r[18].w[0] + 69u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[18].w[0] + 64u), c.r[3].w[0]);
    st8((c.r[18].w[0] + 70u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[19].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st16((c.r[19].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 166u)));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017B968; } }
    st8((c.r[18].w[0] + 70u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0017B968:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[5], c.r[5].w[0] + 9776u);
    set32(c.r[3], c.r[3].w[0] + 9780u);
    set32(c.r[2], c.r[2].w[0] + 9784u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[17].w[0]);
    c.r[6].d[0] = ld16((c.r[6].w[0] + 4u));
    st32((c.r[19].w[0] + 80u), c.r[6].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[17].w[0]);
    c.r[6].d[0] = ld16((c.r[6].w[0] + 8u));
    st32((c.r[19].w[0] + 84u), c.r[6].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[17].w[0]);
    c.r[6].d[0] = ld16((c.r[6].w[0] + 12u));
    st32((c.r[19].w[0] + 88u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 71u)));
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[19].w[0] + 112u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 71u)));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[19].w[0] + 116u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 71u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[19].w[0] + 120u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[19].w[0] + 48u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[19].w[0] + 52u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.budget -= 65;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BA6Cu); st32((c.r[19].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_001E(c, 299u, depth + 1u); else { c.pc = 0x0017BA90u; return; } if (c.pc != 0x0017BA6Cu) [[unlikely]] return; }
L_0017BA6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0017BA90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_0017BAD8; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 1236u)));
    set32(c.r[4], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 69u)));
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0017BAE8; } }
    c.budget -= 1;
L_0017BAD8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0017BCA0; } }
L_0017BAE8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0017BB78; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0017BB70; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 71u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0017BB68; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 69u)));
    set32(c.r[6], 0u + 26064u);
    set32(c.r[5], c.r[5].w[0] - 608u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8656u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    mmi::mult(c, 0, c.r[7].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BB58u); set32(c.r[5], c.r[2].w[0] + 816u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0017BB58u) [[unlikely]] return; }
L_0017BB58:
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BB68u); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_004B(c, 47u, depth + 1u); else { c.pc = 0x0022C950u; return; } if (c.pc != 0x0017BB68u) [[unlikely]] return; }
L_0017BB68:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 70u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0017BB70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017BCA0; } }
L_0017BB78:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.r[1].d[0] = c.r[4].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0017BB98; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0017BB98:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 71u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0017BC08; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0; c.r[3].d[0] = c.r[4].d[0] & 1ull;  if (t) { goto L_0017BBC0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0017BBC0; } }
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 1;
L_0017BBC0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0017BC68; } }
    c.f[1] = ld32((c.r[17].w[0] + 112u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);  if (t) { goto L_0017BBF8; } }
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    st32((c.r[17].w[0] + 112u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 116u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 120u), c.r[3].w[0]);  if (t) { goto L_0017BC68; } }
L_0017BBF8:
    st32((c.r[17].w[0] + 112u), c.f[0]);
    st32((c.r[17].w[0] + 116u), c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 120u), c.f[0]);  if (t) { goto L_0017BC68; } }
L_0017BC08:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0; c.r[3].d[0] = c.r[4].d[0] & 1ull;  if (t) { goto L_0017BC20; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0017BC20; } }
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 1;
L_0017BC20:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0017BC68; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 68u));
    set32(c.r[3], 0u + 40u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 68u));
    c.budget -= 5;
L_0017BC3C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 45u);  if (t) { goto L_0017BC58; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0017BC58; } }
    set32(c.r[3], 0u + 50u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0017BC68; } }
L_0017BC58:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 68u));
    set32(c.r[3], c.r[3].w[0] - 4u);
    st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0017BC68:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0017BC98; } }
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBDCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.budget -= 8;
L_0017BC98:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0017BCA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0017BCC0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0017BCD0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_0017BCE0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] + 29024u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[19].w[0] + 304u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 374u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 51u)));
    set32(c.r[4], c.r[6].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 7);
    c.budget -= 19;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[17], c.r[5].w[0] + c.r[4].w[0]);  if (t) { [[clang::musttail]] return unit_001F(c, 5u, depth); } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017BD40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017BDB0; } }
L_0017BD40:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 69u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BD54u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0017BD54u) [[unlikely]] return; }
L_0017BD54:
    set32(c.r[4], c.r[19].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BD60u); set32(c.r[5], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0017BD60u) [[unlikely]] return; }
L_0017BD60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BD68u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0017BD68u) [[unlikely]] return; }
L_0017BD68:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 69u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BD7Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x0017BD7Cu) [[unlikely]] return; }
L_0017BD7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BD84u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0017BD84u) [[unlikely]] return; }
L_0017BD84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BD8Cu);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0017BD8Cu) [[unlikely]] return; }
L_0017BD8C:
    c.f[13] = ld32((c.r[19].w[0] + 36u));
    c.f[14] = ld32((c.r[19].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BD9Cu); c.f[12] = ld32((c.r[19].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0017BD9Cu) [[unlikely]] return; }
L_0017BD9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BDA4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x0017BDA4u) [[unlikely]] return; }
L_0017BDA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BDACu); set32(c.r[4], c.r[19].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0017BDACu) [[unlikely]] return; }
L_0017BDAC:
    c.budget -= 1;
L_0017BDB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BDB8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0017BDB8u) [[unlikely]] return; }
L_0017BDB8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BDC8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 225u, depth + 1u); else { c.pc = 0x00102370u; return; } if (c.pc != 0x0017BDC8u) [[unlikely]] return; }
L_0017BDC8:
    set32(c.r[5], c.r[17].w[0] + 16u);
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BDD8u); set32(c.r[6], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0017BDD8u) [[unlikely]] return; }
L_0017BDD8:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BDE4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x0017BDE4u) [[unlikely]] return; }
L_0017BDE4:
    c.f[13] = ld32((c.r[29].w[0] + 232u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BDF0u); c.f[12] = ld32((c.r[29].w[0] + 224u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0017BDF0u) [[unlikely]] return; }
L_0017BDF0:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BDFCu); set32(c.r[4], c.r[19].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0017BDFCu) [[unlikely]] return; }
L_0017BDFC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 71u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0017BF78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BE14u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x0017BE14u) [[unlikely]] return; }
L_0017BE14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BE1Cu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0017BE1Cu) [[unlikely]] return; }
L_0017BE1C:
    c.f[4] = ld32((c.r[29].w[0] + 128u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = ld32((c.r[29].w[0] + 132u));
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 136u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    st32((c.r[29].w[0] + 144u), c.f[4]);
    st32((c.r[29].w[0] + 148u), c.f[3]);
    st32((c.r[29].w[0] + 152u), c.f[1]);
    c.f[1] = ld32((c.r[18].w[0] + 64u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 18;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0017BE74; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[29].w[0] + 144u);  if (t) { goto L_0017BE90; } }
L_0017BE74:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[2], c.r[29].w[0] + 144u);
    c.budget -= 7;
L_0017BE90:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20244u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[2], c.r[28].w[0] - 32672u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20260u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 9824u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[28].w[0] - 32669u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[1].w[0] + 20268u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.f[0] = ld32((c.r[19].w[0] + 112u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[3], c.r[3].w[0] + 10064u);
    set32(c.r[2], c.r[2].w[0] + 10304u);
    set32(c.r[4], 0u + 4u);
    st32((c.r[1].w[0] + 20224u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 116u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20228u), c.f[0]);
    c.r[6].d[0] = ld8((c.r[18].w[0] + 68u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[6], c.r[6].w[0] - 35u);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[1].w[0] + 20256u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[18].w[0] + 68u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[5], c.r[5].w[0] - 35u);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[1].w[0] + 20252u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 68u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] - 35u);
    st32((c.r[1].w[0] + 20288u), 0u);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 42;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BF38u); st32((c.r[1].w[0] + 20272u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0048(c, 23u, depth + 1u); else { c.pc = 0x00220380u; return; } if (c.pc != 0x0017BF38u) [[unlikely]] return; }
L_0017BF38:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20276u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 20224u);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20280u), c.r[2].w[0]);
    set32(c.r[2], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st16((c.r[1].w[0] + 20284u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BF70u); st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0067(c, 3u, depth + 1u); else { c.pc = 0x0029C020u; return; } if (c.pc != 0x0017BF70u) [[unlikely]] return; }
L_0017BF70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_001F(c, 5u, depth); } }
L_0017BF78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BF80u); set32(c.r[4], ld32((c.r[19].w[0] + 88u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x0017BF80u) [[unlikely]] return; }
L_0017BF80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BF88u); set32(c.r[4], ld32((c.r[19].w[0] + 80u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x0017BF88u) [[unlikely]] return; }
L_0017BF88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BF90u); set32(c.r[4], ld32((c.r[19].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x0017BF90u) [[unlikely]] return; }
L_0017BF90:
    c.f[13] = ld32((c.r[19].w[0] + 116u));
    c.f[14] = ld32((c.r[19].w[0] + 120u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BFA0u); c.f[12] = ld32((c.r[19].w[0] + 112u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0017BFA0u) [[unlikely]] return; }
L_0017BFA0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st8((c.r[1].w[0] + 20292u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[2], c.r[29].w[0] + 160u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20240u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 9824u);
    set32(c.r[2], c.r[28].w[0] - 32672u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20260u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 10064u);
    c.r[6].d[0] = ld8((c.r[18].w[0] + 68u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] + 10304u);
    set32(c.r[4], 0u + 4u);
    set32(c.r[6], c.r[6].w[0] - 35u);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[1].w[0] + 20256u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[18].w[0] + 68u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[5], c.r[5].w[0] - 35u);
    c.budget -= 24;
    [[clang::musttail]] return unit_001F(c, 1u, depth);
}

}
