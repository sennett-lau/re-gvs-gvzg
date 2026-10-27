#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_003B[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0,
    22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 26,
    0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 40,
    0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 46, 0,
    0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0,
    0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0,
    0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0,
    0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 74, 0, 75, 0, 76, 0, 77, 0, 0, 0, 78, 0, 0, 79, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85,
    0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0,
    0, 0, 0, 0, 92, 0, 93, 0, 94, 0, 0, 0, 95, 0, 0, 96, 0, 0, 97, 0, 98, 0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 101,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 105, 0, 106, 0, 107,
    0, 0, 0, 108, 0, 109, 0, 0, 0, 110, 0, 0, 111, 0, 0, 112, 0, 113, 0, 0, 0, 114, 0, 115, 0, 0, 116, 0, 0, 0, 0, 117,
    0, 0, 118, 0, 0, 119, 0, 0, 0, 120, 0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0,
    0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 127, 0, 0, 0, 128,
    0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 133, 0, 134, 0, 135, 0, 0,
    136, 0, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 139, 0, 0, 0, 140, 0, 0, 141, 0, 142, 0, 0, 143, 0, 144, 0, 0, 0, 145, 0,
    0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 0, 155, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 160, 0, 161, 0, 162, 0, 0, 163, 0, 164, 0, 0, 0, 165, 0, 166, 0, 0, 167, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0,
    0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 179, 0, 0,
    0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0,
    0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0,
    0, 188, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 193, 0, 0, 194, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0,
    208, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0,
    0, 213, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 219,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0,
    0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 230, 0, 0, 231, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 235, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0,
    0, 0, 239, 0, 0, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0,
    243, 0, 0, 0, 244, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 249, 0, 0, 250, 0,
    0, 0, 251, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 255, 0,
    0, 0, 256, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 264, 0, 265, 0, 266, 0, 267,
    0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 278, 0, 0, 279, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0,
    0, 0, 282, 0, 283, 0, 0, 284, 0, 0, 285, 0, 0, 286, 0, 0, 287, 0, 0, 288, 0, 0, 289, 0, 0, 290, 0, 0, 0, 0, 0, 0,
    291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 306, 0, 0, 307, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 316, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0,
    0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0,
    322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 328, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0,
    337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 341, 0, 0, 342, 0,
    0, 0, 0, 343, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 348, 0, 0, 0, 349, 0, 0, 350, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0,
    0, 359, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 362, 0, 0, 0, 0, 0, 0,
};

void unit_003B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001EC000;
    case 2u: goto L_001EC018;
    case 3u: goto L_001EC02C;
    case 4u: goto L_001EC0DC;
    case 5u: goto L_001EC110;
    case 6u: goto L_001EC130;
    case 7u: goto L_001EC15C;
    case 8u: goto L_001EC1A0;
    case 9u: goto L_001EC1F4;
    case 10u: goto L_001EC254;
    case 11u: goto L_001EC290;
    case 12u: goto L_001EC35C;
    case 13u: goto L_001EC3DC;
    case 14u: goto L_001EC418;
    case 15u: goto L_001EC444;
    case 16u: goto L_001EC490;
    case 17u: goto L_001EC4D8;
    case 18u: goto L_001EC4F0;
    case 19u: goto L_001EC5B4;
    case 20u: goto L_001EC5CC;
    case 21u: goto L_001EC5E4;
    case 22u: goto L_001EC600;
    case 23u: goto L_001EC638;
    case 24u: goto L_001EC660;
    case 25u: goto L_001EC670;
    case 26u: goto L_001EC67C;
    case 27u: goto L_001EC68C;
    case 28u: goto L_001EC6A8;
    case 29u: goto L_001EC6B4;
    case 30u: goto L_001EC874;
    case 31u: goto L_001EC8E0;
    case 32u: goto L_001EC93C;
    case 33u: goto L_001EC95C;
    case 34u: goto L_001EC998;
    case 35u: goto L_001EC9AC;
    case 36u: goto L_001EC9BC;
    case 37u: goto L_001EC9CC;
    case 38u: goto L_001EC9DC;
    case 39u: goto L_001EC9EC;
    case 40u: goto L_001EC9FC;
    case 41u: goto L_001ECA08;
    case 42u: goto L_001ECA2C;
    case 43u: goto L_001ECA48;
    case 44u: goto L_001ECA58;
    case 45u: goto L_001ECA68;
    case 46u: goto L_001ECA78;
    case 47u: goto L_001ECA9C;
    case 48u: goto L_001ECAC0;
    case 49u: goto L_001ECAE8;
    case 50u: goto L_001ECAF8;
    case 51u: goto L_001ECB08;
    case 52u: goto L_001ECB18;
    case 53u: goto L_001ECB30;
    case 54u: goto L_001ECB50;
    case 55u: goto L_001ECB80;
    case 56u: goto L_001ECB98;
    case 57u: goto L_001ECBA8;
    case 58u: goto L_001ECBB8;
    case 59u: goto L_001ECBD8;
    case 60u: goto L_001ECBEC;
    case 61u: goto L_001ECC08;
    case 62u: goto L_001ECC18;
    case 63u: goto L_001ECC30;
    case 64u: goto L_001ECC74;
    case 65u: goto L_001ECC84;
    case 66u: goto L_001ECC90;
    case 67u: goto L_001ECD28;
    case 68u: goto L_001ECD34;
    case 69u: goto L_001ECD88;
    case 70u: goto L_001ECDDC;
    case 71u: goto L_001ECED8;
    case 72u: goto L_001ECFC0;
    case 73u: goto L_001ECFF4;
    case 74u: goto L_001ED118;
    case 75u: goto L_001ED120;
    case 76u: goto L_001ED128;
    case 77u: goto L_001ED130;
    case 78u: goto L_001ED140;
    case 79u: goto L_001ED14C;
    case 80u: goto L_001ED15C;
    case 81u: goto L_001ED168;
    case 82u: goto L_001ED1A0;
    case 83u: goto L_001ED1AC;
    case 84u: goto L_001ED1D0;
    case 85u: goto L_001ED1FC;
    case 86u: goto L_001ED20C;
    case 87u: goto L_001ED220;
    case 88u: goto L_001ED2AC;
    case 89u: goto L_001ED2E8;
    case 90u: goto L_001ED324;
    case 91u: goto L_001ED378;
    case 92u: goto L_001ED390;
    case 93u: goto L_001ED398;
    case 94u: goto L_001ED3A0;
    case 95u: goto L_001ED3B0;
    case 96u: goto L_001ED3BC;
    case 97u: goto L_001ED3C8;
    case 98u: goto L_001ED3D0;
    case 99u: goto L_001ED3E0;
    case 100u: goto L_001ED3EC;
    case 101u: goto L_001ED3FC;
    case 102u: goto L_001ED430;
    case 103u: goto L_001ED478;
    case 104u: goto L_001ED564;
    case 105u: goto L_001ED56C;
    case 106u: goto L_001ED574;
    case 107u: goto L_001ED57C;
    case 108u: goto L_001ED58C;
    case 109u: goto L_001ED594;
    case 110u: goto L_001ED5A4;
    case 111u: goto L_001ED5B0;
    case 112u: goto L_001ED5BC;
    case 113u: goto L_001ED5C4;
    case 114u: goto L_001ED5D4;
    case 115u: goto L_001ED5DC;
    case 116u: goto L_001ED5E8;
    case 117u: goto L_001ED5FC;
    case 118u: goto L_001ED608;
    case 119u: goto L_001ED614;
    case 120u: goto L_001ED624;
    case 121u: goto L_001ED630;
    case 122u: goto L_001ED63C;
    case 123u: goto L_001ED650;
    case 124u: goto L_001ED664;
    case 125u: goto L_001ED688;
    case 126u: goto L_001ED6E4;
    case 127u: goto L_001ED6EC;
    case 128u: goto L_001ED6FC;
    case 129u: goto L_001ED70C;
    case 130u: goto L_001ED7D0;
    case 131u: goto L_001ED80C;
    case 132u: goto L_001ED85C;
    case 133u: goto L_001ED864;
    case 134u: goto L_001ED86C;
    case 135u: goto L_001ED874;
    case 136u: goto L_001ED880;
    case 137u: goto L_001ED898;
    case 138u: goto L_001ED8A4;
    case 139u: goto L_001ED8B0;
    case 140u: goto L_001ED8C0;
    case 141u: goto L_001ED8CC;
    case 142u: goto L_001ED8D4;
    case 143u: goto L_001ED8E0;
    case 144u: goto L_001ED8E8;
    case 145u: goto L_001ED8F8;
    case 146u: goto L_001ED904;
    case 147u: goto L_001ED928;
    case 148u: goto L_001ED974;
    case 149u: goto L_001ED9A0;
    case 150u: goto L_001ED9D4;
    case 151u: goto L_001ED9E4;
    case 152u: goto L_001ED9F0;
    case 153u: goto L_001EDA58;
    case 154u: goto L_001EDA64;
    case 155u: goto L_001EDA78;
    case 156u: goto L_001EDB34;
    case 157u: goto L_001EDB60;
    case 158u: goto L_001EDB90;
    case 159u: goto L_001EDBB8;
    case 160u: goto L_001EDC9C;
    case 161u: goto L_001EDCA4;
    case 162u: goto L_001EDCAC;
    case 163u: goto L_001EDCB8;
    case 164u: goto L_001EDCC0;
    case 165u: goto L_001EDCD0;
    case 166u: goto L_001EDCD8;
    case 167u: goto L_001EDCE4;
    case 168u: goto L_001EDD10;
    case 169u: goto L_001EDD2C;
    case 170u: goto L_001EDD50;
    case 171u: goto L_001EDD58;
    case 172u: goto L_001EDD78;
    case 173u: goto L_001EDD98;
    case 174u: goto L_001EDDC0;
    case 175u: goto L_001EDDF0;
    case 176u: goto L_001EDE20;
    case 177u: goto L_001EDE58;
    case 178u: goto L_001EDE68;
    case 179u: goto L_001EDE74;
    case 180u: goto L_001EDE90;
    case 181u: goto L_001EDEF4;
    case 182u: goto L_001EDF04;
    case 183u: goto L_001EDF14;
    case 184u: goto L_001EDF30;
    case 185u: goto L_001EDF74;
    case 186u: goto L_001EDFE0;
    case 187u: goto L_001EDFF4;
    case 188u: goto L_001EE004;
    case 189u: goto L_001EE00C;
    case 190u: goto L_001EE018;
    case 191u: goto L_001EE040;
    case 192u: goto L_001EE050;
    case 193u: goto L_001EE058;
    case 194u: goto L_001EE064;
    case 195u: goto L_001EE0B0;
    case 196u: goto L_001EE0E0;
    case 197u: goto L_001EE0F0;
    case 198u: goto L_001EE154;
    case 199u: goto L_001EE1B0;
    case 200u: goto L_001EE210;
    case 201u: goto L_001EE244;
    case 202u: goto L_001EE260;
    case 203u: goto L_001EE2E4;
    case 204u: goto L_001EE2F8;
    case 205u: goto L_001EE330;
    case 206u: goto L_001EE460;
    case 207u: goto L_001EE474;
    case 208u: goto L_001EE480;
    case 209u: goto L_001EE490;
    case 210u: goto L_001EE4A4;
    case 211u: goto L_001EE4D0;
    case 212u: goto L_001EE5F0;
    case 213u: goto L_001EE604;
    case 214u: goto L_001EE610;
    case 215u: goto L_001EE650;
    case 216u: goto L_001EE664;
    case 217u: goto L_001EE6A0;
    case 218u: goto L_001EE6F0;
    case 219u: goto L_001EE6FC;
    case 220u: goto L_001EE7A0;
    case 221u: goto L_001EE7B4;
    case 222u: goto L_001EE7C0;
    case 223u: goto L_001EE7F0;
    case 224u: goto L_001EE804;
    case 225u: goto L_001EE844;
    case 226u: goto L_001EE858;
    case 227u: goto L_001EE890;
    case 228u: goto L_001EE8BC;
    case 229u: goto L_001EE8D0;
    case 230u: goto L_001EE8D8;
    case 231u: goto L_001EE8E4;
    case 232u: goto L_001EE928;
    case 233u: goto L_001EE958;
    case 234u: goto L_001EE9A8;
    case 235u: goto L_001EE9B4;
    case 236u: goto L_001EE9C0;
    case 237u: goto L_001EE9D0;
    case 238u: goto L_001EE9F0;
    case 239u: goto L_001EEA08;
    case 240u: goto L_001EEA14;
    case 241u: goto L_001EEA30;
    case 242u: goto L_001EEA6C;
    case 243u: goto L_001EEA80;
    case 244u: goto L_001EEA90;
    case 245u: goto L_001EEA9C;
    case 246u: goto L_001EEAE0;
    case 247u: goto L_001EEB10;
    case 248u: goto L_001EEB60;
    case 249u: goto L_001EEB6C;
    case 250u: goto L_001EEB78;
    case 251u: goto L_001EEB88;
    case 252u: goto L_001EEB94;
    case 253u: goto L_001EEBC0;
    case 254u: goto L_001EEC70;
    case 255u: goto L_001EEC78;
    case 256u: goto L_001EEC88;
    case 257u: goto L_001EEC94;
    case 258u: goto L_001EECA4;
    case 259u: goto L_001EECC0;
    case 260u: goto L_001EECCC;
    case 261u: goto L_001EECE0;
    case 262u: goto L_001EED1C;
    case 263u: goto L_001EED58;
    case 264u: goto L_001EED64;
    case 265u: goto L_001EED6C;
    case 266u: goto L_001EED74;
    case 267u: goto L_001EED7C;
    case 268u: goto L_001EEDA0;
    case 269u: goto L_001EEDC8;
    case 270u: goto L_001EEE20;
    case 271u: goto L_001EEE40;
    case 272u: goto L_001EEE5C;
    case 273u: goto L_001EEE88;
    case 274u: goto L_001EEEA8;
    case 275u: goto L_001EEEC4;
    case 276u: goto L_001EEEF0;
    case 277u: goto L_001EEFA8;
    case 278u: goto L_001EEFB4;
    case 279u: goto L_001EEFC0;
    case 280u: goto L_001EEFCC;
    case 281u: goto L_001EEFF8;
    case 282u: goto L_001EF008;
    case 283u: goto L_001EF010;
    case 284u: goto L_001EF01C;
    case 285u: goto L_001EF028;
    case 286u: goto L_001EF034;
    case 287u: goto L_001EF040;
    case 288u: goto L_001EF04C;
    case 289u: goto L_001EF058;
    case 290u: goto L_001EF064;
    case 291u: goto L_001EF080;
    case 292u: goto L_001EF0F0;
    case 293u: goto L_001EF148;
    case 294u: goto L_001EF168;
    case 295u: goto L_001EF1B8;
    case 296u: goto L_001EF1E8;
    case 297u: goto L_001EF230;
    case 298u: goto L_001EF290;
    case 299u: goto L_001EF2B0;
    case 300u: goto L_001EF308;
    case 301u: goto L_001EF344;
    case 302u: goto L_001EF3A0;
    case 303u: goto L_001EF418;
    case 304u: goto L_001EF440;
    case 305u: goto L_001EF450;
    case 306u: goto L_001EF45C;
    case 307u: goto L_001EF468;
    case 308u: goto L_001EF4A0;
    case 309u: goto L_001EF4B0;
    case 310u: goto L_001EF4C0;
    case 311u: goto L_001EF4F8;
    case 312u: goto L_001EF520;
    case 313u: goto L_001EF528;
    case 314u: goto L_001EF54C;
    case 315u: goto L_001EF558;
    case 316u: goto L_001EF58C;
    case 317u: goto L_001EF598;
    case 318u: goto L_001EF5F0;
    case 319u: goto L_001EF608;
    case 320u: goto L_001EF694;
    case 321u: goto L_001EF6F4;
    case 322u: goto L_001EF700;
    case 323u: goto L_001EF788;
    case 324u: goto L_001EF798;
    case 325u: goto L_001EF7A8;
    case 326u: goto L_001EF7B4;
    case 327u: goto L_001EF7DC;
    case 328u: goto L_001EF7E8;
    case 329u: goto L_001EF890;
    case 330u: goto L_001EF8A0;
    case 331u: goto L_001EF8AC;
    case 332u: goto L_001EF900;
    case 333u: goto L_001EF928;
    case 334u: goto L_001EF960;
    case 335u: goto L_001EF990;
    case 336u: goto L_001EFA60;
    case 337u: goto L_001EFA80;
    case 338u: goto L_001EFB14;
    case 339u: goto L_001EFB50;
    case 340u: goto L_001EFB60;
    case 341u: goto L_001EFB6C;
    case 342u: goto L_001EFB78;
    case 343u: goto L_001EFB8C;
    case 344u: goto L_001EFB98;
    case 345u: goto L_001EFBF4;
    case 346u: goto L_001EFC40;
    case 347u: goto L_001EFCD4;
    case 348u: goto L_001EFD10;
    case 349u: goto L_001EFD20;
    case 350u: goto L_001EFD2C;
    case 351u: goto L_001EFD38;
    case 352u: goto L_001EFD4C;
    case 353u: goto L_001EFD58;
    case 354u: goto L_001EFD90;
    case 355u: goto L_001EFEF0;
    case 356u: goto L_001EFF40;
    case 357u: goto L_001EFF48;
    case 358u: goto L_001EFF78;
    case 359u: goto L_001EFF84;
    case 360u: goto L_001EFF90;
    case 361u: goto L_001EFFE0;
    case 362u: goto L_001EFFE4;
    default: bad_entry(c, 0x001EC000u); return;
    }
L_001EC000:
    c.f[20] = ld32((c.r[16].w[0] + 2100u));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC018u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001EC018u) [[unlikely]] return; }
L_001EC018:
    c.f[21] = c.f[0];
    c.f[0] = ld32((c.r[16].w[0] + 1300u));
    c.f[13] = c.f[21];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC02Cu); c.f[12] = fp::sub(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001EC02Cu) [[unlikely]] return; }
L_001EC02C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[4], 0u - c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[4].d[0] = c.r[4].d[0] << 48;
    set32(c.r[2], c.r[2].w[0] - 21152u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001EC078; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EC0C0; } }
    c.budget -= 1;
L_001EC078:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40F00000u);
    c.f[2] = ld32((c.r[16].w[0] + 1300u));
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[1] = fp::sub(c.f[2], c.f[1]);  if (t) { goto L_001EC0B8; } }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0xC0F00000u);  if (t) { goto L_001EC0B8; } }
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EC0C0; } }
L_001EC0B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001EC110; } }
L_001EC0C0:
    c.f[3] = ld32((c.r[16].w[0] + 1296u));
    c.f[2] = ld32((c.r[16].w[0] + 2096u));
    c.f[1] = ld32((c.r[16].w[0] + 1304u));
    c.f[0] = ld32((c.r[16].w[0] + 2104u));
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC0DCu); c.f[13] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001EC0DCu) [[unlikely]] return; }
L_001EC0DC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 84u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    st32((c.r[16].w[0] + 1260u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 1260u)));
    set32(c.r[3], c.r[3].w[0] + 4096u);
    c.r[3].d[0] = c.r[3].d[0] & 57344ull;
    st32((c.r[16].w[0] + 1264u), c.r[3].w[0]);
    c.budget -= 13;
L_001EC110:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001EC130:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[3] = ld32((c.r[4].w[0] + 1296u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[2] = ld32((c.r[4].w[0] + 2096u));
    c.f[1] = ld32((c.r[4].w[0] + 1304u));
    c.f[0] = ld32((c.r[4].w[0] + 2104u));
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC15Cu); c.f[13] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001EC15Cu) [[unlikely]] return; }
L_001EC15C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 84u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    st32((c.r[16].w[0] + 1260u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 1260u)));
    set32(c.r[3], c.r[3].w[0] + 4096u);
    c.r[3].d[0] = c.r[3].d[0] & 57344ull;
    st32((c.r[16].w[0] + 1264u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001EC1A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], ld32((c.r[4].w[0] + 1488u)));
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_001EC1E0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EC1E0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EC1E8; } }
L_001EC1E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001EC270; } }
L_001EC1E8:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC1F4u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001EC1F4u) [[unlikely]] return; }
L_001EC1F4:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[3].w[0] + 18912u);
    set32(c.r[2], 0u + 1u);
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_001EC230; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001EC248; } }
L_001EC230:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 514u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001EC248; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EC270; } }
L_001EC248:
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC254u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x001EC254u) [[unlikely]] return; }
L_001EC254:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_001EC268; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EC270; } }
L_001EC268:
    set32(c.r[2], 0u + 2u);
    c.budget -= 2;
L_001EC270:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001EC290:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 764u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001EC428; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EC398; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001EC398; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EC2E8; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EC2E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EC4A0; } }
L_001EC2E0:
    st8((c.r[17].w[0] + 764u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001EC2E8:
    set32(c.r[2], ld32((c.r[17].w[0] + 1492u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EC390; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 1488u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EC320; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001EC320; } }
    st8((c.r[17].w[0] + 764u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 747u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001EC320; } }
    st8((c.r[17].w[0] + 748u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001EC320:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 764u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EC368; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 784u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EC368; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 1492u)));
    set32(c.r[4], c.r[17].w[0] + 1296u);
    set32(c.r[5], c.r[17].w[0] + 1312u);
    st32((c.r[17].w[0] + 1488u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 1508u)));
    st32((c.r[17].w[0] + 504u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 1508u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC35Cu); st32((c.r[17].w[0] + 508u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001EC35Cu) [[unlikely]] return; }
L_001EC35C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EC4A0; } }
    c.budget -= 1;
L_001EC368:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EC398; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 784u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_001EC398; } }
    st8((c.r[17].w[0] + 764u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 504u), 0u);
    st32((c.r[17].w[0] + 508u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1488u), 0u);  if (t) { goto L_001EC4A0; } }
L_001EC390:
    st8((c.r[17].w[0] + 764u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001EC398:
    set32(c.r[16], c.r[29].w[0] + 56u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC47A0000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 1492u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_001EC3E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st8((c.r[17].w[0] + 764u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + 29024u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8656u)));
    set32(c.r[5], c.r[17].w[0] + 1312u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC3DCu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x001EC3DCu) [[unlikely]] return; }
L_001EC3DC:
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 3;
L_001EC3E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.f[0] = ld32((c.r[17].w[0] + 1028u));
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[13] = c.r[2].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 1032u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[12] = ld32((c.r[16].w[0]));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC418u); set32(c.r[6], c.r[17].w[0] + 1296u);  if (depth < kMaxDepth) unit_002E(c, 147u, depth + 1u); else { c.pc = 0x001B9E20u; return; } if (c.pc != 0x001EC418u) [[unlikely]] return; }
L_001EC418:
    st32((c.r[17].w[0] + 504u), 0u);
    st32((c.r[17].w[0] + 508u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1488u), 0u);  if (t) { goto L_001EC4A0; } }
L_001EC428:
    set32(c.r[2], ld32((c.r[17].w[0] + 1492u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EC450; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 1508u)));
    set32(c.r[4], c.r[17].w[0] + 1296u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC444u); set32(c.r[5], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001EC444u) [[unlikely]] return; }
L_001EC444:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EC490; } }
    c.budget -= 1;
L_001EC450:
    set32(c.r[2], 0u + 4u);
    st8((c.r[17].w[0] + 764u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[7], c.r[29].w[0] + 56u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC47A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = ld32((c.r[17].w[0] + 1028u));
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.f[13] = c.r[2].w[0];
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 1032u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[12] = ld32((c.r[7].w[0]));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC490u); set32(c.r[6], c.r[17].w[0] + 1296u);  if (depth < kMaxDepth) unit_002E(c, 147u, depth + 1u); else { c.pc = 0x001B9E20u; return; } if (c.pc != 0x001EC490u) [[unlikely]] return; }
L_001EC490:
    st32((c.r[17].w[0] + 504u), 0u);
    st32((c.r[17].w[0] + 508u), 0u);
    st32((c.r[17].w[0] + 1488u), 0u);
    c.budget -= 4;
L_001EC4A0:
    set32(c.r[4], ld32((c.r[17].w[0] + 1492u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001EC4D0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EC4D0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8657u)));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 860u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[4].w[0] + 860u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
L_001EC4D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC4D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 18u, depth + 1u); else { c.pc = 0x001EC4F0u; return; } if (c.pc != 0x001EC4D8u) [[unlikely]] return; }
L_001EC4D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001EC4F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[4].d[0] = c.r[4].d[0] & 3ull;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EC578; } }
    c.r[4].d[0] = ld8((c.r[7].w[0] + 8658u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 24u);  if (t) { goto L_001EC528; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EC538; } }
    c.budget -= 1;
L_001EC528:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + 19368u);  if (t) { goto L_001EC540; } }
    c.budget -= 1;
L_001EC538:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[6], c.r[6].w[0] + 19376u);
    c.budget -= 2;
L_001EC540:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 764u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 780u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[4], c.r[5].w[0] << (c.r[4].w[0] & 31u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EC570; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0] + 781u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_001EC580; } }
    c.budget -= 1;
L_001EC570:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0] + 781u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001EC580; } }
L_001EC578:
    st8((c.r[7].w[0] + 781u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001EC580:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 781u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EC5E8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 764u)));
    st8((c.r[7].w[0] + 780u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 764u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EC5D8; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 1492u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[7].w[0] + 1360u);  if (t) { goto L_001EC5C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC5B4u); set32(c.r[5], c.r[7].w[0] + 1296u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001EC5B4u) [[unlikely]] return; }
L_001EC5B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EC5E8; } }
    c.budget -= 1;
L_001EC5C0:
    set32(c.r[4], c.r[7].w[0] + 1360u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC5CCu); set32(c.r[5], c.r[7].w[0] + 1312u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001EC5CCu) [[unlikely]] return; }
L_001EC5CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EC5E8; } }
    c.budget -= 1;
L_001EC5D8:
    set32(c.r[4], c.r[7].w[0] + 1360u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC5E4u); set32(c.r[5], c.r[7].w[0] + 1296u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001EC5E4u) [[unlikely]] return; }
L_001EC5E4:
    c.budget -= 1;
L_001EC5E8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001EC600:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const bool t = c.r[19].sd[0] >= 0; set32(c.r[17], 0u + 1u);  if (t) { goto L_001EC630; } }
    set32(c.r[17], 0u - 1u);
    c.budget -= 1;
L_001EC630:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC638u); set32(c.r[4], c.r[20].w[0] + 2048u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001EC638u) [[unlikely]] return; }
L_001EC638:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 749u));
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001EC660; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EC660; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC660u); set32(c.r[4], ld32((c.r[20].w[0] + 1260u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001EC660u) [[unlikely]] return; }
L_001EC660:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC670u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x001EC670u) [[unlikely]] return; }
L_001EC670:
    set32(c.r[4], c.r[20].w[0] + 1360u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC67Cu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001EC67Cu) [[unlikely]] return; }
L_001EC67C:
    set32(c.r[18], c.r[29].w[0] + 104u);
    c.f[13] = ld32((c.r[18].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC68Cu); c.f[12] = ld32((c.r[29].w[0] + 96u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001EC68Cu) [[unlikely]] return; }
L_001EC68C:
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.f[1] = ld32((c.r[18].w[0]));
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC6A8u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001EC6A8u) [[unlikely]] return; }
L_001EC6A8:
    c.f[12] = ld32((c.r[29].w[0] + 100u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC6B4u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001EC6B4u) [[unlikely]] return; }
L_001EC6B4:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8659u)));
    c.r[7].d[0] = c.r[2].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[6].d[0] = ld8((c.r[20].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 851u)));
    set32(c.r[3], c.r[3].w[0] + 14080u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);  if (t) { goto L_001EC6F8; } }
    set32(c.r[4], c.r[4].w[0] + 48u);
    c.budget -= 2;
L_001EC6F8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 822u)));
    c.r[5].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001EC710; } }
    set32(c.r[4], c.r[4].w[0] + 24u);
    c.budget -= 2;
L_001EC710:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[7].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001EC738; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EC780; } }
L_001EC738:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.r[16].d[0] = c.r[16].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[18], 0u - c.r[17].w[0]);  if (t) { goto L_001EC758; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EC858; } }
L_001EC758:
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.r[1].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u - c.r[17].w[0]);  if (t) { goto L_001EC770; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[2].w[0] << 1);  if (t) { goto L_001EC858; } }
L_001EC770:
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[17].w[0] - c.r[2].w[0]);  if (t) { goto L_001EC858; } }
    c.budget -= 1;
L_001EC780:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[16].d[0] = c.r[16].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[6].d[0] & 255ull;  if (t) { goto L_001EC7D8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], 0u - c.r[17].w[0]);  if (t) { goto L_001EC7B0; } }
    c.r[2].d[0] = c.r[16].sd[0] < 32736ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EC7B0; } }
    set32(c.r[18], c.r[18].w[0] << 1);
    c.budget -= 1;
L_001EC7B0:
    set32(c.r[2], 0u + 24u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001EC858; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; c.r[2].d[0] = c.r[16].sd[0] < 16384ll ? 1ull : 0ull;  if (t) { goto L_001EC858; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EC858; } }
    set32(c.r[2], 0u - c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[2].w[0] << 1);  if (t) { goto L_001EC858; } }
L_001EC7D8:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[1].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EC820; } }
    set32(c.r[4], 0u - c.r[17].w[0]);
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[2], 0u + 24u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[18], c.r[4].w[0] << 1);  if (t) { goto L_001EC858; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; c.r[2].d[0] = c.r[16].sd[0] < -32768ll ? 1ull : 0ull;  if (t) { goto L_001EC858; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EC818; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001EC858; } }
    c.budget -= 1;
L_001EC818:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EC858; } }
L_001EC820:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[18], 0u + 1u);  if (t) { goto L_001EC838; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EC858; } }
L_001EC838:
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.r[1].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[18], 0u + 2u);  if (t) { goto L_001EC850; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EC858; } }
L_001EC850:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001EC858:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 2u);  if (t) { goto L_001EC890; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001EC890; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC874u);  if (depth < kMaxDepth) unit_0009(c, 158u, depth + 1u); else { c.pc = 0x001260A0u; return; } if (c.pc != 0x001EC874u) [[unlikely]] return; }
L_001EC874:
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EC888; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001EC888:
    st8((c.r[20].w[0] + 783u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.budget -= 2;
L_001EC890:
    set32(c.r[2], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_001EC8B8; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0; st8((c.r[20].w[0] + 783u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001EC8B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001EC8B8; } }
    c.budget -= 1;
L_001EC8B0:
    set32(c.r[18], 0u + 1u);
    c.budget -= 2;
L_001EC8B8:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001EC8E0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001EC950; } }
    c.r[17].d[0] = c.r[19].d[0] ^ 1ull;
    set32(c.r[3], c.r[20].w[0] + 8448u);
    set32(c.r[2], c.r[17].w[0] << 4);
    set32(c.r[16], c.r[20].w[0] + 8400u);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[5].w[0]), 0u);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    st32((c.r[5].w[0] + 4u), 0u);
    set32(c.r[4], c.r[2].w[0] + 8480u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC93Cu); st32((c.r[5].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001EC93Cu) [[unlikely]] return; }
L_001EC93C:
    set32(c.r[2], c.r[17].w[0] << 3);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    c.budget -= 5;
L_001EC950:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC95Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003B(c, 22u, depth + 1u); else { c.pc = 0x001EC600u; return; } if (c.pc != 0x001EC95Cu) [[unlikely]] return; }
L_001EC95C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_001ECA38; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 8564u));
    c.r[2].d[0] = c.r[2].d[0] & 31ull;
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001ECA38; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 781u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);  if (t) { goto L_001EC9A0; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC998u); set32(c.r[5], 0u + 255u);  if (depth < kMaxDepth) unit_003C(c, 71u, depth + 1u); else { c.pc = 0x001F0680u; return; } if (c.pc != 0x001EC998u) [[unlikely]] return; }
L_001EC998:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ECA30; } }
L_001EC9A0:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC9ACu); set32(c.r[5], c.r[20].w[0] + 1360u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001EC9ACu) [[unlikely]] return; }
L_001EC9AC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[20].w[0] + 1360u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC9BCu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 149u, depth + 1u); else { c.pc = 0x001ED9A0u; return; } if (c.pc != 0x001EC9BCu) [[unlikely]] return; }
L_001EC9BC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC9CCu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 63u, depth + 1u); else { c.pc = 0x001ECC30u; return; } if (c.pc != 0x001EC9CCu) [[unlikely]] return; }
L_001EC9CC:
    c.r[6].d[0] = c.r[18].d[0] | 128ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC9DCu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 72u, depth + 1u); else { c.pc = 0x001ECFC0u; return; } if (c.pc != 0x001EC9DCu) [[unlikely]] return; }
L_001EC9DC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC9ECu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 102u, depth + 1u); else { c.pc = 0x001ED430u; return; } if (c.pc != 0x001EC9ECu) [[unlikely]] return; }
L_001EC9EC:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC9FCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 130u, depth + 1u); else { c.pc = 0x001ED7D0u; return; } if (c.pc != 0x001EC9FCu) [[unlikely]] return; }
L_001EC9FC:
    set32(c.r[4], c.r[20].w[0] + 1360u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECA08u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001ECA08u) [[unlikely]] return; }
L_001ECA08:
    c.r[4].d[0] = ld8((c.r[20].w[0] + 8658u));
    set32(c.r[3], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001ECA30; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[4], c.r[20].w[0] + 8480u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECA2Cu); set32(c.r[5], c.r[20].w[0] + 8448u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x001ECA2Cu) [[unlikely]] return; }
L_001ECA2C:
    c.budget -= 1;
L_001ECA30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ECAA0; } }
L_001ECA38:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECA48u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 63u, depth + 1u); else { c.pc = 0x001ECC30u; return; } if (c.pc != 0x001ECA48u) [[unlikely]] return; }
L_001ECA48:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECA58u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 72u, depth + 1u); else { c.pc = 0x001ECFC0u; return; } if (c.pc != 0x001ECA58u) [[unlikely]] return; }
L_001ECA58:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECA68u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 102u, depth + 1u); else { c.pc = 0x001ED430u; return; } if (c.pc != 0x001ECA68u) [[unlikely]] return; }
L_001ECA68:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECA78u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 130u, depth + 1u); else { c.pc = 0x001ED7D0u; return; } if (c.pc != 0x001ECA78u) [[unlikely]] return; }
L_001ECA78:
    c.r[4].d[0] = ld8((c.r[20].w[0] + 8658u));
    set32(c.r[3], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001ECAA0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[4], c.r[20].w[0] + 8480u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECA9Cu); set32(c.r[5], c.r[20].w[0] + 8448u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x001ECA9Cu) [[unlikely]] return; }
L_001ECA9C:
    c.budget -= 1;
L_001ECAA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001ECAC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECAE8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003B(c, 63u, depth + 1u); else { c.pc = 0x001ECC30u; return; } if (c.pc != 0x001ECAE8u) [[unlikely]] return; }
L_001ECAE8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECAF8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 72u, depth + 1u); else { c.pc = 0x001ECFC0u; return; } if (c.pc != 0x001ECAF8u) [[unlikely]] return; }
L_001ECAF8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECB08u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 102u, depth + 1u); else { c.pc = 0x001ED430u; return; } if (c.pc != 0x001ECB08u) [[unlikely]] return; }
L_001ECB08:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECB18u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 130u, depth + 1u); else { c.pc = 0x001ED7D0u; return; } if (c.pc != 0x001ECB18u) [[unlikely]] return; }
L_001ECB18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001ECB30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECB50u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003B(c, 22u, depth + 1u); else { c.pc = 0x001EC600u; return; } if (c.pc != 0x001ECB50u) [[unlikely]] return; }
L_001ECB50:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_001ECB88; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F330000u);  if (t) { goto L_001ECB6C; } }
    c.f[12] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001ECB78; } }
L_001ECB6C:
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_001ECB78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECB80u); set32(c.r[5], 0u + 63u);  if (depth < kMaxDepth) unit_003C(c, 71u, depth + 1u); else { c.pc = 0x001F0680u; return; } if (c.pc != 0x001ECB80u) [[unlikely]] return; }
L_001ECB80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ECC18; } }
L_001ECB88:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECB98u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 63u, depth + 1u); else { c.pc = 0x001ECC30u; return; } if (c.pc != 0x001ECB98u) [[unlikely]] return; }
L_001ECB98:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECBA8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 72u, depth + 1u); else { c.pc = 0x001ECFC0u; return; } if (c.pc != 0x001ECBA8u) [[unlikely]] return; }
L_001ECBA8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECBB8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 72u, depth + 1u); else { c.pc = 0x001ECFC0u; return; } if (c.pc != 0x001ECBB8u) [[unlikely]] return; }
L_001ECBB8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);  if (t) { goto L_001ECBF8; } }
    set32(c.r[4], c.r[16].w[0] + 8480u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECBD8u); set32(c.r[5], c.r[16].w[0] + 8448u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x001ECBD8u) [[unlikely]] return; }
L_001ECBD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[4], c.r[16].w[0] + 8496u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECBECu); set32(c.r[5], c.r[16].w[0] + 8464u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x001ECBECu) [[unlikely]] return; }
L_001ECBEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ECC18; } }
    c.budget -= 1;
L_001ECBF8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECC08u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 102u, depth + 1u); else { c.pc = 0x001ED430u; return; } if (c.pc != 0x001ECC08u) [[unlikely]] return; }
L_001ECC08:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECC18u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003B(c, 102u, depth + 1u); else { c.pc = 0x001ED430u; return; } if (c.pc != 0x001ECC18u) [[unlikely]] return; }
L_001ECC18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001ECC30:
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[2], c.r[5].w[0] << 6);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[2].w[0] + 1984u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECC74u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001ECC74u) [[unlikely]] return; }
L_001ECC74:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECC84u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x001ECC84u) [[unlikely]] return; }
L_001ECC84:
    set32(c.r[4], c.r[20].w[0] + 1360u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECC90u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001ECC90u) [[unlikely]] return; }
L_001ECC90:
    c.r[5].d[0] = ld8((c.r[20].w[0] + 8658u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8659u)));
    set32(c.r[3], c.r[3].w[0] + 14080u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 851u)));
    set32(c.r[6], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = c.r[2].d[0] & 32ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.budget -= 13;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], ld32((c.r[2].w[0])));  if (t) { goto L_001ECCC8; } }
    set32(c.r[19], c.r[19].w[0] + 48u);
    c.budget -= 1;
L_001ECCC8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 822u)));
    c.r[3].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001ECCE0; } }
    set32(c.r[19], c.r[19].w[0] + 24u);
    c.budget -= 2;
L_001ECCE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] + 18816u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], ld32((c.r[2].w[0])));  if (t) { goto L_001ECD00; } }
    set32(c.r[18], c.r[18].w[0] + 64u);
    c.budget -= 1;
L_001ECD00:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001ECD10; } }
    set32(c.r[18], c.r[18].w[0] + 32u);
    c.budget -= 2;
L_001ECD10:
    set32(c.r[30], c.r[29].w[0] + 168u);
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    c.f[1] = ld32((c.r[30].w[0]));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECD28u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001ECD28u) [[unlikely]] return; }
L_001ECD28:
    c.f[12] = ld32((c.r[29].w[0] + 164u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECD34u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001ECD34u) [[unlikely]] return; }
L_001ECD34:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_001ECD50; } }
    set32(c.r[16], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[19].w[0])));  if (t) { goto L_001ECD58; } }
L_001ECD50:
    set32(c.r[17], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 2;
L_001ECD58:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001ECDC8; } }
    c.f[1] = c.r[2].w[0];
    c.f[0] = c.r[17].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECD88u);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x001ECD88u) [[unlikely]] return; }
L_001ECD88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001ECDA8; } }
    c.f[0] = c.f[1];
    c.budget -= 2;
L_001ECDA8:
    c.f[1] = c.r[16].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[21], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ECDD0; } }
L_001ECDC8:
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001ECDD0:
    c.f[12] = ld32((c.r[29].w[0] + 160u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECDDCu); c.f[13] = ld32((c.r[30].w[0]));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001ECDDCu) [[unlikely]] return; }
L_001ECDDC:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 783u)));
    c.r[6].d[0] = c.r[2].d[0] << 48;
    set32(c.r[3], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);  if (t) { goto L_001ECE70; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001ECE38; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001ECE10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ECEA8; } }
    c.budget -= 1;
L_001ECE10:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] < 0; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_001ECE28; } }
    set32(c.r[16], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[19].w[0] + 16u)));  if (t) { goto L_001ECEA8; } }
    c.budget -= 1;
L_001ECE28:
    set32(c.r[16], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[19].w[0] + 20u)));  if (t) { goto L_001ECEA8; } }
    c.budget -= 1;
L_001ECE38:
    set32(c.r[5], ld32((c.r[19].w[0] + 16u)));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001ECE50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001ECE58; } }
L_001ECE50:
    set32(c.r[6], c.r[6].w[0] - c.r[5].w[0]);
    c.budget -= 2;
L_001ECE58:
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[22], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[17], c.r[4].w[0] - c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[3].w[0] - c.r[22].w[0]);  if (t) { goto L_001ECEA8; } }
L_001ECE70:
    set32(c.r[5], ld32((c.r[19].w[0] + 20u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001ECE88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001ECE90; } }
L_001ECE88:
    set32(c.r[6], c.r[6].w[0] - c.r[5].w[0]);
    c.budget -= 2;
L_001ECE90:
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[22], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[17], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[16], c.r[3].w[0] - c.r[22].w[0]);
    c.budget -= 6;
L_001ECEA8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001ECF18; } }
    c.f[1] = c.r[6].w[0];
    c.f[0] = c.r[17].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECED8u);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x001ECED8u) [[unlikely]] return; }
L_001ECED8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001ECEF8; } }
    c.f[0] = c.f[1];
    c.budget -= 2;
L_001ECEF8:
    c.f[1] = c.r[16].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[22].w[0] + c.r[3].w[0]);  if (t) { goto L_001ECF20; } }
L_001ECF18:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001ECF20:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_001ECF78; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 8440u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001ECF78; } }
    c.f[0] = c.r[4].w[0];
    c.f[2] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[3] = ld32((c.r[20].w[0] + 8264u));
    c.f[0] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.f[0] = c.r[21].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[21], c.f[0]);
    c.budget -= 17;
L_001ECF78:
    st32((c.r[20].w[0] + 8428u), c.r[3].w[0]);
    set32(c.r[3], 0u - c.r[21].w[0]);
    st32((c.r[20].w[0] + 8424u), c.r[3].w[0]);
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
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_001ECFC0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECFF4u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0037(c, 139u, depth + 1u); else { c.pc = 0x001DCFF0u; return; } if (c.pc != 0x001ECFF4u) [[unlikely]] return; }
L_001ECFF4:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[18].w[0] << 4);
    set32(c.r[21], c.r[16].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[20], c.r[21].w[0] + 8336u);  if (t) { goto L_001ED048; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8564u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8659u)));
    set32(c.r[6], c.r[6].w[0] + 17856u);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[3].d[0] = c.r[2].d[0] & 31ull;
    set32(c.r[7], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_001ED080; } }
L_001ED048:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8564u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8659u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[6], c.r[6].w[0] - 23040u);
    c.r[3].d[0] = c.r[2].d[0] & 31ull;
    set32(c.r[7], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[19], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 14;
L_001ED080:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 759u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_001ED098; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001ED0B8; } }
L_001ED098:
    set32(c.r[3], c.r[18].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] + c.r[3].w[0]);  if (t) { goto L_001ED0C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] + 48u);  if (t) { goto L_001ED0C8; } }
L_001ED0B8:
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ED0C8; } }
    set32(c.r[19], c.r[19].w[0] + 144u);
    c.budget -= 1;
L_001ED0C8:
    c.r[3].d[0] = c.r[17].d[0] & 1ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001ED108; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8440u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ED108; } }
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 8264u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 20u, c.f[0], c.f[1]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ED110; } }
    c.budget -= 1;
L_001ED108:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 2;
L_001ED110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED118u); set32(c.r[4], c.r[16].w[0] + 2048u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001ED118u) [[unlikely]] return; }
L_001ED118:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED120u); c.r[4].d[0] = ld16((c.r[16].w[0] + 8428u));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001ED120u) [[unlikely]] return; }
L_001ED120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED128u); c.r[4].d[0] = ld16((c.r[16].w[0] + 8424u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001ED128u) [[unlikely]] return; }
L_001ED128:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED130u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001ED130u) [[unlikely]] return; }
L_001ED130:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED140u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x001ED140u) [[unlikely]] return; }
L_001ED140:
    set32(c.r[4], c.r[16].w[0] + 1360u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED14Cu); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001ED14Cu) [[unlikely]] return; }
L_001ED14C:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED15Cu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001ED15Cu) [[unlikely]] return; }
L_001ED15C:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED168u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 207u, depth + 1u); else { c.pc = 0x00127450u; return; } if (c.pc != 0x001ED168u) [[unlikely]] return; }
L_001ED168:
    c.f[1] = ld32((c.r[16].w[0] + 1476u));
    c.f[2] = ld32((c.r[16].w[0] + 1472u));
    c.f[3] = ld32((c.r[16].w[0] + 1480u));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[16].w[0] + 1472u);  if (t) { goto L_001ED1B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED1A0u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001ED1A0u) [[unlikely]] return; }
L_001ED1A0:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED1ACu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 207u, depth + 1u); else { c.pc = 0x00127450u; return; } if (c.pc != 0x001ED1ACu) [[unlikely]] return; }
L_001ED1AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ED1C8; } }
    c.budget -= 1;
L_001ED1B8:
    set32(c.r[2], c.r[29].w[0] + 192u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 176u);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.budget -= 4;
L_001ED1C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED1D0u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x001ED1D0u) [[unlikely]] return; }
L_001ED1D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);  if (t) { goto L_001ED200; } }
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED1FCu); st32((c.r[29].w[0] + 164u), 0u);  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x001ED1FCu) [[unlikely]] return; }
L_001ED1FC:
    c.budget -= 1;
L_001ED200:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED20Cu); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 203u, depth + 1u); else { c.pc = 0x00127360u; return; } if (c.pc != 0x001ED20Cu) [[unlikely]] return; }
L_001ED20C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED220u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_002E(c, 337u, depth + 1u); else { c.pc = 0x001BB500u; return; } if (c.pc != 0x001ED220u) [[unlikely]] return; }
L_001ED220:
    c.r[2].d[0] = c.r[17].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001ED380; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] & 64ull;  if (t) { goto L_001ED258; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ED380; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 749u));
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001ED380; } }
    c.budget -= 1;
L_001ED258:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ED284; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + 17888u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  if (t) { goto L_001ED29C; } }
L_001ED284:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] + 9488u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 6;
L_001ED29C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED2ACu); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_002E(c, 322u, depth + 1u); else { c.pc = 0x001BB280u; return; } if (c.pc != 0x001ED2ACu) [[unlikely]] return; }
L_001ED2AC:
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 759u)));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], 0u + 3u);
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[18], c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001ED350; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001ED318; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED2E8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003B(c, 22u, depth + 1u); else { c.pc = 0x001EC600u; return; } if (c.pc != 0x001ED2E8u) [[unlikely]] return; }
L_001ED2E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ED350; } }
    c.f[0] = c.r[17].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FA00000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ED350; } }
L_001ED318:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED324u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_005A(c, 314u, depth + 1u); else { c.pc = 0x0026B4E0u; return; } if (c.pc != 0x001ED324u) [[unlikely]] return; }
L_001ED324:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ED350; } }
    c.f[0] = c.r[17].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FA00000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[0]);
    c.budget -= 9;
L_001ED350:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 770u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;  if (t) { goto L_001ED368; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001ED368; } }
    c.r[18].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001ED368:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED378u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_002E(c, 328u, depth + 1u); else { c.pc = 0x001BB3A0u; return; } if (c.pc != 0x001ED378u) [[unlikely]] return; }
L_001ED378:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ED390; } }
L_001ED380:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED390u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_002E(c, 337u, depth + 1u); else { c.pc = 0x001BB500u; return; } if (c.pc != 0x001ED390u) [[unlikely]] return; }
L_001ED390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED398u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001ED398u) [[unlikely]] return; }
L_001ED398:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED3A0u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x001ED3A0u) [[unlikely]] return; }
L_001ED3A0:
    c.f[12] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED3B0u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x001ED3B0u) [[unlikely]] return; }
L_001ED3B0:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED3BCu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x001ED3BCu) [[unlikely]] return; }
L_001ED3BC:
    set32(c.r[5], c.r[16].w[0] + 1472u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED3C8u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001ED3C8u) [[unlikely]] return; }
L_001ED3C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED3D0u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x001ED3D0u) [[unlikely]] return; }
L_001ED3D0:
    c.f[12] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED3E0u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x001ED3E0u) [[unlikely]] return; }
L_001ED3E0:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED3ECu); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x001ED3ECu) [[unlikely]] return; }
L_001ED3EC:
    set32(c.r[4], c.r[21].w[0] + 8448u);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED3FCu); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001ED3FCu) [[unlikely]] return; }
L_001ED3FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_001ED430:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8564u));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001ED470; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[3].d[0];  if (t) { goto L_001ED7A8; } }
L_001ED470:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED478u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 139u, depth + 1u); else { c.pc = 0x001DCFF0u; return; } if (c.pc != 0x001ED478u) [[unlikely]] return; }
L_001ED478:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ED4C8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8564u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8659u)));
    set32(c.r[6], c.r[6].w[0] + 17856u);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[3].d[0] = c.r[2].d[0] & 31ull;
    set32(c.r[7], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_001ED500; } }
    c.budget -= 1;
L_001ED4C8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8564u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8659u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[6], c.r[6].w[0] - 23040u);
    c.r[3].d[0] = c.r[2].d[0] & 31ull;
    set32(c.r[7], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 14;
L_001ED500:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 759u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_001ED518; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001ED538; } }
L_001ED518:
    set32(c.r[3], c.r[19].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] + c.r[3].w[0]);  if (t) { goto L_001ED548; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 48u);  if (t) { goto L_001ED548; } }
L_001ED538:
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ED548; } }
    set32(c.r[17], c.r[17].w[0] + 144u);
    c.budget -= 1;
L_001ED548:
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 6u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[20], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED564u); set32(c.r[5], c.r[20].w[0] + 2032u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001ED564u) [[unlikely]] return; }
L_001ED564:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED56Cu); set32(c.r[4], c.r[16].w[0] + 2048u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001ED56Cu) [[unlikely]] return; }
L_001ED56C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED574u); c.r[4].d[0] = ld16((c.r[16].w[0] + 8428u));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001ED574u) [[unlikely]] return; }
L_001ED574:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED57Cu); c.r[4].d[0] = ld16((c.r[16].w[0] + 8424u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001ED57Cu) [[unlikely]] return; }
L_001ED57C:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED58Cu); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001ED58Cu) [[unlikely]] return; }
L_001ED58C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED594u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001ED594u) [[unlikely]] return; }
L_001ED594:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED5A4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x001ED5A4u) [[unlikely]] return; }
L_001ED5A4:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED5B0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001ED5B0u) [[unlikely]] return; }
L_001ED5B0:
    set32(c.r[4], c.r[16].w[0] + 1360u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED5BCu); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001ED5BCu) [[unlikely]] return; }
L_001ED5BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED5C4u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x001ED5C4u) [[unlikely]] return; }
L_001ED5C4:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.f[12] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED5D4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x001ED5D4u) [[unlikely]] return; }
L_001ED5D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED5DCu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001ED5DCu) [[unlikely]] return; }
L_001ED5DC:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED5E8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001ED5E8u) [[unlikely]] return; }
L_001ED5E8:
    set32(c.r[2], c.r[19].w[0] << 3);
    set32(c.r[4], c.r[20].w[0] + 1984u);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED5FCu); set32(c.r[17], c.r[2].w[0] + 8400u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001ED5FCu) [[unlikely]] return; }
L_001ED5FC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED608u); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001ED608u) [[unlikely]] return; }
L_001ED608:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED614u); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001ED614u) [[unlikely]] return; }
L_001ED614:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED624u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x001ED624u) [[unlikely]] return; }
L_001ED624:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED630u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001ED630u) [[unlikely]] return; }
L_001ED630:
    set32(c.r[4], c.r[16].w[0] + 1360u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED63Cu); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001ED63Cu) [[unlikely]] return; }
L_001ED63C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED650u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x001ED650u) [[unlikely]] return; }
L_001ED650:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED664u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x001ED664u) [[unlikely]] return; }
L_001ED664:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 104u), 0u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED688u); st32((c.r[29].w[0] + 96u), 0u);  if (depth < kMaxDepth) unit_002E(c, 337u, depth + 1u); else { c.pc = 0x001BB500u; return; } if (c.pc != 0x001ED688u) [[unlikely]] return; }
L_001ED688:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_001ED6D0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8440u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ED6D0; } }
    c.f[1] = ld32((c.r[16].w[0] + 8264u));
    c.f[0] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ED6D8; } }
L_001ED6D0:
    set32(c.r[6], 0u + 4096u);
    c.budget -= 2;
L_001ED6D8:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED6E4u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_002E(c, 328u, depth + 1u); else { c.pc = 0x001BB3A0u; return; } if (c.pc != 0x001ED6E4u) [[unlikely]] return; }
L_001ED6E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED6ECu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x001ED6ECu) [[unlikely]] return; }
L_001ED6EC:
    c.f[12] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED6FCu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x001ED6FCu) [[unlikely]] return; }
L_001ED6FC:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 156u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED70Cu); set32(c.r[6], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_002E(c, 133u, depth + 1u); else { c.pc = 0x001B9C00u; return; } if (c.pc != 0x001ED70Cu) [[unlikely]] return; }
L_001ED70C:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8659u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[5], c.r[5].w[0] + 23776u);
    set32(c.r[3], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001ED748; } }
    st32((c.r[29].w[0] + 156u), c.r[4].w[0]);
    c.budget -= 1;
L_001ED748:
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 156u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001ED760; } }
    st32((c.r[29].w[0] + 156u), c.r[4].w[0]);
    c.budget -= 1;
L_001ED760:
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 152u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001ED778; } }
    st32((c.r[29].w[0] + 152u), c.r[4].w[0]);
    c.budget -= 1;
L_001ED778:
    set32(c.r[4], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 152u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001ED790; } }
    st32((c.r[29].w[0] + 152u), c.r[4].w[0]);
    c.budget -= 1;
L_001ED790:
    set32(c.r[3], ld32((c.r[29].w[0] + 156u)));
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 152u)));
    set32(c.r[3], 0u - c.r[3].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
L_001ED7A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001ED7D0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    c.budget -= 13;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001ED978; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED80Cu);  if (depth < kMaxDepth) unit_0037(c, 139u, depth + 1u); else { c.pc = 0x001DCFF0u; return; } if (c.pc != 0x001ED80Cu) [[unlikely]] return; }
L_001ED80C:
    set32(c.r[2], c.r[20].w[0] << 3);
    set32(c.r[17], c.r[20].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[16].w[0] + 8448u);
    set32(c.r[18], c.r[3].w[0] + 8400u);
    st32((c.r[4].w[0] + 112u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[20].d[0] ^ 1ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[16].w[0] + 8464u);
    st32((c.r[5].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[3], c.r[16].w[0] + 8336u);
    st32((c.r[4].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[2], c.r[16].w[0] + 8352u);
    st32((c.r[5].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED85Cu); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001ED85Cu) [[unlikely]] return; }
L_001ED85C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED864u); set32(c.r[4], c.r[16].w[0] + 2048u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001ED864u) [[unlikely]] return; }
L_001ED864:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED86Cu); c.r[4].d[0] = ld16((c.r[16].w[0] + 8428u));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001ED86Cu) [[unlikely]] return; }
L_001ED86C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED874u); c.r[4].d[0] = ld16((c.r[16].w[0] + 8424u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001ED874u) [[unlikely]] return; }
L_001ED874:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED880u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x001ED880u) [[unlikely]] return; }
L_001ED880:
    set32(c.r[2], c.r[17].w[0] + 6u);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[2].w[0] + 1984u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED898u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001ED898u) [[unlikely]] return; }
L_001ED898:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED8A4u); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001ED8A4u) [[unlikely]] return; }
L_001ED8A4:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED8B0u); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001ED8B0u) [[unlikely]] return; }
L_001ED8B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED8C0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x001ED8C0u) [[unlikely]] return; }
L_001ED8C0:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED8CCu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x001ED8CCu) [[unlikely]] return; }
L_001ED8CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED8D4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001ED8D4u) [[unlikely]] return; }
L_001ED8D4:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED8E0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001ED8E0u) [[unlikely]] return; }
L_001ED8E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED8E8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001ED8E8u) [[unlikely]] return; }
L_001ED8E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED8F8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x001ED8F8u) [[unlikely]] return; }
L_001ED8F8:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED904u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001ED904u) [[unlikely]] return; }
L_001ED904:
    set32(c.r[3], c.r[29].w[0] + 116u);
    set32(c.r[2], c.r[20].w[0] + 2u);
    set32(c.r[17], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 128u);
    set32(c.r[6], c.r[2].w[0] + 5440u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED928u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001ED928u) [[unlikely]] return; }
L_001ED928:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001ED978; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[3].d[0];  if (t) { goto L_001ED978; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 8440u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001ED978; } }
    c.f[1] = c.r[3].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = ld32((c.r[16].w[0] + 8264u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED974u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x001ED974u) [[unlikely]] return; }
L_001ED974:
    c.budget -= 1;
L_001ED978:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001ED9A0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[20].w[0] + 2048u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED9D4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001ED9D4u) [[unlikely]] return; }
L_001ED9D4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED9E4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x001ED9E4u) [[unlikely]] return; }
L_001ED9E4:
    set32(c.r[4], c.r[20].w[0] + 1360u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED9F0u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001ED9F0u) [[unlikely]] return; }
L_001ED9F0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8659u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 851u)));
    set32(c.r[4], c.r[4].w[0] + 14080u);
    c.r[3].d[0] = ld8((c.r[20].w[0] + 8658u));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[18], ld32((c.r[3].w[0])));  if (t) { goto L_001EDA28; } }
    set32(c.r[18], c.r[18].w[0] + 48u);
    c.budget -= 1;
L_001EDA28:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EDA40; } }
    set32(c.r[18], c.r[18].w[0] + 24u);
    c.budget -= 2;
L_001EDA40:
    set32(c.r[16], c.r[29].w[0] + 136u);
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    c.f[1] = ld32((c.r[16].w[0]));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDA58u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001EDA58u) [[unlikely]] return; }
L_001EDA58:
    c.f[12] = ld32((c.r[29].w[0] + 132u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDA64u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001EDA64u) [[unlikely]] return; }
L_001EDA64:
    c.f[13] = ld32((c.r[16].w[0]));
    c.f[12] = ld32((c.r[29].w[0] + 128u));
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDA78u); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001EDA78u) [[unlikely]] return; }
L_001EDA78:
    c.r[17].d[0] = c.r[2].d[0] << 48;
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (t) { goto L_001EDA90; } }
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001EDA90:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[1].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EDAA8; } }
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_001EDAA8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 759u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_001EDB20; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_001EDAF0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EDAD8; } }
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_001EDAD8:
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.r[1].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EDC88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001EDC88; } }
L_001EDAF0:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EDB08; } }
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_001EDB08:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.r[1].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EDC88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001EDC88; } }
L_001EDB20:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001EDBE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDB34u);  if (depth < kMaxDepth) unit_003B(c, 22u, depth + 1u); else { c.pc = 0x001EC600u; return; } if (c.pc != 0x001EDB34u) [[unlikely]] return; }
L_001EDB34:
    set32(c.r[2], c.r[2].w[0] + 3u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_001EDC88; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 16432u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001EC000u < 16384u) { entry = entries_003B[(t - 0x001EC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001EDB60:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EDB78; } }
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_001EDB78:
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.r[1].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EDC88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001EDC88; } }
L_001EDB90:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] < 0;  if (t) { goto L_001EDBB0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EDC88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001EDC88; } }
L_001EDBB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[18].w[0] + 8u)));  if (t) { goto L_001EDC88; } }
L_001EDBB8:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { goto L_001EDBD8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.r[1].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EDC88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001EDC88; } }
L_001EDBD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[18].w[0] + 12u)));  if (t) { goto L_001EDC88; } }
L_001EDBE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 783u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EDC60; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001EDC38; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EDC08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EDC88; } }
L_001EDC08:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EDC20; } }
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_001EDC20:
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.r[1].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EDC88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001EDC88; } }
L_001EDC38:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] < 0;  if (t) { goto L_001EDC58; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EDC88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001EDC88; } }
L_001EDC58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[18].w[0] + 8u)));  if (t) { goto L_001EDC88; } }
L_001EDC60:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { goto L_001EDC80; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.r[1].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EDC88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001EDC88; } }
L_001EDC80:
    set32(c.r[17], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 2;
L_001EDC88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 120u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 112u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDC9Cu); st32((c.r[29].w[0] + 116u), 0u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001EDC9Cu) [[unlikely]] return; }
L_001EDC9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDCA4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001EDCA4u) [[unlikely]] return; }
L_001EDCA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDCACu); set32(c.r[4], 0u - c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001EDCACu) [[unlikely]] return; }
L_001EDCAC:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDCB8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x001EDCB8u) [[unlikely]] return; }
L_001EDCB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDCC0u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x001EDCC0u) [[unlikely]] return; }
L_001EDCC0:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[12] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDCD0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x001EDCD0u) [[unlikely]] return; }
L_001EDCD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDCD8u); set32(c.r[4], c.r[20].w[0] + 2048u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001EDCD8u) [[unlikely]] return; }
L_001EDCD8:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDCE4u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001EDCE4u) [[unlikely]] return; }
L_001EDCE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001EDD10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDD2Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 56u, depth + 1u); else { c.pc = 0x001D0960u; return; } if (c.pc != 0x001EDD2Cu) [[unlikely]] return; }
L_001EDD2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EDDA0; } }
    st32((c.r[17].w[0] + 68u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 52u), 0u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    st32((c.r[17].w[0] + 108u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDD50u); st32((c.r[17].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_001D(c, 96u, depth + 1u); else { c.pc = 0x00175AB0u; return; } if (c.pc != 0x001EDD50u) [[unlikely]] return; }
L_001EDD50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDD58u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 175u, depth + 1u); else { c.pc = 0x001EDDF0u; return; } if (c.pc != 0x001EDD58u) [[unlikely]] return; }
L_001EDD58:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001EDD80; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 767u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 11u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDD78u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001EDD78u) [[unlikely]] return; }
L_001EDD78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EDD98; } }
L_001EDD80:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 767u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 11u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDD98u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x001EDD98u) [[unlikely]] return; }
L_001EDD98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001EDDA8; } }
L_001EDDA0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001EDDA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001EDDC0:
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], 0u + 7u);
    st8((c.r[4].w[0] + 744u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st16((c.r[4].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 814u)));
    st16((c.r[4].w[0] + 816u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 814u), static_cast<std::uint16_t>(c.r[5].w[0]));  c.pc = t; return; }
L_001EDDF0:
    st8((c.r[4].w[0] + 744u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u - 9u);
    st8((c.r[4].w[0] + 849u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[4].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 814u)));
    st16((c.r[4].w[0] + 816u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[4].w[0] + 814u), static_cast<std::uint16_t>(0u));
    c.budget -= 12;
    { st8((c.r[4].w[0] + 284u), static_cast<std::uint8_t>(0u));  goto L_001EDE20; }
L_001EDE20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 18u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001EDE78; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_001EDE68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDE58u);  if (depth < kMaxDepth) unit_0039(c, 189u, depth + 1u); else { c.pc = 0x001E7260u; return; } if (c.pc != 0x001EDE58u) [[unlikely]] return; }
L_001EDE58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EDE68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDE68u); set32(c.r[5], 0u + 156u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x001EDE68u) [[unlikely]] return; }
L_001EDE68:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDE74u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_004E(c, 146u, depth + 1u); else { c.pc = 0x0023A0A0u; return; } if (c.pc != 0x001EDE74u) [[unlikely]] return; }
L_001EDE74:
    c.budget -= 1;
L_001EDE78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001EDE90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u - 9u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], 0u + 65u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 744u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0] + 849u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    st16((c.r[4].w[0] + 822u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 814u)));
    st16((c.r[4].w[0] + 816u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 814u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 284u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.budget -= 19;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001EDF18; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_001EDF08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDEF4u);  if (depth < kMaxDepth) unit_0039(c, 189u, depth + 1u); else { c.pc = 0x001E7260u; return; } if (c.pc != 0x001EDEF4u) [[unlikely]] return; }
L_001EDEF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EDF08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDF04u); set32(c.r[5], 0u + 156u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x001EDF04u) [[unlikely]] return; }
L_001EDF04:
    c.budget -= 1;
L_001EDF08:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDF14u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_004E(c, 146u, depth + 1u); else { c.pc = 0x0023A0A0u; return; } if (c.pc != 0x001EDF14u) [[unlikely]] return; }
L_001EDF14:
    c.budget -= 1;
L_001EDF18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001EDF30:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.r[20].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001EE1A0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[5], c.r[4].w[0] + 32u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDF74u); set32(c.r[6], c.r[2].w[0] + 640u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001EDF74u) [[unlikely]] return; }
L_001EDF74:
    c.f[2] = ld32((c.r[29].w[0] + 128u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3F00000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x43F00000u);  if (t) { goto L_001EDFC8; } }
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EDFC8; } }
    c.f[2] = ld32((c.r[29].w[0] + 136u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EDFC8; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001EDFC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EE1E0; } }
L_001EDFC8:
    c.r[19].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    st32((c.r[29].w[0] + 132u), 0u);
    set32(c.r[17], 0u - 1u);
    set32(c.r[19], c.r[19].w[0] + 18384u);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_001EDFE0:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDFF4u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001EDFF4u) [[unlikely]] return; }
L_001EDFF4:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[19].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE004u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001EE004u) [[unlikely]] return; }
L_001EE004:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE00Cu); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x001EE00Cu) [[unlikely]] return; }
L_001EE00C:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE018u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x001EE018u) [[unlikely]] return; }
L_001EE018:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[20] = c.f[0];  if (t) { goto L_001EE030; } }
    c.r[16].d[0] = c.r[16].d[0] | 1ull;
    c.budget -= 1;
L_001EE030:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE040u); set32(c.r[6], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001EE040u) [[unlikely]] return; }
L_001EE040:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE050u); set32(c.r[6], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001EE050u) [[unlikely]] return; }
L_001EE050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE058u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x001EE058u) [[unlikely]] return; }
L_001EE058:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE064u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x001EE064u) [[unlikely]] return; }
L_001EE064:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EE080; } }
    c.r[16].d[0] = c.r[16].d[0] | 2ull;
    c.budget -= 2;
L_001EE080:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001EE120; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001EE0F8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001EE0A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EE178; } }
    c.budget -= 1;
L_001EE0A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE0B0u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x001EE0B0u) [[unlikely]] return; }
L_001EE0B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EE0D0; } }
    c.f[20] = 0u;
    c.budget -= 1;
L_001EE0D0:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE0E0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x001EE0E0u) [[unlikely]] return; }
L_001EE0E0:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE0F0u); set32(c.r[6], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x001EE0F0u) [[unlikely]] return; }
L_001EE0F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EE148; } }
L_001EE0F8:
    set32(c.r[2], c.r[29].w[0] + 112u);
    c.f[3] = ld32((c.r[19].w[0]));
    c.f[2] = ld32((c.r[19].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12u), c.f[0]);  if (t) { goto L_001EE148; } }
L_001EE120:
    set32(c.r[2], c.r[29].w[0] + 112u);
    c.f[3] = ld32((c.r[19].w[0] + 16u));
    c.f[2] = ld32((c.r[19].w[0] + 20u));
    c.f[1] = ld32((c.r[19].w[0] + 24u));
    c.f[0] = ld32((c.r[19].w[0] + 28u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.budget -= 10;
L_001EE148:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE154u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x001EE154u) [[unlikely]] return; }
L_001EE154:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001EE170; } }
    c.f[1] = ld32((c.r[20].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EE178; } }
    c.budget -= 1;
L_001EE170:
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[20].w[0]), c.f[0]);
    c.budget -= 2;
L_001EE178:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EDFE0u | kUnwind; return; } goto L_001EDFE0; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001EE1D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EE1E0; } }
    c.budget -= 1;
L_001EE1A0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE1B0u); set32(c.r[5], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x001EE1B0u) [[unlikely]] return; }
L_001EE1B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43E10000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EE1D8; } }
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.f[0]);  if (t) { goto L_001EE1E0; } }
L_001EE1D8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001EE1E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_001EE210:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001EE2C0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[16].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE244u); set32(c.r[6], c.r[2].w[0] + 640u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001EE244u) [[unlikely]] return; }
L_001EE244:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 64u);  if (t) { goto L_001EE270; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE260u); set32(c.r[5], c.r[16].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x001EE260u) [[unlikely]] return; }
L_001EE260:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x440C0000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[2] = fp::add(c.f[1], c.f[0]);  if (t) { goto L_001EE278; } }
L_001EE270:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x440C0000u);
    c.f[2] = c.r[2].w[0];
    c.budget -= 2;
L_001EE278:
    c.f[1] = ld32((c.r[29].w[0] + 48u));
    c.f[0] = c.f[2] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EE310; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EE310; } }
    c.f[1] = ld32((c.r[29].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EE310; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001EE310; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EE318; } }
    c.budget -= 1;
L_001EE2C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x441B0000u);
    c.f[20] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 64u);  if (t) { goto L_001EE2E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE2E4u); set32(c.r[5], c.r[16].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x001EE2E4u) [[unlikely]] return; }
L_001EE2E4:
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.budget -= 1;
L_001EE2E8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE2F8u); set32(c.r[5], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x001EE2F8u) [[unlikely]] return; }
L_001EE2F8:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001EE310; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EE318; } }
    c.budget -= 1;
L_001EE310:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_001EE318:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001EE330:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1488u)));
    c.f[21] = c.f[12];
    c.budget -= 12;
    { const bool t = c.r[5].d[0] == 0ull; c.f[20] = c.f[13];  if (t) { goto L_001EE488; } }
    c.f[3] = ld32((c.r[5].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.f[2] = ld32((c.r[5].w[0] + 36u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[1] = ld32((c.r[5].w[0] + 40u));
    set32(c.r[3], c.r[29].w[0] + 80u);
    c.f[0] = ld32((c.r[5].w[0] + 44u));
    set32(c.r[2], c.r[2].w[0] + 18912u);
    st32((c.r[4].w[0]), c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    st32((c.r[3].w[0]), c.f[3]);
    st32((c.r[3].w[0] + 4u), c.f[2]);
    st32((c.r[3].w[0] + 8u), c.f[1]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 8658u));
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 30;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EE450; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 755u));
    set32(c.r[2], c.r[2].w[0] - 7u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001EE400; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EE428; } }
    c.budget -= 1;
L_001EE400:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 18468u);
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 84u), c.f[0]);  if (t) { goto L_001EE450; } }
L_001EE428:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 18464u);
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.budget -= 10;
L_001EE450:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE460u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001EE460u) [[unlikely]] return; }
L_001EE460:
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.f[1] = ld32((c.r[29].w[0] + 72u));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE474u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001EE474u) [[unlikely]] return; }
L_001EE474:
    c.f[12] = ld32((c.r[29].w[0] + 68u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE480u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001EE480u) [[unlikely]] return; }
L_001EE480:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_001EE488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE490u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001EE490u) [[unlikely]] return; }
L_001EE490:
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE4A4u); st32((c.r[16].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001EE4A4u) [[unlikely]] return; }
L_001EE4A4:
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001EE4D0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1488u)));
    c.f[21] = c.f[12];
    c.budget -= 14;
    { const bool t = c.r[5].d[0] == 0ull; c.f[20] = c.f[13];  if (t) { goto L_001EE618; } }
    c.f[3] = ld32((c.r[5].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.f[2] = ld32((c.r[5].w[0] + 36u));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[1] = ld32((c.r[5].w[0] + 40u));
    set32(c.r[3], c.r[29].w[0] + 96u);
    c.f[0] = ld32((c.r[5].w[0] + 44u));
    set32(c.r[2], c.r[2].w[0] + 18912u);
    st32((c.r[4].w[0]), c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[17].w[0] + 32u));
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    st32((c.r[3].w[0]), c.f[3]);
    st32((c.r[3].w[0] + 4u), c.f[2]);
    st32((c.r[3].w[0] + 8u), c.f[1]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 8658u));
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.budget -= 30;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EE5E0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EE5B8; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 18468u);
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 100u), c.f[0]);  if (t) { goto L_001EE5E0; } }
L_001EE5B8:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 18464u);
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.budget -= 10;
L_001EE5E0:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE5F0u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001EE5F0u) [[unlikely]] return; }
L_001EE5F0:
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.f[1] = ld32((c.r[29].w[0] + 88u));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE604u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001EE604u) [[unlikely]] return; }
L_001EE604:
    c.f[12] = ld32((c.r[29].w[0] + 84u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE610u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001EE610u) [[unlikely]] return; }
L_001EE610:
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.budget -= 2;
L_001EE618:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0; set32(c.r[2], 0u - c.r[16].w[0]);  if (t) { goto L_001EE638; } }
    c.r[1].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EE648; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_001EE648; } }
    c.budget -= 1;
L_001EE638:
    c.r[1].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EE648; } }
    c.r[18].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 1;
L_001EE648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE650u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001EE650u) [[unlikely]] return; }
L_001EE650:
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE664u); st32((c.r[17].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001EE664u) [[unlikely]] return; }
L_001EE664:
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001EE6A0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[19], ld32((c.r[4].w[0] + 1488u)));
    c.f[21] = c.f[12];
    c.budget -= 17;
    { const bool t = c.r[19].d[0] == 0ull; c.f[20] = c.f[13];  if (t) { goto L_001EE7D8; } }
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE6F0u); set32(c.r[5], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001EE6F0u) [[unlikely]] return; }
L_001EE6F0:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE6FCu); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001EE6FCu) [[unlikely]] return; }
L_001EE6FC:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 18912u);
    c.f[0] = ld32((c.r[29].w[0] + 148u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 148u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EE790; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EE768; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 18468u);
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 132u), c.f[0]);  if (t) { goto L_001EE790; } }
    c.budget -= 1;
L_001EE768:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 18464u);
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.budget -= 10;
L_001EE790:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE7A0u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001EE7A0u) [[unlikely]] return; }
L_001EE7A0:
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    c.f[1] = ld32((c.r[29].w[0] + 120u));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE7B4u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001EE7B4u) [[unlikely]] return; }
L_001EE7B4:
    c.f[12] = ld32((c.r[29].w[0] + 116u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE7C0u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001EE7C0u) [[unlikely]] return; }
L_001EE7C0:
    c.r[3].d[0] = c.r[16].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[20].d[0] = c.r[2].d[0] << 48;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    c.budget -= 6;
L_001EE7D8:
    c.r[19].d[0] = c.r[20].d[0] << 48;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    c.r[17].d[0] = c.r[17].d[0] << 48;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE7F0u); c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 158u, depth + 1u); else { c.pc = 0x001260A0u; return; } if (c.pc != 0x001EE7F0u) [[unlikely]] return; }
L_001EE7F0:
    c.r[1].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001EE828; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE804u);  if (depth < kMaxDepth) unit_0009(c, 158u, depth + 1u); else { c.pc = 0x001260A0u; return; } if (c.pc != 0x001EE804u) [[unlikely]] return; }
L_001EE804:
    c.r[3].d[0] = c.r[19].d[0] + 0ull;
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[20].d[0] = c.r[2].d[0] << 48;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    c.budget -= 9;
L_001EE828:
    c.r[3].d[0] = c.r[20].d[0] << 48;
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[16], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE844u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001EE844u) [[unlikely]] return; }
L_001EE844:
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[18].w[0] + 104u), c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE858u); st32((c.r[18].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001EE858u) [[unlikely]] return; }
L_001EE858:
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[18].w[0] + 52u), c.f[0]);
    st8((c.r[18].w[0] + 284u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001EE890:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE8BCu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0009(c, 202u, depth + 1u); else { c.pc = 0x00127320u; return; } if (c.pc != 0x001EE8BCu) [[unlikely]] return; }
L_001EE8BC:
    c.f[20] = c.f[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE8D0u); set32(c.r[6], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001EE8D0u) [[unlikely]] return; }
L_001EE8D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE8D8u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x001EE8D8u) [[unlikely]] return; }
L_001EE8D8:
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE8E4u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x001EE8E4u) [[unlikely]] return; }
L_001EE8E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);  if (t) { goto L_001EE904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[1];  if (t) { goto L_001EE920; } }
L_001EE904:
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EE920; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[1];  if (t) { goto L_001EE920; } }
L_001EE920:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE928u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00125FA0u; return; } if (c.pc != 0x001EE928u) [[unlikely]] return; }
L_001EE928:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[17].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001EE948; } }
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_001EE948:
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE958u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 216u, depth + 1u); else { c.pc = 0x00127600u; return; } if (c.pc != 0x001EE958u) [[unlikely]] return; }
L_001EE958:
    set32(c.r[3], c.r[29].w[0] + 84u);
    set32(c.r[2], c.r[29].w[0] + 88u);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EE9A0; } }
    st32((c.r[2].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_001EE9A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE9A8u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001EE9A8u) [[unlikely]] return; }
L_001EE9A8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE9B4u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 183u, depth + 1u); else { c.pc = 0x00126930u; return; } if (c.pc != 0x001EE9B4u) [[unlikely]] return; }
L_001EE9B4:
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE9C0u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x001EE9C0u) [[unlikely]] return; }
L_001EE9C0:
    set32(c.r[4], c.r[18].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE9D0u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x001EE9D0u) [[unlikely]] return; }
L_001EE9D0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001EE9F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEA08u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_003B(c, 227u, depth + 1u); else { c.pc = 0x001EE890u; return; } if (c.pc != 0x001EEA08u) [[unlikely]] return; }
L_001EEA08:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEA14u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 346u, depth + 1u); else { c.pc = 0x001EFC40u; return; } if (c.pc != 0x001EEA14u) [[unlikely]] return; }
L_001EEA14:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001EEA30:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[20] = ld32((c.r[4].w[0] + 52u));
    st32((c.r[4].w[0] + 52u), 0u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEA6Cu); set32(c.r[4], c.r[19].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 202u, depth + 1u); else { c.pc = 0x00127320u; return; } if (c.pc != 0x001EEA6Cu) [[unlikely]] return; }
L_001EEA6C:
    c.f[21] = c.f[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEA80u); set32(c.r[6], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001EEA80u) [[unlikely]] return; }
L_001EEA80:
    set32(c.r[16], c.r[29].w[0] + 100u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEA90u); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x001EEA90u) [[unlikely]] return; }
L_001EEA90:
    set32(c.r[4], c.r[19].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEA9Cu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x001EEA9Cu) [[unlikely]] return; }
L_001EEA9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);  if (t) { goto L_001EEABC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[1];  if (t) { goto L_001EEAD8; } }
L_001EEABC:
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EEAD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[1];  if (t) { goto L_001EEAD8; } }
L_001EEAD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEAE0u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00125FA0u; return; } if (c.pc != 0x001EEAE0u) [[unlikely]] return; }
L_001EEAE0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[18].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001EEB00; } }
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_001EEB00:
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[4], c.r[19].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEB10u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 216u, depth + 1u); else { c.pc = 0x00127600u; return; } if (c.pc != 0x001EEB10u) [[unlikely]] return; }
L_001EEB10:
    c.f[1] = ld32((c.r[16].w[0]));
    set32(c.r[2], c.r[29].w[0] + 104u);
    c.f[2] = ld32((c.r[29].w[0] + 96u));
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EEB58; } }
    st32((c.r[2].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 5;
L_001EEB58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEB60u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001EEB60u) [[unlikely]] return; }
L_001EEB60:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEB6Cu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 183u, depth + 1u); else { c.pc = 0x00126930u; return; } if (c.pc != 0x001EEB6Cu) [[unlikely]] return; }
L_001EEB6C:
    set32(c.r[4], c.r[19].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEB78u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x001EEB78u) [[unlikely]] return; }
L_001EEB78:
    c.f[12] = c.f[21];
    set32(c.r[4], c.r[19].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEB88u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x001EEB88u) [[unlikely]] return; }
L_001EEB88:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEB94u); st32((c.r[19].w[0] + 52u), c.f[20]);  if (depth < kMaxDepth) unit_003B(c, 346u, depth + 1u); else { c.pc = 0x001EFC40u; return; } if (c.pc != 0x001EEB94u) [[unlikely]] return; }
L_001EEB94:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001EEBC0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 504u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001EEBF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001EED80; } }
L_001EEBF8:
    set32(c.r[4], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001EEC10; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EEC28; } }
L_001EEC10:
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 512u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 504u), 0u);  if (t) { goto L_001EED80; } }
    c.budget -= 1;
L_001EEC28:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EEC60; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EEC60; } }
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[18].w[0] + 512u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 504u), 0u);  if (t) { goto L_001EED80; } }
    c.budget -= 1;
L_001EEC60:
    set32(c.r[5], c.r[3].w[0] + 64u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEC70u); set32(c.r[6], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001EEC70u) [[unlikely]] return; }
L_001EEC70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEC78u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x001EEC78u) [[unlikely]] return; }
L_001EEC78:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEC88u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 225u, depth + 1u); else { c.pc = 0x00102370u; return; } if (c.pc != 0x001EEC88u) [[unlikely]] return; }
L_001EEC88:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEC94u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001EEC94u) [[unlikely]] return; }
L_001EEC94:
    set32(c.r[19], c.r[29].w[0] + 100u);
    c.f[13] = ld32((c.r[19].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EECA4u); c.f[12] = ld32((c.r[29].w[0] + 96u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001EECA4u) [[unlikely]] return; }
L_001EECA4:
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.r[20].d[0] = c.r[2].d[0] << 48;
    c.f[1] = ld32((c.r[19].w[0]));
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EECC0u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001EECC0u) [[unlikely]] return; }
L_001EECC0:
    c.f[12] = ld32((c.r[29].w[0] + 104u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EECCCu); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001EECCCu) [[unlikely]] return; }
L_001EECCC:
    c.f[0] = c.r[20].w[0];
    c.r[19].d[0] = c.r[2].d[0] << 48;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EECE0u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x001EECE0u) [[unlikely]] return; }
L_001EECE0:
    c.f[1] = c.r[16].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EED10; } }
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] >= 0;  if (t) { goto L_001EED08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], 0u - c.r[16].w[0]);  if (t) { goto L_001EED10; } }
L_001EED08:
    c.r[20].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_001EED10:
    c.f[0] = c.r[19].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EED1Cu); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x001EED1Cu) [[unlikely]] return; }
L_001EED1C:
    c.f[1] = c.r[16].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EED50; } }
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] >= 0;  if (t) { goto L_001EED48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u - c.r[16].w[0]);  if (t) { goto L_001EED50; } }
    c.budget -= 1;
L_001EED48:
    c.r[19].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_001EED50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EED58u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001EED58u) [[unlikely]] return; }
L_001EED58:
    set32(c.r[2], 0u - c.r[20].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EED64u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001EED64u) [[unlikely]] return; }
L_001EED64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EED6Cu); c.r[4].d[0] = c.r[19].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001EED6Cu) [[unlikely]] return; }
L_001EED6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EED74u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001EED74u) [[unlikely]] return; }
L_001EED74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EED7Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 346u, depth + 1u); else { c.pc = 0x001EFC40u; return; } if (c.pc != 0x001EED7Cu) [[unlikely]] return; }
L_001EED7C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001EED80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001EEDA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[5], c.r[5].w[0] + 8864u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.budget -= 10;
L_001EEDC8:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001EEDE8; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EEDC8u | kUnwind; return; } goto L_001EEDC8; } }
    c.budget -= 1;
L_001EEDE8:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 21312u);
    set32(c.r[6], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], 0u + 255u);
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[4].d[0] = ld8((c.r[17].w[0] + 8566u));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[16], ld32((c.r[5].w[0])));  if (t) { goto L_001EEE70; } }
    set32(c.r[2], c.r[4].w[0] << 3);
    set32(c.r[18], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_001EEE20:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EEE48; } }
    c.f[12] = ld32((c.r[17].w[0] + 8264u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[13] = ld32((c.r[17].w[0] + 8272u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEE40u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 276u, depth + 1u); else { c.pc = 0x001EEEF0u; return; } if (c.pc != 0x001EEE40u) [[unlikely]] return; }
L_001EEE40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EEE60; } }
L_001EEE48:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = ld32((c.r[17].w[0] + 8268u));
    c.f[13] = ld32((c.r[17].w[0] + 8276u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEE5Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 276u, depth + 1u); else { c.pc = 0x001EEEF0u; return; } if (c.pc != 0x001EEE5Cu) [[unlikely]] return; }
L_001EEE5C:
    c.budget -= 1;
L_001EEE60:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[18], c.r[18].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EEE20u | kUnwind; return; } goto L_001EEE20; } }
L_001EEE70:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 8567u));
    set32(c.r[3], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001EEED8; } }
    set32(c.r[2], c.r[4].w[0] << 3);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_001EEE88:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EEEB0; } }
    c.f[12] = ld32((c.r[17].w[0] + 8304u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[13] = ld32((c.r[17].w[0] + 8312u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEEA8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 276u, depth + 1u); else { c.pc = 0x001EEEF0u; return; } if (c.pc != 0x001EEEA8u) [[unlikely]] return; }
L_001EEEA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EEEC8; } }
L_001EEEB0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = ld32((c.r[17].w[0] + 8308u));
    c.f[13] = ld32((c.r[17].w[0] + 8316u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEEC4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 276u, depth + 1u); else { c.pc = 0x001EEEF0u; return; } if (c.pc != 0x001EEEC4u) [[unlikely]] return; }
L_001EEEC4:
    c.budget -= 1;
L_001EEEC8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[16], c.r[16].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EEE88u | kUnwind; return; } goto L_001EEE88; } }
L_001EEED8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001EEEF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001EEF28; } }
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EF068; } }
    c.budget -= 1;
L_001EEF28:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EEF48; } }
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EF068; } }
L_001EEF48:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EEF80; } }
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EEF78; } }
    fpu_compare(c, fp::key(c.f[13]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EEF80; } }
    c.budget -= 1;
L_001EEF78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EF068; } }
L_001EEF80:
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_001EF068; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 16464u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001EC000u < 16384u) { entry = entries_003B[(t - 0x001EC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001EEFA8:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 3u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEFB4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x001EEFB4u) [[unlikely]] return; }
L_001EEFB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EF068; } }
    c.budget -= 1;
L_001EEFC0:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 3u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEFCCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 146u, depth + 1u); else { c.pc = 0x0023A0A0u; return; } if (c.pc != 0x001EEFCCu) [[unlikely]] return; }
L_001EEFCC:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 3u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 10u);  if (t) { goto L_001EEFE0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EF068; } }
L_001EEFE0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[17].w[0] + 32u);  if (t) { goto L_001EF068; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEFF8u);  if (depth < kMaxDepth) unit_0039(c, 189u, depth + 1u); else { c.pc = 0x001E7260u; return; } if (c.pc != 0x001EEFF8u) [[unlikely]] return; }
L_001EEFF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001EF068; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF008u); set32(c.r[5], 0u + 155u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x001EF008u) [[unlikely]] return; }
L_001EF008:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EF068; } }
L_001EF010:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 3u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF01Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x001EF01Cu) [[unlikely]] return; }
L_001EF01C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EF068; } }
    c.budget -= 1;
L_001EF028:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 3u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF034u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 123u, depth + 1u); else { c.pc = 0x002398E0u; return; } if (c.pc != 0x001EF034u) [[unlikely]] return; }
L_001EF034:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EF068; } }
    c.budget -= 1;
L_001EF040:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 3u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF04Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 157u, depth + 1u); else { c.pc = 0x0023A290u; return; } if (c.pc != 0x001EF04Cu) [[unlikely]] return; }
L_001EF04C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EF068; } }
    c.budget -= 1;
L_001EF058:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 3u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF064u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 116u, depth + 1u); else { c.pc = 0x00239680u; return; } if (c.pc != 0x001EF064u) [[unlikely]] return; }
L_001EF064:
    c.budget -= 1;
L_001EF068:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001EF080:
    c.r[2].d[0] = c.r[5].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EF0A0; } }
    c.r[2].d[0] = c.r[5].d[0] & 127ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.f[0] = ld32((c.r[4].w[0] + 8264u));  if (t) { goto L_001EF0B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[4].w[0] + 8304u));  if (t) { goto L_001EF0B0; } }
L_001EF0A0:
    c.r[2].d[0] = c.r[5].d[0] & 127ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.f[0] = ld32((c.r[4].w[0] + 8268u));  if (t) { goto L_001EF0B0; } }
    c.f[0] = ld32((c.r[4].w[0] + 8308u));
    c.budget -= 1;
L_001EF0B0:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EF0E0; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[13]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EF0E0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 696u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001EF0E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EF0E8; } }
L_001EF0E0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001EF0E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EF0F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], c.r[28].w[0] - 23820u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23836u)));
    c.r[18].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[16], c.r[18].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] - 1u);  if (t) { goto L_001EF188; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[3], c.r[18].w[0] << 10);
    set32(c.r[2], c.r[2].w[0] + 18784u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
L_001EF148:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001EF188; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001EF178; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF168u);  if (depth < kMaxDepth) unit_003B(c, 302u, depth + 1u); else { c.pc = 0x001EF3A0u; return; } if (c.pc != 0x001EF168u) [[unlikely]] return; }
L_001EF168:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EF178; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001EF210; } }
L_001EF178:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] - 4u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EF148u | kUnwind; return; } goto L_001EF148; } }
L_001EF188:
    set32(c.r[2], c.r[28].w[0] - 23812u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] - 1u);  if (t) { goto L_001EF208; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[3], c.r[18].w[0] << 10);
    set32(c.r[2], c.r[2].w[0] + 22880u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
L_001EF1B8:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001EF208; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EF1F8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001EF1F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF1E8u);  if (depth < kMaxDepth) unit_003B(c, 302u, depth + 1u); else { c.pc = 0x001EF3A0u; return; } if (c.pc != 0x001EF1E8u) [[unlikely]] return; }
L_001EF1E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EF1F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001EF210; } }
L_001EF1F8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] - 4u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EF1B8u | kUnwind; return; } goto L_001EF1B8; } }
L_001EF208:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001EF210:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001EF230:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[2], c.r[28].w[0] - 23820u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 23836u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[20].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[18], c.r[20].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[21], c.r[2].w[0] - 1u);  if (t) { goto L_001EF2D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[3], c.r[20].w[0] << 10);
    set32(c.r[2], c.r[2].w[0] + 18784u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[21].w[0] << 2);
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
L_001EF290:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001EF2D0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001EF2C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF2B0u);  if (depth < kMaxDepth) unit_003B(c, 302u, depth + 1u); else { c.pc = 0x001EF3A0u; return; } if (c.pc != 0x001EF2B0u) [[unlikely]] return; }
L_001EF2B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EF2C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001EF370; } }
L_001EF2C0:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[19], c.r[19].w[0] - 4u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EF290u | kUnwind; return; } goto L_001EF290; } }
L_001EF2D0:
    set32(c.r[2], c.r[28].w[0] - 23812u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] - 1u);  if (t) { goto L_001EF368; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00830000u);
    c.r[16].d[0] = c.r[16].d[0] << 56;
    set32(c.r[4], c.r[20].w[0] << 10);
    set32(c.r[3], c.r[3].w[0] + 22880u);
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
L_001EF308:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001EF368; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001EF358; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001EF358; } }
    c.r[2].d[0] = ld8((c.r[5].w[0] + 515u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_001EF358; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF344u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 302u, depth + 1u); else { c.pc = 0x001EF3A0u; return; } if (c.pc != 0x001EF344u) [[unlikely]] return; }
L_001EF344:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EF358; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001EF370; } }
    c.budget -= 1;
L_001EF358:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[19], c.r[19].w[0] - 4u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EF308u | kUnwind; return; } goto L_001EF308; } }
L_001EF368:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001EF370:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001EF3A0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    set32(c.r[2], 0u + 4u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], ld32((c.r[4].w[0] + 56u)));
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001EF778; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_001EF6E8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EF430; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EF430; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EF408; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EF8C8; } }
    c.budget -= 1;
L_001EF408:
    set32(c.r[16], c.r[4].w[0] + 48u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF418u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x001EF418u) [[unlikely]] return; }
L_001EF418:
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_001EF8C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EF8D0; } }
L_001EF430:
    set32(c.r[16], c.r[4].w[0] + 48u);
    c.r[20].d[0] = 0ull + 0ull;
    c.r[19].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
L_001EF440:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF450u); set32(c.r[6], c.r[16].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001EF450u) [[unlikely]] return; }
L_001EF450:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF45Cu); set32(c.r[5], c.r[19].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x001EF45Cu) [[unlikely]] return; }
L_001EF45C:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF468u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x001EF468u) [[unlikely]] return; }
L_001EF468:
    c.f[1] = ld32((c.r[16].w[0] + 192u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_001EF47C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001EF47C:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EF490; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001EF8D0; } }
L_001EF490:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF4A0u); set32(c.r[5], c.r[19].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x001EF4A0u) [[unlikely]] return; }
L_001EF4A0:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF4B0u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001EF4B0u) [[unlikely]] return; }
L_001EF4B0:
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], c.r[18].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF4C0u); set32(c.r[6], c.r[19].w[0] + 144u);  if (depth < kMaxDepth) unit_0011(c, 65u, depth + 1u); else { c.pc = 0x00144C30u; return; } if (c.pc != 0x001EF4C0u) [[unlikely]] return; }
L_001EF4C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EF4D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001EF8D0; } }
L_001EF4D0:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[19], c.r[19].w[0] + 16u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EF440u | kUnwind; return; } goto L_001EF440; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45FA0000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.f[20] = c.r[2].w[0];
    set32(c.r[19], c.r[19].w[0] + 2824u);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 5;
L_001EF4F8:
    c.r[2].d[0] = ld8((c.r[19].w[0]));
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[3], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[2].w[0] + 48u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF520u); set32(c.r[5], c.r[3].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001EF520u) [[unlikely]] return; }
L_001EF520:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF528u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x001EF528u) [[unlikely]] return; }
L_001EF528:
    c.r[2].d[0] = ld8((c.r[19].w[0]));
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF54Cu); set32(c.r[6], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001EF54Cu) [[unlikely]] return; }
L_001EF54C:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF558u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x001EF558u) [[unlikely]] return; }
L_001EF558:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EF570; } }
    c.r[20].d[0] = c.r[20].d[0] | 2ull;
    c.budget -= 1;
L_001EF570:
    c.r[2].d[0] = ld8((c.r[19].w[0]));
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF58Cu); set32(c.r[6], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001EF58Cu) [[unlikely]] return; }
L_001EF58C:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF598u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x001EF598u) [[unlikely]] return; }
L_001EF598:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EF5B0; } }
    c.r[20].d[0] = c.r[20].d[0] | 1ull;
    c.budget -= 1;
L_001EF5B0:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_001EF680; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_001EF648; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_001EF610; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_001EF5E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EF688; } }
L_001EF5E0:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.f[12] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF5F0u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x001EF5F0u) [[unlikely]] return; }
L_001EF5F0:
    c.r[2].d[0] = ld8((c.r[19].w[0]));
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF608u); set32(c.r[5], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x001EF608u) [[unlikely]] return; }
L_001EF608:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EF688; } }
L_001EF610:
    c.r[3].d[0] = ld8((c.r[19].w[0]));
    set32(c.r[2], c.r[29].w[0] + 192u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.f[3] = ld32((c.r[3].w[0] + 48u));
    c.f[2] = ld32((c.r[3].w[0] + 52u));
    c.f[1] = ld32((c.r[3].w[0] + 56u));
    c.f[0] = ld32((c.r[3].w[0] + 60u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12u), c.f[0]);  if (t) { goto L_001EF688; } }
    c.budget -= 1;
L_001EF648:
    c.r[3].d[0] = ld8((c.r[19].w[0]));
    set32(c.r[2], c.r[29].w[0] + 192u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.f[3] = ld32((c.r[3].w[0] + 64u));
    c.f[2] = ld32((c.r[3].w[0] + 68u));
    c.f[1] = ld32((c.r[3].w[0] + 72u));
    c.f[0] = ld32((c.r[3].w[0] + 76u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12u), c.f[0]);  if (t) { goto L_001EF688; } }
    c.budget -= 1;
L_001EF680:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001EF8D0; } }
L_001EF688:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF694u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x001EF694u) [[unlikely]] return; }
L_001EF694:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EF6A8; } }
    c.f[20] = c.f[0];
    c.budget -= 2;
L_001EF6A8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EF4F8u | kUnwind; return; } goto L_001EF4F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45FA0000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EF8C8; } }
    c.f[0] = ld32((c.r[16].w[0] + 192u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_001EF8C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EF8D0; } }
L_001EF6E8:
    set32(c.r[4], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF6F4u); set32(c.r[6], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_002E(c, 117u, depth + 1u); else { c.pc = 0x001B9AF0u; return; } if (c.pc != 0x001EF6F4u) [[unlikely]] return; }
L_001EF6F4:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF700u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 207u, depth + 1u); else { c.pc = 0x00127450u; return; } if (c.pc != 0x001EF700u) [[unlikely]] return; }
L_001EF700:
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    c.f[1] = ld32((c.r[29].w[0] + 176u));
    c.f[0] = c.f[2] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EF8C8; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EF8C8; } }
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[29].w[0] + 180u));
    c.f[0] = c.f[2] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EF8C8; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EF8C8; } }
    c.f[2] = ld32((c.r[16].w[0] + 40u));
    c.f[1] = ld32((c.r[29].w[0] + 184u));
    c.f[0] = c.f[2] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EF8C8; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_001EF8C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EF8D0; } }
    c.budget -= 1;
L_001EF778:
    set32(c.r[16], c.r[4].w[0] + 48u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF788u); set32(c.r[6], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001EF788u) [[unlikely]] return; }
L_001EF788:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF798u); set32(c.r[6], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001EF798u) [[unlikely]] return; }
L_001EF798:
    set32(c.r[4], c.r[16].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF7A8u); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 203u, depth + 1u); else { c.pc = 0x00127360u; return; } if (c.pc != 0x001EF7A8u) [[unlikely]] return; }
L_001EF7A8:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF7B4u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x001EF7B4u) [[unlikely]] return; }
L_001EF7B4:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[20] = c.f[0];  if (t) { goto L_001EF7D0; } }
    c.r[18].d[0] = c.r[18].d[0] | 1ull;
    c.budget -= 2;
L_001EF7D0:
    set32(c.r[4], c.r[16].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF7DCu); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 203u, depth + 1u); else { c.pc = 0x00127360u; return; } if (c.pc != 0x001EF7DCu) [[unlikely]] return; }
L_001EF7DC:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF7E8u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x001EF7E8u) [[unlikely]] return; }
L_001EF7E8:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EF800; } }
    c.r[18].d[0] = c.r[18].d[0] | 2ull;
    c.budget -= 1;
L_001EF800:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_001EF880; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_001EF858; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_001EF830; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001EF830; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EF8A0; } }
L_001EF830:
    set32(c.r[2], c.r[29].w[0] + 112u);
    c.f[3] = ld32((c.r[16].w[0] + 48u));
    c.f[2] = ld32((c.r[16].w[0] + 52u));
    c.f[1] = ld32((c.r[16].w[0] + 56u));
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12u), c.f[0]);  if (t) { goto L_001EF8A0; } }
L_001EF858:
    set32(c.r[2], c.r[29].w[0] + 112u);
    c.f[3] = ld32((c.r[16].w[0] + 64u));
    c.f[2] = ld32((c.r[16].w[0] + 68u));
    c.f[1] = ld32((c.r[16].w[0] + 72u));
    c.f[0] = ld32((c.r[16].w[0] + 76u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12u), c.f[0]);  if (t) { goto L_001EF8A0; } }
L_001EF880:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF890u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x001EF890u) [[unlikely]] return; }
L_001EF890:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF8A0u); set32(c.r[6], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x001EF8A0u) [[unlikely]] return; }
L_001EF8A0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF8ACu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x001EF8ACu) [[unlikely]] return; }
L_001EF8AC:
    c.f[1] = ld32((c.r[16].w[0] + 144u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_001EF8C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EF8D0; } }
    c.budget -= 1;
L_001EF8C8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001EF8D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_001EF900:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 9u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EF958; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 9u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EF958; } }
    set32(c.r[6], ld32((c.r[5].w[0] + 620u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[3], 0u + 130u);  if (t) { goto L_001EF958; } }
    c.budget -= 1;
L_001EF928:
    set32(c.r[5], ld32((c.r[6].w[0] + 56u)));
    c.r[5].d[0] = ld8((c.r[5].w[0] + 1u));
    c.r[5].d[0] = c.r[5].d[0] & 130ull;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001EF948; } }
    st32((c.r[4].w[0] + 504u), c.r[6].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 508u), c.r[6].w[0]);  if (t) { goto L_001EF958; } }
L_001EF948:
    set32(c.r[6], ld32((c.r[6].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EF928u | kUnwind; return; } goto L_001EF928; } }
    c.budget -= 1;
L_001EF958:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EF960:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[9].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[11], c.r[11].w[0] - 27856u);
    c.r[16].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.f[0] = 0u;
    set32(c.r[3], 0u + 3u);
    set32(c.r[6], 0u + 6u);
    c.budget -= 12;
L_001EF990:
    c.budget -= 2;
    { const bool t = c.r[11].d[0] == c.r[4].d[0];  if (t) { goto L_001EFA38; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 8657u)));
    c.r[7].d[0] = ld16((c.r[4].w[0] + 860u));
    c.r[2].d[0] = c.r[7].d[0] & c.r[8].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EFA38; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[11].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EFA18; } }
    c.r[2].d[0] = ld8((c.r[11].w[0] + 753u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EFA18; } }
    c.r[2].d[0] = ld8((c.r[11].w[0] + 755u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_001EFA18; } }
    c.f[1] = ld32((c.r[11].w[0] + 1072u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EFA18; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 764u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001EFA18; } }
    set32(c.r[2], ld32((c.r[11].w[0] + 1488u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; c.r[2].d[0] = ~(c.r[8].d[0] | 0ull);  if (t) { goto L_001EFA18; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    st16((c.r[4].w[0] + 860u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[11].w[0] + 1488u), 0u);
    st32((c.r[11].w[0] + 504u), 0u);
    c.budget -= 7;
L_001EFA18:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[11].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EFA38; } }
    set32(c.r[2], ld32((c.r[11].w[0] + 1488u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_001EFA38; } }
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_001EFA38:
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[2].d[0] = c.r[10].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[11], c.r[11].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EF990u | kUnwind; return; } goto L_001EF990; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001EFA60; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull; set32(c.r[5], 0u + 3u);  if (t) { goto L_001EFA60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFA60u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x001EFA60u) [[unlikely]] return; }
L_001EFA60:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001EFA80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 504u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001EFC20; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EFC20; } }
    set32(c.r[18], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001EFC20; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EFC20; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EFC20; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EFC20; } }
    c.f[0] = ld32((c.r[18].w[0] + 2096u));
    set32(c.r[5], c.r[4].w[0] + 32u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[17], c.r[29].w[0] + 68u);
    set32(c.r[16], c.r[29].w[0] + 72u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 2100u));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 2104u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFB14u); st32((c.r[16].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001EFB14u) [[unlikely]] return; }
L_001EFB14:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EFB58; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[2].w[0] + 29024u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFB50u); set32(c.r[4], c.r[2].w[0] + 144u);  if (depth < kMaxDepth) unit_002E(c, 126u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x001EFB50u) [[unlikely]] return; }
L_001EFB50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EFB78; } }
L_001EFB58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFB60u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001EFB60u) [[unlikely]] return; }
L_001EFB60:
    set32(c.r[2], ld32((c.r[18].w[0] + 1252u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFB6Cu); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001EFB6Cu) [[unlikely]] return; }
L_001EFB6C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFB78u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x001EFB78u) [[unlikely]] return; }
L_001EFB78:
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.f[1] = ld32((c.r[16].w[0]));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFB8Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001EFB8Cu) [[unlikely]] return; }
L_001EFB8C:
    c.f[12] = ld32((c.r[17].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFB98u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001EFB98u) [[unlikely]] return; }
L_001EFB98:
    set32(c.r[3], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < 5633ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 16384ll ? 1ull : 0ull;  if (t) { goto L_001EFBC0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EFBC0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 761u)));
    c.r[3].d[0] = c.r[3].d[0] | 32ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 761u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001EFC20; } }
L_001EFBC0:
    c.r[1].d[0] = c.r[3].sd[0] < -5632ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[3].sd[0] < -16383ll ? 1ull : 0ull;  if (t) { goto L_001EFBE8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001EFBE8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 761u)));
    c.r[3].d[0] = c.r[3].d[0] | 16ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 761u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001EFC20; } }
    c.budget -= 1;
L_001EFBE8:
    c.f[12] = ld32((c.r[29].w[0] + 64u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFBF4u); c.f[13] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001EFBF4u) [[unlikely]] return; }
L_001EFBF4:
    set32(c.r[3], c.r[2].w[0] + 8192u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 14));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 761u)));
    c.r[5].d[0] = c.r[5].d[0] & 3ull;
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[18].w[0] + 761u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 11;
L_001EFC20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001EFC40:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 504u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001EFED8; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EFED8; } }
    set32(c.r[18], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001EFED8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EFED8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EFED8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EFED8; } }
    c.f[0] = ld32((c.r[18].w[0] + 2096u));
    set32(c.r[5], c.r[4].w[0] + 32u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[17], c.r[29].w[0] + 68u);
    set32(c.r[16], c.r[29].w[0] + 72u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 2100u));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 2104u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFCD4u); st32((c.r[16].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001EFCD4u) [[unlikely]] return; }
L_001EFCD4:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EFD18; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[2].w[0] + 29024u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFD10u); set32(c.r[4], c.r[2].w[0] + 144u);  if (depth < kMaxDepth) unit_002E(c, 126u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x001EFD10u) [[unlikely]] return; }
L_001EFD10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EFD38; } }
L_001EFD18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFD20u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001EFD20u) [[unlikely]] return; }
L_001EFD20:
    set32(c.r[2], ld32((c.r[18].w[0] + 1252u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFD2Cu); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001EFD2Cu) [[unlikely]] return; }
L_001EFD2C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFD38u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x001EFD38u) [[unlikely]] return; }
L_001EFD38:
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.f[1] = ld32((c.r[16].w[0]));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFD4Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001EFD4Cu) [[unlikely]] return; }
L_001EFD4C:
    c.f[12] = ld32((c.r[17].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFD58u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001EFD58u) [[unlikely]] return; }
L_001EFD58:
    set32(c.r[3], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < -5632ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[3].sd[0] < -16383ll ? 1ull : 0ull;  if (t) { goto L_001EFD80; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001EFD80; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 760u)));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 760u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001EFED8; } }
L_001EFD80:
    c.f[13] = ld32((c.r[16].w[0]));
    c.f[12] = ld32((c.r[29].w[0] + 64u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFD90u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001EFD90u) [[unlikely]] return; }
L_001EFD90:
    set32(c.r[3], c.r[2].w[0] + 8192u);
    set32(c.r[5], 0u + 1u);
    c.r[7].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 14));
    set32(c.r[3], 0u + 15u);
    c.r[6].d[0] = c.r[4].d[0] & 3ull;
    c.r[8].d[0] = c.r[7].d[0] & 4095ull;
    set32(c.r[5], c.r[5].w[0] << (c.r[6].w[0] & 31u));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 12));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[16].d[0] | c.r[5].d[0];  if (t) { goto L_001EFEB0; } }
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 11u);  if (t) { goto L_001EFE98; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001EFE80; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 7u);  if (t) { goto L_001EFE68; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001EFE50; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_001EFE38; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001EFE20; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001EFE08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EFEC0; } }
L_001EFE08:
    c.r[1].d[0] = c.r[8].sd[0] < 3072ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EFEC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[16].d[0] | 8ull;  if (t) { goto L_001EFEC0; } }
    c.budget -= 1;
L_001EFE20:
    c.r[1].d[0] = c.r[8].sd[0] < 1025ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001EFEC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[16].d[0] | 2ull;  if (t) { goto L_001EFEC0; } }
    c.budget -= 1;
L_001EFE38:
    c.r[1].d[0] = c.r[8].sd[0] < 3072ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EFEC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[16].d[0] | 1ull;  if (t) { goto L_001EFEC0; } }
    c.budget -= 1;
L_001EFE50:
    c.r[1].d[0] = c.r[8].sd[0] < 1025ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001EFEC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[16].d[0] | 4ull;  if (t) { goto L_001EFEC0; } }
    c.budget -= 1;
L_001EFE68:
    c.r[1].d[0] = c.r[8].sd[0] < 3072ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EFEC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[16].d[0] | 2ull;  if (t) { goto L_001EFEC0; } }
    c.budget -= 1;
L_001EFE80:
    c.r[1].d[0] = c.r[8].sd[0] < 1025ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001EFEC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[16].d[0] | 8ull;  if (t) { goto L_001EFEC0; } }
    c.budget -= 1;
L_001EFE98:
    c.r[1].d[0] = c.r[8].sd[0] < 3072ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EFEC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[16].d[0] | 4ull;  if (t) { goto L_001EFEC0; } }
    c.budget -= 1;
L_001EFEB0:
    c.r[1].d[0] = c.r[8].sd[0] < 1025ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001EFEC0; } }
    c.r[16].d[0] = c.r[16].d[0] | 1ull;
    c.budget -= 1;
L_001EFEC0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 760u)));
    c.r[4].d[0] = c.r[16].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[18].w[0] + 760u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_001EFED8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001EFEF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 770u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001EFF28; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 821u)));
    c.r[2].d[0] = c.r[2].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001EFF28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EFFC0; } }
    c.budget -= 1;
L_001EFF28:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8258u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 759u)));
    set32(c.r[17], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EFF70; } }
L_001EFF40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFF48u);  if (depth < kMaxDepth) unit_003B(c, 22u, depth + 1u); else { c.pc = 0x001EC600u; return; } if (c.pc != 0x001EFF48u) [[unlikely]] return; }
L_001EFF48:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_001EFF58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001EFF80; } }
L_001EFF58:
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 36ull;  if (t) { goto L_001EFF80; } }
L_001EFF70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFF78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 22u, depth + 1u); else { c.pc = 0x001EC600u; return; } if (c.pc != 0x001EFF78u) [[unlikely]] return; }
L_001EFF78:
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 2;
L_001EFF80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EFFB8; } }
    goto L_001EFF88;
L_001EFF84:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001EFF88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFF90u);  if (depth < kMaxDepth) unit_003C(c, 12u, depth + 1u); else { c.pc = 0x001F0030u; return; } if (c.pc != 0x001EFF90u) [[unlikely]] return; }
L_001EFF90:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 759u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_001EFFA8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001EFFB0; } }
L_001EFFA8:
    st8((c.r[16].w[0] + 783u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001EFFB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001EFFC0; } }
L_001EFFB8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001EFFC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001EFFE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 1;
L_001EFFE4:
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 192ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_003C(c, 1u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { [[clang::musttail]] return unit_003C(c, 4u, depth); } }
    [[clang::musttail]] return unit_003C(c, 1u, depth);
}

}
