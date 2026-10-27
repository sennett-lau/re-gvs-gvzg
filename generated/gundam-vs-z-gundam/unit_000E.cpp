#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_000E[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 36,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 40, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0,
    45, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 53,
    0, 54, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 57, 0, 58, 0, 59, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0,
    0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 68, 0, 69, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 74, 0, 75, 0, 0, 76, 0,
    0, 0, 77, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 0, 89, 0, 0, 0, 90, 0, 0,
    0, 91, 0, 92, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0,
    0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 107, 108, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0,
    110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 115, 0,
    0, 0, 0, 0, 116, 0, 117, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0,
    0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    128, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 132, 0, 133, 0, 0, 134, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 138,
    0, 0, 0, 0, 0, 0, 139, 0, 140, 0, 0, 141, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0,
    153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 161, 0, 0, 0, 0,
    0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0,
    170, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 179, 0, 0, 180, 0, 0, 181, 0, 0, 0, 182,
    0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0,
    0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 194, 0, 0, 0, 195, 0, 0, 0, 196, 0, 197,
    0, 198, 0, 0, 199, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 202, 0, 0, 0,
    203, 0, 204, 0, 205, 0, 0, 0, 206, 0, 207, 0, 0, 0, 208, 0, 209, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 222, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 225, 0, 226, 0, 227, 0, 228, 0, 229, 0, 230, 0, 231, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0,
    0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0,
    0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0,
    0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0,
    0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 292, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 297, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0,
};

void unit_000E(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00138000;
    case 2u: goto L_00138080;
    case 3u: goto L_00138094;
    case 4u: goto L_00138120;
    case 5u: goto L_00138140;
    case 6u: goto L_00138198;
    case 7u: goto L_00138210;
    case 8u: goto L_00138240;
    case 9u: goto L_001382A0;
    case 10u: goto L_0013830C;
    case 11u: goto L_00138360;
    case 12u: goto L_001383A4;
    case 13u: goto L_001383E0;
    case 14u: goto L_0013843C;
    case 15u: goto L_00138448;
    case 16u: goto L_00138474;
    case 17u: goto L_00138500;
    case 18u: goto L_001385C8;
    case 19u: goto L_00138624;
    case 20u: goto L_0013863C;
    case 21u: goto L_00138668;
    case 22u: goto L_001386AC;
    case 23u: goto L_00138780;
    case 24u: goto L_001387A0;
    case 25u: goto L_00138840;
    case 26u: goto L_00138880;
    case 27u: goto L_001388F0;
    case 28u: goto L_00138AA0;
    case 29u: goto L_00138B60;
    case 30u: goto L_00138BF8;
    case 31u: goto L_00138CC8;
    case 32u: goto L_00138E00;
    case 33u: goto L_00138E3C;
    case 34u: goto L_00138EB0;
    case 35u: goto L_00138EF4;
    case 36u: goto L_00138EFC;
    case 37u: goto L_00138F9C;
    case 38u: goto L_00138FC8;
    case 39u: goto L_00139068;
    case 40u: goto L_00139098;
    case 41u: goto L_001390A0;
    case 42u: goto L_001390C0;
    case 43u: goto L_0013912C;
    case 44u: goto L_00139170;
    case 45u: goto L_00139180;
    case 46u: goto L_00139188;
    case 47u: goto L_001391A4;
    case 48u: goto L_001391AC;
    case 49u: goto L_001391B8;
    case 50u: goto L_001391C8;
    case 51u: goto L_001391D8;
    case 52u: goto L_001391E8;
    case 53u: goto L_001391FC;
    case 54u: goto L_00139204;
    case 55u: goto L_00139210;
    case 56u: goto L_00139220;
    case 57u: goto L_00139230;
    case 58u: goto L_00139238;
    case 59u: goto L_00139240;
    case 60u: goto L_00139250;
    case 61u: goto L_0013925C;
    case 62u: goto L_00139270;
    case 63u: goto L_00139284;
    case 64u: goto L_001392A0;
    case 65u: goto L_00139314;
    case 66u: goto L_00139328;
    case 67u: goto L_00139344;
    case 68u: goto L_00139390;
    case 69u: goto L_00139398;
    case 70u: goto L_001393A4;
    case 71u: goto L_001393B0;
    case 72u: goto L_001393CC;
    case 73u: goto L_001393DC;
    case 74u: goto L_001393E4;
    case 75u: goto L_001393EC;
    case 76u: goto L_001393F8;
    case 77u: goto L_00139408;
    case 78u: goto L_00139414;
    case 79u: goto L_0013943C;
    case 80u: goto L_00139464;
    case 81u: goto L_0013949C;
    case 82u: goto L_001394AC;
    case 83u: goto L_001394E0;
    case 84u: goto L_0013956C;
    case 85u: goto L_001395A0;
    case 86u: goto L_001395B4;
    case 87u: goto L_001395D0;
    case 88u: goto L_001395D8;
    case 89u: goto L_001395E4;
    case 90u: goto L_001395F4;
    case 91u: goto L_00139604;
    case 92u: goto L_0013960C;
    case 93u: goto L_00139618;
    case 94u: goto L_00139628;
    case 95u: goto L_00139638;
    case 96u: goto L_00139678;
    case 97u: goto L_0013968C;
    case 98u: goto L_0013969C;
    case 99u: goto L_001396C0;
    case 100u: goto L_00139730;
    case 101u: goto L_00139754;
    case 102u: goto L_001397C0;
    case 103u: goto L_001397E0;
    case 104u: goto L_001397F8;
    case 105u: goto L_00139820;
    case 106u: goto L_0013982C;
    case 107u: goto L_0013983C;
    case 108u: goto L_00139840;
    case 109u: goto L_00139860;
    case 110u: goto L_00139880;
    case 111u: goto L_001398CC;
    case 112u: goto L_00139910;
    case 113u: goto L_00139958;
    case 114u: goto L_00139968;
    case 115u: goto L_00139978;
    case 116u: goto L_00139990;
    case 117u: goto L_00139998;
    case 118u: goto L_001399A4;
    case 119u: goto L_001399B4;
    case 120u: goto L_001399CC;
    case 121u: goto L_001399E0;
    case 122u: goto L_001399F8;
    case 123u: goto L_00139A2C;
    case 124u: goto L_00139A70;
    case 125u: goto L_00139A94;
    case 126u: goto L_00139AF0;
    case 127u: goto L_00139B30;
    case 128u: goto L_00139B80;
    case 129u: goto L_00139BA4;
    case 130u: goto L_00139BB8;
    case 131u: goto L_00139BD4;
    case 132u: goto L_00139C1C;
    case 133u: goto L_00139C24;
    case 134u: goto L_00139C30;
    case 135u: goto L_00139C3C;
    case 136u: goto L_00139C58;
    case 137u: goto L_00139C68;
    case 138u: goto L_00139C7C;
    case 139u: goto L_00139C98;
    case 140u: goto L_00139CA0;
    case 141u: goto L_00139CAC;
    case 142u: goto L_00139CBC;
    case 143u: goto L_00139CC8;
    case 144u: goto L_00139D18;
    case 145u: goto L_00139D4C;
    case 146u: goto L_00139D5C;
    case 147u: goto L_00139D70;
    case 148u: goto L_00139DE0;
    case 149u: goto L_00139E74;
    case 150u: goto L_00139EA8;
    case 151u: goto L_00139EBC;
    case 152u: goto L_00139EE0;
    case 153u: goto L_00139F00;
    case 154u: goto L_00139F20;
    case 155u: goto L_00139F40;
    case 156u: goto L_00139F64;
    case 157u: goto L_00139FA4;
    case 158u: goto L_00139FAC;
    case 159u: goto L_00139FCC;
    case 160u: goto L_00139FE4;
    case 161u: goto L_00139FEC;
    case 162u: goto L_0013A00C;
    case 163u: goto L_0013A040;
    case 164u: goto L_0013A0F0;
    case 165u: goto L_0013A134;
    case 166u: goto L_0013A218;
    case 167u: goto L_0013A238;
    case 168u: goto L_0013A250;
    case 169u: goto L_0013A278;
    case 170u: goto L_0013A280;
    case 171u: goto L_0013A28C;
    case 172u: goto L_0013A29C;
    case 173u: goto L_0013A2B0;
    case 174u: goto L_0013A2D0;
    case 175u: goto L_0013A34C;
    case 176u: goto L_0013A360;
    case 177u: goto L_0013A38C;
    case 178u: goto L_0013A3CC;
    case 179u: goto L_0013A3D4;
    case 180u: goto L_0013A3E0;
    case 181u: goto L_0013A3EC;
    case 182u: goto L_0013A3FC;
    case 183u: goto L_0013A40C;
    case 184u: goto L_0013A420;
    case 185u: goto L_0013A428;
    case 186u: goto L_0013A43C;
    case 187u: goto L_0013A464;
    case 188u: goto L_0013A484;
    case 189u: goto L_0013A49C;
    case 190u: goto L_0013A4EC;
    case 191u: goto L_0013A558;
    case 192u: goto L_0013A590;
    case 193u: goto L_0013A5CC;
    case 194u: goto L_0013A5D4;
    case 195u: goto L_0013A5E4;
    case 196u: goto L_0013A5F4;
    case 197u: goto L_0013A5FC;
    case 198u: goto L_0013A604;
    case 199u: goto L_0013A610;
    case 200u: goto L_0013A618;
    case 201u: goto L_0013A668;
    case 202u: goto L_0013A670;
    case 203u: goto L_0013A680;
    case 204u: goto L_0013A688;
    case 205u: goto L_0013A690;
    case 206u: goto L_0013A6A0;
    case 207u: goto L_0013A6A8;
    case 208u: goto L_0013A6B8;
    case 209u: goto L_0013A6C0;
    case 210u: goto L_0013A6C8;
    case 211u: goto L_0013A6E0;
    case 212u: goto L_0013A728;
    case 213u: goto L_0013A7D0;
    case 214u: goto L_0013A818;
    case 215u: goto L_0013A940;
    case 216u: goto L_0013A9E8;
    case 217u: goto L_0013AA30;
    case 218u: goto L_0013AA38;
    case 219u: goto L_0013AAC0;
    case 220u: goto L_0013AB78;
    case 221u: goto L_0013ABA8;
    case 222u: goto L_0013ABB0;
    case 223u: goto L_0013ABD0;
    case 224u: goto L_0013ABE0;
    case 225u: goto L_0013AC18;
    case 226u: goto L_0013AC20;
    case 227u: goto L_0013AC28;
    case 228u: goto L_0013AC30;
    case 229u: goto L_0013AC38;
    case 230u: goto L_0013AC40;
    case 231u: goto L_0013AC48;
    case 232u: goto L_0013AC50;
    case 233u: goto L_0013AC60;
    case 234u: goto L_0013AC88;
    case 235u: goto L_0013ACAC;
    case 236u: goto L_0013ACF0;
    case 237u: goto L_0013AD10;
    case 238u: goto L_0013AD90;
    case 239u: goto L_0013ADA4;
    case 240u: goto L_0013ADF8;
    case 241u: goto L_0013AE0C;
    case 242u: goto L_0013AE2C;
    case 243u: goto L_0013AE5C;
    case 244u: goto L_0013AE70;
    case 245u: goto L_0013AE88;
    case 246u: goto L_0013AEB4;
    case 247u: goto L_0013AECC;
    case 248u: goto L_0013AEF4;
    case 249u: goto L_0013AF38;
    case 250u: goto L_0013AF48;
    case 251u: goto L_0013AF70;
    case 252u: goto L_0013AFC0;
    case 253u: goto L_0013B018;
    case 254u: goto L_0013B02C;
    case 255u: goto L_0013B050;
    case 256u: goto L_0013B060;
    case 257u: goto L_0013B0D0;
    case 258u: goto L_0013B120;
    case 259u: goto L_0013B178;
    case 260u: goto L_0013B18C;
    case 261u: goto L_0013B19C;
    case 262u: goto L_0013B1D0;
    case 263u: goto L_0013B1E0;
    case 264u: goto L_0013B250;
    case 265u: goto L_0013B2A0;
    case 266u: goto L_0013B2DC;
    case 267u: goto L_0013B310;
    case 268u: goto L_0013B324;
    case 269u: goto L_0013B334;
    case 270u: goto L_0013B358;
    case 271u: goto L_0013B368;
    case 272u: goto L_0013B3E0;
    case 273u: goto L_0013B438;
    case 274u: goto L_0013B47C;
    case 275u: goto L_0013B4B8;
    case 276u: goto L_0013B50C;
    case 277u: goto L_0013B540;
    case 278u: goto L_0013B5C0;
    case 279u: goto L_0013B618;
    case 280u: goto L_0013B65C;
    case 281u: goto L_0013B690;
    case 282u: goto L_0013B6E4;
    case 283u: goto L_0013B718;
    case 284u: goto L_0013B790;
    case 285u: goto L_0013B804;
    case 286u: goto L_0013B814;
    case 287u: goto L_0013B830;
    case 288u: goto L_0013B8A4;
    case 289u: goto L_0013B8B4;
    case 290u: goto L_0013B8D0;
    case 291u: goto L_0013B9E0;
    case 292u: goto L_0013B9EC;
    case 293u: goto L_0013BB5C;
    case 294u: goto L_0013BE08;
    case 295u: goto L_0013BE30;
    case 296u: goto L_0013BE48;
    case 297u: goto L_0013BE54;
    case 298u: goto L_0013BE5C;
    case 299u: goto L_0013BE6C;
    case 300u: goto L_0013BF28;
    case 301u: goto L_0013BF50;
    case 302u: goto L_0013BF68;
    case 303u: goto L_0013BF9C;
    case 304u: goto L_0013BFA8;
    case 305u: goto L_0013BFCC;
    case 306u: goto L_0013BFF8;
    default: bad_entry(c, 0x00138000u); return;
    }
L_00138000:
    st8((c.r[18].w[0] + 795u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00138018; } }
    st8((c.r[18].w[0] + 795u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00138018:
    c.r[5].d[0] = ld8((c.r[18].w[0] + 795u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 515u));
    set32(c.r[2], c.r[2].w[0] - 27856u);
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 9);
    set32(c.r[20], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld8((c.r[20].w[0] + 515u));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001380D8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001380D8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 1492u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_001380D8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;  if (t) { goto L_001380D8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001380B8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 771u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[21].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_001380A8; } }
    goto L_00138084;
L_00138080:
    c.r[2].d[0] = c.r[21].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 1;
L_00138084:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001380A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138094u); set32(c.r[5], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_0039(c, 126u, depth + 1u); else { c.pc = 0x001E5A60u; return; } if (c.pc != 0x00138094u) [[unlikely]] return; }
L_00138094:
    c.f[1] = ld32((c.r[18].w[0] + 1600u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001380D8; } }
    c.budget -= 1;
L_001380A8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 576u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001380D8; } }
    c.budget -= 1;
L_001380B8:
    st32((c.r[18].w[0] + 1500u), c.r[20].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 274u)));
    set32(c.r[17], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8657u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001380E8; } }
    c.budget -= 1;
L_001380D8:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00137FF8u | kUnwind; return; } [[clang::musttail]] return unit_000D(c, 286u, depth); } }
L_001380E8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001380F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00138210; } }
L_001380F8:
    set32(c.r[5], ld32((c.r[18].w[0] + 1492u)));
    set32(c.r[2], 0u + 2u);
    st32((c.r[18].w[0] + 1500u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8656u)));
    st8((c.r[18].w[0] + 795u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8657u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 274u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00138210; } }
L_00138120:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47C30000u);
    c.r[2].d[0] = c.r[2].d[0] | 20480ull;
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.f[20] = c.r[2].w[0];
    c.r[22].d[0] = 0ull + 0ull;
    set32(c.r[21], c.r[21].w[0] - 27856u);
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 8;
L_00138140:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 515u));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 515u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001381B0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_001381B0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00138180; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 348u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00138180; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 1500u)));
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == c.r[2].d[0];  if (t) { goto L_001381B0; } }
L_00138180:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] + 32u);  if (t) { goto L_001381B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138198u); set32(c.r[5], c.r[21].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x00138198u) [[unlikely]] return; }
L_00138198:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001381B0; } }
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8656u)));
    c.f[20] = c.f[0];
    set32(c.r[17], 0u + 1u);
    c.budget -= 3;
L_001381B0:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00138140u | kUnwind; return; } goto L_00138140; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001381D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00138210; } }
L_001381D0:
    c.r[5].d[0] = c.r[22].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - 27856u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st8((c.r[18].w[0] + 795u), static_cast<std::uint8_t>(c.r[22].w[0]));
    set32(c.r[4], c.r[4].w[0] << 9);
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[18].w[0] + 1500u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8657u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 274u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 16;
L_00138210:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00138240:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 799u));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00138288; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00138750; } }
    c.budget -= 1;
L_00138288:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[20], c.r[20].w[0] - 27856u);
    c.r[16].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_001382A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8657u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 274u)));
    c.r[3].d[0] = ~(c.r[3].d[0] | 0ull);
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st8((c.r[20].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00138328; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00138328; } }
    c.r[3].d[0] = ld8((c.r[21].w[0] + 515u));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 515u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00138328; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 620u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00138328; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 771u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_00138320; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013830Cu); set32(c.r[5], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_0039(c, 126u, depth + 1u); else { c.pc = 0x001E5A60u; return; } if (c.pc != 0x0013830Cu) [[unlikely]] return; }
L_0013830C:
    c.f[1] = ld32((c.r[21].w[0] + 1600u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00138328; } }
    c.budget -= 1;
L_00138320:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_00138328:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001382A0u | kUnwind; return; } goto L_001382A0; } }
    c.r[2].d[0] = ld16((c.r[28].w[0] - 23892u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00138398; } }
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00138398; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[6], c.r[6].w[0] - 9840u);
    c.budget -= 3;
L_00138360:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8657u)));
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    c.r[4].d[0] = c.r[2].d[0] << 56;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 274u)));
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st8((c.r[3].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[28].w[0] - 23892u));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00138360u | kUnwind; return; } goto L_00138360; } }
    c.budget -= 1;
L_00138398:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001383A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 25u, depth + 1u); else { c.pc = 0x00138840u; return; } if (c.pc != 0x001383A4u) [[unlikely]] return; }
L_001383A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001383F8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001383F8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001383F8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 771u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_001383F0; } }
    set32(c.r[5], c.r[2].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001383E0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 126u, depth + 1u); else { c.pc = 0x001E5A60u; return; } if (c.pc != 0x001383E0u) [[unlikely]] return; }
L_001383E0:
    c.f[1] = ld32((c.r[21].w[0] + 1600u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001383F8; } }
L_001383F0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_001383F8:
    set32(c.r[2], ld32((c.r[21].w[0] + 1492u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001385A8; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 1500u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00138418; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));  if (t) { goto L_00138420; } }
L_00138418:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.budget -= 2;
L_00138420:
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00138438; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 8656u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0] + 795u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00138440; } }
L_00138438:
    set32(c.r[2], 0u + 255u);
    c.budget -= 1;
L_0013843C:
    st8((c.r[21].w[0] + 795u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00138440:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00138448:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 795u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[21].w[0] + 795u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 255u);  if (t) { goto L_00138488; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st8((c.r[21].w[0] + 795u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138474u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 25u, depth + 1u); else { c.pc = 0x00138840u; return; } if (c.pc != 0x00138474u) [[unlikely]] return; }
L_00138474:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00138520; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00138540; } }
    c.budget -= 1;
L_00138488:
    c.r[4].d[0] = ld8((c.r[21].w[0] + 795u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] - 27856u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 9);
    set32(c.r[20], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 620u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00138540; } }
    c.r[3].d[0] = ld8((c.r[21].w[0] + 515u));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 515u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00138540; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00138540; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 1492u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;  if (t) { goto L_00138540; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00138520; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 771u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_00138510; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_00138510; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138500u); set32(c.r[5], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_0039(c, 126u, depth + 1u); else { c.pc = 0x001E5A60u; return; } if (c.pc != 0x00138500u) [[unlikely]] return; }
L_00138500:
    c.f[1] = ld32((c.r[21].w[0] + 1600u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00138540; } }
L_00138510:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 576u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00138540; } }
    c.budget -= 1;
L_00138520:
    st32((c.r[21].w[0] + 1500u), c.r[20].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 274u)));
    set32(c.r[18], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8657u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00138550; } }
    c.budget -= 1;
L_00138540:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00138448u | kUnwind; return; } goto L_00138448; } }
L_00138550:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00138560; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00138750; } }
L_00138560:
    set32(c.r[5], ld32((c.r[21].w[0] + 1492u)));
    st32((c.r[21].w[0] + 1500u), c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00138588; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8656u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0] + 795u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00138590; } }
    c.budget -= 1;
L_00138588:
    set32(c.r[2], 0u + 255u);
    st8((c.r[21].w[0] + 795u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00138590:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8657u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 274u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00138750; } }
L_001385A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47C30000u);
    c.r[2].d[0] = c.r[2].d[0] | 20480ull;
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.f[20] = c.r[2].w[0];
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[19], c.r[19].w[0] - 27856u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 8;
L_001385C8:
    set32(c.r[2], ld32((c.r[19].w[0] + 620u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00138640; } }
    c.r[3].d[0] = ld8((c.r[21].w[0] + 515u));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 515u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00138640; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_00138640; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00138618; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 348u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00138618; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 1500u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_00138640; } }
    c.budget -= 1;
L_00138618:
    set32(c.r[4], c.r[21].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138624u); set32(c.r[5], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x00138624u) [[unlikely]] return; }
L_00138624:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00138640; } }
    c.r[20].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.f[20] = c.f[0];
    set32(c.r[18], 0u + 1u);
    c.budget -= 3;
L_0013863C:
    c.budget -= 1;
L_00138640:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001385C8u | kUnwind; return; } goto L_001385C8; } }
    c.r[2].d[0] = ld16((c.r[28].w[0] - 23892u));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001386E0; } }
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[19], c.r[19].w[0] - 9840u);
    c.budget -= 2;
L_00138668:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[3].d[0] = ld8((c.r[21].w[0] + 515u));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 515u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[1].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_001386C8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001386A0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 348u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001386A0; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 1500u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001386C8; } }
    c.budget -= 1;
L_001386A0:
    set32(c.r[5], c.r[4].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001386ACu); set32(c.r[4], c.r[21].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x001386ACu) [[unlikely]] return; }
L_001386AC:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001386C8; } }
    c.f[20] = c.f[0];
    st8((c.r[21].w[0] + 794u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[18], 0u + 1u);
    set32(c.r[20], 0u - 1u);
    c.budget -= 4;
L_001386C8:
    c.r[2].d[0] = ld16((c.r[28].w[0] - 23892u));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00138668u | kUnwind; return; } goto L_00138668; } }
    c.budget -= 1;
L_001386E0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001386F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00138750; } }
L_001386F0:
    c.r[4].d[0] = c.r[20].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] < 0; set32(c.r[3], c.r[4].w[0] << 4);  if (t) { goto L_00138718; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - 27856u);
    set32(c.r[3], c.r[3].w[0] << 9);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_00138730; } }
L_00138718:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 794u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[2], c.r[2].w[0] - 9840u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
L_00138730:
    st8((c.r[21].w[0] + 795u), static_cast<std::uint8_t>(c.r[20].w[0]));
    set32(c.r[2], 0u + 1u);
    st32((c.r[21].w[0] + 1500u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8657u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 274u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_00138750:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00138780:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00138798; } }
    st16((c.r[28].w[0] - 23896u), static_cast<std::uint16_t>(0u));
    st16((c.r[28].w[0] - 23892u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_00138798:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001387A0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001387B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00138830; } }
L_001387B8:
    c.r[5].d[0] = ld16((c.r[28].w[0] - 23892u));
    c.r[2].d[0] = c.r[5].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001387D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00138830; } }
L_001387D0:
    c.r[3].d[0] = ld16((c.r[28].w[0] - 23896u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[2], c.r[2].w[0] - 10096u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.r[2].d[0] = ld16((c.r[28].w[0] - 23896u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[28].w[0] - 23896u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 576u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00138808; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00138830; } }
L_00138808:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 9840u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[28].w[0] - 23892u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[28].w[0] - 23892u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 10;
L_00138830:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00138840:
    c.r[8].d[0] = ld16((c.r[28].w[0] - 23892u));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_00138858; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001388E0; } }
    c.budget -= 1;
L_00138858:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 794u)));
    c.r[1].d[0] = 0ll < c.r[8].sd[0] ? 1ull : 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[9], c.r[3].w[0] + 1u);  if (t) { goto L_001388D8; } }
    c.r[7].d[0] = ld8((c.r[4].w[0] + 515u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[6], c.r[6].w[0] - 9840u);
    c.budget -= 4;
L_00138880:
    c.r[2].d[0] = c.r[9].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00138890; } }
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00138890:
    set32(c.r[2], c.r[9].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 515u));
    c.budget -= 6;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_001388C8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 1492u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001388C8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[10], 0u + 1u);  if (t) { goto L_001388D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 794u), static_cast<std::uint8_t>(c.r[9].w[0]));  if (t) { goto L_001388D8; } }
    c.budget -= 1;
L_001388C8:
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.r[3].d[0] = c.r[11].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00138880u | kUnwind; return; } goto L_00138880; } }
L_001388D8:
    if (c.r[10].d[0] == 0) c.r[2].d[0] = 0ull;
    c.budget -= 2;
L_001388E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001388F0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 41u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00138920; } }
    c.r[5].d[0] = c.r[4].d[0] << 56;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + 9540u);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = ld16((c.r[3].w[0]));  if (t) { goto L_00138978; } }
L_00138920:
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 5u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 56u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 196u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00138940; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_00138948; } }
L_00138940:
    set32(c.r[6], 0u + 3u);
    c.budget -= 2;
L_00138948:
    c.r[3].d[0] = c.r[6].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);  if (t) { goto L_00138960; } }
    c.r[3].d[0] = ld16((c.r[1].w[0] + 9540u));
    c.r[3].d[0] = c.r[7].d[0] | c.r[3].d[0];
    c.r[7].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 3;
L_00138960:
    c.r[3].d[0] = c.r[6].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);  if (t) { goto L_00138978; } }
    c.r[3].d[0] = ld16((c.r[1].w[0] + 9556u));
    c.r[3].d[0] = c.r[7].d[0] | c.r[3].d[0];
    c.r[7].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 3;
L_00138978:
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00138DF0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 101u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001389A8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00138DF0; } }
L_001389A8:
    c.r[5].d[0] = ld8((c.r[3].w[0] + 184u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00138DF0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; c.r[6].d[0] = c.r[7].d[0] & 65535ull;  if (t) { goto L_00138DF0; } }
    c.r[5].d[0] = c.r[6].d[0] & 512ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_001389F0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 27856u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[5].d[0] = c.r[4].d[0] << 56;  if (t) { goto L_001389F0; } }
    set32(c.r[6], 0u + 1u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 104u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_00138C78; } }
    c.budget -= 1;
L_001389F0:
    c.r[5].d[0] = c.r[6].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_00138A20; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 19152u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[5].d[0] = c.r[4].d[0] << 56;  if (t) { goto L_00138A20; } }
    set32(c.r[6], 0u + 2u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 104u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_00138C78; } }
    c.budget -= 1;
L_00138A20:
    c.r[5].d[0] = c.r[6].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_00138A50; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 10448u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[5].d[0] = c.r[4].d[0] << 56;  if (t) { goto L_00138A50; } }
    set32(c.r[6], 0u + 3u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 104u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_00138C78; } }
    c.budget -= 1;
L_00138A50:
    c.r[5].d[0] = c.r[6].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_00138A80; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 1744u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[5].d[0] = c.r[4].d[0] << 56;  if (t) { goto L_00138A80; } }
    set32(c.r[6], 0u + 4u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 104u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_00138C78; } }
    c.budget -= 1;
L_00138A80:
    c.r[5].d[0] = c.r[6].d[0] & 144ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[8].d[0] = c.r[4].d[0] << 56;  if (t) { goto L_00138B40; } }
    c.r[9].d[0] = 0ull + 0ull;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[6], c.r[6].w[0] - 27856u);
    c.budget -= 5;
L_00138AA0:
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[7], c.r[3].w[0] + 102u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 102u)));
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[5].sd[0] >= 0; c.r[3].d[0] = c.r[5].d[0] & 3ull;  if (t) { goto L_00138AC4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00138AC4; } }
    set32(c.r[3], c.r[3].w[0] - 4u);
    c.budget -= 1;
L_00138AC4:
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[5], c.r[8].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 102u)));
    set32(c.r[5], c.r[7].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 9);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 11;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00138B00; } }
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[5].d[0] = c.r[9].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00138AA0u | kUnwind; return; } goto L_00138AA0; } }
L_00138B00:
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 104u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[5], 0u + 180u);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 106u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    st16((c.r[3].w[0] + 112u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 108u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_00138C78; } }
    c.budget -= 1;
L_00138B40:
    c.r[5].d[0] = c.r[6].d[0] & 9216ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[9].d[0] = c.r[4].d[0] << 56;  if (t) { goto L_00138BD8; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 56);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[6], c.r[6].w[0] - 27856u);
    c.budget -= 5;
L_00138B60:
    set32(c.r[3], c.r[9].w[0] + c.r[3].w[0]);
    set32(c.r[7], c.r[3].w[0] + 102u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 102u)));
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[5].sd[0] >= 0; c.r[3].d[0] = c.r[5].d[0] & 3ull;  if (t) { goto L_00138B84; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00138B84; } }
    set32(c.r[3], c.r[3].w[0] - 4u);
    c.budget -= 1;
L_00138B84:
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[5], c.r[9].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 102u)));
    set32(c.r[5], c.r[7].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 9);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 11;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00138BC0; } }
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[5].d[0] = c.r[8].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00138B60u | kUnwind; return; } goto L_00138B60; } }
L_00138BC0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[5], c.r[9].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 102u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 104u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00138C78; } }
L_00138BD8:
    c.r[5].d[0] = c.r[6].d[0] & 6144ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[10].d[0] = c.r[4].d[0] << 56;  if (t) { goto L_00138C78; } }
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 56);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[8], 0u + 3u);
    set32(c.r[6], c.r[6].w[0] - 27856u);
    c.budget -= 5;
L_00138BF8:
    set32(c.r[5], c.r[10].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 102u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[5].w[0] + 102u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], c.r[10].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[3].w[0] + 102u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 102u)));
    c.budget -= 10;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00138C28; } }
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.budget -= 2;
L_00138C28:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[5], c.r[10].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 102u)));
    set32(c.r[5], c.r[7].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 9);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00138C60; } }
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[5].d[0] = c.r[9].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00138BF8u | kUnwind; return; } goto L_00138BF8; } }
L_00138C60:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[5], c.r[10].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 102u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 104u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_00138C78:
    set32(c.r[6], ld32((c.r[28].w[0] - 23788u)));
    c.r[5].d[0] = c.r[4].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[4], c.r[5].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 104u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00138DE8; } }
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 108u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00138DF0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[7], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] - 27856u);
    set32(c.r[8], 0u + 1u);
    c.budget -= 4;
L_00138CC8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00138D30; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 102u)));
    set32(c.r[10], c.r[6].w[0] + 102u);
    set32(c.r[6], c.r[9].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    set32(c.r[6], c.r[6].w[0] << 9);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[11], ld32((c.r[6].w[0] + 1488u)));
    c.budget -= 11;
    { const bool t = c.r[11].d[0] == 0ull;  if (t) { goto L_00138DA0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 1u)));
    c.r[1].d[0] = c.r[6].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00138DA0; } }
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 8656u)));
    c.budget -= 3;
    { const bool t = c.r[9].sd[0] >= 0; c.r[6].d[0] = c.r[9].d[0] & 3ull;  if (t) { goto L_00138D24; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00138D24; } }
    set32(c.r[6], c.r[6].w[0] - 4u);
    c.budget -= 1;
L_00138D24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_00138D78; } }
    c.budget -= 1;
L_00138D30:
    set32(c.r[6], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[10], c.r[6].w[0] + 102u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 102u)));
    set32(c.r[9], c.r[6].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[9].sd[0] >= 0; c.r[6].d[0] = c.r[9].d[0] & 3ull;  if (t) { goto L_00138D58; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00138D58; } }
    set32(c.r[6], c.r[6].w[0] - 4u);
    c.budget -= 1;
L_00138D58:
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 102u)));
    set32(c.r[6], c.r[9].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    set32(c.r[6], c.r[6].w[0] << 9);
    set32(c.r[11], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 8;
L_00138D78:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0])));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00138DA0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[8].d[0];  if (t) { goto L_00138DA0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[7].d[0];  if (t) { goto L_00138DB0; } }
    c.budget -= 1;
L_00138DA0:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[6].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00138CC8u | kUnwind; return; } goto L_00138CC8; } }
L_00138DB0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[7], c.r[5].w[0] << 1);
    set32(c.r[6], 0u + 180u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    st16((c.r[3].w[0] + 112u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    st16((c.r[3].w[0] + 108u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 106u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00138DF0; } }
    c.budget -= 1;
L_00138DE8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0] + 102u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00138DF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00138E00:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 29024u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] << 56;
    set32(c.r[8], ld32((c.r[28].w[0] - 23788u)));
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[6], c.r[5].w[0] + 4u);
    c.budget -= 15;
L_00138E3C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] - 27856u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[7], c.r[16].w[0] + c.r[8].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 102u)));
    set32(c.r[5], c.r[5].w[0] << 7);
    set32(c.r[18], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[8].w[0] + 184u));
    set32(c.r[5], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 9);
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[4].w[0] + c.r[5].w[0]);  if (t) { goto L_001390A0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001390A0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00138F00; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00138EA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00138F40; } }
L_00138EA0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138EB0u); set32(c.r[6], 0u + 384u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00138EB0u) [[unlikely]] return; }
L_00138EB0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00138EE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 208u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00138EE8; } }
    c.budget -= 1;
L_00138EE0:
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 208u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00138EE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138EF4u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00138EF4u) [[unlikely]] return; }
L_00138EF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138EFCu); set32(c.r[4], c.r[18].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x00138EFCu) [[unlikely]] return; }
L_00138EFC:
    c.budget -= 1;
L_00138F00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8656u)));
    st8((c.r[18].w[0] + 346u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 10u);  if (t) { goto L_00138F38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 347u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00138F40; } }
    c.budget -= 1;
L_00138F38:
    set32(c.r[3], 0u + 2u);
    st8((c.r[18].w[0] + 347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00138F40:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 106u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00138F68; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 346u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8656u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00139028; } }
    c.budget -= 1;
L_00138F68:
    st8((c.r[18].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 106u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8656u)));
    st8((c.r[18].w[0] + 346u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00138FC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138F9Cu);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x00138F9Cu) [[unlikely]] return; }
L_00138F9C:
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] + 2336u);
    c.r[4].d[0] = c.r[4].d[0] & 15ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 347u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00138FE8; } }
L_00138FC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138FC8u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x00138FC8u) [[unlikely]] return; }
L_00138FC8:
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] + 2320u);
    c.r[4].d[0] = c.r[4].d[0] & 15ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[18].w[0] + 347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_00138FE8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00139008; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[3], 0u + 65u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00139028; } }
    c.budget -= 1;
L_00139008:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 347u)));
    set32(c.r[3], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 15u);  if (t) { goto L_00139020; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00139028; } }
L_00139020:
    set32(c.r[3], 0u - 1u);
    st8((c.r[18].w[0] + 347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00139028:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00139050; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 108u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_001390A0; } }
L_00139050:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 347u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00139098; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139068u);  if (depth < kMaxDepth) unit_000C(c, 333u, depth + 1u); else { c.pc = 0x00133EE0u; return; } if (c.pc != 0x00139068u) [[unlikely]] return; }
L_00139068:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 347u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[7].d[0] = c.r[19].d[0] << 56;
    set32(c.r[2], c.r[2].w[0] + 2256u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00139098u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00139098u) [[unlikely]] return; }
L_00139098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001390A0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 192u, depth + 1u); else { c.pc = 0x0013A590u; return; } if (c.pc != 0x001390A0u) [[unlikely]] return; }
L_001390A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001390C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 2352u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[29].w[0] + 80u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[5].w[0] + 2096u));
    st32((c.r[4].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 2100u));
    st32((c.r[4].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 2104u));
    st32((c.r[4].w[0] + 56u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00139118; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139278; } }
L_00139118:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013912Cu); st32((c.r[17].w[0] + 332u), c.f[0]);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x0013912Cu) [[unlikely]] return; }
L_0013912C:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00139158; } }
    c.f[0] = ld32((c.r[17].w[0] + 332u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 332u), c.f[0]);
    c.budget -= 7;
L_00139158:
    set32(c.r[2], ld32((c.r[16].w[0] + 1488u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 64u);  if (t) { goto L_001391E0; } }
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139170u); set32(c.r[6], c.r[16].w[0] + 1296u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00139170u) [[unlikely]] return; }
L_00139170:
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[4], c.r[16].w[0] + 8592u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139180u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 126u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x00139180u) [[unlikely]] return; }
L_00139180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139188u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x00139188u) [[unlikely]] return; }
L_00139188:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[16].w[0] + 8592u);
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] - 8192u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001391A4u); c.r[18].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001391A4u) [[unlikely]] return; }
L_001391A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001391ACu); c.r[4].d[0] = c.r[18].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001391ACu) [[unlikely]] return; }
L_001391AC:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001391B8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x001391B8u) [[unlikely]] return; }
L_001391B8:
    c.f[12] = ld32((c.r[17].w[0] + 332u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001391C8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x001391C8u) [[unlikely]] return; }
L_001391C8:
    set32(c.r[4], c.r[17].w[0] + 16u);
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001391D8u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x001391D8u) [[unlikely]] return; }
L_001391D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139230; } }
L_001391E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001391E8u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x001391E8u) [[unlikely]] return; }
L_001391E8:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[16].w[0] + 8592u);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001391FCu); c.r[18].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001391FCu) [[unlikely]] return; }
L_001391FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139204u); c.r[4].d[0] = c.r[18].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x00139204u) [[unlikely]] return; }
L_00139204:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139210u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x00139210u) [[unlikely]] return; }
L_00139210:
    c.f[12] = ld32((c.r[17].w[0] + 332u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139220u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00139220u) [[unlikely]] return; }
L_00139220:
    set32(c.r[4], c.r[17].w[0] + 16u);
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139230u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x00139230u) [[unlikely]] return; }
L_00139230:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139238u); set32(c.r[4], c.r[16].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x00139238u) [[unlikely]] return; }
L_00139238:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139240u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x00139240u) [[unlikely]] return; }
L_00139240:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139250u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x00139250u) [[unlikely]] return; }
L_00139250:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013925Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x0013925Cu) [[unlikely]] return; }
L_0013925C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], c.r[17].w[0] + 288u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139270u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x00139270u) [[unlikely]] return; }
L_00139270:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139288; } }
L_00139278:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139284u); set32(c.r[5], c.r[17].w[0] + 288u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x00139284u) [[unlikely]] return; }
L_00139284:
    c.budget -= 1;
L_00139288:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001392A0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[3] = ld32((c.r[5].w[0] + 32u));
    c.f[2] = ld32((c.r[5].w[0] + 36u));
    c.f[1] = ld32((c.r[5].w[0] + 40u));
    c.f[0] = ld32((c.r[5].w[0] + 44u));
    st32((c.r[4].w[0] + 48u), c.f[3]);
    st32((c.r[4].w[0] + 52u), c.f[2]);
    st32((c.r[4].w[0] + 56u), c.f[1]);
    st32((c.r[4].w[0] + 60u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 23;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00139308; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139490; } }
    c.budget -= 1;
L_00139308:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139314u); st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x00139314u) [[unlikely]] return; }
L_00139314:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139328u); c.r[18].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x00139328u) [[unlikely]] return; }
L_00139328:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & 63ull;
    c.r[2].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139344u); c.r[17].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x00139344u) [[unlikely]] return; }
L_00139344:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[16].w[0] + 308u), 0u);
    c.r[2].d[0] = c.r[2].d[0] & 31ull;
    st32((c.r[16].w[0] + 304u), 0u);
    set32(c.r[3], c.r[2].w[0] << 8);
    set32(c.r[4], c.r[21].w[0] + 8592u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 312u), c.r[2].w[0]);
    c.f[3] = ld32((c.r[16].w[0] + 304u));
    set32(c.r[2], c.r[3].w[0] + 2048u);
    c.f[2] = ld32((c.r[16].w[0] + 308u));
    c.r[22].d[0] = c.r[2].d[0] & 65535ull;
    c.f[1] = ld32((c.r[16].w[0] + 312u));
    c.f[0] = ld32((c.r[16].w[0] + 316u));
    st32((c.r[16].w[0] + 288u), c.f[3]);
    st32((c.r[16].w[0] + 292u), c.f[2]);
    st32((c.r[16].w[0] + 296u), c.f[1]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139390u); st32((c.r[16].w[0] + 300u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x00139390u) [[unlikely]] return; }
L_00139390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139398u); c.r[4].d[0] = c.r[18].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x00139398u) [[unlikely]] return; }
L_00139398:
    c.r[2].d[0] = c.r[22].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001393A4u); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001393A4u) [[unlikely]] return; }
L_001393A4:
    set32(c.r[4], c.r[16].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001393B0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x001393B0u) [[unlikely]] return; }
L_001393B0:
    c.f[0] = ld32((c.r[20].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[16].w[0] + 304u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001393CCu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x001393CCu) [[unlikely]] return; }
L_001393CC:
    set32(c.r[4], c.r[16].w[0] + 16u);
    set32(c.r[5], c.r[16].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001393DCu); set32(c.r[6], c.r[16].w[0] + 304u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x001393DCu) [[unlikely]] return; }
L_001393DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001393E4u); set32(c.r[4], c.r[21].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001393E4u) [[unlikely]] return; }
L_001393E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001393ECu); c.r[4].d[0] = c.r[17].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001393ECu) [[unlikely]] return; }
L_001393EC:
    set32(c.r[4], c.r[16].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001393F8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x001393F8u) [[unlikely]] return; }
L_001393F8:
    c.f[12] = ld32((c.r[20].w[0]));
    set32(c.r[4], c.r[16].w[0] + 288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139408u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00139408u) [[unlikely]] return; }
L_00139408:
    set32(c.r[4], c.r[16].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139414u); set32(c.r[5], c.r[16].w[0] + 304u);  if (depth < kMaxDepth) unit_0009(c, 207u, depth + 1u); else { c.pc = 0x00127450u; return; } if (c.pc != 0x00139414u) [[unlikely]] return; }
L_00139414:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[17], c.r[19].w[0] << 1);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 112u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_00139434; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00139434:
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[16].w[0] + 288u);
    c.budget -= 2;
L_0013943C:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139464u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00139464u) [[unlikely]] return; }
L_00139464:
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], c.r[17].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 112u)));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_00139480; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 2;
L_00139480:
    set32(c.r[3], c.r[17].w[0] + c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 108u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_001394B0; } }
    c.budget -= 1;
L_00139490:
    set32(c.r[4], c.r[16].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013949Cu); set32(c.r[5], c.r[16].w[0] + 288u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0013949Cu) [[unlikely]] return; }
L_0013949C:
    set32(c.r[4], c.r[16].w[0] + 16u);
    set32(c.r[5], c.r[16].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001394ACu); set32(c.r[6], c.r[16].w[0] + 304u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x001394ACu) [[unlikely]] return; }
L_001394AC:
    c.budget -= 1;
L_001394B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001394E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 2368u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[3], c.r[29].w[0] + 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.f[3] = ld32((c.r[5].w[0] + 32u));
    c.f[2] = ld32((c.r[5].w[0] + 36u));
    c.f[1] = ld32((c.r[5].w[0] + 40u));
    c.f[0] = ld32((c.r[5].w[0] + 44u));
    st32((c.r[4].w[0] + 48u), c.f[3]);
    st32((c.r[4].w[0] + 52u), c.f[2]);
    st32((c.r[4].w[0] + 56u), c.f[1]);
    st32((c.r[4].w[0] + 60u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 24;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00139548; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139680; } }
L_00139548:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013956Cu); st32((c.r[19].w[0] + 332u), c.f[0]);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x0013956Cu) [[unlikely]] return; }
L_0013956C:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00139598; } }
    c.f[0] = ld32((c.r[19].w[0] + 332u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 332u), c.f[0]);
    c.budget -= 7;
L_00139598:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001395A0u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x001395A0u) [[unlikely]] return; }
L_001395A0:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001395B4u); c.r[16].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x001395B4u) [[unlikely]] return; }
L_001395B4:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[18].w[0] + 8592u);
    c.r[2].d[0] = c.r[2].d[0] & 31ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + 20480u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001395D0u); c.r[18].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001395D0u) [[unlikely]] return; }
L_001395D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001395D8u); c.r[4].d[0] = c.r[16].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001395D8u) [[unlikely]] return; }
L_001395D8:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001395E4u); set32(c.r[5], c.r[19].w[0] + 304u);  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x001395E4u) [[unlikely]] return; }
L_001395E4:
    c.f[12] = ld32((c.r[19].w[0] + 332u));
    set32(c.r[4], c.r[19].w[0] + 304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001395F4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x001395F4u) [[unlikely]] return; }
L_001395F4:
    set32(c.r[4], c.r[19].w[0] + 16u);
    set32(c.r[5], c.r[19].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139604u); set32(c.r[6], c.r[19].w[0] + 304u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x00139604u) [[unlikely]] return; }
L_00139604:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013960Cu); c.r[4].d[0] = c.r[18].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x0013960Cu) [[unlikely]] return; }
L_0013960C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139618u); set32(c.r[5], c.r[19].w[0] + 288u);  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x00139618u) [[unlikely]] return; }
L_00139618:
    c.f[12] = ld32((c.r[19].w[0] + 332u));
    set32(c.r[4], c.r[19].w[0] + 288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139628u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00139628u) [[unlikely]] return; }
L_00139628:
    set32(c.r[4], c.r[19].w[0] + 288u);
    set32(c.r[6], c.r[19].w[0] + 304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139638u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00139638u) [[unlikely]] return; }
L_00139638:
    set32(c.r[6], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[19].w[0] + 288u);
    set32(c.r[3], c.r[17].w[0] << 1);
    c.f[0] = c.r[2].w[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 112u)));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139678u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00139678u) [[unlikely]] return; }
L_00139678:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001396A0; } }
L_00139680:
    set32(c.r[4], c.r[19].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013968Cu); set32(c.r[5], c.r[19].w[0] + 288u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0013968Cu) [[unlikely]] return; }
L_0013968C:
    set32(c.r[4], c.r[19].w[0] + 16u);
    set32(c.r[5], c.r[19].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013969Cu); set32(c.r[6], c.r[19].w[0] + 304u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x0013969Cu) [[unlikely]] return; }
L_0013969C:
    c.budget -= 1;
L_001396A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001396C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st8((c.r[4].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00139760; } }
    c.f[0] = ld32((c.r[18].w[0] + 8608u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F330000u);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[1] = c.r[2].w[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 8612u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 8616u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139730u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x00139730u) [[unlikely]] return; }
L_00139730:
    c.f[0] = ld32((c.r[18].w[0] + 2032u));
    set32(c.r[4], c.r[19].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    st32((c.r[19].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 2036u));
    st32((c.r[19].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 2040u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139754u); st32((c.r[19].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x00139754u) [[unlikely]] return; }
L_00139754:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139780; } }
    c.budget -= 1;
L_00139760:
    c.f[3] = ld32((c.r[18].w[0] + 32u));
    c.f[2] = ld32((c.r[18].w[0] + 36u));
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = ld32((c.r[18].w[0] + 44u));
    st32((c.r[19].w[0] + 48u), c.f[3]);
    st32((c.r[19].w[0] + 52u), c.f[2]);
    st32((c.r[19].w[0] + 56u), c.f[1]);
    st32((c.r[19].w[0] + 60u), c.f[0]);
    c.budget -= 8;
L_00139780:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00139798; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139818; } }
    c.budget -= 1;
L_00139798:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001397C0u); st32((c.r[19].w[0] + 332u), c.f[0]);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x001397C0u) [[unlikely]] return; }
L_001397C0:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] - 8192u);
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001397E0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001397E0u) [[unlikely]] return; }
L_001397E0:
    c.f[1] = ld32((c.r[19].w[0] + 332u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 304u), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001397F8u); st32((c.r[19].w[0] + 308u), 0u);  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001397F8u) [[unlikely]] return; }
L_001397F8:
    c.f[1] = ld32((c.r[19].w[0] + 332u));
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[4], 0u + 60u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 312u), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[2].w[0] + 108u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 8;
L_00139818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139820u); set32(c.r[4], c.r[18].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x00139820u) [[unlikely]] return; }
L_00139820:
    set32(c.r[4], c.r[19].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013982Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x0013982Cu) [[unlikely]] return; }
L_0013982C:
    set32(c.r[4], c.r[19].w[0] + 16u);
    set32(c.r[5], c.r[19].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013983Cu); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x0013983Cu) [[unlikely]] return; }
L_0013983C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00139840:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00139860:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[5].w[0] + 2096u));
    c.budget -= 8;
L_00139880:
    st32((c.r[4].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 2100u));
    st32((c.r[4].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 2104u));
    st32((c.r[4].w[0] + 56u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001398A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139AA0; } }
L_001398A8:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001398CCu); st32((c.r[18].w[0] + 332u), c.f[0]);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x001398CCu) [[unlikely]] return; }
L_001398CC:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001398F8; } }
    c.f[0] = ld32((c.r[18].w[0] + 332u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40200000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 332u), c.f[0]);
    c.budget -= 7;
L_001398F8:
    set32(c.r[2], ld32((c.r[17].w[0] + 1488u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 80u);  if (t) { goto L_001399D8; } }
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139910u); set32(c.r[6], c.r[17].w[0] + 1296u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00139910u) [[unlikely]] return; }
L_00139910:
    set32(c.r[16], c.r[29].w[0] + 84u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x37270000u);
    st32((c.r[16].w[0]), 0u);
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[19], c.r[29].w[0] + 88u);
    c.f[3] = ld32((c.r[19].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 50604ull;
    c.f[1] = fp::mul(c.f[0], c.f[0]);
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00139970; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139958u); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x00139958u) [[unlikely]] return; }
L_00139958:
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139968u); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x00139968u) [[unlikely]] return; }
L_00139968:
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[19].w[0]), c.f[0]);
    c.budget -= 2;
L_00139970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139978u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x00139978u) [[unlikely]] return; }
L_00139978:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 127ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] - 16384u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139990u); c.r[19].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00139990u) [[unlikely]] return; }
L_00139990:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139998u); c.r[4].d[0] = c.r[19].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x00139998u) [[unlikely]] return; }
L_00139998:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001399A4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x001399A4u) [[unlikely]] return; }
L_001399A4:
    c.f[12] = ld32((c.r[18].w[0] + 332u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001399B4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x001399B4u) [[unlikely]] return; }
L_001399B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], c.r[18].w[0] + 16u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001399CCu); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x001399CCu) [[unlikely]] return; }
L_001399CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139A40; } }
    c.budget -= 1;
L_001399D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001399E0u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x001399E0u) [[unlikely]] return; }
L_001399E0:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001399F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001399F8u) [[unlikely]] return; }
L_001399F8:
    c.f[3] = ld32((c.r[18].w[0] + 332u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = ld32((c.r[17].w[0] + 32u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139A2Cu); st32((c.r[18].w[0] + 20u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x00139A2Cu) [[unlikely]] return; }
L_00139A2C:
    c.f[2] = ld32((c.r[18].w[0] + 332u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 24u), c.f[0]);
    c.budget -= 5;
L_00139A40:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00139A68; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00139A80; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00139A80; } }
    c.budget -= 1;
L_00139A68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139A70u); set32(c.r[4], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_0011(c, 196u, depth + 1u); else { c.pc = 0x00146480u; return; } if (c.pc != 0x00139A70u) [[unlikely]] return; }
L_00139A70:
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 20u), c.f[0]);
    c.budget -= 4;
L_00139A80:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[18].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139A94u); set32(c.r[7], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_000D(c, 132u, depth + 1u); else { c.pc = 0x00136280u; return; } if (c.pc != 0x00139A94u) [[unlikely]] return; }
L_00139A94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139B10; } }
    c.budget -= 1;
L_00139AA0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[16], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 108u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 112u)));
    set32(c.r[3], c.r[3].w[0] - 20u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00139B10; } }
    c.f[3] = ld32((c.r[18].w[0] + 16u));
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.f[2] = ld32((c.r[18].w[0] + 20u));
    set32(c.r[7], c.r[18].w[0] + 48u);
    c.f[1] = ld32((c.r[18].w[0] + 24u));
    c.f[0] = ld32((c.r[18].w[0] + 28u));
    st32((c.r[6].w[0]), c.f[3]);
    st32((c.r[6].w[0] + 4u), c.f[2]);
    st32((c.r[6].w[0] + 8u), c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139AF0u); st32((c.r[6].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_000D(c, 192u, depth + 1u); else { c.pc = 0x00136B30u; return; } if (c.pc != 0x00139AF0u) [[unlikely]] return; }
L_00139AF0:
    c.r[3].d[0] = c.r[2].d[0] & 6ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00139B10; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    st16((c.r[3].w[0] + 108u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 5;
L_00139B10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00139B30:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[5].w[0] + 32u));
    st32((c.r[4].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[1] = ld32((c.r[5].w[0] + 36u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 40u));
    st32((c.r[4].w[0] + 56u), c.f[0]);
    c.budget -= 20;
L_00139B80:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00139B98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139D40; } }
    c.budget -= 1;
L_00139B98:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139BA4u); st8((c.r[21].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x00139BA4u) [[unlikely]] return; }
L_00139BA4:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139BB8u); c.r[17].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x00139BB8u) [[unlikely]] return; }
L_00139BB8:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & 63ull;
    c.r[2].d[0] = c.r[17].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139BD4u); c.r[16].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x00139BD4u) [[unlikely]] return; }
L_00139BD4:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[21].w[0] + 308u), 0u);
    c.r[2].d[0] = c.r[2].d[0] & 31ull;
    st32((c.r[21].w[0] + 304u), 0u);
    set32(c.r[3], c.r[2].w[0] << 8);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[21].w[0] + 312u), c.r[2].w[0]);
    c.f[3] = ld32((c.r[21].w[0] + 304u));
    set32(c.r[2], c.r[3].w[0] + 2048u);
    c.f[2] = ld32((c.r[21].w[0] + 308u));
    c.r[22].d[0] = c.r[2].d[0] & 65535ull;
    c.f[1] = ld32((c.r[21].w[0] + 312u));
    c.f[0] = ld32((c.r[21].w[0] + 316u));
    st32((c.r[21].w[0] + 288u), c.f[3]);
    st32((c.r[21].w[0] + 292u), c.f[2]);
    st32((c.r[21].w[0] + 296u), c.f[1]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139C1Cu); st32((c.r[21].w[0] + 300u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00139C1Cu) [[unlikely]] return; }
L_00139C1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139C24u); c.r[4].d[0] = c.r[17].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x00139C24u) [[unlikely]] return; }
L_00139C24:
    c.r[2].d[0] = c.r[22].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139C30u); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x00139C30u) [[unlikely]] return; }
L_00139C30:
    set32(c.r[4], c.r[21].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139C3Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x00139C3Cu) [[unlikely]] return; }
L_00139C3C:
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[21].w[0] + 304u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139C58u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00139C58u) [[unlikely]] return; }
L_00139C58:
    set32(c.r[4], c.r[21].w[0] + 16u);
    set32(c.r[5], c.r[21].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139C68u); set32(c.r[6], c.r[21].w[0] + 304u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x00139C68u) [[unlikely]] return; }
L_00139C68:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], c.r[21].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139C7Cu); set32(c.r[7], c.r[21].w[0] + 48u);  if (depth < kMaxDepth) unit_000D(c, 192u, depth + 1u); else { c.pc = 0x00136B30u; return; } if (c.pc != 0x00139C7Cu) [[unlikely]] return; }
L_00139C7C:
    c.r[3].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_00139C90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0] + 347u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00139DB8; } }
L_00139C90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139C98u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00139C98u) [[unlikely]] return; }
L_00139C98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139CA0u); c.r[4].d[0] = c.r[16].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x00139CA0u) [[unlikely]] return; }
L_00139CA0:
    set32(c.r[4], c.r[21].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139CACu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x00139CACu) [[unlikely]] return; }
L_00139CAC:
    c.f[12] = ld32((c.r[19].w[0]));
    set32(c.r[4], c.r[21].w[0] + 288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139CBCu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00139CBCu) [[unlikely]] return; }
L_00139CBC:
    set32(c.r[4], c.r[21].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139CC8u); set32(c.r[5], c.r[21].w[0] + 304u);  if (depth < kMaxDepth) unit_0009(c, 207u, depth + 1u); else { c.pc = 0x00127450u; return; } if (c.pc != 0x00139CC8u) [[unlikely]] return; }
L_00139CC8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[16], c.r[18].w[0] << 1);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 112u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_00139CE8; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00139CE8:
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[21].w[0] + 288u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139D18u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00139D18u) [[unlikely]] return; }
L_00139D18:
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], c.r[16].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 112u)));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_00139D34; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 2;
L_00139D34:
    set32(c.r[3], c.r[16].w[0] + c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 108u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_00139DB8; } }
L_00139D40:
    set32(c.r[4], c.r[21].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139D4Cu); set32(c.r[5], c.r[21].w[0] + 288u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x00139D4Cu) [[unlikely]] return; }
L_00139D4C:
    set32(c.r[4], c.r[21].w[0] + 16u);
    set32(c.r[5], c.r[21].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139D5Cu); set32(c.r[6], c.r[21].w[0] + 304u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x00139D5Cu) [[unlikely]] return; }
L_00139D5C:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], c.r[21].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139D70u); set32(c.r[7], c.r[21].w[0] + 48u);  if (depth < kMaxDepth) unit_000D(c, 192u, depth + 1u); else { c.pc = 0x00136B30u; return; } if (c.pc != 0x00139D70u) [[unlikely]] return; }
L_00139D70:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[4], c.r[18].w[0] << 1);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 108u)));
    set32(c.r[6], c.r[3].w[0] + 108u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 112u)));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));  if (t) { goto L_00139D98; } }
    set32(c.r[3], c.r[4].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 2;
L_00139D98:
    set32(c.r[3], c.r[3].w[0] - 10u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00139DB8; } }
    c.r[3].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00139DB8; } }
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00139DB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00139DE0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[1] = c.r[2].w[0];
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30368u)));
    c.f[0] = ld32((c.r[5].w[0] + 32u));
    c.f[21] = ld32((c.r[3].w[0] + 640u));
    c.f[20] = ld32((c.r[3].w[0] + 648u));
    st32((c.r[4].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[2] = ld32((c.r[5].w[0] + 36u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    st32((c.r[4].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 40u));
    st32((c.r[4].w[0] + 56u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 29;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00139E60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139FD8; } }
    c.budget -= 1;
L_00139E60:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139E74u); st32((c.r[19].w[0] + 332u), c.f[0]);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x00139E74u) [[unlikely]] return; }
L_00139E74:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00139EA0; } }
    c.f[0] = ld32((c.r[19].w[0] + 332u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40200000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 332u), c.f[0]);
    c.budget -= 7;
L_00139EA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139EA8u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x00139EA8u) [[unlikely]] return; }
L_00139EA8:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139EBCu); c.r[16].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x00139EBCu) [[unlikely]] return; }
L_00139EBC:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[16].d[0] = c.r[16].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 127ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 4096u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139EE0u); c.r[20].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x00139EE0u) [[unlikely]] return; }
L_00139EE0:
    c.f[2] = ld32((c.r[19].w[0] + 332u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = ld32((c.r[18].w[0] + 32u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 16u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139F00u); st32((c.r[19].w[0] + 20u), 0u);  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x00139F00u) [[unlikely]] return; }
L_00139F00:
    c.f[2] = ld32((c.r[19].w[0] + 332u));
    c.r[16].d[0] = c.r[20].d[0] & 65535ull;
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139F20u); st32((c.r[19].w[0] + 24u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x00139F20u) [[unlikely]] return; }
L_00139F20:
    c.f[2] = ld32((c.r[19].w[0] + 332u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = ld32((c.r[18].w[0] + 32u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 116u), 0u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139F40u); st32((c.r[29].w[0] + 112u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x00139F40u) [[unlikely]] return; }
L_00139F40:
    c.f[2] = ld32((c.r[19].w[0] + 332u));
    set32(c.r[4], c.r[19].w[0] + 288u);
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[19].w[0] + 16u);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139F64u); st32((c.r[29].w[0] + 120u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00139F64u) [[unlikely]] return; }
L_00139F64:
    set32(c.r[6], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[19].w[0] + 288u);
    set32(c.r[3], c.r[17].w[0] << 1);
    c.f[0] = c.r[2].w[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 112u)));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139FA4u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00139FA4u) [[unlikely]] return; }
L_00139FA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139FACu); set32(c.r[4], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_0011(c, 196u, depth + 1u); else { c.pc = 0x00146480u; return; } if (c.pc != 0x00139FACu) [[unlikely]] return; }
L_00139FAC:
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[19].w[0] + 16u);
    set32(c.r[7], c.r[19].w[0] + 48u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139FCCu); st32((c.r[19].w[0] + 20u), c.f[0]);  if (depth < kMaxDepth) unit_000D(c, 132u, depth + 1u); else { c.pc = 0x00136280u; return; } if (c.pc != 0x00139FCCu) [[unlikely]] return; }
L_00139FCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013A0C0; } }
    c.budget -= 1;
L_00139FD8:
    set32(c.r[4], c.r[19].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139FE4u); set32(c.r[5], c.r[19].w[0] + 288u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x00139FE4u) [[unlikely]] return; }
L_00139FE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139FECu); set32(c.r[4], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_0011(c, 196u, depth + 1u); else { c.pc = 0x00146480u; return; } if (c.pc != 0x00139FECu) [[unlikely]] return; }
L_00139FEC:
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[19].w[0] + 16u);
    set32(c.r[7], c.r[19].w[0] + 48u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A00Cu); st32((c.r[19].w[0] + 20u), c.f[0]);  if (depth < kMaxDepth) unit_000D(c, 192u, depth + 1u); else { c.pc = 0x00136B30u; return; } if (c.pc != 0x0013A00Cu) [[unlikely]] return; }
L_0013A00C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[6], c.r[17].w[0] << 1);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 108u)));
    set32(c.r[5], c.r[3].w[0] + 108u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 112u)));
    set32(c.r[3], c.r[3].w[0] - 20u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0013A0C0; } }
    c.f[3] = ld32((c.r[19].w[0] + 16u));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[2] = ld32((c.r[19].w[0] + 20u));
    c.budget -= 3;
L_0013A040:
    c.r[3].d[0] = c.r[2].d[0] & 2ull;
    c.f[1] = ld32((c.r[19].w[0] + 24u));
    c.f[0] = ld32((c.r[19].w[0] + 28u));
    st32((c.r[4].w[0]), c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0] + 12u), c.f[0]);  if (t) { goto L_0013A068; } }
    set32(c.r[3], 0u + 1u);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0013A068:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43F50000u);
    c.f[1] = c.r[3].w[0];
    c.f[2] = ld32((c.r[29].w[0] + 112u));
    c.f[0] = fp::add(c.f[1], c.f[21]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[0] = fp::sub(c.f[21], c.f[1]);  if (t) { goto L_0013A0B0; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0013A0B0; } }
    c.f[2] = ld32((c.r[29].w[0] + 120u));
    c.f[0] = fp::add(c.f[1], c.f[20]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[0] = fp::sub(c.f[20], c.f[1]);  if (t) { goto L_0013A0B0; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0013A0C0; } }
L_0013A0B0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st16((c.r[3].w[0] + 108u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 4;
L_0013A0C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0013A0F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0013A140; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[18].w[0] + 347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[18].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A134u); st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000E(c, 148u, depth + 1u); else { c.pc = 0x00139DE0u; return; } if (c.pc != 0x0013A134u) [[unlikely]] return; }
L_0013A134:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013A2B0; } }
    c.budget -= 1;
L_0013A140:
    set32(c.r[2], 0u + 1u);
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    st32((c.r[18].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    st32((c.r[18].w[0] + 56u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0013A188; } }
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F330000u);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.f[1] = c.r[2].w[0];
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 52u), c.f[0]);  if (t) { goto L_0013A1A8; } }
    c.budget -= 1;
L_0013A188:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    st32((c.r[18].w[0] + 52u), c.f[0]);
    c.budget -= 8;
L_0013A1A8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013A1C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013A270; } }
    c.budget -= 1;
L_0013A1C0:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0013A1F8; } }
    c.f[0] = ld32((c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F330000u);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 332u), c.f[0]);  if (t) { goto L_0013A210; } }
L_0013A1F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 332u), c.f[0]);
    c.budget -= 6;
L_0013A210:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A218u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x0013A218u) [[unlikely]] return; }
L_0013A218:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] - 8192u);
    c.r[19].d[0] = c.r[2].d[0] << 48;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A238u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x0013A238u) [[unlikely]] return; }
L_0013A238:
    c.f[1] = ld32((c.r[18].w[0] + 332u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 304u), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A250u); st32((c.r[18].w[0] + 308u), 0u);  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x0013A250u) [[unlikely]] return; }
L_0013A250:
    c.f[1] = ld32((c.r[18].w[0] + 332u));
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[4], 0u + 60u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 312u), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[2].w[0] + 108u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 8;
L_0013A270:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A278u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0013A278u) [[unlikely]] return; }
L_0013A278:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A280u); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x0013A280u) [[unlikely]] return; }
L_0013A280:
    set32(c.r[4], c.r[18].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A28Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x0013A28Cu) [[unlikely]] return; }
L_0013A28C:
    set32(c.r[4], c.r[18].w[0] + 16u);
    set32(c.r[5], c.r[18].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A29Cu); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x0013A29Cu) [[unlikely]] return; }
L_0013A29C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[18].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A2B0u); set32(c.r[7], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_000D(c, 132u, depth + 1u); else { c.pc = 0x00136280u; return; } if (c.pc != 0x0013A2B0u) [[unlikely]] return; }
L_0013A2B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0013A2D0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.f[1] = c.r[3].w[0];
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[5].w[0] + 32u));
    st32((c.r[4].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[2] = ld32((c.r[5].w[0] + 36u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    st32((c.r[4].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 40u));
    st32((c.r[4].w[0] + 56u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 25;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0013A340; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013A4D8; } }
    c.budget -= 1;
L_0013A340:
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A34Cu); st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x0013A34Cu) [[unlikely]] return; }
L_0013A34C:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A360u); c.r[18].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x0013A360u) [[unlikely]] return; }
L_0013A360:
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[2].d[0] & 7ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    set32(c.r[3], c.r[3].w[0] << 8);
    c.f[1] = c.r[2].w[0];
    set32(c.r[3], c.r[3].w[0] + 3072u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.r[19].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A38Cu); st32((c.r[17].w[0] + 332u), c.f[0]);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x0013A38Cu) [[unlikely]] return; }
L_0013A38C:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013A3B8; } }
    c.f[0] = ld32((c.r[17].w[0] + 332u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 332u), c.f[0]);
    c.budget -= 7;
L_0013A3B8:
    st32((c.r[17].w[0] + 308u), 0u);
    st32((c.r[17].w[0] + 304u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A3CCu); st32((c.r[17].w[0] + 312u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0013A3CCu) [[unlikely]] return; }
L_0013A3CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A3D4u); c.r[4].d[0] = c.r[18].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x0013A3D4u) [[unlikely]] return; }
L_0013A3D4:
    c.r[2].d[0] = c.r[19].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A3E0u); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x0013A3E0u) [[unlikely]] return; }
L_0013A3E0:
    set32(c.r[4], c.r[17].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A3ECu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x0013A3ECu) [[unlikely]] return; }
L_0013A3EC:
    c.f[12] = ld32((c.r[17].w[0] + 332u));
    set32(c.r[4], c.r[17].w[0] + 304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A3FCu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0013A3FCu) [[unlikely]] return; }
L_0013A3FC:
    set32(c.r[4], c.r[17].w[0] + 16u);
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A40Cu); set32(c.r[6], c.r[17].w[0] + 304u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x0013A40Cu) [[unlikely]] return; }
L_0013A40C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[17].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A420u); set32(c.r[7], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_000D(c, 192u, depth + 1u); else { c.pc = 0x00136B30u; return; } if (c.pc != 0x0013A420u) [[unlikely]] return; }
L_0013A420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A428u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x0013A428u) [[unlikely]] return; }
L_0013A428:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013A448; } }
    c.r[2].d[0] = c.r[18].d[0] & 65535ull;
    c.budget -= 1;
L_0013A43C:
    set32(c.r[2], c.r[2].w[0] + 32256u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_0013A458; } }
L_0013A448:
    c.r[2].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 513u);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 4;
L_0013A458:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A464u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x0013A464u) [[unlikely]] return; }
L_0013A464:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 288u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A484u); st32((c.r[17].w[0] + 292u), 0u);  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x0013A484u) [[unlikely]] return; }
L_0013A484:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A49Cu); st32((c.r[17].w[0] + 296u), c.f[0]);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x0013A49Cu) [[unlikely]] return; }
L_0013A49C:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[6], c.r[20].w[0] << 1);
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], c.r[6].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 112u)));
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_0013A4C8; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 2;
L_0013A4C8:
    set32(c.r[3], c.r[6].w[0] + c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 108u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_0013A570; } }
    c.budget -= 1;
L_0013A4D8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 16u);  if (t) { goto L_0013A4F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A4ECu); set32(c.r[5], c.r[17].w[0] + 288u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0013A4ECu) [[unlikely]] return; }
L_0013A4EC:
    c.budget -= 1;
L_0013A4F0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[18], c.r[20].w[0] << 1);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 108u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 112u)));
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));  if (t) { goto L_0013A514; } }
    set32(c.r[3], c.r[4].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 2;
L_0013A514:
    set32(c.r[3], c.r[3].w[0] - 10u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0013A570; } }
    c.f[3] = ld32((c.r[17].w[0] + 16u));
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.f[2] = ld32((c.r[17].w[0] + 20u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    set32(c.r[7], c.r[17].w[0] + 48u);
    st32((c.r[6].w[0]), c.f[3]);
    st32((c.r[6].w[0] + 4u), c.f[2]);
    st32((c.r[6].w[0] + 8u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A558u); st32((c.r[6].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_000D(c, 132u, depth + 1u); else { c.pc = 0x00136280u; return; } if (c.pc != 0x0013A558u) [[unlikely]] return; }
L_0013A558:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013A570; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    st16((c.r[3].w[0] + 108u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 4;
L_0013A570:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0013A590:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 144u);  if (t) { goto L_0013A698; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 9u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 48u);  if (t) { goto L_0013A638; } }
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A5CCu); set32(c.r[6], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013A5CCu) [[unlikely]] return; }
L_0013A5CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A5D4u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x0013A5D4u) [[unlikely]] return; }
L_0013A5D4:
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A5E4u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 126u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x0013A5E4u) [[unlikely]] return; }
L_0013A5E4:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 76u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A5F4u); set32(c.r[6], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_002E(c, 137u, depth + 1u); else { c.pc = 0x001B9C80u; return; } if (c.pc != 0x0013A5F4u) [[unlikely]] return; }
L_0013A5F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A5FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0013A5FCu) [[unlikely]] return; }
L_0013A5FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A604u); set32(c.r[4], ld32((c.r[29].w[0] + 72u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x0013A604u) [[unlikely]] return; }
L_0013A604:
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A610u); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x0013A610u) [[unlikely]] return; }
L_0013A610:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A618u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0013A618u) [[unlikely]] return; }
L_0013A618:
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    st32((c.r[17].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    st32((c.r[17].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 72u), c.f[0]);  if (t) { goto L_0013A640; } }
    c.budget -= 1;
L_0013A638:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0013A640:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    set32(c.r[4], 0u + 2u);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    st32((c.r[16].w[0] + 56u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A668u); st32((c.r[16].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 167u, depth + 1u); else { c.pc = 0x00126260u; return; } if (c.pc != 0x0013A668u) [[unlikely]] return; }
L_0013A668:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A670u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0013A670u) [[unlikely]] return; }
L_0013A670:
    set32(c.r[4], c.r[17].w[0] + 16u);
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A680u); set32(c.r[6], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 221u, depth + 1u); else { c.pc = 0x00127700u; return; } if (c.pc != 0x0013A680u) [[unlikely]] return; }
L_0013A680:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A688u); set32(c.r[4], c.r[17].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0013A688u) [[unlikely]] return; }
L_0013A688:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A690u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 167u, depth + 1u); else { c.pc = 0x00126260u; return; } if (c.pc != 0x0013A690u) [[unlikely]] return; }
L_0013A690:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013A6C8; } }
L_0013A698:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A6A0u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0009(c, 167u, depth + 1u); else { c.pc = 0x00126260u; return; } if (c.pc != 0x0013A6A0u) [[unlikely]] return; }
L_0013A6A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A6A8u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0013A6A8u) [[unlikely]] return; }
L_0013A6A8:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A6B8u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x00127690u; return; } if (c.pc != 0x0013A6B8u) [[unlikely]] return; }
L_0013A6B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A6C0u); set32(c.r[4], c.r[17].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0013A6C0u) [[unlikely]] return; }
L_0013A6C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A6C8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 167u, depth + 1u); else { c.pc = 0x00126260u; return; } if (c.pc != 0x0013A6C8u) [[unlikely]] return; }
L_0013A6C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0013A6E0:
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[5], 0u + 360u);
    c.r[3].d[0] = 0ull + 0ull;
    st8((c.r[4].w[0] + 102u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[4].w[0] + 104u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    st16((c.r[4].w[0] + 112u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    st16((c.r[4].w[0] + 108u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[9], 0u + 26u);
    set32(c.r[8], 0u + 46u);
    set32(c.r[7], 0u + 44u);
    set32(c.r[6], 0u + 42u);
    set32(c.r[5], 0u + 24u);
    set32(c.r[10], c.r[10].w[0] - 27856u);
    c.budget -= 18;
L_0013A728:
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[12], c.r[4].w[0] + 102u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 102u)));
    set32(c.r[11], c.r[4].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[11].sd[0] >= 0; c.r[4].d[0] = c.r[11].d[0] & 3ull;  if (t) { goto L_0013A74C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013A74C; } }
    set32(c.r[4], c.r[4].w[0] - 4u);
    c.budget -= 1;
L_0013A74C:
    st8((c.r[12].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 102u)));
    set32(c.r[4], c.r[11].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[11].w[0]);
    set32(c.r[4], c.r[4].w[0] << 9);
    set32(c.r[11], c.r[10].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0])));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013A7B0; } }
    c.r[4].d[0] = ld8((c.r[11].w[0] + 8658u));
    c.r[1].d[0] = c.r[4].sd[0] < 56ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0013A7B0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[9].d[0];  if (t) { goto L_0013A7C0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[8].d[0];  if (t) { goto L_0013A7C0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[7].d[0];  if (t) { goto L_0013A7C0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[6].d[0];  if (t) { goto L_0013A7C0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_0013A7C0; } }
    c.budget -= 1;
L_0013A7B0:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[4].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013A728u | kUnwind; return; } goto L_0013A728; } }
L_0013A7C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013A7D0:
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 108u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] > 0; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0013A938; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[10], 0u + 26u);
    set32(c.r[3], c.r[3].w[0] - 27856u);
    set32(c.r[9], 0u + 46u);
    set32(c.r[8], 0u + 44u);
    set32(c.r[7], 0u + 42u);
    set32(c.r[6], 0u + 24u);
    set32(c.r[11], 0u + 3u);
    set32(c.r[12], 0u + 1u);
    c.budget -= 10;
L_0013A818:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0013A878; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 102u)));
    set32(c.r[14], c.r[5].w[0] + 102u);
    set32(c.r[5], c.r[13].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[13].w[0]);
    set32(c.r[5], c.r[5].w[0] << 9);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[15], ld32((c.r[5].w[0] + 1488u)));
    c.budget -= 10;
    { const bool t = c.r[15].d[0] == 0ull;  if (t) { goto L_0013A908; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[15].w[0] + 1u)));
    c.r[1].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0013A908; } }
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[15].w[0] + 8656u)));
    c.budget -= 3;
    { const bool t = c.r[13].sd[0] >= 0; c.r[5].d[0] = c.r[13].d[0] & 3ull;  if (t) { goto L_0013A870; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0013A870; } }
    set32(c.r[5], c.r[5].w[0] - 4u);
    c.budget -= 1;
L_0013A870:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[14].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0013A8B8; } }
L_0013A878:
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[14], c.r[5].w[0] + 102u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 102u)));
    set32(c.r[13], c.r[5].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[13].sd[0] >= 0; c.r[5].d[0] = c.r[13].d[0] & 3ull;  if (t) { goto L_0013A89C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0013A89C; } }
    set32(c.r[5], c.r[5].w[0] - 4u);
    c.budget -= 1;
L_0013A89C:
    st8((c.r[14].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 102u)));
    set32(c.r[5], c.r[13].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[13].w[0]);
    set32(c.r[5], c.r[5].w[0] << 9);
    set32(c.r[15], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 7;
L_0013A8B8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[15].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0013A908; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[15].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[12].d[0];  if (t) { goto L_0013A908; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[15].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[11].d[0];  if (t) { goto L_0013A908; } }
    c.r[5].d[0] = ld8((c.r[15].w[0] + 8658u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[10].d[0];  if (t) { goto L_0013A918; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[9].d[0];  if (t) { goto L_0013A918; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[8].d[0];  if (t) { goto L_0013A918; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[7].d[0];  if (t) { goto L_0013A918; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[6].d[0];  if (t) { goto L_0013A918; } }
L_0013A908:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[5].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013A818u | kUnwind; return; } goto L_0013A818; } }
L_0013A918:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[5], 0u + 360u);
    set32(c.r[4], 0u + 1u);
    st16((c.r[3].w[0] + 112u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st16((c.r[3].w[0] + 108u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[3].w[0] + 106u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 8;
L_0013A938:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013A940:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 29024u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] << 56;
    set32(c.r[7], ld32((c.r[28].w[0] - 23788u)));
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[6], c.r[5].w[0] + 4u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] - 27856u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 7);
    set32(c.r[18], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[16].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 102u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 104u)));
    set32(c.r[5], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 9);
    c.budget -= 29;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[4].w[0] + c.r[5].w[0]);  if (t) { goto L_0013ABB0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0013AA38; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013A9D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013AA78; } }
    c.budget -= 1;
L_0013A9D8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A9E8u); set32(c.r[6], 0u + 384u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0013A9E8u) [[unlikely]] return; }
L_0013A9E8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    set32(c.r[3], 0u + 4u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013AA20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 208u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0013AA28; } }
    c.budget -= 1;
L_0013AA20:
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 208u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0013AA28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AA30u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0013AA30u) [[unlikely]] return; }
L_0013AA30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AA38u); set32(c.r[4], c.r[18].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0013AA38u) [[unlikely]] return; }
L_0013AA38:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[18].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8656u)));
    st8((c.r[18].w[0] + 346u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[18].w[0] + 347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013AA78; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 347u)));
    set32(c.r[3], c.r[3].w[0] + 8u);
    st8((c.r[18].w[0] + 347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0013AA78:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 106u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0013AAA0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 346u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8656u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0013AB38; } }
    c.budget -= 1;
L_0013AAA0:
    st8((c.r[18].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 106u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8656u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AAC0u); st8((c.r[18].w[0] + 346u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x0013AAC0u) [[unlikely]] return; }
L_0013AAC0:
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] + 2384u);
    c.r[4].d[0] = c.r[4].d[0] & 15ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[18].w[0] + 347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013AAF8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 347u)));
    set32(c.r[3], c.r[3].w[0] + 8u);
    st8((c.r[18].w[0] + 347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0013AAF8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013AB18; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[3], 0u + 65u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0013AB38; } }
    c.budget -= 1;
L_0013AB18:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 347u)));
    set32(c.r[3], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 15u);  if (t) { goto L_0013AB30; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0013AB38; } }
L_0013AB30:
    set32(c.r[3], 0u - 1u);
    st8((c.r[18].w[0] + 347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0013AB38:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0013AB60; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 108u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_0013ABB0; } }
L_0013AB60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 347u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013ABA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AB78u);  if (depth < kMaxDepth) unit_000C(c, 333u, depth + 1u); else { c.pc = 0x00133EE0u; return; } if (c.pc != 0x0013AB78u) [[unlikely]] return; }
L_0013AB78:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 347u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[7].d[0] = c.r[19].d[0] << 56;
    set32(c.r[2], c.r[2].w[0] + 2256u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013ABA8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013ABA8u) [[unlikely]] return; }
L_0013ABA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013ABB0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 192u, depth + 1u); else { c.pc = 0x0013A590u; return; } if (c.pc != 0x0013ABB0u) [[unlikely]] return; }
L_0013ABB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0013ABD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013ABE0u);  if (depth < kMaxDepth) unit_000E(c, 233u, depth + 1u); else { c.pc = 0x0013AC60u; return; } if (c.pc != 0x0013ABE0u) [[unlikely]] return; }
L_0013ABE0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 77u)));
    c.r[1].d[0] = c.r[2].sd[0] < 106ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[2].d[0] & 240ull;  if (t) { goto L_0013AC00; } }
    set32(c.r[2], 0u + 64u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0013AC48; } }
L_0013AC00:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013AC30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AC18u);  if (depth < kMaxDepth) unit_000E(c, 251u, depth + 1u); else { c.pc = 0x0013AF70u; return; } if (c.pc != 0x0013AC18u) [[unlikely]] return; }
L_0013AC18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AC20u);  if (depth < kMaxDepth) unit_000E(c, 257u, depth + 1u); else { c.pc = 0x0013B0D0u; return; } if (c.pc != 0x0013AC20u) [[unlikely]] return; }
L_0013AC20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AC28u);  if (depth < kMaxDepth) unit_0010(c, 421u, depth + 1u); else { c.pc = 0x00143000u; return; } if (c.pc != 0x0013AC28u) [[unlikely]] return; }
L_0013AC28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AC30u);  if (depth < kMaxDepth) unit_000E(c, 264u, depth + 1u); else { c.pc = 0x0013B250u; return; } if (c.pc != 0x0013AC30u) [[unlikely]] return; }
L_0013AC30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AC38u);  if (depth < kMaxDepth) unit_000E(c, 272u, depth + 1u); else { c.pc = 0x0013B3E0u; return; } if (c.pc != 0x0013AC38u) [[unlikely]] return; }
L_0013AC38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AC40u);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B5C0u; return; } if (c.pc != 0x0013AC40u) [[unlikely]] return; }
L_0013AC40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AC48u);  if (depth < kMaxDepth) unit_0010(c, 460u, depth + 1u); else { c.pc = 0x00143640u; return; } if (c.pc != 0x0013AC48u) [[unlikely]] return; }
L_0013AC48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AC50u);  if (depth < kMaxDepth) unit_000E(c, 236u, depth + 1u); else { c.pc = 0x0013ACF0u; return; } if (c.pc != 0x0013AC50u) [[unlikely]] return; }
L_0013AC50:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0013AC60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], c.r[18].w[0] - 27856u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] + 19112u);
    c.budget -= 10;
L_0013AC88:
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013ACB8; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 620u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0013ACB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013ACACu);  if (depth < kMaxDepth) unit_006A(c, 154u, depth + 1u); else { c.pc = 0x002AA550u; return; } if (c.pc != 0x0013ACACu) [[unlikely]] return; }
L_0013ACAC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 498u)));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0013ACB8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    set32(c.r[16], c.r[16].w[0] + 2u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013AC88u | kUnwind; return; } goto L_0013AC88; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0013ACF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[17], c.r[17].w[0] - 27856u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 8;
L_0013AD10:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013AF48; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0013AE18; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0013ADB0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013AD48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013AE30; } }
    c.budget -= 1;
L_0013AD48:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 564u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013AE30; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0013AE30; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0013AE30; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013AD98; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 584u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AD90u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 129u, depth + 1u); else { c.pc = 0x002610A0u; return; } if (c.pc != 0x0013AD90u) [[unlikely]] return; }
L_0013AD90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013AE30; } }
L_0013AD98:
    set32(c.r[5], ld32((c.r[17].w[0] + 584u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013ADA4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 371u, depth + 1u); else { c.pc = 0x001D3F70u; return; } if (c.pc != 0x0013ADA4u) [[unlikely]] return; }
L_0013ADA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013AE30; } }
    c.budget -= 1;
L_0013ADB0:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 564u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013AE30; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0013AE30; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0013AE30; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013AE00; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 584u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013ADF8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0055(c, 108u, depth + 1u); else { c.pc = 0x00254D10u; return; } if (c.pc != 0x0013ADF8u) [[unlikely]] return; }
L_0013ADF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013AE30; } }
L_0013AE00:
    set32(c.r[5], ld32((c.r[17].w[0] + 584u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AE0Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 28u, depth + 1u); else { c.pc = 0x001B0200u; return; } if (c.pc != 0x0013AE0Cu) [[unlikely]] return; }
L_0013AE0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013AE30; } }
    c.budget -= 1;
L_0013AE18:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 564u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013AE30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AE2Cu);  if (depth < kMaxDepth) unit_00AB(c, 93u, depth + 1u); else { c.pc = 0x003AD080u; return; } if (c.pc != 0x0013AE2Cu) [[unlikely]] return; }
L_0013AE2C:
    c.budget -= 1;
L_0013AE30:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0013AF08; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 514u));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013AE78; } }
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AE5Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0012(c, 40u, depth + 1u); else { c.pc = 0x00148B60u; return; } if (c.pc != 0x0013AE5Cu) [[unlikely]] return; }
L_0013AE5C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013AED0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AE70u);  if (depth < kMaxDepth) unit_0039(c, 228u, depth + 1u); else { c.pc = 0x001E77E0u; return; } if (c.pc != 0x0013AE70u) [[unlikely]] return; }
L_0013AE70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013AED0; } }
L_0013AE78:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AE88u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0012(c, 40u, depth + 1u); else { c.pc = 0x00148B60u; return; } if (c.pc != 0x0013AE88u) [[unlikely]] return; }
L_0013AE88:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0013AEB8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013AEB8; } }
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AEB4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0012(c, 29u, depth + 1u); else { c.pc = 0x00148810u; return; } if (c.pc != 0x0013AEB4u) [[unlikely]] return; }
L_0013AEB4:
    c.budget -= 1;
L_0013AEB8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013AED0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AECCu);  if (depth < kMaxDepth) unit_0039(c, 228u, depth + 1u); else { c.pc = 0x001E77E0u; return; } if (c.pc != 0x0013AECCu) [[unlikely]] return; }
L_0013AECC:
    c.budget -= 1;
L_0013AED0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0013AF08; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 963u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013AF08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AEF4u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x001465C0u; return; } if (c.pc != 0x0013AEF4u) [[unlikely]] return; }
L_0013AEF4:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0013AF08; } }
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.budget -= 1;
L_0013AF08:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0013AF48; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0013AF40; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013AF30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013AF48; } }
L_0013AF30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AF38u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 139u, depth + 1u); else { c.pc = 0x001DCFF0u; return; } if (c.pc != 0x0013AF38u) [[unlikely]] return; }
L_0013AF38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013AF48; } }
L_0013AF40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AF48u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 127u, depth + 1u); else { c.pc = 0x001B1D30u; return; } if (c.pc != 0x0013AF48u) [[unlikely]] return; }
L_0013AF48:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013AD10u | kUnwind; return; } goto L_0013AD10; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0013AF70:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[5], c.r[28].w[0] - 23804u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[6], c.r[6].w[0] + 26976u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 23836u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[7], c.r[4].w[0] << 10);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld16((c.r[5].w[0]));
    c.r[1].d[0] = 0ll < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 20;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[20], c.r[6].w[0] + c.r[7].w[0]);  if (t) { goto L_0013B0A8; } }
L_0013AFC0:
    set32(c.r[18], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0013B088; } }
    c.r[5].d[0] = ld8((c.r[18].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0013B088; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 20u)));
    c.r[5].d[0] = ld8((c.r[5].w[0] + 516u));
    c.r[5].d[0] = c.r[5].d[0] & 15ull;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[5], c.r[28].w[0] - 23816u);  if (t) { goto L_0013B088; } }
    set32(c.r[7], ld32((c.r[28].w[0] - 23836u)));
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00830000u);
    c.r[5].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[6], c.r[6].w[0] + 20832u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] << 10);
    c.r[1].d[0] = 0ll < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[19], c.r[6].w[0] + c.r[7].w[0]);  if (t) { goto L_0013B088; } }
    c.budget -= 1;
L_0013B018:
    set32(c.r[21], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0013B060; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B02Cu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 63u, depth + 1u); else { c.pc = 0x00144A20u; return; } if (c.pc != 0x0013B02Cu) [[unlikely]] return; }
L_0013B02C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013B060; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[4], c.r[18].w[0] + 48u);
    set32(c.r[2], ld32((c.r[21].w[0] + 48u)));
    set32(c.r[5], c.r[21].w[0] + 48u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B050u); c.r[6].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_000E(c, 284u, depth + 1u); else { c.pc = 0x0013B790u; return; } if (c.pc != 0x0013B050u) [[unlikely]] return; }
L_0013B050:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0013B060; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B060u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 290u, depth + 1u); else { c.pc = 0x0013B8D0u; return; } if (c.pc != 0x0013B060u) [[unlikely]] return; }
L_0013B060:
    set32(c.r[4], ld32((c.r[28].w[0] - 23836u)));
    set32(c.r[5], c.r[28].w[0] - 23816u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld16((c.r[5].w[0]));
    c.r[5].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013B018u | kUnwind; return; } goto L_0013B018; } }
    c.budget -= 1;
L_0013B088:
    set32(c.r[6], c.r[4].w[0] << 1);
    set32(c.r[5], c.r[28].w[0] - 23804u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].d[0] = ld16((c.r[5].w[0]));
    c.r[5].d[0] = c.r[17].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013AFC0u | kUnwind; return; } goto L_0013AFC0; } }
L_0013B0A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0013B0D0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[5], c.r[28].w[0] - 23804u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[6], c.r[6].w[0] + 26976u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 23836u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[7], c.r[4].w[0] << 10);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld16((c.r[5].w[0]));
    c.r[1].d[0] = 0ll < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 20;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[20], c.r[6].w[0] + c.r[7].w[0]);  if (t) { goto L_0013B228; } }
L_0013B120:
    set32(c.r[18], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0013B208; } }
    c.r[5].d[0] = ld8((c.r[18].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0013B208; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 20u)));
    c.r[5].d[0] = ld8((c.r[5].w[0] + 516u));
    c.r[5].d[0] = c.r[5].d[0] & 15ull;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[5], c.r[28].w[0] - 23820u);  if (t) { goto L_0013B208; } }
    set32(c.r[7], ld32((c.r[28].w[0] - 23836u)));
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00830000u);
    c.r[5].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[6], c.r[6].w[0] + 18784u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] << 10);
    c.r[1].d[0] = 0ll < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[19], c.r[6].w[0] + c.r[7].w[0]);  if (t) { goto L_0013B208; } }
    c.budget -= 1;
L_0013B178:
    set32(c.r[21], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0013B1E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B18Cu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 63u, depth + 1u); else { c.pc = 0x00144A20u; return; } if (c.pc != 0x0013B18Cu) [[unlikely]] return; }
L_0013B18C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] + 64u);  if (t) { goto L_0013B1E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B19Cu); set32(c.r[5], c.r[21].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x0013B19Cu) [[unlikely]] return; }
L_0013B19C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43340000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0013B1E0; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[4], c.r[18].w[0] + 48u);
    set32(c.r[2], ld32((c.r[21].w[0] + 48u)));
    set32(c.r[5], c.r[21].w[0] + 48u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B1D0u); c.r[6].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_000E(c, 284u, depth + 1u); else { c.pc = 0x0013B790u; return; } if (c.pc != 0x0013B1D0u) [[unlikely]] return; }
L_0013B1D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0013B1E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B1E0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 290u, depth + 1u); else { c.pc = 0x0013B8D0u; return; } if (c.pc != 0x0013B1E0u) [[unlikely]] return; }
L_0013B1E0:
    set32(c.r[4], ld32((c.r[28].w[0] - 23836u)));
    set32(c.r[5], c.r[28].w[0] - 23820u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld16((c.r[5].w[0]));
    c.r[5].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013B178u | kUnwind; return; } goto L_0013B178; } }
    c.budget -= 1;
L_0013B208:
    set32(c.r[6], c.r[4].w[0] << 1);
    set32(c.r[5], c.r[28].w[0] - 23804u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].d[0] = ld16((c.r[5].w[0]));
    c.r[5].d[0] = c.r[17].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013B120u | kUnwind; return; } goto L_0013B120; } }
L_0013B228:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0013B250:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[4], c.r[28].w[0] - 23804u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[6], c.r[6].w[0] + 26976u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23836u)));
    set32(c.r[5], c.r[3].w[0] << 1);
    set32(c.r[7], c.r[3].w[0] << 10);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld16((c.r[4].w[0]));
    c.r[1].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 20;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[18], c.r[6].w[0] + c.r[7].w[0]);  if (t) { goto L_0013B3B0; } }
L_0013B2A0:
    set32(c.r[16], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0013B390; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013B390; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 516u));
    c.r[4].d[0] = c.r[4].d[0] & 15ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_0013B390; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 19104u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B2DCu); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0013B2DCu) [[unlikely]] return; }
L_0013B2DC:
    set32(c.r[3], ld32((c.r[28].w[0] - 23836u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[4], c.r[28].w[0] - 23808u);
    set32(c.r[6], c.r[6].w[0] + 24928u);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[3].w[0] << 1);
    set32(c.r[7], c.r[3].w[0] << 10);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld16((c.r[4].w[0]));
    c.r[1].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[17], c.r[6].w[0] + c.r[7].w[0]);  if (t) { goto L_0013B390; } }
    c.budget -= 1;
L_0013B310:
    set32(c.r[21], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0013B368; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B324u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 63u, depth + 1u); else { c.pc = 0x00144A20u; return; } if (c.pc != 0x0013B324u) [[unlikely]] return; }
L_0013B324:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 48u);  if (t) { goto L_0013B368; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B334u); set32(c.r[5], c.r[21].w[0] + 48u);  if (depth < kMaxDepth) unit_0011(c, 56u, depth + 1u); else { c.pc = 0x00144750u; return; } if (c.pc != 0x0013B334u) [[unlikely]] return; }
L_0013B334:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013B368; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[4], c.r[16].w[0] + 48u);
    set32(c.r[2], ld32((c.r[21].w[0] + 48u)));
    set32(c.r[5], c.r[21].w[0] + 48u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B358u); c.r[6].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_000E(c, 284u, depth + 1u); else { c.pc = 0x0013B790u; return; } if (c.pc != 0x0013B358u) [[unlikely]] return; }
L_0013B358:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0013B368; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B368u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 290u, depth + 1u); else { c.pc = 0x0013B8D0u; return; } if (c.pc != 0x0013B368u) [[unlikely]] return; }
L_0013B368:
    set32(c.r[3], ld32((c.r[28].w[0] - 23836u)));
    set32(c.r[4], c.r[28].w[0] - 23808u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[5], c.r[3].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld16((c.r[4].w[0]));
    c.r[4].d[0] = c.r[19].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013B310u | kUnwind; return; } goto L_0013B310; } }
    c.budget -= 1;
L_0013B390:
    set32(c.r[5], c.r[3].w[0] << 1);
    set32(c.r[4], c.r[28].w[0] - 23804u);
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld16((c.r[4].w[0]));
    c.r[4].d[0] = c.r[20].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013B2A0u | kUnwind; return; } goto L_0013B2A0; } }
L_0013B3B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0013B3E0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[3], c.r[28].w[0] - 23812u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    set32(c.r[5], c.r[5].w[0] + 22880u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 23836u)));
    set32(c.r[6], c.r[4].w[0] << 10);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 22;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[22], c.r[5].w[0] + c.r[6].w[0]);  if (t) { goto L_0013B590; } }
L_0013B438:
    set32(c.r[20], ld32((c.r[22].w[0])));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0013B568; } }
    set32(c.r[18], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0013B568; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013B568; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 514u));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_0013B568; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 19104u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B47Cu); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0013B47Cu) [[unlikely]] return; }
L_0013B47C:
    set32(c.r[4], ld32((c.r[28].w[0] - 23836u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[16], c.r[17].w[0] + 1u);
    set32(c.r[3], c.r[28].w[0] - 23812u);
    set32(c.r[6], c.r[6].w[0] + 22880u);
    set32(c.r[5], c.r[16].w[0] << 2);
    set32(c.r[7], c.r[4].w[0] << 10);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.r[1].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[21], c.r[5].w[0] + c.r[6].w[0]);  if (t) { goto L_0013B568; } }
    c.budget -= 1;
L_0013B4B8:
    set32(c.r[19], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0013B540; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[5].d[0];  if (t) { goto L_0013B540; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0013B540; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 566u));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013B500; } }
    c.r[3].d[0] = ld16((c.r[5].w[0] + 566u));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0013B540; } }
L_0013B500:
    set32(c.r[4], c.r[20].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B50Cu); set32(c.r[5], c.r[19].w[0] + 48u);  if (depth < kMaxDepth) unit_0011(c, 56u, depth + 1u); else { c.pc = 0x00144750u; return; } if (c.pc != 0x0013B50Cu) [[unlikely]] return; }
L_0013B50C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013B540; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 514u));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0013B568; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[4], c.r[20].w[0] + 48u);
    set32(c.r[2], ld32((c.r[19].w[0] + 48u)));
    set32(c.r[5], c.r[19].w[0] + 48u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B540u); c.r[6].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_000E(c, 287u, depth + 1u); else { c.pc = 0x0013B830u; return; } if (c.pc != 0x0013B540u) [[unlikely]] return; }
L_0013B540:
    set32(c.r[4], ld32((c.r[28].w[0] - 23836u)));
    set32(c.r[3], c.r[28].w[0] - 23812u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013B4B8u | kUnwind; return; } goto L_0013B4B8; } }
    c.budget -= 1;
L_0013B568:
    set32(c.r[4], ld32((c.r[28].w[0] - 23836u)));
    set32(c.r[3], c.r[28].w[0] - 23812u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[22], c.r[22].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013B438u | kUnwind; return; } goto L_0013B438; } }
L_0013B590:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0013B5C0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[3], c.r[28].w[0] - 23812u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    set32(c.r[5], c.r[5].w[0] + 22880u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 23836u)));
    set32(c.r[6], c.r[4].w[0] << 10);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 21;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[22], c.r[5].w[0] + c.r[6].w[0]);  if (t) { goto L_0013B768; } }
    c.budget -= 1;
L_0013B618:
    set32(c.r[20], ld32((c.r[22].w[0])));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0013B740; } }
    set32(c.r[18], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0013B740; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013B740; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 514u));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_0013B740; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 19104u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B65Cu); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0013B65Cu) [[unlikely]] return; }
L_0013B65C:
    set32(c.r[4], ld32((c.r[28].w[0] - 23836u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[3], c.r[28].w[0] - 23820u);
    set32(c.r[5], c.r[5].w[0] + 18784u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[4].w[0] << 10);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[21], c.r[5].w[0] + c.r[6].w[0]);  if (t) { goto L_0013B740; } }
    c.budget -= 1;
L_0013B690:
    set32(c.r[19], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0013B718; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[5].d[0];  if (t) { goto L_0013B718; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0013B718; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 566u));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013B6D8; } }
    c.r[3].d[0] = ld16((c.r[5].w[0] + 566u));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0013B718; } }
L_0013B6D8:
    set32(c.r[4], c.r[20].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B6E4u); set32(c.r[5], c.r[19].w[0] + 48u);  if (depth < kMaxDepth) unit_0011(c, 56u, depth + 1u); else { c.pc = 0x00144750u; return; } if (c.pc != 0x0013B6E4u) [[unlikely]] return; }
L_0013B6E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013B718; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 514u));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0013B740; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[4], c.r[20].w[0] + 48u);
    set32(c.r[2], ld32((c.r[19].w[0] + 48u)));
    set32(c.r[5], c.r[19].w[0] + 48u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B718u); c.r[6].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_000E(c, 287u, depth + 1u); else { c.pc = 0x0013B830u; return; } if (c.pc != 0x0013B718u) [[unlikely]] return; }
L_0013B718:
    set32(c.r[4], ld32((c.r[28].w[0] - 23836u)));
    set32(c.r[3], c.r[28].w[0] - 23820u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013B690u | kUnwind; return; } goto L_0013B690; } }
    c.budget -= 1;
L_0013B740:
    set32(c.r[4], ld32((c.r[28].w[0] - 23836u)));
    set32(c.r[3], c.r[28].w[0] - 23812u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[22], c.r[22].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013B618u | kUnwind; return; } goto L_0013B618; } }
    c.budget -= 1;
L_0013B768:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0013B790:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].d[0] = c.r[6].sd[0] < 69ll ? 1ull : 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; c.r[7].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0013B7B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013B818; } }
    c.budget -= 1;
L_0013B7B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] + 2464u);
    set32(c.r[3], c.r[2].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], 0u + 255u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013B7D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013B818; } }
    c.budget -= 1;
L_0013B7D8:
    c.r[2].d[0] = c.r[3].d[0] & 127ull;
    set32(c.r[6], c.r[2].w[0] << 2);
    c.r[2].d[0] = c.r[3].d[0] & 128ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] + 2400u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[3].w[0])));  if (t) { goto L_0013B80C; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B804u); c.r[5].d[0] = c.r[7].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013B804u) [[unlikely]] return; }
L_0013B804:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013B814; } }
L_0013B80C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B814u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013B814u) [[unlikely]] return; }
L_0013B814:
    c.budget -= 1;
L_0013B818:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0013B830:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].d[0] = c.r[6].sd[0] < 69ll ? 1ull : 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; c.r[7].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0013B850; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013B8B8; } }
    c.budget -= 1;
L_0013B850:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] + 2576u);
    set32(c.r[3], c.r[2].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], 0u + 255u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013B878; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013B8B8; } }
    c.budget -= 1;
L_0013B878:
    c.r[2].d[0] = c.r[3].d[0] & 127ull;
    set32(c.r[6], c.r[2].w[0] << 2);
    c.r[2].d[0] = c.r[3].d[0] & 128ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] + 2544u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[3].w[0])));  if (t) { goto L_0013B8AC; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B8A4u); c.r[5].d[0] = c.r[7].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013B8A4u) [[unlikely]] return; }
L_0013B8A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013B8B4; } }
L_0013B8AC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B8B4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013B8B4u) [[unlikely]] return; }
L_0013B8B4:
    c.budget -= 1;
L_0013B8B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0013B8D0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[20], ld32((c.r[4].w[0] + 20u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[17], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[30], ld32((c.r[5].w[0] + 56u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 28u)));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 6u));
    set32(c.r[18], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 628u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 4);
    st16((c.r[4].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[20].w[0] + 676u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1u)));
    c.budget -= 29;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[22], c.r[5].w[0] + c.r[6].w[0]);  if (t) { goto L_0013B960; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 8658u));
    set32(c.r[2], c.r[2].w[0] - 64u);
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013B960; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0013B960:
    c.r[2].d[0] = c.r[4].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[4].d[0] & 3ull;  if (t) { goto L_0013B970; } }
    set32(c.r[4], c.r[2].w[0] + 3u);
    c.budget -= 1;
L_0013B970:
    set32(c.r[2], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << (c.r[4].w[0] & 31u));
    st16((c.r[20].w[0] + 560u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[23].w[0] + 6u));
    st8((c.r[20].w[0] + 558u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[20].w[0] + 580u), c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 264u)));
    st32((c.r[20].w[0] + 588u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 596u), c.r[22].w[0]);
    c.r[3].d[0] = ld16((c.r[20].w[0] + 562u));
    c.r[2].d[0] = ld16((c.r[19].w[0] + 566u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013B9F0; } }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 564u));
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    st16((c.r[20].w[0] + 564u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[23].w[0] + 28u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013B9D0; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[23].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0013B9D0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[20].w[0] + 640u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B9E0u); set32(c.r[5], c.r[5].w[0] + 19072u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013B9E0u) [[unlikely]] return; }
L_0013B9E0:
    set32(c.r[4], c.r[20].w[0] + 656u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B9ECu); set32(c.r[5], c.r[19].w[0] + 656u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013B9ECu) [[unlikely]] return; }
L_0013B9EC:
    c.budget -= 1;
L_0013B9F0:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 566u));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013BA30; } }
    c.r[3].d[0] = ld16((c.r[20].w[0] + 562u));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013BA30; } }
    c.r[3].d[0] = c.r[3].d[0] & 17408ull;
    set32(c.r[2], 0u + 17408u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0013BA30; } }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 564u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st16((c.r[20].w[0] + 564u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0013BA30:
    c.r[21].d[0] = ld16((c.r[19].w[0] + 564u));
    set32(c.r[2], 0u + 1u);
    st16((c.r[19].w[0] + 564u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[23].w[0] + 6u));
    st8((c.r[19].w[0] + 559u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[19].w[0] + 584u), c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 264u)));
    st32((c.r[19].w[0] + 592u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 600u), c.r[22].w[0]);
    c.r[2].d[0] = ld8((c.r[30].w[0] + 2u));
    st8((c.r[19].w[0] + 569u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[20].w[0] + 562u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = ld16((c.r[20].w[0] + 556u));  if (t) { goto L_0013BA78; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 264u)));
    c.r[3].d[0] = ld16((c.r[2].w[0] + 556u));
    c.budget -= 3;
L_0013BA78:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 523u));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st16((c.r[2].w[0] + 524u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 523u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    st8((c.r[19].w[0] + 523u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[30].w[0] + 1u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013BC30; } }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 560u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[20].w[0] + 560u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[19].w[0] + 564u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[19].w[0] + 564u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[19].w[0] + 566u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013BAE0; } }
    c.r[2].d[0] = ld16((c.r[19].w[0] + 564u));
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    st16((c.r[19].w[0] + 564u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0013BAE0:
    c.r[3].d[0] = ld16((c.r[20].w[0] + 562u));
    c.r[2].d[0] = ld16((c.r[19].w[0] + 566u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013BB28; } }
    c.r[3].d[0] = ld8((c.r[30].w[0] + 1u));
    set32(c.r[2], 0u + 136u);
    c.r[3].d[0] = c.r[3].d[0] & 136ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0013BB28; } }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 560u));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st16((c.r[20].w[0] + 560u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[19].w[0] + 564u));
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    st16((c.r[19].w[0] + 564u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 7;
L_0013BB28:
    c.r[3].d[0] = ld16((c.r[20].w[0] + 562u));
    c.r[2].d[0] = ld16((c.r[19].w[0] + 566u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013BC30; } }
    c.r[3].d[0] = ld8((c.r[30].w[0] + 1u));
    set32(c.r[2], 0u + 136u);
    c.r[3].d[0] = c.r[3].d[0] & 136ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0013BC30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BB5Cu); set32(c.r[5], 0u + 148u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x0013BB5Cu) [[unlikely]] return; }
L_0013BB5C:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 564u));
    set32(c.r[2], 0u + 17u);
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    st16((c.r[19].w[0] + 564u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 564u));
    c.r[3].d[0] = c.r[3].d[0] | 17ull;
    st16((c.r[19].w[0] + 564u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[20].w[0] + 564u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[20].w[0] + 559u), static_cast<std::uint8_t>(0u));
    st32((c.r[20].w[0] + 584u), c.r[19].w[0]);
    st32((c.r[20].w[0] + 592u), c.r[17].w[0]);
    st32((c.r[20].w[0] + 600u), c.r[22].w[0]);
    st8((c.r[20].w[0] + 569u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld16((c.r[20].w[0] + 562u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 17;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = ld16((c.r[20].w[0] + 556u));  if (t) { goto L_0013BBA8; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 264u)));
    c.r[3].d[0] = ld16((c.r[2].w[0] + 556u));
    c.budget -= 2;
L_0013BBA8:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 523u));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    st16((c.r[2].w[0] + 524u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 523u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    st8((c.r[20].w[0] + 523u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[20].w[0] + 562u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013BBE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0013BBE4; } }
L_0013BBE0:
    c.r[3].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0013BBE4:
    st16((c.r[3].w[0] + 834u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u + 80u);
    st16((c.r[3].w[0] + 830u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[20].w[0] + 564u));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st16((c.r[20].w[0] + 564u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[19].w[0] + 562u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013BC14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013BC18; } }
L_0013BC14:
    c.r[3].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0013BC18:
    st16((c.r[3].w[0] + 834u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u + 80u);
    st16((c.r[3].w[0] + 830u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[19].w[0] + 564u));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st16((c.r[19].w[0] + 564u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
L_0013BC30:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 564u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013BCA8; } }
    c.r[2].d[0] = ld16((c.r[19].w[0] + 566u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0013BC54; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0013BC54:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013BD88; } }
    c.r[3].d[0] = ld8((c.r[22].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 968u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[4].w[0] + 968u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 49152ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013BD88; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 836u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 968u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0013BD88; } }
    c.r[2].d[0] = ld16((c.r[19].w[0] + 564u));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 564u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0013BD88; } }
    c.budget -= 1;
L_0013BCA8:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 566u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0013BCBC; } }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0013BCBC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0013BD88; } }
    c.r[4].d[0] = ld8((c.r[22].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 966u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[2].w[0] + 966u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 822u)));
    c.r[3].d[0] = c.r[4].d[0] & 57344ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0013BD50; } }
    c.f[1] = ld32((c.r[2].w[0] + 1220u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0013BD18; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 834u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 966u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0013BD30; } }
L_0013BD18:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 966u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 834u)));
    set32(c.r[3], 0u + 80u);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    st16((c.r[2].w[0] + 834u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[2].w[0] + 830u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_0013BD30:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 834u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0013BD88; } }
    st16((c.r[2].w[0] + 834u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = ld16((c.r[19].w[0] + 564u));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 564u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0013BD88; } }
L_0013BD50:
    c.r[3].d[0] = c.r[4].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013BD88; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 834u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 966u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0013BD88; } }
    st16((c.r[2].w[0] + 834u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u + 80u);
    st16((c.r[2].w[0] + 830u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[19].w[0] + 564u));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st16((c.r[19].w[0] + 564u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
L_0013BD88:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 564u));
    c.r[2].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 64ull;  if (t) { goto L_0013BDB8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013BDB8; } }
    set32(c.r[2], 0u - 97u);
    c.r[2].d[0] = c.r[21].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st16((c.r[19].w[0] + 564u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
L_0013BDB8:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 564u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013BE38; } }
    st32((c.r[29].w[0] + 172u), c.r[19].w[0]);
    c.r[2].d[0] = ld16((c.r[20].w[0] + 562u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[21].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0013BDE0; } }
    c.r[21].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0013BDE0:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 566u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013BDF8; } }
    st32((c.r[29].w[0] + 172u), c.r[17].w[0]);
    c.budget -= 2;
L_0013BDF8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BE08u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_000F(c, 55u, depth + 1u); else { c.pc = 0x0013C9A0u; return; } if (c.pc != 0x0013BE08u) [[unlikely]] return; }
L_0013BE08:
    set32(c.r[2], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[4], c.r[18].w[0] + 1440u);
    set32(c.r[5], c.r[17].w[0] + 1440u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 574u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[2], c.r[3].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BE30u); st16((c.r[21].w[0] + 574u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0013BE30u) [[unlikely]] return; }
L_0013BE30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013BE48; } }
L_0013BE38:
    c.r[6].d[0] = ld8((c.r[22].w[0] + 14u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BE48u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 55u, depth + 1u); else { c.pc = 0x0013C9A0u; return; } if (c.pc != 0x0013BE48u) [[unlikely]] return; }
L_0013BE48:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BE54u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 362u, depth + 1u); else { c.pc = 0x001D7E10u; return; } if (c.pc != 0x0013BE54u) [[unlikely]] return; }
L_0013BE54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BE5Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 33u, depth + 1u); else { c.pc = 0x003B0310u; return; } if (c.pc != 0x0013BE5Cu) [[unlikely]] return; }
L_0013BE5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013BE78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BE6Cu);  if (depth < kMaxDepth) unit_00AC(c, 34u, depth + 1u); else { c.pc = 0x003B0320u; return; } if (c.pc != 0x0013BE6Cu) [[unlikely]] return; }
L_0013BE6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013BE80; } }
    c.budget -= 1;
L_0013BE78:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0013BE80:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 564u));
    c.r[2].d[0] = c.r[2].d[0] & 48ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013BE98; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0013BE98:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 562u));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013BED8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[23].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013BED8; } }
    c.f[0] = c.r[2].w[0];
    c.f[1] = c.r[16].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 9;
L_0013BED8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0013BF68; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013BF68; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0013BF68; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 515u));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 515u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0013BF68; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 1544u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BF28u); st32((c.r[18].w[0] + 1544u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003C(c, 146u, depth + 1u); else { c.pc = 0x001F1530u; return; } if (c.pc != 0x0013BF28u) [[unlikely]] return; }
L_0013BF28:
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 496u)));
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[21].d[0] = c.lo.d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BF50u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 142u, depth + 1u); else { c.pc = 0x001F1390u; return; } if (c.pc != 0x0013BF50u) [[unlikely]] return; }
L_0013BF50:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8693u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0013BF68; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BF68u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_003C(c, 142u, depth + 1u); else { c.pc = 0x001F1390u; return; } if (c.pc != 0x0013BF68u) [[unlikely]] return; }
L_0013BF68:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 566u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[21].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0013BF90; } }
    c.r[2].d[0] = ld8((c.r[30].w[0] + 1u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013BF90; } }
    c.r[21].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0013BF90:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BF9Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 46u, depth + 1u); else { c.pc = 0x003B0520u; return; } if (c.pc != 0x0013BF9Cu) [[unlikely]] return; }
L_0013BF9C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BFA8u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 9u, depth + 1u); else { c.pc = 0x001D8800u; return; } if (c.pc != 0x0013BFA8u) [[unlikely]] return; }
L_0013BFA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_000F(c, 9u, depth); } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_000F(c, 3u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BFCCu);  if (depth < kMaxDepth) unit_0074(c, 338u, depth + 1u); else { c.pc = 0x002D3850u; return; } if (c.pc != 0x0013BFCCu) [[unlikely]] return; }
L_0013BFCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013BFE0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 513u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_000F(c, 7u, depth); } }
L_0013BFE0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st32((c.r[2].w[0] + 12u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st32((c.r[2].w[0] + 16u), c.r[17].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BFF8u); c.r[4].d[0] = ld8((c.r[18].w[0] + 8658u));  if (depth < kMaxDepth) unit_004E(c, 88u, depth + 1u); else { c.pc = 0x00238F50u; return; } if (c.pc != 0x0013BFF8u) [[unlikely]] return; }
L_0013BFF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_000F(c, 2u, depth); } }
    [[clang::musttail]] return unit_000F(c, 1u, depth);
}

}
