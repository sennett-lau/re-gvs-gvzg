#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0034[4096] = {
    1, 2, 3, 4, 0, 5, 6, 7, 8, 0, 0, 9, 10, 0, 11, 0, 12, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 20, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0,
    24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0,
    0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 0,
    40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0,
    42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0,
    44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0,
    0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0,
    49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0,
    0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 60, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0,
    0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0,
    0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0,
    68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121,
    0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 125, 0, 0, 126,
    0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0,
    131, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 134, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0,
    136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0,
    0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 149, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 156, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0,
    0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 165, 0, 0, 0, 0, 0, 0,
    0, 166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0,
    0, 174, 0, 0, 0, 175, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 0, 180,
    0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 188,
    0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 191, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195,
    0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0,
    200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0,
    209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0,
    0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 220, 0,
    221, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0,
    0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0,
    228, 0, 0, 0, 0, 229, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    239, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0,
    245, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0,
    253, 0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0,
    0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0,
    264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 275, 0,
    0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    279, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 287, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0, 0, 297, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0,
    0, 304, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 309, 0, 310, 0,
    0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0,
    316, 0, 0, 0, 0, 317, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324,
    0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 326, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 329, 0, 0,
    0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0, 0, 333, 0, 334, 0, 0, 0, 0, 0, 0, 0, 335,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 337, 0, 0, 0,
    0, 0, 0, 338, 0, 339, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 353, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0,
    0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 371, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0034(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001D0000;
    case 2u: goto L_001D0004;
    case 3u: goto L_001D0008;
    case 4u: goto L_001D000C;
    case 5u: goto L_001D0014;
    case 6u: goto L_001D0018;
    case 7u: goto L_001D001C;
    case 8u: goto L_001D0020;
    case 9u: goto L_001D002C;
    case 10u: goto L_001D0030;
    case 11u: goto L_001D0038;
    case 12u: goto L_001D0040;
    case 13u: goto L_001D0050;
    case 14u: goto L_001D0060;
    case 15u: goto L_001D0070;
    case 16u: goto L_001D009C;
    case 17u: goto L_001D00B4;
    case 18u: goto L_001D0100;
    case 19u: goto L_001D0140;
    case 20u: goto L_001D0188;
    case 21u: goto L_001D0194;
    case 22u: goto L_001D01B0;
    case 23u: goto L_001D01F0;
    case 24u: goto L_001D0200;
    case 25u: goto L_001D0210;
    case 26u: goto L_001D0260;
    case 27u: goto L_001D0270;
    case 28u: goto L_001D036C;
    case 29u: goto L_001D038C;
    case 30u: goto L_001D03A0;
    case 31u: goto L_001D0400;
    case 32u: goto L_001D0428;
    case 33u: goto L_001D0440;
    case 34u: goto L_001D04A0;
    case 35u: goto L_001D04D4;
    case 36u: goto L_001D0518;
    case 37u: goto L_001D0570;
    case 38u: goto L_001D05D8;
    case 39u: goto L_001D05E4;
    case 40u: goto L_001D0600;
    case 41u: goto L_001D0668;
    case 42u: goto L_001D0680;
    case 43u: goto L_001D06E8;
    case 44u: goto L_001D0700;
    case 45u: goto L_001D0778;
    case 46u: goto L_001D0790;
    case 47u: goto L_001D07D8;
    case 48u: goto L_001D07F0;
    case 49u: goto L_001D0800;
    case 50u: goto L_001D0820;
    case 51u: goto L_001D0834;
    case 52u: goto L_001D0914;
    case 53u: goto L_001D0920;
    case 54u: goto L_001D0938;
    case 55u: goto L_001D0940;
    case 56u: goto L_001D0960;
    case 57u: goto L_001D0984;
    case 58u: goto L_001D09B0;
    case 59u: goto L_001D09C8;
    case 60u: goto L_001D09D0;
    case 61u: goto L_001D09E0;
    case 62u: goto L_001D09E8;
    case 63u: goto L_001D0A0C;
    case 64u: goto L_001D0A70;
    case 65u: goto L_001D0A8C;
    case 66u: goto L_001D0A98;
    case 67u: goto L_001D0AF0;
    case 68u: goto L_001D0B00;
    case 69u: goto L_001D0BA8;
    case 70u: goto L_001D0BE0;
    case 71u: goto L_001D0C50;
    case 72u: goto L_001D0C60;
    case 73u: goto L_001D0D84;
    case 74u: goto L_001D0DA4;
    case 75u: goto L_001D0DE0;
    case 76u: goto L_001D0E50;
    case 77u: goto L_001D0E60;
    case 78u: goto L_001D0F5C;
    case 79u: goto L_001D10A0;
    case 80u: goto L_001D119C;
    case 81u: goto L_001D11C4;
    case 82u: goto L_001D11CC;
    case 83u: goto L_001D11E0;
    case 84u: goto L_001D1224;
    case 85u: goto L_001D1240;
    case 86u: goto L_001D12A0;
    case 87u: goto L_001D12B4;
    case 88u: goto L_001D1374;
    case 89u: goto L_001D13A0;
    case 90u: goto L_001D13B8;
    case 91u: goto L_001D13C8;
    case 92u: goto L_001D13E4;
    case 93u: goto L_001D13F8;
    case 94u: goto L_001D1420;
    case 95u: goto L_001D1440;
    case 96u: goto L_001D1480;
    case 97u: goto L_001D14D0;
    case 98u: goto L_001D1528;
    case 99u: goto L_001D1540;
    case 100u: goto L_001D1550;
    case 101u: goto L_001D1630;
    case 102u: goto L_001D165C;
    case 103u: goto L_001D1668;
    case 104u: goto L_001D169C;
    case 105u: goto L_001D16B0;
    case 106u: goto L_001D16F8;
    case 107u: goto L_001D174C;
    case 108u: goto L_001D1760;
    case 109u: goto L_001D17A4;
    case 110u: goto L_001D17B8;
    case 111u: goto L_001D17D0;
    case 112u: goto L_001D1874;
    case 113u: goto L_001D18C0;
    case 114u: goto L_001D1970;
    case 115u: goto L_001D19A4;
    case 116u: goto L_001D19F8;
    case 117u: goto L_001D1A20;
    case 118u: goto L_001D1AAC;
    case 119u: goto L_001D1AC8;
    case 120u: goto L_001D1B38;
    case 121u: goto L_001D1B7C;
    case 122u: goto L_001D1BA0;
    case 123u: goto L_001D1C54;
    case 124u: goto L_001D1CE4;
    case 125u: goto L_001D1CF0;
    case 126u: goto L_001D1CFC;
    case 127u: goto L_001D1D20;
    case 128u: goto L_001D1D3C;
    case 129u: goto L_001D1D48;
    case 130u: goto L_001D1D64;
    case 131u: goto L_001D1D80;
    case 132u: goto L_001D1DA4;
    case 133u: goto L_001D1DCC;
    case 134u: goto L_001D1DD4;
    case 135u: goto L_001D1DDC;
    case 136u: goto L_001D1E00;
    case 137u: goto L_001D1E58;
    case 138u: goto L_001D1E80;
    case 139u: goto L_001D1E90;
    case 140u: goto L_001D1EC8;
    case 141u: goto L_001D1EE8;
    case 142u: goto L_001D1F20;
    case 143u: goto L_001D1F74;
    case 144u: goto L_001D1F8C;
    case 145u: goto L_001D1FB0;
    case 146u: goto L_001D1FC4;
    case 147u: goto L_001D1FCC;
    case 148u: goto L_001D1FF0;
    case 149u: goto L_001D201C;
    case 150u: goto L_001D2024;
    case 151u: goto L_001D204C;
    case 152u: goto L_001D20D0;
    case 153u: goto L_001D20F8;
    case 154u: goto L_001D2140;
    case 155u: goto L_001D2168;
    case 156u: goto L_001D2198;
    case 157u: goto L_001D21A4;
    case 158u: goto L_001D21BC;
    case 159u: goto L_001D21E0;
    case 160u: goto L_001D21F4;
    case 161u: goto L_001D2208;
    case 162u: goto L_001D2230;
    case 163u: goto L_001D2240;
    case 164u: goto L_001D225C;
    case 165u: goto L_001D2264;
    case 166u: goto L_001D2284;
    case 167u: goto L_001D22A4;
    case 168u: goto L_001D22B0;
    case 169u: goto L_001D22C8;
    case 170u: goto L_001D22D8;
    case 171u: goto L_001D2330;
    case 172u: goto L_001D2360;
    case 173u: goto L_001D2370;
    case 174u: goto L_001D2384;
    case 175u: goto L_001D2394;
    case 176u: goto L_001D239C;
    case 177u: goto L_001D23BC;
    case 178u: goto L_001D23D8;
    case 179u: goto L_001D23E4;
    case 180u: goto L_001D23FC;
    case 181u: goto L_001D240C;
    case 182u: goto L_001D2420;
    case 183u: goto L_001D243C;
    case 184u: goto L_001D2444;
    case 185u: goto L_001D2494;
    case 186u: goto L_001D24A8;
    case 187u: goto L_001D24E0;
    case 188u: goto L_001D24FC;
    case 189u: goto L_001D2520;
    case 190u: goto L_001D2558;
    case 191u: goto L_001D2578;
    case 192u: goto L_001D25B0;
    case 193u: goto L_001D264C;
    case 194u: goto L_001D2664;
    case 195u: goto L_001D267C;
    case 196u: goto L_001D26A0;
    case 197u: goto L_001D26B4;
    case 198u: goto L_001D26C8;
    case 199u: goto L_001D26F0;
    case 200u: goto L_001D2700;
    case 201u: goto L_001D2714;
    case 202u: goto L_001D2738;
    case 203u: goto L_001D2740;
    case 204u: goto L_001D2760;
    case 205u: goto L_001D2824;
    case 206u: goto L_001D2840;
    case 207u: goto L_001D2854;
    case 208u: goto L_001D2864;
    case 209u: goto L_001D2880;
    case 210u: goto L_001D28A8;
    case 211u: goto L_001D28C8;
    case 212u: goto L_001D28E8;
    case 213u: goto L_001D28F8;
    case 214u: goto L_001D2908;
    case 215u: goto L_001D2918;
    case 216u: goto L_001D2928;
    case 217u: goto L_001D2948;
    case 218u: goto L_001D2958;
    case 219u: goto L_001D2968;
    case 220u: goto L_001D2978;
    case 221u: goto L_001D2980;
    case 222u: goto L_001D2988;
    case 223u: goto L_001D29C4;
    case 224u: goto L_001D29E0;
    case 225u: goto L_001D29F0;
    case 226u: goto L_001D2A0C;
    case 227u: goto L_001D2A68;
    case 228u: goto L_001D2A80;
    case 229u: goto L_001D2A94;
    case 230u: goto L_001D2A9C;
    case 231u: goto L_001D2AC0;
    case 232u: goto L_001D2AD0;
    case 233u: goto L_001D2AD8;
    case 234u: goto L_001D2B18;
    case 235u: goto L_001D2B34;
    case 236u: goto L_001D2B74;
    case 237u: goto L_001D2BB0;
    case 238u: goto L_001D2BD8;
    case 239u: goto L_001D2C00;
    case 240u: goto L_001D2C20;
    case 241u: goto L_001D2C40;
    case 242u: goto L_001D2C50;
    case 243u: goto L_001D2C60;
    case 244u: goto L_001D2C70;
    case 245u: goto L_001D2C80;
    case 246u: goto L_001D2CA4;
    case 247u: goto L_001D2CC0;
    case 248u: goto L_001D2D0C;
    case 249u: goto L_001D2D30;
    case 250u: goto L_001D2D44;
    case 251u: goto L_001D2D4C;
    case 252u: goto L_001D2D70;
    case 253u: goto L_001D2D80;
    case 254u: goto L_001D2D88;
    case 255u: goto L_001D2DA4;
    case 256u: goto L_001D2DC0;
    case 257u: goto L_001D2DF0;
    case 258u: goto L_001D2E10;
    case 259u: goto L_001D2E30;
    case 260u: goto L_001D2E40;
    case 261u: goto L_001D2E50;
    case 262u: goto L_001D2E60;
    case 263u: goto L_001D2E70;
    case 264u: goto L_001D2E80;
    case 265u: goto L_001D2E90;
    case 266u: goto L_001D2EC0;
    case 267u: goto L_001D2ED0;
    case 268u: goto L_001D2F18;
    case 269u: goto L_001D2F34;
    case 270u: goto L_001D2F50;
    case 271u: goto L_001D2F7C;
    case 272u: goto L_001D2FB4;
    case 273u: goto L_001D2FC8;
    case 274u: goto L_001D2FE0;
    case 275u: goto L_001D2FF8;
    case 276u: goto L_001D3018;
    case 277u: goto L_001D304C;
    case 278u: goto L_001D3054;
    case 279u: goto L_001D3080;
    case 280u: goto L_001D3088;
    case 281u: goto L_001D30A0;
    case 282u: goto L_001D30B0;
    case 283u: goto L_001D30D8;
    case 284u: goto L_001D30EC;
    case 285u: goto L_001D3120;
    case 286u: goto L_001D3144;
    case 287u: goto L_001D314C;
    case 288u: goto L_001D3158;
    case 289u: goto L_001D3194;
    case 290u: goto L_001D31AC;
    case 291u: goto L_001D31C0;
    case 292u: goto L_001D3214;
    case 293u: goto L_001D32A8;
    case 294u: goto L_001D32B4;
    case 295u: goto L_001D32D0;
    case 296u: goto L_001D32E4;
    case 297u: goto L_001D32F8;
    case 298u: goto L_001D3340;
    case 299u: goto L_001D3354;
    case 300u: goto L_001D3388;
    case 301u: goto L_001D33F8;
    case 302u: goto L_001D3420;
    case 303u: goto L_001D346C;
    case 304u: goto L_001D3484;
    case 305u: goto L_001D34A0;
    case 306u: goto L_001D34B4;
    case 307u: goto L_001D34BC;
    case 308u: goto L_001D34E0;
    case 309u: goto L_001D34F0;
    case 310u: goto L_001D34F8;
    case 311u: goto L_001D3514;
    case 312u: goto L_001D3560;
    case 313u: goto L_001D3588;
    case 314u: goto L_001D35C8;
    case 315u: goto L_001D35E0;
    case 316u: goto L_001D3600;
    case 317u: goto L_001D3614;
    case 318u: goto L_001D361C;
    case 319u: goto L_001D3640;
    case 320u: goto L_001D3650;
    case 321u: goto L_001D3658;
    case 322u: goto L_001D3688;
    case 323u: goto L_001D36D0;
    case 324u: goto L_001D36FC;
    case 325u: goto L_001D3720;
    case 326u: goto L_001D372C;
    case 327u: goto L_001D3744;
    case 328u: goto L_001D3760;
    case 329u: goto L_001D3774;
    case 330u: goto L_001D3788;
    case 331u: goto L_001D37B0;
    case 332u: goto L_001D37C0;
    case 333u: goto L_001D37D4;
    case 334u: goto L_001D37DC;
    case 335u: goto L_001D37FC;
    case 336u: goto L_001D3858;
    case 337u: goto L_001D3870;
    case 338u: goto L_001D388C;
    case 339u: goto L_001D3894;
    case 340u: goto L_001D38A4;
    case 341u: goto L_001D38B8;
    case 342u: goto L_001D390C;
    case 343u: goto L_001D3930;
    case 344u: goto L_001D3970;
    case 345u: goto L_001D39A8;
    case 346u: goto L_001D39C4;
    case 347u: goto L_001D3A10;
    case 348u: goto L_001D3A70;
    case 349u: goto L_001D3AC4;
    case 350u: goto L_001D3B00;
    case 351u: goto L_001D3B70;
    case 352u: goto L_001D3BB0;
    case 353u: goto L_001D3C04;
    case 354u: goto L_001D3C24;
    case 355u: goto L_001D3C40;
    case 356u: goto L_001D3CB4;
    case 357u: goto L_001D3CCC;
    case 358u: goto L_001D3CE8;
    case 359u: goto L_001D3D20;
    case 360u: goto L_001D3D2C;
    case 361u: goto L_001D3D5C;
    case 362u: goto L_001D3D90;
    case 363u: goto L_001D3DBC;
    case 364u: goto L_001D3DF8;
    case 365u: goto L_001D3E2C;
    case 366u: goto L_001D3E70;
    case 367u: goto L_001D3E8C;
    case 368u: goto L_001D3EDC;
    case 369u: goto L_001D3F20;
    case 370u: goto L_001D3F58;
    case 371u: goto L_001D3F70;
    case 372u: goto L_001D3FA0;
    case 373u: goto L_001D3FA8;
    default: bad_entry(c, 0x001D0000u); return;
    }
L_001D0000:
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_001D0004:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D0018; } }
    goto L_001D000C;
L_001D0008:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001D000C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0014u);  if (depth < kMaxDepth) unit_0034(c, 75u, depth + 1u); else { c.pc = 0x001D0DE0u; return; } if (c.pc != 0x001D0014u) [[unlikely]] return; }
L_001D0014:
    c.budget -= 1;
L_001D0018:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001D001C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 1;
L_001D0020:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D002C:
    c.budget -= 1;
L_001D0030:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D0038:
    c.budget -= 2;
L_001D0040:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D0050:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D0060:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld16((c.r[4].w[0] + 520u));
    c.budget -= 4;
L_001D0070:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001D0090; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 604u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D0090; } }
    st16((c.r[16].w[0] + 520u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 604u), 0u);
    c.budget -= 2;
L_001D0090:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D009Cu); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x001465C0u; return; } if (c.pc != 0x001D009Cu) [[unlikely]] return; }
L_001D009C:
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 132u));
    c.f[2] = ld32((c.r[16].w[0] + 8536u));
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = c.f[2] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
L_001D00B4:
    c.budget -= 2;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 30u);  if (t) { goto L_001D00D0; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 752u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 132u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.f[0]);  if (t) { goto L_001D0130; } }
L_001D00D0:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001D0128; } }
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = ld32((c.r[16].w[0] + 128u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001D0108; } }
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 136u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001D0128; } }
    goto L_001D0104;
L_001D0100:
    c.budget -= 1;
L_001D0104:
    c.budget -= 1;
L_001D0108:
    c.f[3] = ld32((c.r[16].w[0] + 128u));
    c.f[2] = ld32((c.r[16].w[0] + 132u));
    c.f[1] = ld32((c.r[16].w[0] + 136u));
    c.f[0] = ld32((c.r[16].w[0] + 140u));
    st32((c.r[16].w[0] + 32u), c.f[3]);
    st32((c.r[16].w[0] + 36u), c.f[2]);
    st32((c.r[16].w[0] + 40u), c.f[1]);
    st32((c.r[16].w[0] + 44u), c.f[0]);
    c.budget -= 8;
L_001D0128:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001D0130:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D0140:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001D0168; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D0198; } }
    c.budget -= 1;
L_001D0168:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 680u));
    c.r[2].d[0] = c.r[5].d[0] & 15360ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D0180; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D0198; } }
L_001D0180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0188u);  if (depth < kMaxDepth) unit_0039(c, 47u, depth + 1u); else { c.pc = 0x001E4870u; return; } if (c.pc != 0x001D0188u) [[unlikely]] return; }
L_001D0188:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0194u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x001D0194u) [[unlikely]] return; }
L_001D0194:
    c.budget -= 1;
L_001D0198:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D01B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D01D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D01F0; } }
L_001D01D0:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 680u));
    c.r[2].d[0] = c.r[2].d[0] & 15360ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 3u);  if (t) { goto L_001D01E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D01F0; } }
L_001D01E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D01F0u);  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x001D01F0u) [[unlikely]] return; }
L_001D01F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001D0200:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
L_001D0210:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D0228; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 788u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D0230; } }
    c.budget -= 1;
L_001D0228:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D0260; } }
L_001D0230:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 680u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D0250; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 802u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D0258; } }
    c.budget -= 1;
L_001D0250:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D0260; } }
L_001D0258:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0260u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x001D0260u) [[unlikely]] return; }
L_001D0260:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001D0270:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 35u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001D0298; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D0390; } }
    c.budget -= 1;
L_001D0298:
    set32(c.r[2], 0u + 40u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D02B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D0390; } }
    c.budget -= 1;
L_001D02B0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 824u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D02C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D0390; } }
    c.budget -= 1;
L_001D02C8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 792u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D02E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D0390; } }
    c.budget -= 1;
L_001D02E0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D02F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D0390; } }
L_001D02F8:
    c.r[2].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D0310; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D0390; } }
    c.budget -= 1;
L_001D0310:
    c.r[2].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D0338; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8681u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D0338; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D0390; } }
    c.budget -= 1;
L_001D0338:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 680u));
    set32(c.r[2], ld32((c.r[16].w[0] + 696u)));
    c.r[3].d[0] = c.r[3].d[0] & 15360ull;
    set32(c.r[3], c.r[3].w[0] << 18);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D0360; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D0390; } }
    c.budget -= 1;
L_001D0360:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D036Cu); set32(c.r[5], 0u + 19u);  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x001D036Cu) [[unlikely]] return; }
L_001D036C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D0380; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D0390; } }
    c.budget -= 1;
L_001D0380:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 680u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D038Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 47u, depth + 1u); else { c.pc = 0x001E4870u; return; } if (c.pc != 0x001D038Cu) [[unlikely]] return; }
L_001D038C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001D0390:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D03A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1608u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 126u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D03D8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D03D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D0428; } }
    c.budget -= 1;
L_001D03D8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D03F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D0428; } }
L_001D03F0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 824u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D0420; } }
    c.r[2].d[0] = ld16((c.r[4].w[0] + 680u));
    c.budget -= 1;
L_001D0400:
    c.r[2].d[0] = c.r[2].d[0] & 15360ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D0418; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 786u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D0420; } }
L_001D0418:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D0428; } }
L_001D0420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0428u); set32(c.r[5], 0u + 21u);  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x001D0428u) [[unlikely]] return; }
L_001D0428:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001D0440:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[3].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001D0488; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D0480; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8693u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D0488; } }
    c.budget -= 1;
L_001D0480:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D0550; } }
L_001D0488:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 792u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D04A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D0550; } }
    c.budget -= 1;
L_001D04A0:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 680u));
    set32(c.r[2], ld32((c.r[16].w[0] + 696u)));
    c.r[3].d[0] = c.r[3].d[0] & 15360ull;
    set32(c.r[3], c.r[3].w[0] << 10);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D04C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D0550; } }
    c.budget -= 1;
L_001D04C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D04D4u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x001D04D4u) [[unlikely]] return; }
L_001D04D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D04E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D0550; } }
    c.budget -= 1;
L_001D04E8:
    set32(c.r[3], ld32((c.r[16].w[0] + 696u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 31040u);
    set32(c.r[3], c.r[3].w[0] >> 20);
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[17], c.r[2].w[0] << 10);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0518u); c.r[5].d[0] = c.r[17].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0039(c, 47u, depth + 1u); else { c.pc = 0x001E4870u; return; } if (c.pc != 0x001D0518u) [[unlikely]] return; }
L_001D0518:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D0530; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1260u)));
    set32(c.r[2], c.r[2].w[0] + 8192u);
    c.r[2].d[0] = c.r[2].d[0] & 49152ull;
    st32((c.r[16].w[0] + 1264u), c.r[2].w[0]);
    c.budget -= 4;
L_001D0530:
    st16((c.r[16].w[0] + 858u), static_cast<std::uint16_t>(c.r[17].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 696u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF0F0000u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 696u), c.r[3].w[0]);
    c.budget -= 8;
L_001D0550:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D0570:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 744u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001D0598; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D05E8; } }
    c.budget -= 1;
L_001D0598:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 824u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D05C0; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 680u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D05C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D05E8; } }
    c.budget -= 1;
L_001D05C0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D05D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D05D8u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x001D05D8u) [[unlikely]] return; }
L_001D05D8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D05E4u); st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0039(c, 119u, depth + 1u); else { c.pc = 0x001E56E0u; return; } if (c.pc != 0x001D05E4u) [[unlikely]] return; }
L_001D05E4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001D05E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D0600:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 824u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D0620; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D0670; } }
    c.budget -= 1;
L_001D0620:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 792u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D0638; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D0670; } }
    c.budget -= 1;
L_001D0638:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D0650; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D0670; } }
L_001D0650:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 684u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D0670; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0668u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x001D0668u) [[unlikely]] return; }
L_001D0668:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D0670; } }
L_001D0670:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001D0680:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 824u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D06A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D06F0; } }
    c.budget -= 1;
L_001D06A0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 792u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D06B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D06F0; } }
    c.budget -= 1;
L_001D06B8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D06D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D06F0; } }
L_001D06D0:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 680u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D06F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D06E8u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x001D06E8u) [[unlikely]] return; }
L_001D06E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D06F0; } }
L_001D06F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001D0700:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8676u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D0720; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D0778; } }
L_001D0720:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D0738; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D0778; } }
L_001D0738:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 680u));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 682u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D0758; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D0778; } }
L_001D0758:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1626u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 10u);  if (t) { goto L_001D0770; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D0778; } }
L_001D0770:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0778u);  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x001D0778u) [[unlikely]] return; }
L_001D0778:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001D0790:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001D07B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D0808; } }
    c.budget -= 1;
L_001D07B8:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 680u));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D07D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D0808; } }
L_001D07D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D07D8u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x001D07D8u) [[unlikely]] return; }
L_001D07D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D07E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D0808; } }
L_001D07E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D07F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 11u, depth + 1u); else { c.pc = 0x001EC290u; return; } if (c.pc != 0x001D07F0u) [[unlikely]] return; }
L_001D07F0:
    set32(c.r[2], ld32((c.r[16].w[0] + 1612u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0800u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D0800u) [[unlikely]] return; }
L_001D0800:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_001D0808:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D0820:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0834u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 56u, depth + 1u); else { c.pc = 0x001D0960u; return; } if (c.pc != 0x001D0834u) [[unlikely]] return; }
L_001D0834:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D0848; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D0948; } }
    c.budget -= 1;
L_001D0848:
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    set32(c.r[3], 0u + 8u);
    st32((c.r[16].w[0] + 108u), 0u);
    set32(c.r[4], 0u - 9u);
    st32((c.r[16].w[0] + 104u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01FF0000u);
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[2].d[0] | 63999ull;
    set32(c.r[2], 0u + 46u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 276u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 793u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 744u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 849u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    st32((c.r[16].w[0] + 1268u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 1264u), 0u);
    st32((c.r[16].w[0] + 1260u), 0u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.budget -= 26;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 53u);  if (t) { goto L_001D08B8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D0908; } }
L_001D08B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 4616u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4612u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4608u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4680u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4676u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4672u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4632u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4628u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4624u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4696u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4692u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4688u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4648u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4644u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4640u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4712u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4708u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4704u), c.r[2].w[0]);
    c.budget -= 20;
L_001D0908:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0914u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_001D(c, 96u, depth + 1u); else { c.pc = 0x00175AB0u; return; } if (c.pc != 0x001D0914u) [[unlikely]] return; }
L_001D0914:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0920u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x001D0920u) [[unlikely]] return; }
L_001D0920:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 11u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0938u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x001D0938u) [[unlikely]] return; }
L_001D0938:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0940u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 176u, depth + 1u); else { c.pc = 0x001EDE20u; return; } if (c.pc != 0x001D0940u) [[unlikely]] return; }
L_001D0940:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_001D0948:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D0960:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 72u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], c.r[29].w[0] + 76u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0984u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 4u, depth + 1u); else { c.pc = 0x00148020u; return; } if (c.pc != 0x001D0984u) [[unlikely]] return; }
L_001D0984:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001D0998; } }
    st32((c.r[29].w[0] + 76u), 0u);
    c.budget -= 2;
L_001D0998:
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = ld32((c.r[29].w[0] + 76u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D09B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D0AD8; } }
    goto L_001D09B4;
L_001D09B0:
    c.budget -= 1;
L_001D09B4:
    c.budget -= 1;
L_001D09B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D09C8u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0011(c, 224u, depth + 1u); else { c.pc = 0x00146FE0u; return; } if (c.pc != 0x001D09C8u) [[unlikely]] return; }
L_001D09C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D09D0u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x001D09D0u) [[unlikely]] return; }
L_001D09D0:
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D09E0u); set32(c.r[6], c.r[16].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001D09E0u) [[unlikely]] return; }
L_001D09E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D09E8u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 202u, depth + 1u); else { c.pc = 0x00127320u; return; } if (c.pc != 0x001D09E8u) [[unlikely]] return; }
L_001D09E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 48u);  if (t) { goto L_001D0A28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0A0Cu); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x001D0A0Cu) [[unlikely]] return; }
L_001D0A0C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D0A28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D0AD8; } }
L_001D0A28:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 752u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D0A40; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1632u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));  if (t) { goto L_001D0A48; } }
L_001D0A40:
    set32(c.r[2], ld32((c.r[16].w[0] + 1632u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 2;
L_001D0A48:
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D0AC8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 514u));
    c.r[2].d[0] = c.r[2].d[0] & 12ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_001D0AC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0A70u);  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001D0A70u) [[unlikely]] return; }
L_001D0A70:
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[1] = ld32((c.r[29].w[0] + 76u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0A8Cu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x001D0A8Cu) [[unlikely]] return; }
L_001D0A8C:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0A98u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x001D0A98u) [[unlikely]] return; }
L_001D0A98:
    st32((c.r[16].w[0] + 108u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[1] = c.r[2].w[0];
    c.r[2].d[0] = 0ull + 0ull;
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.f[0]);  if (t) { goto L_001D0AD8; } }
L_001D0AC8:
    set32(c.r[2], 0u + 1u);
    c.f[0] = ld32((c.r[29].w[0] + 76u));
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.budget -= 4;
L_001D0AD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001D0AF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
L_001D0B00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8681u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001D0B18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D0BD0; } }
    c.budget -= 1;
L_001D0B18:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 824u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D0B30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D0BD0; } }
    c.budget -= 1;
L_001D0B30:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D0B48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D0BD0; } }
L_001D0B48:
    c.r[2].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D0B60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D0BD0; } }
    c.budget -= 1;
L_001D0B60:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 792u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D0B78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D0BD0; } }
    c.budget -= 1;
L_001D0B78:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 680u));
    set32(c.r[2], ld32((c.r[16].w[0] + 696u)));
    c.r[3].d[0] = c.r[3].d[0] & 15360ull;
    set32(c.r[3], c.r[3].w[0] << 10);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D0BA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D0BD0; } }
    c.budget -= 1;
L_001D0BA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0BA8u); set32(c.r[5], 0u + 26u);  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x001D0BA8u) [[unlikely]] return; }
L_001D0BA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D0BB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D0BD0; } }
L_001D0BB8:
    set32(c.r[4], ld32((c.r[16].w[0] + 696u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF0F0000u);
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 696u), c.r[3].w[0]);
    c.budget -= 6;
L_001D0BD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D0BE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 3ull;  if (t) { goto L_001D0C48; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D0C08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D0C50; } }
L_001D0C08:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 824u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D0C48; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 680u));
    c.r[2].d[0] = c.r[3].d[0] & 15360ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D0C30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D0C50; } }
    c.budget -= 1;
L_001D0C30:
    c.r[2].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D0C48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D0C50; } }
    c.budget -= 1;
L_001D0C48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0C50u); set32(c.r[5], 0u + 28u);  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x001D0C50u) [[unlikely]] return; }
L_001D0C50:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001D0C60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1608u)));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 114u));
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001D0CA8; } }
    c.r[2].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D0CA0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 851u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D0CA8; } }
    c.budget -= 1;
L_001D0CA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D0DD0; } }
L_001D0CA8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 797u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D0CC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D0DD0; } }
    c.budget -= 1;
L_001D0CC0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 777u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D0CD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D0DD0; } }
L_001D0CD8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 849u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D0CF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D0DD0; } }
    c.budget -= 1;
L_001D0CF0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 824u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D0D08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D0DD0; } }
    c.budget -= 1;
L_001D0D08:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D0D20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D0DD0; } }
L_001D0D20:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 792u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D0D38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D0DD0; } }
    c.budget -= 1;
L_001D0D38:
    c.r[2].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D0D58; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 851u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D0D70; } }
    c.budget -= 1;
L_001D0D58:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 680u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D0D70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D0DD0; } }
L_001D0D70:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 680u));
    set32(c.r[2], ld32((c.r[16].w[0] + 696u)));
    c.r[3].d[0] = c.r[3].d[0] & 15360ull;
    set32(c.r[3], c.r[3].w[0] << 18);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
L_001D0D84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D0D98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D0DD0; } }
    c.budget -= 1;
L_001D0D98:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0DA4u); set32(c.r[5], 0u + 35u);  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x001D0DA4u) [[unlikely]] return; }
L_001D0DA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D0DB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D0DD0; } }
    c.budget -= 1;
L_001D0DB8:
    set32(c.r[4], ld32((c.r[16].w[0] + 696u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF0F0000u);
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 696u), c.r[3].w[0]);
    c.budget -= 6;
L_001D0DD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D0DE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1608u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 114u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D0E08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D0E50; } }
    c.budget -= 1;
L_001D0E08:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D0E20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D0E50; } }
L_001D0E20:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 824u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D0E48; } }
    c.r[2].d[0] = ld16((c.r[4].w[0] + 680u));
    c.r[2].d[0] = c.r[2].d[0] & 15360ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D0E48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D0E50; } }
    c.budget -= 1;
L_001D0E48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0E50u); set32(c.r[5], 0u + 37u);  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x001D0E50u) [[unlikely]] return; }
L_001D0E50:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001D0E60:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8656u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00830000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    set32(c.r[3], c.r[3].w[0] + 29024u);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[5], c.r[5].w[0] << 7);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_001D0E98; } }
    st16((c.r[3].w[0] + 322u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 320u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001D1090; } }
L_001D0E98:
    c.r[5].d[0] = ld16((c.r[4].w[0] + 680u));
    c.r[2].d[0] = c.r[5].d[0] & 12288ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D0EB0; } }
    st16((c.r[3].w[0] + 320u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_001D0EB0:
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    c.r[2].d[0] = c.r[5].d[0] & 3072ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D0EC8; } }
    st16((c.r[3].w[0] + 322u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_001D0EC8:
    c.r[2].d[0] = c.r[5].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D0EE8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 320u)));
    set32(c.r[2], c.r[2].w[0] + 32u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 320u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001D0F00; } }
    c.budget -= 1;
L_001D0EE8:
    c.r[2].d[0] = c.r[5].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D0F00; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 320u)));
    set32(c.r[2], c.r[2].w[0] - 32u);
    st16((c.r[3].w[0] + 320u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001D0F00:
    c.r[2].d[0] = c.r[5].d[0] & 2048ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D0F20; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 322u)));
    set32(c.r[2], c.r[2].w[0] + 64u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 322u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001D0F38; } }
    c.budget -= 1;
L_001D0F20:
    c.r[2].d[0] = c.r[5].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D0F38; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 322u)));
    set32(c.r[2], c.r[2].w[0] - 64u);
    st16((c.r[3].w[0] + 322u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001D0F38:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 320u)));
    c.r[1].d[0] = c.r[2].sd[0] < 97ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001D0F58; } }
    set32(c.r[2], 0u + 96u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 320u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001D0F70; } }
    c.budget -= 1;
L_001D0F58:
    c.r[1].d[0] = c.r[2].sd[0] < -96ll ? 1ull : 0ull;
    c.budget -= 1;
L_001D0F5C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001D0F70; } }
    set32(c.r[2], 0u - 96u);
    st16((c.r[3].w[0] + 320u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001D0F70:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 322u)));
    c.r[1].d[0] = c.r[2].sd[0] < 129ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001D0F90; } }
    set32(c.r[2], 0u + 128u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 322u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001D0FA8; } }
    c.budget -= 1;
L_001D0F90:
    c.r[1].d[0] = c.r[2].sd[0] < -128ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001D0FA8; } }
    set32(c.r[2], 0u - 128u);
    st16((c.r[3].w[0] + 322u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001D0FA8:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 320u)));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st16((c.r[3].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 322u)));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 10u)));
    c.r[1].d[0] = c.r[2].sd[0] < 6145ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001D0FE8; } }
    set32(c.r[2], 0u + 6144u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001D1000; } }
    c.budget -= 1;
L_001D0FE8:
    c.r[1].d[0] = c.r[2].sd[0] < -6144ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001D1000; } }
    set32(c.r[2], 0u - 6144u);
    st16((c.r[3].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001D1000:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] + 32767u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < 1025ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001D1038; } }
    set32(c.r[2], c.r[2].w[0] - 1024u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 1260u), c.r[2].w[0]);  if (t) { goto L_001D1050; } }
    c.budget -= 1;
L_001D1038:
    c.r[1].d[0] = c.r[2].sd[0] < -1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001D1050; } }
    set32(c.r[2], c.r[2].w[0] + 1024u);
    st32((c.r[4].w[0] + 1260u), c.r[2].w[0]);
    c.budget -= 3;
L_001D1050:
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
L_001D1090:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D10A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1608u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 127u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001D10C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D11D0; } }
    c.budget -= 1;
L_001D10C8:
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D1100; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 851u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D10F8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 850u));
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D1100; } }
    c.budget -= 1;
L_001D10F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D11D0; } }
L_001D1100:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 824u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D1118; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D11D0; } }
    c.budget -= 1;
L_001D1118:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 797u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D1130; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D11D0; } }
    c.budget -= 1;
L_001D1130:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D1148; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D11D0; } }
L_001D1148:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 792u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D1160; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D11D0; } }
    c.budget -= 1;
L_001D1160:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 680u));
    c.r[2].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D1178; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D11D0; } }
L_001D1178:
    c.r[2].d[0] = c.r[3].d[0] & 15360ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D1190; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D11D0; } }
    c.budget -= 1;
L_001D1190:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D119Cu); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x001465C0u; return; } if (c.pc != 0x001D119Cu) [[unlikely]] return; }
L_001D119C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::add(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D11C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D11D0; } }
L_001D11C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001D11C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D11CCu); set32(c.r[5], 0u + 22u);  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x001D11CCu) [[unlikely]] return; }
L_001D11CC:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_001D11D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D11E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = ld16((c.r[4].w[0] + 680u));
    c.r[2].d[0] = c.r[2].d[0] & 15360ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D1210; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 824u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D1210; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D1228; } }
    c.budget -= 1;
L_001D1210:
    st16((c.r[4].w[0] + 856u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u + 60u);
    set32(c.r[5], 0u + 23u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1224u); st16((c.r[4].w[0] + 858u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x001D1224u) [[unlikely]] return; }
L_001D1224:
    c.budget -= 1;
L_001D1228:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001D1240:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[3].d[0] = c.r[4].d[0] & 3ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D1280; } }
    c.f[1] = ld32((c.r[16].w[0] + 8516u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001D1400; } }
    c.budget -= 1;
L_001D1280:
    c.r[3].d[0] = c.r[4].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D12F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D12A0u); c.f[13] = ld32((c.r[16].w[0] + 8252u));  if (depth < kMaxDepth) unit_0009(c, 164u, depth + 1u); else { c.pc = 0x00126190u; return; } if (c.pc != 0x001D12A0u) [[unlikely]] return; }
L_001D12A0:
    c.f[20] = c.f[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 255u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D12B4u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_003C(c, 71u, depth + 1u); else { c.pc = 0x001F0680u; return; } if (c.pc != 0x001D12B4u) [[unlikely]] return; }
L_001D12B4:
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
L_001D12F0:
    c.f[2] = ld32((c.r[16].w[0] + 8516u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001D1330; } }
    c.f[0] = ld32((c.r[16].w[0] + 8252u));
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 8516u), c.f[0]);  if (t) { goto L_001D1330; } }
    st32((c.r[16].w[0] + 8516u), c.f[1]);
    set32(c.r[3], 0u - 2u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
L_001D1330:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 814u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 818u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001D1400; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001D1360; } }
    st32((c.r[16].w[0] + 8516u), 0u);
    set32(c.r[2], 0u - 2u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
L_001D1360:
    c.f[1] = ld32((c.r[16].w[0] + 8516u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001D13D0; } }
    goto L_001D1378;
L_001D1374:
    c.budget -= 1;
L_001D1378:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 814u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_001D13C0; } }
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D13A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D13A0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003A(c, 74u, depth + 1u); else { c.pc = 0x001EA090u; return; } if (c.pc != 0x001D13A0u) [[unlikely]] return; }
L_001D13A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D13F8; } }
L_001D13A8:
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D13B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 74u, depth + 1u); else { c.pc = 0x001EA090u; return; } if (c.pc != 0x001D13B8u) [[unlikely]] return; }
L_001D13B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D13F8; } }
L_001D13C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D13C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 68u, depth + 1u); else { c.pc = 0x001E9DF0u; return; } if (c.pc != 0x001D13C8u) [[unlikely]] return; }
L_001D13C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D13F8; } }
L_001D13D0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 814u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D13F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D13E4u);  if (depth < kMaxDepth) unit_003A(c, 70u, depth + 1u); else { c.pc = 0x001EA000u; return; } if (c.pc != 0x001D13E4u) [[unlikely]] return; }
L_001D13E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D13F8; } }
    c.budget -= 1;
L_001D13F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D13F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 68u, depth + 1u); else { c.pc = 0x001E9DF0u; return; } if (c.pc != 0x001D13F8u) [[unlikely]] return; }
L_001D13F8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 814u)));
    st16((c.r[16].w[0] + 818u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001D1400:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D1420:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    set32(c.r[2], 0u - 1025u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { st16((c.r[4].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));  [[clang::musttail]] return unit_0039(c, 190u, depth); }
L_001D1440:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[29].w[0] + 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1480u); st32((c.r[2].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_0039(c, 116u, depth + 1u); else { c.pc = 0x001E5650u; return; } if (c.pc != 0x001D1480u) [[unlikely]] return; }
L_001D1480:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F610000u);  if (t) { goto L_001D14A8; } }
    c.r[2].d[0] = c.r[2].d[0] | 18350ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 4;
L_001D14A8:
    set32(c.r[16], c.r[29].w[0] + 68u);
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 64u);  if (t) { goto L_001D1548; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D14D0u);  if (depth < kMaxDepth) unit_0039(c, 189u, depth + 1u); else { c.pc = 0x001E7260u; return; } if (c.pc != 0x001D14D0u) [[unlikely]] return; }
L_001D14D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D1538; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    set32(c.r[3], 0u - 513u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 8080u);
    set32(c.r[5], 0u + 1u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st16((c.r[17].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[17].w[0] + 988u), c.f[0]);
    st32((c.r[17].w[0] + 8292u), c.f[0]);
    st32((c.r[17].w[0] + 8252u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 984u));
    c.f[0] = ld32((c.r[17].w[0] + 988u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1528u); st32((c.r[17].w[0] + 1016u), c.f[0]);  if (depth < kMaxDepth) unit_003A(c, 61u, depth + 1u); else { c.pc = 0x001E9AC0u; return; } if (c.pc != 0x001D1528u) [[unlikely]] return; }
L_001D1528:
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1008u), c.f[0]);  if (t) { goto L_001D17B8; } }
    c.budget -= 1;
L_001D1538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1540u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 107u, depth + 1u); else { c.pc = 0x00180E20u; return; } if (c.pc != 0x001D1540u) [[unlikely]] return; }
L_001D1540:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D17B8; } }
L_001D1548:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1550u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0039(c, 189u, depth + 1u); else { c.pc = 0x001E7260u; return; } if (c.pc != 0x001D1550u) [[unlikely]] return; }
L_001D1550:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D1628; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] - 8076u);
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[4].d[0] | 512ull;
    st16((c.r[17].w[0] + 822u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[17].w[0] + 988u), c.f[0]);
    st32((c.r[17].w[0] + 8292u), c.f[0]);
    st32((c.r[17].w[0] + 8252u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 984u));
    c.f[0] = ld32((c.r[17].w[0] + 988u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 1016u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 744u)));
    c.budget -= 20;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_001D15B0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D15E0; } }
L_001D15B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), c.f[0]);  if (t) { goto L_001D1620; } }
    c.budget -= 1;
L_001D15E0:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D1620; } }
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.budget -= 13;
L_001D1620:
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 790u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001D1628:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1630u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0039(c, 189u, depth + 1u); else { c.pc = 0x001E7260u; return; } if (c.pc != 0x001D1630u) [[unlikely]] return; }
L_001D1630:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D1648; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 789u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001D16D8; } }
    c.budget -= 1;
L_001D1648:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 791u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001D16B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D165Cu); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x001465C0u; return; } if (c.pc != 0x001D165Cu) [[unlikely]] return; }
L_001D165C:
    c.f[20] = c.f[0] ^ fp::kSign;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1668u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 116u, depth + 1u); else { c.pc = 0x001E5650u; return; } if (c.pc != 0x001D1668u) [[unlikely]] return; }
L_001D1668:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001D16A8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 744u)));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_001D1690; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D16A8; } }
L_001D1690:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D169Cu); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0020(c, 215u, depth + 1u); else { c.pc = 0x00183210u; return; } if (c.pc != 0x001D169Cu) [[unlikely]] return; }
L_001D169C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D16B0; } }
    c.budget -= 1;
L_001D16A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D16B0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 161u, depth + 1u); else { c.pc = 0x001872E0u; return; } if (c.pc != 0x001D16B0u) [[unlikely]] return; }
L_001D16B0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 744u)));
    st8((c.r[17].w[0] + 962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001D16B8:
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 791u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 962u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 744u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D16D8; } }
    st8((c.r[17].w[0] + 791u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001D16D8:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[0] = ld32((c.r[17].w[0] + 2096u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 2100u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 2104u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D16F8u); st32((c.r[29].w[0] + 72u), c.f[0]);  if (depth < kMaxDepth) unit_0039(c, 189u, depth + 1u); else { c.pc = 0x001E7260u; return; } if (c.pc != 0x001D16F8u) [[unlikely]] return; }
L_001D16F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D1768; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 789u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D17B8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 744u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_001D1738; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001D1738; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 814u)));
    set32(c.r[3], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001D17B8; } }
L_001D1738:
    st8((c.r[17].w[0] + 789u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D174Cu); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_0020(c, 313u, depth + 1u); else { c.pc = 0x00183C00u; return; } if (c.pc != 0x001D174Cu) [[unlikely]] return; }
L_001D174C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 769u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001D17B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1760u); set32(c.r[5], 0u + 186u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x001D1760u) [[unlikely]] return; }
L_001D1760:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D17B8; } }
L_001D1768:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 790u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D17B8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 744u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_001D1790; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001D17B8; } }
L_001D1790:
    st8((c.r[17].w[0] + 790u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D17A4u); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_0020(c, 149u, depth + 1u); else { c.pc = 0x00181D40u; return; } if (c.pc != 0x001D17A4u) [[unlikely]] return; }
L_001D17A4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 769u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001D17B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D17B8u); set32(c.r[5], 0u + 186u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x001D17B8u) [[unlikely]] return; }
L_001D17B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001D17D0:
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
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001D1828; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 194ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001D1820; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 813u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001D1860; } }
    c.budget -= 1;
L_001D1820:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 813u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001D1860; } }
L_001D1828:
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 992u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001D1848; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 813u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001D1860; } }
L_001D1848:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 813u));
    set32(c.r[2], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D1860; } }
    st8((c.r[16].w[0] + 813u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001D1860:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x461C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1874u); st32((c.r[16].w[0] + 992u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0075(c, 25u, depth + 1u); else { c.pc = 0x002D46E0u; return; } if (c.pc != 0x001D1874u) [[unlikely]] return; }
L_001D1874:
    c.f[1] = ld32((c.r[16].w[0] + 988u));
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 8292u), c.f[1]);
    st32((c.r[16].w[0] + 8252u), c.f[1]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 570u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D18E0; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 570u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D18B8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CF50000u);
    c.r[3].d[0] = c.r[3].d[0] | 49807ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 984u), c.r[3].w[0]);  if (t) { goto L_001D18C0; } }
    c.budget -= 1;
L_001D18B8:
    st32((c.r[16].w[0] + 984u), c.f[0]);
    c.budget -= 2;
L_001D18C0:
    c.f[1] = ld32((c.r[16].w[0] + 984u));
    c.f[0] = ld32((c.r[16].w[0] + 988u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 1016u), c.f[0]);
    st32((c.r[16].w[0] + 8292u), c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8252u), c.f[0]);  if (t) { goto L_001D1958; } }
    c.budget -= 1;
L_001D18E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8693u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001D18F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D18FC; } }
L_001D18F8:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 813u));
    c.budget -= 1;
L_001D18FC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_001D1940; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001D1920; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001D1920; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D1948; } }
L_001D1920:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 813u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.f[1] = ld32((c.r[3].w[0] + 1164u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 984u), c.f[0]);  if (t) { goto L_001D1948; } }
    c.budget -= 1;
L_001D1940:
    st32((c.r[16].w[0] + 984u), c.f[0]);
    c.budget -= 2;
L_001D1948:
    c.f[1] = ld32((c.r[16].w[0] + 984u));
    c.f[0] = ld32((c.r[16].w[0] + 988u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 1016u), c.f[0]);
    c.budget -= 4;
L_001D1958:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D1970:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D19A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0074(c, 336u, depth + 1u); else { c.pc = 0x002D37E0u; return; } if (c.pc != 0x001D19A4u) [[unlikely]] return; }
L_001D19A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D1A60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43370000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[20].w[0] + 712u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 31024u);
    c.r[4].d[0] = ld8((c.r[19].w[0] + 12u));
    set32(c.r[2], 0u + 2u);
    c.r[16].d[0] = c.r[4].d[0] & 31ull;
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001D1A18; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D1A10; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D19F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D1A40; } }
L_001D19F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D19F8u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001D19F8u) [[unlikely]] return; }
L_001D19F8:
    c.r[3].d[0] = c.r[2].d[0] & 31ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], c.r[2].w[0] + 23088u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld8((c.r[2].w[0]));  if (t) { goto L_001D1A40; } }
L_001D1A10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] - 1u);  if (t) { goto L_001D1A40; } }
L_001D1A18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1A20u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001D1A20u) [[unlikely]] return; }
L_001D1A20:
    c.r[4].d[0] = c.r[2].d[0] & 31ull;
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], c.r[2].w[0] + 23340u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[16].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 8;
L_001D1A40:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 578u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_001D1A80; } }
    set32(c.r[2], c.r[2].w[0] - 30976u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld8((c.r[2].w[0]));  if (t) { goto L_001D1A80; } }
L_001D1A60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42D50000u);
    c.r[3].d[0] = c.r[2].d[0] | 32768ull;
    st32((c.r[20].w[0] + 712u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 578u)));
    set32(c.r[2], c.r[2].w[0] - 30976u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[16].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 8;
L_001D1A80:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D1A90; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_001D1A90:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 15u));
    c.r[4].d[0] = ld8((c.r[20].w[0] + 515u));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[18].d[0] = c.r[2].d[0] & 15ull;
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1AACu); set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));  if (depth < kMaxDepth) unit_0074(c, 336u, depth + 1u); else { c.pc = 0x002D37E0u; return; } if (c.pc != 0x001D1AACu) [[unlikely]] return; }
L_001D1AAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D1AE8; } }
    c.r[2].d[0] = c.r[18].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D1B08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1AC8u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001D1AC8u) [[unlikely]] return; }
L_001D1AC8:
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], 0u + 1u);
    mmi::divu(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[3].w[0] << (c.r[2].w[0] & 31u));  if (t) { goto L_001D1B08; } }
L_001D1AE8:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 7u));
    set32(c.r[18], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[18].d[0]; set32(c.r[2], 0u + 5u);  if (t) { goto L_001D1B00; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D1B08; } }
L_001D1B00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 1u);  if (t) { goto L_001D1B08; } }
L_001D1B08:
    set32(c.r[2], ld32((c.r[20].w[0] + 1608u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 114u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D1B38; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001D1B38; } }
    set32(c.r[5], 0u + 17u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1B38u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 153u, depth + 1u); else { c.pc = 0x0023A1C0u; return; } if (c.pc != 0x001D1B38u) [[unlikely]] return; }
L_001D1B38:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 814u)));
    set32(c.r[2], 0u + 36u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D1B58; } }
    set32(c.r[18], 0u + 4u);
    set32(c.r[16], 0u + 7u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001D1C40; } }
L_001D1B58:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 850u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D1B98; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001D1B98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1B7Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 251u, depth + 1u); else { c.pc = 0x001E7BE0u; return; } if (c.pc != 0x001D1B7Cu) [[unlikely]] return; }
L_001D1B7C:
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], 0u - 4097u);
    st8((c.r[20].w[0] + 8513u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[20].w[0] + 8512u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 822u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[20].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 7;
L_001D1B98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1BA0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 58u, depth + 1u); else { c.pc = 0x001E93E0u; return; } if (c.pc != 0x001D1BA0u) [[unlikely]] return; }
L_001D1BA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D1BC8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_001D1BC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 10u);  if (t) { goto L_001D1BC8; } }
    c.budget -= 1;
L_001D1BC0:
    set32(c.r[16], 0u + 9u);
    c.budget -= 2;
L_001D1BC8:
    set32(c.r[3], ld32((c.r[20].w[0] + 1608u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 111u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D1C08; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D1BF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_001D1C08; } }
    c.budget -= 1;
L_001D1BF0:
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001D1C08; } }
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], 0u + 1u);
    c.budget -= 3;
L_001D1C08:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 851u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D1C20; } }
    set32(c.r[18], 0u + 4u);
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_001D1C20:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 114u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D1C40; } }
    set32(c.r[18], 0u + 4u);
    set32(c.r[16], 0u + 6u);
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
L_001D1C40:
    c.r[2].d[0] = c.r[17].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D1C70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1C54u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001D1C54u) [[unlikely]] return; }
L_001D1C54:
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], 0u + 1u);
    mmi::divu(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[17], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.budget -= 7;
L_001D1C70:
    c.r[2].d[0] = c.r[17].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D1C80; } }
    set32(c.r[17], 0u + 3u);
    c.budget -= 1;
L_001D1C80:
    st8((c.r[20].w[0] + 518u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[20].w[0] + 517u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[2], 0u - 1u);
    st8((c.r[20].w[0] + 571u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[3], ld32((c.r[20].w[0] + 1608u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 124u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001D1CD8; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 1236u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[2].w[0] << (c.r[4].w[0] & 31u));
    c.r[4].d[0] = ~(c.r[4].d[0] | 0ull);
    set32(c.r[2], 0u + 37u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    st32((c.r[20].w[0] + 1236u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[20].w[0] + 8658u));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D1CD8; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 1236u)));
    c.r[2].d[0] = c.r[2].d[0] << 33;
    c.r[2].d[0] = c.r[2].d[0] >> 33;
    st32((c.r[20].w[0] + 1236u), c.r[2].w[0]);
    c.budget -= 4;
L_001D1CD8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1CE4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0075(c, 31u, depth + 1u); else { c.pc = 0x002D4A30u; return; } if (c.pc != 0x001D1CE4u) [[unlikely]] return; }
L_001D1CE4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1CF0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0075(c, 31u, depth + 1u); else { c.pc = 0x002D4A30u; return; } if (c.pc != 0x001D1CF0u) [[unlikely]] return; }
L_001D1CF0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1CFCu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0075(c, 31u, depth + 1u); else { c.pc = 0x002D4A30u; return; } if (c.pc != 0x001D1CFCu) [[unlikely]] return; }
L_001D1CFC:
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[20].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st8((c.r[20].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 49u);
    st32((c.r[20].w[0] + 1488u), 0u);
    st32((c.r[20].w[0] + 504u), 0u);
    st32((c.r[20].w[0] + 508u), 0u);
    c.budget -= 9;
L_001D1D20:
    st32((c.r[20].w[0] + 1492u), 0u);
    st32((c.r[20].w[0] + 1508u), 0u);
    st32((c.r[20].w[0] + 104u), 0u);
    st32((c.r[20].w[0] + 108u), 0u);
    st32((c.r[20].w[0] + 736u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1D3Cu); st32((c.r[20].w[0] + 740u), 0u);  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x001D1D3Cu) [[unlikely]] return; }
L_001D1D3C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1D48u); set32(c.r[5], 0u + 49u);  if (depth < kMaxDepth) unit_003A(c, 68u, depth + 1u); else { c.pc = 0x001E9DF0u; return; } if (c.pc != 0x001D1D48u) [[unlikely]] return; }
L_001D1D48:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 8658u));
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001D1D70; } }
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1D64u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 153u, depth + 1u); else { c.pc = 0x0023A1C0u; return; } if (c.pc != 0x001D1D64u) [[unlikely]] return; }
L_001D1D64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D1D80; } }
    c.budget -= 1;
L_001D1D70:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1D80u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 153u, depth + 1u); else { c.pc = 0x0023A1C0u; return; } if (c.pc != 0x001D1D80u) [[unlikely]] return; }
L_001D1D80:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 571u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 30944u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1DA4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D1DA4u) [[unlikely]] return; }
L_001D1DA4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 822u)));
    set32(c.r[2], 0u - 24576u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 12u);
    c.r[3].d[0] = c.r[3].d[0] & 7680ull;
    st16((c.r[20].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 822u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1DCCu); st16((c.r[20].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x001D1DCCu) [[unlikely]] return; }
L_001D1DCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1DD4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 232u, depth + 1u); else { c.pc = 0x0023BE60u; return; } if (c.pc != 0x001D1DD4u) [[unlikely]] return; }
L_001D1DD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1DDCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 432u, depth + 1u); else { c.pc = 0x002B36A0u; return; } if (c.pc != 0x001D1DDCu) [[unlikely]] return; }
L_001D1DDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001D1E00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 12u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 571u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D1E60; } }
    c.f[0] = ld32((c.r[4].w[0] + 736u));
    st32((c.r[4].w[0] + 740u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 8292u));
    c.f[0] = ld32((c.r[4].w[0] + 736u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 736u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 21u)));
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001D1E60; } }
    set32(c.r[2], 0u - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 712u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1E58u); st8((c.r[4].w[0] + 517u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0034(c, 344u, depth + 1u); else { c.pc = 0x001D3970u; return; } if (c.pc != 0x001D1E58u) [[unlikely]] return; }
L_001D1E58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D1E80; } }
L_001D1E60:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 571u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 30896u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1E80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D1E80u) [[unlikely]] return; }
L_001D1E80:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001D1E90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 578u)));
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001D1F08; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1EC8u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 15u, depth + 1u); else { c.pc = 0x001D8A40u; return; } if (c.pc != 0x001D1EC8u) [[unlikely]] return; }
L_001D1EC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D1ED8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 4u);  if (t) { goto L_001D1EF0; } }
L_001D1ED8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1EE8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 15u, depth + 1u); else { c.pc = 0x001D8A40u; return; } if (c.pc != 0x001D1EE8u) [[unlikely]] return; }
L_001D1EE8:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_001D1EF0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; st8((c.r[18].w[0] + 579u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001D1F38; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 579u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001D1F38; } }
L_001D1F08:
    c.r[1].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_001D1F38; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1F20u); set32(c.r[16], 0u + 5u);  if (depth < kMaxDepth) unit_0036(c, 15u, depth + 1u); else { c.pc = 0x001D8A40u; return; } if (c.pc != 0x001D1F20u) [[unlikely]] return; }
L_001D1F20:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; st8((c.r[18].w[0] + 579u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001D1F38; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 579u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001D1F38:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 8296u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001D1F60; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 8298u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001D1F60; } }
    st32((c.r[18].w[0] + 104u), 0u);
    st32((c.r[18].w[0] + 108u), 0u);
    c.budget -= 3;
L_001D1F60:
    set32(c.r[2], 0u + 2u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1F74u); st8((c.r[18].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0036(c, 16u, depth + 1u); else { c.pc = 0x001D8AF0u; return; } if (c.pc != 0x001D1F74u) [[unlikely]] return; }
L_001D1F74:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1F8Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D1F8Cu) [[unlikely]] return; }
L_001D1F8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001D1FB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1FC4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x001D1FC4u) [[unlikely]] return; }
L_001D1FC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1FCCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 348u, depth + 1u); else { c.pc = 0x001D3A70u; return; } if (c.pc != 0x001D1FCCu) [[unlikely]] return; }
L_001D1FCC:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001D1FE8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8325u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D1FF8; } }
    c.budget -= 1;
L_001D1FE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1FF0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 344u, depth + 1u); else { c.pc = 0x001D3970u; return; } if (c.pc != 0x001D1FF0u) [[unlikely]] return; }
L_001D1FF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D20B8; } }
L_001D1FF8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[1] = ld32((c.r[16].w[0] + 8308u));
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D2058; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D201Cu);  if (depth < kMaxDepth) unit_0036(c, 17u, depth + 1u); else { c.pc = 0x001D8B70u; return; } if (c.pc != 0x001D201Cu) [[unlikely]] return; }
L_001D201C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2024u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 14u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x001D2024u) [[unlikely]] return; }
L_001D2024:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001D2058; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD730000u);
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 46662ull;
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], 0u + 2u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D204Cu); st8((c.r[16].w[0] + 963u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0034(c, 366u, depth + 1u); else { c.pc = 0x001D3E70u; return; } if (c.pc != 0x001D204Cu) [[unlikely]] return; }
L_001D204C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D20B8; } }
    c.budget -= 1;
L_001D2058:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3ED10000u);
    c.r[4].d[0] = c.r[3].d[0] | 60293ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 600u)));
    c.f[2] = c.r[4].w[0];
    c.r[3].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] << 2);  if (t) { goto L_001D20A0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[3].w[0] + 5120u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_div(c, 2u, c.f[1], c.f[0]);
    c.budget -= 10;
L_001D20A0:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001D20B8; } }
    st32((c.r[16].w[0] + 104u), c.f[2]);
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 2;
L_001D20B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D20D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D20F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 15u, depth + 1u); else { c.pc = 0x001D8A40u; return; } if (c.pc != 0x001D20F8u) [[unlikely]] return; }
L_001D20F8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[18], 0u + 18u);  if (t) { goto L_001D2148; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D2118; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 22u);  if (t) { goto L_001D2170; } }
    c.budget -= 1;
L_001D2118:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001D2130; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 23u);  if (t) { goto L_001D2170; } }
    c.budget -= 1;
L_001D2130:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2140u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 15u, depth + 1u); else { c.pc = 0x001D8A40u; return; } if (c.pc != 0x001D2140u) [[unlikely]] return; }
L_001D2140:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);  if (t) { goto L_001D2170; } }
L_001D2148:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], 0u + 9u);  if (t) { goto L_001D2158; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 13u);  if (t) { goto L_001D2170; } }
L_001D2158:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2168u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 15u, depth + 1u); else { c.pc = 0x001D8A40u; return; } if (c.pc != 0x001D2168u) [[unlikely]] return; }
L_001D2168:
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_001D2170:
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; st8((c.r[17].w[0] + 579u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001D2188; } }
    set32(c.r[2], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_001D2190; } }
L_001D2188:
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 579u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001D2190:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2198u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 35u, depth + 1u); else { c.pc = 0x001D8DE0u; return; } if (c.pc != 0x001D2198u) [[unlikely]] return; }
L_001D2198:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D21A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 29u, depth + 1u); else { c.pc = 0x001D8C90u; return; } if (c.pc != 0x001D21A4u) [[unlikely]] return; }
L_001D21A4:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D21BCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D21BCu) [[unlikely]] return; }
L_001D21BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001D21E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D21F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 348u, depth + 1u); else { c.pc = 0x001D3A70u; return; } if (c.pc != 0x001D21F4u) [[unlikely]] return; }
L_001D21F4:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D2210; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2208u);  if (depth < kMaxDepth) unit_0034(c, 344u, depth + 1u); else { c.pc = 0x001D3970u; return; } if (c.pc != 0x001D2208u) [[unlikely]] return; }
L_001D2208:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D2230; } }
L_001D2210:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 709u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 30840u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2230u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D2230u) [[unlikely]] return; }
L_001D2230:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D2240:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D225Cu); st8((c.r[4].w[0] + 963u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0036(c, 32u, depth + 1u); else { c.pc = 0x001D8D40u; return; } if (c.pc != 0x001D225Cu) [[unlikely]] return; }
L_001D225C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2264u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 38u, depth + 1u); else { c.pc = 0x001D8EC0u; return; } if (c.pc != 0x001D2264u) [[unlikely]] return; }
L_001D2264:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_001D22E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBCF30000u);
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 46662ull;
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2284u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 37u, depth + 1u); else { c.pc = 0x001D8E70u; return; } if (c.pc != 0x001D2284u) [[unlikely]] return; }
L_001D2284:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 579u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D22A4u); set32(c.r[6], c.r[3].w[0] + 56u);  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D22A4u) [[unlikely]] return; }
L_001D22A4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D22B0u); set32(c.r[5], 0u + 143u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x001D22B0u) [[unlikely]] return; }
L_001D22B0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_001D22D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D22C8u);  if (depth < kMaxDepth) unit_0039(c, 189u, depth + 1u); else { c.pc = 0x001E7260u; return; } if (c.pc != 0x001D22C8u) [[unlikely]] return; }
L_001D22C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D22D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D22D8u); set32(c.r[5], 0u + 156u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x001D22D8u) [[unlikely]] return; }
L_001D22D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D2360; } }
L_001D22E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[1] = ld32((c.r[16].w[0] + 8308u));
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], 0u + 1u);  if (t) { goto L_001D2300; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D2300:
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001D2320; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 2;
L_001D2320:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001D2360; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2330u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x001D2330u) [[unlikely]] return; }
L_001D2330:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D2360; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 709u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    set32(c.r[7], 0u + 10u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 579u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2360u); set32(c.r[6], c.r[2].w[0] + 54u);  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D2360u) [[unlikely]] return; }
L_001D2360:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D2370:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2384u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x001D2384u) [[unlikely]] return; }
L_001D2384:
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2394u); st8((c.r[16].w[0] + 963u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0036(c, 32u, depth + 1u); else { c.pc = 0x001D8D40u; return; } if (c.pc != 0x001D2394u) [[unlikely]] return; }
L_001D2394:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D239Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 38u, depth + 1u); else { c.pc = 0x001D8EC0u; return; } if (c.pc != 0x001D239Cu) [[unlikely]] return; }
L_001D239C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_001D2410; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBDAE0000u);
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 5243ull;
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D23BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 37u, depth + 1u); else { c.pc = 0x001D8E70u; return; } if (c.pc != 0x001D23BCu) [[unlikely]] return; }
L_001D23BC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 579u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D23D8u); set32(c.r[6], c.r[2].w[0] + 56u);  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D23D8u) [[unlikely]] return; }
L_001D23D8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D23E4u); set32(c.r[5], 0u + 143u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x001D23E4u) [[unlikely]] return; }
L_001D23E4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_001D2410; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D23FCu);  if (depth < kMaxDepth) unit_0039(c, 189u, depth + 1u); else { c.pc = 0x001E7260u; return; } if (c.pc != 0x001D23FCu) [[unlikely]] return; }
L_001D23FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D2410; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D240Cu); set32(c.r[5], 0u + 156u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x001D240Cu) [[unlikely]] return; }
L_001D240C:
    c.budget -= 1;
L_001D2410:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D2420:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D243Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 17u, depth + 1u); else { c.pc = 0x001D8B70u; return; } if (c.pc != 0x001D243Cu) [[unlikely]] return; }
L_001D243C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2444u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x001D2444u) [[unlikely]] return; }
L_001D2444:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D2450; } }
    c.r[17].d[0] = c.r[17].d[0] | 1ull;
    c.budget -= 1;
L_001D2450:
    c.f[2] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = ld32((c.r[16].w[0] + 108u));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001D2480; } }
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.r[17].d[0] = c.r[17].d[0] | 2ull;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 4;
L_001D2480:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D24A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2494u);  if (depth < kMaxDepth) unit_0034(c, 344u, depth + 1u); else { c.pc = 0x001D3970u; return; } if (c.pc != 0x001D2494u) [[unlikely]] return; }
L_001D2494:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D2500; } }
    c.budget -= 1;
L_001D24A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D24A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 14u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x001D24A8u) [[unlikely]] return; }
L_001D24A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001D2500; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBDF30000u);
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 46662ull;
    st32((c.r[16].w[0] + 108u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 1608u)));
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[3].w[0] + 64u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D24E0u); st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0036(c, 35u, depth + 1u); else { c.pc = 0x001D8DE0u; return; } if (c.pc != 0x001D24E0u) [[unlikely]] return; }
L_001D24E0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 579u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D24FCu); set32(c.r[6], c.r[2].w[0] + 54u);  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D24FCu) [[unlikely]] return; }
L_001D24FC:
    c.budget -= 1;
L_001D2500:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D2520:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 578u)));
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001D2598; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2558u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 15u, depth + 1u); else { c.pc = 0x001D8A40u; return; } if (c.pc != 0x001D2558u) [[unlikely]] return; }
L_001D2558:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D2568; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 4u);  if (t) { goto L_001D2580; } }
L_001D2568:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2578u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 15u, depth + 1u); else { c.pc = 0x001D8A40u; return; } if (c.pc != 0x001D2578u) [[unlikely]] return; }
L_001D2578:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_001D2580:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; st8((c.r[18].w[0] + 579u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001D25C8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 579u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001D25C8; } }
L_001D2598:
    c.r[1].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_001D25C8; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D25B0u); set32(c.r[16], 0u + 5u);  if (depth < kMaxDepth) unit_0036(c, 15u, depth + 1u); else { c.pc = 0x001D8A40u; return; } if (c.pc != 0x001D25B0u) [[unlikely]] return; }
L_001D25B0:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; st8((c.r[18].w[0] + 579u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001D25C8; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 579u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001D25C8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 8296u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001D25F0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 8298u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001D25F0; } }
    st32((c.r[18].w[0] + 104u), 0u);
    st32((c.r[18].w[0] + 108u), 0u);
    c.budget -= 3;
L_001D25F0:
    set32(c.r[2], 0u + 2u);
    st8((c.r[18].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001D2658; } }
    set32(c.r[2], 0u + 5u);
    st8((c.r[18].w[0] + 709u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[12] = 0u;
    st32((c.r[18].w[0] + 104u), 0u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 108u), 0u);
    set32(c.r[5], 0u + 4u);
    st8((c.r[18].w[0] + 579u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], 0u + 68u);
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    c.r[7].d[0] = 0ull + 0ull;
    st16((c.r[18].w[0] + 574u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D264Cu); st16((c.r[18].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D264Cu) [[unlikely]] return; }
L_001D264C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D2680; } }
    c.budget -= 1;
L_001D2658:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2664u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 16u, depth + 1u); else { c.pc = 0x001D8AF0u; return; } if (c.pc != 0x001D2664u) [[unlikely]] return; }
L_001D2664:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D267Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D267Cu) [[unlikely]] return; }
L_001D267C:
    c.budget -= 1;
L_001D2680:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001D26A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D26B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 348u, depth + 1u); else { c.pc = 0x001D3A70u; return; } if (c.pc != 0x001D26B4u) [[unlikely]] return; }
L_001D26B4:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D26D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D26C8u);  if (depth < kMaxDepth) unit_0034(c, 344u, depth + 1u); else { c.pc = 0x001D3970u; return; } if (c.pc != 0x001D26C8u) [[unlikely]] return; }
L_001D26C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D26F0; } }
L_001D26D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 709u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 30824u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D26F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D26F0u) [[unlikely]] return; }
L_001D26F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D2700:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2714u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x001D2714u) [[unlikely]] return; }
L_001D2714:
    c.f[1] = ld32((c.r[16].w[0] + 8308u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D2768; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2738u);  if (depth < kMaxDepth) unit_0036(c, 17u, depth + 1u); else { c.pc = 0x001D8B70u; return; } if (c.pc != 0x001D2738u) [[unlikely]] return; }
L_001D2738:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2740u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 14u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x001D2740u) [[unlikely]] return; }
L_001D2740:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001D2768; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD730000u);
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 46662ull;
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2760u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 366u, depth + 1u); else { c.pc = 0x001D3E70u; return; } if (c.pc != 0x001D2760u) [[unlikely]] return; }
L_001D2760:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D2828; } }
L_001D2768:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3ED10000u);
    c.r[4].d[0] = c.r[3].d[0] | 60293ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 600u)));
    c.f[2] = c.r[4].w[0];
    c.r[3].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] << 2);  if (t) { goto L_001D27B0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[3].w[0] + 5120u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_div(c, 2u, c.f[1], c.f[0]);
    c.budget -= 10;
L_001D27B0:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001D27C8; } }
    st32((c.r[16].w[0] + 104u), c.f[2]);
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 2;
L_001D27C8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8325u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D2828; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 709u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 5u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = 0u;
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 68u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    st8((c.r[16].w[0] + 579u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    st16((c.r[16].w[0] + 574u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2824u); st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D2824u) [[unlikely]] return; }
L_001D2824:
    c.budget -= 1;
L_001D2828:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D2840:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2854u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x001D2854u) [[unlikely]] return; }
L_001D2854:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D2870; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2864u);  if (depth < kMaxDepth) unit_0034(c, 344u, depth + 1u); else { c.pc = 0x001D3970u; return; } if (c.pc != 0x001D2864u) [[unlikely]] return; }
L_001D2864:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D29E0; } }
    c.budget -= 1;
L_001D2870:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42340000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2880u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 148u, depth + 1u); else { c.pc = 0x001DD100u; return; } if (c.pc != 0x001D2880u) [[unlikely]] return; }
L_001D2880:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D2898; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    c.r[2].d[0] = c.r[2].d[0] | 33554ull;
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 4;
L_001D2898:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x431B0000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D28A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 148u, depth + 1u); else { c.pc = 0x001DD100u; return; } if (c.pc != 0x001D28A8u) [[unlikely]] return; }
L_001D28A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D28B8; } }
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 2;
L_001D28B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A20000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D28C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 148u, depth + 1u); else { c.pc = 0x001DD100u; return; } if (c.pc != 0x001D28C8u) [[unlikely]] return; }
L_001D28C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D28F8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_001D28F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D28E8u);  if (depth < kMaxDepth) unit_0039(c, 189u, depth + 1u); else { c.pc = 0x001E7260u; return; } if (c.pc != 0x001D28E8u) [[unlikely]] return; }
L_001D28E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D28F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D28F8u); set32(c.r[5], 0u + 178u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x001D28F8u) [[unlikely]] return; }
L_001D28F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2908u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 148u, depth + 1u); else { c.pc = 0x001DD100u; return; } if (c.pc != 0x001D2908u) [[unlikely]] return; }
L_001D2908:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D2918; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2918u); set32(c.r[5], 0u + 176u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x001D2918u) [[unlikely]] return; }
L_001D2918:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43130000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2928u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 148u, depth + 1u); else { c.pc = 0x001DD100u; return; } if (c.pc != 0x001D2928u) [[unlikely]] return; }
L_001D2928:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D2958; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_001D2958; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2948u);  if (depth < kMaxDepth) unit_0039(c, 189u, depth + 1u); else { c.pc = 0x001E7260u; return; } if (c.pc != 0x001D2948u) [[unlikely]] return; }
L_001D2948:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D2958; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2958u); set32(c.r[5], 0u + 179u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x001D2958u) [[unlikely]] return; }
L_001D2958:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43190000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2968u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 148u, depth + 1u); else { c.pc = 0x001DD100u; return; } if (c.pc != 0x001D2968u) [[unlikely]] return; }
L_001D2968:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D2978; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2978u); set32(c.r[5], 0u + 177u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x001D2978u) [[unlikely]] return; }
L_001D2978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2980u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 17u, depth + 1u); else { c.pc = 0x001D8B70u; return; } if (c.pc != 0x001D2980u) [[unlikely]] return; }
L_001D2980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2988u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 14u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x001D2988u) [[unlikely]] return; }
L_001D2988:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001D29E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBDF30000u);
    st8((c.r[16].w[0] + 571u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 46662ull;
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 108u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 1608u)));
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[3].w[0] + 64u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D29C4u); st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0036(c, 35u, depth + 1u); else { c.pc = 0x001D8DE0u; return; } if (c.pc != 0x001D29C4u) [[unlikely]] return; }
L_001D29C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41500000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 16u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D29E0u); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D29E0u) [[unlikely]] return; }
L_001D29E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D29F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2A0Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 15u, depth + 1u); else { c.pc = 0x001D8A40u; return; } if (c.pc != 0x001D2A0Cu) [[unlikely]] return; }
L_001D2A0C:
    c.r[4].d[0] = c.r[2].d[0] ^ 1ull;
    st8((c.r[16].w[0] + 579u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44510000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 574u)));
    c.r[2].d[0] = c.r[2].d[0] | 60294ull;
    set32(c.r[3], c.r[3].w[0] + 32767u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[16].w[0] + 728u), c.r[2].w[0]);  if (t) { goto L_001D2A48; } }
    c.f[0] = ld32((c.r[16].w[0] + 728u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 728u), c.f[0]);
    c.budget -= 4;
L_001D2A48:
    set32(c.r[6], c.r[4].w[0] + 69u);
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 4u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2A68u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D2A68u) [[unlikely]] return; }
L_001D2A68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D2A80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2A94u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x001D2A94u) [[unlikely]] return; }
L_001D2A94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2A9Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 348u, depth + 1u); else { c.pc = 0x001D3A70u; return; } if (c.pc != 0x001D2A9Cu) [[unlikely]] return; }
L_001D2A9C:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001D2AB8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8325u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D2AC8; } }
    c.budget -= 1;
L_001D2AB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2AC0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 344u, depth + 1u); else { c.pc = 0x001D3970u; return; } if (c.pc != 0x001D2AC0u) [[unlikely]] return; }
L_001D2AC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D2C70; } }
L_001D2AC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2AD0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 17u, depth + 1u); else { c.pc = 0x001D8B70u; return; } if (c.pc != 0x001D2AD0u) [[unlikely]] return; }
L_001D2AD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2AD8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 14u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x001D2AD8u) [[unlikely]] return; }
L_001D2AD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_001D2B40; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBDF30000u);
    st8((c.r[16].w[0] + 571u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 46662ull;
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 108u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 1608u)));
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[3].w[0] + 64u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2B18u); st8((c.r[16].w[0] + 579u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_0036(c, 35u, depth + 1u); else { c.pc = 0x001D8DE0u; return; } if (c.pc != 0x001D2B18u) [[unlikely]] return; }
L_001D2B18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41500000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 16u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2B34u); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D2B34u) [[unlikely]] return; }
L_001D2B34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D2C70; } }
    c.budget -= 1;
L_001D2B40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[1] = ld32((c.r[16].w[0] + 728u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[16].w[0] + 8292u));
    c.f[12] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2B74u); st32((c.r[16].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0037(c, 148u, depth + 1u); else { c.pc = 0x001DD100u; return; } if (c.pc != 0x001D2B74u) [[unlikely]] return; }
L_001D2B74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D2BA0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44520000u);
    c.r[2].d[0] = c.r[2].d[0] | 9345ull;
    st32((c.r[16].w[0] + 728u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 579u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D2BA0; } }
    c.f[0] = ld32((c.r[16].w[0] + 728u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 728u), c.f[0]);
    c.budget -= 3;
L_001D2BA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2BB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 148u, depth + 1u); else { c.pc = 0x001DD100u; return; } if (c.pc != 0x001D2BB0u) [[unlikely]] return; }
L_001D2BB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D2BC8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E6B0000u);
    c.r[2].d[0] = c.r[2].d[0] | 60922ull;
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 4;
L_001D2BC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x421C0000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2BD8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 148u, depth + 1u); else { c.pc = 0x001DD100u; return; } if (c.pc != 0x001D2BD8u) [[unlikely]] return; }
L_001D2BD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D2BF0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    st32((c.r[16].w[0] + 728u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 4;
L_001D2BF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x428E0000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2C00u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 148u, depth + 1u); else { c.pc = 0x001DD100u; return; } if (c.pc != 0x001D2C00u) [[unlikely]] return; }
L_001D2C00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D2C10; } }
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 2;
L_001D2C10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2C20u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 148u, depth + 1u); else { c.pc = 0x001DD100u; return; } if (c.pc != 0x001D2C20u) [[unlikely]] return; }
L_001D2C20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D2C50; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_001D2C50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2C40u);  if (depth < kMaxDepth) unit_0039(c, 189u, depth + 1u); else { c.pc = 0x001E7260u; return; } if (c.pc != 0x001D2C40u) [[unlikely]] return; }
L_001D2C40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D2C50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2C50u); set32(c.r[5], 0u + 179u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x001D2C50u) [[unlikely]] return; }
L_001D2C50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x428A0000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2C60u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 148u, depth + 1u); else { c.pc = 0x001DD100u; return; } if (c.pc != 0x001D2C60u) [[unlikely]] return; }
L_001D2C60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D2C70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2C70u); set32(c.r[5], 0u + 177u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x001D2C70u) [[unlikely]] return; }
L_001D2C70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D2C80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2CA4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0036(c, 15u, depth + 1u); else { c.pc = 0x001D8A40u; return; } if (c.pc != 0x001D2CA4u) [[unlikely]] return; }
L_001D2CA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D2CC8; } }
    set32(c.r[2], 0u + 2u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[16].w[0] + 571u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2CC0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 189u, depth + 1u); else { c.pc = 0x001D2520u; return; } if (c.pc != 0x001D2CC0u) [[unlikely]] return; }
L_001D2CC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D2D10; } }
L_001D2CC8:
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 574u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = 0u;
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 71u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[8].w[0] + 32767u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[8].d[0] & 65535ull;
    st32((c.r[16].w[0] + 84u), c.r[8].w[0]);
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2D0Cu); st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D2D0Cu) [[unlikely]] return; }
L_001D2D0C:
    c.budget -= 1;
L_001D2D10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D2D30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2D44u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x001D2D44u) [[unlikely]] return; }
L_001D2D44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2D4Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 348u, depth + 1u); else { c.pc = 0x001D3A70u; return; } if (c.pc != 0x001D2D4Cu) [[unlikely]] return; }
L_001D2D4C:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001D2D68; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8325u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D2D78; } }
    c.budget -= 1;
L_001D2D68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2D70u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 344u, depth + 1u); else { c.pc = 0x001D3970u; return; } if (c.pc != 0x001D2D70u) [[unlikely]] return; }
L_001D2D70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D2E60; } }
L_001D2D78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2D80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 17u, depth + 1u); else { c.pc = 0x001D8B70u; return; } if (c.pc != 0x001D2D80u) [[unlikely]] return; }
L_001D2D80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2D88u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 14u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x001D2D88u) [[unlikely]] return; }
L_001D2D88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D2DB0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD730000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 46662ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2DA4u); st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0034(c, 366u, depth + 1u); else { c.pc = 0x001D3E70u; return; } if (c.pc != 0x001D2DA4u) [[unlikely]] return; }
L_001D2DA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D2E60; } }
    c.budget -= 1;
L_001D2DB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2DC0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 148u, depth + 1u); else { c.pc = 0x001DD100u; return; } if (c.pc != 0x001D2DC0u) [[unlikely]] return; }
L_001D2DC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D2DE0; } }
    set32(c.r[2], 0u + 5u);
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
L_001D2DE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42EA0000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2DF0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 148u, depth + 1u); else { c.pc = 0x001DD100u; return; } if (c.pc != 0x001D2DF0u) [[unlikely]] return; }
L_001D2DF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D2E00; } }
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 2;
L_001D2E00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42DE0000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2E10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 148u, depth + 1u); else { c.pc = 0x001DD100u; return; } if (c.pc != 0x001D2E10u) [[unlikely]] return; }
L_001D2E10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D2E40; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_001D2E40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2E30u);  if (depth < kMaxDepth) unit_0039(c, 189u, depth + 1u); else { c.pc = 0x001E7260u; return; } if (c.pc != 0x001D2E30u) [[unlikely]] return; }
L_001D2E30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D2E40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2E40u); set32(c.r[5], 0u + 179u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x001D2E40u) [[unlikely]] return; }
L_001D2E40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42EC0000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2E50u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 148u, depth + 1u); else { c.pc = 0x001DD100u; return; } if (c.pc != 0x001D2E50u) [[unlikely]] return; }
L_001D2E50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D2E60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2E60u); set32(c.r[5], 0u + 177u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x001D2E60u) [[unlikely]] return; }
L_001D2E60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D2E70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D2E80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D2E90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 84u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 1268u), c.r[3].w[0]);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2EC0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0074(c, 336u, depth + 1u); else { c.pc = 0x002D37E0u; return; } if (c.pc != 0x001D2EC0u) [[unlikely]] return; }
L_001D2EC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_001D2ED8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2ED0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0074(c, 336u, depth + 1u); else { c.pc = 0x002D37E0u; return; } if (c.pc != 0x001D2ED0u) [[unlikely]] return; }
L_001D2ED0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D2EE8; } }
L_001D2ED8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001D2EF0; } }
    c.budget -= 1;
L_001D2EE8:
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001D2EF0:
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D2F20; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2F18u); set32(c.r[7], 0u + 20u);  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D2F18u) [[unlikely]] return; }
L_001D2F18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D2F38; } }
L_001D2F20:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 23u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2F34u); set32(c.r[7], 0u + 20u);  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D2F34u) [[unlikely]] return; }
L_001D2F34:
    c.budget -= 1;
L_001D2F38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D2F50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 744u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001D3020; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 709u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D2FC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2F7Cu);  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x001D2F7Cu) [[unlikely]] return; }
L_001D2F7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D2FF0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 709u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E9B0000u);
    c.r[2].d[0] = c.r[2].d[0] | 22335ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 39u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2FB4u); st32((c.r[16].w[0] + 104u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D2FB4u) [[unlikely]] return; }
L_001D2FB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D2FF0; } }
    c.budget -= 1;
L_001D2FC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2FC8u);  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x001D2FC8u) [[unlikely]] return; }
L_001D2FC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D2FF0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2FE0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 148u, depth + 1u); else { c.pc = 0x001DD100u; return; } if (c.pc != 0x001D2FE0u) [[unlikely]] return; }
L_001D2FE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D2FF0; } }
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 2;
L_001D2FF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2FF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 348u, depth + 1u); else { c.pc = 0x001D3A70u; return; } if (c.pc != 0x001D2FF8u) [[unlikely]] return; }
L_001D2FF8:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001D3010; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8325u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D30F8; } }
L_001D3010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3018u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 344u, depth + 1u); else { c.pc = 0x001D3970u; return; } if (c.pc != 0x001D3018u) [[unlikely]] return; }
L_001D3018:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D31B0; } }
L_001D3020:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 709u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D3038; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 52u), 0u);
    c.budget -= 3;
L_001D3038:
    set32(c.r[5], ld32((c.r[16].w[0] + 1268u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D304Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 100u, depth + 1u); else { c.pc = 0x001E53B0u; return; } if (c.pc != 0x001D304Cu) [[unlikely]] return; }
L_001D304C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3054u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 56u, depth + 1u); else { c.pc = 0x001D0960u; return; } if (c.pc != 0x001D3054u) [[unlikely]] return; }
L_001D3054:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D30A8; } }
    st8((c.r[16].w[0] + 744u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[16].w[0] + 32u);
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3080u); st32((c.r[16].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_001D(c, 96u, depth + 1u); else { c.pc = 0x00175AB0u; return; } if (c.pc != 0x001D3080u) [[unlikely]] return; }
L_001D3080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3088u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 176u, depth + 1u); else { c.pc = 0x001EDE20u; return; } if (c.pc != 0x001D3088u) [[unlikely]] return; }
L_001D3088:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 11u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D30A0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x001D30A0u) [[unlikely]] return; }
L_001D30A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D30D0; } }
L_001D30A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D30B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x001D30B0u) [[unlikely]] return; }
L_001D30B0:
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001D30D0; } }
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.budget -= 1;
L_001D30D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D30D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 348u, depth + 1u); else { c.pc = 0x001D3A70u; return; } if (c.pc != 0x001D30D8u) [[unlikely]] return; }
L_001D30D8:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D30F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D30ECu);  if (depth < kMaxDepth) unit_0034(c, 344u, depth + 1u); else { c.pc = 0x001D3970u; return; } if (c.pc != 0x001D30ECu) [[unlikely]] return; }
L_001D30EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D31B0; } }
    c.budget -= 1;
L_001D30F8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D31B0; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3120u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001D3120u) [[unlikely]] return; }
L_001D3120:
    c.r[3].d[0] = c.r[2].d[0] & 31ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 30816u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3144u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001D3144u) [[unlikely]] return; }
L_001D3144:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D314Cu); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x001D314Cu) [[unlikely]] return; }
L_001D314C:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3158u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0045(c, 210u, depth + 1u); else { c.pc = 0x00216220u; return; } if (c.pc != 0x001D3158u) [[unlikely]] return; }
L_001D3158:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D31B0; } }
    set32(c.r[2], 0u + 2u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D31A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3194u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x001D3194u) [[unlikely]] return; }
L_001D3194:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D31B0; } }
    c.budget -= 1;
L_001D31A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D31ACu); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x001D31ACu) [[unlikely]] return; }
L_001D31AC:
    c.budget -= 1;
L_001D31B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D31C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001D31F8; } }
    set32(c.r[2], 0u + 50u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D31F8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001D31F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    st32((c.r[16].w[0] + 728u), c.r[2].w[0]);
    set32(c.r[2], 0u + 20u);
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3214u); st32((c.r[16].w[0] + 1268u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001D3214u) [[unlikely]] return; }
L_001D3214:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] - 30784u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C030000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.r[3].d[0] = c.r[2].d[0] | 4719ull;
    set32(c.r[2], 0u + 35u);
    st32((c.r[16].w[0] + 100u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001D3260; } }
    set32(c.r[2], 0u + 40u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D3288; } }
    c.budget -= 1;
L_001D3260:
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 10;
L_001D3288:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[29].w[0] + 44u), 0u);
    st32((c.r[29].w[0] + 40u), 0u);
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D32A8u); st32((c.r[29].w[0] + 32u), 0u);  if (depth < kMaxDepth) unit_0046(c, 14u, depth + 1u); else { c.pc = 0x00218290u; return; } if (c.pc != 0x001D32A8u) [[unlikely]] return; }
L_001D32A8:
    set32(c.r[4], c.r[16].w[0] + 2096u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D32B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0045(c, 210u, depth + 1u); else { c.pc = 0x00216220u; return; } if (c.pc != 0x001D32B4u) [[unlikely]] return; }
L_001D32B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D32D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D32E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 348u, depth + 1u); else { c.pc = 0x001D3A70u; return; } if (c.pc != 0x001D32E4u) [[unlikely]] return; }
L_001D32E4:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D3300; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D32F8u);  if (depth < kMaxDepth) unit_0034(c, 344u, depth + 1u); else { c.pc = 0x001D3970u; return; } if (c.pc != 0x001D32F8u) [[unlikely]] return; }
L_001D32F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D3408; } }
L_001D3300:
    c.f[2] = ld32((c.r[16].w[0] + 8292u));
    c.f[1] = ld32((c.r[16].w[0] + 728u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 728u), c.f[1]);  if (t) { goto L_001D3358; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    st32((c.r[16].w[0] + 728u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 2096u);  if (t) { goto L_001D3348; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3340u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0045(c, 210u, depth + 1u); else { c.pc = 0x00216220u; return; } if (c.pc != 0x001D3340u) [[unlikely]] return; }
L_001D3340:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D3358; } }
L_001D3348:
    set32(c.r[4], c.r[16].w[0] + 2096u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3354u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0045(c, 210u, depth + 1u); else { c.pc = 0x00216220u; return; } if (c.pc != 0x001D3354u) [[unlikely]] return; }
L_001D3354:
    c.budget -= 1;
L_001D3358:
    set32(c.r[3], ld32((c.r[16].w[0] + 852u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.f[12] = 0u;
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 852u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 68u));
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 1268u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3388u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 73u, depth + 1u); else { c.pc = 0x001E4ED0u; return; } if (c.pc != 0x001D3388u) [[unlikely]] return; }
L_001D3388:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FE60000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[2] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001D33C8; } }
    c.f[1] = ld32((c.r[16].w[0] + 108u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001D33F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 104u), c.f[2]);  if (t) { goto L_001D33F0; } }
L_001D33C8:
    c.f[1] = ld32((c.r[16].w[0] + 108u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);  if (t) { goto L_001D33F0; } }
    st32((c.r[16].w[0] + 104u), c.f[2]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 4;
L_001D33F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D33F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 56u, depth + 1u); else { c.pc = 0x001D0960u; return; } if (c.pc != 0x001D33F8u) [[unlikely]] return; }
L_001D33F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D3408; } }
    st32((c.r[16].w[0] + 52u), 0u);
    c.budget -= 2;
L_001D3408:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D3420:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 579u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], 0u + 56u);  if (t) { goto L_001D3448; } }
    set32(c.r[16], 0u + 57u);
    c.budget -= 2;
L_001D3448:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    set32(c.r[2], 0u + 5u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    st16((c.r[17].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 744u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D346Cu); st8((c.r[17].w[0] + 849u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0036(c, 16u, depth + 1u); else { c.pc = 0x001D8AF0u; return; } if (c.pc != 0x001D346Cu) [[unlikely]] return; }
L_001D346C:
    set32(c.r[5], 0u + 4u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = 0u;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3484u); c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D3484u) [[unlikely]] return; }
L_001D3484:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D34A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D34B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x001D34B4u) [[unlikely]] return; }
L_001D34B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D34BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 348u, depth + 1u); else { c.pc = 0x001D3A70u; return; } if (c.pc != 0x001D34BCu) [[unlikely]] return; }
L_001D34BC:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001D34D8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8325u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D34E8; } }
    c.budget -= 1;
L_001D34D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D34E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 344u, depth + 1u); else { c.pc = 0x001D3970u; return; } if (c.pc != 0x001D34E0u) [[unlikely]] return; }
L_001D34E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D3548; } }
L_001D34E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D34F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 17u, depth + 1u); else { c.pc = 0x001D8B70u; return; } if (c.pc != 0x001D34F0u) [[unlikely]] return; }
L_001D34F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D34F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 14u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x001D34F8u) [[unlikely]] return; }
L_001D34F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D3520; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD730000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 46662ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3514u); st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0034(c, 366u, depth + 1u); else { c.pc = 0x001D3E70u; return; } if (c.pc != 0x001D3514u) [[unlikely]] return; }
L_001D3514:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D3548; } }
    c.budget -= 1;
L_001D3520:
    c.f[2] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = ld32((c.r[16].w[0] + 108u));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001D3548; } }
    st32((c.r[16].w[0] + 104u), c.f[0]);
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 2;
L_001D3548:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D3560:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3588u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 15u, depth + 1u); else { c.pc = 0x001D8A40u; return; } if (c.pc != 0x001D3588u) [[unlikely]] return; }
L_001D3588:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; st8((c.r[16].w[0] + 579u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001D35A0; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 579u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001D35A0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    set32(c.r[2], 0u + 5u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 744u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D35C8u); st8((c.r[16].w[0] + 849u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0036(c, 16u, depth + 1u); else { c.pc = 0x001D8AF0u; return; } if (c.pc != 0x001D35C8u) [[unlikely]] return; }
L_001D35C8:
    c.f[12] = 0u;
    set32(c.r[6], c.r[17].w[0] + 32u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D35E0u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D35E0u) [[unlikely]] return; }
L_001D35E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001D3600:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3614u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x001D3614u) [[unlikely]] return; }
L_001D3614:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D361Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 348u, depth + 1u); else { c.pc = 0x001D3A70u; return; } if (c.pc != 0x001D361Cu) [[unlikely]] return; }
L_001D361C:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001D3638; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8325u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D3648; } }
    c.budget -= 1;
L_001D3638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3640u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 344u, depth + 1u); else { c.pc = 0x001D3970u; return; } if (c.pc != 0x001D3640u) [[unlikely]] return; }
L_001D3640:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D36B8; } }
L_001D3648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3650u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 17u, depth + 1u); else { c.pc = 0x001D8B70u; return; } if (c.pc != 0x001D3650u) [[unlikely]] return; }
L_001D3650:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3658u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 14u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x001D3658u) [[unlikely]] return; }
L_001D3658:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D3690; } }
    set32(c.r[2], 0u + 10u);
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 571u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBDF30000u);
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 46662ull;
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3688u); st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0036(c, 35u, depth + 1u); else { c.pc = 0x001D8DE0u; return; } if (c.pc != 0x001D3688u) [[unlikely]] return; }
L_001D3688:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D36B8; } }
L_001D3690:
    c.f[2] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = ld32((c.r[16].w[0] + 108u));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001D36B8; } }
    st32((c.r[16].w[0] + 104u), c.f[0]);
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 2;
L_001D36B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D36D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D36FCu); set32(c.r[16], 0u + 32u);  if (depth < kMaxDepth) unit_0036(c, 15u, depth + 1u); else { c.pc = 0x001D8A40u; return; } if (c.pc != 0x001D36FCu) [[unlikely]] return; }
L_001D36FC:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], 0u + 34u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; st8((c.r[18].w[0] + 579u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001D3718; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 579u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001D3718:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3720u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 35u, depth + 1u); else { c.pc = 0x001D8DE0u; return; } if (c.pc != 0x001D3720u) [[unlikely]] return; }
L_001D3720:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D372Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 29u, depth + 1u); else { c.pc = 0x001D8C90u; return; } if (c.pc != 0x001D372Cu) [[unlikely]] return; }
L_001D372C:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3744u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D3744u) [[unlikely]] return; }
L_001D3744:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001D3760:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3774u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 348u, depth + 1u); else { c.pc = 0x001D3A70u; return; } if (c.pc != 0x001D3774u) [[unlikely]] return; }
L_001D3774:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D3790; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3788u);  if (depth < kMaxDepth) unit_0034(c, 344u, depth + 1u); else { c.pc = 0x001D3970u; return; } if (c.pc != 0x001D3788u) [[unlikely]] return; }
L_001D3788:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D37B0; } }
L_001D3790:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 709u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 30752u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D37B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D37B0u) [[unlikely]] return; }
L_001D37B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D37C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D37D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 32u, depth + 1u); else { c.pc = 0x001D8D40u; return; } if (c.pc != 0x001D37D4u) [[unlikely]] return; }
L_001D37D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D37DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 38u, depth + 1u); else { c.pc = 0x001D8EC0u; return; } if (c.pc != 0x001D37DCu) [[unlikely]] return; }
L_001D37DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001D3808; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBCF30000u);
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 46662ull;
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D37FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 37u, depth + 1u); else { c.pc = 0x001D8E70u; return; } if (c.pc != 0x001D37FCu) [[unlikely]] return; }
L_001D37FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D3858; } }
    c.budget -= 1;
L_001D3808:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[1] = ld32((c.r[16].w[0] + 8308u));
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], 0u + 1u);  if (t) { goto L_001D3828; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D3828:
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001D3848; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 2;
L_001D3848:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001D3858; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3858u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x001D3858u) [[unlikely]] return; }
L_001D3858:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D3870:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D388Cu); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 17u, depth + 1u); else { c.pc = 0x001D8B70u; return; } if (c.pc != 0x001D388Cu) [[unlikely]] return; }
L_001D388C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3894u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 14u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x001D3894u) [[unlikely]] return; }
L_001D3894:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001D38B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D38A4u);  if (depth < kMaxDepth) unit_0034(c, 344u, depth + 1u); else { c.pc = 0x001D3970u; return; } if (c.pc != 0x001D38A4u) [[unlikely]] return; }
L_001D38A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D3910; } }
    c.budget -= 1;
L_001D38B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D38B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x001D38B8u) [[unlikely]] return; }
L_001D38B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D38C8; } }
    c.r[16].d[0] = c.r[16].d[0] | 1ull;
    c.budget -= 2;
L_001D38C8:
    c.f[2] = ld32((c.r[17].w[0] + 104u));
    c.f[1] = ld32((c.r[17].w[0] + 108u));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001D38F8; } }
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.r[16].d[0] = c.r[16].d[0] | 2ull;
    st32((c.r[17].w[0] + 108u), c.f[0]);
    c.budget -= 4;
L_001D38F8:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001D3910; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D390Cu);  if (depth < kMaxDepth) unit_0034(c, 344u, depth + 1u); else { c.pc = 0x001D3970u; return; } if (c.pc != 0x001D390Cu) [[unlikely]] return; }
L_001D390C:
    c.budget -= 1;
L_001D3910:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D3930:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 709u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D3948; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 709u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001D3968; } }
L_001D3948:
    st32((c.r[4].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    set32(c.r[3], 0u + 3u);
    st8((c.r[4].w[0] + 8287u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 8327u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 1236u), 0u);
    c.budget -= 8;
L_001D3968:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D3970:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    st8((c.r[4].w[0] + 8287u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 8327u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 517u)));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001D39A8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D39A8u); set32(c.r[6], 0u + 128u);  if (depth < kMaxDepth) unit_0034(c, 355u, depth + 1u); else { c.pc = 0x001D3C40u; return; } if (c.pc != 0x001D39A8u) [[unlikely]] return; }
L_001D39A8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 517u)));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D39C8; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D39C4u); set32(c.r[6], 0u + 129u);  if (depth < kMaxDepth) unit_0034(c, 355u, depth + 1u); else { c.pc = 0x001D3C40u; return; } if (c.pc != 0x001D39C4u) [[unlikely]] return; }
L_001D39C4:
    c.budget -= 1;
L_001D39C8:
    set32(c.r[3], 0u + 11u);
    st8((c.r[16].w[0] + 571u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 30u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 1236u), 0u);
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 20u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D3A00; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { goto L_001D3A00; } }
    st8((c.r[4].w[0] + 22u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001D3A00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D3A10:
    c.f[2] = ld32((c.r[4].w[0] + 712u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_001D3A40; } }
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 712u), c.f[0]);  if (t) { goto L_001D3A68; } }
L_001D3A40:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_001D3A68; } }
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_001D3A68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D3A70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 518u)));
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001D3B08; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 517u)));
    c.r[3].d[0] = c.r[6].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D3AC8; } }
    set32(c.r[2], 0u - 2u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    st8((c.r[16].w[0] + 517u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 517u)));
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3AC4u); st8((c.r[16].w[0] + 517u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0034(c, 355u, depth + 1u); else { c.pc = 0x001D3C40u; return; } if (c.pc != 0x001D3AC4u) [[unlikely]] return; }
L_001D3AC4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001D3AC8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 517u)));
    c.r[3].d[0] = c.r[5].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D3BB8; } }
    set32(c.r[2], 0u - 3u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    st8((c.r[16].w[0] + 517u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 517u)));
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3B00u); st8((c.r[16].w[0] + 517u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0034(c, 355u, depth + 1u); else { c.pc = 0x001D3C40u; return; } if (c.pc != 0x001D3B00u) [[unlikely]] return; }
L_001D3B00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001D3BB8; } }
L_001D3B08:
    c.r[3].d[0] = c.r[5].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D3BB8; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 571u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[3].w[0] + 23408u);
    c.f[0] = ld32((c.r[16].w[0] + 736u));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001D3BB8; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 517u)));
    c.r[3].d[0] = c.r[6].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D3B78; } }
    set32(c.r[2], 0u - 2u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    st8((c.r[16].w[0] + 517u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 517u)));
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3B70u); st8((c.r[16].w[0] + 517u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0034(c, 355u, depth + 1u); else { c.pc = 0x001D3C40u; return; } if (c.pc != 0x001D3B70u) [[unlikely]] return; }
L_001D3B70:
    set32(c.r[2], 0u + 2u);
    c.budget -= 2;
L_001D3B78:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 517u)));
    c.r[3].d[0] = c.r[5].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D3BB8; } }
    set32(c.r[2], 0u - 3u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    st8((c.r[16].w[0] + 517u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 517u)));
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3BB0u); st8((c.r[16].w[0] + 517u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0034(c, 355u, depth + 1u); else { c.pc = 0x001D3C40u; return; } if (c.pc != 0x001D3BB0u) [[unlikely]] return; }
L_001D3BB0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 2;
L_001D3BB8:
    c.f[2] = ld32((c.r[16].w[0] + 712u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_001D3C30; } }
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 712u), c.f[0]);  if (t) { goto L_001D3C30; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 517u)));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D3C08; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3C04u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0034(c, 355u, depth + 1u); else { c.pc = 0x001D3C40u; return; } if (c.pc != 0x001D3C04u) [[unlikely]] return; }
L_001D3C04:
    c.budget -= 1;
L_001D3C08:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 517u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D3C28; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3C24u); set32(c.r[6], 0u + 129u);  if (depth < kMaxDepth) unit_0034(c, 355u, depth + 1u); else { c.pc = 0x001D3C40u; return; } if (c.pc != 0x001D3C24u) [[unlikely]] return; }
L_001D3C24:
    c.budget -= 1;
L_001D3C28:
    set32(c.r[2], 0u + 3u);
    c.budget -= 2;
L_001D3C30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D3C40:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[2], 0u + 35u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[29].w[0] + 100u);
    c.f[0] = ld32((c.r[4].w[0] + 2096u));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 2100u));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 2104u));
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.budget -= 20;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001D3CA0; } }
    set32(c.r[2], 0u + 40u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D3CD8; } }
    c.budget -= 1;
L_001D3CA0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 96u);  if (t) { goto L_001D3CC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3CB4u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0045(c, 210u, depth + 1u); else { c.pc = 0x00216220u; return; } if (c.pc != 0x001D3CB4u) [[unlikely]] return; }
L_001D3CB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D3CE8; } }
    c.budget -= 1;
L_001D3CC0:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3CCCu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0045(c, 210u, depth + 1u); else { c.pc = 0x00216220u; return; } if (c.pc != 0x001D3CCCu) [[unlikely]] return; }
L_001D3CCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D3CE8; } }
    c.budget -= 1;
L_001D3CD8:
    c.r[2].d[0] = c.r[18].d[0] & 128ull;
    c.r[5].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3CE8u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0045(c, 208u, depth + 1u); else { c.pc = 0x00216100u; return; } if (c.pc != 0x001D3CE8u) [[unlikely]] return; }
L_001D3CE8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 42u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D3D20; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 82u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D3D20; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D3D20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3D20u);  if (depth < kMaxDepth) unit_004D(c, 64u, depth + 1u); else { c.pc = 0x00235140u; return; } if (c.pc != 0x001D3D20u) [[unlikely]] return; }
L_001D3D20:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3D2Cu); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x001D3D2Cu) [[unlikely]] return; }
L_001D3D2C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D3D50; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D3D60; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_001D3D60; } }
L_001D3D50:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3D5Cu); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0049(c, 393u, depth + 1u); else { c.pc = 0x00227A20u; return; } if (c.pc != 0x001D3D5Cu) [[unlikely]] return; }
L_001D3D5C:
    c.budget -= 1;
L_001D3D60:
    set32(c.r[2], c.r[29].w[0] + 96u);
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3D90u); st32((c.r[2].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x001465C0u; return; } if (c.pc != 0x001D3D90u) [[unlikely]] return; }
L_001D3D90:
    st32((c.r[17].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    set32(c.r[3], ld32((c.r[16].w[0] + 1608u)));
    c.f[0] = c.f[0];
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 64u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D3DC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3DBCu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_001D(c, 96u, depth + 1u); else { c.pc = 0x00175AB0u; return; } if (c.pc != 0x001D3DBCu) [[unlikely]] return; }
L_001D3DBC:
    c.budget -= 1;
L_001D3DC0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_001D3DDC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1608u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 1236u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[4].d[0] & c.r[3].d[0];  if (t) { goto L_001D3DEC; } }
L_001D3DDC:
    set32(c.r[3], ld32((c.r[16].w[0] + 1608u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 1236u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 84u)));
    c.r[20].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
L_001D3DEC:
    c.r[18].d[0] = c.r[18].d[0] & 127ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_001D3DF8:
    set32(c.r[3], 0u + 1u);
    set32(c.r[17], c.r[3].w[0] << (c.r[19].w[0] & 31u));
    c.r[3].d[0] = c.r[20].d[0] & c.r[17].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D3E40; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1608u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 88u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[17].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D3E30; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3E2Cu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 6u, depth + 1u); else { c.pc = 0x0017C0F0u; return; } if (c.pc != 0x001D3E2Cu) [[unlikely]] return; }
L_001D3E2C:
    c.budget -= 1;
L_001D3E30:
    set32(c.r[3], ld32((c.r[16].w[0] + 1236u)));
    c.r[4].d[0] = ~(c.r[17].d[0] | 0ull);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    st32((c.r[16].w[0] + 1236u), c.r[3].w[0]);
    c.budget -= 4;
L_001D3E40:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D3DF8u | kUnwind; return; } goto L_001D3DF8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001D3E70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 708u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3E8Cu); st8((c.r[4].w[0] + 709u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0036(c, 35u, depth + 1u); else { c.pc = 0x001D8DE0u; return; } if (c.pc != 0x001D3E8Cu) [[unlikely]] return; }
L_001D3E8C:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 571u));
    set32(c.r[3], 0u + 9u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 10u);  if (t) { goto L_001D3EA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 571u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001D3F60; } }
    c.budget -= 1;
L_001D3EA8:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 571u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8298u)));
    c.r[1].d[0] = c.r[4].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001D3EE8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    set32(c.r[6], c.r[4].w[0] + 9u);
    set32(c.r[5], 0u + 4u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3EDCu); c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D3EDCu) [[unlikely]] return; }
L_001D3EDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D3F60; } }
    c.budget -= 1;
L_001D3EE8:
    set32(c.r[3], 0u + 56u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 57u);  if (t) { goto L_001D3F00; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001D3F28; } }
    c.budget -= 1;
L_001D3F00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 579u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    set32(c.r[5], 0u + 4u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3F20u); set32(c.r[6], c.r[3].w[0] + 54u);  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D3F20u) [[unlikely]] return; }
L_001D3F20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D3F60; } }
L_001D3F28:
    set32(c.r[3], c.r[4].w[0] - 68u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 71u);  if (t) { goto L_001D3F40; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001D3F60; } }
L_001D3F40:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = 0u;
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 26u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3F58u); set32(c.r[7], 0u + 15u);  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001D3F58u) [[unlikely]] return; }
L_001D3F58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D3F60; } }
L_001D3F60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D3F70:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3FA0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0075(c, 31u, depth + 1u); else { c.pc = 0x002D4A30u; return; } if (c.pc != 0x001D3FA0u) [[unlikely]] return; }
L_001D3FA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3FA8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 44u, depth + 1u); else { c.pc = 0x002D5100u; return; } if (c.pc != 0x001D3FA8u) [[unlikely]] return; }
L_001D3FA8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1625u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001D3FD0; } }
    c.r[4].d[0] = ld16((c.r[20].w[0] + 564u));
    set32(c.r[3], 0u - 129u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0035(c, 30u, depth); } }
    c.budget -= 1;
L_001D3FD0:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 564u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[18], ld32((c.r[20].w[0] + 600u)));  if (t) { [[clang::musttail]] return unit_0035(c, 2u, depth); } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[21], 0u + 16u);  if (t) { goto L_001D3FF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 20u);  if (t) { [[clang::musttail]] return unit_0035(c, 1u, depth); } }
    c.budget -= 1;
L_001D3FF8:
    set32(c.r[17], 0u + 19u);
    c.budget -= 2;
    [[clang::musttail]] return unit_0035(c, 1u, depth);
}

}
