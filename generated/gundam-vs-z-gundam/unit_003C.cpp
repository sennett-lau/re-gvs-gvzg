#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_003C[4096] = {
    1, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 0, 0, 0, 0, 0, 0, 0, 0,
    24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    26, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0,
    29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32,
    33, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 42, 0, 0, 0, 43, 0, 0, 0,
    0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 48, 0, 49, 0,
    50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 53, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 0, 57, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 64, 65, 0, 66, 0, 67, 0, 0, 0, 0, 0,
    68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0,
    71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0,
    0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0,
    0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0,
    0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0,
    0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 103, 0, 104, 0, 105, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 112, 0, 0, 113, 0, 0, 0, 114, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 118, 0, 0, 0, 0, 119, 0, 0,
    0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 123, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0,
    0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 0,
    0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0,
    0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0,
    186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 189, 0, 0, 0, 190, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 0, 194, 0, 0, 195, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0,
    0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204,
    0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0,
    0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213,
    0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 220, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0,
    223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0,
    0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 232, 0, 233, 0, 0, 0, 0, 234, 0, 235, 0,
    236, 0, 237, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 241,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 254, 0, 0, 0, 0, 255, 0, 256, 0, 257, 0,
    0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0,
    0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0,
    0, 266, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0,
    0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 288, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298,
    0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0,
    0, 301, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 307, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 316, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    319, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_003C(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001F0000;
    case 2u: goto L_001F0004;
    case 3u: goto L_001F0008;
    case 4u: goto L_001F000C;
    case 5u: goto L_001F0010;
    case 6u: goto L_001F0014;
    case 7u: goto L_001F0018;
    case 8u: goto L_001F0020;
    case 9u: goto L_001F0024;
    case 10u: goto L_001F0028;
    case 11u: goto L_001F002C;
    case 12u: goto L_001F0030;
    case 13u: goto L_001F0034;
    case 14u: goto L_001F0038;
    case 15u: goto L_001F003C;
    case 16u: goto L_001F0040;
    case 17u: goto L_001F0044;
    case 18u: goto L_001F0048;
    case 19u: goto L_001F004C;
    case 20u: goto L_001F0050;
    case 21u: goto L_001F0054;
    case 22u: goto L_001F0058;
    case 23u: goto L_001F005C;
    case 24u: goto L_001F0080;
    case 25u: goto L_001F00D0;
    case 26u: goto L_001F0100;
    case 27u: goto L_001F0124;
    case 28u: goto L_001F0164;
    case 29u: goto L_001F0180;
    case 30u: goto L_001F01A4;
    case 31u: goto L_001F01D0;
    case 32u: goto L_001F01FC;
    case 33u: goto L_001F0200;
    case 34u: goto L_001F0204;
    case 35u: goto L_001F0238;
    case 36u: goto L_001F023C;
    case 37u: goto L_001F0290;
    case 38u: goto L_001F02B0;
    case 39u: goto L_001F02C0;
    case 40u: goto L_001F0300;
    case 41u: goto L_001F0358;
    case 42u: goto L_001F0360;
    case 43u: goto L_001F0370;
    case 44u: goto L_001F0384;
    case 45u: goto L_001F03B4;
    case 46u: goto L_001F03D0;
    case 47u: goto L_001F03E4;
    case 48u: goto L_001F03F0;
    case 49u: goto L_001F03F8;
    case 50u: goto L_001F0400;
    case 51u: goto L_001F0410;
    case 52u: goto L_001F0430;
    case 53u: goto L_001F0438;
    case 54u: goto L_001F043C;
    case 55u: goto L_001F048C;
    case 56u: goto L_001F0498;
    case 57u: goto L_001F04AC;
    case 58u: goto L_001F04B4;
    case 59u: goto L_001F04E0;
    case 60u: goto L_001F04F0;
    case 61u: goto L_001F0528;
    case 62u: goto L_001F0530;
    case 63u: goto L_001F0540;
    case 64u: goto L_001F0554;
    case 65u: goto L_001F0558;
    case 66u: goto L_001F0560;
    case 67u: goto L_001F0568;
    case 68u: goto L_001F0580;
    case 69u: goto L_001F0630;
    case 70u: goto L_001F0668;
    case 71u: goto L_001F0680;
    case 72u: goto L_001F06BC;
    case 73u: goto L_001F06D8;
    case 74u: goto L_001F06F8;
    case 75u: goto L_001F0710;
    case 76u: goto L_001F0820;
    case 77u: goto L_001F0868;
    case 78u: goto L_001F088C;
    case 79u: goto L_001F08AC;
    case 80u: goto L_001F08E0;
    case 81u: goto L_001F08F0;
    case 82u: goto L_001F0930;
    case 83u: goto L_001F0940;
    case 84u: goto L_001F0998;
    case 85u: goto L_001F09F8;
    case 86u: goto L_001F0A10;
    case 87u: goto L_001F0A3C;
    case 88u: goto L_001F0A44;
    case 89u: goto L_001F0A78;
    case 90u: goto L_001F0AB4;
    case 91u: goto L_001F0AC0;
    case 92u: goto L_001F0AF0;
    case 93u: goto L_001F0B18;
    case 94u: goto L_001F0B24;
    case 95u: goto L_001F0B64;
    case 96u: goto L_001F0BA0;
    case 97u: goto L_001F0C10;
    case 98u: goto L_001F0C40;
    case 99u: goto L_001F0C78;
    case 100u: goto L_001F0CF4;
    case 101u: goto L_001F0D10;
    case 102u: goto L_001F0D50;
    case 103u: goto L_001F0D58;
    case 104u: goto L_001F0D60;
    case 105u: goto L_001F0D68;
    case 106u: goto L_001F0EB4;
    case 107u: goto L_001F0ED0;
    case 108u: goto L_001F0F38;
    case 109u: goto L_001F0F50;
    case 110u: goto L_001F0FB4;
    case 111u: goto L_001F0FD0;
    case 112u: goto L_001F0FD8;
    case 113u: goto L_001F0FE4;
    case 114u: goto L_001F0FF4;
    case 115u: goto L_001F1060;
    case 116u: goto L_001F10B8;
    case 117u: goto L_001F10D8;
    case 118u: goto L_001F10E0;
    case 119u: goto L_001F10F4;
    case 120u: goto L_001F1104;
    case 121u: goto L_001F111C;
    case 122u: goto L_001F1128;
    case 123u: goto L_001F1148;
    case 124u: goto L_001F1150;
    case 125u: goto L_001F1164;
    case 126u: goto L_001F1174;
    case 127u: goto L_001F118C;
    case 128u: goto L_001F1198;
    case 129u: goto L_001F11B4;
    case 130u: goto L_001F11C4;
    case 131u: goto L_001F11DC;
    case 132u: goto L_001F11E8;
    case 133u: goto L_001F1204;
    case 134u: goto L_001F1214;
    case 135u: goto L_001F122C;
    case 136u: goto L_001F1238;
    case 137u: goto L_001F1290;
    case 138u: goto L_001F12C4;
    case 139u: goto L_001F12E0;
    case 140u: goto L_001F1318;
    case 141u: goto L_001F1354;
    case 142u: goto L_001F1390;
    case 143u: goto L_001F13E0;
    case 144u: goto L_001F1420;
    case 145u: goto L_001F14B0;
    case 146u: goto L_001F1530;
    case 147u: goto L_001F1598;
    case 148u: goto L_001F15B0;
    case 149u: goto L_001F1640;
    case 150u: goto L_001F165C;
    case 151u: goto L_001F1690;
    case 152u: goto L_001F1700;
    case 153u: goto L_001F1780;
    case 154u: goto L_001F18C8;
    case 155u: goto L_001F1A3C;
    case 156u: goto L_001F1A78;
    case 157u: goto L_001F1AB8;
    case 158u: goto L_001F1B58;
    case 159u: goto L_001F1B80;
    case 160u: goto L_001F1BBC;
    case 161u: goto L_001F1BDC;
    case 162u: goto L_001F1BF8;
    case 163u: goto L_001F1C60;
    case 164u: goto L_001F1CB4;
    case 165u: goto L_001F1D0C;
    case 166u: goto L_001F1D78;
    case 167u: goto L_001F1DA0;
    case 168u: goto L_001F1DC0;
    case 169u: goto L_001F1EA4;
    case 170u: goto L_001F1EB0;
    case 171u: goto L_001F1EBC;
    case 172u: goto L_001F1EEC;
    case 173u: goto L_001F1F28;
    case 174u: goto L_001F1F40;
    case 175u: goto L_001F1F6C;
    case 176u: goto L_001F1FC0;
    case 177u: goto L_001F205C;
    case 178u: goto L_001F20B8;
    case 179u: goto L_001F20C8;
    case 180u: goto L_001F20DC;
    case 181u: goto L_001F2150;
    case 182u: goto L_001F216C;
    case 183u: goto L_001F218C;
    case 184u: goto L_001F219C;
    case 185u: goto L_001F21DC;
    case 186u: goto L_001F2200;
    case 187u: goto L_001F2294;
    case 188u: goto L_001F22A4;
    case 189u: goto L_001F2308;
    case 190u: goto L_001F2318;
    case 191u: goto L_001F2324;
    case 192u: goto L_001F23AC;
    case 193u: goto L_001F23B4;
    case 194u: goto L_001F23C0;
    case 195u: goto L_001F23CC;
    case 196u: goto L_001F23D4;
    case 197u: goto L_001F23F8;
    case 198u: goto L_001F2404;
    case 199u: goto L_001F2460;
    case 200u: goto L_001F2478;
    case 201u: goto L_001F24A4;
    case 202u: goto L_001F24AC;
    case 203u: goto L_001F24D0;
    case 204u: goto L_001F24FC;
    case 205u: goto L_001F250C;
    case 206u: goto L_001F2550;
    case 207u: goto L_001F2560;
    case 208u: goto L_001F25A4;
    case 209u: goto L_001F25F8;
    case 210u: goto L_001F2608;
    case 211u: goto L_001F262C;
    case 212u: goto L_001F2640;
    case 213u: goto L_001F267C;
    case 214u: goto L_001F2688;
    case 215u: goto L_001F26C4;
    case 216u: goto L_001F26D0;
    case 217u: goto L_001F2704;
    case 218u: goto L_001F2720;
    case 219u: goto L_001F275C;
    case 220u: goto L_001F2768;
    case 221u: goto L_001F27BC;
    case 222u: goto L_001F27E8;
    case 223u: goto L_001F2800;
    case 224u: goto L_001F2844;
    case 225u: goto L_001F2850;
    case 226u: goto L_001F289C;
    case 227u: goto L_001F28C0;
    case 228u: goto L_001F2974;
    case 229u: goto L_001F2990;
    case 230u: goto L_001F29A0;
    case 231u: goto L_001F29CC;
    case 232u: goto L_001F29D4;
    case 233u: goto L_001F29DC;
    case 234u: goto L_001F29F0;
    case 235u: goto L_001F29F8;
    case 236u: goto L_001F2A00;
    case 237u: goto L_001F2A08;
    case 238u: goto L_001F2A10;
    case 239u: goto L_001F2A5C;
    case 240u: goto L_001F2A70;
    case 241u: goto L_001F2A7C;
    case 242u: goto L_001F2AAC;
    case 243u: goto L_001F2B28;
    case 244u: goto L_001F2E80;
    case 245u: goto L_001F2F20;
    case 246u: goto L_001F2F70;
    case 247u: goto L_001F2FC0;
    case 248u: goto L_001F3090;
    case 249u: goto L_001F30B0;
    case 250u: goto L_001F3120;
    case 251u: goto L_001F32A8;
    case 252u: goto L_001F32B0;
    case 253u: goto L_001F32CC;
    case 254u: goto L_001F32D4;
    case 255u: goto L_001F32E8;
    case 256u: goto L_001F32F0;
    case 257u: goto L_001F32F8;
    case 258u: goto L_001F3308;
    case 259u: goto L_001F3370;
    case 260u: goto L_001F3390;
    case 261u: goto L_001F33BC;
    case 262u: goto L_001F3460;
    case 263u: goto L_001F34A0;
    case 264u: goto L_001F34CC;
    case 265u: goto L_001F34EC;
    case 266u: goto L_001F3504;
    case 267u: goto L_001F3518;
    case 268u: goto L_001F3538;
    case 269u: goto L_001F354C;
    case 270u: goto L_001F3570;
    case 271u: goto L_001F35A4;
    case 272u: goto L_001F35E0;
    case 273u: goto L_001F35F0;
    case 274u: goto L_001F3610;
    case 275u: goto L_001F36F8;
    case 276u: goto L_001F3720;
    case 277u: goto L_001F3738;
    case 278u: goto L_001F3740;
    case 279u: goto L_001F3750;
    case 280u: goto L_001F37A8;
    case 281u: goto L_001F37CC;
    case 282u: goto L_001F37D4;
    case 283u: goto L_001F3854;
    case 284u: goto L_001F3890;
    case 285u: goto L_001F39B8;
    case 286u: goto L_001F39C8;
    case 287u: goto L_001F39E0;
    case 288u: goto L_001F39E8;
    case 289u: goto L_001F3A20;
    case 290u: goto L_001F3A50;
    case 291u: goto L_001F3A5C;
    case 292u: goto L_001F3AA4;
    case 293u: goto L_001F3ADC;
    case 294u: goto L_001F3B3C;
    case 295u: goto L_001F3B80;
    case 296u: goto L_001F3BC8;
    case 297u: goto L_001F3BD4;
    case 298u: goto L_001F3BFC;
    case 299u: goto L_001F3C08;
    case 300u: goto L_001F3C78;
    case 301u: goto L_001F3C84;
    case 302u: goto L_001F3C8C;
    case 303u: goto L_001F3CD0;
    case 304u: goto L_001F3CF0;
    case 305u: goto L_001F3D24;
    case 306u: goto L_001F3D50;
    case 307u: goto L_001F3D98;
    case 308u: goto L_001F3DA4;
    case 309u: goto L_001F3DCC;
    case 310u: goto L_001F3DD8;
    case 311u: goto L_001F3E44;
    case 312u: goto L_001F3E50;
    case 313u: goto L_001F3E70;
    case 314u: goto L_001F3EB8;
    case 315u: goto L_001F3EC4;
    case 316u: goto L_001F3F0C;
    case 317u: goto L_001F3F18;
    case 318u: goto L_001F3F38;
    case 319u: goto L_001F3F80;
    case 320u: goto L_001F3F90;
    case 321u: goto L_001F3FA0;
    default: bad_entry(c, 0x001F0000u); return;
    }
L_001F0000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0008u);  if (depth < kMaxDepth) unit_003B(c, 355u, depth + 1u); else { c.pc = 0x001EFEF0u; return; } if (c.pc != 0x001F0008u) [[unlikely]] return; }
    goto L_001F0008;
L_001F0004:
    c.budget -= 1;
L_001F0008:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001F000C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001F0010:
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 1;
L_001F0014:
    c.budget -= 1;
L_001F0018:
    c.budget -= 2;
L_001F0020:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EFEF0u | kUnwind; return; } [[clang::musttail]] return unit_003B(c, 355u, depth); }
L_001F0024:
    c.budget -= 1;
L_001F0028:
    c.budget -= 1;
L_001F002C:
    c.budget -= 1;
L_001F0030:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.budget -= 1;
L_001F0034:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.budget -= 1;
L_001F0038:
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 1;
L_001F003C:
    set32(c.r[5], c.r[5].w[0] + 19312u);
    c.budget -= 1;
L_001F0040:
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 1;
L_001F0044:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 744u)));
    c.budget -= 1;
L_001F0048:
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_001F004C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0054u); c.r[6].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0032(c, 33u, depth + 1u); else { c.pc = 0x001C8880u; return; } if (c.pc != 0x001F0054u) [[unlikely]] return; }
    goto L_001F0054;
L_001F0050:
    c.r[6].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_001F0054:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.budget -= 1;
L_001F0058:
    set32(c.r[3], 0u - 65u);
    c.budget -= 1;
L_001F005C:
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 770u)));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st8((c.r[16].w[0] + 770u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F0080:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 770u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001F0180; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 759u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_001F0168; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_001F0168; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 8258u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F00D0u); set32(c.r[16], c.r[2].w[0] - c.r[18].w[0]);  if (depth < kMaxDepth) unit_003B(c, 22u, depth + 1u); else { c.pc = 0x001EC600u; return; } if (c.pc != 0x001F00D0u) [[unlikely]] return; }
L_001F00D0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_001F0130; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 8258u)));
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[2].w[0] << 2);  if (t) { goto L_001F0168; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    set32(c.r[3], c.r[3].w[0] << (c.r[16].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & 576ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F0108; } }
L_001F0100:
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_001F0108:
    st8((c.r[19].w[0] + 783u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 8256u)));
    c.f[12] = ld32((c.r[19].w[0] + 8268u));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0124u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x001F0124u) [[unlikely]] return; }
L_001F0124:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F0168; } }
    c.budget -= 1;
L_001F0130:
    set32(c.r[3], 0u - 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001F0168; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 8258u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[18].d[0];  if (t) { goto L_001F0168; } }
    st8((c.r[19].w[0] + 783u), static_cast<std::uint8_t>(0u));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 8256u)));
    c.f[12] = ld32((c.r[19].w[0] + 8268u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0164u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x001F0164u) [[unlikely]] return; }
L_001F0164:
    c.budget -= 1;
L_001F0168:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[17].d[0] & 15ull;  if (t) { goto L_001F0180; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0180u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003B(c, 31u, depth + 1u); else { c.pc = 0x001EC8E0u; return; } if (c.pc != 0x001F0180u) [[unlikely]] return; }
L_001F0180:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 781u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F01A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F01A4u); set32(c.r[5], 0u + 255u);  if (depth < kMaxDepth) unit_003C(c, 71u, depth + 1u); else { c.pc = 0x001F0680u; return; } if (c.pc != 0x001F01A4u) [[unlikely]] return; }
L_001F01A4:
    c.budget -= 1;
L_001F01A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001F01D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 8516u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F0210; } }
    st32((c.r[16].w[0] + 8516u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F01FCu); c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8286u)));  if (depth < kMaxDepth) unit_003A(c, 78u, depth + 1u); else { c.pc = 0x001EA120u; return; } if (c.pc != 0x001F01FCu) [[unlikely]] return; }
L_001F01FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0204u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 70u, depth + 1u); else { c.pc = 0x001EA000u; return; } if (c.pc != 0x001F0204u) [[unlikely]] return; }
    goto L_001F0204;
L_001F0200:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001F0204:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F02B0; } }
    c.budget -= 1;
L_001F0210:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], c.r[3].w[0] - 7u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 18u);  if (t) { goto L_001F0230; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F0290; } }
    c.budget -= 1;
L_001F0230:
    set32(c.r[5], ld32((c.r[16].w[0] + 1268u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F023Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 57u, depth + 1u); else { c.pc = 0x001E4C20u; return; } if (c.pc != 0x001F023Cu) [[unlikely]] return; }
    goto L_001F023C;
L_001F0238:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001F023C:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F0260; } }
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 3;
L_001F0260:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 746u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001F0290; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0290u);  if (depth < kMaxDepth) unit_0039(c, 127u, depth + 1u); else { c.pc = 0x001E5A90u; return; } if (c.pc != 0x001F0290u) [[unlikely]] return; }
L_001F0290:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 709u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 21344u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F02B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F02B0u) [[unlikely]] return; }
L_001F02B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F02C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 709u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 709u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8682u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F02F8; } }
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 104u), 0u);  if (t) { goto L_001F0340; } }
    c.budget -= 1;
L_001F02F8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], 0u + 7u);
    c.budget -= 2;
L_001F0300:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 8u);  if (t) { goto L_001F0310; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F0338; } }
L_001F0310:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.f[0]);  if (t) { goto L_001F0340; } }
    c.budget -= 1;
L_001F0338:
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 2;
L_001F0340:
    set32(c.r[5], 0u + 1u);
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0358u); set32(c.r[7], 0u + 18u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x001F0358u) [[unlikely]] return; }
L_001F0358:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0360u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 43u, depth + 1u); else { c.pc = 0x001F0370u; return; } if (c.pc != 0x001F0360u) [[unlikely]] return; }
L_001F0360:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F0370:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0384u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 46u, depth + 1u); else { c.pc = 0x001F03D0u; return; } if (c.pc != 0x001F0384u) [[unlikely]] return; }
L_001F0384:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8326u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F03B8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 709u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 18u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F03B4u); st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x001F03B4u) [[unlikely]] return; }
L_001F03B4:
    c.budget -= 1;
L_001F03B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F03D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F03E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 6u, depth + 1u); else { c.pc = 0x001EC130u; return; } if (c.pc != 0x001F03E4u) [[unlikely]] return; }
L_001F03E4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F03F0u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_003A(c, 118u, depth + 1u); else { c.pc = 0x001EAA20u; return; } if (c.pc != 0x001F03F0u) [[unlikely]] return; }
L_001F03F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F03F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 92u, depth + 1u); else { c.pc = 0x001DA430u; return; } if (c.pc != 0x001F03F8u) [[unlikely]] return; }
L_001F03F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 2;
L_001F0400:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F0410:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 744u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F0458; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0430u); set32(c.r[5], ld32((c.r[16].w[0] + 1268u)));  if (depth < kMaxDepth) unit_0039(c, 69u, depth + 1u); else { c.pc = 0x001E4E00u; return; } if (c.pc != 0x001F0430u) [[unlikely]] return; }
L_001F0430:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F043Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003B(c, 168u, depth + 1u); else { c.pc = 0x001EDD10u; return; } if (c.pc != 0x001F043Cu) [[unlikely]] return; }
    goto L_001F043C;
L_001F0438:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_001F043C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F0458; } }
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 5;
L_001F0458:
    c.f[1] = ld32((c.r[16].w[0] + 8516u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F04C0; } }
    st32((c.r[16].w[0] + 8516u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F04A0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8286u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F048Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 86u, depth + 1u); else { c.pc = 0x001EA280u; return; } if (c.pc != 0x001F048Cu) [[unlikely]] return; }
L_001F048C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8286u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0498u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 83u, depth + 1u); else { c.pc = 0x001EA1B0u; return; } if (c.pc != 0x001F0498u) [[unlikely]] return; }
L_001F0498:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F04B8; } }
L_001F04A0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8286u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F04ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 78u, depth + 1u); else { c.pc = 0x001EA120u; return; } if (c.pc != 0x001F04ACu) [[unlikely]] return; }
L_001F04AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F04B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 70u, depth + 1u); else { c.pc = 0x001EA000u; return; } if (c.pc != 0x001F04B4u) [[unlikely]] return; }
L_001F04B4:
    c.budget -= 1;
L_001F04B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F04E0; } }
L_001F04C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 709u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 21360u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F04E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F04E0u) [[unlikely]] return; }
L_001F04E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F04F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 709u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 709u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 744u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F0528; } }
    c.f[12] = 0u;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0528u); set32(c.r[7], 0u + 32u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x001F0528u) [[unlikely]] return; }
L_001F0528:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0530u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 63u, depth + 1u); else { c.pc = 0x001F0540u; return; } if (c.pc != 0x001F0530u) [[unlikely]] return; }
L_001F0530:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F0540:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0554u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 6u, depth + 1u); else { c.pc = 0x001EC130u; return; } if (c.pc != 0x001F0554u) [[unlikely]] return; }
L_001F0554:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001F0558:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0560u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_003A(c, 118u, depth + 1u); else { c.pc = 0x001EAA20u; return; } if (c.pc != 0x001F0560u) [[unlikely]] return; }
L_001F0560:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0568u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 92u, depth + 1u); else { c.pc = 0x001DA430u; return; } if (c.pc != 0x001F0568u) [[unlikely]] return; }
L_001F0568:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F0580:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 7u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 755u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F05B0; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F05B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F0670; } }
    c.budget -= 1;
L_001F05B0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 749u));
    set32(c.r[2], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F05C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F0670; } }
L_001F05C8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F05E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F0670; } }
L_001F05E0:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] >= 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F05F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F0670; } }
L_001F05F0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 961u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001F0608; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F0670; } }
    c.budget -= 1;
L_001F0608:
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 961u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 812u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8286u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] + 8248u);  if (t) { goto L_001F0638; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    c.f[12] = ld32((c.r[3].w[0] + 20u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0630u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x001F0630u) [[unlikely]] return; }
L_001F0630:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F0668; } }
L_001F0638:
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[12] = ld32((c.r[4].w[0] + 6592u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0668u); c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x001F0668u) [[unlikely]] return; }
L_001F0668:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_001F0670:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001F0680:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].d[0] = c.r[5].d[0] & 3ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_001F06D8; } }
    c.r[3].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 8448u);  if (t) { goto L_001F06C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F06BCu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x001F06BCu) [[unlikely]] return; }
L_001F06BC:
    c.budget -= 1;
L_001F06C0:
    c.r[3].d[0] = c.r[16].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 8464u);  if (t) { goto L_001F06D8; } }
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F06D8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x001F06D8u) [[unlikely]] return; }
L_001F06D8:
    c.r[3].d[0] = c.r[16].d[0] & 12ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[16].d[0] & 4ull;  if (t) { goto L_001F0710; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 8480u);  if (t) { goto L_001F06F8; } }
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F06F8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x001F06F8u) [[unlikely]] return; }
L_001F06F8:
    c.r[3].d[0] = c.r[16].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 8496u);  if (t) { goto L_001F0710; } }
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0710u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x001F0710u) [[unlikely]] return; }
L_001F0710:
    c.r[3].d[0] = c.r[16].d[0] & 48ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[16].d[0] & 16ull;  if (t) { goto L_001F07A8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F0760; } }
    c.f[0] = ld32((c.r[17].w[0] + 8400u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[17].w[0] + 8400u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8404u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[17].w[0] + 8404u), c.r[3].w[0]);
    c.budget -= 15;
L_001F0760:
    c.r[3].d[0] = c.r[16].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F07A8; } }
    c.f[0] = ld32((c.r[17].w[0] + 8408u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[17].w[0] + 8408u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8412u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[17].w[0] + 8412u), c.r[3].w[0]);
    c.budget -= 15;
L_001F07A8:
    c.r[3].d[0] = c.r[16].d[0] & 192ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[16].d[0] & 64ull;  if (t) { goto L_001F0800; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F07D8; } }
    c.f[0] = ld32((c.r[17].w[0] + 8424u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[17].w[0] + 8424u), c.r[3].w[0]);
    c.budget -= 7;
L_001F07D8:
    c.r[3].d[0] = c.r[16].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F0800; } }
    c.f[0] = ld32((c.r[17].w[0] + 8428u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[17].w[0] + 8428u), c.r[3].w[0]);
    c.budget -= 7;
L_001F0800:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F0820:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[7], c.r[4].w[0] + 8248u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 8296u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 8256u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[8], c.r[4].w[0] + 8288u);  if (t) { goto L_001F0850; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 10u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 10u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_001F0870; } }
    c.budget -= 1;
L_001F0850:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 10u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 38u)));
    c.f[12] = ld32((c.r[8].w[0] + 20u));
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0868u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x001F0868u) [[unlikely]] return; }
L_001F0868:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F08E0; } }
L_001F0870:
    c.f[12] = ld32((c.r[8].w[0] + 20u));
    c.f[0] = ld32((c.r[7].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F0898; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F088Cu);  if (depth < kMaxDepth) unit_0036(c, 85u, depth + 1u); else { c.pc = 0x001DA350u; return; } if (c.pc != 0x001F088Cu) [[unlikely]] return; }
L_001F088C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F08E0; } }
    c.budget -= 1;
L_001F0898:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F08B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F08ACu); c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 38u)));  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x001F08ACu) [[unlikely]] return; }
L_001F08AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F08E0; } }
    c.budget -= 1;
L_001F08B8:
    c.f[0] = ld32((c.r[8].w[0] + 16u));
    c.f[1] = ld32((c.r[7].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F08E0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 38u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F08E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F08E0u);  if (depth < kMaxDepth) unit_0036(c, 85u, depth + 1u); else { c.pc = 0x001DA350u; return; } if (c.pc != 0x001F08E0u) [[unlikely]] return; }
L_001F08E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001F08F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F0928; } }
    st8((c.r[4].w[0] + 1627u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1626u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 1626u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1626u)));
    c.r[1].d[0] = c.r[3].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 99u);  if (t) { goto L_001F0928; } }
    st8((c.r[4].w[0] + 1626u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001F0928:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F0930:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.budget -= 4;
L_001F0940:
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1627u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[21].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F0B68; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[21].w[0] + 1627u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 1627u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F0B68; } }
    st8((c.r[21].w[0] + 1627u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 1626u)));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[3].w[0] - 1u);  if (t) { goto L_001F0B68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0998u);  if (depth < kMaxDepth) unit_003C(c, 98u, depth + 1u); else { c.pc = 0x001F0C40u; return; } if (c.pc != 0x001F0998u) [[unlikely]] return; }
L_001F0998:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001F0B68; } }
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F0B68; } }
    c.r[5].d[0] = ld8((c.r[20].w[0] + 7u));
    set32(c.r[3], 0u - 1u);
    c.r[4].d[0] = ld8((c.r[21].w[0] + 965u));
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[21].w[0] + 965u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[21].w[0] + 1236u)));
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st32((c.r[21].w[0] + 1236u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[20].w[0])));
    set32(c.r[4], ld32((c.r[21].w[0] + 672u)));
    c.r[5].d[0] = ~(c.r[5].d[0] | 0ull);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st32((c.r[21].w[0] + 672u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 5u)));
    c.budget -= 17;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_001F09F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F09F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 282u, depth + 1u); else { c.pc = 0x003C6720u; return; } if (c.pc != 0x001F09F8u) [[unlikely]] return; }
L_001F09F8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 6u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_001F0A10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0A10u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B1(c, 282u, depth + 1u); else { c.pc = 0x003C6720u; return; } if (c.pc != 0x001F0A10u) [[unlikely]] return; }
L_001F0A10:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 4u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F0A48; } }
    c.r[4].d[0] = ld8((c.r[21].w[0] + 8658u));
    set32(c.r[3], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 18u);  if (t) { goto L_001F0A38; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F0A48; } }
L_001F0A38:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_001F0A3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0A44u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B1(c, 282u, depth + 1u); else { c.pc = 0x003C6720u; return; } if (c.pc != 0x001F0A44u) [[unlikely]] return; }
L_001F0A44:
    c.budget -= 1;
L_001F0A48:
    st32((c.r[29].w[0] + 160u), 0u);
    set32(c.r[22], c.r[29].w[0] + 164u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[22].w[0]), c.r[3].w[0]);
    set32(c.r[23], c.r[29].w[0] + 168u);
    st32((c.r[23].w[0]), 0u);
    set32(c.r[30], c.r[29].w[0] + 172u);
    st32((c.r[30].w[0]), 0u);
    c.r[19].d[0] = 0ull + 0ull;
    c.r[18].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[17], c.r[29].w[0] + 180u);
    set32(c.r[16], c.r[29].w[0] + 184u);
    c.budget -= 12;
L_001F0A78:
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[3].w[0] << (c.r[19].w[0] & 31u));
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F0AC0; } }
    c.f[0] = ld32((c.r[18].w[0] + 2032u));
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    st32((c.r[29].w[0] + 176u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 2036u));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 2040u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0AB4u); st32((c.r[16].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0020(c, 58u, depth + 1u); else { c.pc = 0x00180490u; return; } if (c.pc != 0x001F0AB4u) [[unlikely]] return; }
L_001F0AB4:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0AC0u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_001F(c, 174u, depth + 1u); else { c.pc = 0x0017D6C0u; return; } if (c.pc != 0x001F0AC0u) [[unlikely]] return; }
L_001F0AC0:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F0A78u | kUnwind; return; } goto L_001F0A78; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001F0B28; } }
    set32(c.r[2], c.r[4].w[0] << 6);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0AF0u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001F0AF0u) [[unlikely]] return; }
L_001F0AF0:
    c.f[0] = ld32((c.r[20].w[0] + 12u));
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 16u));
    st32((c.r[22].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 20u));
    st32((c.r[23].w[0]), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0B18u); st32((c.r[30].w[0]), 0u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001F0B18u) [[unlikely]] return; }
L_001F0B18:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0B24u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0045(c, 208u, depth + 1u); else { c.pc = 0x00216100u; return; } if (c.pc != 0x001F0B24u) [[unlikely]] return; }
L_001F0B24:
    c.budget -= 1;
L_001F0B28:
    set32(c.r[4], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001F0B68; } }
    c.f[0] = ld32((c.r[20].w[0] + 28u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 32u));
    st32((c.r[22].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 36u));
    st32((c.r[23].w[0]), c.f[0]);
    st32((c.r[30].w[0]), 0u);
    set32(c.r[5], ld32((c.r[20].w[0] + 24u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0B64u); set32(c.r[6], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_00BE(c, 329u, depth + 1u); else { c.pc = 0x003FBDF0u; return; } if (c.pc != 0x001F0B64u) [[unlikely]] return; }
L_001F0B64:
    c.budget -= 1;
L_001F0B68:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_001F0BA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1626u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F0BC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F0C28; } }
L_001F0BC0:
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F0BD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F0C28; } }
    c.budget -= 1;
L_001F0BD8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F0BF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F0C28; } }
    c.budget -= 1;
L_001F0BF0:
    set32(c.r[5], c.r[3].w[0] - 1u);
    c.r[1].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001F0C08; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 2;
L_001F0C08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0C10u);  if (depth < kMaxDepth) unit_003C(c, 98u, depth + 1u); else { c.pc = 0x001F0C40u; return; } if (c.pc != 0x001F0C10u) [[unlikely]] return; }
L_001F0C10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F0C20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F0C28; } }
L_001F0C20:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 4u)));
    c.budget -= 2;
L_001F0C28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F0C40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F0C70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F0CF0; } }
    c.budget -= 1;
L_001F0C70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0C78u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8656u)));  if (depth < kMaxDepth) unit_003A(c, 56u, depth + 1u); else { c.pc = 0x001E9320u; return; } if (c.pc != 0x001F0C78u) [[unlikely]] return; }
L_001F0C78:
    c.r[5].d[0] = c.r[2].d[0] << 56;
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (t) { goto L_001F0CB8; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], c.r[2].w[0] + 3568u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_001F0CE0; } }
    c.budget -= 1;
L_001F0CB8:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], c.r[2].w[0] + 2016u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
L_001F0CE0:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_001F0CF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001F0CF4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F0D10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 755u));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(15ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F0D68; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 16496u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001F0000u < 16384u) { entry = entries_003C[(t - 0x001F0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001F0D50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001F0D68; } }
L_001F0D58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_001F0D68; } }
L_001F0D60:
    set32(c.r[6], 0u + 2u);
    c.budget -= 2;
L_001F0D68:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F0DE8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8693u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F0DB8; } }
    c.r[5].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[16], c.r[4].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[3], c.r[3].w[0] + 19344u);
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);  if (t) { goto L_001F0E58; } }
L_001F0DB8:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[16], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] + 6704u);
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);  if (t) { goto L_001F0E58; } }
L_001F0DE8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8693u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F0E28; } }
    c.r[5].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[16], c.r[4].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[3], c.r[3].w[0] - 28560u);
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);  if (t) { goto L_001F0E58; } }
L_001F0E28:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[16], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] - 7952u);
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 12;
L_001F0E58:
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[17].w[0] + 1176u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[17].w[0] + 1180u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[17].w[0] + 1184u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001F1040; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8693u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F1040; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 1488u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F1040; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[3].w[0] + 32u);  if (t) { goto L_001F0EC0; } }
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0EB4u); set32(c.r[6], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001F0EB4u) [[unlikely]] return; }
L_001F0EB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F0ED0; } }
    c.budget -= 1;
L_001F0EC0:
    set32(c.r[5], c.r[3].w[0] + 2096u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0ED0u); set32(c.r[6], c.r[17].w[0] + 2096u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001F0ED0u) [[unlikely]] return; }
L_001F0ED0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F0F68; } }
    c.r[7].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 755u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[5].w[0] + 6704u);
    c.f[1] = ld32((c.r[29].w[0] + 72u));
    set32(c.r[2], c.r[2].w[0] - 112u);
    set32(c.r[6], c.r[7].w[0] << 3);
    set32(c.r[3], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.facc = fp::mul(c.f[0], c.f[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[5].w[0]);
    set32(c.r[18], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0F38u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001F0F38u) [[unlikely]] return; }
L_001F0F38:
    c.f[1] = ld32((c.r[18].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F0F60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0F50u); c.f[12] = ld32((c.r[29].w[0] + 68u));  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x001F0F50u) [[unlikely]] return; }
L_001F0F50:
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F0FC8; } }
L_001F0F60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F1040; } }
L_001F0F68:
    c.r[8].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 755u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[6], c.r[6].w[0] - 7952u);
    set32(c.r[2], c.r[2].w[0] - 14768u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[7], c.r[8].w[0] << 3);
    set32(c.r[3], c.r[8].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[6].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0FB4u); set32(c.r[18], c.r[5].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x001F0FB4u) [[unlikely]] return; }
L_001F0FB4:
    c.f[1] = ld32((c.r[18].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F1040; } }
    c.budget -= 1;
L_001F0FC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0FD0u); c.f[12] = ld32((c.r[18].w[0]));  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x001F0FD0u) [[unlikely]] return; }
L_001F0FD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0FD8u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0005(c, 46u, depth + 1u); else { c.pc = 0x001158E0u; return; } if (c.pc != 0x001F0FD8u) [[unlikely]] return; }
L_001F0FD8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0FE4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 31u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x001F0FE4u) [[unlikely]] return; }
L_001F0FE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 64u);  if (t) { goto L_001F1040; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0FF4u);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x001F0FF4u) [[unlikely]] return; }
L_001F0FF4:
    c.f[3] = ld32((c.r[18].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[2] = c.r[3].w[0];
    c.f[4] = ld32((c.r[16].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 1176u));
    fpu_div(c, 0u, c.f[0], c.f[3]);
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::sub(c.f[1], c.f[4]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[4], c.f[0]);
    st32((c.r[17].w[0] + 1176u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = ld32((c.r[17].w[0] + 1180u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 1180u), c.f[0]);
    c.budget -= 19;
L_001F1040:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001F1060:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 264u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F1238; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 503u)));
    set32(c.r[2], c.r[2].w[0] - 10u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_001F1230; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 16560u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001F0000u < 16384u) { entry = entries_003C[(t - 0x001F0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001F10B8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 515u));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 515u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001F1230; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8663u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F10D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 143u, depth + 1u); else { c.pc = 0x001F13E0u; return; } if (c.pc != 0x001F10D8u) [[unlikely]] return; }
L_001F10D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F10E0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 148u, depth + 1u); else { c.pc = 0x001F15B0u; return; } if (c.pc != 0x001F10E0u) [[unlikely]] return; }
L_001F10E0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F10F4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 142u, depth + 1u); else { c.pc = 0x001F1390u; return; } if (c.pc != 0x001F10F4u) [[unlikely]] return; }
L_001F10F4:
    set32(c.r[5], 0u - c.r[18].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1104u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 142u, depth + 1u); else { c.pc = 0x001F1390u; return; } if (c.pc != 0x001F1104u) [[unlikely]] return; }
L_001F1104:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8693u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001F1230; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F111Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_003C(c, 142u, depth + 1u); else { c.pc = 0x001F1390u; return; } if (c.pc != 0x001F111Cu) [[unlikely]] return; }
L_001F111C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F1230; } }
    c.budget -= 1;
L_001F1128:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 515u));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 515u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001F1230; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8663u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1148u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003C(c, 143u, depth + 1u); else { c.pc = 0x001F13E0u; return; } if (c.pc != 0x001F1148u) [[unlikely]] return; }
L_001F1148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1150u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 148u, depth + 1u); else { c.pc = 0x001F15B0u; return; } if (c.pc != 0x001F1150u) [[unlikely]] return; }
L_001F1150:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1164u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 142u, depth + 1u); else { c.pc = 0x001F1390u; return; } if (c.pc != 0x001F1164u) [[unlikely]] return; }
L_001F1164:
    set32(c.r[5], 0u - c.r[18].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1174u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 142u, depth + 1u); else { c.pc = 0x001F1390u; return; } if (c.pc != 0x001F1174u) [[unlikely]] return; }
L_001F1174:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8693u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001F1230; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F118Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_003C(c, 142u, depth + 1u); else { c.pc = 0x001F1390u; return; } if (c.pc != 0x001F118Cu) [[unlikely]] return; }
L_001F118C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F1230; } }
    c.budget -= 1;
L_001F1198:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 515u));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 515u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001F1230; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F11B4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_003C(c, 143u, depth + 1u); else { c.pc = 0x001F13E0u; return; } if (c.pc != 0x001F11B4u) [[unlikely]] return; }
L_001F11B4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F11C4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 142u, depth + 1u); else { c.pc = 0x001F1390u; return; } if (c.pc != 0x001F11C4u) [[unlikely]] return; }
L_001F11C4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8693u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001F1230; } }
    set32(c.r[5], 0u + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F11DCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_003C(c, 142u, depth + 1u); else { c.pc = 0x001F1390u; return; } if (c.pc != 0x001F11DCu) [[unlikely]] return; }
L_001F11DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F1230; } }
    c.budget -= 1;
L_001F11E8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 515u));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 515u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001F1230; } }
    set32(c.r[5], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1204u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_003C(c, 143u, depth + 1u); else { c.pc = 0x001F13E0u; return; } if (c.pc != 0x001F1204u) [[unlikely]] return; }
L_001F1204:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 100u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1214u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 142u, depth + 1u); else { c.pc = 0x001F1390u; return; } if (c.pc != 0x001F1214u) [[unlikely]] return; }
L_001F1214:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8693u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001F1230; } }
    set32(c.r[5], 0u + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F122Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_003C(c, 142u, depth + 1u); else { c.pc = 0x001F1390u; return; } if (c.pc != 0x001F122Cu) [[unlikely]] return; }
L_001F122C:
    c.budget -= 1;
L_001F1230:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1238u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 144u, depth + 1u); else { c.pc = 0x001F1420u; return; } if (c.pc != 0x001F1238u) [[unlikely]] return; }
L_001F1238:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_001F1250; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F12C8; } }
L_001F1250:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F12C8; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[3], 0u + 35u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F1298; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F1298; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1970u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F1298; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1290u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 11u, depth + 1u); else { c.pc = 0x003B0090u; return; } if (c.pc != 0x001F1290u) [[unlikely]] return; }
L_001F1290:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F12C8; } }
L_001F1298:
    set32(c.r[3], 0u + 40u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F12C8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F12C8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1970u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_001F12C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F12C4u);  if (depth < kMaxDepth) unit_00AC(c, 11u, depth + 1u); else { c.pc = 0x003B0090u; return; } if (c.pc != 0x001F12C4u) [[unlikely]] return; }
L_001F12C4:
    c.budget -= 1;
L_001F12C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F12E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[17], c.r[17].w[0] - 27856u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 14;
L_001F1318:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F1358; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F1358; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8685u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F1358; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 515u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[20].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001F1358; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1354u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 142u, depth + 1u); else { c.pc = 0x001F1390u; return; } if (c.pc != 0x001F1354u) [[unlikely]] return; }
L_001F1354:
    c.budget -= 1;
L_001F1358:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F1318u | kUnwind; return; } goto L_001F1318; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001F1390:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[4].w[0] + 1520u);  if (t) { goto L_001F13C0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001F13B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F13D0; } }
    c.budget -= 1;
L_001F13B0:
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 28u), c.r[3].w[0]);  if (t) { goto L_001F13D0; } }
L_001F13C0:
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    c.budget -= 4;
L_001F13D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F13E0:
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[3].w[0] + 1520u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1520u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[1].d[0] = c.r[3].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001F1418; } }
    set32(c.r[3], 0u + 99u);
    c.budget -= 1;
L_001F1418:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001F1420:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F1450; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 1542u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[3].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001F1448; } }
    set32(c.r[3], 0u + 99u);
    c.budget -= 1;
L_001F1448:
    st16((c.r[4].w[0] + 1542u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001F1450:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 503u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = c.r[3].d[0] << 56;  if (t) { goto L_001F14A0; } }
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[3], 0u + 13u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001F14A0; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 515u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] + 16u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[3].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001F1498; } }
    set32(c.r[3], 0u + 99u);
    c.budget -= 2;
L_001F1498:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001F14A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F14B0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F14FC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8684u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8663u)));
    set32(c.r[5], c.r[5].w[0] - 21920u);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001F151C; } }
L_001F14FC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8663u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[3], c.r[3].w[0] - 14128u);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
L_001F151C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F1530:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F1580; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8684u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8663u)));
    set32(c.r[5], c.r[5].w[0] - 20368u);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  if (t) { goto L_001F15A4; } }
L_001F1580:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8663u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[3], c.r[3].w[0] + 22704u);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[5].w[0] << 2);
    c.budget -= 6;
L_001F1598:
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 3;
L_001F15A4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F15B0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F1614; } }
    c.r[7].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8684u)));
    set32(c.r[5], c.r[5].w[0] - 20368u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8663u)));
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] << 2);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_001F1604; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8685u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
L_001F1604:
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  if (t) { goto L_001F1638; } }
L_001F1614:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8663u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[3], c.r[3].w[0] + 22704u);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 9;
L_001F1638:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F1640:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F1670; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 2;
L_001F165C:
    set32(c.r[2], c.r[2].w[0] - 18976u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  if (t) { goto L_001F1688; } }
L_001F1670:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[2], c.r[2].w[0] + 16144u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 6;
L_001F1688:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F1690:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 515u));
    set32(c.r[2], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F16A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F16F0; } }
L_001F16A8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F16D8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], c.r[2].w[0] - 18752u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  if (t) { goto L_001F16F0; } }
L_001F16D8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], c.r[2].w[0] + 23024u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 6;
L_001F16F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F1700:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00900000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[7].d[0] = c.r[3].d[0] | 1984ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00800000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[5].d[0] = c.r[3].d[0] | 1546ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[4], 0u + 103u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[6], 0u + 114u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], 0u + 120u);
    set32(c.r[8], ld32((c.r[28].w[0] - 30368u)));
    st32((c.r[8].w[0] + 28u), 0u);
    st32((c.r[29].w[0] + 132u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    st32((c.r[29].w[0] + 140u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 128u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 124u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 136u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 120u), c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 39u)));
    c.budget -= 26;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[20], 0u - 1u);  if (t) { goto L_001F1D78; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F1A18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1780u);  if (depth < kMaxDepth) unit_0071(c, 75u, depth + 1u); else { c.pc = 0x002C52E0u; return; } if (c.pc != 0x001F1780u) [[unlikely]] return; }
L_001F1780:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 38u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 36u);  if (t) { goto L_001F1A08; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001F1A08; } }
    set32(c.r[3], 0u + 35u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 20u);  if (t) { goto L_001F1A08; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001F1A08; } }
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 8u);  if (t) { goto L_001F1A08; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001F1A08; } }
    set32(c.r[3], 0u + 37u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 23u);  if (t) { goto L_001F19D8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001F1998; } }
    set32(c.r[3], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 15u);  if (t) { goto L_001F1970; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001F1958; } }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 10u);  if (t) { goto L_001F1938; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001F1900; } }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 6u);  if (t) { goto L_001F18E0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001F18C8; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_001F18B0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001F1888; } }
    set32(c.r[3], 0u + 39u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_001F1870; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001F1870; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001F1850; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F1A18; } }
L_001F1850:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 25u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F1A18; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[3], 0u - 3u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 128u), c.r[3].w[0]);  if (t) { goto L_001F1A18; } }
L_001F1870:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 25u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0xFF7F0000u);  if (t) { goto L_001F1A18; } }
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[20].d[0] & c.r[3].d[0];  if (t) { goto L_001F1A18; } }
L_001F1888:
    set32(c.r[3], 0u - 3u);
    c.r[20].d[0] = c.r[20].d[0] & c.r[3].d[0];
    c.r[3].d[0] = ld8((c.r[2].w[0] + 25u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F1A18; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[3], 0u - 9u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 128u), c.r[3].w[0]);  if (t) { goto L_001F1A18; } }
L_001F18B0:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 25u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u - 2u);  if (t) { goto L_001F1A18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[20].d[0] & c.r[3].d[0];  if (t) { goto L_001F1A18; } }
    c.budget -= 1;
L_001F18C8:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 25u));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[3], 0u - 2u);  if (t) { goto L_001F1A18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[20].d[0] & c.r[3].d[0];  if (t) { goto L_001F1A18; } }
    c.budget -= 1;
L_001F18E0:
    set32(c.r[3], 0u - 2u);
    c.r[20].d[0] = c.r[20].d[0] & c.r[3].d[0];
    c.r[3].d[0] = ld8((c.r[2].w[0] + 25u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F1A18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_001F1A18; } }
    c.budget -= 1;
L_001F1900:
    c.r[5].d[0] = ld8((c.r[2].w[0] + 25u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001F1920; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[3], 0u - 1025u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[29].w[0] + 128u), c.r[3].w[0]);
    c.budget -= 5;
L_001F1920:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001F1A18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_001F1A18; } }
    c.budget -= 1;
L_001F1938:
    c.r[4].d[0] = ld8((c.r[2].w[0] + 25u));
    set32(c.r[3], 0u - 4353u);
    c.r[20].d[0] = c.r[20].d[0] & c.r[3].d[0];
    set32(c.r[3], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F1A18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], 0u + 3584u);  if (t) { goto L_001F1A18; } }
L_001F1958:
    c.r[4].d[0] = ld8((c.r[2].w[0] + 25u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u - 2u);  if (t) { goto L_001F1A18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[20].d[0] & c.r[3].d[0];  if (t) { goto L_001F1A18; } }
L_001F1970:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 25u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F1A18; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 128u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 128u), c.r[3].w[0]);  if (t) { goto L_001F1A18; } }
    c.budget -= 1;
L_001F1998:
    c.r[5].d[0] = ld8((c.r[2].w[0] + 25u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001F19C0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 128u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF7F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[29].w[0] + 128u), c.r[3].w[0]);
    c.budget -= 6;
L_001F19C0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001F1A18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_001F1A18; } }
    c.budget -= 1;
L_001F19D8:
    c.r[4].d[0] = ld8((c.r[2].w[0] + 25u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u - 4u);  if (t) { goto L_001F19F0; } }
    c.r[20].d[0] = c.r[20].d[0] & c.r[3].d[0];
    c.budget -= 2;
L_001F19F0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F1A18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_001F1A18; } }
    c.budget -= 1;
L_001F1A08:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 25u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F1A18; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F1A18:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 89u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 96u);  if (t) { goto L_001F1C60; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 16u);  if (t) { goto L_001F1A58; } }
L_001F1A3C:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F1A3Cu | kUnwind; return; } goto L_001F1A3C; } }
L_001F1A58:
    set32(c.r[3], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[19], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001F1C18; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001F1C18; } }
L_001F1A78:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 89u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F1A98; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001F1C00; } }
    c.budget -= 1;
L_001F1A98:
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    c.r[3].d[0] = c.r[20].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F1C00; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1AB8u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x001F1AB8u) [[unlikely]] return; }
L_001F1AB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001F1C00; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[7], 0u + 18u);
    set32(c.r[5], c.r[5].w[0] + 7584u);
    set32(c.r[3], c.r[3].w[0] + 9568u);
    set32(c.r[2], c.r[2].w[0] - 27712u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 3u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    st8((c.r[18].w[0] + 3u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 16u));
    c.f[2] = ld32((c.r[19].w[0] + 20u));
    c.f[1] = ld32((c.r[19].w[0] + 24u));
    c.f[0] = ld32((c.r[19].w[0] + 28u));
    st32((c.r[18].w[0] + 32u), c.f[3]);
    st32((c.r[18].w[0] + 36u), c.f[2]);
    st32((c.r[18].w[0] + 40u), c.f[1]);
    st32((c.r[18].w[0] + 44u), c.f[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 2u)));
    st32((c.r[18].w[0] + 80u), c.r[7].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 4u)));
    st32((c.r[18].w[0] + 84u), c.r[7].w[0]);
    st8((c.r[18].w[0] + 11u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[18].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st32((c.r[18].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 38;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1B58u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x001F1B58u) [[unlikely]] return; }
L_001F1B58:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    set32(c.r[4], 0u + 255u);
    set32(c.r[3], 0u + 26u);
    st8((c.r[18].w[0] + 268u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    st8((c.r[18].w[0] + 270u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[18].w[0] + 264u), c.r[18].w[0]);
    st8((c.r[18].w[0] + 515u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 10;
L_001F1B80:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F1BA0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F1BA0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30368u)));
    st32((c.r[3].w[0] + 28u), c.r[18].w[0]);
    c.budget -= 3;
L_001F1BA0:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 37u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F1BC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1BBCu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 11u)));  if (depth < kMaxDepth) unit_003C(c, 218u, depth + 1u); else { c.pc = 0x001F2720u; return; } if (c.pc != 0x001F1BBCu) [[unlikely]] return; }
L_001F1BBC:
    c.budget -= 1;
L_001F1BC0:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 10u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F1BE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1BDCu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 11u)));  if (depth < kMaxDepth) unit_003C(c, 223u, depth + 1u); else { c.pc = 0x001F2800u; return; } if (c.pc != 0x001F1BDCu) [[unlikely]] return; }
L_001F1BDC:
    c.budget -= 1;
L_001F1BE0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[18].w[0] + 32u);  if (t) { goto L_001F1C00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1BF8u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x001F1BF8u) [[unlikely]] return; }
L_001F1BF8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_001F1C00:
    set32(c.r[19], c.r[19].w[0] + 32u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    set32(c.r[3], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F1A78u | kUnwind; return; } goto L_001F1A78; } }
    c.budget -= 1;
L_001F1C18:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F1C60; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001F1C60; } }
    c.f[0] = c.r[17].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    fpu_div(c, 12u, c.f[1], c.f[0]);
    set32(c.r[4], c.r[2].w[0] + 688u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1C60u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x001F1C60u) [[unlikely]] return; }
L_001F1C60:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[6].sd[0] >= 0; c.r[5].d[0] = c.r[6].d[0] & 31ull;  if (t) { goto L_001F1C7C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_001F1C80; } }
    set32(c.r[5], c.r[5].w[0] - 32u);
    c.budget -= 1;
L_001F1C7C:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_001F1C80:
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 5));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] >= 0; set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));  if (t) { goto L_001F1C94; } }
    set32(c.r[3], c.r[6].w[0] + 31u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    c.budget -= 2;
L_001F1C94:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 136u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F1CB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1CB4u);  if (depth < kMaxDepth) unit_001C(c, 230u, depth + 1u); else { c.pc = 0x00173750u; return; } if (c.pc != 0x001F1CB4u) [[unlikely]] return; }
L_001F1CB4:
    c.budget -= 1;
L_001F1CB8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[6].sd[0] >= 0; c.r[5].d[0] = c.r[6].d[0] & 31ull;  if (t) { goto L_001F1CD4; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_001F1CD8; } }
    set32(c.r[5], c.r[5].w[0] - 32u);
    c.budget -= 1;
L_001F1CD4:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_001F1CD8:
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 5));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] >= 0; set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));  if (t) { goto L_001F1CEC; } }
    set32(c.r[3], c.r[6].w[0] + 31u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    c.budget -= 2;
L_001F1CEC:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 120u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F1D10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1D0Cu);  if (depth < kMaxDepth) unit_001F(c, 219u, depth + 1u); else { c.pc = 0x0017DD80u; return; } if (c.pc != 0x001F1D0Cu) [[unlikely]] return; }
L_001F1D0C:
    c.budget -= 1;
L_001F1D10:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[6].sd[0] >= 0; c.r[5].d[0] = c.r[6].d[0] & 31ull;  if (t) { goto L_001F1D2C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_001F1D30; } }
    set32(c.r[5], c.r[5].w[0] - 32u);
    c.budget -= 1;
L_001F1D2C:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_001F1D30:
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 5));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] >= 0; set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));  if (t) { goto L_001F1D44; } }
    set32(c.r[3], c.r[6].w[0] + 31u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    c.budget -= 2;
L_001F1D44:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 128u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F1D78; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 89u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F1D78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1D78u);  if (depth < kMaxDepth) unit_0022(c, 6u, depth + 1u); else { c.pc = 0x001880A0u; return; } if (c.pc != 0x001F1D78u) [[unlikely]] return; }
L_001F1D78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001F1DA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 26144u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001F0000u < 16384u) { entry = entries_003C[(t - 0x001F0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001F1DC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[10], c.r[10].w[0] + 25984u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 8192u);
    set32(c.r[9], ld32((c.r[28].w[0] - 23784u)));
    c.r[5].d[0] = 0ull | 58370ull;
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u + 8u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].d[0] = 0ull | 65535ull;
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[9], c.r[8].w[0] << 4);
    set32(c.r[8], c.r[11].w[0] << 2);
    set32(c.r[8], c.r[10].w[0] + c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[8].w[0])));
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    st16((c.r[4].w[0] + 562u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[4].w[0] + 566u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 502u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[8].w[0] + 2u));
    st16((c.r[4].w[0] + 496u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 29;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F1E40; } }
    set32(c.r[2], 0u + 4096u);
    st16((c.r[16].w[0] + 496u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001F1E40:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 496u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    st16((c.r[16].w[0] + 496u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 498u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 500u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 88u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F1E90; } }
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    st32((c.r[16].w[0] + 128u), c.f[3]);
    st32((c.r[16].w[0] + 132u), c.f[2]);
    st32((c.r[16].w[0] + 136u), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 140u), c.f[0]);  if (t) { goto L_001F1EA8; } }
    c.budget -= 1;
L_001F1E90:
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[4], c.r[16].w[0] + 128u);
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1EA4u); set32(c.r[6], c.r[2].w[0] + 688u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001F1EA4u) [[unlikely]] return; }
L_001F1EA4:
    c.budget -= 1;
L_001F1EA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1EB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 135u, depth + 1u); else { c.pc = 0x002A9EB0u; return; } if (c.pc != 0x001F1EB0u) [[unlikely]] return; }
L_001F1EB0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1EBCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 150u, depth + 1u); else { c.pc = 0x002AA460u; return; } if (c.pc != 0x001F1EBCu) [[unlikely]] return; }
L_001F1EBC:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 6u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 7u);  if (t) { goto L_001F1ED8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F1EF0; } }
L_001F1ED8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001F1EF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1EECu);  if (depth < kMaxDepth) unit_003C(c, 248u, depth + 1u); else { c.pc = 0x001F3090u; return; } if (c.pc != 0x001F1EECu) [[unlikely]] return; }
L_001F1EEC:
    c.budget -= 1;
L_001F1EF0:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 24u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F1F28; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[3], c.r[4].w[0] - 2u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_001F1F20; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F1F28; } }
L_001F1F20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1F28u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 246u, depth + 1u); else { c.pc = 0x001F2F70u; return; } if (c.pc != 0x001F1F28u) [[unlikely]] return; }
L_001F1F28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F1F40:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] + 25984u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 11;
L_001F1F6C:
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[4], c.r[3].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[18], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 2u));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001F1FA0; } }
    set32(c.r[2], 0u + 16384u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 498u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001F2010; } }
L_001F1FA0:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 519u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[8].w[0] - 27856u);
    set32(c.r[4], 0u + 35u);
    set32(c.r[3], 0u + 40u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 8;
L_001F1FC0:
    set32(c.r[2], c.r[6].w[0] << (c.r[9].w[0] & 31u));
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F2000; } }
    c.r[5].d[0] = ld8((c.r[8].w[0] + 8658u));
    set32(c.r[2], c.r[5].w[0] - 70u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001F1FF8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_001F1FF8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001F2000; } }
    c.budget -= 1;
L_001F1FF8:
    set32(c.r[16], 0u + 1u);
    c.budget -= 2;
L_001F2000:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[2].d[0] = c.r[9].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F1FC0u | kUnwind; return; } goto L_001F1FC0; } }
L_001F2010:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F2048; } }
    c.f[3] = ld32((c.r[19].w[0] + 128u));
    c.f[2] = ld32((c.r[19].w[0] + 132u));
    c.f[1] = ld32((c.r[19].w[0] + 136u));
    c.f[0] = ld32((c.r[19].w[0] + 140u));
    st32((c.r[19].w[0] + 32u), c.f[3]);
    st32((c.r[19].w[0] + 36u), c.f[2]);
    st32((c.r[19].w[0] + 40u), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 44u), c.f[0]);  if (t) { goto L_001F2060; } }
    c.budget -= 1;
L_001F2048:
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[4], c.r[19].w[0] + 32u);
    set32(c.r[6], c.r[19].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F205Cu); set32(c.r[5], c.r[2].w[0] + 688u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x001F205Cu) [[unlikely]] return; }
L_001F205C:
    c.budget -= 1;
L_001F2060:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F2078; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001F2150; } }
    c.budget -= 1;
L_001F2078:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    set32(c.r[2], 0u + 5u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F20B8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_001F20B0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F20B8; } }
    c.budget -= 1;
L_001F20B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F20B8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 259u, depth + 1u); else { c.pc = 0x001F3370u; return; } if (c.pc != 0x001F20B8u) [[unlikely]] return; }
L_001F20B8:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001F20E8; } }
    c.budget -= 1;
L_001F20C8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F20DCu); set32(c.r[7], c.r[16].w[0] + 5u);  if (depth < kMaxDepth) unit_003D(c, 301u, depth + 1u); else { c.pc = 0x001F6F40u; return; } if (c.pc != 0x001F20DCu) [[unlikely]] return; }
L_001F20DC:
    set32(c.r[16], c.r[16].w[0] + 2u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 3;
L_001F20E8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;  if (t) { goto L_001F2100; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F20C8u | kUnwind; return; } goto L_001F20C8; } }
L_001F2100:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001F2128; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 184u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 188u), c.r[2].w[0]);  if (t) { goto L_001F2138; } }
L_001F2128:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001F2138:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001F2150; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2150u);  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x001F2150u) [[unlikely]] return; }
L_001F2150:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], 0u + 7u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001F2170; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F216Cu);  if (depth < kMaxDepth) unit_003C(c, 245u, depth + 1u); else { c.pc = 0x001F2F20u; return; } if (c.pc != 0x001F216Cu) [[unlikely]] return; }
L_001F216C:
    c.budget -= 1;
L_001F2170:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], 0u + 24u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001F2190; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F218Cu);  if (depth < kMaxDepth) unit_003C(c, 247u, depth + 1u); else { c.pc = 0x001F2FC0u; return; } if (c.pc != 0x001F218Cu) [[unlikely]] return; }
L_001F218C:
    c.budget -= 1;
L_001F2190:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F219Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0031(c, 443u, depth + 1u); else { c.pc = 0x001C56E0u; return; } if (c.pc != 0x001F219Cu) [[unlikely]] return; }
L_001F219C:
    set32(c.r[3], 0u + 1u);
    st8((c.r[19].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[4].w[0] - 6u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 24u);  if (t) { goto L_001F21C8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F21E0; } }
    c.budget -= 1;
L_001F21C8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001F21E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F21DCu);  if (depth < kMaxDepth) unit_003C(c, 249u, depth + 1u); else { c.pc = 0x001F30B0u; return; } if (c.pc != 0x001F21DCu) [[unlikely]] return; }
L_001F21DC:
    c.budget -= 1;
L_001F21E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001F2200:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] + 25984u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], 0u + 6u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[7], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[5], c.r[4].w[0] << 4);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[16], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 20;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001F22B0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F2280; } }
    c.f[3] = ld32((c.r[18].w[0] + 128u));
    c.f[2] = ld32((c.r[18].w[0] + 132u));
    c.f[1] = ld32((c.r[18].w[0] + 136u));
    c.f[0] = ld32((c.r[18].w[0] + 140u));
    st32((c.r[18].w[0] + 32u), c.f[3]);
    st32((c.r[18].w[0] + 36u), c.f[2]);
    st32((c.r[18].w[0] + 40u), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 44u), c.f[0]);  if (t) { goto L_001F2298; } }
L_001F2280:
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[4], c.r[18].w[0] + 32u);
    set32(c.r[6], c.r[18].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2294u); set32(c.r[5], c.r[2].w[0] + 688u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x001F2294u) [[unlikely]] return; }
L_001F2294:
    c.budget -= 1;
L_001F2298:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F22A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0031(c, 443u, depth + 1u); else { c.pc = 0x001C56E0u; return; } if (c.pc != 0x001F22A4u) [[unlikely]] return; }
L_001F22A4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F2530; } }
L_001F22B0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_001F2518; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001F2340; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001F22D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F2518; } }
L_001F22D8:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 5u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 144u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43340000u);
    st32((c.r[18].w[0] + 148u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 80u), 0u);
    st32((c.r[18].w[0] + 84u), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2308u); st32((c.r[18].w[0] + 88u), 0u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001F2308u) [[unlikely]] return; }
L_001F2308:
    set32(c.r[3], 0u + 29u);
    mmi::divu(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 4;
L_001F2318:
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2324u); st32((c.r[18].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001F2324u) [[unlikely]] return; }
L_001F2324:
    set32(c.r[3], 0u + 29u);
    mmi::divu(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    st32((c.r[18].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 7;
L_001F2340:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[18].w[0] + 144u));
    c.f[2] = c.r[2].w[0];
    c.f[1] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    st32((c.r[18].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 148u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    st32((c.r[18].w[0] + 148u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 92u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[18].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[18].w[0] + 88u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 148u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 22;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F2430; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[4], c.r[18].w[0] + 192u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F23ACu); st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001F23ACu) [[unlikely]] return; }
L_001F23AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F23B4u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x001F23B4u) [[unlikely]] return; }
L_001F23B4:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F23C0u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_0045(c, 210u, depth + 1u); else { c.pc = 0x00216220u; return; } if (c.pc != 0x001F23C0u) [[unlikely]] return; }
L_001F23C0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F23CCu); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x001F23CCu) [[unlikely]] return; }
L_001F23CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F23D4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x001F23D4u) [[unlikely]] return; }
L_001F23D4:
    set32(c.r[16], c.r[29].w[0] + 72u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[17].d[0] = 0ull + 0ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 9;
L_001F23F8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2404u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0020(c, 149u, depth + 1u); else { c.pc = 0x00181D40u; return; } if (c.pc != 0x001F2404u) [[unlikely]] return; }
L_001F2404:
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[0] = c.r[4].w[0];
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 7ll ? 1ull : 0ull;
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[16].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F23F8u | kUnwind; return; } goto L_001F23F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F2530; } }
    c.budget -= 1;
L_001F2430:
    c.f[0] = ld32((c.r[18].w[0] + 144u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);  if (t) { goto L_001F2500; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    st32((c.r[18].w[0] + 144u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 25968u);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2460u); set32(c.r[17], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001F2460u) [[unlikely]] return; }
L_001F2460:
    c.r[3].d[0] = c.r[2].d[0] & 31ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 25424u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2478u); set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001F2478u) [[unlikely]] return; }
L_001F2478:
    c.r[3].d[0] = c.r[2].d[0] & 31ull;
    set32(c.r[4], c.r[18].w[0] + 192u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(28ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[6].d[0] = c.r[3].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F24A4u); set32(c.r[5], c.r[17].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0045(c, 212u, depth + 1u); else { c.pc = 0x00216350u; return; } if (c.pc != 0x001F24A4u) [[unlikely]] return; }
L_001F24A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F24ACu);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001F24ACu) [[unlikely]] return; }
L_001F24AC:
    c.r[2].d[0] = c.r[2].d[0] & 31ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(26ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F24D0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F24D0u); set32(c.r[5], c.r[17].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0046(c, 12u, depth + 1u); else { c.pc = 0x002181E0u; return; } if (c.pc != 0x001F24D0u) [[unlikely]] return; }
L_001F24D0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_001F2500; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F24FCu); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x001F24FCu) [[unlikely]] return; }
L_001F24FC:
    c.budget -= 1;
L_001F2500:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F250Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0031(c, 443u, depth + 1u); else { c.pc = 0x001C56E0u; return; } if (c.pc != 0x001F250Cu) [[unlikely]] return; }
L_001F250C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F2528; } }
    c.budget -= 1;
L_001F2518:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F2530; } }
L_001F2528:
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001F2530:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001F2550:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_001F2560:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 26u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F2598; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_001F2598; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 44u), c.r[2].w[0]);  if (t) { goto L_001F25C0; } }
    c.budget -= 1;
L_001F2598:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F25A4u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_0011(c, 106u, depth + 1u); else { c.pc = 0x001455E0u; return; } if (c.pc != 0x001F25A4u) [[unlikely]] return; }
L_001F25A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F25B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 44u), c.r[2].w[0]);  if (t) { goto L_001F25C0; } }
L_001F25B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 2;
L_001F25C0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], 0u + 24u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F2600; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[2], c.r[3].w[0] - 2u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_001F25F0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F2600; } }
L_001F25F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F25F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 263u, depth + 1u); else { c.pc = 0x001F34A0u; return; } if (c.pc != 0x001F25F8u) [[unlikely]] return; }
L_001F25F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F2708; } }
L_001F2600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2608u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001F2608u) [[unlikely]] return; }
L_001F2608:
    c.f[12] = ld32((c.r[29].w[0] + 44u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F2638; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F262Cu); set32(c.r[4], ld32((c.r[16].w[0] + 188u)));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x001F262Cu) [[unlikely]] return; }
L_001F262C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F2640; } }
    c.budget -= 1;
L_001F2638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2640u); set32(c.r[4], ld32((c.r[16].w[0] + 188u)));  if (depth < kMaxDepth) unit_0068(c, 82u, depth + 1u); else { c.pc = 0x002A23A0u; return; } if (c.pc != 0x001F2640u) [[unlikely]] return; }
L_001F2640:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 37u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F2690; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[2], c.r[2].w[0] + 29024u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 51u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F267Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_003C(c, 230u, depth + 1u); else { c.pc = 0x001F29A0u; return; } if (c.pc != 0x001F267Cu) [[unlikely]] return; }
L_001F267C:
    c.f[12] = ld32((c.r[29].w[0] + 44u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2688u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 11u)));  if (depth < kMaxDepth) unit_003C(c, 227u, depth + 1u); else { c.pc = 0x001F28C0u; return; } if (c.pc != 0x001F2688u) [[unlikely]] return; }
L_001F2688:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F26D0; } }
L_001F2690:
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F26D0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[2], c.r[2].w[0] + 29024u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 51u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F26C4u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_003C(c, 230u, depth + 1u); else { c.pc = 0x001F29A0u; return; } if (c.pc != 0x001F26C4u) [[unlikely]] return; }
L_001F26C4:
    c.f[12] = ld32((c.r[29].w[0] + 44u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F26D0u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 11u)));  if (depth < kMaxDepth) unit_003C(c, 227u, depth + 1u); else { c.pc = 0x001F28C0u; return; } if (c.pc != 0x001F26D0u) [[unlikely]] return; }
L_001F26D0:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 6u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 7u);  if (t) { goto L_001F26F0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F2708; } }
    c.budget -= 1;
L_001F26F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001F2708; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2704u);  if (depth < kMaxDepth) unit_003C(c, 250u, depth + 1u); else { c.pc = 0x001F3120u; return; } if (c.pc != 0x001F2704u) [[unlikely]] return; }
L_001F2704:
    c.budget -= 1;
L_001F2708:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F2720:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], c.r[4].w[0] << 1);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[28].w[0] - 32544u)));
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[2], ld32((c.r[28].w[0] - 32540u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F275Cu); set32(c.r[5], c.r[4].w[0] + 12u);  if (depth < kMaxDepth) unit_0065(c, 281u, depth + 1u); else { c.pc = 0x00297560u; return; } if (c.pc != 0x001F275Cu) [[unlikely]] return; }
L_001F275C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2768u); set32(c.r[5], c.r[16].w[0] + 24u);  if (depth < kMaxDepth) unit_0065(c, 281u, depth + 1u); else { c.pc = 0x00297560u; return; } if (c.pc != 0x001F2768u) [[unlikely]] return; }
L_001F2768:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[4], ld32((c.r[1].w[0] - 9072u)));
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[7], c.r[3].w[0] << 9);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0]), c.r[4].w[0]);
    c.r[1].d[0] = c.r[17].sd[0] < 10ll ? 1ull : 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 32556u)));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_001F27C8; } }
    set32(c.r[2], 0u + 4u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 11168u);
    set32(c.r[2], ld32((c.r[28].w[0] - 32556u)));
    set32(c.r[6], 0u + 256u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F27BCu); set32(c.r[4], c.r[2].w[0] + c.r[7].w[0]);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x001F27BCu) [[unlikely]] return; }
L_001F27BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F27E8; } }
    c.budget -= 1;
L_001F27C8:
    set32(c.r[2], 0u + 24u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 32556u)));
    set32(c.r[5], c.r[5].w[0] + 11424u);
    set32(c.r[6], 0u + 1536u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F27E8u); set32(c.r[4], c.r[2].w[0] + c.r[7].w[0]);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x001F27E8u) [[unlikely]] return; }
L_001F27E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F2800:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], c.r[4].w[0] << 1);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 32544u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 32540u)));
    set32(c.r[6], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[1].d[0] = c.r[17].sd[0] < 10ll ? 1ull : 0ull;
    set32(c.r[16], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 15;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_001F28A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2844u); set32(c.r[5], c.r[4].w[0] + 12u);  if (depth < kMaxDepth) unit_0065(c, 281u, depth + 1u); else { c.pc = 0x00297560u; return; } if (c.pc != 0x001F2844u) [[unlikely]] return; }
L_001F2844:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2850u); set32(c.r[5], c.r[16].w[0] + 24u);  if (depth < kMaxDepth) unit_0065(c, 281u, depth + 1u); else { c.pc = 0x00297560u; return; } if (c.pc != 0x001F2850u) [[unlikely]] return; }
L_001F2850:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[4], ld32((c.r[1].w[0] - 9064u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[7], c.r[2].w[0] << 9);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 4u);
    set32(c.r[5], c.r[5].w[0] + 11168u);
    set32(c.r[6], 0u + 256u);
    st32((c.r[16].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 32556u)));
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 32556u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F289Cu); set32(c.r[4], c.r[2].w[0] + c.r[7].w[0]);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x001F289Cu) [[unlikely]] return; }
L_001F289C:
    c.budget -= 1;
L_001F28A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F28C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], c.r[4].w[0] << 2);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[9], ld32((c.r[1].w[0] - 7744u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 5);
    set32(c.r[7], c.r[5].w[0] - c.r[4].w[0]);
    set32(c.r[8], 0u + 948u);
    set32(c.r[4], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[10], ld32((c.r[28].w[0] - 32544u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[11], c.r[2].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 32552u)));
    set32(c.r[4], c.r[3].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    mmi::mult(c, 0, c.r[9].w[0], c.r[8].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[10].w[0] + c.r[11].w[0]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    set32(c.r[3], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[5].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[1].w[0] - 7744u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 32548u)));
    set32(c.r[6], c.r[7].w[0] << 5);
    set32(c.r[7], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[6], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 41;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[5].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_001F2980; } }
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[28].w[0] - 32540u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2974u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0068(c, 85u, depth + 1u); else { c.pc = 0x002A2470u; return; } if (c.pc != 0x001F2974u) [[unlikely]] return; }
L_001F2974:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F2990; } }
    c.budget -= 1;
L_001F2980:
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[28].w[0] - 32540u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2990u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0068(c, 87u, depth + 1u); else { c.pc = 0x002A2510u; return; } if (c.pc != 0x001F2990u) [[unlikely]] return; }
L_001F2990:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001F29A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[6], c.r[16].w[0] + 32u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F29CCu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001F29CCu) [[unlikely]] return; }
L_001F29CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F29D4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001F29D4u) [[unlikely]] return; }
L_001F29D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F29DCu);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001F29DCu) [[unlikely]] return; }
L_001F29DC:
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F29F0u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001F29F0u) [[unlikely]] return; }
L_001F29F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F29F8u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x001F29F8u) [[unlikely]] return; }
L_001F29F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2A00u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x001F2A00u) [[unlikely]] return; }
L_001F2A00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2A08u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001F2A08u) [[unlikely]] return; }
L_001F2A08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2A10u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x001F2A10u) [[unlikely]] return; }
L_001F2A10:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[20] = c.f[0];  if (t) { goto L_001F2EF8; } }
    set32(c.r[18], c.r[29].w[0] + 88u);
    c.f[0] = ld32((c.r[18].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F2EF8; } }
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[17], c.r[29].w[0] + 84u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2A5Cu); st32((c.r[17].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x001F2A5Cu) [[unlikely]] return; }
L_001F2A5C:
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.f[1] = ld32((c.r[18].w[0]));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2A70u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001F2A70u) [[unlikely]] return; }
L_001F2A70:
    c.f[12] = ld32((c.r[17].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2A7Cu); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001F2A7Cu) [[unlikely]] return; }
L_001F2A7C:
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x39510000u);
    c.r[2].d[0] = c.r[2].d[0] | 46871ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[12] = ld32((c.r[29].w[0] + 80u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2AACu); c.f[13] = ld32((c.r[18].w[0]));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001F2AACu) [[unlikely]] return; }
L_001F2AAC:
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x39510000u);
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 11u)));
    c.r[1].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_001F2AE8; } }
    set32(c.r[7], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + 11168u);  if (t) { goto L_001F2AF8; } }
L_001F2AE8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[7], 0u + 24u);
    set32(c.r[6], c.r[6].w[0] + 11424u);
    c.budget -= 4;
L_001F2AF8:
    c.r[1].d[0] = 0ll < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_001F2EF8; } }
    c.r[1].d[0] = c.r[7].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[5], c.r[7].w[0] - 8u);  if (t) { goto L_001F2E58; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.r[10].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x44610000u);
    c.f[1] = c.r[10].w[0];
    c.f[0] = c.r[9].w[0];
    c.budget -= 6;
L_001F2B28:
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 11u)));
    c.f[3] = ld32((c.r[3].w[0] + 48u));
    set32(c.r[8], c.r[8].w[0] + 8u);
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[10], ld32((c.r[28].w[0] - 32556u)));
    c.r[9].d[0] = c.r[8].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    set32(c.r[11], c.r[12].w[0] << 1);
    c.f[3] = fp::sub(c.f[3], c.f[1]);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    set32(c.r[11], c.r[11].w[0] << 5);
    set32(c.r[11], c.r[11].w[0] + c.r[4].w[0]);
    set32(c.r[11], c.r[11].w[0] << 4);
    c.f[3] = fp::mul(c.f[0], c.f[3]);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    fpu_div(c, 3u, c.f[3], c.f[20]);
    c.f[3] = fp::add(c.f[1], c.f[3]);
    c.f[2] = fp::add(c.f[2], c.f[3]);
    st32((c.r[10].w[0] + 48u), c.f[2]);
    c.f[3] = ld32((c.r[3].w[0] + 52u));
    c.f[2] = ld32((c.r[17].w[0]));
    c.f[3] = fp::sub(c.f[3], c.f[1]);
    c.f[3] = fp::mul(c.f[0], c.f[3]);
    fpu_div(c, 3u, c.f[3], c.f[20]);
    c.f[3] = fp::add(c.f[1], c.f[3]);
    c.f[2] = fp::add(c.f[2], c.f[3]);
    st32((c.r[10].w[0] + 52u), c.f[2]);
    c.f[3] = ld32((c.r[3].w[0] + 112u));
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 11u)));
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[10], ld32((c.r[28].w[0] - 32556u)));
    c.f[3] = fp::sub(c.f[3], c.f[1]);
    set32(c.r[11], c.r[12].w[0] << 1);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    set32(c.r[11], c.r[11].w[0] << 5);
    set32(c.r[11], c.r[11].w[0] + c.r[4].w[0]);
    c.f[3] = fp::mul(c.f[0], c.f[3]);
    set32(c.r[11], c.r[11].w[0] + 4u);
    set32(c.r[11], c.r[11].w[0] << 4);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    fpu_div(c, 3u, c.f[3], c.f[20]);
    c.f[3] = fp::add(c.f[1], c.f[3]);
    c.f[2] = fp::add(c.f[2], c.f[3]);
    st32((c.r[10].w[0] + 48u), c.f[2]);
    c.f[3] = ld32((c.r[3].w[0] + 116u));
    c.f[2] = ld32((c.r[17].w[0]));
    c.f[3] = fp::sub(c.f[3], c.f[1]);
    c.f[3] = fp::mul(c.f[0], c.f[3]);
    fpu_div(c, 3u, c.f[3], c.f[20]);
    c.f[3] = fp::add(c.f[1], c.f[3]);
    c.f[2] = fp::add(c.f[2], c.f[3]);
    st32((c.r[10].w[0] + 52u), c.f[2]);
    c.f[3] = ld32((c.r[3].w[0] + 176u));
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 11u)));
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[10], ld32((c.r[28].w[0] - 32556u)));
    c.f[3] = fp::sub(c.f[3], c.f[1]);
    set32(c.r[11], c.r[12].w[0] << 1);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    set32(c.r[11], c.r[11].w[0] << 5);
    set32(c.r[11], c.r[11].w[0] + c.r[4].w[0]);
    c.f[3] = fp::mul(c.f[0], c.f[3]);
    set32(c.r[11], c.r[11].w[0] + 8u);
    set32(c.r[11], c.r[11].w[0] << 4);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    fpu_div(c, 3u, c.f[3], c.f[20]);
    c.f[3] = fp::add(c.f[1], c.f[3]);
    c.f[2] = fp::add(c.f[2], c.f[3]);
    st32((c.r[10].w[0] + 48u), c.f[2]);
    c.f[3] = ld32((c.r[3].w[0] + 180u));
    c.f[2] = ld32((c.r[17].w[0]));
    c.f[3] = fp::sub(c.f[3], c.f[1]);
    c.f[3] = fp::mul(c.f[0], c.f[3]);
    fpu_div(c, 3u, c.f[3], c.f[20]);
    c.f[3] = fp::add(c.f[1], c.f[3]);
    c.f[2] = fp::add(c.f[2], c.f[3]);
    st32((c.r[10].w[0] + 52u), c.f[2]);
    c.f[3] = ld32((c.r[3].w[0] + 240u));
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 11u)));
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[10], ld32((c.r[28].w[0] - 32556u)));
    c.f[3] = fp::sub(c.f[3], c.f[1]);
    set32(c.r[11], c.r[12].w[0] << 1);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    set32(c.r[11], c.r[11].w[0] << 5);
    set32(c.r[11], c.r[11].w[0] + c.r[4].w[0]);
    c.f[3] = fp::mul(c.f[0], c.f[3]);
    set32(c.r[11], c.r[11].w[0] + 12u);
    set32(c.r[11], c.r[11].w[0] << 4);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    fpu_div(c, 3u, c.f[3], c.f[20]);
    c.f[3] = fp::add(c.f[1], c.f[3]);
    c.f[2] = fp::add(c.f[2], c.f[3]);
    st32((c.r[10].w[0] + 48u), c.f[2]);
    c.f[3] = ld32((c.r[3].w[0] + 244u));
    c.f[2] = ld32((c.r[17].w[0]));
    c.f[3] = fp::sub(c.f[3], c.f[1]);
    c.f[3] = fp::mul(c.f[0], c.f[3]);
    fpu_div(c, 3u, c.f[3], c.f[20]);
    c.f[3] = fp::add(c.f[1], c.f[3]);
    c.f[2] = fp::add(c.f[2], c.f[3]);
    st32((c.r[10].w[0] + 52u), c.f[2]);
    c.f[3] = ld32((c.r[3].w[0] + 304u));
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 11u)));
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[10], ld32((c.r[28].w[0] - 32556u)));
    c.f[3] = fp::sub(c.f[3], c.f[1]);
    set32(c.r[11], c.r[12].w[0] << 1);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    set32(c.r[11], c.r[11].w[0] << 5);
    set32(c.r[11], c.r[11].w[0] + c.r[4].w[0]);
    c.f[3] = fp::mul(c.f[0], c.f[3]);
    set32(c.r[11], c.r[11].w[0] + 16u);
    set32(c.r[11], c.r[11].w[0] << 4);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    fpu_div(c, 3u, c.f[3], c.f[20]);
    c.f[3] = fp::add(c.f[1], c.f[3]);
    c.f[2] = fp::add(c.f[2], c.f[3]);
    st32((c.r[10].w[0] + 48u), c.f[2]);
    c.f[3] = ld32((c.r[3].w[0] + 308u));
    c.f[2] = ld32((c.r[17].w[0]));
    c.f[3] = fp::sub(c.f[3], c.f[1]);
    c.f[3] = fp::mul(c.f[0], c.f[3]);
    fpu_div(c, 3u, c.f[3], c.f[20]);
    c.f[3] = fp::add(c.f[1], c.f[3]);
    c.f[2] = fp::add(c.f[2], c.f[3]);
    st32((c.r[10].w[0] + 52u), c.f[2]);
    c.f[3] = ld32((c.r[3].w[0] + 368u));
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 11u)));
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[10], ld32((c.r[28].w[0] - 32556u)));
    c.f[3] = fp::sub(c.f[3], c.f[1]);
    set32(c.r[11], c.r[12].w[0] << 1);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    set32(c.r[11], c.r[11].w[0] << 5);
    set32(c.r[11], c.r[11].w[0] + c.r[4].w[0]);
    c.f[3] = fp::mul(c.f[0], c.f[3]);
    set32(c.r[11], c.r[11].w[0] + 20u);
    set32(c.r[11], c.r[11].w[0] << 4);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    fpu_div(c, 3u, c.f[3], c.f[20]);
    c.f[3] = fp::add(c.f[1], c.f[3]);
    c.f[2] = fp::add(c.f[2], c.f[3]);
    st32((c.r[10].w[0] + 48u), c.f[2]);
    c.f[3] = ld32((c.r[3].w[0] + 372u));
    c.f[2] = ld32((c.r[17].w[0]));
    c.f[3] = fp::sub(c.f[3], c.f[1]);
    c.f[3] = fp::mul(c.f[0], c.f[3]);
    fpu_div(c, 3u, c.f[3], c.f[20]);
    c.f[3] = fp::add(c.f[1], c.f[3]);
    c.f[2] = fp::add(c.f[2], c.f[3]);
    st32((c.r[10].w[0] + 52u), c.f[2]);
    c.f[3] = ld32((c.r[3].w[0] + 432u));
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 11u)));
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[10], ld32((c.r[28].w[0] - 32556u)));
    c.f[3] = fp::sub(c.f[3], c.f[1]);
    set32(c.r[11], c.r[12].w[0] << 1);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    set32(c.r[11], c.r[11].w[0] << 5);
    set32(c.r[11], c.r[11].w[0] + c.r[4].w[0]);
    c.f[3] = fp::mul(c.f[0], c.f[3]);
    set32(c.r[11], c.r[11].w[0] + 24u);
    set32(c.r[11], c.r[11].w[0] << 4);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    fpu_div(c, 3u, c.f[3], c.f[20]);
    c.f[3] = fp::add(c.f[1], c.f[3]);
    c.f[2] = fp::add(c.f[2], c.f[3]);
    st32((c.r[10].w[0] + 48u), c.f[2]);
    c.f[3] = ld32((c.r[3].w[0] + 436u));
    c.f[2] = ld32((c.r[17].w[0]));
    c.f[3] = fp::sub(c.f[3], c.f[1]);
    c.f[3] = fp::mul(c.f[0], c.f[3]);
    fpu_div(c, 3u, c.f[3], c.f[20]);
    c.f[3] = fp::add(c.f[1], c.f[3]);
    c.f[2] = fp::add(c.f[2], c.f[3]);
    st32((c.r[10].w[0] + 52u), c.f[2]);
    c.f[3] = ld32((c.r[3].w[0] + 496u));
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 11u)));
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[10], ld32((c.r[28].w[0] - 32556u)));
    c.f[3] = fp::sub(c.f[3], c.f[1]);
    set32(c.r[11], c.r[12].w[0] << 1);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    set32(c.r[11], c.r[11].w[0] << 5);
    set32(c.r[11], c.r[11].w[0] + c.r[4].w[0]);
    c.f[3] = fp::mul(c.f[0], c.f[3]);
    set32(c.r[11], c.r[11].w[0] + 28u);
    set32(c.r[11], c.r[11].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + 32u);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    fpu_div(c, 3u, c.f[3], c.f[20]);
    c.f[3] = fp::add(c.f[1], c.f[3]);
    c.f[2] = fp::add(c.f[2], c.f[3]);
    st32((c.r[10].w[0] + 48u), c.f[2]);
    c.f[3] = ld32((c.r[3].w[0] + 500u));
    c.f[2] = ld32((c.r[17].w[0]));
    c.f[3] = fp::sub(c.f[3], c.f[1]);
    set32(c.r[3], c.r[3].w[0] + 512u);
    c.f[3] = fp::mul(c.f[0], c.f[3]);
    fpu_div(c, 3u, c.f[3], c.f[20]);
    c.f[3] = fp::add(c.f[1], c.f[3]);
    c.f[2] = fp::add(c.f[2], c.f[3]);
    c.budget -= 204;
    { const bool t = c.r[9].d[0] != 0ull; st32((c.r[10].w[0] + 52u), c.f[2]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F2B28u | kUnwind; return; } goto L_001F2B28; } }
L_001F2E58:
    c.r[1].d[0] = c.r[8].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[8].w[0] << 6);  if (t) { goto L_001F2EF8; } }
    set32(c.r[10], c.r[8].w[0] << 2);
    set32(c.r[9], c.r[6].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44610000u);
    c.f[3] = c.r[4].w[0];
    c.f[2] = c.r[3].w[0];
    c.budget -= 7;
L_001F2E80:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 11u)));
    c.f[1] = ld32((c.r[9].w[0] + 48u));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[4], ld32((c.r[28].w[0] - 32556u)));
    c.r[3].d[0] = c.r[8].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    set32(c.r[5], c.r[6].w[0] << 1);
    c.f[1] = fp::sub(c.f[1], c.f[3]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 5);
    set32(c.r[5], c.r[5].w[0] + c.r[10].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[10], c.r[10].w[0] + 4u);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    fpu_div(c, 1u, c.f[1], c.f[20]);
    c.f[1] = fp::add(c.f[3], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 48u), c.f[0]);
    c.f[1] = ld32((c.r[9].w[0] + 52u));
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[1] = fp::sub(c.f[1], c.f[3]);
    set32(c.r[9], c.r[9].w[0] + 64u);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_div(c, 1u, c.f[1], c.f[20]);
    c.f[1] = fp::add(c.f[3], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 29;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 52u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F2E80u | kUnwind; return; } goto L_001F2E80; } }
    c.budget -= 1;
L_001F2EF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001F2F20:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001F2F40; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_001F2F58; } }
L_001F2F40:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001F2F58; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 8u);
    st32((c.r[4].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 3;
L_001F2F58:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 88u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 88u), c.r[3].w[0]);  c.pc = t; return; }
L_001F2F70:
    st32((c.r[4].w[0] + 48u), 0u);
    set32(c.r[3], 0u + 4u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);  if (t) { goto L_001F2F90; } }
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 48u), c.r[3].w[0]);  if (t) { goto L_001F2FA8; } }
L_001F2F90:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);  if (t) { goto L_001F2FA8; } }
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    st32((c.r[4].w[0] + 48u), c.r[3].w[0]);
    c.budget -= 3;
L_001F2FA8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 64u), c.r[3].w[0]);  c.pc = t; return; }
L_001F2FC0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001F2FE0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] - 24u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_001F2FF8; } }
L_001F2FE0:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001F2FF8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] - 16u);
    st32((c.r[4].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 3;
L_001F2FF8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[5].w[0] - 2u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_001F3018; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001F3078; } }
    c.budget -= 1;
L_001F3018:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[4].w[0] + 64u));
    c.f[1] = ld32((c.r[4].w[0] + 48u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 48u), c.f[1]);  if (t) { goto L_001F3050; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBC230000u);
    st32((c.r[4].w[0] + 48u), c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 64u), c.r[3].w[0]);  if (t) { goto L_001F3078; } }
L_001F3050:
    c.f[1] = ld32((c.r[4].w[0] + 48u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x3C230000u);  if (t) { goto L_001F3078; } }
    st32((c.r[4].w[0] + 48u), c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[4].w[0] + 64u), c.r[3].w[0]);
    c.budget -= 4;
L_001F3078:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 80u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 80u), c.r[3].w[0]);  c.pc = t; return; }
L_001F3090:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    st32((c.r[4].w[0] + 48u), 0u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 64u), c.r[3].w[0]);  c.pc = t; return; }
L_001F30B0:
    c.f[2] = ld32((c.r[4].w[0] + 64u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[4].w[0] + 48u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 48u), c.f[1]);  if (t) { goto L_001F30E8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBC230000u);
    st32((c.r[4].w[0] + 48u), c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 64u), c.r[3].w[0]);  if (t) { goto L_001F3110; } }
L_001F30E8:
    c.f[1] = ld32((c.r[4].w[0] + 48u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x3C230000u);  if (t) { goto L_001F3110; } }
    st32((c.r[4].w[0] + 48u), c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[4].w[0] + 64u), c.r[3].w[0]);
    c.budget -= 4;
L_001F3110:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F3120:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[3], 0u + 6u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 11;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001F3158; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_001F3178; } }
    c.budget -= 1;
L_001F3158:
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001F3170; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_001F3178; } }
    c.budget -= 1;
L_001F3170:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F3348; } }
L_001F3178:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = ld32((c.r[4].w[0] + 48u));
    c.f[0] = c.r[3].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[2] = c.r[4].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F31B0; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 128u);  if (t) { goto L_001F31CC; } }
L_001F31B0:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[3], 0u + 128u);
    c.budget -= 7;
L_001F31CC:
    st8((c.r[29].w[0] + 110u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[29].w[0] + 111u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    st8((c.r[29].w[0] + 109u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[29].w[0] + 108u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] + 26160u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[6], c.r[5].w[0] << 2);
    st32((c.r[1].w[0] + 20244u), c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    st32((c.r[1].w[0] + 20252u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 26176u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[29].w[0] + 108u);
    st32((c.r[1].w[0] + 20256u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20260u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] + 26192u);
    st32((c.r[1].w[0] + 20272u), c.r[3].w[0]);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20280u), c.r[3].w[0]);
    set32(c.r[3], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st16((c.r[1].w[0] + 20284u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    st32((c.r[1].w[0] + 20268u), 0u);
    set32(c.r[3], c.r[3].w[0] + 26208u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[1].w[0] + 20236u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20232u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20228u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20224u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20288u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00880000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 15680u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20276u), c.r[3].w[0]);
    c.budget -= 54;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[4].w[0])));  if (t) { goto L_001F3310; } }
    c.budget -= 1;
L_001F32A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F32B0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001F32B0u) [[unlikely]] return; }
L_001F32B0:
    c.f[1] = ld32((c.r[19].w[0]));
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    c.f[2] = 0u;
    c.f[13] = ld32((c.r[19].w[0] + 4u));
    c.f[12] = fp::add(c.f[2], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F32CCu); c.f[14] = fp::add(c.f[2], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001F32CCu) [[unlikely]] return; }
L_001F32CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F32D4u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x001F32D4u) [[unlikely]] return; }
L_001F32D4:
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] + 20224u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F32E8u); st32((c.r[17].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0067(c, 3u, depth + 1u); else { c.pc = 0x0029C020u; return; } if (c.pc != 0x001F32E8u) [[unlikely]] return; }
L_001F32E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F32F0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001F32F0u) [[unlikely]] return; }
L_001F32F0:
    set32(c.r[19], c.r[19].w[0] + 16u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_001F32F8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F32A8u | kUnwind; return; } goto L_001F32A8; } }
L_001F3308:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F3348; } }
L_001F3310:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[3].w[0] + 26212u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[1].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[16], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F3308u | kUnwind; return; } goto L_001F3308; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[4], c.r[18].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + 26224u);
    set32(c.r[17], c.r[29].w[0] + 92u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[3].w[0] + c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F32F8u | kUnwind; return; } goto L_001F32F8; } }
    c.budget -= 1;
L_001F3348:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001F3370:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 16u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], c.r[29].w[0] + 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F33AC; } }
L_001F3390:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F3390u | kUnwind; return; } goto L_001F3390; } }
L_001F33AC:
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F33BCu); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x001F33BCu) [[unlikely]] return; }
L_001F33BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001F3480; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[7], 0u + 18u);
    set32(c.r[5], c.r[5].w[0] + 7584u);
    set32(c.r[3], c.r[3].w[0] + 9568u);
    set32(c.r[2], c.r[2].w[0] - 27712u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 3u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.f[3] = ld32((c.r[17].w[0] + 32u));
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    st32((c.r[16].w[0] + 32u), c.f[3]);
    st32((c.r[16].w[0] + 36u), c.f[2]);
    st32((c.r[16].w[0] + 40u), c.f[1]);
    st32((c.r[16].w[0] + 44u), c.f[0]);
    set32(c.r[7], ld32((c.r[17].w[0] + 80u)));
    st32((c.r[16].w[0] + 80u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[17].w[0] + 84u)));
    st32((c.r[16].w[0] + 84u), c.r[7].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 11u)));
    st8((c.r[16].w[0] + 11u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 39;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3460u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x001F3460u) [[unlikely]] return; }
L_001F3460:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[3], 0u + 255u);
    st8((c.r[16].w[0] + 268u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    st8((c.r[16].w[0] + 270u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 264u), c.r[16].w[0]);
    st8((c.r[16].w[0] + 515u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_001F3480:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F34A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.f[20] = ld32((c.r[4].w[0] + 48u));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F3510; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F34CCu); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001F34CCu) [[unlikely]] return; }
L_001F34CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F34F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F34ECu); set32(c.r[4], ld32((c.r[16].w[0] + 188u)));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x001F34ECu) [[unlikely]] return; }
L_001F34EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F3550; } }
    c.budget -= 1;
L_001F34F8:
    set32(c.r[4], ld32((c.r[16].w[0] + 188u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3504u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0068(c, 82u, depth + 1u); else { c.pc = 0x002A23A0u; return; } if (c.pc != 0x001F3504u) [[unlikely]] return; }
L_001F3504:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F3550; } }
    c.budget -= 1;
L_001F3510:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3518u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001F3518u) [[unlikely]] return; }
L_001F3518:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F3540; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3538u); set32(c.r[4], ld32((c.r[16].w[0] + 188u)));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x001F3538u) [[unlikely]] return; }
L_001F3538:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F3550; } }
L_001F3540:
    set32(c.r[4], ld32((c.r[16].w[0] + 188u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F354Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0068(c, 82u, depth + 1u); else { c.pc = 0x002A23A0u; return; } if (c.pc != 0x001F354Cu) [[unlikely]] return; }
L_001F354C:
    c.budget -= 1;
L_001F3550:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F3570:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 6u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001F35E0; } }
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F35A4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x001F35A4u) [[unlikely]] return; }
L_001F35A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_001F35D8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    set32(c.r[4], 0u + 18u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] + 13808u);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[2].w[0] + 24u), c.r[16].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 11;
L_001F35D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F35E0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 68u, depth + 1u); else { c.pc = 0x0014CC40u; return; } if (c.pc != 0x001F35E0u) [[unlikely]] return; }
L_001F35E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F35F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 26448u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001F0000u < 16384u) { entry = entries_003C[(t - 0x001F0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001F3610:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 41u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], ld32((c.r[4].w[0] + 24u)));  if (t) { goto L_001F3688; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 42u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F3688; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 68u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F3660; } }
    st8((c.r[4].w[0] + 273u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 2;
L_001F3660:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 69u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_001F3678; } }
    st8((c.r[4].w[0] + 273u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001F3678:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    set32(c.r[2], c.r[2].w[0] + 17184u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 168u), c.r[2].w[0]);  if (t) { goto L_001F36C0; } }
L_001F3688:
    st8((c.r[4].w[0] + 273u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x001F0000u);  if (t) { goto L_001F36B0; } }
    set32(c.r[2], c.r[2].w[0] + 18192u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 168u), c.r[2].w[0]);  if (t) { goto L_001F36C0; } }
    c.budget -= 1;
L_001F36B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    set32(c.r[2], c.r[2].w[0] + 16288u);
    st32((c.r[4].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 4;
L_001F36C0:
    st16((c.r[4].w[0] + 306u), static_cast<std::uint16_t>(0u));
    c.f[0] = ld32((c.r[28].w[0] - 32536u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[2], c.r[2].w[0] + 29024u);
    st32((c.r[4].w[0] + 324u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[4].w[0] + 332u), c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F36F8u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0009(c, 167u, depth + 1u); else { c.pc = 0x00126260u; return; } if (c.pc != 0x001F36F8u) [[unlikely]] return; }
L_001F36F8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[2], c.r[2].w[0] + 29024u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 51u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3720u); set32(c.r[4], c.r[2].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001F3720u) [[unlikely]] return; }
L_001F3720:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 23696u);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3738u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001F3738u) [[unlikely]] return; }
L_001F3738:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3740u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 167u, depth + 1u); else { c.pc = 0x00126260u; return; } if (c.pc != 0x001F3740u) [[unlikely]] return; }
L_001F3740:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F3750:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F3A00; } }
    set32(c.r[17], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[17].w[0] + 750u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F37A0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F37A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F3A00; } }
L_001F37A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F37A8u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0009(c, 167u, depth + 1u); else { c.pc = 0x00126260u; return; } if (c.pc != 0x001F37A8u) [[unlikely]] return; }
L_001F37A8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[2], c.r[2].w[0] + 29024u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F37CCu); set32(c.r[4], c.r[2].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001F37CCu) [[unlikely]] return; }
L_001F37CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F37D4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 167u, depth + 1u); else { c.pc = 0x00126260u; return; } if (c.pc != 0x001F37D4u) [[unlikely]] return; }
L_001F37D4:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.f[0] = 0u;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 38u)));
    st8((c.r[18].w[0] + 352u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[18].w[0] + 308u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[16], c.r[18].w[0] + 304u);  if (t) { goto L_001F3808; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.budget -= 5;
L_001F3808:
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_001F3830; } }
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.budget -= 4;
L_001F3830:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 26464u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3854u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F3854u) [[unlikely]] return; }
L_001F3854:
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    st32((c.r[17].w[0] + 1028u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    st32((c.r[17].w[0] + 1032u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; c.r[9].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_001F3908; } }
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[9].w[0] - 27856u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 6;
L_001F3890:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == c.r[17].d[0];  if (t) { goto L_001F38F0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F38F0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F38F0; } }
    c.r[5].d[0] = ld8((c.r[9].w[0] + 515u));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 515u));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001F38F0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_001F38F0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001F38F0; } }
    set32(c.r[2], ld32((c.r[9].w[0] + 1492u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_001F38F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F3900; } }
L_001F38F0:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = c.r[8].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F3890u | kUnwind; return; } goto L_001F3890; } }
L_001F3900:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[7].w[0]));  if (t) { goto L_001F3910; } }
L_001F3908:
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_001F3910:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F3958; } }
    c.f[1] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = ld32((c.r[28].w[0] - 32532u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F3990; } }
    c.f[0] = ld32((c.r[28].w[0] - 32528u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.f[1] = ld32((c.r[28].w[0] - 32532u));
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F3990; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.f[1]);  if (t) { goto L_001F3990; } }
L_001F3958:
    c.f[1] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = ld32((c.r[28].w[0] - 32536u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F3990; } }
    c.f[0] = ld32((c.r[28].w[0] - 32528u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.f[1] = ld32((c.r[28].w[0] - 32536u));
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F3990; } }
    st32((c.r[16].w[0] + 20u), c.f[1]);
    c.budget -= 1;
L_001F3990:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 59140ull;
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.f[13] = c.r[2].w[0];
    st8((c.r[18].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[12] = ld32((c.r[16].w[0] + 16u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F39B8u); set32(c.r[6], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_002E(c, 147u, depth + 1u); else { c.pc = 0x001B9E20u; return; } if (c.pc != 0x001F39B8u) [[unlikely]] return; }
L_001F39B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F39C8u); st32((c.r[18].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 167u, depth + 1u); else { c.pc = 0x00126260u; return; } if (c.pc != 0x001F39C8u) [[unlikely]] return; }
L_001F39C8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 23696u);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F39E0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001F39E0u) [[unlikely]] return; }
L_001F39E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F39E8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 167u, depth + 1u); else { c.pc = 0x00126260u; return; } if (c.pc != 0x001F39E8u) [[unlikely]] return; }
L_001F39E8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_001F3A00; } }
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001F3A00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F3A20:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 1492u)));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F3A68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3A50u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_003D(c, 75u, depth + 1u); else { c.pc = 0x001F4A10u; return; } if (c.pc != 0x001F3A50u) [[unlikely]] return; }
L_001F3A50:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3A5Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 295u, depth + 1u); else { c.pc = 0x001F3B80u; return; } if (c.pc != 0x001F3A5Cu) [[unlikely]] return; }
L_001F3A5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F3B60; } }
    c.budget -= 1;
L_001F3A68:
    st32((c.r[29].w[0] + 80u), 0u);
    set32(c.r[16], c.r[29].w[0] + 84u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC47A0000u);
    st32((c.r[16].w[0]), 0u);
    set32(c.r[4], c.r[29].w[0] + 88u);
    st32((c.r[18].w[0] + 16u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 59140ull;
    c.f[12] = ld32((c.r[4].w[0]));
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3AA4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 147u, depth + 1u); else { c.pc = 0x001B9E20u; return; } if (c.pc != 0x001F3AA4u) [[unlikely]] return; }
L_001F3AA4:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F3AC0; } }
    c.f[0] = ld32((c.r[17].w[0] + 2100u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.budget -= 3;
L_001F3AC0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[2].d[0] = c.r[2].d[0] | 59140ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3ADCu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0043(c, 380u, depth + 1u); else { c.pc = 0x0020F600u; return; } if (c.pc != 0x001F3ADCu) [[unlikely]] return; }
L_001F3ADC:
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F3B30; } }
    c.f[2] = ld32((c.r[18].w[0] + 32u));
    c.f[1] = ld32((c.r[29].w[0] + 80u));
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    st32((c.r[18].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[18].w[0] + 36u));
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 36u), c.f[0]);  if (t) { goto L_001F3B40; } }
L_001F3B30:
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3B3Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001F3B3Cu) [[unlikely]] return; }
L_001F3B3C:
    c.budget -= 1;
L_001F3B40:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 764u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_001F3B60; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001F3B60; } }
    st8((c.r[17].w[0] + 764u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001F3B60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001F3B80:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[16], ld32((c.r[18].w[0] + 1492u)));
    c.budget -= 11;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F3BB8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001F3BE0; } }
L_001F3BB8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3BC8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003D(c, 75u, depth + 1u); else { c.pc = 0x001F4A10u; return; } if (c.pc != 0x001F3BC8u) [[unlikely]] return; }
L_001F3BC8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3BD4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 289u, depth + 1u); else { c.pc = 0x001F3A20u; return; } if (c.pc != 0x001F3BD4u) [[unlikely]] return; }
L_001F3BD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F3D28; } }
    c.budget -= 1;
L_001F3BE0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    set32(c.r[4], c.r[18].w[0] + 1312u);
    c.r[2].d[0] = c.r[2].d[0] | 59140ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3BFCu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0043(c, 380u, depth + 1u); else { c.pc = 0x0020F600u; return; } if (c.pc != 0x001F3BFCu) [[unlikely]] return; }
L_001F3BFC:
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3C08u); set32(c.r[5], c.r[18].w[0] + 1312u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x001F3C08u) [[unlikely]] return; }
L_001F3C08:
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F3C68; } }
    c.f[2] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = ld32((c.r[29].w[0] + 80u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 36u), c.f[0]);  if (t) { goto L_001F3D28; } }
    c.budget -= 1;
L_001F3C68:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3C78u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_003D(c, 75u, depth + 1u); else { c.pc = 0x001F4A10u; return; } if (c.pc != 0x001F3C78u) [[unlikely]] return; }
L_001F3C78:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3C84u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001F3C84u) [[unlikely]] return; }
L_001F3C84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3C8Cu); c.r[4].d[0] = ld8((c.r[18].w[0] + 8658u));  if (depth < kMaxDepth) unit_004E(c, 88u, depth + 1u); else { c.pc = 0x00238F50u; return; } if (c.pc != 0x001F3C8Cu) [[unlikely]] return; }
L_001F3C8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], 0u + 3u);  if (t) { goto L_001F3CA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F3CC0; } }
    c.budget -= 1;
L_001F3CA0:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 515u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], 0u + 160u);  if (t) { goto L_001F3CB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F3CC0; } }
    c.budget -= 1;
L_001F3CB8:
    set32(c.r[17], 0u + 162u);
    c.budget -= 2;
L_001F3CC0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 41u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001F3D08; } }
L_001F3CD0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8656u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 68u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[5].d[0] = c.r[17].d[0] & 255ull;  if (t) { goto L_001F3CF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3CF0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x001F3CF0u) [[unlikely]] return; }
L_001F3CF0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F3CD0u | kUnwind; return; } goto L_001F3CD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F3D28; } }
L_001F3D08:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 51u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[5].d[0] = c.r[17].d[0] & 255ull;  if (t) { goto L_001F3D28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3D24u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x001F3D24u) [[unlikely]] return; }
L_001F3D24:
    c.budget -= 1;
L_001F3D28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001F3D50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[16], ld32((c.r[17].w[0] + 1492u)));
    c.budget -= 11;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F3D88; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001F3DB0; } }
L_001F3D88:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3D98u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003D(c, 75u, depth + 1u); else { c.pc = 0x001F4A10u; return; } if (c.pc != 0x001F3D98u) [[unlikely]] return; }
L_001F3D98:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3DA4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 289u, depth + 1u); else { c.pc = 0x001F3A20u; return; } if (c.pc != 0x001F3DA4u) [[unlikely]] return; }
L_001F3DA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F3E50; } }
    c.budget -= 1;
L_001F3DB0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    set32(c.r[4], c.r[17].w[0] + 1312u);
    c.r[2].d[0] = c.r[2].d[0] | 59140ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3DCCu); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0043(c, 380u, depth + 1u); else { c.pc = 0x0020F600u; return; } if (c.pc != 0x001F3DCCu) [[unlikely]] return; }
L_001F3DCC:
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3DD8u); set32(c.r[5], c.r[17].w[0] + 1312u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x001F3DD8u) [[unlikely]] return; }
L_001F3DD8:
    c.f[0] = c.f[0] ^ fp::kSign;
    set32(c.r[3], 0u + 4u);
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F3E20; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 516u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_001F3E00; } }
    st32((c.r[18].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 1;
L_001F3E00:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 764u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001F3E20; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 784u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001F3E20; } }
    st8((c.r[17].w[0] + 764u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001F3E20:
    c.f[1] = ld32((c.r[18].w[0] + 12u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001F3E50; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3E44u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_003D(c, 75u, depth + 1u); else { c.pc = 0x001F4A10u; return; } if (c.pc != 0x001F3E44u) [[unlikely]] return; }
L_001F3E44:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3E50u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 76u, depth + 1u); else { c.pc = 0x001F4A50u; return; } if (c.pc != 0x001F3E50u) [[unlikely]] return; }
L_001F3E50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001F3E70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[16], ld32((c.r[17].w[0] + 1492u)));
    c.budget -= 11;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F3EA8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001F3ED0; } }
L_001F3EA8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3EB8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003D(c, 75u, depth + 1u); else { c.pc = 0x001F4A10u; return; } if (c.pc != 0x001F3EB8u) [[unlikely]] return; }
L_001F3EB8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3EC4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 289u, depth + 1u); else { c.pc = 0x001F3A20u; return; } if (c.pc != 0x001F3EC4u) [[unlikely]] return; }
L_001F3EC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F3F58; } }
    c.budget -= 1;
L_001F3ED0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 784u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_001F3EE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001F3EF0; } }
    c.budget -= 1;
L_001F3EE8:
    set32(c.r[2], 0u + 3u);
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001F3EF0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    set32(c.r[4], c.r[17].w[0] + 1312u);
    c.r[2].d[0] = c.r[2].d[0] | 59140ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3F0Cu); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0043(c, 380u, depth + 1u); else { c.pc = 0x0020F600u; return; } if (c.pc != 0x001F3F0Cu) [[unlikely]] return; }
L_001F3F0C:
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3F18u); set32(c.r[5], c.r[17].w[0] + 1312u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x001F3F18u) [[unlikely]] return; }
L_001F3F18:
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 516u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001F3F38; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3F38u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_003D(c, 75u, depth + 1u); else { c.pc = 0x001F4A10u; return; } if (c.pc != 0x001F3F38u) [[unlikely]] return; }
L_001F3F38:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 764u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001F3F58; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 784u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001F3F58; } }
    st8((c.r[17].w[0] + 764u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001F3F58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001F3F80:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001F3F90:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_001F3FA0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 51u)));
    c.budget -= 17;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_003D(c, 23u, depth); } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_003D(c, 23u, depth); } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_003D(c, 23u, depth); } }
    [[clang::musttail]] return unit_003D(c, 2u, depth);
}

}
