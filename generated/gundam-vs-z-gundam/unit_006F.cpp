#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_006F[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    19, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0,
    0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 43, 0, 0, 0,
    0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 47, 0, 48, 0, 0,
    0, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0,
    57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 67, 0, 68, 0, 69, 0, 0, 0,
    0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 76, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 79, 0, 80, 0, 81, 0, 82, 0, 83, 0, 84, 0, 0, 0, 85, 0, 0, 0,
    86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 91, 0, 92, 0, 93, 0, 94, 0, 95, 0, 96, 0, 0, 0, 0, 0, 0,
    97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 100, 0, 101, 0, 102,
    0, 103, 0, 104, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0,
    110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 114, 0, 115, 0, 116, 0, 0, 0, 117, 0, 0, 0,
    118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 122,
    0, 123, 0, 124, 0, 125, 0, 126, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 131, 0, 132, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156,
    0, 157, 0, 0, 158, 0, 159, 0, 160, 0, 161, 0, 162, 0, 163, 0, 164, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0,
    167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 175, 0, 176, 0,
    177, 0, 178, 0, 179, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0,
    187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0,
    0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 195, 0, 196, 0, 0, 197, 0, 0, 198, 0, 0, 199, 0, 0,
    200, 0, 0, 201, 0, 0, 202, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0,
    0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0,
    215, 0, 0, 0, 0, 0, 0, 216, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 223, 0,
    224, 0, 225, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 229,
    0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 242, 0,
    243, 0, 244, 0, 245, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0,
    250, 0, 251, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 256, 0, 257, 0, 258, 0, 0, 259, 0, 260, 0, 261, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 264, 0, 0, 0, 265, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 272, 0, 0, 0, 0, 0,
    0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 274, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0,
    278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0,
    288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 296, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 298, 0, 299, 0, 300, 0, 301, 0, 302, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 308, 0, 309,
    0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0,
    0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0,
    0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0,
    0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0,
    0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 334, 0, 335, 0, 0, 336, 0, 0, 0, 0, 0, 337, 0, 0, 0,
    0, 338, 0, 339, 0, 340, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 344, 0, 345, 0, 346, 0,
    347, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0,
    0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 353, 0, 354, 0, 355, 0, 0, 0, 0, 0, 0, 356,
    357, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 0, 364, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_006F(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002BC000;
    case 2u: goto L_002BC020;
    case 3u: goto L_002BC120;
    case 4u: goto L_002BC140;
    case 5u: goto L_002BC158;
    case 6u: goto L_002BC1B0;
    case 7u: goto L_002BC1D8;
    case 8u: goto L_002BC210;
    case 9u: goto L_002BC230;
    case 10u: goto L_002BC258;
    case 11u: goto L_002BC288;
    case 12u: goto L_002BC2A0;
    case 13u: goto L_002BC2D0;
    case 14u: goto L_002BC330;
    case 15u: goto L_002BC360;
    case 16u: goto L_002BC3C0;
    case 17u: goto L_002BC3D0;
    case 18u: goto L_002BC3D8;
    case 19u: goto L_002BC400;
    case 20u: goto L_002BC410;
    case 21u: goto L_002BC418;
    case 22u: goto L_002BC440;
    case 23u: goto L_002BC460;
    case 24u: goto L_002BC4B0;
    case 25u: goto L_002BC4D8;
    case 26u: goto L_002BC4F8;
    case 27u: goto L_002BC510;
    case 28u: goto L_002BC580;
    case 29u: goto L_002BC598;
    case 30u: goto L_002BC658;
    case 31u: goto L_002BC6F4;
    case 32u: goto L_002BC788;
    case 33u: goto L_002BC840;
    case 34u: goto L_002BC858;
    case 35u: goto L_002BC898;
    case 36u: goto L_002BC8DC;
    case 37u: goto L_002BC920;
    case 38u: goto L_002BC958;
    case 39u: goto L_002BC994;
    case 40u: goto L_002BC9B0;
    case 41u: goto L_002BC9C0;
    case 42u: goto L_002BC9E4;
    case 43u: goto L_002BC9F0;
    case 44u: goto L_002BCA10;
    case 45u: goto L_002BCA5C;
    case 46u: goto L_002BCA64;
    case 47u: goto L_002BCA6C;
    case 48u: goto L_002BCA74;
    case 49u: goto L_002BCA90;
    case 50u: goto L_002BCAA4;
    case 51u: goto L_002BCAC4;
    case 52u: goto L_002BCB20;
    case 53u: goto L_002BCB2C;
    case 54u: goto L_002BCB40;
    case 55u: goto L_002BCC64;
    case 56u: goto L_002BCC70;
    case 57u: goto L_002BCC80;
    case 58u: goto L_002BCDA4;
    case 59u: goto L_002BCDB4;
    case 60u: goto L_002BCDC4;
    case 61u: goto L_002BCDD0;
    case 62u: goto L_002BCDE0;
    case 63u: goto L_002BCF00;
    case 64u: goto L_002BCF98;
    case 65u: goto L_002BCFD0;
    case 66u: goto L_002BCFD8;
    case 67u: goto L_002BCFE0;
    case 68u: goto L_002BCFE8;
    case 69u: goto L_002BCFF0;
    case 70u: goto L_002BD010;
    case 71u: goto L_002BD040;
    case 72u: goto L_002BD058;
    case 73u: goto L_002BD0C0;
    case 74u: goto L_002BD0D0;
    case 75u: goto L_002BD0F0;
    case 76u: goto L_002BD0F8;
    case 77u: goto L_002BD1A4;
    case 78u: goto L_002BD1B0;
    case 79u: goto L_002BD1B8;
    case 80u: goto L_002BD1C0;
    case 81u: goto L_002BD1C8;
    case 82u: goto L_002BD1D0;
    case 83u: goto L_002BD1D8;
    case 84u: goto L_002BD1E0;
    case 85u: goto L_002BD1F0;
    case 86u: goto L_002BD200;
    case 87u: goto L_002BD228;
    case 88u: goto L_002BD240;
    case 89u: goto L_002BD250;
    case 90u: goto L_002BD2B4;
    case 91u: goto L_002BD2BC;
    case 92u: goto L_002BD2C4;
    case 93u: goto L_002BD2CC;
    case 94u: goto L_002BD2D4;
    case 95u: goto L_002BD2DC;
    case 96u: goto L_002BD2E4;
    case 97u: goto L_002BD300;
    case 98u: goto L_002BD310;
    case 99u: goto L_002BD364;
    case 100u: goto L_002BD36C;
    case 101u: goto L_002BD374;
    case 102u: goto L_002BD37C;
    case 103u: goto L_002BD384;
    case 104u: goto L_002BD38C;
    case 105u: goto L_002BD394;
    case 106u: goto L_002BD400;
    case 107u: goto L_002BD430;
    case 108u: goto L_002BD440;
    case 109u: goto L_002BD470;
    case 110u: goto L_002BD480;
    case 111u: goto L_002BD4D0;
    case 112u: goto L_002BD4E0;
    case 113u: goto L_002BD530;
    case 114u: goto L_002BD550;
    case 115u: goto L_002BD558;
    case 116u: goto L_002BD560;
    case 117u: goto L_002BD570;
    case 118u: goto L_002BD580;
    case 119u: goto L_002BD5A4;
    case 120u: goto L_002BD5B0;
    case 121u: goto L_002BD5F4;
    case 122u: goto L_002BD5FC;
    case 123u: goto L_002BD604;
    case 124u: goto L_002BD60C;
    case 125u: goto L_002BD614;
    case 126u: goto L_002BD61C;
    case 127u: goto L_002BD624;
    case 128u: goto L_002BD6B0;
    case 129u: goto L_002BD720;
    case 130u: goto L_002BD7A0;
    case 131u: goto L_002BD7A8;
    case 132u: goto L_002BD7B0;
    case 133u: goto L_002BD7B8;
    case 134u: goto L_002BD7C8;
    case 135u: goto L_002BD850;
    case 136u: goto L_002BD860;
    case 137u: goto L_002BD928;
    case 138u: goto L_002BD930;
    case 139u: goto L_002BD954;
    case 140u: goto L_002BD960;
    case 141u: goto L_002BD970;
    case 142u: goto L_002BD9D0;
    case 143u: goto L_002BD9E0;
    case 144u: goto L_002BDA40;
    case 145u: goto L_002BDA50;
    case 146u: goto L_002BDAB0;
    case 147u: goto L_002BDAC0;
    case 148u: goto L_002BDB70;
    case 149u: goto L_002BDBBC;
    case 150u: goto L_002BDC30;
    case 151u: goto L_002BDC94;
    case 152u: goto L_002BDCB8;
    case 153u: goto L_002BDD68;
    case 154u: goto L_002BDDAC;
    case 155u: goto L_002BDDB4;
    case 156u: goto L_002BDDFC;
    case 157u: goto L_002BDE04;
    case 158u: goto L_002BDE10;
    case 159u: goto L_002BDE18;
    case 160u: goto L_002BDE20;
    case 161u: goto L_002BDE28;
    case 162u: goto L_002BDE30;
    case 163u: goto L_002BDE38;
    case 164u: goto L_002BDE40;
    case 165u: goto L_002BDE60;
    case 166u: goto L_002BDE70;
    case 167u: goto L_002BDE80;
    case 168u: goto L_002BDF30;
    case 169u: goto L_002BDF40;
    case 170u: goto L_002BDF50;
    case 171u: goto L_002BDFB0;
    case 172u: goto L_002BDFC0;
    case 173u: goto L_002BE064;
    case 174u: goto L_002BE0E4;
    case 175u: goto L_002BE0F0;
    case 176u: goto L_002BE0F8;
    case 177u: goto L_002BE100;
    case 178u: goto L_002BE108;
    case 179u: goto L_002BE110;
    case 180u: goto L_002BE118;
    case 181u: goto L_002BE130;
    case 182u: goto L_002BE154;
    case 183u: goto L_002BE1D0;
    case 184u: goto L_002BE1E0;
    case 185u: goto L_002BE368;
    case 186u: goto L_002BE378;
    case 187u: goto L_002BE380;
    case 188u: goto L_002BE484;
    case 189u: goto L_002BE610;
    case 190u: goto L_002BE660;
    case 191u: goto L_002BE684;
    case 192u: goto L_002BE694;
    case 193u: goto L_002BE700;
    case 194u: goto L_002BE72C;
    case 195u: goto L_002BE748;
    case 196u: goto L_002BE750;
    case 197u: goto L_002BE75C;
    case 198u: goto L_002BE768;
    case 199u: goto L_002BE774;
    case 200u: goto L_002BE780;
    case 201u: goto L_002BE78C;
    case 202u: goto L_002BE798;
    case 203u: goto L_002BE7A4;
    case 204u: goto L_002BE7C0;
    case 205u: goto L_002BE7CC;
    case 206u: goto L_002BE7E0;
    case 207u: goto L_002BE7F0;
    case 208u: goto L_002BE810;
    case 209u: goto L_002BE850;
    case 210u: goto L_002BE858;
    case 211u: goto L_002BE870;
    case 212u: goto L_002BE8B0;
    case 213u: goto L_002BE8D4;
    case 214u: goto L_002BE8F0;
    case 215u: goto L_002BE900;
    case 216u: goto L_002BE91C;
    case 217u: goto L_002BE924;
    case 218u: goto L_002BE940;
    case 219u: goto L_002BE9C0;
    case 220u: goto L_002BE9E4;
    case 221u: goto L_002BEA54;
    case 222u: goto L_002BEA70;
    case 223u: goto L_002BEA78;
    case 224u: goto L_002BEA80;
    case 225u: goto L_002BEA88;
    case 226u: goto L_002BEA90;
    case 227u: goto L_002BEAB0;
    case 228u: goto L_002BEAE4;
    case 229u: goto L_002BEAFC;
    case 230u: goto L_002BEB14;
    case 231u: goto L_002BEB34;
    case 232u: goto L_002BEB50;
    case 233u: goto L_002BEB80;
    case 234u: goto L_002BEB90;
    case 235u: goto L_002BEBE0;
    case 236u: goto L_002BEBF0;
    case 237u: goto L_002BEC40;
    case 238u: goto L_002BEC50;
    case 239u: goto L_002BECA0;
    case 240u: goto L_002BECCC;
    case 241u: goto L_002BECF0;
    case 242u: goto L_002BECF8;
    case 243u: goto L_002BED00;
    case 244u: goto L_002BED08;
    case 245u: goto L_002BED10;
    case 246u: goto L_002BED18;
    case 247u: goto L_002BED30;
    case 248u: goto L_002BED60;
    case 249u: goto L_002BED70;
    case 250u: goto L_002BED80;
    case 251u: goto L_002BED88;
    case 252u: goto L_002BED90;
    case 253u: goto L_002BEDA4;
    case 254u: goto L_002BEDB4;
    case 255u: goto L_002BEDBC;
    case 256u: goto L_002BEE0C;
    case 257u: goto L_002BEE14;
    case 258u: goto L_002BEE1C;
    case 259u: goto L_002BEE28;
    case 260u: goto L_002BEE30;
    case 261u: goto L_002BEE38;
    case 262u: goto L_002BEE40;
    case 263u: goto L_002BEED8;
    case 264u: goto L_002BEEE0;
    case 265u: goto L_002BEEF0;
    case 266u: goto L_002BEF28;
    case 267u: goto L_002BEF44;
    case 268u: goto L_002BEFD8;
    case 269u: goto L_002BF028;
    case 270u: goto L_002BF030;
    case 271u: goto L_002BF060;
    case 272u: goto L_002BF068;
    case 273u: goto L_002BF088;
    case 274u: goto L_002BF0A8;
    case 275u: goto L_002BF0B0;
    case 276u: goto L_002BF0F8;
    case 277u: goto L_002BF170;
    case 278u: goto L_002BF180;
    case 279u: goto L_002BF350;
    case 280u: goto L_002BF3A4;
    case 281u: goto L_002BF3B0;
    case 282u: goto L_002BF3C0;
    case 283u: goto L_002BF3D0;
    case 284u: goto L_002BF40C;
    case 285u: goto L_002BF420;
    case 286u: goto L_002BF430;
    case 287u: goto L_002BF470;
    case 288u: goto L_002BF480;
    case 289u: goto L_002BF4B0;
    case 290u: goto L_002BF4C0;
    case 291u: goto L_002BF500;
    case 292u: goto L_002BF510;
    case 293u: goto L_002BF560;
    case 294u: goto L_002BF590;
    case 295u: goto L_002BF5D8;
    case 296u: goto L_002BF5E0;
    case 297u: goto L_002BF608;
    case 298u: goto L_002BF628;
    case 299u: goto L_002BF630;
    case 300u: goto L_002BF638;
    case 301u: goto L_002BF640;
    case 302u: goto L_002BF648;
    case 303u: goto L_002BF65C;
    case 304u: goto L_002BF678;
    case 305u: goto L_002BF6A4;
    case 306u: goto L_002BF6C0;
    case 307u: goto L_002BF6EC;
    case 308u: goto L_002BF6F4;
    case 309u: goto L_002BF6FC;
    case 310u: goto L_002BF708;
    case 311u: goto L_002BF720;
    case 312u: goto L_002BF730;
    case 313u: goto L_002BF760;
    case 314u: goto L_002BF788;
    case 315u: goto L_002BF7E4;
    case 316u: goto L_002BF850;
    case 317u: goto L_002BF8B0;
    case 318u: goto L_002BF97C;
    case 319u: goto L_002BF9B8;
    case 320u: goto L_002BF9F4;
    case 321u: goto L_002BFA08;
    case 322u: goto L_002BFA34;
    case 323u: goto L_002BFA78;
    case 324u: goto L_002BFA84;
    case 325u: goto L_002BFAE8;
    case 326u: goto L_002BFB0C;
    case 327u: goto L_002BFB30;
    case 328u: goto L_002BFB90;
    case 329u: goto L_002BFBBC;
    case 330u: goto L_002BFC00;
    case 331u: goto L_002BFC78;
    case 332u: goto L_002BFC90;
    case 333u: goto L_002BFCBC;
    case 334u: goto L_002BFCC4;
    case 335u: goto L_002BFCCC;
    case 336u: goto L_002BFCD8;
    case 337u: goto L_002BFCF0;
    case 338u: goto L_002BFD04;
    case 339u: goto L_002BFD0C;
    case 340u: goto L_002BFD14;
    case 341u: goto L_002BFD1C;
    case 342u: goto L_002BFD50;
    case 343u: goto L_002BFD60;
    case 344u: goto L_002BFD68;
    case 345u: goto L_002BFD70;
    case 346u: goto L_002BFD78;
    case 347u: goto L_002BFD80;
    case 348u: goto L_002BFD88;
    case 349u: goto L_002BFDE4;
    case 350u: goto L_002BFE78;
    case 351u: goto L_002BFE84;
    case 352u: goto L_002BFEC8;
    case 353u: goto L_002BFED0;
    case 354u: goto L_002BFED8;
    case 355u: goto L_002BFEE0;
    case 356u: goto L_002BFEFC;
    case 357u: goto L_002BFF00;
    case 358u: goto L_002BFF10;
    case 359u: goto L_002BFF20;
    case 360u: goto L_002BFF38;
    case 361u: goto L_002BFF50;
    case 362u: goto L_002BFF98;
    case 363u: goto L_002BFFA8;
    case 364u: goto L_002BFFBC;
    case 365u: goto L_002BFFC0;
    default: bad_entry(c, 0x002BC000u); return;
    }
L_002BC000:
    c.r[2].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BC020:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[9].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u - 1u);
    st8((c.r[4].w[0] + 36u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].d[0] = c.r[6].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002BC050; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0] + 37u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002BC058; } }
    c.budget -= 1;
L_002BC050:
    st8((c.r[9].w[0] + 37u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002BC058:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 37u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BC088; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 36u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[3], c.r[3].w[0] + 18112u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 3u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[9].w[0] + 32u), c.r[3].w[0]);  if (t) { goto L_002BC0A8; } }
    c.budget -= 1;
L_002BC088:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 36u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[3], c.r[3].w[0] + 18112u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 35u);
    st32((c.r[9].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 8;
L_002BC0A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], c.r[3].w[0] - 24424u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[9].w[0]), c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], 0u + 12u);
    set32(c.r[4], c.r[4].w[0] - 24400u);
    st8((c.r[9].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] - 24352u);
    st8((c.r[9].w[0] + 25u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 20u);
    st32((c.r[9].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[5], 0u + 25u);
    st8((c.r[9].w[0] + 21u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 24376u);
    st8((c.r[9].w[0] + 26u), static_cast<std::uint8_t>(0u));
    st32((c.r[9].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[3], 0u + 10u);
    st8((c.r[9].w[0] + 22u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[28].w[0] - 30312u);
    st8((c.r[9].w[0] + 27u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 2u);
    st32((c.r[9].w[0] + 12u), c.r[6].w[0]);
    c.r[13].d[0] = 0ull + 0ull;
    st8((c.r[9].w[0] + 23u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[9].w[0] + 28u), static_cast<std::uint8_t>(0u));
    st32((c.r[9].w[0] + 16u), c.r[4].w[0]);
    st8((c.r[9].w[0] + 24u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[9].w[0] + 29u), static_cast<std::uint8_t>(0u));
    c.budget -= 30;
L_002BC120:
    set32(c.r[4], c.r[9].w[0] + c.r[13].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 20u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[12].d[0] = 0ull + 0ull;  if (t) { goto L_002BC188; } }
    set32(c.r[11], c.r[4].w[0] + 25u);
    set32(c.r[10], c.r[4].w[0] + 20u);
    c.budget -= 3;
L_002BC140:
    c.r[5].d[0] = c.r[13].d[0] << 56;
    c.r[6].d[0] = c.r[12].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC158u); c.r[4].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 370u, depth + 1u); else { c.pc = 0x002BBCD0u; return; } if (c.pc != 0x002BC158u) [[unlikely]] return; }
L_002BC158:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BC170; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[11].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_002BC170:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.r[3].d[0] = c.r[12].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC140u | kUnwind; return; } goto L_002BC140; } }
    c.budget -= 1;
L_002BC188:
    set32(c.r[13], c.r[13].w[0] + 1u);
    c.r[3].d[0] = c.r[13].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC120u | kUnwind; return; } goto L_002BC120; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BC1B0:
    c.r[2].d[0] = c.r[5].d[0] << 56;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[10].d[0] = c.r[6].d[0] + 0ull;
    c.r[12].d[0] = c.r[4].d[0] + 0ull;
    c.r[11].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[9], c.r[2].w[0] + 20u);
    c.budget -= 10;
L_002BC1D8:
    set32(c.r[2], c.r[10].w[0] - 1u);
    c.r[10].d[0] = c.r[2].d[0] << 56;
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[10].sd[0] >= 0;  if (t) { goto L_002BC200; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[10].d[0] = c.r[2].d[0] << 56;
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 56);
    c.budget -= 5;
L_002BC200:
    c.r[4].d[0] = c.r[12].d[0] + 0ull;
    c.r[5].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC210u); c.r[6].d[0] = c.r[10].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 370u, depth + 1u); else { c.pc = 0x002BBCD0u; return; } if (c.pc != 0x002BC210u) [[unlikely]] return; }
L_002BC210:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC1D8u | kUnwind; return; } goto L_002BC1D8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BC230:
    c.r[2].d[0] = c.r[5].d[0] << 56;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[10].d[0] = c.r[6].d[0] + 0ull;
    c.r[12].d[0] = c.r[4].d[0] + 0ull;
    c.r[11].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[9], c.r[2].w[0] + 20u);
    c.budget -= 10;
L_002BC258:
    set32(c.r[2], c.r[10].w[0] + 1u);
    c.r[10].d[0] = c.r[2].d[0] << 56;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 56);
    c.r[2].d[0] = c.r[10].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BC278; } }
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BC278:
    c.r[4].d[0] = c.r[12].d[0] + 0ull;
    c.r[5].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC288u); c.r[6].d[0] = c.r[10].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 370u, depth + 1u); else { c.pc = 0x002BBCD0u; return; } if (c.pc != 0x002BC288u) [[unlikely]] return; }
L_002BC288:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC258u | kUnwind; return; } goto L_002BC258; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BC2A0:
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] - 24320u);
    set32(c.r[3], c.r[4].w[0] << 1);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[4].d[0] = c.r[5].d[0] << 56;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] + 5u);
    c.budget -= 12;
L_002BC2D0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_002BC2E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] - 1u)));  if (t) { goto L_002BC320; } }
    c.budget -= 1;
L_002BC2E8:
    set32(c.r[2], c.r[6].w[0] + 1u);
    c.r[6].d[0] = c.r[2].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.r[2].d[0] = c.r[6].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC2D0u | kUnwind; return; } goto L_002BC2D0; } }
    set32(c.r[2], c.r[5].w[0] - 1u);
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_002BC318; } }
    set32(c.r[5], 0u + 4u);
    c.budget -= 1;
L_002BC318:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 2;
L_002BC320:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BC330:
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] - 24320u);
    set32(c.r[3], c.r[4].w[0] << 1);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[4].d[0] = c.r[5].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
L_002BC360:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_002BC378; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));  if (t) { goto L_002BC3B8; } }
    c.budget -= 1;
L_002BC378:
    set32(c.r[2], c.r[6].w[0] + 1u);
    c.r[6].d[0] = c.r[2].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.r[2].d[0] = c.r[6].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC360u | kUnwind; return; } goto L_002BC360; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.r[2].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BC3B0; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002BC3B0:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 2;
L_002BC3B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BC3C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
L_002BC3D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC3D8u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 36u)));  if (depth < kMaxDepth) unit_006F(c, 12u, depth + 1u); else { c.pc = 0x002BC2A0u; return; } if (c.pc != 0x002BC3D8u) [[unlikely]] return; }
L_002BC3D8:
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[2], c.r[7].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 25u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC3D0u | kUnwind; return; } goto L_002BC3D0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BC400:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
L_002BC410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC418u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 36u)));  if (depth < kMaxDepth) unit_006F(c, 14u, depth + 1u); else { c.pc = 0x002BC330u; return; } if (c.pc != 0x002BC418u) [[unlikely]] return; }
L_002BC418:
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[2], c.r[7].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 25u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC410u | kUnwind; return; } goto L_002BC410; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BC440:
    c.r[2].d[0] = c.r[5].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 25u)));  c.pc = t; return; }
L_002BC460:
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.r[3].d[0] = c.r[6].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[5].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 20u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] << 2);  if (t) { goto L_002BC48C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002BC49C; } }
L_002BC48C:
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
L_002BC49C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BC4B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[12].d[0] = c.r[4].d[0] + 0ull;
    c.r[14].d[0] = c.r[7].d[0] << 56;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[11].d[0] = c.r[5].d[0] + 0ull;
    c.r[10].d[0] = c.r[6].d[0] + 0ull;
    c.r[14].d[0] = static_cast<std::uint64_t>(c.r[14].sd[0] >> 56);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[15].d[0] = c.r[12].d[0] + 0ull;
    c.budget -= 10;
L_002BC4D8:
    set32(c.r[3], ld32((c.r[15].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[12].w[0] + c.r[9].w[0]);  if (t) { goto L_002BC550; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 20u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[24].d[0] = 0ull + 0ull;  if (t) { goto L_002BC550; } }
    set32(c.r[13], c.r[4].w[0] + 20u);
    c.budget -= 1;
L_002BC4F8:
    c.r[5].d[0] = c.r[9].d[0] << 56;
    c.r[6].d[0] = c.r[24].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC510u); c.r[4].d[0] = c.r[12].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 370u, depth + 1u); else { c.pc = 0x002BBCD0u; return; } if (c.pc != 0x002BC510u) [[unlikely]] return; }
L_002BC510:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BC538; } }
    set32(c.r[3], ld32((c.r[15].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[24].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[14].d[0] != c.r[3].d[0];  if (t) { goto L_002BC538; } }
    st8((c.r[11].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[24].w[0]));  if (t) { goto L_002BC570; } }
L_002BC538:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0])));
    set32(c.r[24], c.r[24].w[0] + 1u);
    c.r[3].d[0] = c.r[24].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC4F8u | kUnwind; return; } goto L_002BC4F8; } }
    c.budget -= 1;
L_002BC550:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[3].d[0] = c.r[9].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[15], c.r[15].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC4D8u | kUnwind; return; } goto L_002BC4D8; } }
    set32(c.r[3], 0u - 1u);
    st8((c.r[11].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_002BC570:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BC580:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC598u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0032(c, 47u, depth + 1u); else { c.pc = 0x001C8B00u; return; } if (c.pc != 0x002BC598u) [[unlikely]] return; }
L_002BC598:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], 0u - 1u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[18].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] - 27856u);
    st8((c.r[3].w[0] + 47u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 53u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 88u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 48u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 54u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 89u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 49u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 55u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 90u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 50u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 56u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 91u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 51u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 57u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 92u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 52u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 58u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 93u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[3].w[0] + 222u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[3].w[0] + 221u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 159u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 48;
L_002BC658:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 120u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002BC810; } }
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 266u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_002BC6B0; } }
    st8((c.r[17].w[0] + 8663u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 116u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 221u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 221u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 10;
L_002BC6B0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 116u)));
    st8((c.r[17].w[0] + 8661u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 8680u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 120u)));
    st8((c.r[17].w[0] + 8658u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8658u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 128u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC6F4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 53u, depth + 1u); else { c.pc = 0x001E9250u; return; } if (c.pc != 0x002BC6F4u) [[unlikely]] return; }
L_002BC6F4:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 24304u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 284u)));
    st8((c.r[17].w[0] + 8683u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 291u)));
    st8((c.r[17].w[0] + 886u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 270u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[17].w[0] + 8662u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 270u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    st8((c.r[17].w[0] + 1934u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[4], c.r[3].w[0] + 159u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 159u)));
    c.budget -= 30;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BC780; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BC780; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8661u)));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002BC780:
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u - 1u);
    c.budget -= 2;
L_002BC788:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8680u)));
    set32(c.r[7], c.r[2].w[0] + c.r[8].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 88u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[6].d[0]; set32(c.r[5], c.r[7].w[0] + 88u);  if (t) { goto L_002BC7C8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 47u)));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BC7C8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 53u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8659u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BC7C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], 0u + 6u);  if (t) { goto L_002BC800; } }
L_002BC7C8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 47u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_002BC800; } }
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    st8((c.r[2].w[0] + 47u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8659u)));
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    st8((c.r[2].w[0] + 53u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[8], 0u + 6u);
    c.budget -= 11;
L_002BC800:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = c.r[8].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC788u | kUnwind; return; } goto L_002BC788; } }
L_002BC810:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[16], c.r[16].w[0] + 2u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC658u | kUnwind; return; } goto L_002BC658; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 159u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BC850; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC840u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x002BC840u) [[unlikely]] return; }
L_002BC840:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    st8((c.r[2].w[0] + 159u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_002BC850:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC858u);  if (depth < kMaxDepth) unit_0033(c, 128u, depth + 1u); else { c.pc = 0x001CD3D0u; return; } if (c.pc != 0x002BC858u) [[unlikely]] return; }
L_002BC858:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00830000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[18].w[0] - 27856u);
    set32(c.r[17], c.r[17].w[0] + 18512u);
    st8((c.r[2].w[0] + 43u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 44u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 45u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 46u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 77u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 76u), static_cast<std::uint8_t>(0u));
    c.budget -= 16;
L_002BC898:
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BC8F8; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 8658u));
    c.r[2].d[0] = c.r[3].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 80ll ? 1ull : 0ull;  if (t) { goto L_002BC8F8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002BC8F8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8661u)));
    c.r[4].d[0] = c.r[16].d[0] << 56;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC8DCu); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);  if (depth < kMaxDepth) unit_0033(c, 127u, depth + 1u); else { c.pc = 0x001CD2A0u; return; } if (c.pc != 0x002BC8DCu) [[unlikely]] return; }
L_002BC8DC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8663u)));
    st8((c.r[17].w[0] + 33u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8661u)));
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 76u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
L_002BC8F8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 8704u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC898u | kUnwind; return; } goto L_002BC898; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00830000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[18].w[0] - 27856u);
    set32(c.r[17], c.r[17].w[0] + 18512u);
    c.budget -= 5;
L_002BC920:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BC978; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 8658u));
    c.r[1].d[0] = c.r[2].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002BC978; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8661u)));
    c.r[4].d[0] = c.r[16].d[0] << 56;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC958u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);  if (depth < kMaxDepth) unit_0033(c, 127u, depth + 1u); else { c.pc = 0x001CD2A0u; return; } if (c.pc != 0x002BC958u) [[unlikely]] return; }
L_002BC958:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8663u)));
    st8((c.r[17].w[0] + 33u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8661u)));
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 76u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
L_002BC978:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 8704u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC920u | kUnwind; return; } goto L_002BC920; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC994u);  if (depth < kMaxDepth) unit_0047(c, 47u, depth + 1u); else { c.pc = 0x0021C490u; return; } if (c.pc != 0x002BC994u) [[unlikely]] return; }
L_002BC994:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002BC9B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC9C0u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x002BC9C0u) [[unlikely]] return; }
L_002BC9C0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[2].w[0] - 24280u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC9E4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BC9E4u) [[unlikely]] return; }
L_002BC9E4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BC9F0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], c.r[28].w[0] - 30308u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002BC000u < 16384u) { entry = entries_006F[(t - 0x002BC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002BCA10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 77u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st16((c.r[2].w[0] + 2u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCA5Cu); st64((c.r[2].w[0] + 8u), 0ull);  if (depth < kMaxDepth) unit_005B(c, 61u, depth + 1u); else { c.pc = 0x0026C8B0u; return; } if (c.pc != 0x002BCA5Cu) [[unlikely]] return; }
L_002BCA5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCA64u);  if (depth < kMaxDepth) unit_005B(c, 64u, depth + 1u); else { c.pc = 0x0026C960u; return; } if (c.pc != 0x002BCA64u) [[unlikely]] return; }
L_002BCA64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCA6Cu);  if (depth < kMaxDepth) unit_008F(c, 159u, depth + 1u); else { c.pc = 0x0033DE10u; return; } if (c.pc != 0x002BCA6Cu) [[unlikely]] return; }
L_002BCA6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCA74u);  if (depth < kMaxDepth) unit_00C2(c, 38u, depth + 1u); else { c.pc = 0x00408640u; return; } if (c.pc != 0x002BCA74u) [[unlikely]] return; }
L_002BCA74:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 1u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] - 24288u);
    c.r[16].d[0] = 0ull + 0ull;
    st8((c.r[2].w[0] + 321u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_002BCA90:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCAA4u); set32(c.r[4], c.r[2].w[0] + 113u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x002BCAA4u) [[unlikely]] return; }
L_002BCAA4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 21u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BCA90u | kUnwind; return; } goto L_002BCA90; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCAC4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 13u, depth + 1u); else { c.pc = 0x002B8410u; return; } if (c.pc != 0x002BCAC4u) [[unlikely]] return; }
L_002BCAC4:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[3], c.r[4].w[0] + 113u);
    set32(c.r[2], c.r[4].w[0] + 134u);
    st32((c.r[1].w[0] + 18204u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    st32((c.r[1].w[0] + 18208u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 56u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + 56u);  if (t) { goto L_002BCAF8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    st8((c.r[1].w[0] + 18180u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002BCAF8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002BCB10; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    st8((c.r[1].w[0] + 18192u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002BCB10:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCB20u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x002BCB20u) [[unlikely]] return; }
L_002BCB20:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCB2Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 356u, depth + 1u); else { c.pc = 0x002BBB30u; return; } if (c.pc != 0x002BCB2Cu) [[unlikely]] return; }
L_002BCB2C:
    set32(c.r[16], c.r[29].w[0] + 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 18112u);
    c.budget -= 5;
L_002BCB40:
    c.r[7].d[0] = ld8((c.r[2].w[0] + 3u));
    c.r[6].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 8u);
    c.r[5].d[0] = c.r[4].sd[0] < 16ll ? 1ull : 0ull;
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[7].d[0] = ld8((c.r[2].w[0] + 19u));
    c.r[6].d[0] = ld8((c.r[3].w[0]));
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    st8((c.r[2].w[0] + 19u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[7].d[0] = ld8((c.r[2].w[0] + 4u));
    c.r[6].d[0] = ld8((c.r[3].w[0] + 1u));
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[7].d[0] = ld8((c.r[2].w[0] + 20u));
    c.r[6].d[0] = ld8((c.r[3].w[0] + 1u));
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[7].d[0] = ld8((c.r[2].w[0] + 5u));
    c.r[6].d[0] = ld8((c.r[3].w[0] + 2u));
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[7].d[0] = ld8((c.r[2].w[0] + 21u));
    c.r[6].d[0] = ld8((c.r[3].w[0] + 2u));
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    st8((c.r[2].w[0] + 21u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[7].d[0] = ld8((c.r[2].w[0] + 6u));
    c.r[6].d[0] = ld8((c.r[3].w[0] + 3u));
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[7].d[0] = ld8((c.r[2].w[0] + 22u));
    c.r[6].d[0] = ld8((c.r[3].w[0] + 3u));
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    st8((c.r[2].w[0] + 22u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[7].d[0] = ld8((c.r[2].w[0] + 7u));
    c.r[6].d[0] = ld8((c.r[3].w[0] + 4u));
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[7].d[0] = ld8((c.r[2].w[0] + 23u));
    c.r[6].d[0] = ld8((c.r[3].w[0] + 4u));
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    st8((c.r[2].w[0] + 23u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[7].d[0] = ld8((c.r[2].w[0] + 8u));
    c.r[6].d[0] = ld8((c.r[3].w[0] + 5u));
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    st8((c.r[2].w[0] + 8u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[7].d[0] = ld8((c.r[2].w[0] + 24u));
    c.r[6].d[0] = ld8((c.r[3].w[0] + 5u));
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    st8((c.r[2].w[0] + 24u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[7].d[0] = ld8((c.r[2].w[0] + 9u));
    c.r[6].d[0] = ld8((c.r[3].w[0] + 6u));
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    st8((c.r[2].w[0] + 9u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[7].d[0] = ld8((c.r[2].w[0] + 25u));
    c.r[6].d[0] = ld8((c.r[3].w[0] + 6u));
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    st8((c.r[2].w[0] + 25u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[7].d[0] = ld8((c.r[2].w[0] + 10u));
    c.r[6].d[0] = ld8((c.r[3].w[0] + 7u));
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[3].w[0] + 7u));
    c.r[7].d[0] = ld8((c.r[2].w[0] + 26u));
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    st8((c.r[2].w[0] + 26u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 69;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[2], c.r[2].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BCB40u | kUnwind; return; } goto L_002BCB40; } }
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCC64u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x002BCC64u) [[unlikely]] return; }
L_002BCC64:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCC70u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006E(c, 356u, depth + 1u); else { c.pc = 0x002BBB30u; return; } if (c.pc != 0x002BCC70u) [[unlikely]] return; }
L_002BCC70:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 18112u);
    c.budget -= 4;
L_002BCC80:
    c.r[7].d[0] = ld8((c.r[3].w[0] + 19u));
    c.r[6].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[2], c.r[2].w[0] + 8u);
    c.r[5].d[0] = c.r[2].sd[0] < 16ll ? 1ull : 0ull;
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    st8((c.r[3].w[0] + 19u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[7].d[0] = ld8((c.r[3].w[0] + 3u));
    c.r[6].d[0] = ld8((c.r[4].w[0]));
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[7].d[0] = ld8((c.r[3].w[0] + 20u));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    st8((c.r[3].w[0] + 20u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[7].d[0] = ld8((c.r[3].w[0] + 4u));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[7].d[0] = ld8((c.r[3].w[0] + 21u));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 2u));
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    st8((c.r[3].w[0] + 21u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[7].d[0] = ld8((c.r[3].w[0] + 5u));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 2u));
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[7].d[0] = ld8((c.r[3].w[0] + 22u));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    st8((c.r[3].w[0] + 22u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[7].d[0] = ld8((c.r[3].w[0] + 6u));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[7].d[0] = ld8((c.r[3].w[0] + 23u));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 4u));
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    st8((c.r[3].w[0] + 23u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[7].d[0] = ld8((c.r[3].w[0] + 7u));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 4u));
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[7].d[0] = ld8((c.r[3].w[0] + 24u));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 5u));
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    st8((c.r[3].w[0] + 24u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[7].d[0] = ld8((c.r[3].w[0] + 8u));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 5u));
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    st8((c.r[3].w[0] + 8u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[7].d[0] = ld8((c.r[3].w[0] + 25u));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 6u));
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    st8((c.r[3].w[0] + 25u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[7].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 6u));
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    st8((c.r[3].w[0] + 9u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[7].d[0] = ld8((c.r[3].w[0] + 26u));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 7u));
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    st8((c.r[3].w[0] + 26u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 7u));
    c.r[7].d[0] = ld8((c.r[3].w[0] + 10u));
    set32(c.r[4], c.r[4].w[0] + 8u);
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    st8((c.r[3].w[0] + 10u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 69;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BCC80u | kUnwind; return; } goto L_002BCC80; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCDA4u); set32(c.r[4], c.r[4].w[0] + 18115u);  if (depth < kMaxDepth) unit_006E(c, 356u, depth + 1u); else { c.pc = 0x002BBB30u; return; } if (c.pc != 0x002BCDA4u) [[unlikely]] return; }
L_002BCDA4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCDB4u); set32(c.r[4], c.r[4].w[0] + 18131u);  if (depth < kMaxDepth) unit_006E(c, 356u, depth + 1u); else { c.pc = 0x002BBB30u; return; } if (c.pc != 0x002BCDB4u) [[unlikely]] return; }
L_002BCDB4:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCDC4u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x002BCDC4u) [[unlikely]] return; }
L_002BCDC4:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCDD0u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_006E(c, 356u, depth + 1u); else { c.pc = 0x002BBB30u; return; } if (c.pc != 0x002BCDD0u) [[unlikely]] return; }
L_002BCDD0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 18112u);
    c.budget -= 4;
L_002BCDE0:
    c.r[6].d[0] = ld8((c.r[3].w[0] + 3u));
    c.r[5].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[2], c.r[2].w[0] + 8u);
    c.r[4].d[0] = c.r[2].sd[0] < 16ll ? 1ull : 0ull;
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[6].d[0] = ld8((c.r[3].w[0] + 19u));
    c.r[5].d[0] = ld8((c.r[16].w[0]));
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st8((c.r[3].w[0] + 19u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[6].d[0] = ld8((c.r[3].w[0] + 4u));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 1u));
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[6].d[0] = ld8((c.r[3].w[0] + 20u));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 1u));
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st8((c.r[3].w[0] + 20u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[6].d[0] = ld8((c.r[3].w[0] + 5u));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 2u));
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[6].d[0] = ld8((c.r[3].w[0] + 21u));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 2u));
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st8((c.r[3].w[0] + 21u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[6].d[0] = ld8((c.r[3].w[0] + 6u));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 3u));
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[6].d[0] = ld8((c.r[3].w[0] + 22u));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 3u));
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st8((c.r[3].w[0] + 22u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[6].d[0] = ld8((c.r[3].w[0] + 7u));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 4u));
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[6].d[0] = ld8((c.r[3].w[0] + 23u));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 4u));
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st8((c.r[3].w[0] + 23u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[6].d[0] = ld8((c.r[3].w[0] + 8u));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 5u));
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st8((c.r[3].w[0] + 8u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[6].d[0] = ld8((c.r[3].w[0] + 24u));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 5u));
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st8((c.r[3].w[0] + 24u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[6].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 6u));
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st8((c.r[3].w[0] + 9u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[6].d[0] = ld8((c.r[3].w[0] + 25u));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 6u));
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st8((c.r[3].w[0] + 25u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[6].d[0] = ld8((c.r[3].w[0] + 10u));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 7u));
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st8((c.r[3].w[0] + 10u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 7u));
    c.r[6].d[0] = ld8((c.r[3].w[0] + 26u));
    set32(c.r[16], c.r[16].w[0] + 8u);
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st8((c.r[3].w[0] + 26u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 69;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BCDE0u | kUnwind; return; } goto L_002BCDE0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + 18112u);
    c.budget -= 3;
L_002BCF00:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 3u));
    set32(c.r[4], c.r[4].w[0] + 8u);
    c.r[2].d[0] = c.r[4].sd[0] < 16ll ? 1ull : 0ull;
    st8((c.r[5].w[0] + 35u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 19u));
    st8((c.r[5].w[0] + 51u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 4u));
    st8((c.r[5].w[0] + 36u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 20u));
    st8((c.r[5].w[0] + 52u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 5u));
    st8((c.r[5].w[0] + 37u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 21u));
    st8((c.r[5].w[0] + 53u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 6u));
    st8((c.r[5].w[0] + 38u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 22u));
    st8((c.r[5].w[0] + 54u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 7u));
    st8((c.r[5].w[0] + 39u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 23u));
    st8((c.r[5].w[0] + 55u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 8u));
    st8((c.r[5].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 24u));
    st8((c.r[5].w[0] + 56u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 9u));
    st8((c.r[5].w[0] + 41u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 25u));
    st8((c.r[5].w[0] + 57u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 10u));
    st8((c.r[5].w[0] + 42u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 26u));
    st8((c.r[5].w[0] + 58u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 36;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BCF00u | kUnwind; return; } goto L_002BCF00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCF98u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00C1(c, 301u, depth + 1u); else { c.pc = 0x00406260u; return; } if (c.pc != 0x002BCF98u) [[unlikely]] return; }
L_002BCF98:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 12144u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 24u)));
    st8((c.r[1].w[0] - 8942u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 25u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st16((c.r[1].w[0] - 8944u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCFD0u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 23u)));  if (depth < kMaxDepth) unit_0044(c, 199u, depth + 1u); else { c.pc = 0x00211410u; return; } if (c.pc != 0x002BCFD0u) [[unlikely]] return; }
L_002BCFD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCFD8u);  if (depth < kMaxDepth) unit_00AC(c, 32u, depth + 1u); else { c.pc = 0x003B02E0u; return; } if (c.pc != 0x002BCFD8u) [[unlikely]] return; }
L_002BCFD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCFE0u);  if (depth < kMaxDepth) unit_0032(c, 47u, depth + 1u); else { c.pc = 0x001C8B00u; return; } if (c.pc != 0x002BCFE0u) [[unlikely]] return; }
L_002BCFE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCFE8u);  if (depth < kMaxDepth) unit_005B(c, 76u, depth + 1u); else { c.pc = 0x0026CAB0u; return; } if (c.pc != 0x002BCFE8u) [[unlikely]] return; }
L_002BCFE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCFF0u);  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x002BCFF0u) [[unlikely]] return; }
L_002BCFF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002BD010:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[2].w[0] - 24256u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002BC000u < 16384u) { entry = entries_006F[(t - 0x002BC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002BD040:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 96u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD058u); st8((c.r[2].w[0] + 77u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_006E(c, 17u, depth + 1u); else { c.pc = 0x002B84E0u; return; } if (c.pc != 0x002BD058u) [[unlikely]] return; }
L_002BD058:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002BD088; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 322u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), 0u);  if (t) { goto L_002BD0B0; } }
L_002BD088:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_002BD0B0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st32((c.r[3].w[0] + 4u), 0u);
    c.budget -= 8;
L_002BD0B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BD0C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD0D0u);  if (depth < kMaxDepth) unit_00AA(c, 224u, depth + 1u); else { c.pc = 0x003AA8E0u; return; } if (c.pc != 0x002BD0D0u) [[unlikely]] return; }
L_002BD0D0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 2u);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD0F0u); st32((c.r[2].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_005B(c, 64u, depth + 1u); else { c.pc = 0x0026C960u; return; } if (c.pc != 0x002BD0F0u) [[unlikely]] return; }
L_002BD0F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD0F8u);  if (depth < kMaxDepth) unit_006D(c, 334u, depth + 1u); else { c.pc = 0x002B7C90u; return; } if (c.pc != 0x002BD0F8u) [[unlikely]] return; }
L_002BD0F8:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 13u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st8((c.r[4].w[0] + 42u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 13u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    st8((c.r[2].w[0] + 101u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[3].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 19;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BD158; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 314u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    st8((c.r[2].w[0] + 116u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_002BD158:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 322u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BD178; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 100u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_002BD178:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002BD198; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 13u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BD198; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_002BD198:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD1A4u); st8((c.r[2].w[0] + 88u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x002BD1A4u) [[unlikely]] return; }
L_002BD1A4:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD1B0u); st8((c.r[3].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0032(c, 37u, depth + 1u); else { c.pc = 0x001C89F0u; return; } if (c.pc != 0x002BD1B0u) [[unlikely]] return; }
L_002BD1B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD1B8u);  if (depth < kMaxDepth) unit_005B(c, 76u, depth + 1u); else { c.pc = 0x0026CAB0u; return; } if (c.pc != 0x002BD1B8u) [[unlikely]] return; }
L_002BD1B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD1C0u);  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x002BD1C0u) [[unlikely]] return; }
L_002BD1C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD1C8u);  if (depth < kMaxDepth) unit_006D(c, 280u, depth + 1u); else { c.pc = 0x002B6AB0u; return; } if (c.pc != 0x002BD1C8u) [[unlikely]] return; }
L_002BD1C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD1D0u);  if (depth < kMaxDepth) unit_006F(c, 28u, depth + 1u); else { c.pc = 0x002BC580u; return; } if (c.pc != 0x002BD1D0u) [[unlikely]] return; }
L_002BD1D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD1D8u);  if (depth < kMaxDepth) unit_006D(c, 318u, depth + 1u); else { c.pc = 0x002B7580u; return; } if (c.pc != 0x002BD1D8u) [[unlikely]] return; }
L_002BD1D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD1E0u);  if (depth < kMaxDepth) unit_006D(c, 337u, depth + 1u); else { c.pc = 0x002B7D40u; return; } if (c.pc != 0x002BD1E0u) [[unlikely]] return; }
L_002BD1E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BD1F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD200u);  if (depth < kMaxDepth) unit_004D(c, 136u, depth + 1u); else { c.pc = 0x00236320u; return; } if (c.pc != 0x002BD200u) [[unlikely]] return; }
L_002BD200:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BD228; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 3u);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD228u); st32((c.r[2].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_00AA(c, 236u, depth + 1u); else { c.pc = 0x003AAE30u; return; } if (c.pc != 0x002BD228u) [[unlikely]] return; }
L_002BD228:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BD240:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD250u);  if (depth < kMaxDepth) unit_006C(c, 222u, depth + 1u); else { c.pc = 0x002B19F0u; return; } if (c.pc != 0x002BD250u) [[unlikely]] return; }
L_002BD250:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BD278; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 4u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), 0u);  if (t) { goto L_002BD2E8; } }
L_002BD278:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 97u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BD2E8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 42u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD2B4u); st8((c.r[2].w[0] + 41u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_004D(c, 130u, depth + 1u); else { c.pc = 0x002362E0u; return; } if (c.pc != 0x002BD2B4u) [[unlikely]] return; }
L_002BD2B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD2BCu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 25u, depth + 1u); else { c.pc = 0x001246A0u; return; } if (c.pc != 0x002BD2BCu) [[unlikely]] return; }
L_002BD2BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD2C4u);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x002BD2C4u) [[unlikely]] return; }
L_002BD2C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD2CCu);  if (depth < kMaxDepth) unit_006B(c, 17u, depth + 1u); else { c.pc = 0x002AC350u; return; } if (c.pc != 0x002BD2CCu) [[unlikely]] return; }
L_002BD2CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD2D4u);  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x002BD2D4u) [[unlikely]] return; }
L_002BD2D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD2DCu);  if (depth < kMaxDepth) unit_005B(c, 76u, depth + 1u); else { c.pc = 0x0026CAB0u; return; } if (c.pc != 0x002BD2DCu) [[unlikely]] return; }
L_002BD2DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD2E4u);  if (depth < kMaxDepth) unit_004E(c, 5u, depth + 1u); else { c.pc = 0x00238040u; return; } if (c.pc != 0x002BD2E4u) [[unlikely]] return; }
L_002BD2E4:
    c.budget -= 1;
L_002BD2E8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BD300:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD310u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006C(c, 323u, depth + 1u); else { c.pc = 0x002B2640u; return; } if (c.pc != 0x002BD310u) [[unlikely]] return; }
L_002BD310:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BD3F0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[2].w[0] + 296u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 296u)));
    c.r[1].d[0] = c.r[2].sd[0] < 998ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002BD350; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002BD350:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 42u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD364u); st8((c.r[2].w[0] + 41u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_004D(c, 130u, depth + 1u); else { c.pc = 0x002362E0u; return; } if (c.pc != 0x002BD364u) [[unlikely]] return; }
L_002BD364:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD36Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 25u, depth + 1u); else { c.pc = 0x001246A0u; return; } if (c.pc != 0x002BD36Cu) [[unlikely]] return; }
L_002BD36C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD374u);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x002BD374u) [[unlikely]] return; }
L_002BD374:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD37Cu);  if (depth < kMaxDepth) unit_006B(c, 17u, depth + 1u); else { c.pc = 0x002AC350u; return; } if (c.pc != 0x002BD37Cu) [[unlikely]] return; }
L_002BD37C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD384u);  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x002BD384u) [[unlikely]] return; }
L_002BD384:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD38Cu);  if (depth < kMaxDepth) unit_005B(c, 76u, depth + 1u); else { c.pc = 0x0026CAB0u; return; } if (c.pc != 0x002BD38Cu) [[unlikely]] return; }
L_002BD38C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD394u);  if (depth < kMaxDepth) unit_004E(c, 5u, depth + 1u); else { c.pc = 0x00238040u; return; } if (c.pc != 0x002BD394u) [[unlikely]] return; }
L_002BD394:
    set32(c.r[3], 0u - 4u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_002BD3C8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 322u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st32((c.r[3].w[0] + 4u), 0u);
    c.budget -= 10;
L_002BD3C8:
    set32(c.r[3], 0u - 5u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_002BD3F0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 6u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st32((c.r[3].w[0] + 4u), 0u);
    c.budget -= 7;
L_002BD3F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BD400:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 4u), 0u);  c.pc = t; return; }
L_002BD430:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC970u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 43u, depth); }
L_002BD440:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[2].w[0] - 24224u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002BC000u < 16384u) { entry = entries_006F[(t - 0x002BC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002BD470:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD480u);  if (depth < kMaxDepth) unit_00C2(c, 74u, depth + 1u); else { c.pc = 0x00408EA0u; return; } if (c.pc != 0x002BD480u) [[unlikely]] return; }
L_002BD480:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BD4C0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.budget -= 14;
L_002BD4C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BD4D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD4E0u);  if (depth < kMaxDepth) unit_008F(c, 165u, depth + 1u); else { c.pc = 0x0033DF10u; return; } if (c.pc != 0x002BD4E0u) [[unlikely]] return; }
L_002BD4E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BD520; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 14;
L_002BD520:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BD530:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st64((c.r[3].w[0]), c.r[2].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD550u); st64((c.r[3].w[0] + 8u), 0ull);  if (depth < kMaxDepth) unit_0009(c, 25u, depth + 1u); else { c.pc = 0x001246A0u; return; } if (c.pc != 0x002BD550u) [[unlikely]] return; }
L_002BD550:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD558u);  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x002BD558u) [[unlikely]] return; }
L_002BD558:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD560u);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x002BD560u) [[unlikely]] return; }
L_002BD560:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BD570:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD580u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x002BD580u) [[unlikely]] return; }
L_002BD580:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[2].w[0] - 24208u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD5A4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BD5A4u) [[unlikely]] return; }
L_002BD5A4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BD5B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], c.r[4].w[0] + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002BD7C0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BD5E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BD830; } }
L_002BD5E8:
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD5F4u); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_005B(c, 61u, depth + 1u); else { c.pc = 0x0026C8B0u; return; } if (c.pc != 0x002BD5F4u) [[unlikely]] return; }
L_002BD5F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD5FCu);  if (depth < kMaxDepth) unit_005B(c, 64u, depth + 1u); else { c.pc = 0x0026C960u; return; } if (c.pc != 0x002BD5FCu) [[unlikely]] return; }
L_002BD5FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD604u);  if (depth < kMaxDepth) unit_0074(c, 289u, depth + 1u); else { c.pc = 0x002D2A70u; return; } if (c.pc != 0x002BD604u) [[unlikely]] return; }
L_002BD604:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD60Cu);  if (depth < kMaxDepth) unit_000B(c, 111u, depth + 1u); else { c.pc = 0x0012E0B0u; return; } if (c.pc != 0x002BD60Cu) [[unlikely]] return; }
L_002BD60C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD614u);  if (depth < kMaxDepth) unit_00B0(c, 176u, depth + 1u); else { c.pc = 0x003C11C0u; return; } if (c.pc != 0x002BD614u) [[unlikely]] return; }
L_002BD614:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD61Cu);  if (depth < kMaxDepth) unit_008F(c, 159u, depth + 1u); else { c.pc = 0x0033DE10u; return; } if (c.pc != 0x002BD61Cu) [[unlikely]] return; }
L_002BD61C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD624u);  if (depth < kMaxDepth) unit_00C2(c, 38u, depth + 1u); else { c.pc = 0x00408640u; return; } if (c.pc != 0x002BD624u) [[unlikely]] return; }
L_002BD624:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], 0u + 97u);
    c.r[3].d[0] = 0ull << 56;
    set32(c.r[4], 0u - 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    st8((c.r[2].w[0] + 77u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 56u)));
    st8((c.r[2].w[0] + 158u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 56u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 145u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 144u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 147u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 146u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st16((c.r[2].w[0] + 152u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 154u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 149u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 148u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 159u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 35;
L_002BD6B0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].d[0] = c.r[17].d[0] << 56;
    set32(c.r[3], 0u - 1u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st8((c.r[2].w[0] + 284u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0] + 137u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0] + 136u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0] + 129u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0] + 128u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0] + 121u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0] + 120u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD720u); st8((c.r[2].w[0] + 116u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0076(c, 280u, depth + 1u); else { c.pc = 0x002DB4C0u; return; } if (c.pc != 0x002BD720u) [[unlikely]] return; }
L_002BD720:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BD6B0u | kUnwind; return; } goto L_002BD6B0; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 12144u);
    set32(c.r[3], c.r[3].w[0] - 11832u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 24u)));
    st8((c.r[1].w[0] - 8942u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 25u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st16((c.r[1].w[0] - 8944u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 31u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st16((c.r[1].w[0] - 8932u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 32u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st16((c.r[1].w[0] - 8934u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD7A0u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 23u)));  if (depth < kMaxDepth) unit_0044(c, 199u, depth + 1u); else { c.pc = 0x00211410u; return; } if (c.pc != 0x002BD7A0u) [[unlikely]] return; }
L_002BD7A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD7A8u);  if (depth < kMaxDepth) unit_0032(c, 47u, depth + 1u); else { c.pc = 0x001C8B00u; return; } if (c.pc != 0x002BD7A8u) [[unlikely]] return; }
L_002BD7A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD7B0u);  if (depth < kMaxDepth) unit_005B(c, 76u, depth + 1u); else { c.pc = 0x0026CAB0u; return; } if (c.pc != 0x002BD7B0u) [[unlikely]] return; }
L_002BD7B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD7B8u);  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x002BD7B8u) [[unlikely]] return; }
L_002BD7B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BD830; } }
L_002BD7C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD7C8u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x002BD7C8u) [[unlikely]] return; }
L_002BD7C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BD830; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st16((c.r[3].w[0] + 10u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st16((c.r[3].w[0] + 14u), static_cast<std::uint16_t>(0u));
    c.budget -= 24;
L_002BD830:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BD850:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD860u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0074(c, 300u, depth + 1u); else { c.pc = 0x002D2EA0u; return; } if (c.pc != 0x002BD860u) [[unlikely]] return; }
L_002BD860:
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002BD888; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    c.r[1].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002BD888; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BD888:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BD930; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 158u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[4].w[0] + 158u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[8], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 2u)));
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[8].w[0] + 2u);  if (t) { goto L_002BD930; } }
    st64((c.r[8].w[0] + 8u), 0ull);
    set32(c.r[7], 0u + 111u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[4], 0u + 10u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 6u);
    st16((c.r[8].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 77u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 50u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD928u); set32(c.r[4], c.r[2].w[0] + 80u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x002BD928u) [[unlikely]] return; }
L_002BD928:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD930u);  if (depth < kMaxDepth) unit_004E(c, 5u, depth + 1u); else { c.pc = 0x00238040u; return; } if (c.pc != 0x002BD930u) [[unlikely]] return; }
L_002BD930:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[2].w[0] - 24192u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD954u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BD954u) [[unlikely]] return; }
L_002BD954:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BD960:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD970u);  if (depth < kMaxDepth) unit_006B(c, 237u, depth + 1u); else { c.pc = 0x002AFC80u; return; } if (c.pc != 0x002BD970u) [[unlikely]] return; }
L_002BD970:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BD9B8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], 0u + 98u);
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 77u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.budget -= 16;
L_002BD9B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BD9D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD9E0u);  if (depth < kMaxDepth) unit_006C(c, 26u, depth + 1u); else { c.pc = 0x002B02E0u; return; } if (c.pc != 0x002BD9E0u) [[unlikely]] return; }
L_002BD9E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BDA28; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], 0u + 99u);
    set32(c.r[4], 0u + 2u);
    st8((c.r[3].w[0] + 77u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.budget -= 16;
L_002BDA28:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BDA40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDA50u);  if (depth < kMaxDepth) unit_006C(c, 52u, depth + 1u); else { c.pc = 0x002B06F0u; return; } if (c.pc != 0x002BDA50u) [[unlikely]] return; }
L_002BDA50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BDA98; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], 0u + 100u);
    set32(c.r[4], 0u + 3u);
    st8((c.r[3].w[0] + 77u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.budget -= 16;
L_002BDA98:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BDAB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDAC0u);  if (depth < kMaxDepth) unit_006C(c, 98u, depth + 1u); else { c.pc = 0x002B0BF0u; return; } if (c.pc != 0x002BDAC0u) [[unlikely]] return; }
L_002BDAC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BDB58; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 158u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BDB18; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 97u);
    st8((c.r[3].w[0] + 77u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002BDB58; } }
L_002BDB18:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], 0u + 101u);
    set32(c.r[4], 0u + 4u);
    st8((c.r[3].w[0] + 77u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.budget -= 16;
L_002BDB58:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BDB70:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[20], c.r[20].w[0] - 29932u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[20].w[0] + 11u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 56u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 9u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 10u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDBBCu); st8((c.r[2].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_005B(c, 79u, depth + 1u); else { c.pc = 0x0026CB60u; return; } if (c.pc != 0x002BDBBCu) [[unlikely]] return; }
L_002BDBBC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[19], c.r[19].w[0] - 30112u);
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    st8((c.r[2].w[0] + 150u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 2u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 151u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 144u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 5u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 146u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 145u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 6u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 147u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 7u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 148u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 149u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 29;
L_002BDC30:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[19].w[0] + 4u);  if (t) { goto L_002BDD30; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[5], c.r[20].w[0] + 4u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 30u)));
    set32(c.r[6], 0u + 21u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0] + 276u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 31u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0] + 280u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0] + 284u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0] + 116u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDC94u); set32(c.r[4], c.r[2].w[0] + 161u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x002BDC94u) [[unlikely]] return; }
L_002BDC94:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 25u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st8((c.r[3].w[0] + 291u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + 14384u);
    set32(c.r[7], 0u + 52u);
    c.budget -= 9;
L_002BDCB8:
    set32(c.r[3], c.r[20].w[0] + c.r[2].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 26u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[7].d[0]; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 28u)));  if (t) { goto L_002BDCD8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[6].d[0];  if (t) { goto L_002BDCD8; } }
    set32(c.r[8], 0u + 54u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002BDCD8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st8((c.r[3].w[0] + 120u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st8((c.r[3].w[0] + 128u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[8], c.r[3].w[0] + c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 120u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] << 7);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 120u)));
    c.budget -= 19;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[8].w[0] + 136u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BDCB8u | kUnwind; return; } goto L_002BDCB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BDD48; } }
    c.budget -= 1;
L_002BDD30:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0] + 276u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0] + 280u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_002BDD48:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[19], c.r[19].w[0] + 44u);
    set32(c.r[18], c.r[18].w[0] + 21u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BDC30u | kUnwind; return; } goto L_002BDC30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDD68u);  if (depth < kMaxDepth) unit_00AA(c, 224u, depth + 1u); else { c.pc = 0x003AA8E0u; return; } if (c.pc != 0x002BDD68u) [[unlikely]] return; }
L_002BDD68:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 102u);
    set32(c.r[3], 0u + 5u);
    st8((c.r[2].w[0] + 77u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDDACu); st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_005B(c, 64u, depth + 1u); else { c.pc = 0x0026C960u; return; } if (c.pc != 0x002BDDACu) [[unlikely]] return; }
L_002BDDAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDDB4u);  if (depth < kMaxDepth) unit_006D(c, 334u, depth + 1u); else { c.pc = 0x002B7C90u; return; } if (c.pc != 0x002BDDB4u) [[unlikely]] return; }
L_002BDDB4:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 13u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st8((c.r[4].w[0] + 42u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 12u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002BDDF0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 13u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BDDF0; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_002BDDF0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDDFCu); st8((c.r[2].w[0] + 88u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_006E(c, 12u, depth + 1u); else { c.pc = 0x002B83D0u; return; } if (c.pc != 0x002BDDFCu) [[unlikely]] return; }
L_002BDDFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDE04u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x002BDE04u) [[unlikely]] return; }
L_002BDE04:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDE10u); st8((c.r[3].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0032(c, 47u, depth + 1u); else { c.pc = 0x001C8B00u; return; } if (c.pc != 0x002BDE10u) [[unlikely]] return; }
L_002BDE10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDE18u);  if (depth < kMaxDepth) unit_005B(c, 76u, depth + 1u); else { c.pc = 0x0026CAB0u; return; } if (c.pc != 0x002BDE18u) [[unlikely]] return; }
L_002BDE18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDE20u);  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x002BDE20u) [[unlikely]] return; }
L_002BDE20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDE28u);  if (depth < kMaxDepth) unit_006D(c, 280u, depth + 1u); else { c.pc = 0x002B6AB0u; return; } if (c.pc != 0x002BDE28u) [[unlikely]] return; }
L_002BDE28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDE30u);  if (depth < kMaxDepth) unit_006D(c, 301u, depth + 1u); else { c.pc = 0x002B6F00u; return; } if (c.pc != 0x002BDE30u) [[unlikely]] return; }
L_002BDE30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDE38u);  if (depth < kMaxDepth) unit_006D(c, 318u, depth + 1u); else { c.pc = 0x002B7580u; return; } if (c.pc != 0x002BDE38u) [[unlikely]] return; }
L_002BDE38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDE40u);  if (depth < kMaxDepth) unit_006D(c, 337u, depth + 1u); else { c.pc = 0x002B7D40u; return; } if (c.pc != 0x002BDE40u) [[unlikely]] return; }
L_002BDE40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002BDE60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDE70u);  if (depth < kMaxDepth) unit_004D(c, 136u, depth + 1u); else { c.pc = 0x00236320u; return; } if (c.pc != 0x002BDE70u) [[unlikely]] return; }
L_002BDE70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BDF30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDE80u);  if (depth < kMaxDepth) unit_006E(c, 11u, depth + 1u); else { c.pc = 0x002B82F0u; return; } if (c.pc != 0x002BDE80u) [[unlikely]] return; }
L_002BDE80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BDEE8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 103u);
    set32(c.r[3], 0u + 6u);
    st8((c.r[2].w[0] + 77u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 56u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 288u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 23;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 288u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002BDF28; } }
    c.budget -= 1;
L_002BDEE8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 104u);
    set32(c.r[3], 0u + 7u);
    st8((c.r[2].w[0] + 77u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.budget -= 16;
L_002BDF28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDF30u);  if (depth < kMaxDepth) unit_00AA(c, 236u, depth + 1u); else { c.pc = 0x003AAE30u; return; } if (c.pc != 0x002BDF30u) [[unlikely]] return; }
L_002BDF30:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BDF40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDF50u);  if (depth < kMaxDepth) unit_0046(c, 214u, depth + 1u); else { c.pc = 0x0021B730u; return; } if (c.pc != 0x002BDF50u) [[unlikely]] return; }
L_002BDF50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BDF98; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], 0u + 104u);
    set32(c.r[4], 0u + 7u);
    st8((c.r[3].w[0] + 77u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.budget -= 16;
L_002BDF98:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BDFB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDFC0u);  if (depth < kMaxDepth) unit_006C(c, 222u, depth + 1u); else { c.pc = 0x002B19F0u; return; } if (c.pc != 0x002BDFC0u) [[unlikely]] return; }
L_002BDFC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BE010; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], 0u + 108u);
    set32(c.r[4], 0u + 8u);
    st8((c.r[3].w[0] + 77u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002BE118; } }
    c.budget -= 1;
L_002BE010:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 97u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BE118; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BE048; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BE048; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BE070; } }
    c.budget -= 1;
L_002BE048:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE064u); st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_008F(c, 157u, depth + 1u); else { c.pc = 0x0033DDC0u; return; } if (c.pc != 0x002BE064u) [[unlikely]] return; }
L_002BE064:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BE088; } }
    c.budget -= 1;
L_002BE070:
    set32(c.r[2], 0u + 2u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_002BE088:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st16((c.r[2].w[0] + 10u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st16((c.r[2].w[0] + 14u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 42u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE0E4u); st8((c.r[2].w[0] + 41u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x002BE0E4u) [[unlikely]] return; }
L_002BE0E4:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE0F0u); st8((c.r[3].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004D(c, 130u, depth + 1u); else { c.pc = 0x002362E0u; return; } if (c.pc != 0x002BE0F0u) [[unlikely]] return; }
L_002BE0F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE0F8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 25u, depth + 1u); else { c.pc = 0x001246A0u; return; } if (c.pc != 0x002BE0F8u) [[unlikely]] return; }
L_002BE0F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE100u);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x002BE100u) [[unlikely]] return; }
L_002BE100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE108u);  if (depth < kMaxDepth) unit_006B(c, 17u, depth + 1u); else { c.pc = 0x002AC350u; return; } if (c.pc != 0x002BE108u) [[unlikely]] return; }
L_002BE108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE110u);  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x002BE110u) [[unlikely]] return; }
L_002BE110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE118u);  if (depth < kMaxDepth) unit_004E(c, 5u, depth + 1u); else { c.pc = 0x00238040u; return; } if (c.pc != 0x002BE118u) [[unlikely]] return; }
L_002BE118:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BE130:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 150u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 151u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE154u); set32(c.r[16], c.r[16].w[0] - 29932u);  if (depth < kMaxDepth) unit_006D(c, 300u, depth + 1u); else { c.pc = 0x002B6ED0u; return; } if (c.pc != 0x002BE154u) [[unlikely]] return; }
L_002BE154:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 150u)));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 151u)));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 144u)));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 146u)));
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 145u)));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 147u)));
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 148u)));
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 149u)));
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 29;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BE1D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE1E0u);  if (depth < kMaxDepth) unit_006C(c, 323u, depth + 1u); else { c.pc = 0x002B2640u; return; } if (c.pc != 0x002BE1E0u) [[unlikely]] return; }
L_002BE1E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u - 2u);  if (t) { goto L_002BE650; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002BE258; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 84u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 83u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 81u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 82u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 26;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002BE650; } }
L_002BE258:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002BE300; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 80u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BE2B8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], 0u + 100u);
    set32(c.r[4], 0u + 3u);
    st8((c.r[3].w[0] + 77u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002BE650; } }
L_002BE2B8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], 0u + 101u);
    set32(c.r[4], 0u + 4u);
    st8((c.r[3].w[0] + 77u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002BE650; } }
    c.budget -= 1;
L_002BE300:
    set32(c.r[3], 0u - 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002BE388; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 110u);
    set32(c.r[3], 0u + 9u);
    st8((c.r[2].w[0] + 77u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 42u)));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BE370; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE368u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 82u)));  if (depth < kMaxDepth) unit_0076(c, 304u, depth + 1u); else { c.pc = 0x002DBD50u; return; } if (c.pc != 0x002BE368u) [[unlikely]] return; }
L_002BE368:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BE650; } }
L_002BE370:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE378u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 304u, depth + 1u); else { c.pc = 0x002DBD50u; return; } if (c.pc != 0x002BE378u) [[unlikely]] return; }
L_002BE378:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE380u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 304u, depth + 1u); else { c.pc = 0x002DBD50u; return; } if (c.pc != 0x002BE380u) [[unlikely]] return; }
L_002BE380:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BE650; } }
L_002BE388:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BE3A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002BE3B0; } }
    c.budget -= 1;
L_002BE3A8:
    set32(c.r[2], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002BE3B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BE4C8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 144u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 146u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 148u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[3].w[0] + 148u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 148u)));
    c.r[1].d[0] = c.r[3].sd[0] < 98ll ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002BE408; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002BE408:
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], 0u - 1u);
    st8((c.r[4].w[0] + 88u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[4].w[0] + 159u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[4], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[4].w[0] + 144u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 144u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002BE460; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002BE448; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002BE450; } }
L_002BE448:
    set32(c.r[3], 0u + 3u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002BE450:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 146u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_002BE460:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 144u)));
    st8((c.r[4].w[0] + 150u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 146u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE484u); st8((c.r[3].w[0] + 151u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006F(c, 181u, depth + 1u); else { c.pc = 0x002BE130u; return; } if (c.pc != 0x002BE484u) [[unlikely]] return; }
L_002BE484:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], 0u + 101u);
    set32(c.r[4], 0u + 4u);
    st8((c.r[3].w[0] + 77u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002BE650; } }
L_002BE4C8:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002BE5E8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 152u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0] + 152u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[4], c.r[3].w[0] + 152u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 152u)));
    c.r[3].d[0] = c.r[3].sd[0] < 998ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 998u);  if (t) { goto L_002BE508; } }
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002BE508:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 154u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 154u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[4], c.r[3].w[0] + 154u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 154u)));
    c.r[3].d[0] = c.r[3].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 50u);  if (t) { goto L_002BE538; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002BE538:
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[4], 0u + 5u);
    set32(c.r[3], 0u + 4u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 151u)));
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002BE588; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 159u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 130u)));
    set32(c.r[3], c.r[3].w[0] + 300u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st16((c.r[6].w[0] + 328u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002BE5B0; } }
L_002BE588:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 159u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 130u)));
    set32(c.r[3], c.r[3].w[0] + 100u);
    st16((c.r[6].w[0] + 328u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 10;
L_002BE5B0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[4].w[0] - 8940u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 159u)));
    set32(c.r[6], c.r[3].w[0] + 328u);
    set32(c.r[5], c.r[5].w[0] << 1);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 328u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002BE5E8; } }
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 2;
L_002BE5E8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 146u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 146u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 146u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE610u); st8((c.r[3].w[0] + 151u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006F(c, 181u, depth + 1u); else { c.pc = 0x002BE130u; return; } if (c.pc != 0x002BE610u) [[unlikely]] return; }
L_002BE610:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], 0u + 101u);
    set32(c.r[4], 0u + 4u);
    st8((c.r[3].w[0] + 77u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.budget -= 16;
L_002BE650:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BE660:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 12u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 150u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BE68C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE684u);  if (depth < kMaxDepth) unit_007D(c, 104u, depth + 1u); else { c.pc = 0x002F4CC0u; return; } if (c.pc != 0x002BE684u) [[unlikely]] return; }
L_002BE684:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BE694; } }
L_002BE68C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE694u);  if (depth < kMaxDepth) unit_007D(c, 27u, depth + 1u); else { c.pc = 0x002F46D0u; return; } if (c.pc != 0x002BE694u) [[unlikely]] return; }
L_002BE694:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BE6E8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.budget -= 19;
L_002BE6E8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BE700:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 24144u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE72Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BE72Cu) [[unlikely]] return; }
L_002BE72C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 7u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00240000u);  if (t) { goto L_002BE750; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE748u); set32(c.r[4], c.r[4].w[0] - 9792u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x002BE748u) [[unlikely]] return; }
L_002BE748:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE750u);  if (depth < kMaxDepth) unit_004F(c, 70u, depth + 1u); else { c.pc = 0x0023D240u; return; } if (c.pc != 0x002BE750u) [[unlikely]] return; }
L_002BE750:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE75Cu); set32(c.r[4], c.r[4].w[0] - 5456u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x002BE75Cu) [[unlikely]] return; }
L_002BE75C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE768u); set32(c.r[4], c.r[4].w[0] - 18864u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x002BE768u) [[unlikely]] return; }
L_002BE768:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE774u); set32(c.r[4], c.r[4].w[0] - 15136u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x002BE774u) [[unlikely]] return; }
L_002BE774:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE780u); set32(c.r[4], c.r[4].w[0] + 21472u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x002BE780u) [[unlikely]] return; }
L_002BE780:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE78Cu); set32(c.r[4], c.r[4].w[0] - 15024u);  if (depth < kMaxDepth) unit_0043(c, 416u, depth + 1u); else { c.pc = 0x0020FEF0u; return; } if (c.pc != 0x002BE78Cu) [[unlikely]] return; }
L_002BE78C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE798u); set32(c.r[4], c.r[4].w[0] - 14928u);  if (depth < kMaxDepth) unit_0043(c, 416u, depth + 1u); else { c.pc = 0x0020FEF0u; return; } if (c.pc != 0x002BE798u) [[unlikely]] return; }
L_002BE798:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE7A4u); set32(c.r[4], c.r[4].w[0] - 14912u);  if (depth < kMaxDepth) unit_0043(c, 416u, depth + 1u); else { c.pc = 0x0020FEF0u; return; } if (c.pc != 0x002BE7A4u) [[unlikely]] return; }
L_002BE7A4:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 7u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);  if (t) { goto L_002BE7D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE7C0u); set32(c.r[4], c.r[4].w[0] - 928u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x002BE7C0u) [[unlikely]] return; }
L_002BE7C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE7CCu); set32(c.r[4], c.r[4].w[0] - 912u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x002BE7CCu) [[unlikely]] return; }
L_002BE7CC:
    c.budget -= 1;
L_002BE7D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BE7E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE7F0u);  if (depth < kMaxDepth) unit_0046(c, 207u, depth + 1u); else { c.pc = 0x0021B5B0u; return; } if (c.pc != 0x002BE7F0u) [[unlikely]] return; }
L_002BE7F0:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BE810:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 175u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], 0u + 7u);
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BE850; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE850u);  if (depth < kMaxDepth) unit_0046(c, 206u, depth + 1u); else { c.pc = 0x0021B5A0u; return; } if (c.pc != 0x002BE850u) [[unlikely]] return; }
L_002BE850:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE858u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_004E(c, 35u, depth + 1u); else { c.pc = 0x002382B0u; return; } if (c.pc != 0x002BE858u) [[unlikely]] return; }
L_002BE858:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BE870:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], c.r[3].w[0] + 12u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 12u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BE898; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002BE898:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BE8D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE8B0u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x002BE8B0u) [[unlikely]] return; }
L_002BE8B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BE8D8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 8u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE8D4u); st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x002BE8D4u) [[unlikely]] return; }
L_002BE8D4:
    c.budget -= 1;
L_002BE8D8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BE8F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE900u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x002BE900u) [[unlikely]] return; }
L_002BE900:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BE928; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE91Cu); st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006B(c, 17u, depth + 1u); else { c.pc = 0x002AC350u; return; } if (c.pc != 0x002BE91Cu) [[unlikely]] return; }
L_002BE91C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE924u);  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x002BE924u) [[unlikely]] return; }
L_002BE924:
    c.budget -= 1;
L_002BE928:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BE940:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 97u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[16].d[0] = 0ull + 0ull;
    st8((c.r[2].w[0] + 77u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st16((c.r[2].w[0] + 10u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st16((c.r[2].w[0] + 14u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 50u), static_cast<std::uint8_t>(0u));
    c.budget -= 32;
L_002BE9C0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << (c.r[17].w[0] & 31u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 158u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002BEA58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE9E4u);  if (depth < kMaxDepth) unit_0032(c, 43u, depth + 1u); else { c.pc = 0x001C8A70u; return; } if (c.pc != 0x002BE9E4u) [[unlikely]] return; }
L_002BE9E4:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].d[0] = c.r[17].d[0] << 56;
    set32(c.r[3], 0u - 1u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st8((c.r[2].w[0] + 284u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0] + 137u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0] + 136u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0] + 129u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0] + 128u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0] + 121u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0] + 120u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEA54u); st8((c.r[2].w[0] + 116u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0076(c, 280u, depth + 1u); else { c.pc = 0x002DB4C0u; return; } if (c.pc != 0x002BEA54u) [[unlikely]] return; }
L_002BEA54:
    c.budget -= 1;
L_002BEA58:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BE9C0u | kUnwind; return; } goto L_002BE9C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEA70u);  if (depth < kMaxDepth) unit_004D(c, 130u, depth + 1u); else { c.pc = 0x002362E0u; return; } if (c.pc != 0x002BEA70u) [[unlikely]] return; }
L_002BEA70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEA78u);  if (depth < kMaxDepth) unit_0046(c, 207u, depth + 1u); else { c.pc = 0x0021B5B0u; return; } if (c.pc != 0x002BEA78u) [[unlikely]] return; }
L_002BEA78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEA80u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 25u, depth + 1u); else { c.pc = 0x001246A0u; return; } if (c.pc != 0x002BEA80u) [[unlikely]] return; }
L_002BEA80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEA88u);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x002BEA88u) [[unlikely]] return; }
L_002BEA88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEA90u);  if (depth < kMaxDepth) unit_004E(c, 5u, depth + 1u); else { c.pc = 0x00238040u; return; } if (c.pc != 0x002BEA90u) [[unlikely]] return; }
L_002BEA90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BEAB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BEB38; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 8u)));
    set32(c.r[3], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002BEB20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEAE4u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002BEAE4u) [[unlikely]] return; }
L_002BEAE4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BE0000u);
    set32(c.r[5], 0u + 7u);
    set32(c.r[2], ld32((c.r[1].w[0] - 5896u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEAFCu); set32(c.r[4], c.r[2].w[0] + 4080u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002BEAFCu) [[unlikely]] return; }
L_002BEAFC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BE0000u);
    set32(c.r[5], 0u + 7u);
    set32(c.r[2], ld32((c.r[1].w[0] - 5896u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEB14u); set32(c.r[4], c.r[2].w[0] + 4320u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002BEB14u) [[unlikely]] return; }
L_002BEB14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BEB38; } }
    c.budget -= 1;
L_002BEB20:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002BEB38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEB34u);  if (depth < kMaxDepth) unit_001E(c, 271u, depth + 1u); else { c.pc = 0x0017AF40u; return; } if (c.pc != 0x002BEB34u) [[unlikely]] return; }
L_002BEB34:
    c.budget -= 1;
L_002BEB38:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BEB50:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[2].w[0] - 24112u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002BC000u < 16384u) { entry = entries_006F[(t - 0x002BC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002BEB80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEB90u);  if (depth < kMaxDepth) unit_00B0(c, 187u, depth + 1u); else { c.pc = 0x003C14C0u; return; } if (c.pc != 0x002BEB90u) [[unlikely]] return; }
L_002BEB90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BEBD0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.budget -= 14;
L_002BEBD0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BEBE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEBF0u);  if (depth < kMaxDepth) unit_00C2(c, 74u, depth + 1u); else { c.pc = 0x00408EA0u; return; } if (c.pc != 0x002BEBF0u) [[unlikely]] return; }
L_002BEBF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BEC30; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.budget -= 14;
L_002BEC30:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BEC40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEC50u);  if (depth < kMaxDepth) unit_008F(c, 165u, depth + 1u); else { c.pc = 0x0033DF10u; return; } if (c.pc != 0x002BEC50u) [[unlikely]] return; }
L_002BEC50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BEC90; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 14;
L_002BEC90:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BECA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 97u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BECD8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 1u);
    st64((c.r[3].w[0]), c.r[2].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BECCCu); st64((c.r[3].w[0] + 8u), 0ull);  if (depth < kMaxDepth) unit_000B(c, 151u, depth + 1u); else { c.pc = 0x0012E520u; return; } if (c.pc != 0x002BECCCu) [[unlikely]] return; }
L_002BECCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BECE8; } }
    c.budget -= 1;
L_002BECD8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    st64((c.r[3].w[0]), c.r[2].d[0]);
    st64((c.r[3].w[0] + 8u), 0ull);
    c.budget -= 4;
L_002BECE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BECF0u);  if (depth < kMaxDepth) unit_006B(c, 17u, depth + 1u); else { c.pc = 0x002AC350u; return; } if (c.pc != 0x002BECF0u) [[unlikely]] return; }
L_002BECF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BECF8u);  if (depth < kMaxDepth) unit_005B(c, 76u, depth + 1u); else { c.pc = 0x0026CAB0u; return; } if (c.pc != 0x002BECF8u) [[unlikely]] return; }
L_002BECF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BED00u);  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x002BED00u) [[unlikely]] return; }
L_002BED00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BED08u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 384u, depth + 1u); else { c.pc = 0x0020F700u; return; } if (c.pc != 0x002BED08u) [[unlikely]] return; }
L_002BED08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BED10u);  if (depth < kMaxDepth) unit_004D(c, 130u, depth + 1u); else { c.pc = 0x002362E0u; return; } if (c.pc != 0x002BED10u) [[unlikely]] return; }
L_002BED10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BED18u);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x002BED18u) [[unlikely]] return; }
L_002BED18:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BED30:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[2].w[0] - 24096u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002BC000u < 16384u) { entry = entries_006F[(t - 0x002BC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002BED60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BED70u);  if (depth < kMaxDepth) unit_00C5(c, 293u, depth + 1u); else { c.pc = 0x004163D0u; return; } if (c.pc != 0x002BED70u) [[unlikely]] return; }
L_002BED70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BEEE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BED80u);  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x002BED80u) [[unlikely]] return; }
L_002BED80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BED88u);  if (depth < kMaxDepth) unit_005B(c, 64u, depth + 1u); else { c.pc = 0x0026C960u; return; } if (c.pc != 0x002BED88u) [[unlikely]] return; }
L_002BED88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BED90u);  if (depth < kMaxDepth) unit_005B(c, 61u, depth + 1u); else { c.pc = 0x0026C8B0u; return; } if (c.pc != 0x002BED90u) [[unlikely]] return; }
L_002BED90:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 7328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEDA4u); set32(c.r[6], 0u + 516u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x002BEDA4u) [[unlikely]] return; }
L_002BEDA4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEDB4u); st16((c.r[2].w[0] + 50u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_008F(c, 159u, depth + 1u); else { c.pc = 0x0033DE10u; return; } if (c.pc != 0x002BEDB4u) [[unlikely]] return; }
L_002BEDB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEDBCu);  if (depth < kMaxDepth) unit_00C2(c, 38u, depth + 1u); else { c.pc = 0x00408640u; return; } if (c.pc != 0x002BEDBCu) [[unlikely]] return; }
L_002BEDBC:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 2u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEE0Cu); st16((c.r[2].w[0] + 14u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_000B(c, 213u, depth + 1u); else { c.pc = 0x0012F990u; return; } if (c.pc != 0x002BEE0Cu) [[unlikely]] return; }
L_002BEE0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEE14u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 384u, depth + 1u); else { c.pc = 0x0020F700u; return; } if (c.pc != 0x002BEE14u) [[unlikely]] return; }
L_002BEE14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEE1Cu);  if (depth < kMaxDepth) unit_0045(c, 85u, depth + 1u); else { c.pc = 0x00214BD0u; return; } if (c.pc != 0x002BEE1Cu) [[unlikely]] return; }
L_002BEE1C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEE28u); set32(c.r[4], c.r[4].w[0] + 15664u);  if (depth < kMaxDepth) unit_005B(c, 89u, depth + 1u); else { c.pc = 0x0026CD50u; return; } if (c.pc != 0x002BEE28u) [[unlikely]] return; }
L_002BEE28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEE30u);  if (depth < kMaxDepth) unit_004B(c, 22u, depth + 1u); else { c.pc = 0x0022C4E0u; return; } if (c.pc != 0x002BEE30u) [[unlikely]] return; }
L_002BEE30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEE38u);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x002BEE38u) [[unlikely]] return; }
L_002BEE38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEE40u);  if (depth < kMaxDepth) unit_0072(c, 32u, depth + 1u); else { c.pc = 0x002C8590u; return; } if (c.pc != 0x002BEE40u) [[unlikely]] return; }
L_002BEE40:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 85u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_002BEE60; } }
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002BEEE0; } }
L_002BEE60:
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[5], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xC4700000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42700000u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    st8((c.r[2].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    st16((c.r[2].w[0] + 10u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    st8((c.r[2].w[0] + 13674u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    st8((c.r[2].w[0] + 13676u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    st32((c.r[2].w[0] + 16u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    st8((c.r[2].w[0] + 14180u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    st32((c.r[2].w[0] + 14164u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    st32((c.r[2].w[0] + 14168u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    st32((c.r[2].w[0] + 14172u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEED8u); st32((c.r[2].w[0] + 14176u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0071(c, 187u, depth + 1u); else { c.pc = 0x002C6E10u; return; } if (c.pc != 0x002BEED8u) [[unlikely]] return; }
L_002BEED8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEEE0u);  if (depth < kMaxDepth) unit_0072(c, 13u, depth + 1u); else { c.pc = 0x002C8140u; return; } if (c.pc != 0x002BEEE0u) [[unlikely]] return; }
L_002BEEE0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BEEF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 23780u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2u)));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[7], c.r[6].w[0] + 2u);  if (t) { goto L_002BF158; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 21664u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x002BC000u < 16384u) { entry = entries_006F[(t - 0x002BC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002BEF28:
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 55u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BEFD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEF44u);  if (depth < kMaxDepth) unit_008F(c, 196u, depth + 1u); else { c.pc = 0x0033E1F0u; return; } if (c.pc != 0x002BEF44u) [[unlikely]] return; }
L_002BEF44:
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[5], 0u + 2u);  if (t) { goto L_002BEFC0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_002BEF98; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_002BEF68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BF158; } }
L_002BEF68:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002BF158; } }
    c.budget -= 1;
L_002BEF98:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002BF158; } }
    c.budget -= 1;
L_002BEFC0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002BF158; } }
    c.budget -= 1;
L_002BEFD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEFD8u);  if (depth < kMaxDepth) unit_008F(c, 236u, depth + 1u); else { c.pc = 0x0033E5A0u; return; } if (c.pc != 0x002BEFD8u) [[unlikely]] return; }
L_002BEFD8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002BF018; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BEFF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BF158; } }
    c.budget -= 1;
L_002BEFF8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 5u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002BF158; } }
L_002BF018:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002BF158; } }
L_002BF028:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF030u);  if (depth < kMaxDepth) unit_00C2(c, 74u, depth + 1u); else { c.pc = 0x00408EA0u; return; } if (c.pc != 0x002BF030u) [[unlikely]] return; }
L_002BF030:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BF158; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002BF158; } }
    c.budget -= 1;
L_002BF060:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF068u);  if (depth < kMaxDepth) unit_008F(c, 165u, depth + 1u); else { c.pc = 0x0033DF10u; return; } if (c.pc != 0x002BF068u) [[unlikely]] return; }
L_002BF068:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BF158; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002BF158; } }
    c.budget -= 1;
L_002BF088:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 20u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF0A8u); st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x002BF0A8u) [[unlikely]] return; }
L_002BF0A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BF158; } }
L_002BF0B0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[6].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_002BF158; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 4u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002BF158; } }
    c.budget -= 1;
L_002BF0F8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[6].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_002BF158; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 2u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 17;
L_002BF158:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BF170:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF180u);  if (depth < kMaxDepth) unit_00AA(c, 134u, depth + 1u); else { c.pc = 0x003A9980u; return; } if (c.pc != 0x002BF180u) [[unlikely]] return; }
L_002BF180:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_002BF1B0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7u)));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002BF338; } }
L_002BF1B0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002BF338; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[4], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 14182u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BF200; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 4u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002BF338; } }
L_002BF200:
    set32(c.r[8], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[9], 0u + 5u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[7], c.r[7].w[0] - 24032u);
    set32(c.r[6], c.r[6].w[0] - 24030u);
    set32(c.r[5], c.r[5].w[0] - 24028u);
    st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[8], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[8].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[8], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[8].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[8], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[8].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[10], ld32((c.r[28].w[0] - 30304u)));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    set32(c.r[8], c.r[9].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    st8((c.r[10].w[0] + 13674u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[9], ld32((c.r[28].w[0] - 30304u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    st16((c.r[9].w[0] + 10u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[8], ld32((c.r[28].w[0] - 30304u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    st16((c.r[8].w[0] + 12u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 30304u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 44;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002BF2F8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_002BF2E0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002BF2C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BF308; } }
L_002BF2C8:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[4].w[0] + 326u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 327u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002BF308; } }
    c.budget -= 1;
L_002BF2E0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 326u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 327u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002BF308; } }
    c.budget -= 1;
L_002BF2F8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 326u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 327u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
L_002BF308:
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0xC2F00000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xC4700000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42700000u);
    st32((c.r[3].w[0] + 14164u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    st32((c.r[3].w[0] + 14168u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    st32((c.r[3].w[0] + 14172u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    st32((c.r[3].w[0] + 14176u), c.r[4].w[0]);
    c.budget -= 12;
L_002BF338:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BF350:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 30304u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 14182u)));
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 14182u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], c.r[2].w[0] + 2u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BF3A8; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF3A4u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00C5(c, 131u, depth + 1u); else { c.pc = 0x00414FC0u; return; } if (c.pc != 0x002BF3A4u) [[unlikely]] return; }
L_002BF3A4:
    c.budget -= 1;
L_002BF3A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF3B0u);  if (depth < kMaxDepth) unit_00C5(c, 133u, depth + 1u); else { c.pc = 0x004151C0u; return; } if (c.pc != 0x002BF3B0u) [[unlikely]] return; }
L_002BF3B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BF3C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF3D0u);  if (depth < kMaxDepth) unit_006F(c, 279u, depth + 1u); else { c.pc = 0x002BF350u; return; } if (c.pc != 0x002BF3D0u) [[unlikely]] return; }
L_002BF3D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BF410; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 4u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF40Cu); set32(c.r[4], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_00AC(c, 14u, depth + 1u); else { c.pc = 0x003B00E0u; return; } if (c.pc != 0x002BF40Cu) [[unlikely]] return; }
L_002BF40C:
    c.budget -= 1;
L_002BF410:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BF420:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF430u);  if (depth < kMaxDepth) unit_006F(c, 293u, depth + 1u); else { c.pc = 0x002BF560u; return; } if (c.pc != 0x002BF430u) [[unlikely]] return; }
L_002BF430:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BF458; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 5u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
L_002BF458:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BF470:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF480u);  if (depth < kMaxDepth) unit_0070(c, 47u, depth + 1u); else { c.pc = 0x002C0430u; return; } if (c.pc != 0x002BF480u) [[unlikely]] return; }
L_002BF480:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BF498; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 7u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
L_002BF498:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BF4B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF4C0u);  if (depth < kMaxDepth) unit_00C4(c, 63u, depth + 1u); else { c.pc = 0x00410790u; return; } if (c.pc != 0x002BF4C0u) [[unlikely]] return; }
L_002BF4C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BF4F0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], 0u + 4u);
    set32(c.r[4], 0u + 2u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
L_002BF4F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BF500:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF510u);  if (depth < kMaxDepth) unit_00C4(c, 63u, depth + 1u); else { c.pc = 0x00410790u; return; } if (c.pc != 0x002BF510u) [[unlikely]] return; }
L_002BF510:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BF548; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 55u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 12;
L_002BF548:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BF560:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[2].w[0] - 24000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002BC000u < 16384u) { entry = entries_006F[(t - 0x002BC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002BF590:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_002BF670; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BF620; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BF5F0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BF5D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BF6A8; } }
L_002BF5D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF5D8u);  if (depth < kMaxDepth) unit_00C0(c, 297u, depth + 1u); else { c.pc = 0x00403180u; return; } if (c.pc != 0x002BF5D8u) [[unlikely]] return; }
L_002BF5D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF5E0u);  if (depth < kMaxDepth) unit_0071(c, 82u, depth + 1u); else { c.pc = 0x002C5590u; return; } if (c.pc != 0x002BF5E0u) [[unlikely]] return; }
L_002BF5E0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_002BF5F0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 78u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002BF6A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF608u);  if (depth < kMaxDepth) unit_0072(c, 25u, depth + 1u); else { c.pc = 0x002C8420u; return; } if (c.pc != 0x002BF608u) [[unlikely]] return; }
L_002BF608:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002BF6A8; } }
    c.budget -= 1;
L_002BF620:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF628u);  if (depth < kMaxDepth) unit_0071(c, 109u, depth + 1u); else { c.pc = 0x002C5820u; return; } if (c.pc != 0x002BF628u) [[unlikely]] return; }
L_002BF628:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF630u);  if (depth < kMaxDepth) unit_0071(c, 165u, depth + 1u); else { c.pc = 0x002C6460u; return; } if (c.pc != 0x002BF630u) [[unlikely]] return; }
L_002BF630:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF638u);  if (depth < kMaxDepth) unit_0071(c, 162u, depth + 1u); else { c.pc = 0x002C63B0u; return; } if (c.pc != 0x002BF638u) [[unlikely]] return; }
L_002BF638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF640u);  if (depth < kMaxDepth) unit_0071(c, 209u, depth + 1u); else { c.pc = 0x002C73C0u; return; } if (c.pc != 0x002BF640u) [[unlikely]] return; }
L_002BF640:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF648u);  if (depth < kMaxDepth) unit_0071(c, 222u, depth + 1u); else { c.pc = 0x002C79A0u; return; } if (c.pc != 0x002BF648u) [[unlikely]] return; }
L_002BF648:
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF65Cu); st8((c.r[2].w[0] + 462u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x002BF65Cu) [[unlikely]] return; }
L_002BF65C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_002BF670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF678u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x002BF678u) [[unlikely]] return; }
L_002BF678:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BF698; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_002BF698:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF6A4u); set32(c.r[4], c.r[4].w[0] - 29520u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x002BF6A4u) [[unlikely]] return; }
L_002BF6A4:
    c.budget -= 1;
L_002BF6A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BF6C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 23984u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF6ECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BF6ECu) [[unlikely]] return; }
L_002BF6EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF6F4u);  if (depth < kMaxDepth) unit_0071(c, 233u, depth + 1u); else { c.pc = 0x002C7C80u; return; } if (c.pc != 0x002BF6F4u) [[unlikely]] return; }
L_002BF6F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF6FCu);  if (depth < kMaxDepth) unit_0071(c, 235u, depth + 1u); else { c.pc = 0x002C7CF0u; return; } if (c.pc != 0x002BF6FCu) [[unlikely]] return; }
L_002BF6FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF708u); set32(c.r[4], c.r[4].w[0] - 29520u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x002BF708u) [[unlikely]] return; }
L_002BF708:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BF720:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF730u);  if (depth < kMaxDepth) unit_0071(c, 171u, depth + 1u); else { c.pc = 0x002C6750u; return; } if (c.pc != 0x002BF730u) [[unlikely]] return; }
L_002BF730:
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 462u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    st32((c.r[3].w[0] + 464u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BF760:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[8], 0u - 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[6], ld32((c.r[28].w[0] - 30304u)));
    c.r[7].d[0] = c.r[8].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + 27664u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 10;
L_002BF788:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 13324u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002BF7B0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 16u)));
    c.r[1].d[0] = c.r[8].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002BF7B0; } }
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    c.r[7].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 3;
L_002BF7B0:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[3].d[0] = c.r[9].sd[0] < 350ll ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BF788u | kUnwind; return; } goto L_002BF788; } }
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[5].d[0];  if (t) { goto L_002BF820; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    st16((c.r[2].w[0] + 50u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF7E4u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 50u)));  if (depth < kMaxDepth) unit_0071(c, 173u, depth + 1u); else { c.pc = 0x002C6860u; return; } if (c.pc != 0x002BF7E4u) [[unlikely]] return; }
L_002BF7E4:
    set32(c.r[4], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[3], 0u - 1u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 48u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002BF840; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 2u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    st8((c.r[3].w[0] + 45u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 28u), 0u);  if (t) { goto L_002BF840; } }
L_002BF820:
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[4], 0u + 2u);
    st16((c.r[3].w[0] + 50u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
L_002BF840:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BF850:
    set32(c.r[4], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[2] = ld32((c.r[4].w[0] + 28u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[4].w[0] + 28u), c.f[1]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.f[1] = ld32((c.r[2].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], c.r[2].w[0] + 28u);  if (t) { goto L_002BF898; } }
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 3u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_002BF898:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    c.budget -= 3;
    { set32(c.r[4], c.r[4].w[0] - 24992u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020FEB0u | kUnwind; return; } [[clang::musttail]] return unit_0043(c, 414u, depth); }
L_002BF8B0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00620000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 22480u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[2], 0u + 2u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[20].d[0] = ld16((c.r[1].w[0] + 9612u));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 48u)));
    set32(c.r[7], c.r[3].w[0] + 4u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 45u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[4].w[0] << 3);
    set32(c.r[4], ld32((c.r[6].w[0])));
    c.budget -= 24;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[18], c.r[4].w[0] + c.r[5].w[0]);  if (t) { goto L_002BF9D0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BF948; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BF930; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFB00; } }
    c.budget -= 1;
L_002BF930:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    st8((c.r[2].w[0] + 46u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_002BF948:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002BF9B8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BF9B8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 46u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_002BF988; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF97Cu);  if (depth < kMaxDepth) unit_0071(c, 108u, depth + 1u); else { c.pc = 0x002C57C0u; return; } if (c.pc != 0x002BF97Cu) [[unlikely]] return; }
L_002BF97C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    st8((c.r[2].w[0] + 46u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002BF988:
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[5].d[0] = 0ull + 0ull;
    st16((c.r[2].w[0] + 260u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    st16((c.r[2].w[0] + 262u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    st16((c.r[2].w[0] + 264u), static_cast<std::uint16_t>(0u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 6u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF9B8u); set32(c.r[4], c.r[4].w[0] - 18224u);  if (depth < kMaxDepth) unit_004E(c, 46u, depth + 1u); else { c.pc = 0x00238530u; return; } if (c.pc != 0x002BF9B8u) [[unlikely]] return; }
L_002BF9B8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002BFB00; } }
    c.budget -= 1;
L_002BF9D0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BF9F8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BF9F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF9F4u);  if (depth < kMaxDepth) unit_006F(c, 328u, depth + 1u); else { c.pc = 0x002BFB90u; return; } if (c.pc != 0x002BF9F4u) [[unlikely]] return; }
L_002BF9F4:
    c.budget -= 1;
L_002BF9F8:
    c.r[19].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], 0u + 294u);
    c.budget -= 4;
L_002BFA08:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[8], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[8].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] << 48;  if (t) { goto L_002BFA48; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[4], 0u + 30u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFA34u); set32(c.r[7], c.r[7].w[0] - 21624u);  if (depth < kMaxDepth) unit_0044(c, 355u, depth + 1u); else { c.pc = 0x00213180u; return; } if (c.pc != 0x002BFA34u) [[unlikely]] return; }
L_002BFA34:
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.r[2].d[0] = c.r[19].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 22u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BFA08u | kUnwind; return; } goto L_002BFA08; } }
L_002BFA48:
    c.r[3].d[0] = c.r[20].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] & 64ull;  if (t) { goto L_002BFA60; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BFB00; } }
L_002BFA60:
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 45u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFA78u); st8((c.r[3].w[0] + 45u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 54u, depth + 1u); else { c.pc = 0x002387E0u; return; } if (c.pc != 0x002BFA78u) [[unlikely]] return; }
L_002BFA78:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFA84u); set32(c.r[5], 0u + 170u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x002BFA84u) [[unlikely]] return; }
L_002BFA84:
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[3], c.r[3].w[0] - 22480u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 45u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BFAF0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 4u);
    set32(c.r[2], 0u - 1u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 46u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BFB00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFAE8u); set32(c.r[4], ld32((c.r[28].w[0] - 23320u)));  if (depth < kMaxDepth) unit_000B(c, 62u, depth + 1u); else { c.pc = 0x0012D1C0u; return; } if (c.pc != 0x002BFAE8u) [[unlikely]] return; }
L_002BFAE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFB00; } }
L_002BFAF0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_002BFB00:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFB0Cu); set32(c.r[4], c.r[4].w[0] - 24992u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x002BFB0Cu) [[unlikely]] return; }
L_002BFB0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002BFB30:
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 28u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    st32((c.r[3].w[0] + 28u), c.f[1]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.f[1] = ld32((c.r[2].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[2].w[0] + 28u);  if (t) { goto L_002BFB80; } }
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
L_002BFB80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    c.budget -= 3;
    { set32(c.r[4], c.r[4].w[0] - 24992u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020FEB0u | kUnwind; return; } [[clang::musttail]] return unit_0043(c, 414u, depth); }
L_002BFB90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 262u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[3].w[0] + 262u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 260u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFBBCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 57u, depth + 1u); else { c.pc = 0x00238840u; return; } if (c.pc != 0x002BFBBCu) [[unlikely]] return; }
L_002BFBBC:
    set32(c.r[4], ld32((c.r[28].w[0] - 30300u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 264u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BFBD0; } }
    st16((c.r[4].w[0] + 262u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_002BFBD0:
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0; st16((c.r[3].w[0] + 264u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002BFC68; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 262u)));
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BFC70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFC00u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x002BFC00u) [[unlikely]] return; }
L_002BFC00:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[3], 0u + 3u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[5], c.r[2].w[0] + 260u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 260u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_002BFC40; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    c.budget -= 6;
L_002BFC40:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_002BFC60; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002BFC60; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 88u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[4], c.r[2].w[0] + 1u);
    c.budget -= 4;
L_002BFC60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_002BFC70; } }
L_002BFC68:
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    st16((c.r[2].w[0] + 260u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 2;
L_002BFC70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFC78u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 55u, depth + 1u); else { c.pc = 0x00238800u; return; } if (c.pc != 0x002BFC78u) [[unlikely]] return; }
L_002BFC78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BFC90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 23952u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFCBCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BFCBCu) [[unlikely]] return; }
L_002BFCBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFCC4u);  if (depth < kMaxDepth) unit_0071(c, 233u, depth + 1u); else { c.pc = 0x002C7C80u; return; } if (c.pc != 0x002BFCC4u) [[unlikely]] return; }
L_002BFCC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFCCCu);  if (depth < kMaxDepth) unit_0071(c, 235u, depth + 1u); else { c.pc = 0x002C7CF0u; return; } if (c.pc != 0x002BFCCCu) [[unlikely]] return; }
L_002BFCCC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFCD8u); set32(c.r[4], c.r[4].w[0] - 29520u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x002BFCD8u) [[unlikely]] return; }
L_002BFCD8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 404u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BFCF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30300u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFD04u); st8((c.r[2].w[0] + 404u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0071(c, 165u, depth + 1u); else { c.pc = 0x002C6460u; return; } if (c.pc != 0x002BFD04u) [[unlikely]] return; }
L_002BFD04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFD0Cu);  if (depth < kMaxDepth) unit_0071(c, 162u, depth + 1u); else { c.pc = 0x002C63B0u; return; } if (c.pc != 0x002BFD0Cu) [[unlikely]] return; }
L_002BFD0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFD14u);  if (depth < kMaxDepth) unit_0071(c, 209u, depth + 1u); else { c.pc = 0x002C73C0u; return; } if (c.pc != 0x002BFD14u) [[unlikely]] return; }
L_002BFD14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFD1Cu);  if (depth < kMaxDepth) unit_0071(c, 222u, depth + 1u); else { c.pc = 0x002C79A0u; return; } if (c.pc != 0x002BFD1Cu) [[unlikely]] return; }
L_002BFD1C:
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0] + 464u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BFD50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFD60u);  if (depth < kMaxDepth) unit_0071(c, 221u, depth + 1u); else { c.pc = 0x002C7720u; return; } if (c.pc != 0x002BFD60u) [[unlikely]] return; }
L_002BFD60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFD68u);  if (depth < kMaxDepth) unit_0071(c, 202u, depth + 1u); else { c.pc = 0x002C7160u; return; } if (c.pc != 0x002BFD68u) [[unlikely]] return; }
L_002BFD68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFD70u);  if (depth < kMaxDepth) unit_0071(c, 216u, depth + 1u); else { c.pc = 0x002C7640u; return; } if (c.pc != 0x002BFD70u) [[unlikely]] return; }
L_002BFD70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFD78u);  if (depth < kMaxDepth) unit_0072(c, 175u, depth + 1u); else { c.pc = 0x002C9BB0u; return; } if (c.pc != 0x002BFD78u) [[unlikely]] return; }
L_002BFD78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFD80u);  if (depth < kMaxDepth) unit_0072(c, 33u, depth + 1u); else { c.pc = 0x002C85F0u; return; } if (c.pc != 0x002BFD80u) [[unlikely]] return; }
L_002BFD80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFD88u);  if (depth < kMaxDepth) unit_0071(c, 230u, depth + 1u); else { c.pc = 0x002C7B70u; return; } if (c.pc != 0x002BFD88u) [[unlikely]] return; }
L_002BFD88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BFDA8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 3u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002BFF00; } }
L_002BFDA8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].d[0] = ld16((c.r[1].w[0] + 9604u));
    c.r[3].d[0] = c.r[4].d[0] & 32768ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BFDF0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 165u);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFDE4u); st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x002BFDE4u) [[unlikely]] return; }
L_002BFDE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFF00; } }
    c.budget -= 1;
L_002BFDF0:
    c.r[3].d[0] = c.r[4].d[0] & 16384ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BFE10; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 14180u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 14180u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002BFF00; } }
L_002BFE10:
    c.r[3].d[0] = c.r[4].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BFF00; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[3], 0u - 1u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 452u)));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_002BFF00; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 454u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002BFF00; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 456u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002BFE90; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[5], 0u + 32u);
    st16((c.r[2].w[0] + 10u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 454u)));
    st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFE78u); st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x002BFE78u) [[unlikely]] return; }
L_002BFE78:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFE84u); set32(c.r[5], 0u + 165u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x002BFE84u) [[unlikely]] return; }
L_002BFE84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFF00; } }
    c.budget -= 1;
L_002BFE90:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[5], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] + 1325u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1325u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BFF00; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFEC8u); st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0071(c, 165u, depth + 1u); else { c.pc = 0x002C6460u; return; } if (c.pc != 0x002BFEC8u) [[unlikely]] return; }
L_002BFEC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFED0u);  if (depth < kMaxDepth) unit_0071(c, 162u, depth + 1u); else { c.pc = 0x002C63B0u; return; } if (c.pc != 0x002BFED0u) [[unlikely]] return; }
L_002BFED0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFED8u);  if (depth < kMaxDepth) unit_0071(c, 209u, depth + 1u); else { c.pc = 0x002C73C0u; return; } if (c.pc != 0x002BFED8u) [[unlikely]] return; }
L_002BFED8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFEE0u);  if (depth < kMaxDepth) unit_0071(c, 222u, depth + 1u); else { c.pc = 0x002C79A0u; return; } if (c.pc != 0x002BFEE0u) [[unlikely]] return; }
L_002BFEE0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 165u);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFF00u); st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x002BFF00u) [[unlikely]] return; }
    goto L_002BFF00;
L_002BFEFC:
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002BFF00:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BFF10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFF20u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x002BFF20u) [[unlikely]] return; }
L_002BFF20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BFF38; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30300u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 404u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
L_002BFF38:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BFF50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { [[clang::musttail]] return unit_0070(c, 19u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 1u);  if (t) { [[clang::musttail]] return unit_0070(c, 16u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_002BFFB8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002BFF90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0070(c, 22u, depth); } }
    c.budget -= 1;
L_002BFF90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFF98u); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x002BFF98u) [[unlikely]] return; }
L_002BFF98:
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFFA8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x002BFFA8u) [[unlikely]] return; }
L_002BFFA8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_002BFFB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFFC0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x002BFFC0u) [[unlikely]] return; }
    goto L_002BFFC0;
L_002BFFBC:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_002BFFC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0070(c, 22u, depth); } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 30304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { [[clang::musttail]] return unit_0070(c, 5u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_0070(c, 3u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0070(c, 1u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0070(c, 7u, depth); } }
    [[clang::musttail]] return unit_0070(c, 1u, depth);
}

}
