#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0057[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0,
    5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 25, 0, 26, 0, 27, 0, 28, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 35, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 42, 0, 0, 0, 43, 0, 0,
    44, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0,
    50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0,
    54, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0,
    0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 61, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 67, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 78, 0,
    79, 0, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 83, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0,
    91, 0, 92, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0,
    0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0,
    0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0,
    116, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 121, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0,
    0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0,
    0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0,
    0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 147, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 0,
    156, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    160, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 164, 0, 0, 165, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0,
    0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 179, 0, 180, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 198, 0, 0, 0, 0, 0, 0, 0, 199, 0, 200, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 207, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 210, 0, 211, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 217, 0, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 223, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 226, 0, 227, 0, 0, 228, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0,
    0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 238, 0, 239, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0,
    0, 246, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0,
    0, 253, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0,
    0, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0,
    266, 0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0,
    0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0,
    0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0,
    286, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0,
    292, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 298, 0,
    0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0,
    0, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0,
    311, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 317, 0, 0,
    0, 318, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0,
    330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 340, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 355, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 358, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0,
    362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 365, 366, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 368, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0,
    372, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0057(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0025C000;
    case 2u: goto L_0025C02C;
    case 3u: goto L_0025C030;
    case 4u: goto L_0025C060;
    case 5u: goto L_0025C080;
    case 6u: goto L_0025C0C0;
    case 7u: goto L_0025C150;
    case 8u: goto L_0025C158;
    case 9u: goto L_0025C210;
    case 10u: goto L_0025C270;
    case 11u: goto L_0025C2A4;
    case 12u: goto L_0025C2AC;
    case 13u: goto L_0025C2B4;
    case 14u: goto L_0025C2C8;
    case 15u: goto L_0025C310;
    case 16u: goto L_0025C368;
    case 17u: goto L_0025C3C0;
    case 18u: goto L_0025C418;
    case 19u: goto L_0025C470;
    case 20u: goto L_0025C4C8;
    case 21u: goto L_0025C530;
    case 22u: goto L_0025C538;
    case 23u: goto L_0025C548;
    case 24u: goto L_0025C560;
    case 25u: goto L_0025C614;
    case 26u: goto L_0025C61C;
    case 27u: goto L_0025C624;
    case 28u: goto L_0025C62C;
    case 29u: goto L_0025C634;
    case 30u: goto L_0025C650;
    case 31u: goto L_0025C658;
    case 32u: goto L_0025C680;
    case 33u: goto L_0025C6BC;
    case 34u: goto L_0025C6C4;
    case 35u: goto L_0025C6CC;
    case 36u: goto L_0025C6D4;
    case 37u: goto L_0025C720;
    case 38u: goto L_0025C800;
    case 39u: goto L_0025C8B0;
    case 40u: goto L_0025C8C4;
    case 41u: goto L_0025C8DC;
    case 42u: goto L_0025C8E4;
    case 43u: goto L_0025C8F4;
    case 44u: goto L_0025C900;
    case 45u: goto L_0025C914;
    case 46u: goto L_0025C924;
    case 47u: goto L_0025C92C;
    case 48u: goto L_0025C950;
    case 49u: goto L_0025C960;
    case 50u: goto L_0025C980;
    case 51u: goto L_0025C9B8;
    case 52u: goto L_0025C9D0;
    case 53u: goto L_0025C9F8;
    case 54u: goto L_0025CA00;
    case 55u: goto L_0025CA08;
    case 56u: goto L_0025CA34;
    case 57u: goto L_0025CA70;
    case 58u: goto L_0025CA90;
    case 59u: goto L_0025CAA4;
    case 60u: goto L_0025CAE4;
    case 61u: goto L_0025CAEC;
    case 62u: goto L_0025CB20;
    case 63u: goto L_0025CB40;
    case 64u: goto L_0025CB78;
    case 65u: goto L_0025CBA0;
    case 66u: goto L_0025CBB4;
    case 67u: goto L_0025CBC0;
    case 68u: goto L_0025CBC8;
    case 69u: goto L_0025CC00;
    case 70u: goto L_0025CC20;
    case 71u: goto L_0025CCE0;
    case 72u: goto L_0025CD10;
    case 73u: goto L_0025CD48;
    case 74u: goto L_0025CD60;
    case 75u: goto L_0025CDCC;
    case 76u: goto L_0025CE68;
    case 77u: goto L_0025CE70;
    case 78u: goto L_0025CE78;
    case 79u: goto L_0025CE80;
    case 80u: goto L_0025CE9C;
    case 81u: goto L_0025CEA8;
    case 82u: goto L_0025CEC0;
    case 83u: goto L_0025CF98;
    case 84u: goto L_0025CFA0;
    case 85u: goto L_0025CFD4;
    case 86u: goto L_0025D0C4;
    case 87u: goto L_0025D120;
    case 88u: goto L_0025D130;
    case 89u: goto L_0025D138;
    case 90u: goto L_0025D160;
    case 91u: goto L_0025D180;
    case 92u: goto L_0025D188;
    case 93u: goto L_0025D190;
    case 94u: goto L_0025D1A0;
    case 95u: goto L_0025D1C8;
    case 96u: goto L_0025D1E8;
    case 97u: goto L_0025D218;
    case 98u: goto L_0025D238;
    case 99u: goto L_0025D270;
    case 100u: goto L_0025D290;
    case 101u: goto L_0025D2A0;
    case 102u: goto L_0025D2B8;
    case 103u: goto L_0025D2C0;
    case 104u: goto L_0025D2D0;
    case 105u: goto L_0025D2E4;
    case 106u: goto L_0025D344;
    case 107u: goto L_0025D360;
    case 108u: goto L_0025D3A4;
    case 109u: goto L_0025D3C0;
    case 110u: goto L_0025D3F0;
    case 111u: goto L_0025D408;
    case 112u: goto L_0025D500;
    case 113u: goto L_0025D540;
    case 114u: goto L_0025D5D0;
    case 115u: goto L_0025D5E0;
    case 116u: goto L_0025D600;
    case 117u: goto L_0025D608;
    case 118u: goto L_0025D618;
    case 119u: goto L_0025D660;
    case 120u: goto L_0025D6B8;
    case 121u: goto L_0025D794;
    case 122u: goto L_0025D79C;
    case 123u: goto L_0025D7B0;
    case 124u: goto L_0025D858;
    case 125u: goto L_0025D870;
    case 126u: goto L_0025D894;
    case 127u: goto L_0025D8A4;
    case 128u: goto L_0025D8CC;
    case 129u: goto L_0025D8DC;
    case 130u: goto L_0025D960;
    case 131u: goto L_0025D978;
    case 132u: goto L_0025D99C;
    case 133u: goto L_0025D9F8;
    case 134u: goto L_0025DA04;
    case 135u: goto L_0025DA18;
    case 136u: goto L_0025DA40;
    case 137u: goto L_0025DA4C;
    case 138u: goto L_0025DA64;
    case 139u: goto L_0025DAB0;
    case 140u: goto L_0025DAE8;
    case 141u: goto L_0025DB58;
    case 142u: goto L_0025DBA4;
    case 143u: goto L_0025DBB8;
    case 144u: goto L_0025DBC8;
    case 145u: goto L_0025DC18;
    case 146u: goto L_0025DC2C;
    case 147u: goto L_0025DC34;
    case 148u: goto L_0025DC40;
    case 149u: goto L_0025DC58;
    case 150u: goto L_0025DD10;
    case 151u: goto L_0025DD34;
    case 152u: goto L_0025DD84;
    case 153u: goto L_0025DDD0;
    case 154u: goto L_0025DDD8;
    case 155u: goto L_0025DDE0;
    case 156u: goto L_0025DE00;
    case 157u: goto L_0025DE08;
    case 158u: goto L_0025DE48;
    case 159u: goto L_0025DE50;
    case 160u: goto L_0025DE80;
    case 161u: goto L_0025DE88;
    case 162u: goto L_0025DED8;
    case 163u: goto L_0025DEE0;
    case 164u: goto L_0025DF0C;
    case 165u: goto L_0025DF18;
    case 166u: goto L_0025DF20;
    case 167u: goto L_0025DF44;
    case 168u: goto L_0025DF90;
    case 169u: goto L_0025DFD0;
    case 170u: goto L_0025DFF8;
    case 171u: goto L_0025E010;
    case 172u: goto L_0025E050;
    case 173u: goto L_0025E058;
    case 174u: goto L_0025E078;
    case 175u: goto L_0025E0A0;
    case 176u: goto L_0025E0B8;
    case 177u: goto L_0025E0CC;
    case 178u: goto L_0025E0E0;
    case 179u: goto L_0025E0EC;
    case 180u: goto L_0025E0F4;
    case 181u: goto L_0025E11C;
    case 182u: goto L_0025E168;
    case 183u: goto L_0025E190;
    case 184u: goto L_0025E1B0;
    case 185u: goto L_0025E200;
    case 186u: goto L_0025E228;
    case 187u: goto L_0025E240;
    case 188u: goto L_0025E284;
    case 189u: goto L_0025E298;
    case 190u: goto L_0025E2A8;
    case 191u: goto L_0025E2E0;
    case 192u: goto L_0025E2F0;
    case 193u: goto L_0025E33C;
    case 194u: goto L_0025E378;
    case 195u: goto L_0025E3C0;
    case 196u: goto L_0025E3CC;
    case 197u: goto L_0025E448;
    case 198u: goto L_0025E450;
    case 199u: goto L_0025E470;
    case 200u: goto L_0025E478;
    case 201u: goto L_0025E4B8;
    case 202u: goto L_0025E4C0;
    case 203u: goto L_0025E508;
    case 204u: goto L_0025E530;
    case 205u: goto L_0025E538;
    case 206u: goto L_0025E54C;
    case 207u: goto L_0025E598;
    case 208u: goto L_0025E5A0;
    case 209u: goto L_0025E5D0;
    case 210u: goto L_0025E5DC;
    case 211u: goto L_0025E5E4;
    case 212u: goto L_0025E60C;
    case 213u: goto L_0025E658;
    case 214u: goto L_0025E680;
    case 215u: goto L_0025E6D0;
    case 216u: goto L_0025E730;
    case 217u: goto L_0025E738;
    case 218u: goto L_0025E744;
    case 219u: goto L_0025E760;
    case 220u: goto L_0025E7A8;
    case 221u: goto L_0025E7B0;
    case 222u: goto L_0025E830;
    case 223u: goto L_0025E83C;
    case 224u: goto L_0025E844;
    case 225u: goto L_0025E86C;
    case 226u: goto L_0025E910;
    case 227u: goto L_0025E918;
    case 228u: goto L_0025E924;
    case 229u: goto L_0025E940;
    case 230u: goto L_0025E974;
    case 231u: goto L_0025E998;
    case 232u: goto L_0025E9B0;
    case 233u: goto L_0025E9C0;
    case 234u: goto L_0025EA04;
    case 235u: goto L_0025EA18;
    case 236u: goto L_0025EA28;
    case 237u: goto L_0025EA60;
    case 238u: goto L_0025EA8C;
    case 239u: goto L_0025EA94;
    case 240u: goto L_0025EA9C;
    case 241u: goto L_0025EAB0;
    case 242u: goto L_0025EAC0;
    case 243u: goto L_0025EAD4;
    case 244u: goto L_0025EAE4;
    case 245u: goto L_0025EAF4;
    case 246u: goto L_0025EB04;
    case 247u: goto L_0025EB14;
    case 248u: goto L_0025EB24;
    case 249u: goto L_0025EB40;
    case 250u: goto L_0025EB54;
    case 251u: goto L_0025EB64;
    case 252u: goto L_0025EB74;
    case 253u: goto L_0025EB84;
    case 254u: goto L_0025EB94;
    case 255u: goto L_0025EBB0;
    case 256u: goto L_0025EBC4;
    case 257u: goto L_0025EBD4;
    case 258u: goto L_0025EBE4;
    case 259u: goto L_0025EBF4;
    case 260u: goto L_0025EC10;
    case 261u: goto L_0025EC24;
    case 262u: goto L_0025EC34;
    case 263u: goto L_0025EC44;
    case 264u: goto L_0025EC54;
    case 265u: goto L_0025EC64;
    case 266u: goto L_0025EC80;
    case 267u: goto L_0025EC94;
    case 268u: goto L_0025ECA4;
    case 269u: goto L_0025ECB4;
    case 270u: goto L_0025ECD0;
    case 271u: goto L_0025ECE4;
    case 272u: goto L_0025ECF4;
    case 273u: goto L_0025ED04;
    case 274u: goto L_0025ED20;
    case 275u: goto L_0025ED40;
    case 276u: goto L_0025ED54;
    case 277u: goto L_0025ED64;
    case 278u: goto L_0025ED74;
    case 279u: goto L_0025ED84;
    case 280u: goto L_0025ED94;
    case 281u: goto L_0025EDB0;
    case 282u: goto L_0025EDC0;
    case 283u: goto L_0025EDD0;
    case 284u: goto L_0025EDE0;
    case 285u: goto L_0025EDF0;
    case 286u: goto L_0025EE00;
    case 287u: goto L_0025EE10;
    case 288u: goto L_0025EE20;
    case 289u: goto L_0025EE30;
    case 290u: goto L_0025EE44;
    case 291u: goto L_0025EE70;
    case 292u: goto L_0025EE80;
    case 293u: goto L_0025EE90;
    case 294u: goto L_0025EEA0;
    case 295u: goto L_0025EEB4;
    case 296u: goto L_0025EED4;
    case 297u: goto L_0025EEE4;
    case 298u: goto L_0025EEF8;
    case 299u: goto L_0025EF08;
    case 300u: goto L_0025EF20;
    case 301u: goto L_0025EF34;
    case 302u: goto L_0025EF44;
    case 303u: goto L_0025EF54;
    case 304u: goto L_0025EF70;
    case 305u: goto L_0025EF90;
    case 306u: goto L_0025EFA0;
    case 307u: goto L_0025EFB0;
    case 308u: goto L_0025EFC4;
    case 309u: goto L_0025EFD4;
    case 310u: goto L_0025EFE4;
    case 311u: goto L_0025F000;
    case 312u: goto L_0025F010;
    case 313u: goto L_0025F020;
    case 314u: goto L_0025F034;
    case 315u: goto L_0025F044;
    case 316u: goto L_0025F060;
    case 317u: goto L_0025F074;
    case 318u: goto L_0025F084;
    case 319u: goto L_0025F094;
    case 320u: goto L_0025F0A4;
    case 321u: goto L_0025F0B4;
    case 322u: goto L_0025F0D0;
    case 323u: goto L_0025F130;
    case 324u: goto L_0025F144;
    case 325u: goto L_0025F20C;
    case 326u: goto L_0025F228;
    case 327u: goto L_0025F238;
    case 328u: goto L_0025F250;
    case 329u: goto L_0025F260;
    case 330u: goto L_0025F280;
    case 331u: goto L_0025F314;
    case 332u: goto L_0025F410;
    case 333u: goto L_0025F448;
    case 334u: goto L_0025F460;
    case 335u: goto L_0025F4A0;
    case 336u: goto L_0025F4B0;
    case 337u: goto L_0025F540;
    case 338u: goto L_0025F550;
    case 339u: goto L_0025F5B8;
    case 340u: goto L_0025F5C4;
    case 341u: goto L_0025F5E0;
    case 342u: goto L_0025F684;
    case 343u: goto L_0025F6F0;
    case 344u: goto L_0025F788;
    case 345u: goto L_0025F7A0;
    case 346u: goto L_0025F808;
    case 347u: goto L_0025F820;
    case 348u: goto L_0025F964;
    case 349u: goto L_0025F9A0;
    case 350u: goto L_0025FA10;
    case 351u: goto L_0025FA20;
    case 352u: goto L_0025FAC0;
    case 353u: goto L_0025FAD0;
    case 354u: goto L_0025FB38;
    case 355u: goto L_0025FB44;
    case 356u: goto L_0025FB60;
    case 357u: goto L_0025FBD8;
    case 358u: goto L_0025FBF0;
    case 359u: goto L_0025FC38;
    case 360u: goto L_0025FC50;
    case 361u: goto L_0025FC60;
    case 362u: goto L_0025FC80;
    case 363u: goto L_0025FE10;
    case 364u: goto L_0025FE44;
    case 365u: goto L_0025FE8C;
    case 366u: goto L_0025FE90;
    case 367u: goto L_0025FEA8;
    case 368u: goto L_0025FF18;
    case 369u: goto L_0025FF20;
    case 370u: goto L_0025FF4C;
    case 371u: goto L_0025FF5C;
    case 372u: goto L_0025FF80;
    case 373u: goto L_0025FF94;
    default: bad_entry(c, 0x0025C000u); return;
    }
L_0025C000:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.r[1].d[0] = c.r[3].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0025C030; } }
    set32(c.r[4], c.r[4].w[0] << (c.r[16].w[0] & 31u));
    c.r[3].d[0] = c.r[18].d[0] & c.r[4].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025C030; } }
    c.r[18].d[0] = c.r[18].d[0] | c.r[4].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C02Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 4u, depth + 1u); else { c.pc = 0x0025C060u; return; } if (c.pc != 0x0025C02Cu) [[unlikely]] return; }
L_0025C02C:
    c.budget -= 1;
L_0025C030:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025BFF0u | kUnwind; return; } [[clang::musttail]] return unit_0056(c, 335u, depth); } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0025C060:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 15680u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0025C000u < 16384u) { entry = entries_0057[(t - 0x0025C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0025C080:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 747u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 275u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 769u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 803u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 796u), static_cast<std::uint8_t>(0u));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C0C0u); st8((c.r[4].w[0] + 771u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003A(c, 60u, depth + 1u); else { c.pc = 0x001E9450u; return; } if (c.pc != 0x0025C0C0u) [[unlikely]] return; }
L_0025C0C0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[8], c.r[8].w[0] + 18288u);
    set32(c.r[2], c.r[2].w[0] + 12304u);
    set32(c.r[5], c.r[5].w[0] + 16272u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[16].w[0] + 8524u), c.r[3].w[0]);
    c.r[9].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8659u)));
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[8], ld32((c.r[8].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[16].w[0] + 8520u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    st8((c.r[16].w[0] + 271u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[8].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8680u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8659u)));
    set32(c.r[8], c.r[8].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C150u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x0025C150u) [[unlikely]] return; }
L_0025C150:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C158u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 130u, depth + 1u); else { c.pc = 0x0021DDA0u; return; } if (c.pc != 0x0025C158u) [[unlikely]] return; }
L_0025C158:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8680u)));
    set32(c.r[3], c.r[3].w[0] + 17168u);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025C198; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8659u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8664u), c.r[2].w[0]);  if (t) { goto L_0025C1A0; } }
L_0025C198:
    st32((c.r[16].w[0] + 8664u), 0u);
    c.budget -= 2;
L_0025C1A0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], c.r[2].w[0] - 3728u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 8668u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8663u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025C1E0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 321u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025C1E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 750u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0025C220; } }
L_0025C1E0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 39u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0025C1F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 750u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0025C220; } }
L_0025C1F8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0025C218; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C210u);  if (depth < kMaxDepth) unit_0071(c, 57u, depth + 1u); else { c.pc = 0x002C4EA0u; return; } if (c.pc != 0x0025C210u) [[unlikely]] return; }
L_0025C210:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 750u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0025C220; } }
L_0025C218:
    st8((c.r[16].w[0] + 750u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0025C220:
    set32(c.r[2], ld32((c.r[16].w[0] + 1608u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 109u)));
    st8((c.r[16].w[0] + 8681u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 1608u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 110u)));
    st8((c.r[16].w[0] + 8682u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8661u)));
    st8((c.r[16].w[0] + 515u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 1608u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 100u)));
    st16((c.r[16].w[0] + 834u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 832u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 1608u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 102u)));
    st16((c.r[16].w[0] + 836u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 1608u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 104u)));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C270u); st8((c.r[16].w[0] + 502u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 135u, depth + 1u); else { c.pc = 0x002A9EB0u; return; } if (c.pc != 0x0025C270u) [[unlikely]] return; }
L_0025C270:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = 0ull | 62464ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 268u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8663u)));
    st8((c.r[16].w[0] + 269u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    st8((c.r[16].w[0] + 270u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[16].w[0] + 264u), c.r[16].w[0]);
    st16((c.r[16].w[0] + 562u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C2A4u); st16((c.r[16].w[0] + 566u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0036(c, 145u, depth + 1u); else { c.pc = 0x001DB830u; return; } if (c.pc != 0x0025C2A4u) [[unlikely]] return; }
L_0025C2A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C2ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 148u, depth + 1u); else { c.pc = 0x001DB900u; return; } if (c.pc != 0x0025C2ACu) [[unlikely]] return; }
L_0025C2AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C2B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 270u, depth + 1u); else { c.pc = 0x001F3570u; return; } if (c.pc != 0x0025C2B4u) [[unlikely]] return; }
L_0025C2B4:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 8864u);
    c.budget -= 5;
L_0025C2C8:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0025C2E8; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025C2C8u | kUnwind; return; } goto L_0025C2C8; } }
    c.budget -= 1;
L_0025C2E8:
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_0025C520; } }
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 18496u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0025C000u < 16384u) { entry = entries_0057[(t - 0x0025C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0025C310:
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 4064u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + 14336u);
    st32((c.r[16].w[0] + 1612u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 1616u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1620u), c.r[2].w[0]);  if (t) { goto L_0025C520; } }
L_0025C368:
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 3840u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + 14560u);
    st32((c.r[16].w[0] + 1612u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 1616u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1620u), c.r[2].w[0]);  if (t) { goto L_0025C520; } }
L_0025C3C0:
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 3616u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + 14784u);
    st32((c.r[16].w[0] + 1612u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 1616u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1620u), c.r[2].w[0]);  if (t) { goto L_0025C520; } }
L_0025C418:
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 3392u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + 15008u);
    st32((c.r[16].w[0] + 1612u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 1616u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1620u), c.r[2].w[0]);  if (t) { goto L_0025C520; } }
L_0025C470:
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 3168u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + 15232u);
    st32((c.r[16].w[0] + 1612u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 1616u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1620u), c.r[2].w[0]);  if (t) { goto L_0025C520; } }
L_0025C4C8:
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 2944u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + 15456u);
    st32((c.r[16].w[0] + 1612u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 1616u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[16].w[0] + 1620u), c.r[2].w[0]);
    c.budget -= 22;
L_0025C520:
    set32(c.r[2], ld32((c.r[16].w[0] + 1612u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C530u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025C530u) [[unlikely]] return; }
L_0025C530:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C538u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 24u, depth + 1u); else { c.pc = 0x0025C560u; return; } if (c.pc != 0x0025C538u) [[unlikely]] return; }
L_0025C538:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C548u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x0025C548u) [[unlikely]] return; }
L_0025C548:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025C560:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 15696u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[3] = ld32((c.r[4].w[0] + 128u));
    c.f[2] = ld32((c.r[4].w[0] + 132u));
    c.f[1] = ld32((c.r[4].w[0] + 136u));
    c.f[0] = ld32((c.r[4].w[0] + 140u));
    st32((c.r[4].w[0] + 144u), c.f[3]);
    st32((c.r[4].w[0] + 148u), c.f[2]);
    st32((c.r[4].w[0] + 152u), c.f[1]);
    st32((c.r[4].w[0] + 156u), c.f[0]);
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    st32((c.r[4].w[0] + 128u), c.f[3]);
    st32((c.r[4].w[0] + 132u), c.f[2]);
    st32((c.r[4].w[0] + 136u), c.f[1]);
    st32((c.r[4].w[0] + 140u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    st32((c.r[4].w[0] + 1272u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 84u)));
    st32((c.r[4].w[0] + 1276u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    st32((c.r[4].w[0] + 1280u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8328u)));
    st32((c.r[4].w[0] + 8568u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8332u)));
    st32((c.r[4].w[0] + 8572u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8264u));
    st32((c.r[4].w[0] + 8272u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8304u));
    st32((c.r[4].w[0] + 8312u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8268u));
    st32((c.r[4].w[0] + 8276u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8308u));
    st32((c.r[4].w[0] + 8316u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 45;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C614u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025C614u) [[unlikely]] return; }
L_0025C614:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C61Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 143u, depth + 1u); else { c.pc = 0x00269870u; return; } if (c.pc != 0x0025C61Cu) [[unlikely]] return; }
L_0025C61C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C624u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 55u, depth + 1u); else { c.pc = 0x001DC4B0u; return; } if (c.pc != 0x0025C624u) [[unlikely]] return; }
L_0025C624:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C62Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 171u, depth + 1u); else { c.pc = 0x001DBCC0u; return; } if (c.pc != 0x0025C62Cu) [[unlikely]] return; }
L_0025C62C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C634u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 352u, depth + 1u); else { c.pc = 0x001BB820u; return; } if (c.pc != 0x0025C634u) [[unlikely]] return; }
L_0025C634:
    set32(c.r[3], ld32((c.r[16].w[0] + 1608u)));
    set32(c.r[2], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 124u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025C650; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C650u);  if (depth < kMaxDepth) unit_0039(c, 176u, depth + 1u); else { c.pc = 0x001E6BB0u; return; } if (c.pc != 0x0025C650u) [[unlikely]] return; }
L_0025C650:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C658u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 466u, depth + 1u); else { c.pc = 0x001C5810u; return; } if (c.pc != 0x0025C658u) [[unlikely]] return; }
L_0025C658:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 769u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0025C668; } }
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0025C668:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025C680:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 796u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    st8((c.r[4].w[0] + 796u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 803u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C6BCu); st8((c.r[4].w[0] + 803u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0025C6BCu) [[unlikely]] return; }
L_0025C6BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C6C4u); set32(c.r[4], c.r[16].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0025C6C4u) [[unlikely]] return; }
L_0025C6C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C6CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 123u, depth + 1u); else { c.pc = 0x0025D7B0u; return; } if (c.pc != 0x0025C6CCu) [[unlikely]] return; }
L_0025C6CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C6D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 130u, depth + 1u); else { c.pc = 0x0025D960u; return; } if (c.pc != 0x0025C6D4u) [[unlikely]] return; }
L_0025C6D4:
    set32(c.r[2], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    st8((c.r[16].w[0] + 747u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] + 17216u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 15u);
    st32((c.r[16].w[0] + 80u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 88u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 168u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 503u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 520u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 523u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 556u), static_cast<std::uint16_t>(0u));
    c.budget -= 19;
L_0025C720:
    st16((c.r[4].w[0] + 524u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 526u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], c.r[5].w[0] + 8u);
    st16((c.r[4].w[0] + 528u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = c.r[5].sd[0] < 16ll ? 1ull : 0ull;
    st16((c.r[4].w[0] + 530u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 532u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 534u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 536u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 538u), static_cast<std::uint16_t>(0u));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025C720u | kUnwind; return; } goto L_0025C720; } }
    st32((c.r[16].w[0] + 672u), 0u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 558u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[16].w[0] + 560u), static_cast<std::uint16_t>(0u));
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0] + 559u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 564u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 517u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 570u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    st8((c.r[16].w[0] + 268u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8663u)));
    st8((c.r[16].w[0] + 269u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    st8((c.r[16].w[0] + 270u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 264u), c.r[16].w[0]);
    st8((c.r[16].w[0] + 744u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 767u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 757u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 838u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 816u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 814u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 820u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 704u), 0u);
    st32((c.r[16].w[0] + 708u), 0u);
    st32((c.r[16].w[0] + 1256u), 0u);
    st8((c.r[16].w[0] + 811u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 797u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 800u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 808u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 765u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 791u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 790u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 789u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 777u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 801u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 773u), static_cast<std::uint8_t>(0u));
    c.budget -= 44;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C800u); st8((c.r[16].w[0] + 775u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0039(c, 251u, depth + 1u); else { c.pc = 0x001E7BE0u; return; } if (c.pc != 0x0025C800u) [[unlikely]] return; }
L_0025C800:
    st8((c.r[16].w[0] + 849u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 255u);
    st32((c.r[16].w[0] + 1264u), 0u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 1260u), 0u);
    st32((c.r[16].w[0] + 100u), 0u);
    st32((c.r[16].w[0] + 92u), 0u);
    st8((c.r[16].w[0] + 778u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 8412u), 0u);
    st32((c.r[16].w[0] + 8408u), 0u);
    st32((c.r[16].w[0] + 8404u), 0u);
    st32((c.r[16].w[0] + 8400u), 0u);
    st32((c.r[16].w[0] + 8420u), 0u);
    st32((c.r[16].w[0] + 8416u), 0u);
    st32((c.r[16].w[0] + 8428u), 0u);
    st32((c.r[16].w[0] + 8424u), 0u);
    st32((c.r[16].w[0] + 8332u), 0u);
    st32((c.r[16].w[0] + 8328u), 0u);
    st32((c.r[16].w[0] + 8436u), 0u);
    st32((c.r[16].w[0] + 8432u), 0u);
    st32((c.r[16].w[0] + 8472u), 0u);
    st32((c.r[16].w[0] + 8468u), 0u);
    st32((c.r[16].w[0] + 8464u), 0u);
    st32((c.r[16].w[0] + 8456u), 0u);
    st32((c.r[16].w[0] + 8452u), 0u);
    st32((c.r[16].w[0] + 8448u), 0u);
    st8((c.r[16].w[0] + 8567u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 8566u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 860u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 764u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 1488u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 1608u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 76u)));
    st32((c.r[16].w[0] + 1236u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 8563u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 8562u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 953u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 952u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 1608u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 124u)));
    c.budget -= 42;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025C8B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C8B0u);  if (depth < kMaxDepth) unit_0039(c, 176u, depth + 1u); else { c.pc = 0x001E6BB0u; return; } if (c.pc != 0x0025C8B0u) [[unlikely]] return; }
L_0025C8B0:
    st8((c.r[16].w[0] + 1626u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1627u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C8C4u); st8((c.r[16].w[0] + 1625u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0036(c, 144u, depth + 1u); else { c.pc = 0x001DB7F0u; return; } if (c.pc != 0x0025C8C4u) [[unlikely]] return; }
L_0025C8C4:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C8DCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x0025C8DCu) [[unlikely]] return; }
L_0025C8DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C8E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 139u, depth + 1u); else { c.pc = 0x001DCFF0u; return; } if (c.pc != 0x0025C8E4u) [[unlikely]] return; }
L_0025C8E4:
    set32(c.r[17], c.r[16].w[0] + 8624u);
    set32(c.r[4], c.r[16].w[0] + 1392u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C8F4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0025C8F4u) [[unlikely]] return; }
L_0025C8F4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C900u); set32(c.r[4], c.r[16].w[0] + 1408u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0025C900u) [[unlikely]] return; }
L_0025C900:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[4], c.r[16].w[0] + 1440u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C914u); set32(c.r[5], c.r[16].w[0] + 1392u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0025C914u) [[unlikely]] return; }
L_0025C914:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C924u); st32((c.r[16].w[0] + 1088u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0039(c, 117u, depth + 1u); else { c.pc = 0x001E56A0u; return; } if (c.pc != 0x0025C924u) [[unlikely]] return; }
L_0025C924:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C92Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 364u, depth + 1u); else { c.pc = 0x001E38C0u; return; } if (c.pc != 0x0025C92Cu) [[unlikely]] return; }
L_0025C92C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025C948; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8687u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025C950; } }
    c.budget -= 1;
L_0025C948:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C950u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 11u, depth + 1u); else { c.pc = 0x001946A0u; return; } if (c.pc != 0x0025C950u) [[unlikely]] return; }
L_0025C950:
    set32(c.r[2], ld32((c.r[16].w[0] + 1612u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C960u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025C960u) [[unlikely]] return; }
L_0025C960:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0025C980:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 20u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0025C9C0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 516u));
    set32(c.r[2], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0025C9B0; } }
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0025C9B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C9B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 364u, depth + 1u); else { c.pc = 0x001E38C0u; return; } if (c.pc != 0x0025C9B8u) [[unlikely]] return; }
L_0025C9B8:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 798u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0025C9C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[16].w[0] + 1088u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C9D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 150u, depth + 1u); else { c.pc = 0x0025DD10u; return; } if (c.pc != 0x0025C9D0u) [[unlikely]] return; }
L_0025C9D0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025C9F0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 877u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025C9F8; } }
    c.budget -= 1;
L_0025C9F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025C9F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 368u, depth + 1u); else { c.pc = 0x001E3960u; return; } if (c.pc != 0x0025C9F8u) [[unlikely]] return; }
L_0025C9F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CA00u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 90u, depth + 1u); else { c.pc = 0x0025D160u; return; } if (c.pc != 0x0025CA00u) [[unlikely]] return; }
L_0025CA00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CA08u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 117u, depth + 1u); else { c.pc = 0x001E56A0u; return; } if (c.pc != 0x0025CA08u) [[unlikely]] return; }
L_0025CA08:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025CA38; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 877u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025CA38; } }
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CA34u); st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0038(c, 364u, depth + 1u); else { c.pc = 0x001E38C0u; return; } if (c.pc != 0x0025CA34u) [[unlikely]] return; }
L_0025CA34:
    c.budget -= 1;
L_0025CA38:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_0025CA78; } }
    set32(c.r[2], 0u + 255u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 516u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0025CA68; } }
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0025CA68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CA70u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 364u, depth + 1u); else { c.pc = 0x001E38C0u; return; } if (c.pc != 0x0025CA70u) [[unlikely]] return; }
L_0025CA70:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 798u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0025CA78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025CA90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CAA4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 62u, depth + 1u); else { c.pc = 0x001E9AF0u; return; } if (c.pc != 0x0025CAA4u) [[unlikely]] return; }
L_0025CAA4:
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 747u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 796u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[16].w[0] + 796u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 803u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 1088u), c.r[2].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CAE4u); st8((c.r[16].w[0] + 798u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0039(c, 117u, depth + 1u); else { c.pc = 0x001E56A0u; return; } if (c.pc != 0x0025CAE4u) [[unlikely]] return; }
L_0025CAE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CAECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x0025CAECu) [[unlikely]] return; }
L_0025CAEC:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_0025CB28; } }
    set32(c.r[2], 0u + 255u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 516u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0025CB18; } }
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0025CB18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CB20u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 364u, depth + 1u); else { c.pc = 0x001E38C0u; return; } if (c.pc != 0x0025CB20u) [[unlikely]] return; }
L_0025CB20:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 798u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0025CB28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025CB40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 20u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0025CB80; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 516u));
    set32(c.r[2], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0025CB70; } }
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0025CB70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CB78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 364u, depth + 1u); else { c.pc = 0x001E38C0u; return; } if (c.pc != 0x0025CB78u) [[unlikely]] return; }
L_0025CB78:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 798u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0025CB80:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025CB98; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8687u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025CBA0; } }
L_0025CB98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CBA0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 94u, depth + 1u); else { c.pc = 0x002490F0u; return; } if (c.pc != 0x0025CBA0u) [[unlikely]] return; }
L_0025CBA0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 797u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025CBB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CBB4u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0025E2F0u; return; } if (c.pc != 0x0025CBB4u) [[unlikely]] return; }
L_0025CBB4:
    c.budget -= 1;
L_0025CBB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CBC0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 368u, depth + 1u); else { c.pc = 0x001E3960u; return; } if (c.pc != 0x0025CBC0u) [[unlikely]] return; }
L_0025CBC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CBC8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 90u, depth + 1u); else { c.pc = 0x0025D160u; return; } if (c.pc != 0x0025CBC8u) [[unlikely]] return; }
L_0025CBC8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_0025CC08; } }
    set32(c.r[2], 0u + 255u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 516u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0025CBF8; } }
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0025CBF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CC00u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 364u, depth + 1u); else { c.pc = 0x001E38C0u; return; } if (c.pc != 0x0025CC00u) [[unlikely]] return; }
L_0025CC00:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 798u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0025CC08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025CC20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 21u)));
    c.r[1].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0025CC58; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 275u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025CD48; } }
    c.budget -= 1;
L_0025CC58:
    c.r[2].d[0] = c.r[4].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025CD40; } }
    st8((c.r[17].w[0] + 275u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 769u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025CD40; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[3].w[0] + 29024u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 51u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 41u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 7);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_0025CCD0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 82u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8656u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0025CD40; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0025CD40; } }
    st8((c.r[17].w[0] + 838u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 769u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0025CD40; } }
L_0025CCD0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 82u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8661u)));
    set32(c.r[2], c.r[2].w[0] - 19195u);
    c.budget -= 4;
L_0025CCE0:
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 9);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0025CD30; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8656u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[4], c.r[16].w[0] + 16u);  if (t) { goto L_0025CD40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CD10u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x0025CD10u) [[unlikely]] return; }
L_0025CD10:
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0025CD40; } }
L_0025CD30:
    st8((c.r[17].w[0] + 838u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 769u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0025CD40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CD48u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 90u, depth + 1u); else { c.pc = 0x0025D160u; return; } if (c.pc != 0x0025CD48u) [[unlikely]] return; }
L_0025CD48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0025CD60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 20u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0025CDD8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 21u)));
    c.r[2].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] << 56;  if (t) { goto L_0025CDD8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8661u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0025CDD8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 27u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025CDD8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0025CDD8; } }
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CDCCu); st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0057(c, 82u, depth + 1u); else { c.pc = 0x0025CEC0u; return; } if (c.pc != 0x0025CDCCu) [[unlikely]] return; }
L_0025CDCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025CEB0; } }
    c.budget -= 1;
L_0025CDD8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[3] = ld32((c.r[16].w[0] + 128u));
    c.f[2] = ld32((c.r[16].w[0] + 132u));
    c.f[1] = ld32((c.r[16].w[0] + 136u));
    c.f[0] = ld32((c.r[16].w[0] + 140u));
    st32((c.r[16].w[0] + 144u), c.f[3]);
    st32((c.r[16].w[0] + 148u), c.f[2]);
    st32((c.r[16].w[0] + 152u), c.f[1]);
    st32((c.r[16].w[0] + 156u), c.f[0]);
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    st32((c.r[16].w[0] + 128u), c.f[3]);
    st32((c.r[16].w[0] + 132u), c.f[2]);
    st32((c.r[16].w[0] + 136u), c.f[1]);
    st32((c.r[16].w[0] + 140u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    st32((c.r[16].w[0] + 1272u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    st32((c.r[16].w[0] + 1276u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    st32((c.r[16].w[0] + 1280u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8328u)));
    st32((c.r[16].w[0] + 8568u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8332u)));
    st32((c.r[16].w[0] + 8572u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8264u));
    st32((c.r[16].w[0] + 8272u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8304u));
    st32((c.r[16].w[0] + 8312u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8268u));
    st32((c.r[16].w[0] + 8276u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8308u));
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CE68u); st32((c.r[16].w[0] + 8316u), c.f[0]);  if (depth < kMaxDepth) unit_0057(c, 63u, depth + 1u); else { c.pc = 0x0025CB40u; return; } if (c.pc != 0x0025CE68u) [[unlikely]] return; }
L_0025CE68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CE70u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 55u, depth + 1u); else { c.pc = 0x001DC4B0u; return; } if (c.pc != 0x0025CE70u) [[unlikely]] return; }
L_0025CE70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CE78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 171u, depth + 1u); else { c.pc = 0x001DBCC0u; return; } if (c.pc != 0x0025CE78u) [[unlikely]] return; }
L_0025CE78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CE80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 352u, depth + 1u); else { c.pc = 0x001BB820u; return; } if (c.pc != 0x0025CE80u) [[unlikely]] return; }
L_0025CE80:
    set32(c.r[3], ld32((c.r[16].w[0] + 1608u)));
    set32(c.r[2], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 124u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025CEA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CE9Cu);  if (depth < kMaxDepth) unit_0039(c, 176u, depth + 1u); else { c.pc = 0x001E6BB0u; return; } if (c.pc != 0x0025CE9Cu) [[unlikely]] return; }
L_0025CE9C:
    c.budget -= 1;
L_0025CEA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CEA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 466u, depth + 1u); else { c.pc = 0x001C5810u; return; } if (c.pc != 0x0025CEA8u) [[unlikely]] return; }
L_0025CEA8:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0025CEB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025CEC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[28].w[0] - 23788u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 20u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025CF28; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 21u)));
    c.r[3].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].d[0] << 56;  if (t) { goto L_0025CF20; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8661u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0025CF20; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 27u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025CF20; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025CF28; } }
    c.budget -= 1;
L_0025CF20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025D148; } }
L_0025CF28:
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 39u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025D128; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025CFB0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 321u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025CFB0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 513u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025CF78; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 515u));
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 38u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 38u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0025CF90; } }
L_0025CF78:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 515u));
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 274u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[3].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_0025CF90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CF98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x0025CF98u) [[unlikely]] return; }
L_0025CF98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CFA0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 42u, depth + 1u); else { c.pc = 0x001C8A60u; return; } if (c.pc != 0x0025CFA0u) [[unlikely]] return; }
L_0025CFA0:
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0025D148; } }
L_0025CFB0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 76u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0025CFF8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 243u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025D148; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025CFD4u);  if (depth < kMaxDepth) unit_0071(c, 51u, depth + 1u); else { c.pc = 0x002C4CA0u; return; } if (c.pc != 0x0025CFD4u) [[unlikely]] return; }
L_0025CFD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0025D010; } }
    set32(c.r[3], 0u - 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 747u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 877u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0025D010; } }
    c.budget -= 1;
L_0025CFF8:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u - 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 747u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 877u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_0025D010:
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 41u)));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[8], 0u - 1u);  if (t) { goto L_0025D030; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 42u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025D060; } }
    c.budget -= 1;
L_0025D030:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 82u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0025D050; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0025D078; } }
L_0025D050:
    c.r[8].d[0] = c.r[4].d[0] << 56;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);  if (t) { goto L_0025D078; } }
    c.budget -= 1;
L_0025D060:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 82u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0025D078; } }
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_0025D078:
    c.r[1].d[0] = c.r[8].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0025D148; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[8].w[0] + c.r[5].w[0]);  if (t) { goto L_0025D148; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025D0D0; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_0025D0B8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 42u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0025D0B8; } }
    st8((c.r[4].w[0] + 80u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0025D0B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D0C4u); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x0025D0C4u) [[unlikely]] return; }
L_0025D0C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025D148; } }
    c.budget -= 1;
L_0025D0D0:
    set32(c.r[3], ld32((c.r[6].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] & 7ull;
    c.r[3].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025D148; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_0025D148; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 42u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025D148; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8661u)));
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 72u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025D148; } }
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[5].w[0] + 84u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D120u); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_004E(c, 174u, depth + 1u); else { c.pc = 0x0023A5C0u; return; } if (c.pc != 0x0025D120u) [[unlikely]] return; }
L_0025D120:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025D148; } }
L_0025D128:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D130u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x0025D130u) [[unlikely]] return; }
L_0025D130:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D138u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 42u, depth + 1u); else { c.pc = 0x001C8A60u; return; } if (c.pc != 0x0025D138u) [[unlikely]] return; }
L_0025D138:
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u - 1u);
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0025D148:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025D160:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 275u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0025D2C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D180u);  if (depth < kMaxDepth) unit_0039(c, 148u, depth + 1u); else { c.pc = 0x001E5E00u; return; } if (c.pc != 0x0025D180u) [[unlikely]] return; }
L_0025D180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D188u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 104u, depth + 1u); else { c.pc = 0x0025D2D0u; return; } if (c.pc != 0x0025D188u) [[unlikely]] return; }
L_0025D188:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D190u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 237u, depth + 1u); else { c.pc = 0x0025EA60u; return; } if (c.pc != 0x0025D190u) [[unlikely]] return; }
L_0025D190:
    set32(c.r[2], ld32((c.r[16].w[0] + 1612u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D1A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025D1A0u) [[unlikely]] return; }
L_0025D1A0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 821u)));
    c.r[1].d[0] = c.r[2].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[2].w[0] << 2);  if (t) { goto L_0025D1D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 17136u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D1C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025D1C8u) [[unlikely]] return; }
L_0025D1C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025D1E8; } }
L_0025D1D0:
    set32(c.r[3], ld32((c.r[16].w[0] + 1620u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] - 192u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D1E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025D1E8u) [[unlikely]] return; }
L_0025D1E8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 820u)));
    set32(c.r[2], 0u - 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[1].d[0] = c.r[3].sd[0] < 48ll ? 1ull : 0ull;  if (t) { goto L_0025D238; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0025D220; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 16944u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D218u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025D218u) [[unlikely]] return; }
L_0025D218:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025D238; } }
L_0025D220:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[16].w[0] + 1616u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] - 192u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D238u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025D238u) [[unlikely]] return; }
L_0025D238:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 812u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025D290; } }
    st8((c.r[16].w[0] + 812u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 821u)));
    c.r[1].d[0] = c.r[2].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[2].w[0] << 2);  if (t) { goto L_0025D278; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 17136u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D270u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025D270u) [[unlikely]] return; }
L_0025D270:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025D290; } }
L_0025D278:
    set32(c.r[3], ld32((c.r[16].w[0] + 1620u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] - 192u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D290u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025D290u) [[unlikely]] return; }
L_0025D290:
    set32(c.r[2], ld32((c.r[16].w[0] + 1612u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D2A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025D2A0u) [[unlikely]] return; }
L_0025D2A0:
    set32(c.r[2], ld32((c.r[16].w[0] + 1608u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 125u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025D2B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D2B8u);  if (depth < kMaxDepth) unit_0039(c, 152u, depth + 1u); else { c.pc = 0x001E6520u; return; } if (c.pc != 0x0025D2B8u) [[unlikely]] return; }
L_0025D2B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D2C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 268u, depth + 1u); else { c.pc = 0x001EEDA0u; return; } if (c.pc != 0x0025D2C0u) [[unlikely]] return; }
L_0025D2C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025D2D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D2E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 123u, depth + 1u); else { c.pc = 0x001E5840u; return; } if (c.pc != 0x0025D2E4u) [[unlikely]] return; }
L_0025D2E4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 284u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025D3C8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 285u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025D360; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025D328; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    set32(c.r[2], 0u + 3u);
    c.r[3].d[0] = c.r[4].d[0] & 3ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[4].d[0] & 8192ull;  if (t) { goto L_0025D328; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025D360; } }
    c.budget -= 1;
L_0025D328:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025D350; } }
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D344u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 149u, depth + 1u); else { c.pc = 0x0023A0D0u; return; } if (c.pc != 0x0025D344u) [[unlikely]] return; }
L_0025D344:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025D360; } }
    c.budget -= 1;
L_0025D350:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D360u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 149u, depth + 1u); else { c.pc = 0x0023A0D0u; return; } if (c.pc != 0x0025D360u) [[unlikely]] return; }
L_0025D360:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 570u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025D408; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 284u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025D408; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025D3B0; } }
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D3A4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 153u, depth + 1u); else { c.pc = 0x0023A1C0u; return; } if (c.pc != 0x0025D3A4u) [[unlikely]] return; }
L_0025D3A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025D408; } }
    c.budget -= 1;
L_0025D3B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D3C0u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 153u, depth + 1u); else { c.pc = 0x0023A1C0u; return; } if (c.pc != 0x0025D3C0u) [[unlikely]] return; }
L_0025D3C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025D408; } }
L_0025D3C8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 285u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025D408; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025D3F8; } }
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D3F0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 153u, depth + 1u); else { c.pc = 0x0023A1C0u; return; } if (c.pc != 0x0025D3F0u) [[unlikely]] return; }
L_0025D3F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025D408; } }
L_0025D3F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D408u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 153u, depth + 1u); else { c.pc = 0x0023A1C0u; return; } if (c.pc != 0x0025D408u) [[unlikely]] return; }
L_0025D408:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 284u)));
    st8((c.r[16].w[0] + 285u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 850u));
    c.r[2].d[0] = c.r[3].d[0] & 15ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 240ull;  if (t) { goto L_0025D428; } }
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.budget -= 2;
L_0025D428:
    c.r[2].d[0] = c.r[3].d[0] & 240ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 15ull;  if (t) { goto L_0025D438; } }
    set32(c.r[3], c.r[2].w[0] + 16u);
    c.budget -= 1;
L_0025D438:
    st8((c.r[16].w[0] + 850u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 788u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025D450; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 788u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0025D450:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 792u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025D480; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 792u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025D480; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    set32(c.r[2], 0u - 4u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0025D480:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 522u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025D498; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 522u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0025D4A0; } }
L_0025D498:
    st16((c.r[16].w[0] + 520u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_0025D4A0:
    c.f[1] = ld32((c.r[16].w[0] + 1072u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0025D4C8; } }
    c.f[0] = ld32((c.r[16].w[0] + 8292u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 1072u), c.f[0]);
    c.budget -= 4;
L_0025D4C8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 830u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025D4F8; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 830u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025D4F8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 832u)));
    st16((c.r[16].w[0] + 834u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0025D4F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D500u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 260u, depth + 1u); else { c.pc = 0x003C6160u; return; } if (c.pc != 0x0025D500u) [[unlikely]] return; }
L_0025D500:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 877u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025D6B8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 797u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025D6B8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0025D6B8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025D6B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D540u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003B(c, 184u, depth + 1u); else { c.pc = 0x001EDF30u; return; } if (c.pc != 0x0025D540u) [[unlikely]] return; }
L_0025D540:
    st8((c.r[16].w[0] + 811u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 811u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025D6B8; } }
    c.f[1] = ld32((c.r[29].w[0] + 44u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0025D6B8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025D588; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1940u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0025D6B8; } }
L_0025D588:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 24576ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0025D5A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 797u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0025D5B0; } }
L_0025D5A0:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 797u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[16].w[0] + 1088u), c.r[2].w[0]);
    c.budget -= 4;
L_0025D5B0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 3ull;  if (t) { goto L_0025D5E8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025D5E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D5D0u);  if (depth < kMaxDepth) unit_003A(c, 95u, depth + 1u); else { c.pc = 0x001EA400u; return; } if (c.pc != 0x0025D5D0u) [[unlikely]] return; }
L_0025D5D0:
    set32(c.r[2], ld32((c.r[16].w[0] + 1612u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D5E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025D5E0u) [[unlikely]] return; }
L_0025D5E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025D618; } }
L_0025D5E8:
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025D618; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D600u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_003A(c, 78u, depth + 1u); else { c.pc = 0x001EA120u; return; } if (c.pc != 0x0025D600u) [[unlikely]] return; }
L_0025D600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D608u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 70u, depth + 1u); else { c.pc = 0x001EA000u; return; } if (c.pc != 0x0025D608u) [[unlikely]] return; }
L_0025D608:
    set32(c.r[2], ld32((c.r[16].w[0] + 1612u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D618u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025D618u) [[unlikely]] return; }
L_0025D618:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025D640; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 792u));
    c.r[1].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 10u);  if (t) { goto L_0025D640; } }
    st8((c.r[16].w[0] + 792u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0025D640:
    st8((c.r[16].w[0] + 775u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 874u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 875u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 798u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D660u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 67u, depth + 1u); else { c.pc = 0x001E9BA0u; return; } if (c.pc != 0x0025D660u) [[unlikely]] return; }
L_0025D660:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0025D6B8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 82u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0025D6B8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 515u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 72u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0025D6A0; } }
    st8((c.r[3].w[0] + 84u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0025D6A0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025D6B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D6B8u); set32(c.r[5], 0u + 18u);  if (depth < kMaxDepth) unit_004E(c, 174u, depth + 1u); else { c.pc = 0x0023A5C0u; return; } if (c.pc != 0x0025D6B8u) [[unlikely]] return; }
L_0025D6B8:
    c.f[2] = ld32((c.r[16].w[0] + 1088u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0025D6F8; } }
    c.f[0] = ld32((c.r[16].w[0] + 8292u));
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1088u), c.f[0]);  if (t) { goto L_0025D6F0; } }
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1088u), c.f[1]);  if (t) { goto L_0025D6F8; } }
L_0025D6F0:
    set32(c.r[2], 0u + 128u);
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0025D6F8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025D770; } }
    c.f[2] = ld32((c.r[16].w[0] + 1216u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0025D740; } }
    c.f[0] = ld32((c.r[16].w[0] + 8292u));
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (t) { goto L_0025D740; } }
    st32((c.r[16].w[0] + 1216u), c.f[1]);
    st8((c.r[16].w[0] + 808u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_0025D740:
    c.f[2] = ld32((c.r[16].w[0] + 1220u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0025D770; } }
    c.f[0] = ld32((c.r[16].w[0] + 8292u));
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1220u), c.f[0]);  if (t) { goto L_0025D770; } }
    st32((c.r[16].w[0] + 1220u), c.f[1]);
    c.budget -= 1;
L_0025D770:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 766u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025D788; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 766u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0025D788:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D794u); st8((c.r[16].w[0] + 8688u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_003C(c, 82u, depth + 1u); else { c.pc = 0x001F0930u; return; } if (c.pc != 0x0025D794u) [[unlikely]] return; }
L_0025D794:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D79Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 52u, depth + 1u); else { c.pc = 0x003B0670u; return; } if (c.pc != 0x0025D79Cu) [[unlikely]] return; }
L_0025D79C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0025D7B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1608u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 100u)));
    st16((c.r[4].w[0] + 834u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[4].w[0] + 832u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 1608u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 102u)));
    st16((c.r[4].w[0] + 836u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 1608u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 104u)));
    st8((c.r[4].w[0] + 502u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 1608u)));
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    st32((c.r[4].w[0] + 8532u), c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1608u)));
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    st32((c.r[4].w[0] + 8536u), c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1608u)));
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    st32((c.r[4].w[0] + 8540u), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 39u)));
    c.budget -= 26;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0025D868; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0025D850; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025D840; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8685u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025D850; } }
L_0025D840:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8686u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025D868; } }
    c.budget -= 1;
L_0025D850:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D858u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 145u, depth + 1u); else { c.pc = 0x001F14B0u; return; } if (c.pc != 0x0025D858u) [[unlikely]] return; }
L_0025D858:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st16((c.r[16].w[0] + 500u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 498u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 496u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0025D868:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D870u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 252u, depth + 1u); else { c.pc = 0x003C6020u; return; } if (c.pc != 0x0025D870u) [[unlikely]] return; }
L_0025D870:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8928u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0025D8B0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D894u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_00B1(c, 273u, depth + 1u); else { c.pc = 0x003C6490u; return; } if (c.pc != 0x0025D894u) [[unlikely]] return; }
L_0025D894:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D8A4u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_00B1(c, 273u, depth + 1u); else { c.pc = 0x003C6490u; return; } if (c.pc != 0x0025D8A4u) [[unlikely]] return; }
L_0025D8A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025D8E0; } }
    c.budget -= 1;
L_0025D8B0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0025D8E0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D8CCu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00B1(c, 273u, depth + 1u); else { c.pc = 0x003C6490u; return; } if (c.pc != 0x0025D8CCu) [[unlikely]] return; }
L_0025D8CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D8DCu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00B1(c, 273u, depth + 1u); else { c.pc = 0x003C6490u; return; } if (c.pc != 0x0025D8DCu) [[unlikely]] return; }
L_0025D8DC:
    c.budget -= 1;
L_0025D8E0:
    set32(c.r[3], ld32((c.r[16].w[0] + 1608u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[6], c.r[6].w[0] - 14800u);
    c.f[0] = ld32((c.r[3].w[0] + 68u));
    st32((c.r[16].w[0] + 256u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 1608u)));
    c.f[0] = ld32((c.r[3].w[0] + 72u));
    st32((c.r[16].w[0] + 260u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8659u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[16].w[0] + 1600u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8659u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[16].w[0] + 1604u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 30;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025D960:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D978u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 67u, depth + 1u); else { c.pc = 0x001E9BA0u; return; } if (c.pc != 0x0025D978u) [[unlikely]] return; }
L_0025D978:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 798u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0025D9A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D99Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0071(c, 20u, depth + 1u); else { c.pc = 0x002C4480u; return; } if (c.pc != 0x0025D99Cu) [[unlikely]] return; }
L_0025D99C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025DA18; } }
    c.budget -= 1;
L_0025D9A8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 39u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025DA18; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025D9E0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 321u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025D9E0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8685u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025DA18; } }
    c.budget -= 1;
L_0025D9E0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 810u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0025DA10; } }
    st8((c.r[16].w[0] + 810u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025D9F8u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));  if (depth < kMaxDepth) unit_004D(c, 275u, depth + 1u); else { c.pc = 0x00237990u; return; } if (c.pc != 0x0025D9F8u) [[unlikely]] return; }
L_0025D9F8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DA04u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 211u, depth + 1u); else { c.pc = 0x001CAB20u; return; } if (c.pc != 0x0025DA04u) [[unlikely]] return; }
L_0025DA04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 84u), 0u);  if (t) { goto L_0025DA18; } }
    c.budget -= 1;
L_0025DA10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DA18u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 139u, depth + 1u); else { c.pc = 0x0025DAB0u; return; } if (c.pc != 0x0025DA18u) [[unlikely]] return; }
L_0025DA18:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 876u)));
    set32(c.r[2], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0025DA58; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30368u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DA40u); set32(c.r[5], c.r[3].w[0] + 656u);  if (depth < kMaxDepth) unit_005A(c, 156u, depth + 1u); else { c.pc = 0x002699E0u; return; } if (c.pc != 0x0025DA40u) [[unlikely]] return; }
L_0025DA40:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DA4Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 228u, depth + 1u); else { c.pc = 0x00137440u; return; } if (c.pc != 0x0025DA4Cu) [[unlikely]] return; }
L_0025DA4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025DA68; } }
    c.budget -= 1;
L_0025DA58:
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DA64u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 195u, depth + 1u); else { c.pc = 0x00269F40u; return; } if (c.pc != 0x0025DA64u) [[unlikely]] return; }
L_0025DA64:
    c.budget -= 1;
L_0025DA68:
    st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 871u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 866u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 868u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 877u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 1016u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025DAB0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[7], 0u + 32767u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[8].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[9], c.r[9].w[0] - 27856u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 14;
L_0025DAE8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025DB30; } }
    c.r[5].d[0] = ld8((c.r[19].w[0] + 515u));
    c.r[3].d[0] = ld8((c.r[9].w[0] + 515u));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0025DB30; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[9].d[0];  if (t) { goto L_0025DB30; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 498u)));
    c.r[3].d[0] = c.r[7].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025DB30; } }
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.r[18].d[0] = c.r[9].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
L_0025DB30:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025DAE8u | kUnwind; return; } goto L_0025DAE8; } }
    c.r[16].d[0] = c.r[6].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0025DC48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DB58u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0025DB58u) [[unlikely]] return; }
L_0025DB58:
    c.r[3].d[0] = c.r[2].d[0] & 7ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[17].d[0] = c.r[3].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_0025DB90; } }
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[2].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.r[2].d[0] = c.r[17].d[0] & 7ull;
    c.r[17].d[0] = c.r[2].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 7;
L_0025DB90:
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[6], c.r[18].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DBA4u); set32(c.r[5], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0025DBA4u) [[unlikely]] return; }
L_0025DBA4:
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.f[1] = ld32((c.r[29].w[0] + 88u));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DBB8u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0025DBB8u) [[unlikely]] return; }
L_0025DBB8:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DBC8u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0025DBC8u) [[unlikely]] return; }
L_0025DBC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43AF0000u);
    c.f[1] = c.r[2].w[0];
    st32((c.r[29].w[0] + 96u), 0u);
    st32((c.r[29].w[0] + 100u), 0u);
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[2], c.r[2].w[0] + 29024u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8656u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DC18u); set32(c.r[4], c.r[2].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0025DC18u) [[unlikely]] return; }
L_0025DC18:
    c.r[2].d[0] = c.r[17].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 13);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DC2Cu); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x0025DC2Cu) [[unlikely]] return; }
L_0025DC2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DC34u); set32(c.r[4], 0u + 5120u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x0025DC34u) [[unlikely]] return; }
L_0025DC34:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DC40u); set32(c.r[5], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0025DC40u) [[unlikely]] return; }
L_0025DC40:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 2;
L_0025DC48:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0025DCE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DC58u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0025DC58u) [[unlikely]] return; }
L_0025DC58:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[4].d[0] = c.r[2].d[0] & 7ull;
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[3], c.r[4].w[0] + 1u);  if (t) { goto L_0025DC88; } }
    c.r[4].d[0] = c.r[3].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[3].d[0] = c.r[4].d[0] & 7ull;
    c.r[4].d[0] = c.r[3].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 5;
L_0025DC88:
    set32(c.r[5], ld32((c.r[28].w[0] - 30368u)));
    c.r[3].d[0] = c.r[4].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], c.r[3].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + 15728u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + 15732u);
    c.f[0] = ld32((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.f[1] = ld32((c.r[5].w[0] + 656u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 32u), c.f[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30368u)));
    c.f[0] = ld32((c.r[4].w[0] + 660u));
    st32((c.r[19].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 30368u)));
    c.f[1] = ld32((c.r[3].w[0] + 664u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 40u), c.f[0]);
    c.budget -= 22;
L_0025DCE0:
    set32(c.r[3], 0u + 7u);
    st8((c.r[19].w[0] + 876u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0025DD10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 700u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 877u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0025E228; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DD34u);  if (depth < kMaxDepth) unit_0039(c, 117u, depth + 1u); else { c.pc = 0x001E56A0u; return; } if (c.pc != 0x0025DD34u) [[unlikely]] return; }
L_0025DD34:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 876u)));
    set32(c.r[3], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 15u);  if (t) { goto L_0025E018; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0025E000; } }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0025DD60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025E228; } }
L_0025DD60:
    set32(c.r[5], 0u + 10u);
    st8((c.r[16].w[0] + 747u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], 0u + 40u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025DDA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DD84u);  if (depth < kMaxDepth) unit_000D(c, 223u, depth + 1u); else { c.pc = 0x001371F0u; return; } if (c.pc != 0x0025DD84u) [[unlikely]] return; }
L_0025DD84:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], 0u + 16u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 876u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 640ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 700u), c.r[3].w[0]);  if (t) { goto L_0025E228; } }
L_0025DDA8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_0025E228; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 18560u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0025C000u < 16384u) { entry = entries_0057[(t - 0x0025C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0025DDD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DDD8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 223u, depth + 1u); else { c.pc = 0x001371F0u; return; } if (c.pc != 0x0025DDD8u) [[unlikely]] return; }
L_0025DDD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DDE0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 191u, depth + 1u); else { c.pc = 0x0025E2E0u; return; } if (c.pc != 0x0025DDE0u) [[unlikely]] return; }
L_0025DDE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 700u), c.r[3].w[0]);  if (t) { goto L_0025E228; } }
    c.budget -= 1;
L_0025DE00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DE08u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 191u, depth + 1u); else { c.pc = 0x0025E2E0u; return; } if (c.pc != 0x0025DE08u) [[unlikely]] return; }
L_0025DE08:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 749u));
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0025DE38; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 700u), c.r[3].w[0]);  if (t) { goto L_0025E228; } }
    c.budget -= 1;
L_0025DE38:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0025E228; } }
L_0025DE48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DE50u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 191u, depth + 1u); else { c.pc = 0x0025E2E0u; return; } if (c.pc != 0x0025DE50u) [[unlikely]] return; }
L_0025DE50:
    set32(c.r[4], ld32((c.r[16].w[0] + 700u)));
    set32(c.r[3], 0u + 7u);
    c.r[4].d[0] = c.r[4].d[0] | 128ull;
    st32((c.r[16].w[0] + 700u), c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 749u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0025E228; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0025E228; } }
    c.budget -= 1;
L_0025DE80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DE88u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 191u, depth + 1u); else { c.pc = 0x0025E2E0u; return; } if (c.pc != 0x0025DE88u) [[unlikely]] return; }
L_0025DE88:
    set32(c.r[4], ld32((c.r[16].w[0] + 700u)));
    set32(c.r[3], 0u + 10u);
    c.r[4].d[0] = c.r[4].d[0] | 128ull;
    st32((c.r[16].w[0] + 700u), c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 749u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 19u);  if (t) { goto L_0025DEB0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0025DEC8; } }
    c.budget -= 1;
L_0025DEB0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 1810u), static_cast<std::uint16_t>(0u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1952u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0025E228; } }
L_0025DEC8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0025E228; } }
L_0025DED8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DEE0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 191u, depth + 1u); else { c.pc = 0x0025E2E0u; return; } if (c.pc != 0x0025DEE0u) [[unlikely]] return; }
L_0025DEE0:
    set32(c.r[2], ld32((c.r[16].w[0] + 700u)));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st32((c.r[16].w[0] + 700u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1810u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025DF70; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DF0Cu); set32(c.r[5], c.r[16].w[0] + 8624u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0025DF0Cu) [[unlikely]] return; }
L_0025DF0C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DF18u); set32(c.r[5], c.r[16].w[0] + 8640u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0025DF18u) [[unlikely]] return; }
L_0025DF18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DF20u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_003B(c, 292u, depth + 1u); else { c.pc = 0x001EF0F0u; return; } if (c.pc != 0x0025DF20u) [[unlikely]] return; }
L_0025DF20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025DF38; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 514u));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025DF88; } }
L_0025DF38:
    set32(c.r[2], 0u + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DF44u); st16((c.r[16].w[0] + 1810u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0025DF44u) [[unlikely]] return; }
L_0025DF44:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025DF60; } }
    set32(c.r[2], 0u + 1024u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1952u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0025DF88; } }
    c.budget -= 1;
L_0025DF60:
    set32(c.r[2], 0u + 2048u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1952u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0025DF88; } }
    c.budget -= 1;
L_0025DF70:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 1810u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1952u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 700u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 700u), c.r[2].w[0]);
    c.budget -= 6;
L_0025DF88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DF90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 187u, depth + 1u); else { c.pc = 0x0025E240u; return; } if (c.pc != 0x0025DF90u) [[unlikely]] return; }
L_0025DF90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025E228; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 866u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 1810u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 1952u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 796u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[16].w[0] + 796u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 803u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0025E228; } }
L_0025DFD0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 866u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 866u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0025E228; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025DFF8u); st8((c.r[16].w[0] + 877u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_000D(c, 223u, depth + 1u); else { c.pc = 0x001371F0u; return; } if (c.pc != 0x0025DFF8u) [[unlikely]] return; }
L_0025DFF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025E228; } }
L_0025E000:
    set32(c.r[5], 0u + 1u);
    st8((c.r[16].w[0] + 877u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E010u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 223u, depth + 1u); else { c.pc = 0x001371F0u; return; } if (c.pc != 0x0025E010u) [[unlikely]] return; }
L_0025E010:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025E228; } }
L_0025E018:
    set32(c.r[5], 0u + 10u);
    st8((c.r[16].w[0] + 747u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_0025E228; } }
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 18528u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0025C000u < 16384u) { entry = entries_0057[(t - 0x0025C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0025E050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E058u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 223u, depth + 1u); else { c.pc = 0x001371F0u; return; } if (c.pc != 0x0025E058u) [[unlikely]] return; }
L_0025E058:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 640ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 700u), c.r[3].w[0]);  if (t) { goto L_0025E228; } }
    c.budget -= 1;
L_0025E078:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 749u));
    set32(c.r[3], 0u + 19u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0025E0A8; } }
    set32(c.r[2], c.r[6].w[0] + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 1810u), static_cast<std::uint16_t>(0u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E0A0u); st16((c.r[16].w[0] + 1952u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0057(c, 191u, depth + 1u); else { c.pc = 0x0025E2E0u; return; } if (c.pc != 0x0025E0A0u) [[unlikely]] return; }
L_0025E0A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025E228; } }
L_0025E0A8:
    set32(c.r[3], c.r[6].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0025E228; } }
    c.budget -= 1;
L_0025E0B8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1810u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025E148; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E0CCu);  if (depth < kMaxDepth) unit_0057(c, 191u, depth + 1u); else { c.pc = 0x0025E2E0u; return; } if (c.pc != 0x0025E0CCu) [[unlikely]] return; }
L_0025E0CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E0E0u); set32(c.r[5], c.r[16].w[0] + 8624u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0025E0E0u) [[unlikely]] return; }
L_0025E0E0:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E0ECu); set32(c.r[5], c.r[16].w[0] + 8640u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0025E0ECu) [[unlikely]] return; }
L_0025E0EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E0F4u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_003B(c, 292u, depth + 1u); else { c.pc = 0x001EF0F0u; return; } if (c.pc != 0x0025E0F4u) [[unlikely]] return; }
L_0025E0F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025E110; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 514u));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025E160; } }
    c.budget -= 1;
L_0025E110:
    set32(c.r[2], 0u + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E11Cu); st16((c.r[16].w[0] + 1810u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0025E11Cu) [[unlikely]] return; }
L_0025E11C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025E138; } }
    set32(c.r[2], 0u + 1024u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1952u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0025E160; } }
    c.budget -= 1;
L_0025E138:
    set32(c.r[2], 0u + 2048u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1952u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0025E160; } }
    c.budget -= 1;
L_0025E148:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 1810u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1952u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 700u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 700u), c.r[2].w[0]);
    c.budget -= 6;
L_0025E160:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E168u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 187u, depth + 1u); else { c.pc = 0x0025E240u; return; } if (c.pc != 0x0025E168u) [[unlikely]] return; }
L_0025E168:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025E228; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 1810u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 1952u), static_cast<std::uint16_t>(0u));
    c.budget -= 6;
L_0025E190:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 870u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 640ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 700u), c.r[3].w[0]);  if (t) { goto L_0025E228; } }
    c.budget -= 1;
L_0025E1B0:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 749u));
    set32(c.r[3], 0u + 21u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[6].w[0] + 1u);  if (t) { goto L_0025E1F0; } }
    set32(c.r[3], 0u + 30u);
    st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 866u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 1810u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 1952u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 796u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[16].w[0] + 796u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 803u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0025E228; } }
L_0025E1F0:
    set32(c.r[3], c.r[6].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0025E228; } }
    c.budget -= 1;
L_0025E200:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 866u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 866u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0025E228; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E228u); st8((c.r[16].w[0] + 877u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_000D(c, 223u, depth + 1u); else { c.pc = 0x001371F0u; return; } if (c.pc != 0x0025E228u) [[unlikely]] return; }
L_0025E228:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0025E240:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4168ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025E270; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 786u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025E270; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025E2D0; } }
    c.budget -= 1;
L_0025E270:
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[6], c.r[4].w[0] + 32u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E284u); set32(c.r[5], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0025E284u) [[unlikely]] return; }
L_0025E284:
    c.f[0] = ld32((c.r[29].w[0] + 16u));
    c.f[1] = ld32((c.r[29].w[0] + 24u));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E298u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0025E298u) [[unlikely]] return; }
L_0025E298:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 20u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E2A8u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0025E2A8u) [[unlikely]] return; }
L_0025E2A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43D20000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_0025E2C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025E2D0; } }
L_0025E2C8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0025E2D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025E2E0:
    set32(c.r[3], ld32((c.r[4].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 700u), c.r[3].w[0]);  c.pc = t; return; }
L_0025E2F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 24576ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0025E318; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 797u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0025E318:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 797u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);  if (t) { goto L_0025E330; } }
    st32((c.r[16].w[0] + 1088u), c.r[2].w[0]);
    c.budget -= 2;
L_0025E330:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E33Cu); st32((c.r[16].w[0] + 700u), 0u);  if (depth < kMaxDepth) unit_0039(c, 117u, depth + 1u); else { c.pc = 0x001E56A0u; return; } if (c.pc != 0x0025E33Cu) [[unlikely]] return; }
L_0025E33C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 874u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 10u);  if (t) { goto L_0025E350; } }
    st8((c.r[16].w[0] + 747u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0025E350:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 874u)));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_0025E998; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 18592u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0025C000u < 16384u) { entry = entries_0057[(t - 0x0025C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0025E378:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 875u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0025E3D0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025E398; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025E998; } }
L_0025E398:
    set32(c.r[3], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 875u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 872u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0025E3D0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E3C0u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_000D(c, 223u, depth + 1u); else { c.pc = 0x001371F0u; return; } if (c.pc != 0x0025E3C0u) [[unlikely]] return; }
L_0025E3C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E3CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 228u, depth + 1u); else { c.pc = 0x00137440u; return; } if (c.pc != 0x0025E3CCu) [[unlikely]] return; }
L_0025E3CC:
    c.budget -= 1;
L_0025E3D0:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], 0u + 40u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0025E408; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + 10u);
    st8((c.r[16].w[0] + 874u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 875u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 1952u), static_cast<std::uint16_t>(0u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1810u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0025E998; } }
    c.budget -= 1;
L_0025E408:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 27u);  if (t) { goto L_0025E998; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0025E430; } }
    set32(c.r[3], 0u - 1u);
    st8((c.r[16].w[0] + 8513u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 8512u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0025E430:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 874u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 874u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 875u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0025E998; } }
    c.budget -= 1;
L_0025E448:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E450u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 232u, depth + 1u); else { c.pc = 0x0025E9B0u; return; } if (c.pc != 0x0025E450u) [[unlikely]] return; }
L_0025E450:
    set32(c.r[3], ld32((c.r[16].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st32((c.r[16].w[0] + 700u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 874u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 874u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0025E998; } }
    c.budget -= 1;
L_0025E470:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E478u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 232u, depth + 1u); else { c.pc = 0x0025E9B0u; return; } if (c.pc != 0x0025E478u) [[unlikely]] return; }
L_0025E478:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 749u));
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0025E4A8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st32((c.r[16].w[0] + 700u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 874u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 874u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0025E998; } }
    c.budget -= 1;
L_0025E4A8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 874u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 874u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0025E998; } }
L_0025E4B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E4C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 232u, depth + 1u); else { c.pc = 0x0025E9B0u; return; } if (c.pc != 0x0025E4C0u) [[unlikely]] return; }
L_0025E4C0:
    set32(c.r[4], ld32((c.r[16].w[0] + 700u)));
    set32(c.r[3], 0u + 7u);
    c.r[4].d[0] = c.r[4].d[0] | 128ull;
    st32((c.r[16].w[0] + 700u), c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 749u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0025E4F0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 874u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 874u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0025E998; } }
    c.budget -= 1;
L_0025E4F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0025E998; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 874u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0025E998; } }
    c.budget -= 1;
L_0025E508:
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 874u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st32((c.r[16].w[0] + 700u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0025E998; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 874u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0025E998; } }
L_0025E530:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E538u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 232u, depth + 1u); else { c.pc = 0x0025E9B0u; return; } if (c.pc != 0x0025E538u) [[unlikely]] return; }
L_0025E538:
    set32(c.r[2], ld32((c.r[16].w[0] + 700u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E54Cu); st32((c.r[16].w[0] + 700u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 233u, depth + 1u); else { c.pc = 0x0025E9C0u; return; } if (c.pc != 0x0025E54Cu) [[unlikely]] return; }
L_0025E54C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 7u);  if (t) { goto L_0025E560; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 874u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0025E998; } }
    c.budget -= 1;
L_0025E560:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 749u));
    set32(c.r[3], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0025E588; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 874u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 874u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 1810u), static_cast<std::uint16_t>(0u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1952u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0025E998; } }
L_0025E588:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 874u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 874u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0025E998; } }
L_0025E598:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E5A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 232u, depth + 1u); else { c.pc = 0x0025E9B0u; return; } if (c.pc != 0x0025E5A0u) [[unlikely]] return; }
L_0025E5A0:
    set32(c.r[2], ld32((c.r[16].w[0] + 700u)));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st32((c.r[16].w[0] + 700u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1810u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025E638; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    set32(c.r[4], c.r[16].w[0] + 8592u);
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 48u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E5D0u); st32((c.r[29].w[0] + 52u), 0u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0025E5D0u) [[unlikely]] return; }
L_0025E5D0:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E5DCu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0025E5DCu) [[unlikely]] return; }
L_0025E5DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E5E4u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_003B(c, 292u, depth + 1u); else { c.pc = 0x001EF0F0u; return; } if (c.pc != 0x0025E5E4u) [[unlikely]] return; }
L_0025E5E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025E600; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 514u));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025E650; } }
    c.budget -= 1;
L_0025E600:
    set32(c.r[2], 0u + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E60Cu); st16((c.r[16].w[0] + 1810u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0025E60Cu) [[unlikely]] return; }
L_0025E60C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025E628; } }
    set32(c.r[2], 0u + 1024u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1952u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0025E650; } }
    c.budget -= 1;
L_0025E628:
    set32(c.r[2], 0u + 2048u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1952u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0025E650; } }
    c.budget -= 1;
L_0025E638:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 1810u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1952u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 700u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 700u), c.r[2].w[0]);
    c.budget -= 6;
L_0025E650:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E658u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 233u, depth + 1u); else { c.pc = 0x0025E9C0u; return; } if (c.pc != 0x0025E658u) [[unlikely]] return; }
L_0025E658:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 7u);  if (t) { goto L_0025E668; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 874u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0025E998; } }
L_0025E668:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0025E998; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 874u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0025E998; } }
    c.budget -= 1;
L_0025E680:
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 874u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 796u));
    set32(c.r[3], 0u + 2u);
    c.r[4].d[0] = c.r[4].d[0] & 128ull;
    st8((c.r[16].w[0] + 796u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 803u));
    c.r[4].d[0] = c.r[4].d[0] & 128ull;
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 1810u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 1952u), static_cast<std::uint16_t>(0u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 797u)));
    c.budget -= 14;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 15u);  if (t) { goto L_0025E6C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 872u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0025E998; } }
L_0025E6C0:
    set32(c.r[3], 0u + 45u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 872u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0025E998; } }
    c.budget -= 1;
L_0025E6D0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 24576ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 15u);  if (t) { goto L_0025E6E8; } }
    st16((c.r[16].w[0] + 872u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0025E6E8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 872u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025E750; } }
    st8((c.r[16].w[0] + 797u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 8u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 749u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0025E710; } }
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0025E710:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025E728; } }
    st8((c.r[16].w[0] + 798u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0025E728:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E730u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 117u, depth + 1u); else { c.pc = 0x001E56A0u; return; } if (c.pc != 0x0025E730u) [[unlikely]] return; }
L_0025E730:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E738u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 62u, depth + 1u); else { c.pc = 0x001E9AF0u; return; } if (c.pc != 0x0025E738u) [[unlikely]] return; }
L_0025E738:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E744u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_000D(c, 223u, depth + 1u); else { c.pc = 0x001371F0u; return; } if (c.pc != 0x0025E744u) [[unlikely]] return; }
L_0025E744:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025E998; } }
    c.budget -= 1;
L_0025E750:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 872u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0025E998; } }
    c.budget -= 1;
L_0025E760:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 875u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0025E8B0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0025E7A0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025E788; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025E998; } }
L_0025E788:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] + 1u);  if (t) { goto L_0025E998; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 875u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0025E998; } }
    c.budget -= 1;
L_0025E7A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E7A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 232u, depth + 1u); else { c.pc = 0x0025E9B0u; return; } if (c.pc != 0x0025E7A8u) [[unlikely]] return; }
L_0025E7A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E7B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 233u, depth + 1u); else { c.pc = 0x0025E9C0u; return; } if (c.pc != 0x0025E7B0u) [[unlikely]] return; }
L_0025E7B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025E810; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 875u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 875u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 1810u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 1952u), static_cast<std::uint16_t>(0u));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 796u));
    c.r[4].d[0] = c.r[4].d[0] & 128ull;
    st8((c.r[16].w[0] + 796u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 803u));
    c.r[4].d[0] = c.r[4].d[0] & 128ull;
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 797u)));
    c.budget -= 15;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 15u);  if (t) { goto L_0025E800; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 872u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0025E998; } }
    c.budget -= 1;
L_0025E800:
    set32(c.r[3], 0u + 45u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 872u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0025E998; } }
    c.budget -= 1;
L_0025E810:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1810u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0025E890; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E830u); set32(c.r[5], c.r[16].w[0] + 8624u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0025E830u) [[unlikely]] return; }
L_0025E830:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E83Cu); set32(c.r[5], c.r[16].w[0] + 2096u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0025E83Cu) [[unlikely]] return; }
L_0025E83C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E844u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_003B(c, 292u, depth + 1u); else { c.pc = 0x001EF0F0u; return; } if (c.pc != 0x0025E844u) [[unlikely]] return; }
L_0025E844:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025E860; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 514u));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025E998; } }
    c.budget -= 1;
L_0025E860:
    set32(c.r[2], 0u + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E86Cu); st16((c.r[16].w[0] + 1810u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0025E86Cu) [[unlikely]] return; }
L_0025E86C:
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1024u);  if (t) { goto L_0025E880; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1952u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0025E998; } }
L_0025E880:
    set32(c.r[3], 0u + 2048u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1952u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0025E998; } }
    c.budget -= 1;
L_0025E890:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 1810u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1952u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 700u)));
    c.r[4].d[0] = c.r[4].d[0] | 128ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 700u), c.r[3].w[0]);  if (t) { goto L_0025E998; } }
L_0025E8B0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 24576ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 15u);  if (t) { goto L_0025E8C8; } }
    st16((c.r[16].w[0] + 872u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0025E8C8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 872u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025E930; } }
    st8((c.r[16].w[0] + 797u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 8u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 749u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0025E8F0; } }
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0025E8F0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025E908; } }
    st8((c.r[16].w[0] + 798u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0025E908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E910u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 117u, depth + 1u); else { c.pc = 0x001E56A0u; return; } if (c.pc != 0x0025E910u) [[unlikely]] return; }
L_0025E910:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E918u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 62u, depth + 1u); else { c.pc = 0x001E9AF0u; return; } if (c.pc != 0x0025E918u) [[unlikely]] return; }
L_0025E918:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E924u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_000D(c, 223u, depth + 1u); else { c.pc = 0x001371F0u; return; } if (c.pc != 0x0025E924u) [[unlikely]] return; }
L_0025E924:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025E998; } }
    c.budget -= 1;
L_0025E930:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 872u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0025E998; } }
    c.budget -= 1;
L_0025E940:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 875u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0025E978; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025E960; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025E998; } }
L_0025E960:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 875u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025E974u); set32(c.r[5], 0u + 37u);  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x0025E974u) [[unlikely]] return; }
L_0025E974:
    c.budget -= 1;
L_0025E978:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 10u);  if (t) { goto L_0025E998; } }
    st8((c.r[16].w[0] + 874u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 875u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 1810u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 1952u), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
L_0025E998:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0025E9B0:
    set32(c.r[3], ld32((c.r[4].w[0] + 700u)));
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 700u), c.r[3].w[0]);  c.pc = t; return; }
L_0025E9C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4168ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025E9F0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 786u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025E9F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025EA50; } }
    c.budget -= 1;
L_0025E9F0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[6], c.r[4].w[0] + 32u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EA04u); set32(c.r[5], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0025EA04u) [[unlikely]] return; }
L_0025EA04:
    c.f[0] = ld32((c.r[29].w[0] + 16u));
    c.f[1] = ld32((c.r[29].w[0] + 24u));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EA18u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0025EA18u) [[unlikely]] return; }
L_0025EA18:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 20u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EA28u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0025EA28u) [[unlikely]] return; }
L_0025EA28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43D20000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_0025EA48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025EA50; } }
L_0025EA48:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0025EA50:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025EA60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 15792u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 814u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EA8Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025EA8Cu) [[unlikely]] return; }
L_0025EA8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EA94u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 322u, depth + 1u); else { c.pc = 0x0025F0D0u; return; } if (c.pc != 0x0025EA94u) [[unlikely]] return; }
L_0025EA94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EA9Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 330u, depth + 1u); else { c.pc = 0x0025F280u; return; } if (c.pc != 0x0025EA9Cu) [[unlikely]] return; }
L_0025EA9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025EAB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0025EAC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EAD4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 259u, depth + 1u); else { c.pc = 0x0036EE30u; return; } if (c.pc != 0x0025EAD4u) [[unlikely]] return; }
L_0025EAD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025EB28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EAE4u);  if (depth < kMaxDepth) unit_0057(c, 356u, depth + 1u); else { c.pc = 0x0025FB60u; return; } if (c.pc != 0x0025EAE4u) [[unlikely]] return; }
L_0025EAE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025EB28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EAF4u);  if (depth < kMaxDepth) unit_0057(c, 351u, depth + 1u); else { c.pc = 0x0025FA20u; return; } if (c.pc != 0x0025EAF4u) [[unlikely]] return; }
L_0025EAF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025EB28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EB04u);  if (depth < kMaxDepth) unit_0057(c, 336u, depth + 1u); else { c.pc = 0x0025F4B0u; return; } if (c.pc != 0x0025EB04u) [[unlikely]] return; }
L_0025EB04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025EB28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EB14u);  if (depth < kMaxDepth) unit_0057(c, 341u, depth + 1u); else { c.pc = 0x0025F5E0u; return; } if (c.pc != 0x0025EB14u) [[unlikely]] return; }
L_0025EB14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025EB28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EB24u);  if (depth < kMaxDepth) unit_0057(c, 332u, depth + 1u); else { c.pc = 0x0025F410u; return; } if (c.pc != 0x0025EB24u) [[unlikely]] return; }
L_0025EB24:
    c.budget -= 1;
L_0025EB28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025EB40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EB54u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 259u, depth + 1u); else { c.pc = 0x0036EE30u; return; } if (c.pc != 0x0025EB54u) [[unlikely]] return; }
L_0025EB54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025EB98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EB64u);  if (depth < kMaxDepth) unit_0057(c, 351u, depth + 1u); else { c.pc = 0x0025FA20u; return; } if (c.pc != 0x0025EB64u) [[unlikely]] return; }
L_0025EB64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025EB98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EB74u);  if (depth < kMaxDepth) unit_0057(c, 336u, depth + 1u); else { c.pc = 0x0025F4B0u; return; } if (c.pc != 0x0025EB74u) [[unlikely]] return; }
L_0025EB74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025EB98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EB84u);  if (depth < kMaxDepth) unit_0057(c, 341u, depth + 1u); else { c.pc = 0x0025F5E0u; return; } if (c.pc != 0x0025EB84u) [[unlikely]] return; }
L_0025EB84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025EB98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EB94u);  if (depth < kMaxDepth) unit_0057(c, 334u, depth + 1u); else { c.pc = 0x0025F460u; return; } if (c.pc != 0x0025EB94u) [[unlikely]] return; }
L_0025EB94:
    c.budget -= 1;
L_0025EB98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025EBB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EBC4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 259u, depth + 1u); else { c.pc = 0x0036EE30u; return; } if (c.pc != 0x0025EBC4u) [[unlikely]] return; }
L_0025EBC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025EBF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EBD4u);  if (depth < kMaxDepth) unit_0057(c, 351u, depth + 1u); else { c.pc = 0x0025FA20u; return; } if (c.pc != 0x0025EBD4u) [[unlikely]] return; }
L_0025EBD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025EBF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EBE4u);  if (depth < kMaxDepth) unit_0057(c, 336u, depth + 1u); else { c.pc = 0x0025F4B0u; return; } if (c.pc != 0x0025EBE4u) [[unlikely]] return; }
L_0025EBE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025EBF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EBF4u);  if (depth < kMaxDepth) unit_0057(c, 334u, depth + 1u); else { c.pc = 0x0025F460u; return; } if (c.pc != 0x0025EBF4u) [[unlikely]] return; }
L_0025EBF4:
    c.budget -= 1;
L_0025EBF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025EC10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EC24u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 259u, depth + 1u); else { c.pc = 0x0036EE30u; return; } if (c.pc != 0x0025EC24u) [[unlikely]] return; }
L_0025EC24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025EC68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EC34u);  if (depth < kMaxDepth) unit_0057(c, 351u, depth + 1u); else { c.pc = 0x0025FA20u; return; } if (c.pc != 0x0025EC34u) [[unlikely]] return; }
L_0025EC34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025EC68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EC44u);  if (depth < kMaxDepth) unit_0057(c, 336u, depth + 1u); else { c.pc = 0x0025F4B0u; return; } if (c.pc != 0x0025EC44u) [[unlikely]] return; }
L_0025EC44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025EC68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EC54u);  if (depth < kMaxDepth) unit_0057(c, 341u, depth + 1u); else { c.pc = 0x0025F5E0u; return; } if (c.pc != 0x0025EC54u) [[unlikely]] return; }
L_0025EC54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025EC68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EC64u);  if (depth < kMaxDepth) unit_0057(c, 332u, depth + 1u); else { c.pc = 0x0025F410u; return; } if (c.pc != 0x0025EC64u) [[unlikely]] return; }
L_0025EC64:
    c.budget -= 1;
L_0025EC68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025EC80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EC94u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 259u, depth + 1u); else { c.pc = 0x0036EE30u; return; } if (c.pc != 0x0025EC94u) [[unlikely]] return; }
L_0025EC94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025ECB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025ECA4u);  if (depth < kMaxDepth) unit_0057(c, 347u, depth + 1u); else { c.pc = 0x0025F820u; return; } if (c.pc != 0x0025ECA4u) [[unlikely]] return; }
L_0025ECA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025ECB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025ECB4u);  if (depth < kMaxDepth) unit_0057(c, 343u, depth + 1u); else { c.pc = 0x0025F6F0u; return; } if (c.pc != 0x0025ECB4u) [[unlikely]] return; }
L_0025ECB4:
    c.budget -= 1;
L_0025ECB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025ECD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025ECE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 259u, depth + 1u); else { c.pc = 0x0036EE30u; return; } if (c.pc != 0x0025ECE4u) [[unlikely]] return; }
L_0025ECE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025ED28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025ECF4u);  if (depth < kMaxDepth) unit_0057(c, 347u, depth + 1u); else { c.pc = 0x0025F820u; return; } if (c.pc != 0x0025ECF4u) [[unlikely]] return; }
L_0025ECF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025ED28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025ED04u);  if (depth < kMaxDepth) unit_0057(c, 343u, depth + 1u); else { c.pc = 0x0025F6F0u; return; } if (c.pc != 0x0025ED04u) [[unlikely]] return; }
L_0025ED04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025ED28; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 786u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025ED28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025ED20u);  if (depth < kMaxDepth) unit_0057(c, 338u, depth + 1u); else { c.pc = 0x0025F550u; return; } if (c.pc != 0x0025ED20u) [[unlikely]] return; }
L_0025ED20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025ED28; } }
L_0025ED28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025ED40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025ED54u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 259u, depth + 1u); else { c.pc = 0x0036EE30u; return; } if (c.pc != 0x0025ED54u) [[unlikely]] return; }
L_0025ED54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025ED98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025ED64u);  if (depth < kMaxDepth) unit_0057(c, 347u, depth + 1u); else { c.pc = 0x0025F820u; return; } if (c.pc != 0x0025ED64u) [[unlikely]] return; }
L_0025ED64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025ED98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025ED74u);  if (depth < kMaxDepth) unit_0057(c, 343u, depth + 1u); else { c.pc = 0x0025F6F0u; return; } if (c.pc != 0x0025ED74u) [[unlikely]] return; }
L_0025ED74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025ED98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025ED84u);  if (depth < kMaxDepth) unit_0057(c, 351u, depth + 1u); else { c.pc = 0x0025FA20u; return; } if (c.pc != 0x0025ED84u) [[unlikely]] return; }
L_0025ED84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025ED98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025ED94u);  if (depth < kMaxDepth) unit_0057(c, 336u, depth + 1u); else { c.pc = 0x0025F4B0u; return; } if (c.pc != 0x0025ED94u) [[unlikely]] return; }
L_0025ED94:
    c.budget -= 1;
L_0025ED98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025EDB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EDC0u);  if (depth < kMaxDepth) unit_009B(c, 259u, depth + 1u); else { c.pc = 0x0036EE30u; return; } if (c.pc != 0x0025EDC0u) [[unlikely]] return; }
L_0025EDC0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0025EDD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EDE0u);  if (depth < kMaxDepth) unit_009B(c, 259u, depth + 1u); else { c.pc = 0x0036EE30u; return; } if (c.pc != 0x0025EDE0u) [[unlikely]] return; }
L_0025EDE0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0025EDF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EE00u);  if (depth < kMaxDepth) unit_009B(c, 259u, depth + 1u); else { c.pc = 0x0036EE30u; return; } if (c.pc != 0x0025EE00u) [[unlikely]] return; }
L_0025EE00:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0025EE10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EE20u);  if (depth < kMaxDepth) unit_009B(c, 259u, depth + 1u); else { c.pc = 0x0036EE30u; return; } if (c.pc != 0x0025EE20u) [[unlikely]] return; }
L_0025EE20:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0025EE30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EE44u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 259u, depth + 1u); else { c.pc = 0x0036EE30u; return; } if (c.pc != 0x0025EE44u) [[unlikely]] return; }
L_0025EE44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025EE90; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 786u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025EE90; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025EE88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EE70u);  if (depth < kMaxDepth) unit_0057(c, 351u, depth + 1u); else { c.pc = 0x0025FA20u; return; } if (c.pc != 0x0025EE70u) [[unlikely]] return; }
L_0025EE70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025EE90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EE80u);  if (depth < kMaxDepth) unit_0057(c, 336u, depth + 1u); else { c.pc = 0x0025F4B0u; return; } if (c.pc != 0x0025EE80u) [[unlikely]] return; }
L_0025EE80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025EE90; } }
L_0025EE88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EE90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 345u, depth + 1u); else { c.pc = 0x0025F7A0u; return; } if (c.pc != 0x0025EE90u) [[unlikely]] return; }
L_0025EE90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025EEA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EEB4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 259u, depth + 1u); else { c.pc = 0x0036EE30u; return; } if (c.pc != 0x0025EEB4u) [[unlikely]] return; }
L_0025EEB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025EF08; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025EEF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EED4u);  if (depth < kMaxDepth) unit_0057(c, 351u, depth + 1u); else { c.pc = 0x0025FA20u; return; } if (c.pc != 0x0025EED4u) [[unlikely]] return; }
L_0025EED4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025EF08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EEE4u);  if (depth < kMaxDepth) unit_0057(c, 336u, depth + 1u); else { c.pc = 0x0025F4B0u; return; } if (c.pc != 0x0025EEE4u) [[unlikely]] return; }
L_0025EEE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025EF08; } }
    c.budget -= 1;
L_0025EEF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EEF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 347u, depth + 1u); else { c.pc = 0x0025F820u; return; } if (c.pc != 0x0025EEF8u) [[unlikely]] return; }
L_0025EEF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025EF08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EF08u);  if (depth < kMaxDepth) unit_0057(c, 343u, depth + 1u); else { c.pc = 0x0025F6F0u; return; } if (c.pc != 0x0025EF08u) [[unlikely]] return; }
L_0025EF08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025EF20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EF34u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 259u, depth + 1u); else { c.pc = 0x0036EE30u; return; } if (c.pc != 0x0025EF34u) [[unlikely]] return; }
L_0025EF34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025EF78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EF44u);  if (depth < kMaxDepth) unit_0057(c, 347u, depth + 1u); else { c.pc = 0x0025F820u; return; } if (c.pc != 0x0025EF44u) [[unlikely]] return; }
L_0025EF44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025EF78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EF54u);  if (depth < kMaxDepth) unit_0057(c, 343u, depth + 1u); else { c.pc = 0x0025F6F0u; return; } if (c.pc != 0x0025EF54u) [[unlikely]] return; }
L_0025EF54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025EF78; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 786u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025EF78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EF70u);  if (depth < kMaxDepth) unit_0057(c, 353u, depth + 1u); else { c.pc = 0x0025FAD0u; return; } if (c.pc != 0x0025EF70u) [[unlikely]] return; }
L_0025EF70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025EF78; } }
L_0025EF78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025EF90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EFA0u);  if (depth < kMaxDepth) unit_0057(c, 358u, depth + 1u); else { c.pc = 0x0025FBF0u; return; } if (c.pc != 0x0025EFA0u) [[unlikely]] return; }
L_0025EFA0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0025EFB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EFC4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 259u, depth + 1u); else { c.pc = 0x0036EE30u; return; } if (c.pc != 0x0025EFC4u) [[unlikely]] return; }
L_0025EFC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025EFE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EFD4u);  if (depth < kMaxDepth) unit_0057(c, 358u, depth + 1u); else { c.pc = 0x0025FBF0u; return; } if (c.pc != 0x0025EFD4u) [[unlikely]] return; }
L_0025EFD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025EFE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025EFE4u);  if (depth < kMaxDepth) unit_0057(c, 362u, depth + 1u); else { c.pc = 0x0025FC80u; return; } if (c.pc != 0x0025EFE4u) [[unlikely]] return; }
L_0025EFE4:
    c.budget -= 1;
L_0025EFE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025F000:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0025F010:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0025F020:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F034u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 259u, depth + 1u); else { c.pc = 0x0036EE30u; return; } if (c.pc != 0x0025F034u) [[unlikely]] return; }
L_0025F034:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025F048; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F044u);  if (depth < kMaxDepth) unit_0057(c, 349u, depth + 1u); else { c.pc = 0x0025F9A0u; return; } if (c.pc != 0x0025F044u) [[unlikely]] return; }
L_0025F044:
    c.budget -= 1;
L_0025F048:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025F060:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F074u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 259u, depth + 1u); else { c.pc = 0x0036EE30u; return; } if (c.pc != 0x0025F074u) [[unlikely]] return; }
L_0025F074:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025F0B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F084u);  if (depth < kMaxDepth) unit_0057(c, 347u, depth + 1u); else { c.pc = 0x0025F820u; return; } if (c.pc != 0x0025F084u) [[unlikely]] return; }
L_0025F084:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025F0B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F094u);  if (depth < kMaxDepth) unit_0057(c, 343u, depth + 1u); else { c.pc = 0x0025F6F0u; return; } if (c.pc != 0x0025F094u) [[unlikely]] return; }
L_0025F094:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025F0B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F0A4u);  if (depth < kMaxDepth) unit_0057(c, 351u, depth + 1u); else { c.pc = 0x0025FA20u; return; } if (c.pc != 0x0025F0A4u) [[unlikely]] return; }
L_0025F0A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025F0B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F0B4u);  if (depth < kMaxDepth) unit_0057(c, 336u, depth + 1u); else { c.pc = 0x0025F4B0u; return; } if (c.pc != 0x0025F0B4u) [[unlikely]] return; }
L_0025F0B4:
    c.budget -= 1;
L_0025F0B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025F0D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[3].d[0] = c.r[4].d[0] & 3ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025F110; } }
    c.f[1] = ld32((c.r[16].w[0] + 8516u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0025F268; } }
    c.budget -= 1;
L_0025F110:
    c.r[3].d[0] = c.r[4].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025F180; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F130u); c.f[13] = ld32((c.r[16].w[0] + 8252u));  if (depth < kMaxDepth) unit_0009(c, 164u, depth + 1u); else { c.pc = 0x00126190u; return; } if (c.pc != 0x0025F130u) [[unlikely]] return; }
L_0025F130:
    c.f[20] = c.f[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 255u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F144u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_003C(c, 71u, depth + 1u); else { c.pc = 0x001F0680u; return; } if (c.pc != 0x0025F144u) [[unlikely]] return; }
L_0025F144:
    set32(c.r[4], ld32((c.r[16].w[0] + 1240u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 1244u)));
    c.f[0] = c.r[4].w[0];
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::mul(c.f[20], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[16].w[0] + 1244u), c.r[3].w[0]);
    c.budget -= 15;
L_0025F180:
    c.f[2] = ld32((c.r[16].w[0] + 8516u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0025F1C0; } }
    c.f[0] = ld32((c.r[16].w[0] + 8252u));
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 8516u), c.f[0]);  if (t) { goto L_0025F1C0; } }
    st32((c.r[16].w[0] + 8516u), c.f[1]);
    set32(c.r[3], 0u - 2u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
L_0025F1C0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 814u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 818u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0025F268; } }
    c.f[1] = ld32((c.r[16].w[0] + 8516u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0025F240; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0025F230; } }
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025F218; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F20Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_005A(c, 246u, depth + 1u); else { c.pc = 0x0026A800u; return; } if (c.pc != 0x0025F20Cu) [[unlikely]] return; }
L_0025F20C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025F260; } }
    c.budget -= 1;
L_0025F218:
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F228u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 246u, depth + 1u); else { c.pc = 0x0026A800u; return; } if (c.pc != 0x0025F228u) [[unlikely]] return; }
L_0025F228:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025F260; } }
L_0025F230:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F238u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 68u, depth + 1u); else { c.pc = 0x001E9DF0u; return; } if (c.pc != 0x0025F238u) [[unlikely]] return; }
L_0025F238:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025F260; } }
L_0025F240:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025F258; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F250u);  if (depth < kMaxDepth) unit_005A(c, 242u, depth + 1u); else { c.pc = 0x0026A770u; return; } if (c.pc != 0x0025F250u) [[unlikely]] return; }
L_0025F250:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025F260; } }
L_0025F258:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F260u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 68u, depth + 1u); else { c.pc = 0x001E9DF0u; return; } if (c.pc != 0x0025F260u) [[unlikely]] return; }
L_0025F260:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 814u)));
    st16((c.r[16].w[0] + 818u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0025F268:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0025F280:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 7296u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.f[1] = ld32((c.r[4].w[0] + 996u));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0025F2D8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 194ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0025F2D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 813u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0025F300; } }
    c.budget -= 1;
L_0025F2D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 813u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0025F300; } }
L_0025F2D8:
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 992u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0025F2F8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 813u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0025F300; } }
L_0025F2F8:
    st8((c.r[16].w[0] + 813u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0025F300:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x461C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F314u); st32((c.r[16].w[0] + 992u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0075(c, 25u, depth + 1u); else { c.pc = 0x002D46E0u; return; } if (c.pc != 0x0025F314u) [[unlikely]] return; }
L_0025F314:
    c.f[1] = ld32((c.r[16].w[0] + 988u));
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 8292u), c.f[1]);
    st32((c.r[16].w[0] + 8252u), c.f[1]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 570u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025F380; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 570u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025F358; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CF50000u);
    c.r[3].d[0] = c.r[3].d[0] | 49807ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 984u), c.r[3].w[0]);  if (t) { goto L_0025F360; } }
    c.budget -= 1;
L_0025F358:
    st32((c.r[16].w[0] + 984u), c.f[0]);
    c.budget -= 2;
L_0025F360:
    c.f[1] = ld32((c.r[16].w[0] + 984u));
    c.f[0] = ld32((c.r[16].w[0] + 988u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 1016u), c.f[0]);
    st32((c.r[16].w[0] + 8292u), c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8252u), c.f[0]);  if (t) { goto L_0025F3F8; } }
    c.budget -= 1;
L_0025F380:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8693u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0025F398; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025F39C; } }
L_0025F398:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 813u));
    c.budget -= 1;
L_0025F39C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_0025F3E0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0025F3C0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0025F3C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025F3E8; } }
L_0025F3C0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 813u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.f[1] = ld32((c.r[3].w[0] + 1164u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 984u), c.f[0]);  if (t) { goto L_0025F3E8; } }
    c.budget -= 1;
L_0025F3E0:
    st32((c.r[16].w[0] + 984u), c.f[0]);
    c.budget -= 2;
L_0025F3E8:
    c.f[1] = ld32((c.r[16].w[0] + 984u));
    c.f[0] = ld32((c.r[16].w[0] + 988u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 1016u), c.f[0]);
    c.budget -= 4;
L_0025F3F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025F410:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025F430; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025F450; } }
L_0025F430:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 680u));
    c.r[2].d[0] = c.r[2].d[0] & 15360ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025F450; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F448u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x0025F448u) [[unlikely]] return; }
L_0025F448:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025F450; } }
L_0025F450:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0025F460:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025F480; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025F4A0; } }
L_0025F480:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 680u));
    c.r[2].d[0] = c.r[2].d[0] & 15360ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 3u);  if (t) { goto L_0025F498; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025F4A0; } }
L_0025F498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F4A0u);  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x0025F4A0u) [[unlikely]] return; }
L_0025F4A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0025F4B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 824u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025F4D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025F540; } }
    c.budget -= 1;
L_0025F4D0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 792u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025F4E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025F540; } }
    c.budget -= 1;
L_0025F4E8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025F508; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 788u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025F510; } }
    c.budget -= 1;
L_0025F508:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025F540; } }
L_0025F510:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 680u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025F530; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 802u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025F538; } }
    c.budget -= 1;
L_0025F530:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025F540; } }
L_0025F538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F540u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x0025F540u) [[unlikely]] return; }
L_0025F540:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0025F550:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 744u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0025F578; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025F5C8; } }
    c.budget -= 1;
L_0025F578:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 824u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025F5A0; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 680u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025F5A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025F5C8; } }
    c.budget -= 1;
L_0025F5A0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025F5B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F5B8u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x0025F5B8u) [[unlikely]] return; }
L_0025F5B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F5C4u); st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0039(c, 119u, depth + 1u); else { c.pc = 0x001E56E0u; return; } if (c.pc != 0x0025F5C4u) [[unlikely]] return; }
L_0025F5C4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0025F5C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025F5E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 40u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0025F608; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025F6D8; } }
    c.budget -= 1;
L_0025F608:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0025F638; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0025F630; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8693u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025F638; } }
L_0025F630:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025F6D8; } }
L_0025F638:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 792u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025F650; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025F6D8; } }
    c.budget -= 1;
L_0025F650:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 680u));
    set32(c.r[2], ld32((c.r[16].w[0] + 696u)));
    c.r[3].d[0] = c.r[3].d[0] & 15360ull;
    set32(c.r[3], c.r[3].w[0] << 10);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025F678; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025F6D8; } }
    c.budget -= 1;
L_0025F678:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F684u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x0025F684u) [[unlikely]] return; }
L_0025F684:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025F698; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025F6D8; } }
    c.budget -= 1;
L_0025F698:
    set32(c.r[5], ld32((c.r[16].w[0] + 696u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF0F0000u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[4], c.r[4].w[0] + 16048u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] >> 20);
    c.r[5].d[0] = c.r[5].d[0] & 15ull;
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[4], c.r[4].w[0] << 10);
    st16((c.r[16].w[0] + 858u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 696u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 696u), c.r[3].w[0]);
    c.budget -= 16;
L_0025F6D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025F6F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 40u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025F710; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025F790; } }
L_0025F710:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 824u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025F728; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025F790; } }
    c.budget -= 1;
L_0025F728:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 792u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025F740; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025F790; } }
    c.budget -= 1;
L_0025F740:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025F758; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025F790; } }
L_0025F758:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 680u));
    set32(c.r[2], ld32((c.r[4].w[0] + 696u)));
    c.r[3].d[0] = c.r[3].d[0] & 15360ull;
    set32(c.r[3], c.r[3].w[0] << 18);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025F780; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025F790; } }
    c.budget -= 1;
L_0025F780:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F788u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x0025F788u) [[unlikely]] return; }
L_0025F788:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0025F790:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0025F7A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025F7D0; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[2], 0u + 39u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025F7D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025F808; } }
L_0025F7D0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 824u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025F800; } }
    c.r[2].d[0] = ld16((c.r[4].w[0] + 680u));
    c.r[2].d[0] = c.r[2].d[0] & 15360ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025F7F8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 786u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025F800; } }
L_0025F7F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025F808; } }
L_0025F800:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F808u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x0025F808u) [[unlikely]] return; }
L_0025F808:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0025F820:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1608u)));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 114u));
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0025F868; } }
    c.r[2].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025F860; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 851u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025F868; } }
    c.budget -= 1;
L_0025F860:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025F990; } }
L_0025F868:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 797u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025F880; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025F990; } }
    c.budget -= 1;
L_0025F880:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 777u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025F898; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025F990; } }
L_0025F898:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 849u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025F8B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025F990; } }
    c.budget -= 1;
L_0025F8B0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 824u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025F8C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025F990; } }
    c.budget -= 1;
L_0025F8C8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025F8E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025F990; } }
L_0025F8E0:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 792u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025F8F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025F990; } }
    c.budget -= 1;
L_0025F8F8:
    c.r[2].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025F918; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 851u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025F930; } }
    c.budget -= 1;
L_0025F918:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 680u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025F930; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025F990; } }
L_0025F930:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 680u));
    set32(c.r[2], ld32((c.r[16].w[0] + 696u)));
    c.r[3].d[0] = c.r[3].d[0] & 15360ull;
    set32(c.r[3], c.r[3].w[0] << 18);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025F958; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025F990; } }
    c.budget -= 1;
L_0025F958:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025F964u); set32(c.r[5], 0u + 35u);  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x0025F964u) [[unlikely]] return; }
L_0025F964:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025F978; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025F990; } }
    c.budget -= 1;
L_0025F978:
    set32(c.r[4], ld32((c.r[16].w[0] + 696u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF0F0000u);
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 696u), c.r[3].w[0]);
    c.budget -= 6;
L_0025F990:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025F9A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1608u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 114u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025F9C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025FA10; } }
    c.budget -= 1;
L_0025F9C8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025F9E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025FA10; } }
L_0025F9E0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 824u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025FA08; } }
    c.r[2].d[0] = ld16((c.r[4].w[0] + 680u));
    c.r[2].d[0] = c.r[2].d[0] & 15360ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025FA08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025FA10; } }
    c.budget -= 1;
L_0025FA08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FA10u); set32(c.r[5], 0u + 37u);  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x0025FA10u) [[unlikely]] return; }
L_0025FA10:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0025FA20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 824u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025FA40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025FAC0; } }
    c.budget -= 1;
L_0025FA40:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 792u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025FA58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025FAC0; } }
    c.budget -= 1;
L_0025FA58:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025FA78; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 788u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025FA80; } }
    c.budget -= 1;
L_0025FA78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025FAC0; } }
L_0025FA80:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 680u));
    c.r[2].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025FA98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025FAC0; } }
L_0025FA98:
    c.r[2].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025FAB0; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 802u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025FAB8; } }
L_0025FAB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025FAC0; } }
L_0025FAB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FAC0u); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x0025FAC0u) [[unlikely]] return; }
L_0025FAC0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0025FAD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 744u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0025FAF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025FB48; } }
    c.budget -= 1;
L_0025FAF8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 824u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025FB20; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 680u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025FB20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025FB48; } }
    c.budget -= 1;
L_0025FB20:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025FB38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FB38u); set32(c.r[5], 0u + 15u);  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x0025FB38u) [[unlikely]] return; }
L_0025FB38:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FB44u); st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0039(c, 119u, depth + 1u); else { c.pc = 0x001E56E0u; return; } if (c.pc != 0x0025FB44u) [[unlikely]] return; }
L_0025FB44:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0025FB48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025FB60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8676u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025FB80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025FBD8; } }
L_0025FB80:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025FB98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025FBD8; } }
L_0025FB98:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 680u));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 682u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025FBB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025FBD8; } }
L_0025FBB8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1626u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 16u);  if (t) { goto L_0025FBD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025FBD8; } }
L_0025FBD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FBD8u);  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x0025FBD8u) [[unlikely]] return; }
L_0025FBD8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0025FBF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0025FC18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025FC68; } }
    c.budget -= 1;
L_0025FC18:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 680u));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025FC30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025FC68; } }
L_0025FC30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FC38u); set32(c.r[5], 0u + 18u);  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x0025FC38u) [[unlikely]] return; }
L_0025FC38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025FC48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025FC68; } }
L_0025FC48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FC50u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 11u, depth + 1u); else { c.pc = 0x001EC290u; return; } if (c.pc != 0x0025FC50u) [[unlikely]] return; }
L_0025FC50:
    set32(c.r[2], ld32((c.r[16].w[0] + 1612u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FC60u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025FC60u) [[unlikely]] return; }
L_0025FC60:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0025FC68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025FC80:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8656u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00830000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    set32(c.r[3], c.r[3].w[0] + 29024u);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[5], c.r[5].w[0] << 7);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_0025FCB8; } }
    st16((c.r[3].w[0] + 322u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 320u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0025FE08; } }
L_0025FCB8:
    c.r[5].d[0] = ld16((c.r[4].w[0] + 680u));
    c.r[2].d[0] = c.r[5].d[0] & 12288ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025FCD0; } }
    st16((c.r[3].w[0] + 320u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_0025FCD0:
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    c.r[2].d[0] = c.r[5].d[0] & 3072ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025FCE8; } }
    st16((c.r[3].w[0] + 322u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_0025FCE8:
    c.r[2].d[0] = c.r[5].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025FD08; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 320u)));
    set32(c.r[2], c.r[2].w[0] + 128u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 320u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0025FD20; } }
    c.budget -= 1;
L_0025FD08:
    c.r[2].d[0] = c.r[5].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025FD20; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 320u)));
    set32(c.r[2], c.r[2].w[0] - 128u);
    st16((c.r[3].w[0] + 320u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0025FD20:
    c.r[2].d[0] = c.r[5].d[0] & 2048ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025FD40; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 322u)));
    set32(c.r[2], c.r[2].w[0] + 256u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 322u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0025FD58; } }
    c.budget -= 1;
L_0025FD40:
    c.r[2].d[0] = c.r[5].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025FD58; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 322u)));
    set32(c.r[2], c.r[2].w[0] - 256u);
    st16((c.r[3].w[0] + 322u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0025FD58:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 320u)));
    c.r[1].d[0] = c.r[2].sd[0] < 385ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0025FD78; } }
    set32(c.r[2], 0u + 384u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 320u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0025FD90; } }
    c.budget -= 1;
L_0025FD78:
    c.r[1].d[0] = c.r[2].sd[0] < -384ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0025FD90; } }
    set32(c.r[2], 0u - 384u);
    st16((c.r[3].w[0] + 320u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0025FD90:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 322u)));
    c.r[1].d[0] = c.r[2].sd[0] < 513ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0025FDB0; } }
    set32(c.r[2], 0u + 512u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 322u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0025FDC8; } }
    c.budget -= 1;
L_0025FDB0:
    c.r[1].d[0] = c.r[2].sd[0] < -512ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0025FDC8; } }
    set32(c.r[2], 0u - 512u);
    st16((c.r[3].w[0] + 322u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0025FDC8:
    st32((c.r[4].w[0] + 980u), 0u);
    st32((c.r[4].w[0] + 976u), 0u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 1492u)));
    st32((c.r[4].w[0] + 1496u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 1508u)));
    st32((c.r[4].w[0] + 1512u), c.r[3].w[0]);
    c.f[3] = ld32((c.r[4].w[0] + 1312u));
    c.f[2] = ld32((c.r[4].w[0] + 1316u));
    c.f[1] = ld32((c.r[4].w[0] + 1320u));
    c.f[0] = ld32((c.r[4].w[0] + 1324u));
    st32((c.r[4].w[0] + 1328u), c.f[3]);
    st32((c.r[4].w[0] + 1332u), c.f[2]);
    st32((c.r[4].w[0] + 1336u), c.f[1]);
    st32((c.r[4].w[0] + 1340u), c.f[0]);
    c.budget -= 16;
L_0025FE08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0025FE10:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 797u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 515u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FE44u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0074(c, 336u, depth + 1u); else { c.pc = 0x002D37E0u; return; } if (c.pc != 0x0025FE44u) [[unlikely]] return; }
L_0025FE44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025FE60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43370000u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 712u), c.r[2].w[0]);  if (t) { goto L_0025FE70; } }
    c.budget -= 1;
L_0025FE60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42D50000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 712u), c.r[2].w[0]);
    c.budget -= 4;
L_0025FE70:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 15u));
    c.r[4].d[0] = ld8((c.r[20].w[0] + 515u));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[18].d[0] = c.r[2].d[0] & 15ull;
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FE8Cu); set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));  if (depth < kMaxDepth) unit_0074(c, 336u, depth + 1u); else { c.pc = 0x002D37E0u; return; } if (c.pc != 0x0025FE8Cu) [[unlikely]] return; }
L_0025FE8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025FEC8; } }
    goto L_0025FE94;
L_0025FE90:
    c.budget -= 1;
L_0025FE94:
    c.r[2].d[0] = c.r[18].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025FEE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FEA8u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0025FEA8u) [[unlikely]] return; }
L_0025FEA8:
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], 0u + 1u);
    mmi::divu(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[3].w[0] << (c.r[2].w[0] & 31u));  if (t) { goto L_0025FEE8; } }
L_0025FEC8:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 7u));
    set32(c.r[18], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[18].d[0]; set32(c.r[2], 0u + 5u);  if (t) { goto L_0025FEE0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0025FEE8; } }
L_0025FEE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 1u);  if (t) { goto L_0025FEE8; } }
L_0025FEE8:
    set32(c.r[2], ld32((c.r[20].w[0] + 1608u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 114u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025FF18; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0025FF18; } }
    set32(c.r[5], 0u + 17u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FF18u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 153u, depth + 1u); else { c.pc = 0x0023A1C0u; return; } if (c.pc != 0x0025FF18u) [[unlikely]] return; }
L_0025FF18:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 814u)));
    set32(c.r[2], 0u + 36u);
    c.budget -= 2;
L_0025FF20:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0025FF38; } }
    set32(c.r[18], 0u + 4u);
    set32(c.r[16], 0u + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0025FFC8; } }
L_0025FF38:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 850u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025FF78; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 2;
L_0025FF4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0025FF78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FF5Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 251u, depth + 1u); else { c.pc = 0x001E7BE0u; return; } if (c.pc != 0x0025FF5Cu) [[unlikely]] return; }
L_0025FF5C:
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], 0u - 4097u);
    st8((c.r[20].w[0] + 8513u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[20].w[0] + 8512u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 822u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[20].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 7;
L_0025FF78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025FF80u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 58u, depth + 1u); else { c.pc = 0x001E93E0u; return; } if (c.pc != 0x0025FF80u) [[unlikely]] return; }
L_0025FF80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025FF90; } }
    set32(c.r[17], 0u + 1u);
    set32(c.r[16], 0u + 3u);
    c.budget -= 2;
L_0025FF90:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 851u)));
    c.budget -= 1;
L_0025FF94:
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025FFA8; } }
    set32(c.r[18], 0u + 4u);
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_0025FFA8:
    set32(c.r[2], ld32((c.r[20].w[0] + 1608u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 114u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025FFC8; } }
    set32(c.r[18], 0u + 4u);
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
L_0025FFC8:
    c.r[2].d[0] = c.r[17].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0058(c, 12u, depth); } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 569u));
    c.r[2].d[0] = c.r[3].d[0] & 4092ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_0025FFF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0058(c, 12u, depth); } }
    c.budget -= 1;
L_0025FFF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00070000u);
    c.r[2].d[0] = c.r[2].d[0] | 61443ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], 0u + 2u);  if (t) { [[clang::musttail]] return unit_0058(c, 5u, depth); } }
    [[clang::musttail]] return unit_0058(c, 2u, depth);
}

}
