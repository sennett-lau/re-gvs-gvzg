#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0076[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 9,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0,
    0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0,
    18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0,
    24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    32, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0,
    0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0,
    44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0,
    0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 58,
    0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0,
    63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0,
    0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0,
    90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0,
    0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0,
    0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 107, 0, 108, 0, 0, 0, 0,
    109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    131, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 134,
    0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    137, 0, 0, 0, 138, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 142, 0, 143, 0, 144, 0, 145, 0, 146, 0, 147, 0, 148, 0,
    149, 0, 150, 0, 0, 151, 0, 152, 0, 153, 0, 154, 0, 155, 0, 156, 0, 157, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 160,
    0, 161, 0, 162, 0, 163, 0, 164, 0, 165, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 168, 0, 169,
    0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 177, 0, 178, 0, 179, 0, 180, 0, 0, 181, 0, 182, 0, 0, 0, 183,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 185, 0, 186, 0, 187, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 209, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0,
    0, 216, 0, 0, 0, 0, 217, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    226, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0,
    0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0,
    237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0,
    0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 258,
    0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0,
    0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0,
    0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 297, 0,
    0, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0,
    312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0076(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002D8000;
    case 2u: goto L_002D8010;
    case 3u: goto L_002D8030;
    case 4u: goto L_002D8040;
    case 5u: goto L_002D8058;
    case 6u: goto L_002D8090;
    case 7u: goto L_002D80A8;
    case 8u: goto L_002D80E0;
    case 9u: goto L_002D80FC;
    case 10u: goto L_002D8170;
    case 11u: goto L_002D818C;
    case 12u: goto L_002D82D0;
    case 13u: goto L_002D8304;
    case 14u: goto L_002D8314;
    case 15u: goto L_002D8328;
    case 16u: goto L_002D8340;
    case 17u: goto L_002D836C;
    case 18u: goto L_002D8380;
    case 19u: goto L_002D83B4;
    case 20u: goto L_002D83C4;
    case 21u: goto L_002D83D8;
    case 22u: goto L_002D83F0;
    case 23u: goto L_002D856C;
    case 24u: goto L_002D8580;
    case 25u: goto L_002D85B4;
    case 26u: goto L_002D8728;
    case 27u: goto L_002D873C;
    case 28u: goto L_002D8760;
    case 29u: goto L_002D8778;
    case 30u: goto L_002D87B0;
    case 31u: goto L_002D87C8;
    case 32u: goto L_002D8800;
    case 33u: goto L_002D881C;
    case 34u: goto L_002D8890;
    case 35u: goto L_002D88AC;
    case 36u: goto L_002D89F0;
    case 37u: goto L_002D8A20;
    case 38u: goto L_002D8A30;
    case 39u: goto L_002D8A70;
    case 40u: goto L_002D8A84;
    case 41u: goto L_002D8A9C;
    case 42u: goto L_002D8AC0;
    case 43u: goto L_002D8AE0;
    case 44u: goto L_002D8B00;
    case 45u: goto L_002D8B20;
    case 46u: goto L_002D8BC0;
    case 47u: goto L_002D8BD0;
    case 48u: goto L_002D8BE0;
    case 49u: goto L_002D8BF0;
    case 50u: goto L_002D8C48;
    case 51u: goto L_002D8C60;
    case 52u: goto L_002D8C78;
    case 53u: goto L_002D8C90;
    case 54u: goto L_002D8CA8;
    case 55u: goto L_002D8CC0;
    case 56u: goto L_002D8CDC;
    case 57u: goto L_002D8CEC;
    case 58u: goto L_002D8CFC;
    case 59u: goto L_002D8D0C;
    case 60u: goto L_002D8D24;
    case 61u: goto L_002D8D44;
    case 62u: goto L_002D8D68;
    case 63u: goto L_002D8D80;
    case 64u: goto L_002D8D98;
    case 65u: goto L_002D8DB0;
    case 66u: goto L_002D8E20;
    case 67u: goto L_002D8E64;
    case 68u: goto L_002D8EA0;
    case 69u: goto L_002D8EB0;
    case 70u: goto L_002D8ED0;
    case 71u: goto L_002D8F30;
    case 72u: goto L_002D8F60;
    case 73u: goto L_002D90F0;
    case 74u: goto L_002D9130;
    case 75u: goto L_002D9144;
    case 76u: goto L_002D9160;
    case 77u: goto L_002D91A8;
    case 78u: goto L_002D91BC;
    case 79u: goto L_002D91D0;
    case 80u: goto L_002D9208;
    case 81u: goto L_002D921C;
    case 82u: goto L_002D9278;
    case 83u: goto L_002D9290;
    case 84u: goto L_002D92AC;
    case 85u: goto L_002D92C4;
    case 86u: goto L_002D92D8;
    case 87u: goto L_002D9300;
    case 88u: goto L_002D9344;
    case 89u: goto L_002D9368;
    case 90u: goto L_002D9380;
    case 91u: goto L_002D93B8;
    case 92u: goto L_002D93CC;
    case 93u: goto L_002D9428;
    case 94u: goto L_002D9440;
    case 95u: goto L_002D945C;
    case 96u: goto L_002D9474;
    case 97u: goto L_002D9488;
    case 98u: goto L_002D94B0;
    case 99u: goto L_002D9550;
    case 100u: goto L_002D95BC;
    case 101u: goto L_002D95D0;
    case 102u: goto L_002D95E0;
    case 103u: goto L_002D95F8;
    case 104u: goto L_002D9610;
    case 105u: goto L_002D9620;
    case 106u: goto L_002D9658;
    case 107u: goto L_002D9664;
    case 108u: goto L_002D966C;
    case 109u: goto L_002D9680;
    case 110u: goto L_002D96A0;
    case 111u: goto L_002D96E4;
    case 112u: goto L_002D9710;
    case 113u: goto L_002D9730;
    case 114u: goto L_002D9838;
    case 115u: goto L_002D9888;
    case 116u: goto L_002D98CC;
    case 117u: goto L_002D98E4;
    case 118u: goto L_002D992C;
    case 119u: goto L_002D9968;
    case 120u: goto L_002D99B8;
    case 121u: goto L_002D99E0;
    case 122u: goto L_002D9A10;
    case 123u: goto L_002D9A60;
    case 124u: goto L_002D9AA4;
    case 125u: goto L_002D9ABC;
    case 126u: goto L_002D9AD8;
    case 127u: goto L_002D9B14;
    case 128u: goto L_002D9B3C;
    case 129u: goto L_002D9BA0;
    case 130u: goto L_002D9BC8;
    case 131u: goto L_002D9C00;
    case 132u: goto L_002D9C24;
    case 133u: goto L_002D9C58;
    case 134u: goto L_002D9C7C;
    case 135u: goto L_002D9C90;
    case 136u: goto L_002D9CC8;
    case 137u: goto L_002D9D00;
    case 138u: goto L_002D9D10;
    case 139u: goto L_002D9D1C;
    case 140u: goto L_002D9D30;
    case 141u: goto L_002D9D40;
    case 142u: goto L_002D9D48;
    case 143u: goto L_002D9D50;
    case 144u: goto L_002D9D58;
    case 145u: goto L_002D9D60;
    case 146u: goto L_002D9D68;
    case 147u: goto L_002D9D70;
    case 148u: goto L_002D9D78;
    case 149u: goto L_002D9D80;
    case 150u: goto L_002D9D88;
    case 151u: goto L_002D9D94;
    case 152u: goto L_002D9D9C;
    case 153u: goto L_002D9DA4;
    case 154u: goto L_002D9DAC;
    case 155u: goto L_002D9DB4;
    case 156u: goto L_002D9DBC;
    case 157u: goto L_002D9DC4;
    case 158u: goto L_002D9DCC;
    case 159u: goto L_002D9DF4;
    case 160u: goto L_002D9DFC;
    case 161u: goto L_002D9E04;
    case 162u: goto L_002D9E0C;
    case 163u: goto L_002D9E14;
    case 164u: goto L_002D9E1C;
    case 165u: goto L_002D9E24;
    case 166u: goto L_002D9E30;
    case 167u: goto L_002D9E68;
    case 168u: goto L_002D9E74;
    case 169u: goto L_002D9E7C;
    case 170u: goto L_002D9E90;
    case 171u: goto L_002D9EB0;
    case 172u: goto L_002D9EEC;
    case 173u: goto L_002D9F20;
    case 174u: goto L_002D9F30;
    case 175u: goto L_002D9F38;
    case 176u: goto L_002D9FB8;
    case 177u: goto L_002D9FC0;
    case 178u: goto L_002D9FC8;
    case 179u: goto L_002D9FD0;
    case 180u: goto L_002D9FD8;
    case 181u: goto L_002D9FE4;
    case 182u: goto L_002D9FEC;
    case 183u: goto L_002D9FFC;
    case 184u: goto L_002DA024;
    case 185u: goto L_002DA02C;
    case 186u: goto L_002DA034;
    case 187u: goto L_002DA03C;
    case 188u: goto L_002DA044;
    case 189u: goto L_002DA050;
    case 190u: goto L_002DA078;
    case 191u: goto L_002DA0D0;
    case 192u: goto L_002DA10C;
    case 193u: goto L_002DA120;
    case 194u: goto L_002DA14C;
    case 195u: goto L_002DA184;
    case 196u: goto L_002DA1CC;
    case 197u: goto L_002DA21C;
    case 198u: goto L_002DA230;
    case 199u: goto L_002DA2D0;
    case 200u: goto L_002DA340;
    case 201u: goto L_002DA360;
    case 202u: goto L_002DA3B0;
    case 203u: goto L_002DA520;
    case 204u: goto L_002DA538;
    case 205u: goto L_002DA5AC;
    case 206u: goto L_002DA5C8;
    case 207u: goto L_002DA620;
    case 208u: goto L_002DA658;
    case 209u: goto L_002DA690;
    case 210u: goto L_002DA698;
    case 211u: goto L_002DA6B0;
    case 212u: goto L_002DA6F0;
    case 213u: goto L_002DA728;
    case 214u: goto L_002DA758;
    case 215u: goto L_002DA770;
    case 216u: goto L_002DA784;
    case 217u: goto L_002DA798;
    case 218u: goto L_002DA7A0;
    case 219u: goto L_002DA820;
    case 220u: goto L_002DA830;
    case 221u: goto L_002DA840;
    case 222u: goto L_002DA894;
    case 223u: goto L_002DA8B8;
    case 224u: goto L_002DA90C;
    case 225u: goto L_002DA924;
    case 226u: goto L_002DA980;
    case 227u: goto L_002DA990;
    case 228u: goto L_002DA9A0;
    case 229u: goto L_002DA9C4;
    case 230u: goto L_002DAA20;
    case 231u: goto L_002DAA30;
    case 232u: goto L_002DAA40;
    case 233u: goto L_002DAA68;
    case 234u: goto L_002DAA84;
    case 235u: goto L_002DAAE0;
    case 236u: goto L_002DAAF0;
    case 237u: goto L_002DAB00;
    case 238u: goto L_002DAB40;
    case 239u: goto L_002DAB5C;
    case 240u: goto L_002DABB0;
    case 241u: goto L_002DABC0;
    case 242u: goto L_002DABD0;
    case 243u: goto L_002DABF0;
    case 244u: goto L_002DAC10;
    case 245u: goto L_002DAC90;
    case 246u: goto L_002DACC0;
    case 247u: goto L_002DACFC;
    case 248u: goto L_002DAD2C;
    case 249u: goto L_002DAD38;
    case 250u: goto L_002DAD4C;
    case 251u: goto L_002DAE10;
    case 252u: goto L_002DAE44;
    case 253u: goto L_002DAE4C;
    case 254u: goto L_002DAE60;
    case 255u: goto L_002DAE74;
    case 256u: goto L_002DAF2C;
    case 257u: goto L_002DAFEC;
    case 258u: goto L_002DAFFC;
    case 259u: goto L_002DB00C;
    case 260u: goto L_002DB030;
    case 261u: goto L_002DB140;
    case 262u: goto L_002DB160;
    case 263u: goto L_002DB198;
    case 264u: goto L_002DB210;
    case 265u: goto L_002DB22C;
    case 266u: goto L_002DB244;
    case 267u: goto L_002DB25C;
    case 268u: goto L_002DB274;
    case 269u: goto L_002DB28C;
    case 270u: goto L_002DB2A4;
    case 271u: goto L_002DB2BC;
    case 272u: goto L_002DB2D0;
    case 273u: goto L_002DB3A0;
    case 274u: goto L_002DB3D0;
    case 275u: goto L_002DB3F8;
    case 276u: goto L_002DB420;
    case 277u: goto L_002DB448;
    case 278u: goto L_002DB470;
    case 279u: goto L_002DB498;
    case 280u: goto L_002DB4C0;
    case 281u: goto L_002DB500;
    case 282u: goto L_002DB544;
    case 283u: goto L_002DB5E0;
    case 284u: goto L_002DB7C0;
    case 285u: goto L_002DB860;
    case 286u: goto L_002DB8F0;
    case 287u: goto L_002DB998;
    case 288u: goto L_002DB9B4;
    case 289u: goto L_002DB9EC;
    case 290u: goto L_002DBA08;
    case 291u: goto L_002DBA2C;
    case 292u: goto L_002DBA3C;
    case 293u: goto L_002DBA58;
    case 294u: goto L_002DBA68;
    case 295u: goto L_002DBAC4;
    case 296u: goto L_002DBADC;
    case 297u: goto L_002DBAF8;
    case 298u: goto L_002DBB10;
    case 299u: goto L_002DBB20;
    case 300u: goto L_002DBB40;
    case 301u: goto L_002DBB70;
    case 302u: goto L_002DBBD0;
    case 303u: goto L_002DBC80;
    case 304u: goto L_002DBD50;
    case 305u: goto L_002DBD88;
    case 306u: goto L_002DBDE0;
    case 307u: goto L_002DBE28;
    case 308u: goto L_002DBE4C;
    case 309u: goto L_002DBEA0;
    case 310u: goto L_002DBF10;
    case 311u: goto L_002DBF5C;
    case 312u: goto L_002DBF80;
    case 313u: goto L_002DBFD0;
    default: bad_entry(c, 0x002D8000u); return;
    }
L_002D8000:
    st32((c.r[28].w[0] - 23264u), c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 23268u), c.r[3].w[0]);  if (t) { goto L_002D8030; } }
    c.budget -= 1;
L_002D8010:
    set32(c.r[3], ld32((c.r[28].w[0] - 23272u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23272u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23276u)));
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[28].w[0] - 23272u), c.r[4].w[0]);
    st32((c.r[28].w[0] - 23276u), c.r[3].w[0]);
    c.budget -= 8;
L_002D8030:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D8040:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8058u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0075(c, 170u, depth + 1u); else { c.pc = 0x002D7EA0u; return; } if (c.pc != 0x002D8058u) [[unlikely]] return; }
L_002D8058:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002D8078; } }
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 4u), c.r[8].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[7].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 6;
L_002D8078:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D8090:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D80A8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0075(c, 171u, depth + 1u); else { c.pc = 0x002D7F70u; return; } if (c.pc != 0x002D80A8u) [[unlikely]] return; }
L_002D80A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_002D80C8; } }
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 4u), c.r[8].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[7].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 6;
L_002D80C8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D80E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[9].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D80FCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0075(c, 169u, depth + 1u); else { c.pc = 0x002D7DC0u; return; } if (c.pc != 0x002D80FCu) [[unlikely]] return; }
L_002D80FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D8158; } }
    st32((c.r[2].w[0] + 4u), c.r[9].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[2].w[0] + 208u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[2].w[0] + 368u), 0u);
    st32((c.r[2].w[0] + 372u), 0u);
    set32(c.r[3], ld32((c.r[1].w[0] + 244u)));
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[8]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[9]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[10]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[11]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[8]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[9]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[10]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[11]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[2].w[0] + 284u), c.f[0]);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 21;
L_002D8158:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D8170:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[9].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D818Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0075(c, 169u, depth + 1u); else { c.pc = 0x002D7DC0u; return; } if (c.pc != 0x002D818Cu) [[unlikely]] return; }
L_002D818C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D82B8; } }
    set32(c.r[4], ld32((c.r[9].w[0] + 52u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[5], c.r[2].w[0] + 208u);
    st32((c.r[2].w[0] + 4u), c.r[4].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.f[0] = ld32((c.r[9].w[0] + 36u));
    st32((c.r[2].w[0] + 284u), c.f[0]);
    c.f[0] = ld32((c.r[9].w[0] + 4u));
    st32((c.r[2].w[0] + 288u), c.f[0]);
    c.f[0] = ld32((c.r[9].w[0] + 8u));
    st32((c.r[2].w[0] + 292u), c.f[0]);
    st32((c.r[2].w[0] + 296u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 300u), 0u);
    c.f[0] = ld32((c.r[9].w[0] + 12u));
    st32((c.r[2].w[0] + 304u), c.f[0]);
    c.f[0] = ld32((c.r[9].w[0] + 16u));
    st32((c.r[2].w[0] + 308u), c.f[0]);
    st32((c.r[2].w[0] + 312u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 316u), 0u);
    c.f[0] = ld32((c.r[9].w[0] + 20u));
    st32((c.r[2].w[0] + 320u), c.f[0]);
    c.f[0] = ld32((c.r[9].w[0] + 24u));
    st32((c.r[2].w[0] + 324u), c.f[0]);
    st32((c.r[2].w[0] + 328u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 332u), 0u);
    c.f[0] = ld32((c.r[9].w[0] + 28u));
    st32((c.r[2].w[0] + 336u), c.f[0]);
    c.f[0] = ld32((c.r[9].w[0] + 32u));
    st32((c.r[2].w[0] + 340u), c.f[0]);
    st32((c.r[2].w[0] + 344u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 348u), 0u);
    c.f[0] = ld32((c.r[9].w[0] + 40u));
    st32((c.r[2].w[0] + 352u), c.f[0]);
    c.f[0] = ld32((c.r[9].w[0] + 44u));
    st32((c.r[2].w[0] + 356u), c.f[0]);
    c.f[0] = ld32((c.r[9].w[0] + 48u));
    st32((c.r[2].w[0] + 360u), c.f[0]);
    st32((c.r[2].w[0] + 364u), 0u);
    set32(c.r[3], ld32((c.r[1].w[0] + 244u)));
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[8]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[9]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[10]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[11]);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[8]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[9]);
    st128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[10]);
    st128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[11]);
    set32(c.r[3], ld32((c.r[9].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 53;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D8278; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 368u), c.r[3].w[0]);  if (t) { goto L_002D8280; } }
    c.budget -= 1;
L_002D8278:
    st32((c.r[2].w[0] + 368u), 0u);
    c.budget -= 2;
L_002D8280:
    st32((c.r[2].w[0] + 372u), 0u);
    set32(c.r[3], ld32((c.r[9].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002D8298; } }
    st32((c.r[2].w[0] + 372u), c.r[3].w[0]);
    c.budget -= 1;
L_002D8298:
    set32(c.r[3], ld32((c.r[9].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_002D82B0; } }
    st32((c.r[2].w[0] + 372u), c.r[3].w[0]);
    c.budget -= 2;
L_002D82B0:
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 2;
L_002D82B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D82D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[4], c.r[4].w[0] - 16848u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8304u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 4u, depth + 1u); else { c.pc = 0x002D8040u; return; } if (c.pc != 0x002D8304u) [[unlikely]] return; }
L_002D8304:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8314u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002D8314u) [[unlikely]] return; }
L_002D8314:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 16832u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8328u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 4u, depth + 1u); else { c.pc = 0x002D8040u; return; } if (c.pc != 0x002D8328u) [[unlikely]] return; }
L_002D8328:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002D8340:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.f[0] = c.r[2].w[0];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 68u), c.r[4].w[0]);
    set32(c.r[6], 0u + 1u);
    c.f[0] = fp::mul(c.f[0], c.f[12]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 16u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D836Cu); st32((c.r[29].w[0] + 52u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002D836Cu) [[unlikely]] return; }
L_002D836C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002D8380:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], c.r[4].w[0] - 16848u);
    c.f[20] = c.f[12];
    set32(c.r[5], 0u + 1u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D83B4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 4u, depth + 1u); else { c.pc = 0x002D8040u; return; } if (c.pc != 0x002D83B4u) [[unlikely]] return; }
L_002D83B4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D83C4u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x002D83C4u) [[unlikely]] return; }
L_002D83C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 16832u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D83D8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 4u, depth + 1u); else { c.pc = 0x002D8040u; return; } if (c.pc != 0x002D83D8u) [[unlikely]] return; }
L_002D83D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002D83F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] >> 24);
    st32((c.r[29].w[0] + 68u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; st32((c.r[29].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_002D8420; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002D843C; } }
L_002D8420:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 7;
L_002D843C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] >> 16);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 12;
    { const bool t = c.r[2].sd[0] < 0; st32((c.r[29].w[0] + 52u), c.f[0]);  if (t) { goto L_002D8478; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002D8494; } }
L_002D8478:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 7;
L_002D8494:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.r[2].d[0] = c.r[6].d[0] & 65280ull;
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 12;
    { const bool t = c.r[2].sd[0] < 0; st32((c.r[29].w[0] + 56u), c.f[0]);  if (t) { goto L_002D84D0; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002D84EC; } }
L_002D84D0:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 7;
L_002D84EC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.r[2].d[0] = c.r[6].d[0] & 255ull;
    c.f[1] = c.r[3].w[0];
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] < 0; st32((c.r[29].w[0] + 60u), c.f[0]);  if (t) { goto L_002D8524; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002D8540; } }
L_002D8524:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 7;
L_002D8540:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[6], 0u + 1u);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D856Cu); st32((c.r[29].w[0] + 64u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002D856Cu) [[unlikely]] return; }
L_002D856C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002D8580:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[4], c.r[4].w[0] - 16848u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D85B4u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 4u, depth + 1u); else { c.pc = 0x002D8040u; return; } if (c.pc != 0x002D85B4u) [[unlikely]] return; }
L_002D85B4:
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[2].d[0] = c.r[16].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] >> 24);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0; st32((c.r[29].w[0] + 116u), c.r[18].w[0]);  if (t) { goto L_002D85DC; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002D85F8; } }
L_002D85DC:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 7;
L_002D85F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[16].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] >> 16);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 12;
    { const bool t = c.r[2].sd[0] < 0; st32((c.r[29].w[0] + 100u), c.f[0]);  if (t) { goto L_002D8634; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002D8650; } }
L_002D8634:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 7;
L_002D8650:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.r[2].d[0] = c.r[16].d[0] & 65280ull;
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 12;
    { const bool t = c.r[2].sd[0] < 0; st32((c.r[29].w[0] + 104u), c.f[0]);  if (t) { goto L_002D868C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002D86A8; } }
L_002D868C:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 7;
L_002D86A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.f[1] = c.r[3].w[0];
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] < 0; st32((c.r[29].w[0] + 108u), c.f[0]);  if (t) { goto L_002D86E0; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002D86FC; } }
L_002D86E0:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 7;
L_002D86FC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[0] = c.r[2].w[0];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    fpu_div(c, 1u, c.f[2], c.f[1]);
    set32(c.r[6], 0u + 1u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8728u); st32((c.r[29].w[0] + 112u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002D8728u) [[unlikely]] return; }
L_002D8728:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 16832u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D873Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 4u, depth + 1u); else { c.pc = 0x002D8040u; return; } if (c.pc != 0x002D873Cu) [[unlikely]] return; }
L_002D873C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002D8760:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[9].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8778u); c.r[4].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 170u, depth + 1u); else { c.pc = 0x002D7EA0u; return; } if (c.pc != 0x002D8778u) [[unlikely]] return; }
L_002D8778:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002D8798; } }
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 4u), c.r[9].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[8].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 6;
L_002D8798:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D87B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[9].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D87C8u); c.r[4].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 171u, depth + 1u); else { c.pc = 0x002D7F70u; return; } if (c.pc != 0x002D87C8u) [[unlikely]] return; }
L_002D87C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_002D87E8; } }
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 4u), c.r[9].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[8].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 6;
L_002D87E8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D8800:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[10].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[9].d[0] = c.r[5].d[0] + 0ull;
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D881Cu); c.r[4].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 169u, depth + 1u); else { c.pc = 0x002D7DC0u; return; } if (c.pc != 0x002D881Cu) [[unlikely]] return; }
L_002D881C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D8878; } }
    st32((c.r[2].w[0] + 4u), c.r[10].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[2].w[0] + 208u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st32((c.r[2].w[0] + 368u), 0u);
    st32((c.r[2].w[0] + 372u), 0u);
    set32(c.r[3], ld32((c.r[1].w[0] + 244u)));
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[8]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[9]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[10]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[11]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[8]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[9]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[10]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[11]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[2].w[0] + 284u), c.f[0]);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.budget -= 21;
L_002D8878:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D8890:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[10].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[9].d[0] = c.r[5].d[0] + 0ull;
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D88ACu); c.r[4].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 169u, depth + 1u); else { c.pc = 0x002D7DC0u; return; } if (c.pc != 0x002D88ACu) [[unlikely]] return; }
L_002D88AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D89D8; } }
    set32(c.r[4], ld32((c.r[10].w[0] + 52u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[5], c.r[2].w[0] + 208u);
    st32((c.r[2].w[0] + 4u), c.r[4].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.f[0] = ld32((c.r[10].w[0] + 36u));
    st32((c.r[2].w[0] + 284u), c.f[0]);
    c.f[0] = ld32((c.r[10].w[0] + 4u));
    st32((c.r[2].w[0] + 288u), c.f[0]);
    c.f[0] = ld32((c.r[10].w[0] + 8u));
    st32((c.r[2].w[0] + 292u), c.f[0]);
    st32((c.r[2].w[0] + 296u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 300u), 0u);
    c.f[0] = ld32((c.r[10].w[0] + 12u));
    st32((c.r[2].w[0] + 304u), c.f[0]);
    c.f[0] = ld32((c.r[10].w[0] + 16u));
    st32((c.r[2].w[0] + 308u), c.f[0]);
    st32((c.r[2].w[0] + 312u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 316u), 0u);
    c.f[0] = ld32((c.r[10].w[0] + 20u));
    st32((c.r[2].w[0] + 320u), c.f[0]);
    c.f[0] = ld32((c.r[10].w[0] + 24u));
    st32((c.r[2].w[0] + 324u), c.f[0]);
    st32((c.r[2].w[0] + 328u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 332u), 0u);
    c.f[0] = ld32((c.r[10].w[0] + 28u));
    st32((c.r[2].w[0] + 336u), c.f[0]);
    c.f[0] = ld32((c.r[10].w[0] + 32u));
    st32((c.r[2].w[0] + 340u), c.f[0]);
    st32((c.r[2].w[0] + 344u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 348u), 0u);
    c.f[0] = ld32((c.r[10].w[0] + 40u));
    st32((c.r[2].w[0] + 352u), c.f[0]);
    c.f[0] = ld32((c.r[10].w[0] + 44u));
    st32((c.r[2].w[0] + 356u), c.f[0]);
    c.f[0] = ld32((c.r[10].w[0] + 48u));
    st32((c.r[2].w[0] + 360u), c.f[0]);
    st32((c.r[2].w[0] + 364u), 0u);
    set32(c.r[3], ld32((c.r[1].w[0] + 244u)));
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[8]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[9]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[10]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[11]);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[8]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[9]);
    st128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[10]);
    st128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[11]);
    set32(c.r[3], ld32((c.r[10].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 53;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D8998; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 368u), c.r[3].w[0]);  if (t) { goto L_002D89A0; } }
    c.budget -= 1;
L_002D8998:
    st32((c.r[2].w[0] + 368u), 0u);
    c.budget -= 2;
L_002D89A0:
    st32((c.r[2].w[0] + 372u), 0u);
    set32(c.r[3], ld32((c.r[10].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002D89B8; } }
    st32((c.r[2].w[0] + 372u), c.r[3].w[0]);
    c.budget -= 1;
L_002D89B8:
    set32(c.r[3], ld32((c.r[10].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_002D89D0; } }
    st32((c.r[2].w[0] + 372u), c.r[3].w[0]);
    c.budget -= 2;
L_002D89D0:
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.budget -= 2;
L_002D89D8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D89F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.f[0] = c.r[2].w[0];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 68u), c.r[4].w[0]);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.f[0] = fp::mul(c.f[0], c.f[12]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[29].w[0] + 16u), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8A20u); st32((c.r[29].w[0] + 52u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 34u, depth + 1u); else { c.pc = 0x002D8890u; return; } if (c.pc != 0x002D8A20u) [[unlikely]] return; }
L_002D8A20:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002D8A30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], c.r[4].w[0] - 16848u);
    c.f[20] = c.f[12];
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8A70u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 28u, depth + 1u); else { c.pc = 0x002D8760u; return; } if (c.pc != 0x002D8A70u) [[unlikely]] return; }
L_002D8A70:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8A84u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 36u, depth + 1u); else { c.pc = 0x002D89F0u; return; } if (c.pc != 0x002D8A84u) [[unlikely]] return; }
L_002D8A84:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 16832u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8A9Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 28u, depth + 1u); else { c.pc = 0x002D8760u; return; } if (c.pc != 0x002D8A9Cu) [[unlikely]] return; }
L_002D8A9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002D8AC0:
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 6;
    { set32(c.r[4], c.r[4].w[0] - 20896u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D8760u | kUnwind; return; } goto L_002D8760; }
L_002D8AE0:
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 6;
    { set32(c.r[4], c.r[4].w[0] - 20960u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D8760u | kUnwind; return; } goto L_002D8760; }
L_002D8B00:
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 6;
    { set32(c.r[4], c.r[4].w[0] - 20928u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D8760u | kUnwind; return; } goto L_002D8760; }
L_002D8B20:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 11;
    { const bool t = c.r[21].d[0] == c.r[3].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002D8B98; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == c.r[3].d[0];  if (t) { goto L_002D8B80; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_002D8B68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D8BA8; } }
L_002D8B68:
    set32(c.r[17], ld32((c.r[28].w[0] - 23260u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[18].sd[0] = static_cast<std::int32_t>(0x00C20000u);  if (t) { goto L_002D8DF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 5520u);  if (t) { goto L_002D8BA8; } }
    c.budget -= 1;
L_002D8B80:
    set32(c.r[17], ld32((c.r[28].w[0] - 23268u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[18].sd[0] = static_cast<std::int32_t>(0x00C20000u);  if (t) { goto L_002D8DF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 3920u);  if (t) { goto L_002D8BA8; } }
    c.budget -= 1;
L_002D8B98:
    set32(c.r[17], ld32((c.r[28].w[0] - 23276u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[18].sd[0] = static_cast<std::int32_t>(0x00C20000u);  if (t) { goto L_002D8DF0; } }
    set32(c.r[18], c.r[18].w[0] + 2320u);
    c.budget -= 1;
L_002D8BA8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23904u)));
    c.r[4].d[0] = 0ull | 32775ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_002D8BC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8BC0u); st32((c.r[28].w[0] - 23904u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_006B(c, 174u, depth + 1u); else { c.pc = 0x002AE540u; return; } if (c.pc != 0x002D8BC0u) [[unlikely]] return; }
L_002D8BC0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[4], c.r[4].w[0] - 16208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8BD0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006B(c, 176u, depth + 1u); else { c.pc = 0x002AE5D0u; return; } if (c.pc != 0x002D8BD0u) [[unlikely]] return; }
L_002D8BD0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8BE0u); set32(c.r[4], c.r[4].w[0] - 16848u);  if (depth < kMaxDepth) unit_006B(c, 176u, depth + 1u); else { c.pc = 0x002AE5D0u; return; } if (c.pc != 0x002D8BE0u) [[unlikely]] return; }
L_002D8BE0:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] <= 0; set32(c.r[20], c.r[20].w[0] + 15664u);  if (t) { goto L_002D8DA8; } }
    c.budget -= 1;
L_002D8BF0:
    set32(c.r[19], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { goto L_002D8D50; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D8D30; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D8C20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D8D98; } }
L_002D8C20:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 2u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_002D8CD0; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 20240u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002D8000u < 16384u) { entry = entries_0076[(t - 0x002D8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002D8C48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] + 15664u);
    set32(c.r[16], c.r[20].w[0] + 1344u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 23776u), c.r[2].w[0]);  if (t) { goto L_002D8CD0; } }
    c.budget -= 1;
L_002D8C60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] + 15664u);
    set32(c.r[16], c.r[20].w[0] + 1792u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 23776u), c.r[2].w[0]);  if (t) { goto L_002D8CD0; } }
    c.budget -= 1;
L_002D8C78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] + 16112u);
    set32(c.r[16], c.r[20].w[0] + 2240u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 23776u), c.r[2].w[0]);  if (t) { goto L_002D8CD0; } }
    c.budget -= 1;
L_002D8C90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] + 16112u);
    set32(c.r[16], c.r[20].w[0] + 3136u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 23776u), c.r[2].w[0]);  if (t) { goto L_002D8CD0; } }
    c.budget -= 1;
L_002D8CA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] + 16560u);
    set32(c.r[16], c.r[20].w[0] + 2688u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 23776u), c.r[2].w[0]);  if (t) { goto L_002D8CD0; } }
    c.budget -= 1;
L_002D8CC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] + 16560u);
    set32(c.r[16], c.r[20].w[0] + 3584u);
    st32((c.r[28].w[0] - 23776u), c.r[2].w[0]);
    c.budget -= 4;
L_002D8CD0:
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8CDCu); set32(c.r[4], c.r[19].w[0] + 144u);  if (depth < kMaxDepth) unit_0000(c, 251u, depth + 1u); else { c.pc = 0x00102880u; return; } if (c.pc != 0x002D8CDCu) [[unlikely]] return; }
L_002D8CDC:
    set32(c.r[4], c.r[19].w[0] + 144u);
    set32(c.r[6], c.r[19].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8CECu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 215u, depth + 1u); else { c.pc = 0x00102180u; return; } if (c.pc != 0x002D8CECu) [[unlikely]] return; }
L_002D8CEC:
    set32(c.r[4], c.r[19].w[0] + 16u);
    set32(c.r[5], c.r[16].w[0] + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8CFCu); set32(c.r[6], c.r[19].w[0] + 144u);  if (depth < kMaxDepth) unit_0000(c, 215u, depth + 1u); else { c.pc = 0x00102180u; return; } if (c.pc != 0x002D8CFCu) [[unlikely]] return; }
L_002D8CFC:
    set32(c.r[4], c.r[19].w[0] + 80u);
    set32(c.r[5], c.r[16].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8D0Cu); set32(c.r[6], c.r[19].w[0] + 144u);  if (depth < kMaxDepth) unit_0000(c, 215u, depth + 1u); else { c.pc = 0x00102180u; return; } if (c.pc != 0x002D8D0Cu) [[unlikely]] return; }
L_002D8D0C:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[5], c.r[19].w[0] + 16u);
    set32(c.r[6], ld32((c.r[19].w[0] + 8u)));
    c.r[7].d[0] = ld8((c.r[19].w[0] + 3u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8D24u); c.r[8].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 66u, depth + 1u); else { c.pc = 0x002D8E20u; return; } if (c.pc != 0x002D8D24u) [[unlikely]] return; }
L_002D8D24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D8D98; } }
    c.budget -= 1;
L_002D8D30:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    c.r[6].d[0] = ld8((c.r[19].w[0] + 3u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8D44u); c.r[7].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 180u, depth + 1u); else { c.pc = 0x002AE780u; return; } if (c.pc != 0x002D8D44u) [[unlikely]] return; }
L_002D8D44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D8D98; } }
    c.budget -= 1;
L_002D8D50:
    c.r[6].d[0] = ld8((c.r[19].w[0] + 3u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 16800u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8D68u); c.r[7].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 180u, depth + 1u); else { c.pc = 0x002AE780u; return; } if (c.pc != 0x002D8D68u) [[unlikely]] return; }
L_002D8D68:
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.r[7].d[0] = ld8((c.r[19].w[0] + 3u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8D80u); c.r[8].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 5u, depth + 1u); else { c.pc = 0x0012C080u; return; } if (c.pc != 0x002D8D80u) [[unlikely]] return; }
L_002D8D80:
    c.r[6].d[0] = ld8((c.r[19].w[0] + 3u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[4], c.r[4].w[0] - 16800u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8D98u); c.r[7].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 180u, depth + 1u); else { c.pc = 0x002AE780u; return; } if (c.pc != 0x002D8D98u) [[unlikely]] return; }
L_002D8D98:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D8BF0u | kUnwind; return; } goto L_002D8BF0; } }
    c.budget -= 1;
L_002D8DA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8DB0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 155u, depth + 1u); else { c.pc = 0x002ADC90u; return; } if (c.pc != 0x002D8DB0u) [[unlikely]] return; }
L_002D8DB0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002D8DE8; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == c.r[3].d[0];  if (t) { goto L_002D8DE0; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_002D8DD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D8DF0; } }
    c.budget -= 1;
L_002D8DD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 23260u), 0u);  if (t) { goto L_002D8DF0; } }
L_002D8DE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 23268u), 0u);  if (t) { goto L_002D8DF0; } }
L_002D8DE8:
    st32((c.r[28].w[0] - 23276u), 0u);
    c.budget -= 2;
L_002D8DF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002D8E20:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 96u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_002D8EB0; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002D8EB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8E64u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 169u, depth + 1u); else { c.pc = 0x002AE1C0u; return; } if (c.pc != 0x002D8E64u) [[unlikely]] return; }
L_002D8E64:
    set32(c.r[2], c.r[19].w[0] + 320u);
    set32(c.r[3], c.r[19].w[0] + 336u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[19].w[0] + 352u);
    st64((c.r[29].w[0] + 8u), c.r[3].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[28].w[0] - 23776u)));
    set32(c.r[6], c.r[19].w[0] + 64u);
    set32(c.r[8], c.r[19].w[0] + 256u);
    set32(c.r[9], c.r[19].w[0] + 272u);
    set32(c.r[10], c.r[19].w[0] + 288u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8EA0u); set32(c.r[11], c.r[19].w[0] + 304u);  if (depth < kMaxDepth) unit_0076(c, 70u, depth + 1u); else { c.pc = 0x002D8ED0u; return; } if (c.pc != 0x002D8EA0u) [[unlikely]] return; }
L_002D8EA0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8EB0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 172u, depth + 1u); else { c.pc = 0x002AE250u; return; } if (c.pc != 0x002D8EB0u) [[unlikely]] return; }
L_002D8EB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002D8ED0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[11].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[30], ld32((c.r[29].w[0] + 160u)));
    c.r[16].d[0] = c.r[10].d[0] + 0ull;
    set32(c.r[5], 0u + 20u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8F30u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 51u, depth + 1u); else { c.pc = 0x00124F90u; return; } if (c.pc != 0x002D8F30u) [[unlikely]] return; }
L_002D8F30:
    st32((c.r[21].w[0] + 8u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01000000u);
    st32((c.r[21].w[0] + 12u), 0u);
    c.r[4].d[0] = c.r[3].d[0] | 1028ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x11000000u);
    st32((c.r[21].w[0] + 16u), 0u);
    st32((c.r[21].w[0] + 20u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x6C130000u);
    st32((c.r[21].w[0] + 24u), c.r[4].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[21].w[0] + 28u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 12;
L_002D8F60:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.f[0] = ld32((c.r[20].w[0]));
    c.r[3].d[0] = c.r[5].sd[0] < 4ll ? 1ull : 0ull;
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0]));
    st32((c.r[4].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0]));
    st32((c.r[4].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 4u));
    st32((c.r[4].w[0] + 36u), c.f[0]);
    set32(c.r[20], c.r[20].w[0] + 8u);
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    st32((c.r[4].w[0] + 100u), c.f[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    st32((c.r[4].w[0] + 164u), c.f[0]);
    set32(c.r[18], c.r[18].w[0] + 8u);
    c.f[0] = ld32((c.r[20].w[0]));
    st32((c.r[4].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0]));
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0]));
    st32((c.r[4].w[0] + 168u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 4u));
    st32((c.r[4].w[0] + 44u), c.f[0]);
    set32(c.r[20], c.r[20].w[0] + 8u);
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    st32((c.r[4].w[0] + 108u), c.f[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    st32((c.r[4].w[0] + 172u), c.f[0]);
    set32(c.r[18], c.r[18].w[0] + 8u);
    c.budget -= 34;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D8F60u | kUnwind; return; } goto L_002D8F60; } }
    set32(c.r[4], ld32((c.r[23].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[21].w[0] + 224u), c.r[4].w[0]);
    c.f[1] = ld32((c.r[23].w[0] + 12u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[21].w[0] + 236u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[21].w[0] + 272u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[21].w[0] + 276u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[21].w[0] + 280u), c.f[0]);
    st32((c.r[21].w[0] + 284u), 0u);
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[21].w[0] + 288u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[21].w[0] + 292u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[21].w[0] + 296u), c.f[0]);
    st32((c.r[21].w[0] + 300u), 0u);
    c.f[0] = ld32((c.r[22].w[0]));
    st32((c.r[21].w[0] + 240u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 4u));
    st32((c.r[21].w[0] + 244u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 8u));
    st32((c.r[21].w[0] + 248u), c.f[0]);
    st32((c.r[21].w[0] + 252u), 0u);
    c.f[0] = ld32((c.r[30].w[0]));
    st32((c.r[21].w[0] + 256u), c.f[0]);
    c.f[0] = ld32((c.r[30].w[0] + 4u));
    st32((c.r[21].w[0] + 260u), c.f[0]);
    c.f[0] = ld32((c.r[30].w[0] + 8u));
    st32((c.r[21].w[0] + 264u), c.f[0]);
    st32((c.r[21].w[0] + 268u), 0u);
    set32(c.r[3], ld32((c.r[29].w[0] + 168u)));
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[21].w[0] + 304u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 168u)));
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[21].w[0] + 308u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 168u)));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[21].w[0] + 312u), c.f[0]);
    st32((c.r[21].w[0] + 316u), 0u);
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[21].w[0] + 320u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[21].w[0] + 324u), c.r[3].w[0]);
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
    c.budget -= 63;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_002D90F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], 0u + 8u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[7], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9130u); st32((c.r[29].w[0] + 72u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 79u, depth + 1u); else { c.pc = 0x002D91D0u; return; } if (c.pc != 0x002D9130u) [[unlikely]] return; }
L_002D9130:
    set32(c.r[4], ld32((c.r[28].w[0] - 23744u)));
    c.r[6].d[0] = c.r[16].d[0] & 255ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9144u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 30u, depth + 1u); else { c.pc = 0x002D87B0u; return; } if (c.pc != 0x002D9144u) [[unlikely]] return; }
L_002D9144:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002D9160:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], 0u + 8u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = fp::mul(c.f[0], c.f[13]);
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D91A8u); st32((c.r[29].w[0] + 68u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 79u, depth + 1u); else { c.pc = 0x002D91D0u; return; } if (c.pc != 0x002D91A8u) [[unlikely]] return; }
L_002D91A8:
    set32(c.r[4], ld32((c.r[28].w[0] - 23744u)));
    c.r[6].d[0] = c.r[16].d[0] & 255ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D91BCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 30u, depth + 1u); else { c.pc = 0x002D87B0u; return; } if (c.pc != 0x002D91BCu) [[unlikely]] return; }
L_002D91BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002D91D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.f[14] = c.r[2].w[0];
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.f[13] = c.f[12];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9208u); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002D9208u) [[unlikely]] return; }
L_002D9208:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[6].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] - 16848u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D921Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 4u, depth + 1u); else { c.pc = 0x002D8040u; return; } if (c.pc != 0x002D921Cu) [[unlikely]] return; }
L_002D921C:
    c.f[0] = c.r[19].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[2], c.r[2].w[0] - 9424u);
    c.r[5].d[0] = c.r[17].d[0] & 255ull;
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[18].w[0] + 52u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.f[1] = c.r[2].w[0];
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    st32((c.r[18].w[0] + 4u), 0u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9278u); st32((c.r[18].w[0] + 8u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002D9278u) [[unlikely]] return; }
L_002D9278:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_002D92D8; } }
    c.r[6].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] - 16832u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9290u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 4u, depth + 1u); else { c.pc = 0x002D8040u; return; } if (c.pc != 0x002D9290u) [[unlikely]] return; }
L_002D9290:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D92ACu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002D92ACu) [[unlikely]] return; }
L_002D92AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.r[5].d[0] = c.r[17].d[0] & 255ull;
    st32((c.r[18].w[0] + 36u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D92C4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002D92C4u) [[unlikely]] return; }
L_002D92C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[6].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] - 16816u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D92D8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 4u, depth + 1u); else { c.pc = 0x002D8040u; return; } if (c.pc != 0x002D92D8u) [[unlikely]] return; }
L_002D92D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002D9300:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[2], 0u + 8u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[7], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9344u); st32((c.r[29].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 90u, depth + 1u); else { c.pc = 0x002D9380u; return; } if (c.pc != 0x002D9344u) [[unlikely]] return; }
L_002D9344:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x008F0000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 976u);
    c.r[6].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9368u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 30u, depth + 1u); else { c.pc = 0x002D87B0u; return; } if (c.pc != 0x002D9368u) [[unlikely]] return; }
L_002D9368:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002D9380:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.f[14] = c.r[2].w[0];
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.f[13] = c.f[12];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D93B8u); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002D93B8u) [[unlikely]] return; }
L_002D93B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[6].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] - 16848u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D93CCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 4u, depth + 1u); else { c.pc = 0x002D8040u; return; } if (c.pc != 0x002D93CCu) [[unlikely]] return; }
L_002D93CC:
    c.f[0] = c.r[19].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[2], c.r[2].w[0] - 9424u);
    c.r[5].d[0] = c.r[17].d[0] & 255ull;
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[18].w[0] + 52u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.f[1] = c.r[2].w[0];
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    st32((c.r[18].w[0] + 4u), 0u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9428u); st32((c.r[18].w[0] + 8u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002D9428u) [[unlikely]] return; }
L_002D9428:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_002D9488; } }
    c.r[6].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] - 16832u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9440u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 4u, depth + 1u); else { c.pc = 0x002D8040u; return; } if (c.pc != 0x002D9440u) [[unlikely]] return; }
L_002D9440:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D945Cu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002D945Cu) [[unlikely]] return; }
L_002D945C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.r[5].d[0] = c.r[17].d[0] & 255ull;
    st32((c.r[18].w[0] + 36u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9474u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002D9474u) [[unlikely]] return; }
L_002D9474:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[6].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] - 16816u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9488u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 4u, depth + 1u); else { c.pc = 0x002D8040u; return; } if (c.pc != 0x002D9488u) [[unlikely]] return; }
L_002D9488:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002D94B0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D94E0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D94D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D94E8; } }
    c.budget -= 1;
L_002D94D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C000000u);
    c.f[2] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D94E8; } }
L_002D94E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3B800000u);
    c.f[2] = c.r[3].w[0];
    c.budget -= 2;
L_002D94E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[3].w[0];
    c.f[12] = fp::mul(c.f[12], c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = c.r[3].w[0];
    c.f[13] = fp::mul(c.f[13], c.f[2]);
    c.f[12] = fp::add(c.f[12], c.f[1]);
    c.f[13] = fp::add(c.f[13], c.f[1]);
    c.f[14] = fp::sub(c.f[14], c.f[0]);
    c.f[15] = fp::sub(c.f[15], c.f[0]);
    c.f[1] = fp::mul(c.f[2], c.f[14]);
    c.f[0] = fp::mul(c.f[2], c.f[15]);
    st32((c.r[5].w[0] + 4u), c.f[12]);
    c.f[1] = fp::add(c.f[12], c.f[1]);
    st32((c.r[5].w[0] + 8u), c.f[13]);
    st32((c.r[5].w[0] + 12u), c.f[1]);
    st32((c.r[5].w[0] + 16u), c.f[13]);
    c.f[0] = fp::add(c.f[13], c.f[0]);
    st32((c.r[5].w[0] + 20u), c.f[12]);
    st32((c.r[5].w[0] + 24u), c.f[0]);
    st32((c.r[5].w[0] + 28u), c.f[1]);
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 32u), c.f[0]);  c.pc = t; return; }
L_002D9550:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_002D9568; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D95C0; } }
    c.budget -= 1;
L_002D9568:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] < 0; set32(c.r[3], c.r[5].w[0] >> 1);  if (t) { goto L_002D9584; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002D959C; } }
L_002D9584:
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_002D959C:
    c.f[12] = fp::mul(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.f[14] = c.r[2].w[0];
    c.f[13] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D95BCu); c.f[15] = c.f[14];  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x002D95BCu) [[unlikely]] return; }
L_002D95BC:
    c.budget -= 1;
L_002D95C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D95D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D95E0u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002D95E0u) [[unlikely]] return; }
L_002D95E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC4150000u);
    c.f[12] = 0u;
    c.r[2].d[0] = c.r[2].d[0] | 49152ull;
    c.f[14] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D95F8u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002D95F8u) [[unlikely]] return; }
L_002D95F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9610u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002D9610u) [[unlikely]] return; }
L_002D9610:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D9620:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[1].w[0] + 7128u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st32((c.r[1].w[0] + 7124u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st32((c.r[1].w[0] + 7120u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st32((c.r[1].w[0] + 7144u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st32((c.r[1].w[0] + 7140u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st32((c.r[1].w[0] + 7136u), 0u);
    c.budget -= 14;
L_002D9658:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9664u); set32(c.r[4], c.r[4].w[0] + 7120u);  if (depth < kMaxDepth) unit_0076(c, 109u, depth + 1u); else { c.pc = 0x002D9680u; return; } if (c.pc != 0x002D9664u) [[unlikely]] return; }
L_002D9664:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D966Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 234u, depth + 1u); else { c.pc = 0x00225930u; return; } if (c.pc != 0x002D966Cu) [[unlikely]] return; }
L_002D966C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D9658u | kUnwind; return; } goto L_002D9658; } }
    c.budget -= 3;
L_002D9680:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] - 960u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002D8000u < 16384u) { entry = entries_0076[(t - 0x002D8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002D96A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D96F0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D96D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9720; } }
L_002D96D0:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D96E4u); st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 140u, depth + 1u); else { c.pc = 0x002D9D30u; return; } if (c.pc != 0x002D96E4u) [[unlikely]] return; }
L_002D96E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9720; } }
    c.budget -= 1;
L_002D96F0:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_002D9720; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9710u);  if (depth < kMaxDepth) unit_0047(c, 77u, depth + 1u); else { c.pc = 0x0021CC40u; return; } if (c.pc != 0x002D9710u) [[unlikely]] return; }
L_002D9710:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 4;
L_002D9720:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D9730:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[2], 0u + 99u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002D9C60; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_002D99E8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D9810; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D9798; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D9780; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9C70; } }
L_002D9780:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], 0u + 10u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_002D9C70; } }
    c.budget -= 1;
L_002D9798:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 9600u));
    c.r[2].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 64ull;  if (t) { goto L_002D97B8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D97D8; } }
    c.budget -= 1;
L_002D97B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 9616u));
    c.r[2].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 64ull;  if (t) { goto L_002D97F0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D97F0; } }
    c.budget -= 1;
L_002D97D8:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_002D9C70; } }
L_002D97F0:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[2], 0u + 99u);  if (t) { goto L_002D9C70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_002D9C70; } }
L_002D9810:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[10], 0u + 16u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 96u);
    set32(c.r[6], 0u + 200u);
    set32(c.r[7], 0u - 1u);
    set32(c.r[8], 0u + 15u);
    set32(c.r[9], c.r[9].w[0] - 20208u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9838u); c.r[11].d[0] = c.r[10].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 123u, depth + 1u); else { c.pc = 0x002AD360u; return; } if (c.pc != 0x002D9838u) [[unlikely]] return; }
L_002D9838:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 9604u));
    c.r[2].d[0] = c.r[3].d[0] & 2048ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] & 1024ull;  if (t) { goto L_002D9870; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);  if (t) { goto L_002D9870; } }
    c.r[3].d[0] = ld16((c.r[1].w[0] + 9620u));
    c.r[2].d[0] = c.r[3].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] & 1024ull;  if (t) { goto L_002D9870; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D9888; } }
    c.budget -= 1;
L_002D9870:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 166u);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9888u); st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x002D9888u) [[unlikely]] return; }
L_002D9888:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 9604u));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);  if (t) { goto L_002D98B0; } }
    c.r[2].d[0] = ld16((c.r[1].w[0] + 9620u));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D98F8; } }
    c.budget -= 1;
L_002D98B0:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002D98D8; } }
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D98CCu); set32(c.r[5], 0u + 166u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x002D98CCu) [[unlikely]] return; }
L_002D98CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D98F8; } }
    c.budget -= 1;
L_002D98D8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D98E4u); set32(c.r[5], 0u + 165u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x002D98E4u) [[unlikely]] return; }
L_002D98E4:
    set32(c.r[2], 0u + 99u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), 0u);  if (t) { goto L_002D9C70; } }
    c.budget -= 1;
L_002D98F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 9604u));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);  if (t) { goto L_002D9920; } }
    c.r[2].d[0] = ld16((c.r[1].w[0] + 9620u));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D9970; } }
    c.budget -= 1;
L_002D9920:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D992Cu); set32(c.r[5], 0u + 165u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x002D992Cu) [[unlikely]] return; }
L_002D992C:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 99u);  if (t) { goto L_002D9948; } }
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), 0u);  if (t) { goto L_002D9C70; } }
    c.budget -= 1;
L_002D9948:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 360u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9968u); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006B(c, 210u, depth + 1u); else { c.pc = 0x002AEDA0u; return; } if (c.pc != 0x002D9968u) [[unlikely]] return; }
L_002D9968:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9C70; } }
L_002D9970:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002D9988; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002D9990; } }
    c.budget -= 1;
L_002D9988:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[16], 0u + 1u);
    c.budget -= 2;
L_002D9990:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[10], 0u + 16u);
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[5], 0u + 260u);
    set32(c.r[6], 0u + 232u);
    set32(c.r[7], 0u - 1u);
    set32(c.r[8], 0u + 15u);
    set32(c.r[9], c.r[9].w[0] - 20176u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D99B8u); c.r[11].d[0] = c.r[10].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 123u, depth + 1u); else { c.pc = 0x002AD360u; return; } if (c.pc != 0x002D99B8u) [[unlikely]] return; }
L_002D99B8:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[10], 0u + 16u);
    c.r[4].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[5], 0u + 340u);
    set32(c.r[6], 0u + 232u);
    set32(c.r[7], 0u - 1u);
    set32(c.r[8], 0u + 15u);
    set32(c.r[9], c.r[9].w[0] - 20168u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D99E0u); c.r[11].d[0] = c.r[10].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 123u, depth + 1u); else { c.pc = 0x002AD360u; return; } if (c.pc != 0x002D99E0u) [[unlikely]] return; }
L_002D99E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9C70; } }
L_002D99E8:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[10], 0u + 16u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 80u);
    set32(c.r[6], 0u + 200u);
    set32(c.r[7], 0u - 1u);
    set32(c.r[8], 0u + 15u);
    set32(c.r[9], c.r[9].w[0] - 20160u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9A10u); c.r[11].d[0] = c.r[10].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 123u, depth + 1u); else { c.pc = 0x002AD360u; return; } if (c.pc != 0x002D9A10u) [[unlikely]] return; }
L_002D9A10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 9604u));
    c.r[2].d[0] = c.r[3].d[0] & 2048ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] & 1024ull;  if (t) { goto L_002D9A48; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);  if (t) { goto L_002D9A48; } }
    c.r[3].d[0] = ld16((c.r[1].w[0] + 9620u));
    c.r[2].d[0] = c.r[3].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] & 1024ull;  if (t) { goto L_002D9A48; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D9A60; } }
    c.budget -= 1;
L_002D9A48:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 166u);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9A60u); st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x002D9A60u) [[unlikely]] return; }
L_002D9A60:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 9604u));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);  if (t) { goto L_002D9A88; } }
    c.r[2].d[0] = ld16((c.r[1].w[0] + 9620u));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D9AE0; } }
    c.budget -= 1;
L_002D9A88:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002D9AB0; } }
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9AA4u); set32(c.r[5], 0u + 166u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x002D9AA4u) [[unlikely]] return; }
L_002D9AA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9AE0; } }
    c.budget -= 1;
L_002D9AB0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9ABCu); set32(c.r[5], 0u + 165u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x002D9ABCu) [[unlikely]] return; }
L_002D9ABC:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9AD8u); st32((c.r[16].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_006B(c, 214u, depth + 1u); else { c.pc = 0x002AEE00u; return; } if (c.pc != 0x002D9AD8u) [[unlikely]] return; }
L_002D9AD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9C70; } }
L_002D9AE0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 9604u));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);  if (t) { goto L_002D9B08; } }
    c.r[2].d[0] = ld16((c.r[1].w[0] + 9620u));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D9B58; } }
    c.budget -= 1;
L_002D9B08:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9B14u); set32(c.r[5], 0u + 165u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x002D9B14u) [[unlikely]] return; }
L_002D9B14:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D9B48; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9B3Cu); st32((c.r[16].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_006B(c, 214u, depth + 1u); else { c.pc = 0x002AEE00u; return; } if (c.pc != 0x002D9B3Cu) [[unlikely]] return; }
L_002D9B3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9C70; } }
    c.budget -= 1;
L_002D9B48:
    set32(c.r[2], 0u + 99u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), 0u);  if (t) { goto L_002D9C70; } }
L_002D9B58:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002D9B70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002D9B78; } }
    c.budget -= 1;
L_002D9B70:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[17], 0u + 1u);
    c.budget -= 2;
L_002D9B78:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[10], 0u + 16u);
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[5], 0u + 260u);
    set32(c.r[6], 0u + 232u);
    set32(c.r[7], 0u - 1u);
    set32(c.r[8], 0u + 15u);
    set32(c.r[9], c.r[9].w[0] - 20176u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9BA0u); c.r[11].d[0] = c.r[10].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 123u, depth + 1u); else { c.pc = 0x002AD360u; return; } if (c.pc != 0x002D9BA0u) [[unlikely]] return; }
L_002D9BA0:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[10], 0u + 16u);
    c.r[4].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[5], 0u + 340u);
    set32(c.r[6], 0u + 232u);
    set32(c.r[7], 0u - 1u);
    set32(c.r[8], 0u + 15u);
    set32(c.r[9], c.r[9].w[0] - 20168u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9BC8u); c.r[11].d[0] = c.r[10].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 123u, depth + 1u); else { c.pc = 0x002AD360u; return; } if (c.pc != 0x002D9BC8u) [[unlikely]] return; }
L_002D9BC8:
    set32(c.r[6], ld32((c.r[16].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x88880000u);
    c.r[2].d[0] = c.r[2].d[0] | 34953ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] - 20128u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[6].w[0]);
    set32(c.r[3], c.r[6].w[0] >> 31);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9C00u); set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x002D9C00u) [[unlikely]] return; }
L_002D9C00:
    set32(c.r[10], 0u + 16u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 312u);
    set32(c.r[6], 0u + 260u);
    set32(c.r[7], 0u - 1u);
    set32(c.r[8], 0u + 15u);
    set32(c.r[9], c.r[29].w[0] + 48u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9C24u); c.r[11].d[0] = c.r[10].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 123u, depth + 1u); else { c.pc = 0x002AD360u; return; } if (c.pc != 0x002D9C24u) [[unlikely]] return; }
L_002D9C24:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_002D9C70; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9C58u); st32((c.r[16].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_006B(c, 214u, depth + 1u); else { c.pc = 0x002AEE00u; return; } if (c.pc != 0x002D9C58u) [[unlikely]] return; }
L_002D9C58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9C70; } }
L_002D9C60:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 4;
L_002D9C70:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9C7Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0067(c, 192u, depth + 1u); else { c.pc = 0x0029F3C0u; return; } if (c.pc != 0x002D9C7Cu) [[unlikely]] return; }
L_002D9C7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002D9C90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D9CE0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D9CC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9CF0; } }
L_002D9CC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9CC8u);  if (depth < kMaxDepth) unit_00A1(c, 62u, depth + 1u); else { c.pc = 0x00385460u; return; } if (c.pc != 0x002D9CC8u) [[unlikely]] return; }
L_002D9CC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D9CF0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002D9CF0; } }
L_002D9CE0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 4;
L_002D9CF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D9D00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9D10u);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x002D9D10u) [[unlikely]] return; }
L_002D9D10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00210000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9D1Cu); set32(c.r[4], c.r[4].w[0] + 8048u);  if (depth < kMaxDepth) unit_0049(c, 231u, depth + 1u); else { c.pc = 0x002258F0u; return; } if (c.pc != 0x002D9D1Cu) [[unlikely]] return; }
L_002D9D1C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D9D30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9D40u);  if (depth < kMaxDepth) unit_006B(c, 203u, depth + 1u); else { c.pc = 0x002AECD0u; return; } if (c.pc != 0x002D9D40u) [[unlikely]] return; }
L_002D9D40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9D48u);  if (depth < kMaxDepth) unit_005B(c, 66u, depth + 1u); else { c.pc = 0x0026C9C0u; return; } if (c.pc != 0x002D9D48u) [[unlikely]] return; }
L_002D9D48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9D50u);  if (depth < kMaxDepth) unit_005B(c, 55u, depth + 1u); else { c.pc = 0x0026C7D0u; return; } if (c.pc != 0x002D9D50u) [[unlikely]] return; }
L_002D9D50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9D58u);  if (depth < kMaxDepth) unit_005B(c, 61u, depth + 1u); else { c.pc = 0x0026C8B0u; return; } if (c.pc != 0x002D9D58u) [[unlikely]] return; }
L_002D9D58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9D60u);  if (depth < kMaxDepth) unit_005B(c, 64u, depth + 1u); else { c.pc = 0x0026C960u; return; } if (c.pc != 0x002D9D60u) [[unlikely]] return; }
L_002D9D60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9D68u);  if (depth < kMaxDepth) unit_000B(c, 97u, depth + 1u); else { c.pc = 0x0012DDC0u; return; } if (c.pc != 0x002D9D68u) [[unlikely]] return; }
L_002D9D68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9D70u);  if (depth < kMaxDepth) unit_0076(c, 264u, depth + 1u); else { c.pc = 0x002DB210u; return; } if (c.pc != 0x002D9D70u) [[unlikely]] return; }
L_002D9D70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9D78u);  if (depth < kMaxDepth) unit_007F(c, 163u, depth + 1u); else { c.pc = 0x002FED20u; return; } if (c.pc != 0x002D9D78u) [[unlikely]] return; }
L_002D9D78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9D80u);  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x002D9D80u) [[unlikely]] return; }
L_002D9D80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9D88u);  if (depth < kMaxDepth) unit_0043(c, 413u, depth + 1u); else { c.pc = 0x0020FEA0u; return; } if (c.pc != 0x002D9D88u) [[unlikely]] return; }
L_002D9D88:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9D94u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 21u)));  if (depth < kMaxDepth) unit_004D(c, 288u, depth + 1u); else { c.pc = 0x00237B70u; return; } if (c.pc != 0x002D9D94u) [[unlikely]] return; }
L_002D9D94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9D9Cu);  if (depth < kMaxDepth) unit_004E(c, 5u, depth + 1u); else { c.pc = 0x00238040u; return; } if (c.pc != 0x002D9D9Cu) [[unlikely]] return; }
L_002D9D9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9DA4u);  if (depth < kMaxDepth) unit_008F(c, 266u, depth + 1u); else { c.pc = 0x0033E7C0u; return; } if (c.pc != 0x002D9DA4u) [[unlikely]] return; }
L_002D9DA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9DACu);  if (depth < kMaxDepth) unit_0050(c, 397u, depth + 1u); else { c.pc = 0x00243810u; return; } if (c.pc != 0x002D9DACu) [[unlikely]] return; }
L_002D9DAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9DB4u);  if (depth < kMaxDepth) unit_0044(c, 300u, depth + 1u); else { c.pc = 0x00212560u; return; } if (c.pc != 0x002D9DB4u) [[unlikely]] return; }
L_002D9DB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9DBCu); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0044(c, 306u, depth + 1u); else { c.pc = 0x00212700u; return; } if (c.pc != 0x002D9DBCu) [[unlikely]] return; }
L_002D9DBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9DC4u);  if (depth < kMaxDepth) unit_0044(c, 363u, depth + 1u); else { c.pc = 0x002132A0u; return; } if (c.pc != 0x002D9DC4u) [[unlikely]] return; }
L_002D9DC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9DCCu);  if (depth < kMaxDepth) unit_004D(c, 130u, depth + 1u); else { c.pc = 0x002362E0u; return; } if (c.pc != 0x002D9DCCu) [[unlikely]] return; }
L_002D9DCC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44150000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[2].d[0] | 47514ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x49FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65320ull;
    c.f[12] = c.r[4].w[0];
    c.f[13] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9DF4u);  if (depth < kMaxDepth) unit_005B(c, 93u, depth + 1u); else { c.pc = 0x0026CDF0u; return; } if (c.pc != 0x002D9DF4u) [[unlikely]] return; }
L_002D9DF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9DFCu);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CBB0u; return; } if (c.pc != 0x002D9DFCu) [[unlikely]] return; }
L_002D9DFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9E04u);  if (depth < kMaxDepth) unit_0048(c, 19u, depth + 1u); else { c.pc = 0x002202A0u; return; } if (c.pc != 0x002D9E04u) [[unlikely]] return; }
L_002D9E04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9E0Cu);  if (depth < kMaxDepth) unit_0048(c, 32u, depth + 1u); else { c.pc = 0x00220600u; return; } if (c.pc != 0x002D9E0Cu) [[unlikely]] return; }
L_002D9E0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9E14u);  if (depth < kMaxDepth) unit_0047(c, 81u, depth + 1u); else { c.pc = 0x0021CC90u; return; } if (c.pc != 0x002D9E14u) [[unlikely]] return; }
L_002D9E14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9E1Cu);  if (depth < kMaxDepth) unit_0044(c, 386u, depth + 1u); else { c.pc = 0x002136F0u; return; } if (c.pc != 0x002D9E1Cu) [[unlikely]] return; }
L_002D9E1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9E24u);  if (depth < kMaxDepth) unit_006B(c, 38u, depth + 1u); else { c.pc = 0x002AC8E0u; return; } if (c.pc != 0x002D9E24u) [[unlikely]] return; }
L_002D9E24:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D9E30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[1].w[0] + 7128u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st32((c.r[1].w[0] + 7124u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st32((c.r[1].w[0] + 7120u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st32((c.r[1].w[0] + 7144u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st32((c.r[1].w[0] + 7140u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st32((c.r[1].w[0] + 7136u), 0u);
    c.budget -= 14;
L_002D9E68:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9E74u); set32(c.r[4], c.r[4].w[0] + 7120u);  if (depth < kMaxDepth) unit_0076(c, 170u, depth + 1u); else { c.pc = 0x002D9E90u; return; } if (c.pc != 0x002D9E74u) [[unlikely]] return; }
L_002D9E74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9E7Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 234u, depth + 1u); else { c.pc = 0x00225930u; return; } if (c.pc != 0x002D9E7Cu) [[unlikely]] return; }
L_002D9E7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D9E68u | kUnwind; return; } goto L_002D9E68; } }
    c.budget -= 3;
L_002D9E90:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] - 944u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002D8000u < 16384u) { entry = entries_0076[(t - 0x002D8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002D9EB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002D9EF8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002D9ED8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9F08; } }
L_002D9ED8:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9EECu); st32((c.r[4].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 173u, depth + 1u); else { c.pc = 0x002D9F20u; return; } if (c.pc != 0x002D9EECu) [[unlikely]] return; }
L_002D9EEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 23248u), 0u);  if (t) { goto L_002D9F08; } }
    c.budget -= 1;
L_002D9EF8:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 4;
L_002D9F08:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D9F20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9F30u);  if (depth < kMaxDepth) unit_006B(c, 203u, depth + 1u); else { c.pc = 0x002AECD0u; return; } if (c.pc != 0x002D9F30u) [[unlikely]] return; }
L_002D9F30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9F38u);  if (depth < kMaxDepth) unit_005B(c, 66u, depth + 1u); else { c.pc = 0x0026C9C0u; return; } if (c.pc != 0x002D9F38u) [[unlikely]] return; }
L_002D9F38:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 56u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 54u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 57u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 50u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 41u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 200u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 199u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 198u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 197u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 83u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 84u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 81u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9FB8u); st8((c.r[2].w[0] + 82u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_005B(c, 61u, depth + 1u); else { c.pc = 0x0026C8B0u; return; } if (c.pc != 0x002D9FB8u) [[unlikely]] return; }
L_002D9FB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9FC0u);  if (depth < kMaxDepth) unit_005B(c, 64u, depth + 1u); else { c.pc = 0x0026C960u; return; } if (c.pc != 0x002D9FC0u) [[unlikely]] return; }
L_002D9FC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9FC8u);  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x002D9FC8u) [[unlikely]] return; }
L_002D9FC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9FD0u);  if (depth < kMaxDepth) unit_005B(c, 76u, depth + 1u); else { c.pc = 0x0026CAB0u; return; } if (c.pc != 0x002D9FD0u) [[unlikely]] return; }
L_002D9FD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9FD8u);  if (depth < kMaxDepth) unit_0043(c, 413u, depth + 1u); else { c.pc = 0x0020FEA0u; return; } if (c.pc != 0x002D9FD8u) [[unlikely]] return; }
L_002D9FD8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9FE4u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 21u)));  if (depth < kMaxDepth) unit_004D(c, 306u, depth + 1u); else { c.pc = 0x00237E30u; return; } if (c.pc != 0x002D9FE4u) [[unlikely]] return; }
L_002D9FE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9FECu);  if (depth < kMaxDepth) unit_004E(c, 5u, depth + 1u); else { c.pc = 0x00238040u; return; } if (c.pc != 0x002D9FECu) [[unlikely]] return; }
L_002D9FEC:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9FFCu); st8((c.r[2].w[0] + 78u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_004D(c, 130u, depth + 1u); else { c.pc = 0x002362E0u; return; } if (c.pc != 0x002D9FFCu) [[unlikely]] return; }
L_002D9FFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44150000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[2].d[0] | 47514ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x49FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65320ull;
    c.f[12] = c.r[4].w[0];
    c.f[13] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA024u);  if (depth < kMaxDepth) unit_005B(c, 93u, depth + 1u); else { c.pc = 0x0026CDF0u; return; } if (c.pc != 0x002DA024u) [[unlikely]] return; }
L_002DA024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA02Cu);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CBB0u; return; } if (c.pc != 0x002DA02Cu) [[unlikely]] return; }
L_002DA02C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA034u);  if (depth < kMaxDepth) unit_0047(c, 81u, depth + 1u); else { c.pc = 0x0021CC90u; return; } if (c.pc != 0x002DA034u) [[unlikely]] return; }
L_002DA034:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA03Cu);  if (depth < kMaxDepth) unit_0044(c, 386u, depth + 1u); else { c.pc = 0x002136F0u; return; } if (c.pc != 0x002DA03Cu) [[unlikely]] return; }
L_002DA03C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA044u);  if (depth < kMaxDepth) unit_006B(c, 38u, depth + 1u); else { c.pc = 0x002AC8E0u; return; } if (c.pc != 0x002DA044u) [[unlikely]] return; }
L_002DA044:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002DA050:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA078u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x002DA078u) [[unlikely]] return; }
L_002DA078:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_002DA0B0; } }
    set32(c.r[3], 0u + 20u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[4], c.r[4].w[0] - 23744u);
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[3], c.r[3].w[0] - 22464u);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 12;
L_002DA0B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002DA0D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 41u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002DA0F8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 42u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DA128; } }
    c.budget -= 1;
L_002DA0F8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA10Cu); st8((c.r[2].w[0] + 80u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0076(c, 189u, depth + 1u); else { c.pc = 0x002DA050u; return; } if (c.pc != 0x002DA10Cu) [[unlikely]] return; }
L_002DA10C:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA120u); st8((c.r[2].w[0] + 81u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0076(c, 189u, depth + 1u); else { c.pc = 0x002DA050u; return; } if (c.pc != 0x002DA120u) [[unlikely]] return; }
L_002DA120:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA220; } }
L_002DA128:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 82u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0] + 80u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 82u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA14Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 189u, depth + 1u); else { c.pc = 0x002DA050u; return; } if (c.pc != 0x002DA14Cu) [[unlikely]] return; }
L_002DA14C:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002DA190; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 69u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DA178; } }
    st8((c.r[3].w[0] + 81u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002DA178:
    set32(c.r[4], 0u - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA184u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0076(c, 189u, depth + 1u); else { c.pc = 0x002DA050u; return; } if (c.pc != 0x002DA184u) [[unlikely]] return; }
L_002DA184:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA1D0; } }
    c.budget -= 1;
L_002DA190:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 82u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 191u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002DA1B0; } }
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0] + 80u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002DA1B0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 82u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 191u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA1CCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 189u, depth + 1u); else { c.pc = 0x002DA050u; return; } if (c.pc != 0x002DA1CCu) [[unlikely]] return; }
L_002DA1CC:
    c.budget -= 1;
L_002DA1D0:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002DA220; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 82u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 116u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 84u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 82u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 116u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA21Cu); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0076(c, 189u, depth + 1u); else { c.pc = 0x002DA050u; return; } if (c.pc != 0x002DA21Cu) [[unlikely]] return; }
L_002DA21C:
    c.budget -= 1;
L_002DA220:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002DA230:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[1].d[0] = c.r[20].sd[0] < 2ll ? 1ull : 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_002DA288; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], c.r[20].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 68u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DA2B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA318; } }
    c.budget -= 1;
L_002DA288:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[3].d[0];  if (t) { goto L_002DA2B0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 72u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DA2B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA318; } }
    c.budget -= 1;
L_002DA2B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA318; } }
L_002DA2B8:
    set32(c.r[2], c.r[20].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0] + 80u), static_cast<std::uint8_t>(c.r[19].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA2D0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x002DA2D0u) [[unlikely]] return; }
L_002DA2D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_002DA318; } }
    set32(c.r[3], 0u + 20u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[19].w[0]));
    set32(c.r[4], c.r[4].w[0] - 21520u);
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[18].w[0]));
    set32(c.r[3], c.r[3].w[0] - 20976u);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 324u), c.r[17].w[0]);
    st32((c.r[2].w[0] + 328u), c.r[16].w[0]);
    st32((c.r[2].w[0] + 320u), c.r[20].w[0]);
    c.budget -= 16;
L_002DA318:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002DA340:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + 4224u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002D8000u < 16384u) { entry = entries_0076[(t - 0x002D8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002DA360:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DA398; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002DA390; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 68u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DA398; } }
L_002DA390:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA3A8; } }
L_002DA398:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_002DA3A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002DA3B0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 38u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DA3F8; } }
    set32(c.r[9], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 101u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DA400; } }
    c.budget -= 1;
L_002DA3F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA7F8; } }
L_002DA400:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 82u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[7], c.r[7].w[0] - 27856u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], c.r[8].w[0] << 4);
    set32(c.r[8], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] << 9);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[16], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    c.budget -= 15;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; set32(c.r[21], c.r[4].w[0] + 304u);  if (t) { goto L_002DA460; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 191u)));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002DA458; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002DA460; } }
L_002DA458:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA7F8; } }
L_002DA460:
    set32(c.r[6], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 80u)));
    c.r[20].d[0] = c.r[3].d[0] & 127ull;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; c.r[19].d[0] = c.r[3].d[0] & 128ull;  if (t) { goto L_002DA4B8; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; set32(c.r[3], 0u + 7u);  if (t) { goto L_002DA7F8; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == c.r[3].d[0];  if (t) { goto L_002DA7F8; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], 0u + 180u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[21].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[21].w[0] + 2u), static_cast<std::uint16_t>(0u));
    st16((c.r[21].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0] + 8u), static_cast<std::uint16_t>(0u));  if (t) { goto L_002DA7F8; } }
    c.budget -= 1;
L_002DA4B8:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002DA618; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_002DA588; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_002DA588; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002DA4F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA640; } }
    c.budget -= 1;
L_002DA4F0:
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[3].d[0];  if (t) { goto L_002DA558; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 41u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002DA518; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 42u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DA530; } }
L_002DA518:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA520u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 55u, depth + 1u); else { c.pc = 0x00238800u; return; } if (c.pc != 0x002DA520u) [[unlikely]] return; }
L_002DA520:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002DA548; } }
L_002DA530:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA538u);  if (depth < kMaxDepth) unit_004E(c, 55u, depth + 1u); else { c.pc = 0x00238800u; return; } if (c.pc != 0x002DA538u) [[unlikely]] return; }
L_002DA538:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[5], 0u + 1u);
    st16((c.r[21].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_002DA548:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 2u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[21].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_002DA558:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DA640; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], 0u - 128u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 80u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 80u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002DA640; } }
    c.budget -= 1;
L_002DA588:
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[3].d[0];  if (t) { goto L_002DA5E8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 41u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_002DA5C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA5ACu);  if (depth < kMaxDepth) unit_004E(c, 55u, depth + 1u); else { c.pc = 0x00238800u; return; } if (c.pc != 0x002DA5ACu) [[unlikely]] return; }
L_002DA5AC:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002DA5D8; } }
    c.budget -= 1;
L_002DA5C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA5C8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 55u, depth + 1u); else { c.pc = 0x00238800u; return; } if (c.pc != 0x002DA5C8u) [[unlikely]] return; }
L_002DA5C8:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[5], 0u + 1u);
    st16((c.r[21].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_002DA5D8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 2u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[21].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_002DA5E8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DA640; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], 0u - 128u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 80u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 80u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002DA640; } }
    c.budget -= 1;
L_002DA618:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA620u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 55u, depth + 1u); else { c.pc = 0x00238800u; return; } if (c.pc != 0x002DA620u) [[unlikely]] return; }
L_002DA620:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st16((c.r[21].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[21].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 8;
L_002DA640:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_002DA660; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_002DA660; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA658u);  if (depth < kMaxDepth) unit_0076(c, 261u, depth + 1u); else { c.pc = 0x002DB140u; return; } if (c.pc != 0x002DA658u) [[unlikely]] return; }
L_002DA658:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA668; } }
L_002DA660:
    st16((c.r[21].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_002DA668:
    c.r[1].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002DA7A0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 20112u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x002D8000u < 16384u) { entry = entries_0076[(t - 0x002D8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002DA690:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA698u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 55u, depth + 1u); else { c.pc = 0x00238800u; return; } if (c.pc != 0x002DA698u) [[unlikely]] return; }
L_002DA698:
    c.r[3].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[18].d[0] | c.r[3].d[0];  if (t) { goto L_002DA7A0; } }
    c.budget -= 1;
L_002DA6B0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 186u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;  if (t) { goto L_002DA6D4; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
L_002DA6D4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DA6E4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 877u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002DA6E4:
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[18].d[0] | c.r[3].d[0];  if (t) { goto L_002DA7A0; } }
L_002DA6F0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[3].w[0] + 186u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;  if (t) { goto L_002DA720; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 797u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DA720; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DA720:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[18].d[0] | c.r[5].d[0];  if (t) { goto L_002DA7A0; } }
L_002DA728:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 186u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;  if (t) { goto L_002DA74C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
L_002DA74C:
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[18].d[0] | c.r[3].d[0];  if (t) { goto L_002DA7A0; } }
L_002DA758:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 187u));
    c.r[18].d[0] = c.r[3].d[0] ^ 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_002DA7A0; } }
    c.budget -= 1;
L_002DA770:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld8((c.r[2].w[0] + 186u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA784u); c.r[18].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_004E(c, 55u, depth + 1u); else { c.pc = 0x00238800u; return; } if (c.pc != 0x002DA784u) [[unlikely]] return; }
L_002DA784:
    c.r[3].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[18].d[0] | c.r[3].d[0];  if (t) { goto L_002DA7A0; } }
    c.budget -= 1;
L_002DA798:
    set32(c.r[18], 0u + 64u);
    c.budget -= 2;
L_002DA7A0:
    c.r[3].d[0] = c.r[18].d[0] & 127ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[18].d[0] & 64ull;  if (t) { goto L_002DA7C8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002DA7F8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 80u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002DA7F8; } }
L_002DA7C8:
    c.r[3].d[0] = c.r[18].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DA7E0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002DA7E0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 39u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_002DA7F8; } }
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002DA7F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002DA820:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002DA830:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_002DA840:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 80u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] - 9184u);  if (t) { goto L_002DABD0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA894u); set32(c.r[17], c.r[2].w[0] + 304u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002DA894u) [[unlikely]] return; }
L_002DA894:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002DAB08; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA8B8u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 68u)));  if (depth < kMaxDepth) unit_0076(c, 260u, depth + 1u); else { c.pc = 0x002DB030u; return; } if (c.pc != 0x002DA8B8u) [[unlikely]] return; }
L_002DA8B8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[2], 0u + 9u);
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 80u)));
    c.r[3].d[0] = c.r[3].d[0] & 127ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.f[20] = c.f[0];  if (t) { goto L_002DA9A8; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002DA8F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DAA48; } }
    c.budget -= 1;
L_002DA8F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3410000u);
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2EE0000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA90Cu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DA90Cu) [[unlikely]] return; }
L_002DA90C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA924u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002DA924u) [[unlikely]] return; }
L_002DA924:
    set32(c.r[2], 0u + 8u);
    set32(c.r[3], c.r[16].w[0] + 544u);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43800000u);
    st32((c.r[29].w[0] + 132u), c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[29].w[0] + 116u), c.r[3].w[0]);
    set32(c.r[5], 0u + 11u);
    fpu_div(c, 0u, c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    set32(c.r[6], 0u + 1u);
    st32((c.r[29].w[0] + 120u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 124u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 128u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 88u), 0u);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA980u); st32((c.r[29].w[0] + 84u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002DA980u) [[unlikely]] return; }
L_002DA980:
    set32(c.r[4], c.r[16].w[0] + 784u);
    set32(c.r[5], 0u + 11u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA990u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002DA990u) [[unlikely]] return; }
L_002DA990:
    set32(c.r[4], ld32((c.r[16].w[0] + 4864u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA9A0u); set32(c.r[6], 0u + 11u);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x002D8090u; return; } if (c.pc != 0x002DA9A0u) [[unlikely]] return; }
L_002DA9A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DABD0; } }
L_002DA9A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43410000u);
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42EE0000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA9C4u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DA9C4u) [[unlikely]] return; }
L_002DA9C4:
    set32(c.r[2], 0u + 8u);
    set32(c.r[3], c.r[16].w[0] + 2464u);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43800000u);
    st32((c.r[29].w[0] + 132u), c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[29].w[0] + 116u), c.r[3].w[0]);
    set32(c.r[5], 0u + 11u);
    fpu_div(c, 0u, c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    set32(c.r[6], 0u + 1u);
    st32((c.r[29].w[0] + 120u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 124u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 128u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 88u), 0u);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAA20u); st32((c.r[29].w[0] + 84u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002DAA20u) [[unlikely]] return; }
L_002DAA20:
    set32(c.r[4], c.r[16].w[0] + 2704u);
    set32(c.r[5], 0u + 11u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAA30u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002DAA30u) [[unlikely]] return; }
L_002DAA30:
    set32(c.r[4], ld32((c.r[16].w[0] + 4872u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAA40u); set32(c.r[6], 0u + 11u);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x002D8090u; return; } if (c.pc != 0x002DAA40u) [[unlikely]] return; }
L_002DAA40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DABD0; } }
L_002DAA48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC35E0000u);
    c.r[3].d[0] = c.r[2].d[0] | 32768ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAA68u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DAA68u) [[unlikely]] return; }
L_002DAA68:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F330000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].d[0] = c.r[3].d[0] | 13107ull;
    c.f[12] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAA84u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002DAA84u) [[unlikely]] return; }
L_002DAA84:
    set32(c.r[2], 0u + 8u);
    set32(c.r[3], c.r[16].w[0] + 64u);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43800000u);
    st32((c.r[29].w[0] + 132u), c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[29].w[0] + 116u), c.r[3].w[0]);
    set32(c.r[5], 0u + 10u);
    fpu_div(c, 0u, c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    set32(c.r[6], 0u + 1u);
    st32((c.r[29].w[0] + 120u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 124u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 128u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 88u), 0u);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAAE0u); st32((c.r[29].w[0] + 84u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002DAAE0u) [[unlikely]] return; }
L_002DAAE0:
    set32(c.r[4], c.r[16].w[0] + 304u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAAF0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002DAAF0u) [[unlikely]] return; }
L_002DAAF0:
    set32(c.r[4], ld32((c.r[16].w[0] + 4864u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAB00u); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x002D8090u; return; } if (c.pc != 0x002DAB00u) [[unlikely]] return; }
L_002DAB00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DABD0; } }
L_002DAB08:
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], 0u + 4u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 23u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 16u);  if (t) { goto L_002DABD0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002DABD0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43660000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x425C0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAB40u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DAB40u) [[unlikely]] return; }
L_002DAB40:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F330000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].d[0] = c.r[3].d[0] | 13107ull;
    c.f[12] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAB5Cu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002DAB5Cu) [[unlikely]] return; }
L_002DAB5C:
    set32(c.r[2], c.r[16].w[0] + 1024u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[2], 0u + 8u);
    st32((c.r[29].w[0] + 84u), 0u);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[5], 0u + 10u);
    st32((c.r[29].w[0] + 116u), c.r[7].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E280000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.f[0] = c.r[2].w[0];
    set32(c.r[6], 0u + 1u);
    c.f[1] = c.r[3].w[0];
    st32((c.r[29].w[0] + 120u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 124u), c.r[7].w[0]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[29].w[0] + 128u), c.r[7].w[0]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DABB0u); st32((c.r[29].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002DABB0u) [[unlikely]] return; }
L_002DABB0:
    set32(c.r[4], c.r[16].w[0] + 1264u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DABC0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002DABC0u) [[unlikely]] return; }
L_002DABC0:
    set32(c.r[4], ld32((c.r[16].w[0] + 4868u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DABD0u); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x002D8090u; return; } if (c.pc != 0x002DABD0u) [[unlikely]] return; }
L_002DABD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002DABF0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + 4240u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002D8000u < 16384u) { entry = entries_0076[(t - 0x002D8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002DAC10:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], 0u + 180u);
    set32(c.r[5], c.r[5].w[0] + 3840u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[6], c.r[6].w[0] << 5);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    st32((c.r[4].w[0] + 36u), c.f[0]);
    st32((c.r[4].w[0] + 40u), 0u);
    c.f[0] = ld32((c.r[5].w[0] + 24u));
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 28u));
    st32((c.r[4].w[0] + 116u), c.f[0]);
    st32((c.r[4].w[0] + 120u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    st32((c.r[4].w[0] + 316u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[4].w[0] + 332u), c.r[3].w[0]);
    st16((c.r[4].w[0] + 304u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 306u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 308u), static_cast<std::uint16_t>(0u));
    c.budget -= 31;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 312u), static_cast<std::uint16_t>(0u));  c.pc = t; return; }
L_002DAC90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 306u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[4].w[0] + 306u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[4].w[0] + 324u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DACC0u); set32(c.r[17], c.r[18].w[0] + 304u);  if (depth < kMaxDepth) unit_004E(c, 55u, depth + 1u); else { c.pc = 0x00238800u; return; } if (c.pc != 0x002DACC0u) [[unlikely]] return; }
L_002DACC0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st16((c.r[17].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002DACF0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002DAD08; } }
L_002DACF0:
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DACFCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 261u, depth + 1u); else { c.pc = 0x002DB140u; return; } if (c.pc != 0x002DACFCu) [[unlikely]] return; }
L_002DACFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DAD10; } }
    c.budget -= 1;
L_002DAD08:
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_002DAD10:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002DAD30; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAD2Cu); set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  if (depth < kMaxDepth) unit_004E(c, 56u, depth + 1u); else { c.pc = 0x00238820u; return; } if (c.pc != 0x002DAD2Cu) [[unlikely]] return; }
L_002DAD2C:
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 1;
L_002DAD30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAD38u); set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  if (depth < kMaxDepth) unit_004E(c, 55u, depth + 1u); else { c.pc = 0x00238800u; return; } if (c.pc != 0x002DAD38u) [[unlikely]] return; }
L_002DAD38:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAD4Cu); c.r[16].d[0] = c.r[2].d[0] | 128ull;  if (depth < kMaxDepth) unit_004E(c, 56u, depth + 1u); else { c.pc = 0x00238820u; return; } if (c.pc != 0x002DAD4Cu) [[unlikely]] return; }
L_002DAD4C:
    set32(c.r[6], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[5], c.r[3].w[0] + c.r[6].w[0]);
    c.r[4].d[0] = c.r[4].d[0] ^ c.r[2].d[0];
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 80u)));
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 20u)));
    c.r[16].d[0] = c.r[16].d[0] | c.r[4].d[0];
    c.r[4].d[0] = ld8((c.r[6].w[0] + 184u));
    c.r[5].d[0] = c.r[5].d[0] & 127ull;
    c.r[5].d[0] = c.r[5].d[0] ^ 7ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[16].d[0] = c.r[16].d[0] | c.r[5].d[0];
    c.r[16].d[0] = c.r[16].d[0] | c.r[4].d[0];
    c.r[16].d[0] = c.r[16].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[16].d[0] & 127ull;
    c.budget -= 21;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DADC0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 80u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002DADF0; } }
L_002DADC0:
    c.r[3].d[0] = c.r[16].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DADD8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002DADD8:
    c.r[3].d[0] = c.r[16].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002DADE8; } }
    st16((c.r[17].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002DADE8:
    set32(c.r[3], 0u + 2u);
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002DADF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002DAE10:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[19], c.r[19].w[0] - 9184u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAE44u); set32(c.r[16], c.r[17].w[0] + 304u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002DAE44u) [[unlikely]] return; }
L_002DAE44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAE4Cu); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x002DAE4Cu) [[unlikely]] return; }
L_002DAE4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = ld32((c.r[17].w[0] + 116u));
    c.f[14] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAE60u); c.f[12] = ld32((c.r[17].w[0] + 112u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002DAE60u) [[unlikely]] return; }
L_002DAE60:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAE74u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 68u)));  if (depth < kMaxDepth) unit_0076(c, 260u, depth + 1u); else { c.pc = 0x002DB030u; return; } if (c.pc != 0x002DAE74u) [[unlikely]] return; }
L_002DAE74:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[2], 0u + 8u);
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 148u), c.r[3].w[0]);
    set32(c.r[2], 0u + 3u);
    st32((c.r[29].w[0] + 152u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 156u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_002DAFA8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_002DAF70; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002DAF38; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DAEC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DAFD8; } }
L_002DAEC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.f[1] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 120u), 0u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_002DAF08; } }
    set32(c.r[18], ld32((c.r[19].w[0] + 4872u)));
    set32(c.r[21], c.r[19].w[0] + 1984u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[19].w[0] + 2224u);  if (t) { goto L_002DAF18; } }
    c.budget -= 1;
L_002DAF08:
    set32(c.r[18], ld32((c.r[19].w[0] + 4864u)));
    set32(c.r[21], c.r[19].w[0] + 64u);
    set32(c.r[20], c.r[19].w[0] + 304u);
    c.budget -= 4;
L_002DAF18:
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull | 32768ull;  if (t) { goto L_002DAFD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAF2Cu);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x002DAF2Cu) [[unlikely]] return; }
L_002DAF2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DAFD8; } }
    c.budget -= 1;
L_002DAF38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.f[1] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[21], c.r[19].w[0] + 544u);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 120u), 0u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    set32(c.r[18], ld32((c.r[19].w[0] + 4868u)));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[19].w[0] + 784u);  if (t) { goto L_002DAFD8; } }
L_002DAF70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.f[1] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[21], c.r[19].w[0] + 2464u);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 120u), 0u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    set32(c.r[18], ld32((c.r[19].w[0] + 4872u)));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[19].w[0] + 2704u);  if (t) { goto L_002DAFD8; } }
L_002DAFA8:
    st32((c.r[29].w[0] + 116u), 0u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E280000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[21], c.r[19].w[0] + 1024u);
    set32(c.r[20], c.r[19].w[0] + 1264u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 120u), c.f[0]);
    set32(c.r[18], ld32((c.r[19].w[0] + 4868u)));
    c.budget -= 12;
L_002DAFD8:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAFECu); st32((c.r[29].w[0] + 164u), c.r[21].w[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002DAFECu) [[unlikely]] return; }
L_002DAFEC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAFFCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002DAFFCu) [[unlikely]] return; }
L_002DAFFC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB00Cu); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x002D8090u; return; } if (c.pc != 0x002DB00Cu) [[unlikely]] return; }
L_002DB00C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_002DB030:
    set32(c.r[2], 0u + 41u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 40u);  if (t) { goto L_002DB118; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002DB108; } }
    set32(c.r[2], 0u + 39u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 45u);  if (t) { goto L_002DB0F8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002DB0E8; } }
    set32(c.r[2], 0u + 42u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 35u);  if (t) { goto L_002DB0D8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002DB0C8; } }
    set32(c.r[2], 0u + 33u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 37u);  if (t) { goto L_002DB0B8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002DB0A8; } }
    set32(c.r[2], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002DB098; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DB128; } }
    c.budget -= 1;
L_002DB098:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DB130; } }
L_002DB0A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x422C0000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DB130; } }
L_002DB0B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42240000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DB130; } }
L_002DB0C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x425C0000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DB130; } }
L_002DB0D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42820000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DB130; } }
L_002DB0E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42580000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DB130; } }
L_002DB0F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42380000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DB130; } }
L_002DB108:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42440000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DB130; } }
L_002DB118:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42300000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DB130; } }
L_002DB128:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 2;
L_002DB130:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002DB140:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB160u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 57u, depth + 1u); else { c.pc = 0x00238840u; return; } if (c.pc != 0x002DB160u) [[unlikely]] return; }
L_002DB160:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002DB170; } }
    st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_002DB170:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    st16((c.r[17].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);  if (t) { goto L_002DB1F0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    c.r[3].d[0] = c.r[3].d[0] & 7ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DB1F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB198u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x002DB198u) [[unlikely]] return; }
L_002DB198:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], 0u + 3u);
    mmi::div(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.r[5].d[0] = c.hi.d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_002DB1C8; } }
    mmi::div(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[5].d[0] = c.hi.d[0];
    c.budget -= 4;
L_002DB1C8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_002DB1E8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002DB1E8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 88u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.budget -= 4;
L_002DB1E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_002DB1F8; } }
L_002DB1F0:
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002DB1F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002DB210:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 7472u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB22Cu); set32(c.r[6], 0u + 1732u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x002DB22Cu) [[unlikely]] return; }
L_002DB22C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 7472u);
    set32(c.r[5], c.r[5].w[0] + 9520u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB244u); set32(c.r[6], 0u + 192u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x002DB244u) [[unlikely]] return; }
L_002DB244:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 7664u);
    set32(c.r[5], c.r[5].w[0] + 9712u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB25Cu); set32(c.r[6], 0u + 192u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x002DB25Cu) [[unlikely]] return; }
L_002DB25C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 7856u);
    set32(c.r[5], c.r[5].w[0] + 9904u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB274u); set32(c.r[6], 0u + 192u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x002DB274u) [[unlikely]] return; }
L_002DB274:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 8048u);
    set32(c.r[5], c.r[5].w[0] + 10096u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB28Cu); set32(c.r[6], 0u + 384u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x002DB28Cu) [[unlikely]] return; }
L_002DB28C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 8432u);
    set32(c.r[5], c.r[5].w[0] + 10480u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB2A4u); set32(c.r[6], 0u + 384u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x002DB2A4u) [[unlikely]] return; }
L_002DB2A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 8816u);
    set32(c.r[5], c.r[5].w[0] + 10864u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB2BCu); set32(c.r[6], 0u + 384u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x002DB2BCu) [[unlikely]] return; }
L_002DB2BC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002DB2D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 7473u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 7521u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 7569u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 7617u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 7665u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 7713u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 7761u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 7809u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 7857u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 7905u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 7953u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 8001u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 8049u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 8145u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 8241u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 8337u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 8433u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 8529u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 8625u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 8721u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 8817u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 8913u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 9009u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 49;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[1].w[0] + 9105u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_002DB3A0:
    c.r[3].d[0] = c.r[4].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DB4B8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 20064u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x002D8000u < 16384u) { entry = entries_0076[(t - 0x002D8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002DB3D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 7473u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 7521u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 7569u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 7617u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002DB4B8; } }
    c.budget -= 1;
L_002DB3F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 7665u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 7713u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 7761u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 7809u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002DB4B8; } }
    c.budget -= 1;
L_002DB420:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 7857u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 7905u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 7953u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 8001u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002DB4B8; } }
    c.budget -= 1;
L_002DB448:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 8049u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 8145u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 8241u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 8337u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002DB4B8; } }
    c.budget -= 1;
L_002DB470:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 8433u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 8529u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 8625u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 8721u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002DB4B8; } }
    c.budget -= 1;
L_002DB498:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 8817u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 8913u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 9009u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 9105u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
L_002DB4B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002DB4C0:
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + 7152u);
    set32(c.r[3], c.r[4].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[6], 0u + 156u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 13;
    { set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011AB50u | kUnwind; return; } [[clang::musttail]] return unit_0006(c, 201u, depth); }
L_002DB500:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[6], 0u + 21u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] << 56;
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    set32(c.r[4], c.r[17].w[0] + 2u);
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[3].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB544u); set32(c.r[5], c.r[2].w[0] + 161u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x002DB544u) [[unlikely]] return; }
L_002DB544:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[4], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 116u)));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 284u)));
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 120u)));
    st8((c.r[17].w[0] + 23u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 121u)));
    st8((c.r[17].w[0] + 24u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 128u)));
    st8((c.r[17].w[0] + 25u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 129u)));
    st8((c.r[17].w[0] + 26u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 24u)));
    c.budget -= 28;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DB5C8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 26u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_002DB5C8; } }
    st8((c.r[17].w[0] + 26u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002DB5C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002DB5E0:
    c.r[3].d[0] = c.r[6].d[0] << 56;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[5], c.r[5].w[0] - 27856u);
    set32(c.r[6], c.r[3].w[0] << 4);
    set32(c.r[7], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[8], c.r[7].w[0] << 9);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[7], 0u + 1u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1520u)));
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1526u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 6u)));
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1521u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1527u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 6u)));
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1522u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1528u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 6u)));
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1523u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1529u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 6u)));
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1524u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1530u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 6u)));
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1525u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1531u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 6u)));
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[8], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[6], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 116u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 20u)));
    set32(c.r[6], c.r[7].w[0] << (c.r[8].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.budget -= 66;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DB6F8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_002DB6F8:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1564u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + 9328u);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 1556u)));
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].sd[0] < 10001ll ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 10000u);  if (t) { goto L_002DB740; } }
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002DB740:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 6u)));
    c.r[1].d[0] = c.r[3].sd[0] < 10001ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 10000u);  if (t) { goto L_002DB758; } }
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002DB758:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 8u)));
    c.r[1].d[0] = c.r[3].sd[0] < 10001ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 10000u);  if (t) { goto L_002DB770; } }
    st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002DB770:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[1].w[0] + 9380u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[5], c.r[5].w[0] + 32767u);
    set32(c.r[5], c.r[5].w[0] + 17233u);
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DB798; } }
    st32((c.r[4].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_002DB798:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x77350000u);
    c.r[1].d[0] = c.r[1].d[0] | 37889ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x77350000u);  if (t) { goto L_002DB7B8; } }
    c.r[3].d[0] = c.r[3].d[0] | 37888ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_002DB7B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002DB7C0:
    set32(c.r[8], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DB7E0; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 88u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DB7E8; } }
L_002DB7E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DB8E8; } }
L_002DB7E8:
    c.r[7].d[0] = c.r[5].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    set32(c.r[5], c.r[7].w[0] << 4);
    set32(c.r[3], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 191u)));
    set32(c.r[7], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[6], c.r[5].w[0] << 9);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[5], c.r[5].w[0] - 27856u);
    set32(c.r[12], c.r[5].w[0] + c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 151u)));
    c.r[5].d[0] = c.r[6].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[5].d[0] != 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_002DB830; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[10], 0u + 1u);  if (t) { goto L_002DB898; } }
    c.budget -= 1;
L_002DB830:
    c.r[5].d[0] = c.r[6].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002DB898; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 330u)));
    set32(c.r[5], 0u + 15u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_002DB898; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 56u)));
    c.r[11].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
L_002DB860:
    set32(c.r[5], c.r[6].w[0] << (c.r[11].w[0] & 31u));
    c.r[5].d[0] = c.r[8].d[0] & c.r[5].d[0];
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002DB888; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 284u)));
    c.r[5].d[0] = c.r[5].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002DB888; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002DB898; } }
L_002DB888:
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.r[5].d[0] = c.r[11].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DB860u | kUnwind; return; } goto L_002DB860; } }
L_002DB898:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == 0ull;  if (t) { goto L_002DB8E8; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0] + 8661u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_002DB8C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 66u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_002DB8C8; } }
L_002DB8C0:
    st16((c.r[4].w[0] + 98u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 66u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 2;
L_002DB8C8:
    c.r[5].d[0] = c.r[3].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[3], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002DB8E8; } }
    set32(c.r[3], 0u + 1u);
    st16((c.r[4].w[0] + 130u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002DB8E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002DB8F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] << 56;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    set32(c.r[6], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], c.r[18].w[0] << 4);
    set32(c.r[5], c.r[3].w[0] + c.r[18].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] - 27856u);
    set32(c.r[5], c.r[5].w[0] << 9);
    set32(c.r[16], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], c.r[18].w[0] + c.r[6].w[0]);
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 191u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 23;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_002DB958; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002DBB20; } }
    c.budget -= 1;
L_002DB958:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 88u)));
    set32(c.r[4], c.r[18].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], c.r[4].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] + 7152u);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[18].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_002DB990; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 152u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 1556u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[19].w[0] + 152u), c.r[2].w[0]);
    c.budget -= 4;
L_002DB990:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB998u); set32(c.r[4], ld32((c.r[19].w[0] + 152u)));  if (depth < kMaxDepth) unit_0076(c, 300u, depth + 1u); else { c.pc = 0x002DBB40u; return; } if (c.pc != 0x002DB998u) [[unlikely]] return; }
L_002DB998:
    st8((c.r[16].w[0] + 8683u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB9B4u); st8((c.r[3].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 281u, depth + 1u); else { c.pc = 0x002DB500u; return; } if (c.pc != 0x002DB9B4u) [[unlikely]] return; }
L_002DB9B4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8661u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 12u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002DBA10; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 88u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_002DB9F8; } }
    set32(c.r[4], c.r[19].w[0] + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB9ECu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 283u, depth + 1u); else { c.pc = 0x002DB5E0u; return; } if (c.pc != 0x002DB9ECu) [[unlikely]] return; }
L_002DB9EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DBA68; } }
    c.budget -= 1;
L_002DB9F8:
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] + 72u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBA08u); set32(c.r[5], c.r[19].w[0] + 27u);  if (depth < kMaxDepth) unit_0076(c, 283u, depth + 1u); else { c.pc = 0x002DB5E0u; return; } if (c.pc != 0x002DBA08u) [[unlikely]] return; }
L_002DBA08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DBA68; } }
L_002DBA10:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 88u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[19].w[0] + 88u);  if (t) { goto L_002DBA48; } }
    set32(c.r[5], c.r[19].w[0] + 54u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBA2Cu); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 283u, depth + 1u); else { c.pc = 0x002DB5E0u; return; } if (c.pc != 0x002DBA2Cu) [[unlikely]] return; }
L_002DBA2C:
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBA3Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 283u, depth + 1u); else { c.pc = 0x002DB5E0u; return; } if (c.pc != 0x002DBA3Cu) [[unlikely]] return; }
L_002DBA3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DBA68; } }
    c.budget -= 1;
L_002DBA48:
    set32(c.r[4], c.r[19].w[0] + 104u);
    set32(c.r[5], c.r[19].w[0] + 81u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBA58u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 283u, depth + 1u); else { c.pc = 0x002DB5E0u; return; } if (c.pc != 0x002DBA58u) [[unlikely]] return; }
L_002DBA58:
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] + 72u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBA68u); set32(c.r[5], c.r[19].w[0] + 27u);  if (depth < kMaxDepth) unit_0076(c, 283u, depth + 1u); else { c.pc = 0x002DB5E0u; return; } if (c.pc != 0x002DBA68u) [[unlikely]] return; }
L_002DBA68:
    c.r[16].d[0] = c.r[17].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    set32(c.r[3], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_002DBB10; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] - 30072u);
    set32(c.r[2], c.r[16].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[5], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[2].w[0] << 9);
    set32(c.r[5], c.r[5].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] - 26300u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBAC4u); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 300u, depth + 1u); else { c.pc = 0x002DBB40u; return; } if (c.pc != 0x002DBAC4u) [[unlikely]] return; }
L_002DBAC4:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[4], c.r[19].w[0] + 27u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBADCu); st8((c.r[3].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 281u, depth + 1u); else { c.pc = 0x002DB500u; return; } if (c.pc != 0x002DBADCu) [[unlikely]] return; }
L_002DBADC:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 88u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002DBB00; } }
    set32(c.r[4], c.r[19].w[0] + 120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBAF8u); set32(c.r[5], c.r[19].w[0] + 108u);  if (depth < kMaxDepth) unit_0076(c, 283u, depth + 1u); else { c.pc = 0x002DB5E0u; return; } if (c.pc != 0x002DBAF8u) [[unlikely]] return; }
L_002DBAF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DBB10; } }
L_002DBB00:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBB10u); set32(c.r[5], c.r[19].w[0] + 135u);  if (depth < kMaxDepth) unit_0076(c, 283u, depth + 1u); else { c.pc = 0x002DB5E0u; return; } if (c.pc != 0x002DBB10u) [[unlikely]] return; }
L_002DBB10:
    c.r[5].d[0] = c.r[18].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBB20u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 284u, depth + 1u); else { c.pc = 0x002DB7C0u; return; } if (c.pc != 0x002DBB20u) [[unlikely]] return; }
L_002DBB20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002DBB40:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);  if (t) { goto L_002DBB60; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 9456u);  if (t) { goto L_002DBB64; } }
L_002DBB60:
    set32(c.r[3], c.r[3].w[0] + 9392u);
    c.budget -= 1;
L_002DBB64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002DBB78; } }
    c.budget -= 1;
L_002DBB70:
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_002DBB78:
    c.r[1].d[0] = c.r[5].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DBB98; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DBB70u | kUnwind; return; } goto L_002DBB70; } }
    c.budget -= 1;
L_002DBB98:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002DBBA8; } }
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 2;
L_002DBBA8:
    c.r[1].d[0] = c.r[5].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002DBBB8; } }
    set32(c.r[5], 0u + 14u);
    c.budget -= 1;
L_002DBBB8:
    c.r[2].d[0] = c.r[5].d[0] << 56;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);  c.pc = t; return; }
L_002DBBD0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], c.r[4].w[0] << 4);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[5], c.r[2].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[2], c.r[4].w[0] << 2);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] - 27856u);
    set32(c.r[4], c.r[5].w[0] << 9);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] - c.r[19].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8683u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 7152u);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] - 2u);
    c.budget -= 25;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_002DBC38; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DBC38:
    set32(c.r[3], c.r[4].w[0] << 2);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 9392u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[16], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    st32((c.r[17].w[0] + 152u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 15;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_002DBC78; } }
    st32((c.r[17].w[0] + 152u), 0u);
    c.budget -= 1;
L_002DBC78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBC80u); set32(c.r[4], ld32((c.r[17].w[0] + 152u)));  if (depth < kMaxDepth) unit_0076(c, 300u, depth + 1u); else { c.pc = 0x002DBB40u; return; } if (c.pc != 0x002DBC80u) [[unlikely]] return; }
L_002DBC80:
    st8((c.r[18].w[0] + 8683u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    st32((c.r[17].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 10;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_002DBCB0; } }
    st32((c.r[17].w[0] + 56u), 0u);
    c.budget -= 2;
L_002DBCB0:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_002DBCD0; } }
    st32((c.r[17].w[0] + 88u), 0u);
    c.budget -= 2;
L_002DBCD0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 28u)));
    set32(c.r[3], c.r[4].w[0] - 2u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_002DBCE8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002DBCE8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 9392u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[17].w[0] + 120u)));
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[17].w[0] + 120u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 120u)));
    c.budget -= 15;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_002DBD28; } }
    st32((c.r[17].w[0] + 120u), 0u);
    c.budget -= 1;
L_002DBD28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002DBD50:
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 7152u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBD88u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 306u, depth + 1u); else { c.pc = 0x002DBDE0u; return; } if (c.pc != 0x002DBD88u) [[unlikely]] return; }
L_002DBD88:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 3u);
    st8((c.r[4].w[0] + 47u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002DBDB8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 47u)));
    c.r[3].d[0] = c.r[3].d[0] | 9ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 47u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002DBDC8; } }
    c.budget -= 1;
L_002DBDB8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 47u)));
    c.r[3].d[0] = c.r[3].d[0] | 36ull;
    st8((c.r[5].w[0] + 47u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_002DBDC8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002DBDE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002DBF48; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 56u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], c.r[4].w[0] + 7472u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBE28u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0077(c, 5u, depth + 1u); else { c.pc = 0x002DC090u; return; } if (c.pc != 0x002DBE28u) [[unlikely]] return; }
L_002DBE28:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);  if (t) { goto L_002DBE80; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 7472u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBE4Cu); set32(c.r[7], c.r[17].w[0] + 56u);  if (depth < kMaxDepth) unit_0077(c, 15u, depth + 1u); else { c.pc = 0x002DC410u; return; } if (c.pc != 0x002DBE4Cu) [[unlikely]] return; }
L_002DBE4C:
    c.r[2].d[0] = c.r[19].d[0] | 1ull;
    c.r[19].d[0] = c.r[2].d[0] << 56;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);  if (t) { goto L_002DBE80; } }
    set32(c.r[2], c.r[18].w[0] << 1);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 7473u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 9;
L_002DBE80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], c.r[4].w[0] + 8048u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[17].w[0] + 88u);
    set32(c.r[8], c.r[17].w[0] + 27u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBEA0u); set32(c.r[9], c.r[17].w[0] + 120u);  if (depth < kMaxDepth) unit_0077(c, 7u, depth + 1u); else { c.pc = 0x002DC0F0u; return; } if (c.pc != 0x002DBEA0u) [[unlikely]] return; }
L_002DBEA0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002DBEE8; } }
    c.r[2].d[0] = c.r[19].d[0] | 8ull;
    c.r[19].d[0] = c.r[2].d[0] << 56;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);  if (t) { [[clang::musttail]] return unit_0077(c, 4u, depth); } }
    set32(c.r[2], c.r[18].w[0] << 1);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + 7665u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { [[clang::musttail]] return unit_0077(c, 4u, depth); } }
    c.budget -= 1;
L_002DBEE8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);  if (t) { [[clang::musttail]] return unit_0077(c, 4u, depth); } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 8048u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[17].w[0] + 88u);
    set32(c.r[8], c.r[17].w[0] + 27u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBF10u); set32(c.r[9], c.r[17].w[0] + 120u);  if (depth < kMaxDepth) unit_0077(c, 19u, depth + 1u); else { c.pc = 0x002DC840u; return; } if (c.pc != 0x002DBF10u) [[unlikely]] return; }
L_002DBF10:
    c.r[2].d[0] = c.r[19].d[0] | 8ull;
    c.r[19].d[0] = c.r[2].d[0] << 56;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);  if (t) { [[clang::musttail]] return unit_0077(c, 4u, depth); } }
    set32(c.r[2], c.r[18].w[0] << 1);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + 8049u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { [[clang::musttail]] return unit_0077(c, 4u, depth); } }
    c.budget -= 1;
L_002DBF48:
    set32(c.r[5], ld32((c.r[17].w[0] + 56u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBF5Cu); set32(c.r[4], c.r[4].w[0] + 7856u);  if (depth < kMaxDepth) unit_0077(c, 5u, depth + 1u); else { c.pc = 0x002DC090u; return; } if (c.pc != 0x002DBF5Cu) [[unlikely]] return; }
L_002DBF5C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);  if (t) { goto L_002DBFB0; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 7856u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBF80u); set32(c.r[7], c.r[17].w[0] + 56u);  if (depth < kMaxDepth) unit_0077(c, 15u, depth + 1u); else { c.pc = 0x002DC410u; return; } if (c.pc != 0x002DBF80u) [[unlikely]] return; }
L_002DBF80:
    c.r[2].d[0] = c.r[19].d[0] | 4ull;
    c.r[19].d[0] = c.r[2].d[0] << 56;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);  if (t) { goto L_002DBFB0; } }
    set32(c.r[2], c.r[18].w[0] << 1);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 7857u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 8;
L_002DBFB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], c.r[4].w[0] + 8816u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[17].w[0] + 88u);
    set32(c.r[8], c.r[17].w[0] + 27u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBFD0u); set32(c.r[9], c.r[17].w[0] + 120u);  if (depth < kMaxDepth) unit_0077(c, 7u, depth + 1u); else { c.pc = 0x002DC0F0u; return; } if (c.pc != 0x002DBFD0u) [[unlikely]] return; }
L_002DBFD0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0077(c, 2u, depth); } }
    c.r[2].d[0] = c.r[19].d[0] | 32ull;
    c.r[19].d[0] = c.r[2].d[0] << 56;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);  if (t) { [[clang::musttail]] return unit_0077(c, 4u, depth); } }
    set32(c.r[2], c.r[18].w[0] << 1);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 4;
    [[clang::musttail]] return unit_0077(c, 1u, depth);
}

}
