#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_007A[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11,
    0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0,
    0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0,
    16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0,
    0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 27, 0, 0,
    0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 30, 0, 31, 0, 32, 0, 33, 0, 34, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0,
    38, 0, 0, 0, 0, 39, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0,
    0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 58, 0, 59, 0, 60, 0, 0, 61, 0, 0, 0,
    62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 71, 0,
    0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0, 0, 0, 0,
    78, 0, 0, 0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0,
    0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0,
    0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0,
    0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 101, 0, 102, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108,
    0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0,
    119, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0,
    0, 0, 0, 0, 122, 0, 123, 0, 124, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 132, 0, 133, 0, 134, 0, 135, 0, 136, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    141, 0, 0, 0, 0, 142, 0, 143, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    145, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 148, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 153, 0, 154, 0,
    155, 0, 156, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0,
    0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0,
    0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0,
    0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0,
    172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0,
    0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0,
    182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0,
    0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0,
    209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 213, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 217, 0, 218, 0, 219, 0, 220, 0, 221, 0, 222, 0, 223, 0, 224, 0,
    225, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    230, 0, 231, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0,
    0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 247, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 258, 0, 259, 0, 0, 260, 0, 0, 0, 0, 0, 0,
    261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    263, 0, 0, 0, 264, 0, 265, 0, 266, 0, 267, 0, 268, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270,
    0, 0, 271, 0, 272, 0, 0, 0, 273, 0, 274, 0, 275, 0, 276, 0, 277, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 280, 0,
    0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 283, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 0, 286, 0, 287, 0, 288, 0, 289, 0,
    290, 0, 291, 0, 0, 0, 292, 0, 293, 0, 294, 0, 295, 0, 296, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 299, 0, 300, 0, 301, 0, 302,
    0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 309, 0, 310, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 312, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 317, 0, 318, 0, 319, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 323,
    0, 324, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 328, 0, 329, 0, 0, 0, 330, 0,
    331, 0, 332, 0, 333, 0, 334, 0, 335, 0, 336, 0, 0, 0, 0, 337, 0, 0, 0, 338, 0, 339, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 341, 0, 0, 0, 342, 0, 343, 0, 344, 0, 345, 0, 346, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 349, 0, 350,
    0, 351, 0, 352, 353, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0,
    359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 364, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    366, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370,
    0, 371, 0, 372, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 378, 0, 0, 379, 0, 380, 0, 381, 0, 382, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 385, 0, 0, 0, 386, 0, 387, 0, 0, 0, 388, 0,
    389, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 393, 0, 0, 0,
    0, 394, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 396, 0, 0, 397, 0, 0, 398, 0, 399, 0, 400, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_007A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002E8000;
    case 2u: goto L_002E8018;
    case 3u: goto L_002E8040;
    case 4u: goto L_002E8170;
    case 5u: goto L_002E8214;
    case 6u: goto L_002E8228;
    case 7u: goto L_002E828C;
    case 8u: goto L_002E82A0;
    case 9u: goto L_002E8304;
    case 10u: goto L_002E8318;
    case 11u: goto L_002E837C;
    case 12u: goto L_002E8390;
    case 13u: goto L_002E83F4;
    case 14u: goto L_002E8408;
    case 15u: goto L_002E846C;
    case 16u: goto L_002E8480;
    case 17u: goto L_002E84E4;
    case 18u: goto L_002E84F8;
    case 19u: goto L_002E855C;
    case 20u: goto L_002E8570;
    case 21u: goto L_002E8590;
    case 22u: goto L_002E8650;
    case 23u: goto L_002E866C;
    case 24u: goto L_002E86B4;
    case 25u: goto L_002E86D0;
    case 26u: goto L_002E86EC;
    case 27u: goto L_002E86F4;
    case 28u: goto L_002E8710;
    case 29u: goto L_002E8740;
    case 30u: goto L_002E8788;
    case 31u: goto L_002E8790;
    case 32u: goto L_002E8798;
    case 33u: goto L_002E87A0;
    case 34u: goto L_002E87A8;
    case 35u: goto L_002E87B0;
    case 36u: goto L_002E87C4;
    case 37u: goto L_002E87E8;
    case 38u: goto L_002E8800;
    case 39u: goto L_002E8814;
    case 40u: goto L_002E881C;
    case 41u: goto L_002E882C;
    case 42u: goto L_002E8840;
    case 43u: goto L_002E884C;
    case 44u: goto L_002E8864;
    case 45u: goto L_002E8878;
    case 46u: goto L_002E88A8;
    case 47u: goto L_002E88B0;
    case 48u: goto L_002E88C0;
    case 49u: goto L_002E88D8;
    case 50u: goto L_002E8904;
    case 51u: goto L_002E892C;
    case 52u: goto L_002E8948;
    case 53u: goto L_002E895C;
    case 54u: goto L_002E8970;
    case 55u: goto L_002E8984;
    case 56u: goto L_002E89A0;
    case 57u: goto L_002E89CC;
    case 58u: goto L_002E89D4;
    case 59u: goto L_002E89DC;
    case 60u: goto L_002E89E4;
    case 61u: goto L_002E89F0;
    case 62u: goto L_002E8A00;
    case 63u: goto L_002E8A10;
    case 64u: goto L_002E8A2C;
    case 65u: goto L_002E8A40;
    case 66u: goto L_002E8A60;
    case 67u: goto L_002E8A94;
    case 68u: goto L_002E8AC0;
    case 69u: goto L_002E8AD8;
    case 70u: goto L_002E8AF0;
    case 71u: goto L_002E8AF8;
    case 72u: goto L_002E8B10;
    case 73u: goto L_002E8B28;
    case 74u: goto L_002E8B30;
    case 75u: goto L_002E8B48;
    case 76u: goto L_002E8B60;
    case 77u: goto L_002E8B68;
    case 78u: goto L_002E8B80;
    case 79u: goto L_002E8B98;
    case 80u: goto L_002E8BA0;
    case 81u: goto L_002E8BB8;
    case 82u: goto L_002E8BD0;
    case 83u: goto L_002E8BD8;
    case 84u: goto L_002E8BF0;
    case 85u: goto L_002E8C08;
    case 86u: goto L_002E8C1C;
    case 87u: goto L_002E8C44;
    case 88u: goto L_002E8C70;
    case 89u: goto L_002E8C90;
    case 90u: goto L_002E8CA4;
    case 91u: goto L_002E8CD0;
    case 92u: goto L_002E8CDC;
    case 93u: goto L_002E8CF4;
    case 94u: goto L_002E8D10;
    case 95u: goto L_002E8D24;
    case 96u: goto L_002E8D4C;
    case 97u: goto L_002E8D60;
    case 98u: goto L_002E8D70;
    case 99u: goto L_002E8DA0;
    case 100u: goto L_002E8DB0;
    case 101u: goto L_002E8DB8;
    case 102u: goto L_002E8DC0;
    case 103u: goto L_002E8DC8;
    case 104u: goto L_002E8E10;
    case 105u: goto L_002E8E20;
    case 106u: goto L_002E8E30;
    case 107u: goto L_002E8E68;
    case 108u: goto L_002E8E7C;
    case 109u: goto L_002E8E90;
    case 110u: goto L_002E8EB0;
    case 111u: goto L_002E8F08;
    case 112u: goto L_002E9208;
    case 113u: goto L_002E92BC;
    case 114u: goto L_002E92E0;
    case 115u: goto L_002E9338;
    case 116u: goto L_002E93D4;
    case 117u: goto L_002E95B0;
    case 118u: goto L_002E95F0;
    case 119u: goto L_002E9600;
    case 120u: goto L_002E9610;
    case 121u: goto L_002E9674;
    case 122u: goto L_002E9690;
    case 123u: goto L_002E9698;
    case 124u: goto L_002E96A0;
    case 125u: goto L_002E96A8;
    case 126u: goto L_002E96B8;
    case 127u: goto L_002E96D0;
    case 128u: goto L_002E96F0;
    case 129u: goto L_002E9730;
    case 130u: goto L_002E9750;
    case 131u: goto L_002E9760;
    case 132u: goto L_002E979C;
    case 133u: goto L_002E97A4;
    case 134u: goto L_002E97AC;
    case 135u: goto L_002E97B4;
    case 136u: goto L_002E97BC;
    case 137u: goto L_002E97C4;
    case 138u: goto L_002E97D0;
    case 139u: goto L_002E97F0;
    case 140u: goto L_002E9840;
    case 141u: goto L_002E9880;
    case 142u: goto L_002E9894;
    case 143u: goto L_002E989C;
    case 144u: goto L_002E98A4;
    case 145u: goto L_002E9900;
    case 146u: goto L_002E9910;
    case 147u: goto L_002E9924;
    case 148u: goto L_002E992C;
    case 149u: goto L_002E9934;
    case 150u: goto L_002E9944;
    case 151u: goto L_002E9960;
    case 152u: goto L_002E9968;
    case 153u: goto L_002E9970;
    case 154u: goto L_002E9978;
    case 155u: goto L_002E9980;
    case 156u: goto L_002E9988;
    case 157u: goto L_002E9994;
    case 158u: goto L_002E99B0;
    case 159u: goto L_002E99D0;
    case 160u: goto L_002E99E0;
    case 161u: goto L_002E9AF4;
    case 162u: goto L_002E9B08;
    case 163u: goto L_002E9BB4;
    case 164u: goto L_002E9BCC;
    case 165u: goto L_002E9C64;
    case 166u: goto L_002E9C88;
    case 167u: goto L_002E9CA0;
    case 168u: goto L_002E9CF4;
    case 169u: goto L_002E9D14;
    case 170u: goto L_002E9D30;
    case 171u: goto L_002E9D60;
    case 172u: goto L_002E9D80;
    case 173u: goto L_002E9F1C;
    case 174u: goto L_002E9F38;
    case 175u: goto L_002E9F54;
    case 176u: goto L_002E9F74;
    case 177u: goto L_002E9F94;
    case 178u: goto L_002E9FB8;
    case 179u: goto L_002E9FD8;
    case 180u: goto L_002EA03C;
    case 181u: goto L_002EA064;
    case 182u: goto L_002EA080;
    case 183u: goto L_002EA09C;
    case 184u: goto L_002EA0B8;
    case 185u: goto L_002EA0C4;
    case 186u: goto L_002EA0E4;
    case 187u: goto L_002EA0F8;
    case 188u: goto L_002EA118;
    case 189u: goto L_002EA138;
    case 190u: goto L_002EA16C;
    case 191u: goto L_002EA1A4;
    case 192u: goto L_002EA1C4;
    case 193u: goto L_002EA234;
    case 194u: goto L_002EA278;
    case 195u: goto L_002EA2C0;
    case 196u: goto L_002EA330;
    case 197u: goto L_002EA384;
    case 198u: goto L_002EA3A0;
    case 199u: goto L_002EA3B0;
    case 200u: goto L_002EA3D0;
    case 201u: goto L_002EA4B0;
    case 202u: goto L_002EA4E0;
    case 203u: goto L_002EA520;
    case 204u: goto L_002EA540;
    case 205u: goto L_002EA598;
    case 206u: goto L_002EA600;
    case 207u: goto L_002EA648;
    case 208u: goto L_002EA660;
    case 209u: goto L_002EA680;
    case 210u: goto L_002EA720;
    case 211u: goto L_002EA730;
    case 212u: goto L_002EA748;
    case 213u: goto L_002EA750;
    case 214u: goto L_002EA758;
    case 215u: goto L_002EA800;
    case 216u: goto L_002EA838;
    case 217u: goto L_002EA840;
    case 218u: goto L_002EA848;
    case 219u: goto L_002EA850;
    case 220u: goto L_002EA858;
    case 221u: goto L_002EA860;
    case 222u: goto L_002EA868;
    case 223u: goto L_002EA870;
    case 224u: goto L_002EA878;
    case 225u: goto L_002EA880;
    case 226u: goto L_002EA8A0;
    case 227u: goto L_002EA930;
    case 228u: goto L_002EA950;
    case 229u: goto L_002EA9AC;
    case 230u: goto L_002EAA80;
    case 231u: goto L_002EAA88;
    case 232u: goto L_002EAA90;
    case 233u: goto L_002EAAAC;
    case 234u: goto L_002EAAD0;
    case 235u: goto L_002EABA4;
    case 236u: goto L_002EABB8;
    case 237u: goto L_002EABCC;
    case 238u: goto L_002EAC58;
    case 239u: goto L_002EACB4;
    case 240u: goto L_002EACD0;
    case 241u: goto L_002EACE0;
    case 242u: goto L_002EACF8;
    case 243u: goto L_002EAD04;
    case 244u: goto L_002EAD18;
    case 245u: goto L_002EAD70;
    case 246u: goto L_002EAD9C;
    case 247u: goto L_002EADB8;
    case 248u: goto L_002EADC4;
    case 249u: goto L_002EAE34;
    case 250u: goto L_002EAE3C;
    case 251u: goto L_002EAF2C;
    case 252u: goto L_002EAF44;
    case 253u: goto L_002EAFB0;
    case 254u: goto L_002EAFC0;
    case 255u: goto L_002EAFD0;
    case 256u: goto L_002EAFE0;
    case 257u: goto L_002EB030;
    case 258u: goto L_002EB050;
    case 259u: goto L_002EB058;
    case 260u: goto L_002EB064;
    case 261u: goto L_002EB080;
    case 262u: goto L_002EB0D0;
    case 263u: goto L_002EB100;
    case 264u: goto L_002EB110;
    case 265u: goto L_002EB118;
    case 266u: goto L_002EB120;
    case 267u: goto L_002EB128;
    case 268u: goto L_002EB130;
    case 269u: goto L_002EB150;
    case 270u: goto L_002EB17C;
    case 271u: goto L_002EB188;
    case 272u: goto L_002EB190;
    case 273u: goto L_002EB1A0;
    case 274u: goto L_002EB1A8;
    case 275u: goto L_002EB1B0;
    case 276u: goto L_002EB1B8;
    case 277u: goto L_002EB1C0;
    case 278u: goto L_002EB1C8;
    case 279u: goto L_002EB1EC;
    case 280u: goto L_002EB1F8;
    case 281u: goto L_002EB218;
    case 282u: goto L_002EB228;
    case 283u: goto L_002EB230;
    case 284u: goto L_002EB238;
    case 285u: goto L_002EB254;
    case 286u: goto L_002EB260;
    case 287u: goto L_002EB268;
    case 288u: goto L_002EB270;
    case 289u: goto L_002EB278;
    case 290u: goto L_002EB280;
    case 291u: goto L_002EB288;
    case 292u: goto L_002EB298;
    case 293u: goto L_002EB2A0;
    case 294u: goto L_002EB2A8;
    case 295u: goto L_002EB2B0;
    case 296u: goto L_002EB2B8;
    case 297u: goto L_002EB2CC;
    case 298u: goto L_002EB2DC;
    case 299u: goto L_002EB2E4;
    case 300u: goto L_002EB2EC;
    case 301u: goto L_002EB2F4;
    case 302u: goto L_002EB2FC;
    case 303u: goto L_002EB308;
    case 304u: goto L_002EB32C;
    case 305u: goto L_002EB338;
    case 306u: goto L_002EB390;
    case 307u: goto L_002EB3AC;
    case 308u: goto L_002EB3BC;
    case 309u: goto L_002EB3C4;
    case 310u: goto L_002EB3CC;
    case 311u: goto L_002EB3EC;
    case 312u: goto L_002EB3F8;
    case 313u: goto L_002EB448;
    case 314u: goto L_002EB458;
    case 315u: goto L_002EB488;
    case 316u: goto L_002EB4A8;
    case 317u: goto L_002EB4B8;
    case 318u: goto L_002EB4C0;
    case 319u: goto L_002EB4C8;
    case 320u: goto L_002EB4D0;
    case 321u: goto L_002EB4E4;
    case 322u: goto L_002EB4F4;
    case 323u: goto L_002EB4FC;
    case 324u: goto L_002EB504;
    case 325u: goto L_002EB510;
    case 326u: goto L_002EB528;
    case 327u: goto L_002EB554;
    case 328u: goto L_002EB560;
    case 329u: goto L_002EB568;
    case 330u: goto L_002EB578;
    case 331u: goto L_002EB580;
    case 332u: goto L_002EB588;
    case 333u: goto L_002EB590;
    case 334u: goto L_002EB598;
    case 335u: goto L_002EB5A0;
    case 336u: goto L_002EB5A8;
    case 337u: goto L_002EB5BC;
    case 338u: goto L_002EB5CC;
    case 339u: goto L_002EB5D4;
    case 340u: goto L_002EB5E0;
    case 341u: goto L_002EB610;
    case 342u: goto L_002EB620;
    case 343u: goto L_002EB628;
    case 344u: goto L_002EB630;
    case 345u: goto L_002EB638;
    case 346u: goto L_002EB640;
    case 347u: goto L_002EB65C;
    case 348u: goto L_002EB66C;
    case 349u: goto L_002EB674;
    case 350u: goto L_002EB67C;
    case 351u: goto L_002EB684;
    case 352u: goto L_002EB68C;
    case 353u: goto L_002EB690;
    case 354u: goto L_002EB6B0;
    case 355u: goto L_002EB6D4;
    case 356u: goto L_002EB730;
    case 357u: goto L_002EB73C;
    case 358u: goto L_002EB760;
    case 359u: goto L_002EB780;
    case 360u: goto L_002EB7B8;
    case 361u: goto L_002EB7C8;
    case 362u: goto L_002EB810;
    case 363u: goto L_002EB830;
    case 364u: goto L_002EB898;
    case 365u: goto L_002EB8A4;
    case 366u: goto L_002EB900;
    case 367u: goto L_002EB910;
    case 368u: goto L_002EB920;
    case 369u: goto L_002EB950;
    case 370u: goto L_002EB97C;
    case 371u: goto L_002EB984;
    case 372u: goto L_002EB98C;
    case 373u: goto L_002EB99C;
    case 374u: goto L_002EB9D0;
    case 375u: goto L_002EB9F8;
    case 376u: goto L_002EBAA0;
    case 377u: goto L_002EBAC0;
    case 378u: goto L_002EBB14;
    case 379u: goto L_002EBB20;
    case 380u: goto L_002EBB28;
    case 381u: goto L_002EBB30;
    case 382u: goto L_002EBB38;
    case 383u: goto L_002EBB50;
    case 384u: goto L_002EBBC8;
    case 385u: goto L_002EBBD0;
    case 386u: goto L_002EBBE0;
    case 387u: goto L_002EBBE8;
    case 388u: goto L_002EBBF8;
    case 389u: goto L_002EBC00;
    case 390u: goto L_002EBC20;
    case 391u: goto L_002EBC30;
    case 392u: goto L_002EBC64;
    case 393u: goto L_002EBC70;
    case 394u: goto L_002EBC84;
    case 395u: goto L_002EBC9C;
    case 396u: goto L_002EBD88;
    case 397u: goto L_002EBD94;
    case 398u: goto L_002EBDA0;
    case 399u: goto L_002EBDA8;
    case 400u: goto L_002EBDB0;
    case 401u: goto L_002EBDD0;
    case 402u: goto L_002EBDE0;
    case 403u: goto L_002EBDF0;
    case 404u: goto L_002EBF60;
    case 405u: goto L_002EBF70;
    case 406u: goto L_002EBFA0;
    default: bad_entry(c, 0x002E8000u); return;
    }
L_002E8000:
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[9].w[0] + 48u), c.f[0]);
    c.budget -= 6;
L_002E8018:
    c.r[8].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[9].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10620000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[4].d[0] = c.r[3].d[0] | 19923ull;
    set32(c.r[5], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    c.r[12].d[0] = c.r[7].d[0] | 26215ull;
    c.r[3].d[0] = c.r[3].d[0] | 34079ull;
    c.budget -= 10;
L_002E8040:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_002E8150; } }
    c.f[1] = ld32((c.r[6].w[0] + 24u));
    c.f[0] = ld32((c.r[6].w[0] + 16u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 16u), c.f[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 44u)));
    c.f[1] = ld32((c.r[6].w[0] + 16u));
    c.f[0] = c.r[7].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E8088; } }
    st32((c.r[6].w[0] + 16u), c.f[0]);
    st16((c.r[9].w[0] + 40u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 3;
L_002E8088:
    c.f[0] = ld32((c.r[6].w[0] + 16u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.r[1].d[0] = c.r[7].sd[0] < 10000ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002E80A8; } }
    set32(c.r[7], 0u + 9999u);
    c.budget -= 1;
L_002E80A8:
    set32(c.r[11], c.r[7].w[0] >> 31);
    mmi::mult(c, 0, c.r[4].w[0], c.r[7].w[0]);
    c.r[10].d[0] = c.hi.d[0];
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 6));
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st8((c.r[6].w[0] + 35u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 35u)));
    set32(c.r[10], c.r[11].w[0] << 5);
    set32(c.r[10], c.r[10].w[0] - c.r[11].w[0]);
    set32(c.r[10], c.r[10].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[10], c.r[10].w[0] << 3);
    set32(c.r[7], c.r[7].w[0] - c.r[10].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[7].w[0]);
    set32(c.r[11], c.r[7].w[0] >> 31);
    c.r[10].d[0] = c.hi.d[0];
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 5));
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st8((c.r[6].w[0] + 34u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 34u)));
    set32(c.r[10], c.r[11].w[0] << 2);
    set32(c.r[11], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[10], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[11].w[0] + c.r[10].w[0]);
    set32(c.r[10], c.r[10].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] - c.r[10].w[0]);
    mmi::mult(c, 0, c.r[12].w[0], c.r[7].w[0]);
    set32(c.r[11], c.r[7].w[0] >> 31);
    c.r[10].d[0] = c.hi.d[0];
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 2));
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st8((c.r[6].w[0] + 33u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 33u)));
    set32(c.r[10], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[10], c.r[10].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] - c.r[10].w[0]);
    st8((c.r[6].w[0] + 32u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 42;
L_002E8150:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[7].d[0] = c.r[8].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[9], c.r[9].w[0] + 2u);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E8040u | kUnwind; return; } goto L_002E8040; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E8170:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 8u);
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    c.f[1] = c.r[7].w[0];
    c.f[0] = ld32((c.r[4].w[0] + 352u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[14] = c.r[2].w[0];
    set32(c.r[17], c.r[4].w[0] + 304u);
    set32(c.r[3], c.r[3].w[0] - 9215u);
    set32(c.r[16], c.r[29].w[0] + 100u);
    set32(c.r[6], c.r[6].w[0] - 9216u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.f[15] = c.f[14];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 88u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 92u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 96u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 339u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 304u)));
    set32(c.r[4], c.r[7].w[0] << 1);
    set32(c.r[7], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[6], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[7].w[0] + 1680u);
    set32(c.r[4], 0u + 1u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.budget -= 41;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8214u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x002E8214u) [[unlikely]] return; }
L_002E8214:
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8228u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 34u, depth + 1u); else { c.pc = 0x002D8890u; return; } if (c.pc != 0x002E8228u) [[unlikely]] return; }
L_002E8228:
    set32(c.r[7], ld32((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[14] = c.r[2].w[0];
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 34u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 9216u);
    set32(c.r[3], c.r[3].w[0] - 9215u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.f[15] = c.f[14];
    set32(c.r[7], ld32((c.r[7].w[0] + 32u)));
    set32(c.r[2], c.r[8].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[7].w[0] + 1920u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E828Cu); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x002E828Cu) [[unlikely]] return; }
L_002E828C:
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E82A0u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 34u, depth + 1u); else { c.pc = 0x002D8890u; return; } if (c.pc != 0x002E82A0u) [[unlikely]] return; }
L_002E82A0:
    set32(c.r[7], ld32((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[14] = c.r[2].w[0];
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 33u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 9216u);
    set32(c.r[3], c.r[3].w[0] - 9215u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.f[15] = c.f[14];
    set32(c.r[7], ld32((c.r[7].w[0] + 32u)));
    set32(c.r[2], c.r[8].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[7].w[0] + 2160u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8304u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x002E8304u) [[unlikely]] return; }
L_002E8304:
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8318u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 34u, depth + 1u); else { c.pc = 0x002D8890u; return; } if (c.pc != 0x002E8318u) [[unlikely]] return; }
L_002E8318:
    set32(c.r[7], ld32((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[14] = c.r[2].w[0];
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 32u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 9216u);
    set32(c.r[3], c.r[3].w[0] - 9215u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.f[15] = c.f[14];
    set32(c.r[7], ld32((c.r[7].w[0] + 32u)));
    set32(c.r[2], c.r[8].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[7].w[0] + 2400u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E837Cu); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x002E837Cu) [[unlikely]] return; }
L_002E837C:
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8390u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 34u, depth + 1u); else { c.pc = 0x002D8890u; return; } if (c.pc != 0x002E8390u) [[unlikely]] return; }
L_002E8390:
    set32(c.r[7], ld32((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[14] = c.r[2].w[0];
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 39u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 9216u);
    set32(c.r[3], c.r[3].w[0] - 9215u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.f[15] = c.f[14];
    set32(c.r[7], ld32((c.r[7].w[0] + 32u)));
    set32(c.r[2], c.r[8].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[7].w[0] + 2640u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E83F4u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x002E83F4u) [[unlikely]] return; }
L_002E83F4:
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8408u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 34u, depth + 1u); else { c.pc = 0x002D8890u; return; } if (c.pc != 0x002E8408u) [[unlikely]] return; }
L_002E8408:
    set32(c.r[7], ld32((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[14] = c.r[2].w[0];
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 38u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 9216u);
    set32(c.r[3], c.r[3].w[0] - 9215u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.f[15] = c.f[14];
    set32(c.r[7], ld32((c.r[7].w[0] + 32u)));
    set32(c.r[2], c.r[8].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[7].w[0] + 2880u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E846Cu); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x002E846Cu) [[unlikely]] return; }
L_002E846C:
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8480u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 34u, depth + 1u); else { c.pc = 0x002D8890u; return; } if (c.pc != 0x002E8480u) [[unlikely]] return; }
L_002E8480:
    set32(c.r[7], ld32((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[14] = c.r[2].w[0];
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 37u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 9216u);
    set32(c.r[3], c.r[3].w[0] - 9215u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.f[15] = c.f[14];
    set32(c.r[7], ld32((c.r[7].w[0] + 32u)));
    set32(c.r[2], c.r[8].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[7].w[0] + 3120u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E84E4u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x002E84E4u) [[unlikely]] return; }
L_002E84E4:
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E84F8u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 34u, depth + 1u); else { c.pc = 0x002D8890u; return; } if (c.pc != 0x002E84F8u) [[unlikely]] return; }
L_002E84F8:
    set32(c.r[7], ld32((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[14] = c.r[2].w[0];
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 36u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 9216u);
    set32(c.r[3], c.r[3].w[0] - 9215u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.f[15] = c.f[14];
    set32(c.r[7], ld32((c.r[7].w[0] + 32u)));
    set32(c.r[2], c.r[8].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[7].w[0] + 3360u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E855Cu); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x002E855Cu) [[unlikely]] return; }
L_002E855C:
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8570u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 34u, depth + 1u); else { c.pc = 0x002D8890u; return; } if (c.pc != 0x002E8570u) [[unlikely]] return; }
L_002E8570:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002E8590:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], c.r[4].w[0] + 304u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 350u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 348u)));
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E85C8; } }
    c.f[20] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E8648; } }
    c.budget -= 1;
L_002E85C8:
    c.f[3] = ld32((c.r[16].w[0] + 16u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[3]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E8618; } }
    c.f[1] = c.r[2].w[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 2u, c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[3], c.f[1]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[20] = fp::sub(c.f[2], c.f[1]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; c.f[20] = fp::mul(c.f[20], c.f[0]);  if (t) { goto L_002E8648; } }
L_002E8618:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    fpu_div(c, 2u, c.f[3], c.f[1]);
    c.f[1] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[0], c.f[3]);
    c.f[20] = fp::sub(c.f[2], c.f[1]);
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.budget -= 12;
L_002E8648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8650u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x002E8650u) [[unlikely]] return; }
L_002E8650:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], 0u + 17u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E866Cu); set32(c.r[4], c.r[2].w[0] + 4320u);  if (depth < kMaxDepth) unit_0076(c, 32u, depth + 1u); else { c.pc = 0x002D8800u; return; } if (c.pc != 0x002E866Cu) [[unlikely]] return; }
L_002E866C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E86B4u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x002E86B4u) [[unlikely]] return; }
L_002E86B4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], 0u + 17u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E86D0u); set32(c.r[4], c.r[2].w[0] + 960u);  if (depth < kMaxDepth) unit_0076(c, 32u, depth + 1u); else { c.pc = 0x002D8800u; return; } if (c.pc != 0x002E86D0u) [[unlikely]] return; }
L_002E86D0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], 0u + 17u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E86ECu); set32(c.r[4], c.r[2].w[0] + 4080u);  if (depth < kMaxDepth) unit_0076(c, 32u, depth + 1u); else { c.pc = 0x002D8800u; return; } if (c.pc != 0x002E86ECu) [[unlikely]] return; }
L_002E86EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E86F4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x002E86F4u) [[unlikely]] return; }
L_002E86F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E8710:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 9192u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002E8000u < 16384u) { entry = entries_007A[(t - 0x002E8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002E8740:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 3u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_002E8890; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E8770; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E8988; } }
    c.budget -= 1;
L_002E8770:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01170000u);
    c.r[4].d[0] = c.r[2].d[0] | 61440ull;
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[28].w[0] - 23208u), c.r[4].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8788u); set32(c.r[6], 0u + 988u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x002E8788u) [[unlikely]] return; }
L_002E8788:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8790u);  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x002E8790u) [[unlikely]] return; }
L_002E8790:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8798u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 384u, depth + 1u); else { c.pc = 0x0020F700u; return; } if (c.pc != 0x002E8798u) [[unlikely]] return; }
L_002E8798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E87A0u);  if (depth < kMaxDepth) unit_004D(c, 130u, depth + 1u); else { c.pc = 0x002362E0u; return; } if (c.pc != 0x002E87A0u) [[unlikely]] return; }
L_002E87A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E87A8u);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x002E87A8u) [[unlikely]] return; }
L_002E87A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E87B0u);  if (depth < kMaxDepth) unit_000B(c, 24u, depth + 1u); else { c.pc = 0x0012C850u; return; } if (c.pc != 0x002E87B0u) [[unlikely]] return; }
L_002E87B0:
    set32(c.r[4], ld32((c.r[28].w[0] - 23208u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01170000u);
    c.r[5].d[0] = c.r[2].d[0] | 62428ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E87C4u); c.r[6].sd[0] = static_cast<std::int32_t>(0x01FE0000u);  if (depth < kMaxDepth) unit_0079(c, 141u, depth + 1u); else { c.pc = 0x002E6F00u; return; } if (c.pc != 0x002E87C4u) [[unlikely]] return; }
L_002E87C4:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 47u)));
    c.r[2].d[0] = c.r[2].d[0] & 36ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E87F0; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 23208u)));
    set32(c.r[5], 0u + 3423u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E87E8u); set32(c.r[4], c.r[6].w[0] + 12u);  if (depth < kMaxDepth) unit_0079(c, 151u, depth + 1u); else { c.pc = 0x002E7010u; return; } if (c.pc != 0x002E87E8u) [[unlikely]] return; }
L_002E87E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E8800; } }
L_002E87F0:
    set32(c.r[6], ld32((c.r[28].w[0] - 23208u)));
    set32(c.r[5], 0u + 3421u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8800u); set32(c.r[4], c.r[6].w[0] + 12u);  if (depth < kMaxDepth) unit_0079(c, 151u, depth + 1u); else { c.pc = 0x002E7010u; return; } if (c.pc != 0x002E8800u) [[unlikely]] return; }
L_002E8800:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 29168u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8814u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x002E8814u) [[unlikely]] return; }
L_002E8814:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E881Cu);  if (depth < kMaxDepth) unit_0048(c, 275u, depth + 1u); else { c.pc = 0x00223E50u; return; } if (c.pc != 0x002E881Cu) [[unlikely]] return; }
L_002E881C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00210000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E882Cu); set32(c.r[4], c.r[4].w[0] + 9776u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x002E882Cu) [[unlikely]] return; }
L_002E882C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 9984u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8840u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x002E8840u) [[unlikely]] return; }
L_002E8840:
    set32(c.r[5], ld32((c.r[28].w[0] - 23208u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E884Cu); set32(c.r[4], c.r[5].w[0] + 96u);  if (depth < kMaxDepth) unit_007C(c, 72u, depth + 1u); else { c.pc = 0x002F0530u; return; } if (c.pc != 0x002E884Cu) [[unlikely]] return; }
L_002E884C:
    set32(c.r[2], ld32((c.r[28].w[0] - 23208u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[4], c.r[4].w[0] + 1440u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8864u); set32(c.r[6], c.r[2].w[0] + 96u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x002E8864u) [[unlikely]] return; }
L_002E8864:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 29168u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8878u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x002E8878u) [[unlikely]] return; }
L_002E8878:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002E8988; } }
    c.budget -= 1;
L_002E8890:
    set32(c.r[3], ld32((c.r[28].w[0] - 23208u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 592u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[4], c.r[3].w[0] + 12u);  if (t) { goto L_002E8988; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E88A8u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0079(c, 155u, depth + 1u); else { c.pc = 0x002E7090u; return; } if (c.pc != 0x002E88A8u) [[unlikely]] return; }
L_002E88A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E88B0u);  if (depth < kMaxDepth) unit_000B(c, 35u, depth + 1u); else { c.pc = 0x0012CB40u; return; } if (c.pc != 0x002E88B0u) [[unlikely]] return; }
L_002E88B0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23208u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E88C0u); set32(c.r[5], c.r[2].w[0] + 12u);  if (depth < kMaxDepth) unit_0077(c, 40u, depth + 1u); else { c.pc = 0x002DCFE0u; return; } if (c.pc != 0x002E88C0u) [[unlikely]] return; }
L_002E88C0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23208u)));
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] + 596u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 47u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 6;
L_002E88D8:
    set32(c.r[2], c.r[3].w[0] << (c.r[5].w[0] & 31u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E8910; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23208u)));
    c.r[5].d[0] = c.r[5].d[0] << 56;
    set32(c.r[4], ld32((c.r[2].w[0] + 596u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8904u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (depth < kMaxDepth) unit_0077(c, 61u, depth + 1u); else { c.pc = 0x002DD370u; return; } if (c.pc != 0x002E8904u) [[unlikely]] return; }
L_002E8904:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E8920; } }
    c.budget -= 1;
L_002E8910:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E88D8u | kUnwind; return; } goto L_002E88D8; } }
L_002E8920:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E892Cu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x002E892Cu) [[unlikely]] return; }
L_002E892C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8948u); st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0066(c, 98u, depth + 1u); else { c.pc = 0x002991B0u; return; } if (c.pc != 0x002E8948u) [[unlikely]] return; }
L_002E8948:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002E8968; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E895Cu);  if (depth < kMaxDepth) unit_0066(c, 98u, depth + 1u); else { c.pc = 0x002991B0u; return; } if (c.pc != 0x002E895Cu) [[unlikely]] return; }
L_002E895C:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002E8988; } }
L_002E8968:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8970u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_004E(c, 56u, depth + 1u); else { c.pc = 0x00238820u; return; } if (c.pc != 0x002E8970u) [[unlikely]] return; }
L_002E8970:
    set32(c.r[3], 0u + 46u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 45u);  if (t) { goto L_002E8988; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8984u);  if (depth < kMaxDepth) unit_004E(c, 35u, depth + 1u); else { c.pc = 0x002382B0u; return; } if (c.pc != 0x002E8984u) [[unlikely]] return; }
L_002E8984:
    c.budget -= 1;
L_002E8988:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002E89A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 9168u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E89CCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E89CCu) [[unlikely]] return; }
L_002E89CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E89D4u);  if (depth < kMaxDepth) unit_006B(c, 17u, depth + 1u); else { c.pc = 0x002AC350u; return; } if (c.pc != 0x002E89D4u) [[unlikely]] return; }
L_002E89D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E89DCu); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x002E89DCu) [[unlikely]] return; }
L_002E89DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E89E4u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x002E89E4u) [[unlikely]] return; }
L_002E89E4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E89F0u); set32(c.r[4], c.r[4].w[0] - 15024u);  if (depth < kMaxDepth) unit_0043(c, 416u, depth + 1u); else { c.pc = 0x0020FEF0u; return; } if (c.pc != 0x002E89F0u) [[unlikely]] return; }
L_002E89F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002E8A00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8A10u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x002E8A10u) [[unlikely]] return; }
L_002E8A10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E8A30; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8A2Cu); st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_007A(c, 65u, depth + 1u); else { c.pc = 0x002E8A40u; return; } if (c.pc != 0x002E8A2Cu) [[unlikely]] return; }
L_002E8A2C:
    c.budget -= 1;
L_002E8A30:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002E8A40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 47u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 8;
L_002E8A60:
    set32(c.r[16], c.r[5].w[0] << (c.r[17].w[0] & 31u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[16].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E8C50; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23208u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8A94u); set32(c.r[5], c.r[2].w[0] + 12u);  if (depth < kMaxDepth) unit_0077(c, 40u, depth + 1u); else { c.pc = 0x002DCFE0u; return; } if (c.pc != 0x002E8A94u) [[unlikely]] return; }
L_002E8A94:
    set32(c.r[3], ld32((c.r[28].w[0] - 23208u)));
    c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[3].w[0] + 600u), c.r[2].w[0]);  if (t) { goto L_002E8C08; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 19616u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002E8000u < 16384u) { entry = entries_007A[(t - 0x002E8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002E8AC0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23208u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[6], 0u + 192u);
    set32(c.r[5], c.r[5].w[0] + 7472u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8AD8u); set32(c.r[4], c.r[2].w[0] + 604u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x002E8AD8u) [[unlikely]] return; }
L_002E8AD8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23208u)));
    c.r[5].d[0] = c.r[17].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[4], ld32((c.r[2].w[0] + 600u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8AF0u); set32(c.r[6], c.r[2].w[0] + 604u);  if (depth < kMaxDepth) unit_0077(c, 369u, depth + 1u); else { c.pc = 0x002DF5F0u; return; } if (c.pc != 0x002E8AF0u) [[unlikely]] return; }
L_002E8AF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E8C08; } }
L_002E8AF8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23208u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[6], 0u + 192u);
    set32(c.r[5], c.r[5].w[0] + 7664u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8B10u); set32(c.r[4], c.r[2].w[0] + 604u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x002E8B10u) [[unlikely]] return; }
L_002E8B10:
    set32(c.r[2], ld32((c.r[28].w[0] - 23208u)));
    c.r[5].d[0] = c.r[17].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[4], ld32((c.r[2].w[0] + 600u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8B28u); set32(c.r[6], c.r[2].w[0] + 604u);  if (depth < kMaxDepth) unit_0077(c, 369u, depth + 1u); else { c.pc = 0x002DF5F0u; return; } if (c.pc != 0x002E8B28u) [[unlikely]] return; }
L_002E8B28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E8C08; } }
L_002E8B30:
    set32(c.r[2], ld32((c.r[28].w[0] - 23208u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[6], 0u + 384u);
    set32(c.r[5], c.r[5].w[0] + 8048u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8B48u); set32(c.r[4], c.r[2].w[0] + 604u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x002E8B48u) [[unlikely]] return; }
L_002E8B48:
    set32(c.r[2], ld32((c.r[28].w[0] - 23208u)));
    c.r[5].d[0] = c.r[17].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[4], ld32((c.r[2].w[0] + 600u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8B60u); set32(c.r[6], c.r[2].w[0] + 604u);  if (depth < kMaxDepth) unit_0077(c, 369u, depth + 1u); else { c.pc = 0x002DF5F0u; return; } if (c.pc != 0x002E8B60u) [[unlikely]] return; }
L_002E8B60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E8C08; } }
L_002E8B68:
    set32(c.r[2], ld32((c.r[28].w[0] - 23208u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[6], 0u + 384u);
    set32(c.r[5], c.r[5].w[0] + 8432u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8B80u); set32(c.r[4], c.r[2].w[0] + 604u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x002E8B80u) [[unlikely]] return; }
L_002E8B80:
    set32(c.r[2], ld32((c.r[28].w[0] - 23208u)));
    c.r[5].d[0] = c.r[17].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[4], ld32((c.r[2].w[0] + 600u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8B98u); set32(c.r[6], c.r[2].w[0] + 604u);  if (depth < kMaxDepth) unit_0077(c, 369u, depth + 1u); else { c.pc = 0x002DF5F0u; return; } if (c.pc != 0x002E8B98u) [[unlikely]] return; }
L_002E8B98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E8C08; } }
L_002E8BA0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23208u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[6], 0u + 192u);
    set32(c.r[5], c.r[5].w[0] + 7856u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8BB8u); set32(c.r[4], c.r[2].w[0] + 604u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x002E8BB8u) [[unlikely]] return; }
L_002E8BB8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23208u)));
    c.r[5].d[0] = c.r[17].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[4], ld32((c.r[2].w[0] + 600u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8BD0u); set32(c.r[6], c.r[2].w[0] + 604u);  if (depth < kMaxDepth) unit_0077(c, 369u, depth + 1u); else { c.pc = 0x002DF5F0u; return; } if (c.pc != 0x002E8BD0u) [[unlikely]] return; }
L_002E8BD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E8C08; } }
L_002E8BD8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23208u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[6], 0u + 384u);
    set32(c.r[5], c.r[5].w[0] + 8816u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8BF0u); set32(c.r[4], c.r[2].w[0] + 604u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x002E8BF0u) [[unlikely]] return; }
L_002E8BF0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23208u)));
    c.r[5].d[0] = c.r[17].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[4], ld32((c.r[2].w[0] + 600u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8C08u); set32(c.r[6], c.r[2].w[0] + 604u);  if (depth < kMaxDepth) unit_0077(c, 369u, depth + 1u); else { c.pc = 0x002DF5F0u; return; } if (c.pc != 0x002E8C08u) [[unlikely]] return; }
L_002E8C08:
    set32(c.r[2], ld32((c.r[28].w[0] - 23208u)));
    c.r[5].d[0] = c.r[17].d[0] << 56;
    set32(c.r[4], ld32((c.r[2].w[0] + 596u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8C1Cu); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (depth < kMaxDepth) unit_0077(c, 61u, depth + 1u); else { c.pc = 0x002DD370u; return; } if (c.pc != 0x002E8C1Cu) [[unlikely]] return; }
L_002E8C1C:
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].d[0] = ~(c.r[16].d[0] | 0ull);
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = c.r[17].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 47u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8C44u); st8((c.r[5].w[0] + 47u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 273u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002E8C44u) [[unlikely]] return; }
L_002E8C44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E8C70; } }
    c.budget -= 1;
L_002E8C50:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 3u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E8A60u | kUnwind; return; } goto L_002E8A60; } }
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23208u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8C70u); set32(c.r[4], ld32((c.r[2].w[0] + 596u)));  if (depth < kMaxDepth) unit_0077(c, 42u, depth + 1u); else { c.pc = 0x002DD060u; return; } if (c.pc != 0x002E8C70u) [[unlikely]] return; }
L_002E8C70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E8C90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23208u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8CA4u); set32(c.r[4], ld32((c.r[2].w[0] + 600u)));  if (depth < kMaxDepth) unit_0077(c, 43u, depth + 1u); else { c.pc = 0x002DD070u; return; } if (c.pc != 0x002E8CA4u) [[unlikely]] return; }
L_002E8CA4:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002E8CD0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23208u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 592u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E8CD0; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 600u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8CD0u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0077(c, 42u, depth + 1u); else { c.pc = 0x002DD060u; return; } if (c.pc != 0x002E8CD0u) [[unlikely]] return; }
L_002E8CD0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23208u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8CDCu); set32(c.r[4], ld32((c.r[2].w[0] + 600u)));  if (depth < kMaxDepth) unit_0077(c, 43u, depth + 1u); else { c.pc = 0x002DD070u; return; } if (c.pc != 0x002E8CDCu) [[unlikely]] return; }
L_002E8CDC:
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002E8D00; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23208u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8CF4u); set32(c.r[4], ld32((c.r[2].w[0] + 600u)));  if (depth < kMaxDepth) unit_0077(c, 44u, depth + 1u); else { c.pc = 0x002DD080u; return; } if (c.pc != 0x002E8CF4u) [[unlikely]] return; }
L_002E8CF4:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
L_002E8D00:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002E8D10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23208u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8D24u); set32(c.r[4], ld32((c.r[2].w[0] + 596u)));  if (depth < kMaxDepth) unit_0077(c, 43u, depth + 1u); else { c.pc = 0x002DD070u; return; } if (c.pc != 0x002E8D24u) [[unlikely]] return; }
L_002E8D24:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002E8D50; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 8u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8D4Cu); st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x002E8D4Cu) [[unlikely]] return; }
L_002E8D4C:
    c.budget -= 1;
L_002E8D50:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002E8D60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8D70u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x002E8D70u) [[unlikely]] return; }
L_002E8D70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E8D90; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_002E8D90:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002E8DA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8DB0u);  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x002E8DB0u) [[unlikely]] return; }
L_002E8DB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8DB8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 384u, depth + 1u); else { c.pc = 0x0020F700u; return; } if (c.pc != 0x002E8DB8u) [[unlikely]] return; }
L_002E8DB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8DC0u);  if (depth < kMaxDepth) unit_004D(c, 130u, depth + 1u); else { c.pc = 0x002362E0u; return; } if (c.pc != 0x002E8DC0u) [[unlikely]] return; }
L_002E8DC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8DC8u);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x002E8DC8u) [[unlikely]] return; }
L_002E8DC8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 1u);
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
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002E8E10:
    set32(c.r[3], ld32((c.r[28].w[0] - 23208u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 592u), c.r[4].w[0]);  c.pc = t; return; }
L_002E8E20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E8E30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[13] = c.r[2].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 23208u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8E68u); set32(c.r[4], c.r[3].w[0] + 96u);  if (depth < kMaxDepth) unit_007C(c, 82u, depth + 1u); else { c.pc = 0x002F0660u; return; } if (c.pc != 0x002E8E68u) [[unlikely]] return; }
L_002E8E68:
    set32(c.r[2], ld32((c.r[28].w[0] - 23208u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8E7Cu); set32(c.r[4], c.r[2].w[0] + 96u);  if (depth < kMaxDepth) unit_007C(c, 86u, depth + 1u); else { c.pc = 0x002F0770u; return; } if (c.pc != 0x002E8E7Cu) [[unlikely]] return; }
L_002E8E7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E8E90:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 5088u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002E8000u < 16384u) { entry = entries_007A[(t - 0x002E8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002E8EB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], 0u + 26u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - 27120u);
    set32(c.r[2], c.r[2].w[0] - 29104u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[17].w[0] + 304u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st16((c.r[4].w[0] + 304u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 168u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 304u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8F08u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x002E8F08u) [[unlikely]] return; }
L_002E8F08:
    set32(c.r[3], 0u + 32764u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] - 5360u);
    set32(c.r[5], ld32((c.r[17].w[0] + 176u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], c.r[3].w[0] - 5136u);
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[4].w[0])));
    st32((c.r[16].w[0] + 12u), c.r[7].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0])));
    st32((c.r[16].w[0] + 16u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 21;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E8F70; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002E92C0; } }
    c.budget -= 1;
L_002E8F70:
    set32(c.r[5], 0u - 1u);
    st16((c.r[16].w[0] + 20u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_002E90E0; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 16u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 5312u);
    set32(c.r[3], c.r[3].w[0] - 5308u);
    set32(c.r[2], c.r[2].w[0] - 5304u);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 2u)));
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[7].w[0])));
    st32((c.r[17].w[0] + 80u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[16].w[0] + 16u)));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 2u)));
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[7].w[0])));
    st32((c.r[17].w[0] + 84u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[16].w[0] + 16u)));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 2u)));
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[7].w[0])));
    st32((c.r[17].w[0] + 88u), c.r[7].w[0]);
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 4u)));
    c.budget -= 33;
    { const bool t = c.r[9].sd[0] >= 0;  if (t) { goto L_002E9020; } }
    st32((c.r[17].w[0] + 100u), 0u);
    st32((c.r[17].w[0] + 96u), 0u);
    st32((c.r[17].w[0] + 92u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 20u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_002E90D0; } }
L_002E9020:
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 6u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[9].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    st32((c.r[17].w[0] + 92u), c.r[4].w[0]);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 6u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 84u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 4u)));
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    mmi::div(c, 1, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 6u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 4u)));
    set32(c.r[5], c.r[7].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[17].w[0] + 100u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 4u)));
    st16((c.r[16].w[0] + 20u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 44;
L_002E90D0:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_002E91F8; } }
L_002E90E0:
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 5312u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], c.r[3].w[0] - 5308u);
    set32(c.r[2], c.r[2].w[0] - 5304u);
    st32((c.r[17].w[0] + 80u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 2u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    st32((c.r[17].w[0] + 84u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 2u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    st32((c.r[17].w[0] + 88u), c.r[5].w[0]);
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 34u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 80u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 32u)));
    set32(c.r[8], c.r[9].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] - c.r[6].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    st32((c.r[17].w[0] + 92u), c.r[4].w[0]);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 34u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 84u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 32u)));
    set32(c.r[6], c.r[8].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    mmi::div(c, 1, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 34u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 32u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[17].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 70;
L_002E91F8:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9208u); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002E9208u) [[unlikely]] return; }
L_002E9208:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 32u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_002E9240; } }
    st32((c.r[17].w[0] + 56u), 0u);
    st32((c.r[17].w[0] + 52u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 48u), 0u);  if (t) { goto L_002E92B0; } }
    c.budget -= 1;
L_002E9240:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.f[0] = c.r[3].w[0];
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[2] = ld32((c.r[2].w[0] + 16u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 48u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.f[2] = ld32((c.r[3].w[0] + 20u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.f[2] = ld32((c.r[3].w[0] + 24u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 56u), c.f[0]);
    c.budget -= 28;
L_002E92B0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E92BCu); st16((c.r[16].w[0] + 24u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_007A(c, 114u, depth + 1u); else { c.pc = 0x002E92E0u; return; } if (c.pc != 0x002E92BCu) [[unlikely]] return; }
L_002E92BC:
    c.budget -= 1;
L_002E92C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E92E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_002E93D8; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_002E93C8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[2], c.r[3].w[0] + 32u);
    set32(c.r[5], c.r[3].w[0] + 16u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9338u); st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002E9338u) [[unlikely]] return; }
L_002E9338:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_002E9358; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002E95D8; } }
    c.budget -= 1;
L_002E9358:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.f[0] = c.r[3].w[0];
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[2] = ld32((c.r[2].w[0] + 16u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 48u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.f[2] = ld32((c.r[3].w[0] + 20u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.f[2] = ld32((c.r[3].w[0] + 24u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 56u), c.f[0]);
    c.budget -= 28;
L_002E93C8:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E93D4u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x002E93D4u) [[unlikely]] return; }
L_002E93D4:
    c.budget -= 1;
L_002E93D8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_002E9580; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 20u)));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_002E9550; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], c.r[5].w[0] - 5312u);
    set32(c.r[4], c.r[4].w[0] - 5308u);
    set32(c.r[3], c.r[3].w[0] - 5304u);
    set32(c.r[7], c.r[6].w[0] + 4u);
    st32((c.r[16].w[0] + 16u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[16].w[0] + 16u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    st16((c.r[16].w[0] + 20u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[7].w[0])));
    st32((c.r[17].w[0] + 80u), c.r[7].w[0]);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[7].w[0])));
    st32((c.r[17].w[0] + 84u), c.r[7].w[0]);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[7].w[0])));
    st32((c.r[17].w[0] + 88u), c.r[7].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 20u)));
    c.budget -= 36;
    { const bool t = c.r[7].sd[0] >= 0;  if (t) { goto L_002E9498; } }
    st32((c.r[17].w[0] + 100u), 0u);
    st32((c.r[17].w[0] + 96u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_002E9550; } }
L_002E9498:
    set32(c.r[9], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[8], ld32((c.r[17].w[0] + 80u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 2u)));
    set32(c.r[9], c.r[10].w[0] << 1);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[9].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[5], c.r[5].w[0] - c.r[8].w[0]);
    mmi::div(c, 0, c.r[5].w[0], c.r[7].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    st32((c.r[17].w[0] + 92u), c.r[5].w[0]);
    set32(c.r[8], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 84u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 2u)));
    set32(c.r[8], c.r[9].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] - c.r[7].w[0]);
    mmi::div(c, 1, c.r[4].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    st32((c.r[17].w[0] + 96u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[17].w[0] + 100u), c.r[3].w[0]);
    c.budget -= 46;
L_002E9550:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 12;
L_002E9580:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    set32(c.r[3], 0u + 6u);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] + 1u);
    st16((c.r[16].w[0] + 24u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002E95B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E95B0u); st16((c.r[16].w[0] + 24u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_007C(c, 274u, depth + 1u); else { c.pc = 0x002F26B0u; return; } if (c.pc != 0x002E95B0u) [[unlikely]] return; }
L_002E95B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.f[3] = ld32((c.r[17].w[0] + 32u));
    set32(c.r[3], c.r[3].w[0] - 29376u);
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    st32((c.r[3].w[0]), c.f[3]);
    st32((c.r[3].w[0] + 4u), c.f[2]);
    st32((c.r[3].w[0] + 8u), c.f[1]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.budget -= 10;
L_002E95D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E95F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002E9600:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_002E9610:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], c.r[18].w[0] + 304u);  if (t) { goto L_002E96B8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[16], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002E96B8; } }
    c.r[4].d[0] = ld16((c.r[17].w[0] + 2u));
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[5].w[0] & 31u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E96B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9674u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002E9674u) [[unlikely]] return; }
L_002E9674:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E96A8; } }
    c.f[13] = ld32((c.r[18].w[0] + 36u));
    c.f[14] = ld32((c.r[18].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9690u); c.f[12] = ld32((c.r[18].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002E9690u) [[unlikely]] return; }
L_002E9690:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9698u); set32(c.r[4], ld32((c.r[18].w[0] + 88u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x002E9698u) [[unlikely]] return; }
L_002E9698:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E96A0u); set32(c.r[4], ld32((c.r[18].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x002E96A0u) [[unlikely]] return; }
L_002E96A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E96A8u); set32(c.r[4], ld32((c.r[18].w[0] + 80u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x002E96A8u) [[unlikely]] return; }
L_002E96A8:
    set32(c.r[2], ld32((c.r[18].w[0] + 184u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E96B8u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x002E96B8u) [[unlikely]] return; }
L_002E96B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E96D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 9232u);
    c.budget -= 5;
    { set32(c.r[6], 0u + 76u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011AB50u | kUnwind; return; } [[clang::musttail]] return unit_0006(c, 201u, depth); }
L_002E96F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], c.r[2].w[0] - 17200u);
    st8((c.r[3].w[0] + 40u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 39u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 16;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9730u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E9730u) [[unlikely]] return; }
L_002E9730:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 40u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 39u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002E9750:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9760u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x002E9760u) [[unlikely]] return; }
L_002E9760:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E9770; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002E97D8; } }
L_002E9770:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E979Cu); st8((c.r[2].w[0] + 76u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x002E979Cu) [[unlikely]] return; }
L_002E979C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E97A4u);  if (depth < kMaxDepth) unit_007A(c, 127u, depth + 1u); else { c.pc = 0x002E96D0u; return; } if (c.pc != 0x002E97A4u) [[unlikely]] return; }
L_002E97A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E97ACu);  if (depth < kMaxDepth) unit_0044(c, 303u, depth + 1u); else { c.pc = 0x00212630u; return; } if (c.pc != 0x002E97ACu) [[unlikely]] return; }
L_002E97AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E97B4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0044(c, 306u, depth + 1u); else { c.pc = 0x00212700u; return; } if (c.pc != 0x002E97B4u) [[unlikely]] return; }
L_002E97B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E97BCu);  if (depth < kMaxDepth) unit_0044(c, 363u, depth + 1u); else { c.pc = 0x002132A0u; return; } if (c.pc != 0x002E97BCu) [[unlikely]] return; }
L_002E97BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E97C4u);  if (depth < kMaxDepth) unit_004E(c, 5u, depth + 1u); else { c.pc = 0x00238040u; return; } if (c.pc != 0x002E97C4u) [[unlikely]] return; }
L_002E97C4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E97D0u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x002E97D0u) [[unlikely]] return; }
L_002E97D0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002E97D8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002E97F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002E99A0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002E9918; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E9888; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E9838; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E99B0; } }
    c.budget -= 1;
L_002E9838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9840u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x002E9840u) [[unlikely]] return; }
L_002E9840:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E9878; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 21376u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 45u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 12;
L_002E9878:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9880u);  if (depth < kMaxDepth) unit_006C(c, 222u, depth + 1u); else { c.pc = 0x002B19F0u; return; } if (c.pc != 0x002E9880u) [[unlikely]] return; }
L_002E9880:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E99B0; } }
L_002E9888:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9894u); set32(c.r[4], c.r[4].w[0] + 9232u);  if (depth < kMaxDepth) unit_007A(c, 167u, depth + 1u); else { c.pc = 0x002E9CA0u; return; } if (c.pc != 0x002E9894u) [[unlikely]] return; }
L_002E9894:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E989Cu);  if (depth < kMaxDepth) unit_006C(c, 222u, depth + 1u); else { c.pc = 0x002B19F0u; return; } if (c.pc != 0x002E989Cu) [[unlikely]] return; }
L_002E989C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E98A4u);  if (depth < kMaxDepth) unit_007A(c, 208u, depth + 1u); else { c.pc = 0x002EA660u; return; } if (c.pc != 0x002E98A4u) [[unlikely]] return; }
L_002E98A4:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 9246u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 77u)));
    c.r[2].d[0] = c.r[2].sd[0] < 106ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E99B0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_002E99B0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[6].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 8u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9900u); st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0046(c, 196u, depth + 1u); else { c.pc = 0x0021B320u; return; } if (c.pc != 0x002E9900u) [[unlikely]] return; }
L_002E9900:
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9910u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x002E9910u) [[unlikely]] return; }
L_002E9910:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E99B0; } }
L_002E9918:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9924u); set32(c.r[4], c.r[4].w[0] + 9232u);  if (depth < kMaxDepth) unit_007A(c, 167u, depth + 1u); else { c.pc = 0x002E9CA0u; return; } if (c.pc != 0x002E9924u) [[unlikely]] return; }
L_002E9924:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E992Cu);  if (depth < kMaxDepth) unit_006C(c, 222u, depth + 1u); else { c.pc = 0x002B19F0u; return; } if (c.pc != 0x002E992Cu) [[unlikely]] return; }
L_002E992C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9934u);  if (depth < kMaxDepth) unit_007A(c, 208u, depth + 1u); else { c.pc = 0x002EA660u; return; } if (c.pc != 0x002E9934u) [[unlikely]] return; }
L_002E9934:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9944u); st8((c.r[1].w[0] + 9246u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x002E9944u) [[unlikely]] return; }
L_002E9944:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E99B0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9960u); st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x002E9960u) [[unlikely]] return; }
L_002E9960:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9968u);  if (depth < kMaxDepth) unit_004D(c, 130u, depth + 1u); else { c.pc = 0x002362E0u; return; } if (c.pc != 0x002E9968u) [[unlikely]] return; }
L_002E9968:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9970u);  if (depth < kMaxDepth) unit_0043(c, 413u, depth + 1u); else { c.pc = 0x0020FEA0u; return; } if (c.pc != 0x002E9970u) [[unlikely]] return; }
L_002E9970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9978u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 25u, depth + 1u); else { c.pc = 0x001246A0u; return; } if (c.pc != 0x002E9978u) [[unlikely]] return; }
L_002E9978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9980u);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x002E9980u) [[unlikely]] return; }
L_002E9980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9988u);  if (depth < kMaxDepth) unit_004E(c, 5u, depth + 1u); else { c.pc = 0x00238040u; return; } if (c.pc != 0x002E9988u) [[unlikely]] return; }
L_002E9988:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9994u); set32(c.r[4], c.r[4].w[0] - 22608u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x002E9994u) [[unlikely]] return; }
L_002E9994:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E99B0; } }
    c.budget -= 1;
L_002E99A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    set32(c.r[4], c.r[4].w[0] - 22608u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E99B0u); set32(c.r[16], 0u + 1u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x002E99B0u) [[unlikely]] return; }
L_002E99B0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E99D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E99E0u);  if (depth < kMaxDepth) unit_005B(c, 64u, depth + 1u); else { c.pc = 0x0026C960u; return; } if (c.pc != 0x002E99E0u) [[unlikely]] return; }
L_002E99E0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], 0u - 1u);
    set32(c.r[5], c.r[5].w[0] - 21360u);
    set32(c.r[3], 0u + 9u);
    st8((c.r[2].w[0] + 14u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 15u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 12u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 13u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 21u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 28u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 29u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 22u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 23u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 30u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 31u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 24u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 25u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 32u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 33u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 26u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 27u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 34u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 35u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 45u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    st8((c.r[2].w[0] + 326u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 45u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    st8((c.r[2].w[0] + 327u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 150u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 45u)));
    st8((c.r[2].w[0] + 151u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 45u)));
    c.budget -= 69;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9AF4u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 150u)));  if (depth < kMaxDepth) unit_006D(c, 300u, depth + 1u); else { c.pc = 0x002B6ED0u; return; } if (c.pc != 0x002E9AF4u) [[unlikely]] return; }
L_002E9AF4:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9B08u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  if (depth < kMaxDepth) unit_004F(c, 68u, depth + 1u); else { c.pc = 0x0023D1E0u; return; } if (c.pc != 0x002E9B08u) [[unlikely]] return; }
L_002E9B08:
    c.r[4].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[2], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002E9B78; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002E9B58; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E9B38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E9B98; } }
    c.budget -= 1;
L_002E9B38:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002E9B98; } }
    c.budget -= 1;
L_002E9B58:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002E9B98; } }
    c.budget -= 1;
L_002E9B78:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_002E9B98:
    set32(c.r[2], 0u + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[1].w[0] - 30052u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9BB4u); st8((c.r[1].w[0] - 30051u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0044(c, 199u, depth + 1u); else { c.pc = 0x00211410u; return; } if (c.pc != 0x002E9BB4u) [[unlikely]] return; }
L_002E9BB4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], 0u - 1u);
    st8((c.r[1].w[0] - 8942u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9BCCu); st16((c.r[1].w[0] - 8944u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006D(c, 337u, depth + 1u); else { c.pc = 0x002B7D40u; return; } if (c.pc != 0x002E9BCCu) [[unlikely]] return; }
L_002E9BCC:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u - 1u);
    st8((c.r[2].w[0] + 47u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 53u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 88u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 48u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 54u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 89u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 49u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 55u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 90u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 50u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 56u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 91u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 51u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 57u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 92u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 52u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 58u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 38;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9C64u); st8((c.r[2].w[0] + 93u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0026(c, 63u, depth + 1u); else { c.pc = 0x00198FB0u; return; } if (c.pc != 0x002E9C64u) [[unlikely]] return; }
L_002E9C64:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] - 19193u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] - 10489u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] - 1785u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9C88u); st8((c.r[1].w[0] + 6919u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_004F(c, 61u, depth + 1u); else { c.pc = 0x0023D0F0u; return; } if (c.pc != 0x002E9C88u) [[unlikely]] return; }
L_002E9C88:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002E9CA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 77u)));
    c.r[3].d[0] = c.r[3].sd[0] < 106ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E9D18; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E9D00; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] - 17216u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 45u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9CF4u); st32((c.r[4].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_007A(c, 171u, depth + 1u); else { c.pc = 0x002E9D60u; return; } if (c.pc != 0x002E9CF4u) [[unlikely]] return; }
L_002E9CF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E9D18; } }
    c.budget -= 1;
L_002E9D00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E9D18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9D14u);  if (depth < kMaxDepth) unit_007A(c, 196u, depth + 1u); else { c.pc = 0x002EA330u; return; } if (c.pc != 0x002E9D14u) [[unlikely]] return; }
L_002E9D14:
    c.budget -= 1;
L_002E9D18:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002E9D30:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = c.r[5].d[0] << 56;
    set32(c.r[3], c.r[3].w[0] - 21392u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 82u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  c.pc = t; return; }
L_002E9D60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 8;
L_002E9D80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[6], 0u + 65u);
    c.r[16].d[0] = 0ull + 0ull;
    st8((c.r[18].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[6].d[0]; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_002EA2F8; } }
    set32(c.r[5], 0u + 64u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[4], 0u + 255u);  if (t) { goto L_002EA2F8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002EA2E8; } }
    set32(c.r[4], 0u + 28u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 27u);  if (t) { goto L_002EA2A0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002EA258; } }
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[5], 0u + 26u);  if (t) { goto L_002EA240; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002EA220; } }
    set32(c.r[5], 0u + 25u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 30u);  if (t) { goto L_002EA210; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002EA200; } }
    set32(c.r[5], 0u + 29u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 24u);  if (t) { goto L_002EA1F0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002EA1E0; } }
    set32(c.r[5], 0u + 23u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 22u);  if (t) { goto L_002EA1D0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002EA1B0; } }
    set32(c.r[5], 0u + 21u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 20u);  if (t) { goto L_002EA198; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002EA178; } }
    set32(c.r[5], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 18u);  if (t) { goto L_002EA160; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002EA140; } }
    set32(c.r[5], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 16u);  if (t) { goto L_002EA120; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002EA100; } }
    set32(c.r[5], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 13u);  if (t) { goto L_002EA0F0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002EA0D0; } }
    set32(c.r[5], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 11u);  if (t) { goto L_002EA0A8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002EA070; } }
    set32(c.r[5], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 9u);  if (t) { goto L_002EA048; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002E9FF0; } }
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002E9FC8; } }
    set32(c.r[4], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 6u);  if (t) { goto L_002E9FA0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002E9F80; } }
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 3u);  if (t) { goto L_002E9F60; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002E9F40; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_002E9F28; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002E9F10; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E9EE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EA300; } }
    c.budget -= 1;
L_002E9EE8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));
    set32(c.r[4], c.r[4].w[0] << 8);
    c.r[4].d[0] = c.r[4].d[0] & 65280ull;
    set32(c.r[17], c.r[17].w[0] + 2u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st16((c.r[18].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 10u), static_cast<std::uint16_t>(0u));  if (t) { goto L_002EA300; } }
    c.budget -= 1;
L_002E9F10:
    st8((c.r[18].w[0] + 12u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9F1Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 173u, depth + 1u); else { c.pc = 0x0023A570u; return; } if (c.pc != 0x002E9F1Cu) [[unlikely]] return; }
L_002E9F1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EA300; } }
    c.budget -= 1;
L_002E9F28:
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[18].w[0] + 12u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9F38u); set32(c.r[16], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 173u, depth + 1u); else { c.pc = 0x0023A570u; return; } if (c.pc != 0x002E9F38u) [[unlikely]] return; }
L_002E9F38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EA300; } }
L_002E9F40:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9F54u); set32(c.r[16], 0u + 1u);  if (depth < kMaxDepth) unit_007E(c, 54u, depth + 1u); else { c.pc = 0x002F8A80u; return; } if (c.pc != 0x002E9F54u) [[unlikely]] return; }
L_002E9F54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 2u);  if (t) { goto L_002EA300; } }
    c.budget -= 1;
L_002E9F60:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[16], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9F74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007E(c, 54u, depth + 1u); else { c.pc = 0x002F8A80u; return; } if (c.pc != 0x002E9F74u) [[unlikely]] return; }
L_002E9F74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 2u);  if (t) { goto L_002EA300; } }
    c.budget -= 1;
L_002E9F80:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9F94u); set32(c.r[16], 0u + 1u);  if (depth < kMaxDepth) unit_007E(c, 54u, depth + 1u); else { c.pc = 0x002F8A80u; return; } if (c.pc != 0x002E9F94u) [[unlikely]] return; }
L_002E9F94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 2u);  if (t) { goto L_002EA300; } }
    c.budget -= 1;
L_002E9FA0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[4], 0u + 3u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[16], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9FB8u); set32(c.r[17], c.r[17].w[0] + 1u);  if (depth < kMaxDepth) unit_007E(c, 54u, depth + 1u); else { c.pc = 0x002F8A80u; return; } if (c.pc != 0x002E9FB8u) [[unlikely]] return; }
L_002E9FB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[18].w[0] + 22u);  if (t) { goto L_002EA300; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 28u), c.r[3].w[0]);  if (t) { goto L_002EA300; } }
L_002E9FC8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9FD8u); set32(c.r[16], 0u + 1u);  if (depth < kMaxDepth) unit_007E(c, 54u, depth + 1u); else { c.pc = 0x002F8A80u; return; } if (c.pc != 0x002E9FD8u) [[unlikely]] return; }
L_002E9FD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[18].w[0] + 22u);  if (t) { goto L_002E9FE8; } }
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 2;
L_002E9FE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 2u);  if (t) { goto L_002EA300; } }
L_002E9FF0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[4], c.r[4].w[0] - 18416u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    set32(c.r[16], 0u + 1u);
    c.r[7].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[3], c.r[7].w[0] << 2);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[7], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[7].d[0] = c.r[2].d[0] << 48;
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA03Cu); c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);  if (depth < kMaxDepth) unit_004E(c, 46u, depth + 1u); else { c.pc = 0x00238530u; return; } if (c.pc != 0x002EA03Cu) [[unlikely]] return; }
L_002EA03C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { goto L_002EA300; } }
    c.budget -= 1;
L_002EA048:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[4], c.r[4].w[0] - 18496u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA064u); set32(c.r[16], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 46u, depth + 1u); else { c.pc = 0x00238530u; return; } if (c.pc != 0x002EA064u) [[unlikely]] return; }
L_002EA064:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 2u);  if (t) { goto L_002EA300; } }
    c.budget -= 1;
L_002EA070:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA080u); set32(c.r[16], 0u + 1u);  if (depth < kMaxDepth) unit_007A(c, 170u, depth + 1u); else { c.pc = 0x002E9D30u; return; } if (c.pc != 0x002EA080u) [[unlikely]] return; }
L_002EA080:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA09Cu); set32(c.r[4], c.r[2].w[0] + 28u);  if (depth < kMaxDepth) unit_007A(c, 201u, depth + 1u); else { c.pc = 0x002EA4B0u; return; } if (c.pc != 0x002EA09Cu) [[unlikely]] return; }
L_002EA09C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 2u);  if (t) { goto L_002EA300; } }
    c.budget -= 1;
L_002EA0A8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA0B8u); set32(c.r[16], 0u + 1u);  if (depth < kMaxDepth) unit_007A(c, 170u, depth + 1u); else { c.pc = 0x002E9D30u; return; } if (c.pc != 0x002EA0B8u) [[unlikely]] return; }
L_002EA0B8:
    c.r[4].d[0] = c.r[2].d[0] << 56;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA0C4u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);  if (depth < kMaxDepth) unit_007A(c, 202u, depth + 1u); else { c.pc = 0x002EA4E0u; return; } if (c.pc != 0x002EA0C4u) [[unlikely]] return; }
L_002EA0C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_002EA300; } }
    c.budget -= 1;
L_002EA0D0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[4], c.r[18].w[0] + 68u);
    set32(c.r[16], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA0E4u); set32(c.r[17], c.r[17].w[0] + 1u);  if (depth < kMaxDepth) unit_007A(c, 201u, depth + 1u); else { c.pc = 0x002EA4B0u; return; } if (c.pc != 0x002EA0E4u) [[unlikely]] return; }
L_002EA0E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EA300; } }
    c.budget -= 1;
L_002EA0F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA0F8u); set32(c.r[16], 0u + 1u);  if (depth < kMaxDepth) unit_007A(c, 203u, depth + 1u); else { c.pc = 0x002EA520u; return; } if (c.pc != 0x002EA0F8u) [[unlikely]] return; }
L_002EA0F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EA300; } }
L_002EA100:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[16], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA118u); set32(c.r[17], c.r[17].w[0] + 1u);  if (depth < kMaxDepth) unit_007E(c, 54u, depth + 1u); else { c.pc = 0x002F8A80u; return; } if (c.pc != 0x002EA118u) [[unlikely]] return; }
L_002EA118:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EA300; } }
L_002EA120:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[4], 0u + 6u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[16], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA138u); set32(c.r[17], c.r[17].w[0] + 1u);  if (depth < kMaxDepth) unit_007E(c, 54u, depth + 1u); else { c.pc = 0x002F8A80u; return; } if (c.pc != 0x002EA138u) [[unlikely]] return; }
L_002EA138:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EA300; } }
L_002EA140:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[4], 0u + 16u);
    set32(c.r[16], 0u + 1u);
    st8((c.r[3].w[0] + 18u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 130u), static_cast<std::uint16_t>(c.r[16].w[0]));  if (t) { goto L_002EA300; } }
    c.budget -= 1;
L_002EA160:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA16Cu); set32(c.r[16], 0u + 1u);  if (depth < kMaxDepth) unit_0074(c, 332u, depth + 1u); else { c.pc = 0x002D3750u; return; } if (c.pc != 0x002EA16Cu) [[unlikely]] return; }
L_002EA16C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EA300; } }
    c.budget -= 1;
L_002EA178:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[4], 0u + 16u);
    set32(c.r[16], 0u + 1u);
    st8((c.r[3].w[0] + 19u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 136u), static_cast<std::uint16_t>(c.r[16].w[0]));  if (t) { goto L_002EA300; } }
    c.budget -= 1;
L_002EA198:
    set32(c.r[16], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA1A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 332u, depth + 1u); else { c.pc = 0x002D3750u; return; } if (c.pc != 0x002EA1A4u) [[unlikely]] return; }
L_002EA1A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EA300; } }
    c.budget -= 1;
L_002EA1B0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[16], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA1C4u); st8((c.r[2].w[0] + 12u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_0075(c, 6u, depth + 1u); else { c.pc = 0x002D4260u; return; } if (c.pc != 0x002EA1C4u) [[unlikely]] return; }
L_002EA1C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EA300; } }
    c.budget -= 1;
L_002EA1D0:
    set32(c.r[16], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 15u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (t) { goto L_002EA300; } }
    c.budget -= 1;
L_002EA1E0:
    st8((c.r[18].w[0] + 15u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_002EA300; } }
    c.budget -= 1;
L_002EA1F0:
    set32(c.r[16], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (t) { goto L_002EA300; } }
    c.budget -= 1;
L_002EA200:
    st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_002EA300; } }
    c.budget -= 1;
L_002EA210:
    st16((c.r[28].w[0] - 23876u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_002EA300; } }
    c.budget -= 1;
L_002EA220:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[4], 0u + 7u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA234u); set32(c.r[16], 0u + 1u);  if (depth < kMaxDepth) unit_007E(c, 54u, depth + 1u); else { c.pc = 0x002F8A80u; return; } if (c.pc != 0x002EA234u) [[unlikely]] return; }
L_002EA234:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 2u);  if (t) { goto L_002EA300; } }
    c.budget -= 1;
L_002EA240:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[16], 0u + 1u);
    st8((c.r[18].w[0] + 14u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_002EA300; } }
    c.budget -= 1;
L_002EA258:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002EA298; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);  if (t) { goto L_002EA298; } }
    set32(c.r[4], c.r[4].w[0] - 21456u);
    c.budget -= 1;
L_002EA278:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[17], c.r[17].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EA278u | kUnwind; return; } goto L_002EA278; } }
    c.budget -= 1;
L_002EA298:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_002EA300; } }
L_002EA2A0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EA2E0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);  if (t) { goto L_002EA2E0; } }
    set32(c.r[4], c.r[4].w[0] - 21456u);
    c.budget -= 1;
L_002EA2C0:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[17], c.r[17].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EA2C0u | kUnwind; return; } goto L_002EA2C0; } }
    c.budget -= 1;
L_002EA2E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_002EA300; } }
L_002EA2E8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002EA300; } }
L_002EA2F8:
    set32(c.r[16], 0u + 1u);
    c.budget -= 2;
L_002EA300:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E9D80u | kUnwind; return; } goto L_002E9D80; } }
    st32((c.r[18].w[0] + 4u), c.r[17].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002EA330:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 255u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 13u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002EA3A0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002EA360; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EA398; } }
    c.budget -= 1;
L_002EA360:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_002EA388; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA384u);  if (depth < kMaxDepth) unit_007A(c, 171u, depth + 1u); else { c.pc = 0x002E9D60u; return; } if (c.pc != 0x002EA384u) [[unlikely]] return; }
L_002EA384:
    c.budget -= 1;
L_002EA388:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002EA3A0; } }
L_002EA398:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA3A0u);  if (depth < kMaxDepth) unit_007A(c, 171u, depth + 1u); else { c.pc = 0x002E9D60u; return; } if (c.pc != 0x002EA3A0u) [[unlikely]] return; }
L_002EA3A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002EA3B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[2].d[0] = c.r[4].d[0] << 56;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 9246u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];  c.pc = t; return; }
L_002EA3D0:
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EA3E8; } }
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_002EA3E8:
    c.r[3].d[0] = c.r[4].d[0] & 16384ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EA400; } }
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
L_002EA400:
    c.r[3].d[0] = c.r[4].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EA418; } }
    c.r[2].d[0] = c.r[2].d[0] | 2048ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
L_002EA418:
    c.r[3].d[0] = c.r[4].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EA430; } }
    c.r[2].d[0] = c.r[2].d[0] | 1024ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
L_002EA430:
    c.r[3].d[0] = c.r[4].d[0] & 2048ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EA448; } }
    c.r[2].d[0] = c.r[2].d[0] | 512ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
L_002EA448:
    c.r[3].d[0] = c.r[4].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EA460; } }
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
L_002EA460:
    c.r[3].d[0] = c.r[4].d[0] & 512ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EA478; } }
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
L_002EA478:
    c.r[3].d[0] = c.r[4].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EA490; } }
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
L_002EA490:
    c.r[3].d[0] = c.r[4].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EA4A8; } }
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
L_002EA4A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EA4B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 19952u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));  c.pc = t; return; }
L_002EA4E0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[6], c.r[4].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + 9232u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[3].w[0] << 9);
    st32((c.r[5].w[0] + 28u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st16((c.r[5].w[0] + 32u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 27176u);
    st16((c.r[5].w[0] + 34u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[3].w[0]), static_cast<std::uint16_t>(0u));  c.pc = t; return; }
L_002EA520:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[3], c.r[3].w[0] + 9300u);
    st32((c.r[3].w[0]), 0u);
    st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[1].w[0] + 9254u), static_cast<std::uint16_t>(0u));  c.pc = t; return; }
L_002EA540:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[8], ld32((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != 0ull; c.r[9].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002EA560; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[5].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_002EA5F0; } }
    c.budget -= 1;
L_002EA560:
    c.r[4].d[0] = ld16((c.r[9].w[0] + 4u));
    c.r[3].d[0] = 0ull | 65472ull;
    set32(c.r[7], c.r[9].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[6], c.r[9].w[0] + 6u);  if (t) { goto L_002EA588; } }
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(0u));
    st32((c.r[9].w[0]), 0u);
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[6].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_002EA5F0; } }
L_002EA588:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EA5D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA598u); c.r[4].d[0] = ld16((c.r[8].w[0]));  if (depth < kMaxDepth) unit_007A(c, 200u, depth + 1u); else { c.pc = 0x002EA3D0u; return; } if (c.pc != 0x002EA598u) [[unlikely]] return; }
L_002EA598:
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[8].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 63ull;
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[8].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EA5D0; } }
    set32(c.r[8], c.r[8].w[0] + 2u);
    c.r[4].d[0] = ld16((c.r[7].w[0]));
    c.r[3].d[0] = ld16((c.r[8].w[0]));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_002EA5D0:
    set32(c.r[8], c.r[8].w[0] + 2u);
    c.budget -= 2;
L_002EA5D8:
    c.r[3].d[0] = ld16((c.r[6].w[0]));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[7].w[0]));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[9].w[0]), c.r[8].w[0]);
    c.budget -= 6;
L_002EA5F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002EA600:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st16((c.r[4].w[0] + 680u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 39u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EA648; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002EA648; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[2], c.r[2].w[0] + 9232u);
    set32(c.r[5], c.r[4].w[0] + 680u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA648u); set32(c.r[4], c.r[2].w[0] + 28u);  if (depth < kMaxDepth) unit_007A(c, 204u, depth + 1u); else { c.pc = 0x002EA540u; return; } if (c.pc != 0x002EA648u) [[unlikely]] return; }
L_002EA648:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002EA660:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], c.r[4].w[0] + 9300u);
    c.budget -= 5;
    { set32(c.r[5], c.r[5].w[0] + 9254u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002EA540u | kUnwind; return; } goto L_002EA540; }
L_002EA680:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EA6F8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002EA6D0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002EA6A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EA718; } }
L_002EA6A8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 39u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002EA6C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EA718; } }
L_002EA6C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 9244u)));  if (t) { goto L_002EA718; } }
    c.budget -= 1;
L_002EA6D0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 39u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_002EA6E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EA718; } }
L_002EA6E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 9247u)));  if (t) { goto L_002EA718; } }
    c.budget -= 1;
L_002EA6F8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 39u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002EA710; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EA718; } }
L_002EA710:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 9248u)));
    c.budget -= 2;
L_002EA718:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EA720:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA730u);  if (depth < kMaxDepth) unit_005B(c, 61u, depth + 1u); else { c.pc = 0x0026C8B0u; return; } if (c.pc != 0x002EA730u) [[unlikely]] return; }
L_002EA730:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA748u); st8((c.r[2].w[0] + 76u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0032(c, 47u, depth + 1u); else { c.pc = 0x001C8B00u; return; } if (c.pc != 0x002EA748u) [[unlikely]] return; }
L_002EA748:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA750u);  if (depth < kMaxDepth) unit_0032(c, 37u, depth + 1u); else { c.pc = 0x001C89F0u; return; } if (c.pc != 0x002EA750u) [[unlikely]] return; }
L_002EA750:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA758u);  if (depth < kMaxDepth) unit_007A(c, 159u, depth + 1u); else { c.pc = 0x002E99D0u; return; } if (c.pc != 0x002EA758u) [[unlikely]] return; }
L_002EA758:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], 0u + 47u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] - 19584u);
    st8((c.r[3].w[0] + 68u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[3].w[0] + 69u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[3].w[0] + 70u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[3].w[0] + 71u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[3].w[0] + 72u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[3].w[0] + 73u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[3].w[0] + 85u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[3].w[0] + 84u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[3].w[0] + 83u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[3].w[0] + 82u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[3].w[0] + 81u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[3].w[0] + 80u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 82u)));
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    st8((c.r[4].w[0] + 56u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 82u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 42;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA800u); set32(c.r[4], c.r[2].w[0] + 161u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x002EA800u) [[unlikely]] return; }
L_002EA800:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 26u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 82u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 121u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 82u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA838u); st8((c.r[2].w[0] + 120u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (depth < kMaxDepth) unit_005B(c, 73u, depth + 1u); else { c.pc = 0x0026CA70u; return; } if (c.pc != 0x002EA838u) [[unlikely]] return; }
L_002EA838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA840u);  if (depth < kMaxDepth) unit_0047(c, 85u, depth + 1u); else { c.pc = 0x0021CDD0u; return; } if (c.pc != 0x002EA840u) [[unlikely]] return; }
L_002EA840:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA848u);  if (depth < kMaxDepth) unit_0047(c, 286u, depth + 1u); else { c.pc = 0x0021FF00u; return; } if (c.pc != 0x002EA848u) [[unlikely]] return; }
L_002EA848:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA850u);  if (depth < kMaxDepth) unit_0047(c, 133u, depth + 1u); else { c.pc = 0x0021DED0u; return; } if (c.pc != 0x002EA850u) [[unlikely]] return; }
L_002EA850:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA858u);  if (depth < kMaxDepth) unit_0047(c, 243u, depth + 1u); else { c.pc = 0x0021F4F0u; return; } if (c.pc != 0x002EA858u) [[unlikely]] return; }
L_002EA858:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA860u);  if (depth < kMaxDepth) unit_0047(c, 257u, depth + 1u); else { c.pc = 0x0021F7E0u; return; } if (c.pc != 0x002EA860u) [[unlikely]] return; }
L_002EA860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA868u);  if (depth < kMaxDepth) unit_0047(c, 152u, depth + 1u); else { c.pc = 0x0021E620u; return; } if (c.pc != 0x002EA868u) [[unlikely]] return; }
L_002EA868:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA870u);  if (depth < kMaxDepth) unit_0048(c, 37u, depth + 1u); else { c.pc = 0x002206E0u; return; } if (c.pc != 0x002EA870u) [[unlikely]] return; }
L_002EA870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA878u);  if (depth < kMaxDepth) unit_0048(c, 281u, depth + 1u); else { c.pc = 0x00223EF0u; return; } if (c.pc != 0x002EA878u) [[unlikely]] return; }
L_002EA878:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA880u);  if (depth < kMaxDepth) unit_0048(c, 275u, depth + 1u); else { c.pc = 0x00223E50u; return; } if (c.pc != 0x002EA880u) [[unlikely]] return; }
L_002EA880:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 40u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002EA8A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 9256u)));
    c.r[1].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 9232u);  if (t) { goto L_002EA8C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EA920; } }
L_002EA8C0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], ld32((c.r[7].w[0] + 24u)));
    set32(c.r[5], c.r[5].w[0] - 21424u);
    set32(c.r[3], c.r[3].w[0] - 27856u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 82u)));
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[2], c.r[4].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    st32((c.r[7].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 9);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 20;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EA920; } }
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_002EA920:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EA930:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 16224u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002E8000u < 16384u) { entry = entries_007A[(t - 0x002E8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002EA950:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[3].w[0] - 27856u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] - 20432u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[6], 0u + 1u);
    st32((c.r[4].w[0] + 168u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[17], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] - 17183u);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 176u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA9ACu); set32(c.r[16], c.r[18].w[0] + 304u);  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x002EA9ACu) [[unlikely]] return; }
L_002EA9AC:
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] - 17184u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 7u)));
    st8((c.r[16].w[0] + 82u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 8u)));
    st8((c.r[16].w[0] + 83u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 9u)));
    st8((c.r[16].w[0] + 84u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 10u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 14u)));
    st16((c.r[16].w[0] + 76u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 78u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 80u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[3] = ld32((c.r[6].w[0] + 16u));
    c.f[2] = ld32((c.r[6].w[0] + 20u));
    c.f[1] = ld32((c.r[6].w[0] + 24u));
    c.f[0] = ld32((c.r[6].w[0] + 28u));
    st32((c.r[16].w[0]), c.f[3]);
    st32((c.r[16].w[0] + 4u), c.f[2]);
    st32((c.r[16].w[0] + 8u), c.f[1]);
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[6].w[0] + 32u));
    c.f[2] = ld32((c.r[6].w[0] + 36u));
    c.f[1] = ld32((c.r[6].w[0] + 40u));
    c.f[0] = ld32((c.r[6].w[0] + 44u));
    st32((c.r[16].w[0] + 16u), c.f[3]);
    st32((c.r[16].w[0] + 20u), c.f[2]);
    st32((c.r[16].w[0] + 24u), c.f[1]);
    st32((c.r[16].w[0] + 28u), c.f[0]);
    c.f[3] = ld32((c.r[6].w[0] + 48u));
    c.f[2] = ld32((c.r[6].w[0] + 52u));
    c.f[1] = ld32((c.r[6].w[0] + 56u));
    c.f[0] = ld32((c.r[6].w[0] + 60u));
    st32((c.r[16].w[0] + 32u), c.f[3]);
    st32((c.r[16].w[0] + 36u), c.f[2]);
    st32((c.r[16].w[0] + 40u), c.f[1]);
    st32((c.r[16].w[0] + 44u), c.f[0]);
    st8((c.r[16].w[0] + 85u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 86u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 87u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 88u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 89u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 90u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 10u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 53;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAA80u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 31u, depth + 1u); else { c.pc = 0x002AC5D0u; return; } if (c.pc != 0x002EAA80u) [[unlikely]] return; }
L_002EAA80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAA88u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 255u, depth + 1u); else { c.pc = 0x002EAFD0u; return; } if (c.pc != 0x002EAA88u) [[unlikely]] return; }
L_002EAA88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAA90u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 256u, depth + 1u); else { c.pc = 0x002EAFE0u; return; } if (c.pc != 0x002EAA90u) [[unlikely]] return; }
L_002EAA90:
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = 0ull | 58369ull;
    st16((c.r[18].w[0] + 562u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st16((c.r[18].w[0] + 566u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAAACu); st8((c.r[17].w[0] + 965u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_007A(c, 234u, depth + 1u); else { c.pc = 0x002EAAD0u; return; } if (c.pc != 0x002EAAACu) [[unlikely]] return; }
L_002EAAAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002EAAD0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 17184u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[3], 0u + 4u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[20].w[0] + 304u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[19], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[6], c.r[6].w[0] << 6);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 8296u)));
    c.budget -= 18;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[17], c.r[5].w[0] + c.r[6].w[0]);  if (t) { goto L_002EAB40; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 516u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002EAB40; } }
    c.f[1] = ld32((c.r[19].w[0] + 1088u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EAB50; } }
    c.budget -= 1;
L_002EAB40:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002EAB58; } }
    c.budget -= 1;
L_002EAB50:
    st8((c.r[20].w[0] + 516u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002EAB58:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002EABF8; } }
    st8((c.r[20].w[0] + 516u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 498u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_002EABD8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 10u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002EABD8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EABB0; } }
    set32(c.r[5], 0u + 2u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EABA4u); st8((c.r[20].w[0] + 10u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_0022(c, 112u, depth + 1u); else { c.pc = 0x00189710u; return; } if (c.pc != 0x002EABA4u) [[unlikely]] return; }
L_002EABA4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 965u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002EABD8; } }
L_002EABB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EABB8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 112u, depth + 1u); else { c.pc = 0x00189710u; return; } if (c.pc != 0x002EABB8u) [[unlikely]] return; }
L_002EABB8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_002EABD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EABCCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 112u, depth + 1u); else { c.pc = 0x00189710u; return; } if (c.pc != 0x002EABCCu) [[unlikely]] return; }
L_002EABCC:
    c.budget -= 1;
L_002EABD0:
    set32(c.r[3], 0u + 2u);
    st8((c.r[20].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002EABD8:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 750u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EABF0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[20].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002EABF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EAF88; } }
L_002EABF8:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 8658u));
    set32(c.r[2], 0u + 25u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 29u);  if (t) { goto L_002EAC50; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002EAC50; } }
    set32(c.r[2], 0u + 49u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 30u);  if (t) { goto L_002EAC50; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002EAC50; } }
    set32(c.r[2], 0u + 31u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002EAC50; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 839u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 5u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002EAC50; } }
    st8((c.r[20].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 85u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_002EAC50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAC58u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 261u, depth + 1u); else { c.pc = 0x002EB080u; return; } if (c.pc != 0x002EAC58u) [[unlikely]] return; }
L_002EAC58:
    c.r[4].d[0] = ld8((c.r[19].w[0] + 8658u));
    set32(c.r[3], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002EADF8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002EADF8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 87u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_002EAD30; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EAC98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EADF8; } }
    c.budget -= 1;
L_002EAC98:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 304u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[19].w[0] + 304u);  if (t) { goto L_002EACC0; } }
    st8((c.r[18].w[0] + 87u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[18].w[0] + 89u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EACB4u); st8((c.r[18].w[0] + 90u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x002EACB4u) [[unlikely]] return; }
L_002EACB4:
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    st8((c.r[18].w[0] + 91u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002EACC0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EADF8; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002EACD0:
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EACE0u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 280u, depth + 1u); else { c.pc = 0x003C6600u; return; } if (c.pc != 0x002EACE0u) [[unlikely]] return; }
L_002EACE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[16].d[0] << 56;  if (t) { goto L_002EAD18; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EACF8u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 398u, depth + 1u); else { c.pc = 0x0020BF00u; return; } if (c.pc != 0x002EACF8u) [[unlikely]] return; }
L_002EACF8:
    set32(c.r[5], c.r[16].w[0] + 44u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAD04u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 166u, depth + 1u); else { c.pc = 0x0016AA50u; return; } if (c.pc != 0x002EAD04u) [[unlikely]] return; }
L_002EAD04:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_002EAD18; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAD18u); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_0049(c, 393u, depth + 1u); else { c.pc = 0x00227A20u; return; } if (c.pc != 0x002EAD18u) [[unlikely]] return; }
L_002EAD18:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EACD0u | kUnwind; return; } goto L_002EACD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EADF8; } }
L_002EAD30:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 564u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002EAD48; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_002EAD50; } }
L_002EAD48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 87u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002EADF8; } }
L_002EAD50:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 89u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002EADF0; } }
    set32(c.r[2], 0u + 4u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st8((c.r[18].w[0] + 89u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAD70u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 280u, depth + 1u); else { c.pc = 0x003C6600u; return; } if (c.pc != 0x002EAD70u) [[unlikely]] return; }
L_002EAD70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EADC8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 90u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 91u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = c.r[2].d[0] << 56;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAD9Cu); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);  if (depth < kMaxDepth) unit_0042(c, 344u, depth + 1u); else { c.pc = 0x0020B8A0u; return; } if (c.pc != 0x002EAD9Cu) [[unlikely]] return; }
L_002EAD9C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 90u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 91u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EADB8u); set32(c.r[5], c.r[2].w[0] + 34u);  if (depth < kMaxDepth) unit_001A(c, 166u, depth + 1u); else { c.pc = 0x0016AA50u; return; } if (c.pc != 0x002EADB8u) [[unlikely]] return; }
L_002EADB8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EADC4u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_0049(c, 393u, depth + 1u); else { c.pc = 0x00227A20u; return; } if (c.pc != 0x002EADC4u) [[unlikely]] return; }
L_002EADC4:
    c.budget -= 1;
L_002EADC8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 90u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 90u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 90u)));
    c.r[3].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002EADF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 87u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002EADF8; } }
    c.budget -= 1;
L_002EADF0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[18].w[0] + 89u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002EADF8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18776u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_002EAE10; } }
    st16((c.r[20].w[0] + 498u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002EAE10:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002EAEE0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_002EAEE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAE34u); st8((c.r[20].w[0] + 10u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_007A(c, 255u, depth + 1u); else { c.pc = 0x002EAFD0u; return; } if (c.pc != 0x002EAE34u) [[unlikely]] return; }
L_002EAE34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAE3Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 256u, depth + 1u); else { c.pc = 0x002EAFE0u; return; } if (c.pc != 0x002EAE3Cu) [[unlikely]] return; }
L_002EAE3C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    set32(c.r[3], 0u + 11u);
    set32(c.r[4], ld32((c.r[20].w[0] + 184u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    st32((c.r[20].w[0] + 188u), c.r[4].w[0]);
    c.f[3] = ld32((c.r[17].w[0] + 16u));
    c.f[2] = ld32((c.r[17].w[0] + 20u));
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    st32((c.r[18].w[0]), c.f[3]);
    st32((c.r[18].w[0] + 4u), c.f[2]);
    st32((c.r[18].w[0] + 8u), c.f[1]);
    st32((c.r[18].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[17].w[0] + 32u));
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    st32((c.r[18].w[0] + 16u), c.f[3]);
    st32((c.r[18].w[0] + 20u), c.f[2]);
    st32((c.r[18].w[0] + 24u), c.f[1]);
    st32((c.r[18].w[0] + 28u), c.f[0]);
    c.f[3] = ld32((c.r[17].w[0] + 48u));
    c.f[2] = ld32((c.r[17].w[0] + 52u));
    c.f[1] = ld32((c.r[17].w[0] + 56u));
    c.f[0] = ld32((c.r[17].w[0] + 60u));
    st32((c.r[18].w[0] + 32u), c.f[3]);
    st32((c.r[18].w[0] + 36u), c.f[2]);
    st32((c.r[18].w[0] + 40u), c.f[1]);
    st32((c.r[18].w[0] + 44u), c.f[0]);
    st8((c.r[19].w[0] + 965u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = ld8((c.r[19].w[0] + 8658u));
    c.budget -= 35;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002EAF88; } }
    st8((c.r[18].w[0] + 87u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 88u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 89u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 90u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002EAF88; } }
    c.budget -= 1;
L_002EAEE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 10u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002EAF88; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_002EAF50; } }
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], 0u + 1u);
    st8((c.r[20].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002EAF38; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002EAF38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAF2Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 354u, depth + 1u); else { c.pc = 0x002EB6B0u; return; } if (c.pc != 0x002EAF2Cu) [[unlikely]] return; }
L_002EAF2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EAF48; } }
    c.budget -= 1;
L_002EAF38:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAF44u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0022(c, 112u, depth + 1u); else { c.pc = 0x00189710u; return; } if (c.pc != 0x002EAF44u) [[unlikely]] return; }
L_002EAF44:
    c.budget -= 1;
L_002EAF48:
    set32(c.r[3], 0u + 1u);
    st8((c.r[19].w[0] + 965u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002EAF50:
    set32(c.r[3], ld32((c.r[19].w[0] + 1236u)));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002EAF80; } }
    c.r[4].d[0] = ld8((c.r[19].w[0] + 8658u));
    set32(c.r[3], 0u + 26u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002EAF88; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 850u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EAF88; } }
    c.budget -= 1;
L_002EAF80:
    set32(c.r[3], 0u + 1u);
    st8((c.r[20].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002EAF88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002EAFB0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002EAFC0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_002EAFD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EAFE0:
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] - 22192u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8663u)));
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[4].w[0] + 496u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 498u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 500u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002EB030:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002EB068; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB050u);  if (depth < kMaxDepth) unit_007A(c, 261u, depth + 1u); else { c.pc = 0x002EB080u; return; } if (c.pc != 0x002EB050u) [[unlikely]] return; }
L_002EB050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB058u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002EB058u) [[unlikely]] return; }
L_002EB058:
    set32(c.r[5], ld32((c.r[16].w[0] + 188u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB064u); set32(c.r[4], ld32((c.r[16].w[0] + 24u)));  if (depth < kMaxDepth) unit_0068(c, 89u, depth + 1u); else { c.pc = 0x002A25C0u; return; } if (c.pc != 0x002EB064u) [[unlikely]] return; }
L_002EB064:
    c.budget -= 1;
L_002EB068:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002EB080:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[18], ld32((c.r[4].w[0] + 24u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[17], c.r[19].w[0] + 304u);  if (t) { goto L_002EB690; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 19552u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x002E8000u < 16384u) { entry = entries_007A[(t - 0x002E8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002EB0D0:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 8658u));
    set32(c.r[2], 0u + 26u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EB138; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 850u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EB138; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 82u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB100u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002EB100u) [[unlikely]] return; }
L_002EB100:
    c.f[13] = ld32((c.r[18].w[0] + 4436u));
    c.f[14] = ld32((c.r[18].w[0] + 4440u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB110u); c.f[12] = ld32((c.r[18].w[0] + 4432u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002EB110u) [[unlikely]] return; }
L_002EB110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB118u); set32(c.r[4], ld32((c.r[18].w[0] + 5356u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x002EB118u) [[unlikely]] return; }
L_002EB118:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB120u); set32(c.r[4], ld32((c.r[18].w[0] + 5360u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x002EB120u) [[unlikely]] return; }
L_002EB120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB128u); set32(c.r[4], ld32((c.r[18].w[0] + 5364u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x002EB128u) [[unlikely]] return; }
L_002EB128:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB130u); set32(c.r[4], c.r[19].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002EB130u) [[unlikely]] return; }
L_002EB130:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EB690; } }
L_002EB138:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 82u)));
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB150u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_002E(c, 318u, depth + 1u); else { c.pc = 0x001BB220u; return; } if (c.pc != 0x002EB150u) [[unlikely]] return; }
L_002EB150:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    st32((c.r[19].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 180u)));
    st32((c.r[19].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    st32((c.r[19].w[0] + 80u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 82u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB17Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002EB17Cu) [[unlikely]] return; }
L_002EB17C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB188u); set32(c.r[5], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x002EB188u) [[unlikely]] return; }
L_002EB188:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB190u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002EB190u) [[unlikely]] return; }
L_002EB190:
    c.f[13] = ld32((c.r[19].w[0] + 36u));
    c.f[14] = ld32((c.r[19].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB1A0u); c.f[12] = ld32((c.r[19].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002EB1A0u) [[unlikely]] return; }
L_002EB1A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB1A8u); set32(c.r[4], ld32((c.r[19].w[0] + 88u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x002EB1A8u) [[unlikely]] return; }
L_002EB1A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB1B0u); set32(c.r[4], ld32((c.r[19].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x002EB1B0u) [[unlikely]] return; }
L_002EB1B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB1B8u); set32(c.r[4], ld32((c.r[19].w[0] + 80u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x002EB1B8u) [[unlikely]] return; }
L_002EB1B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB1C0u); set32(c.r[4], c.r[19].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002EB1C0u) [[unlikely]] return; }
L_002EB1C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EB690; } }
L_002EB1C8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EB240; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 83u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB1ECu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002EB1ECu) [[unlikely]] return; }
L_002EB1EC:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB1F8u); set32(c.r[5], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x002EB1F8u) [[unlikely]] return; }
L_002EB1F8:
    set32(c.r[2], ld32((c.r[18].w[0] + 84u)));
    st32((c.r[19].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] - 16384u);
    st32((c.r[19].w[0] + 84u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[19].w[0] + 84u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB218u); st32((c.r[19].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002EB218u) [[unlikely]] return; }
L_002EB218:
    c.f[13] = ld32((c.r[19].w[0] + 36u));
    c.f[14] = ld32((c.r[19].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB228u); c.f[12] = ld32((c.r[19].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002EB228u) [[unlikely]] return; }
L_002EB228:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB230u); set32(c.r[4], ld32((c.r[19].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x002EB230u) [[unlikely]] return; }
L_002EB230:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB238u); set32(c.r[4], c.r[19].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002EB238u) [[unlikely]] return; }
L_002EB238:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EB690; } }
L_002EB240:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 83u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB254u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002EB254u) [[unlikely]] return; }
L_002EB254:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB260u); set32(c.r[5], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x002EB260u) [[unlikely]] return; }
L_002EB260:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB268u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002EB268u) [[unlikely]] return; }
L_002EB268:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB270u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002EB270u) [[unlikely]] return; }
L_002EB270:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB278u); set32(c.r[4], c.r[18].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002EB278u) [[unlikely]] return; }
L_002EB278:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB280u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 179u, depth + 1u); else { c.pc = 0x00126810u; return; } if (c.pc != 0x002EB280u) [[unlikely]] return; }
L_002EB280:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB288u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002EB288u) [[unlikely]] return; }
L_002EB288:
    c.f[13] = ld32((c.r[19].w[0] + 36u));
    c.f[14] = ld32((c.r[19].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB298u); c.f[12] = ld32((c.r[19].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002EB298u) [[unlikely]] return; }
L_002EB298:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB2A0u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x002EB2A0u) [[unlikely]] return; }
L_002EB2A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB2A8u); c.r[4].d[0] = 0ull | 49152ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x002EB2A8u) [[unlikely]] return; }
L_002EB2A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB2B0u); set32(c.r[4], c.r[19].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002EB2B0u) [[unlikely]] return; }
L_002EB2B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EB690; } }
L_002EB2B8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB2CCu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002EB2CCu) [[unlikely]] return; }
L_002EB2CC:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB2DCu); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002EB2DCu) [[unlikely]] return; }
L_002EB2DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB2E4u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 80u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x002EB2E4u) [[unlikely]] return; }
L_002EB2E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB2ECu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 78u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x002EB2ECu) [[unlikely]] return; }
L_002EB2EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB2F4u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 76u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x002EB2F4u) [[unlikely]] return; }
L_002EB2F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB2FCu); set32(c.r[4], c.r[19].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002EB2FCu) [[unlikely]] return; }
L_002EB2FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EB690; } }
    c.budget -= 1;
L_002EB308:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EB3D8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 83u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB32Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002EB32Cu) [[unlikely]] return; }
L_002EB32C:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB338u); set32(c.r[5], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x002EB338u) [[unlikely]] return; }
L_002EB338:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 83u)));
    set32(c.r[3], c.r[29].w[0] + 168u);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2032u));
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 83u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2040u));
    st32((c.r[3].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 32u));
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[12] = ld32((c.r[29].w[0] + 160u));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB390u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x002EB390u) [[unlikely]] return; }
L_002EB390:
    st32((c.r[19].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] + 16384u);
    st32((c.r[19].w[0] + 84u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[19].w[0] + 84u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB3ACu); st32((c.r[19].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002EB3ACu) [[unlikely]] return; }
L_002EB3AC:
    c.f[13] = ld32((c.r[19].w[0] + 36u));
    c.f[14] = ld32((c.r[19].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB3BCu); c.f[12] = ld32((c.r[19].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002EB3BCu) [[unlikely]] return; }
L_002EB3BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB3C4u); set32(c.r[4], ld32((c.r[19].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x002EB3C4u) [[unlikely]] return; }
L_002EB3C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB3CCu); set32(c.r[4], c.r[19].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002EB3CCu) [[unlikely]] return; }
L_002EB3CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EB690; } }
    c.budget -= 1;
L_002EB3D8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 83u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB3ECu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002EB3ECu) [[unlikely]] return; }
L_002EB3EC:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB3F8u); set32(c.r[5], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x002EB3F8u) [[unlikely]] return; }
L_002EB3F8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 83u)));
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[16], c.r[29].w[0] + 168u);
    set32(c.r[4], c.r[18].w[0] + 8592u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2032u));
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 83u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2036u));
    st32((c.r[29].w[0] + 164u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 83u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2040u));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB448u); st32((c.r[16].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_002E(c, 117u, depth + 1u); else { c.pc = 0x001B9AF0u; return; } if (c.pc != 0x002EB448u) [[unlikely]] return; }
L_002EB448:
    set32(c.r[4], c.r[18].w[0] + 8592u);
    set32(c.r[5], c.r[19].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB458u); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_002E(c, 117u, depth + 1u); else { c.pc = 0x001B9AF0u; return; } if (c.pc != 0x002EB458u) [[unlikely]] return; }
L_002EB458:
    c.f[1] = ld32((c.r[29].w[0] + 160u));
    set32(c.r[17], c.r[29].w[0] + 152u);
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[12] = ld32((c.r[29].w[0] + 160u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB488u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x002EB488u) [[unlikely]] return; }
L_002EB488:
    st32((c.r[19].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[4], c.r[18].w[0] + 8592u);
    set32(c.r[2], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] + 16384u);
    st32((c.r[19].w[0] + 84u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[19].w[0] + 84u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB4A8u); st32((c.r[19].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002EB4A8u) [[unlikely]] return; }
L_002EB4A8:
    c.f[12] = ld32((c.r[29].w[0] + 144u));
    c.f[13] = ld32((c.r[29].w[0] + 148u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB4B8u); c.f[14] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002EB4B8u) [[unlikely]] return; }
L_002EB4B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB4C0u); set32(c.r[4], ld32((c.r[19].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x002EB4C0u) [[unlikely]] return; }
L_002EB4C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB4C8u); set32(c.r[4], c.r[19].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002EB4C8u) [[unlikely]] return; }
L_002EB4C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EB690; } }
L_002EB4D0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 83u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB4E4u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002EB4E4u) [[unlikely]] return; }
L_002EB4E4:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB4F4u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002EB4F4u) [[unlikely]] return; }
L_002EB4F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB4FCu); c.r[4].d[0] = 0ull | 49152ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x002EB4FCu) [[unlikely]] return; }
L_002EB4FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB504u); set32(c.r[4], c.r[19].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002EB504u) [[unlikely]] return; }
L_002EB504:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EB690; } }
    c.budget -= 1;
L_002EB510:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 82u)));
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB528u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_002E(c, 318u, depth + 1u); else { c.pc = 0x001BB220u; return; } if (c.pc != 0x002EB528u) [[unlikely]] return; }
L_002EB528:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    st32((c.r[19].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 180u)));
    st32((c.r[19].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    st32((c.r[19].w[0] + 80u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 82u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB554u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002EB554u) [[unlikely]] return; }
L_002EB554:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB560u); set32(c.r[5], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x002EB560u) [[unlikely]] return; }
L_002EB560:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB568u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002EB568u) [[unlikely]] return; }
L_002EB568:
    c.f[13] = ld32((c.r[19].w[0] + 36u));
    c.f[14] = ld32((c.r[19].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB578u); c.f[12] = ld32((c.r[19].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002EB578u) [[unlikely]] return; }
L_002EB578:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB580u); set32(c.r[4], ld32((c.r[19].w[0] + 88u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x002EB580u) [[unlikely]] return; }
L_002EB580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB588u); set32(c.r[4], 0u - 1820u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x002EB588u) [[unlikely]] return; }
L_002EB588:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB590u); set32(c.r[4], ld32((c.r[19].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x002EB590u) [[unlikely]] return; }
L_002EB590:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB598u); set32(c.r[4], ld32((c.r[19].w[0] + 80u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x002EB598u) [[unlikely]] return; }
L_002EB598:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB5A0u); set32(c.r[4], c.r[19].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002EB5A0u) [[unlikely]] return; }
L_002EB5A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EB690; } }
L_002EB5A8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 83u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB5BCu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002EB5BCu) [[unlikely]] return; }
L_002EB5BC:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB5CCu); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002EB5CCu) [[unlikely]] return; }
L_002EB5CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB5D4u); set32(c.r[4], c.r[19].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002EB5D4u) [[unlikely]] return; }
L_002EB5D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EB690; } }
    c.budget -= 1;
L_002EB5E0:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 8658u));
    set32(c.r[2], 0u + 26u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EB648; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 850u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EB648; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 83u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB610u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002EB610u) [[unlikely]] return; }
L_002EB610:
    c.f[13] = ld32((c.r[18].w[0] + 4436u));
    c.f[14] = ld32((c.r[18].w[0] + 4440u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB620u); c.f[12] = ld32((c.r[18].w[0] + 4432u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002EB620u) [[unlikely]] return; }
L_002EB620:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB628u); set32(c.r[4], ld32((c.r[18].w[0] + 5356u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x002EB628u) [[unlikely]] return; }
L_002EB628:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB630u); set32(c.r[4], ld32((c.r[18].w[0] + 5360u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x002EB630u) [[unlikely]] return; }
L_002EB630:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB638u); set32(c.r[4], ld32((c.r[18].w[0] + 5364u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x002EB638u) [[unlikely]] return; }
L_002EB638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB640u); set32(c.r[4], c.r[19].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002EB640u) [[unlikely]] return; }
L_002EB640:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EB690; } }
L_002EB648:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 83u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB65Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002EB65Cu) [[unlikely]] return; }
L_002EB65C:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB66Cu); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002EB66Cu) [[unlikely]] return; }
L_002EB66C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB674u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 80u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x002EB674u) [[unlikely]] return; }
L_002EB674:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB67Cu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 78u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x002EB67Cu) [[unlikely]] return; }
L_002EB67C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB684u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 76u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x002EB684u) [[unlikely]] return; }
L_002EB684:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB68Cu); set32(c.r[4], c.r[19].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002EB68Cu) [[unlikely]] return; }
L_002EB68C:
    c.budget -= 1;
L_002EB690:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_002EB6B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB6D4u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x002EB6D4u) [[unlikely]] return; }
L_002EB6D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002EB740; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[6], 0u + 18u);
    set32(c.r[3], c.r[3].w[0] - 18592u);
    set32(c.r[2], c.r[2].w[0] - 18144u);
    set32(c.r[4], c.r[16].w[0] + 192u);
    set32(c.r[5], c.r[17].w[0] + 192u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    st8((c.r[16].w[0] + 268u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    st8((c.r[16].w[0] + 270u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[16].w[0] + 264u), c.r[16].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB730u); st32((c.r[16].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 251u, depth + 1u); else { c.pc = 0x00102880u; return; } if (c.pc != 0x002EB730u) [[unlikely]] return; }
L_002EB730:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB73Cu); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002EB73Cu) [[unlikely]] return; }
L_002EB73C:
    c.budget -= 1;
L_002EB740:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002EB760:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 16016u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002E8000u < 16384u) { entry = entries_007A[(t - 0x002E8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002EB780:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 29008u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[17].w[0] + 304u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB7B8u); st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x002EB7B8u) [[unlikely]] return; }
L_002EB7B8:
    set32(c.r[2], 0u + 120u);
    c.r[3].d[0] = 0ull + 0ull;
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_002EB7C8:
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[3], c.r[3].w[0] + 3u);
    st32((c.r[16].w[0]), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 9ll ? 1ull : 0ull;
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 72u), 0u);
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 80u), 0u);
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 96u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EB7C8u | kUnwind; return; } goto L_002EB7C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB810u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 363u, depth + 1u); else { c.pc = 0x002EB830u; return; } if (c.pc != 0x002EB810u) [[unlikely]] return; }
L_002EB810:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002EB830:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 15;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[19], c.r[20].w[0] + 304u);  if (t) { goto L_002EB880; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002EB8E0; } }
    c.budget -= 1;
L_002EB880:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] - 16208u);
    set32(c.r[16], c.r[16].w[0] - 16064u);
    c.budget -= 6;
L_002EB898:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB8A4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x002EB8A4u) [[unlikely]] return; }
L_002EB8A4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[5], ld32((c.r[19].w[0] + 16u)));
    c.r[3].d[0] = c.r[18].sd[0] < 9ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 16u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    st32((c.r[19].w[0] + 16u), c.r[4].w[0]);
    c.r[4].d[0] = ld16((c.r[19].w[0] + 16u));
    st32((c.r[19].w[0] + 16u), c.r[4].w[0]);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EB898u | kUnwind; return; } goto L_002EB898; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[20].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002EB8E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002EB900:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002EB910:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_002EB920:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[18], c.r[19].w[0] + 304u);  if (t) { goto L_002EB9B0; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002EB950:
    set32(c.r[4], ld32((c.r[19].w[0] + 184u)));
    set32(c.r[3], c.r[17].w[0] + 10u);
    set32(c.r[16], c.r[3].w[0] << 2);
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[19].w[0] + 192u);  if (t) { goto L_002EB9A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB97Cu);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002EB97Cu) [[unlikely]] return; }
L_002EB97C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB984u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x002EB984u) [[unlikely]] return; }
L_002EB984:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB98Cu); set32(c.r[4], ld32((c.r[18].w[0] + 16u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x002EB98Cu) [[unlikely]] return; }
L_002EB98C:
    set32(c.r[2], ld32((c.r[19].w[0] + 184u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB99Cu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x002EB99Cu) [[unlikely]] return; }
L_002EB99C:
    c.budget -= 1;
L_002EB9A0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EB950u | kUnwind; return; } goto L_002EB950; } }
L_002EB9B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002EB9D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB9F8u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x002EB9F8u) [[unlikely]] return; }
L_002EB9F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EBA80; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[4], 0u + 19u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.f[3] = ld32((c.r[17].w[0]));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[2].w[0] + 32u), c.f[3]);
    st32((c.r[2].w[0] + 36u), c.f[2]);
    st32((c.r[2].w[0] + 40u), c.f[1]);
    st32((c.r[2].w[0] + 44u), c.f[0]);
    c.budget -= 18;
    { const bool t = c.r[16].d[0] == 0ull; st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (t) { goto L_002EBA58; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st32((c.r[2].w[0] + 112u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 116u), c.r[3].w[0]);  if (t) { goto L_002EBA68; } }
L_002EBA58:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[2].w[0] + 112u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 116u), c.r[3].w[0]);
    c.budget -= 4;
L_002EBA68:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[3], c.r[3].w[0] - 17760u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[3], c.r[3].w[0] - 16912u);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 6;
L_002EBA80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002EBAA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 15968u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002E8000u < 16384u) { entry = entries_007A[(t - 0x002E8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002EBAC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 316u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 312u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 304u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 308u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 19;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002EBB20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBB14u); set32(c.r[4], ld32((c.r[16].w[0] + 28u)));  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002EBB14u) [[unlikely]] return; }
L_002EBB14:
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBB20u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x002EBB20u) [[unlikely]] return; }
L_002EBB20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBB28u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002EBB28u) [[unlikely]] return; }
L_002EBB28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBB30u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x002EBB30u) [[unlikely]] return; }
L_002EBB30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBB38u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002EBB38u) [[unlikely]] return; }
L_002EBB38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002EBB50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    set32(c.r[16], c.r[17].w[0] + 304u);
    set32(c.r[5], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].d[0] & 3ull;
    c.budget -= 11;
    { const bool t = c.r[6].sd[0] >= 0; st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_002EBB88; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EBB88; } }
    set32(c.r[3], c.r[3].w[0] - 4u);
    c.budget -= 1;
L_002EBB88:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002EBCA0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EBBC0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_002EBBC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBBC8u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002EBBC8u) [[unlikely]] return; }
L_002EBBC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBBD0u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x002EBBD0u) [[unlikely]] return; }
L_002EBBD0:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBBE0u); set32(c.r[4], c.r[2].w[0] << 13);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x002EBBE0u) [[unlikely]] return; }
L_002EBBE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBBE8u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x002EBBE8u) [[unlikely]] return; }
L_002EBBE8:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBBF8u); set32(c.r[4], c.r[2].w[0] << 13);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x002EBBF8u) [[unlikely]] return; }
L_002EBBF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBC00u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x002EBC00u) [[unlikely]] return; }
L_002EBC00:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    set32(c.r[2], c.r[2].w[0] - 16000u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBC20u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x002EBC20u) [[unlikely]] return; }
L_002EBC20:
    c.f[12] = ld32((c.r[17].w[0] + 112u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBC30u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x002EBC30u) [[unlikely]] return; }
L_002EBC30:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002EBC90; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002EBC78; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002EBC58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EBCA0; } }
L_002EBC58:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBC64u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x002EBC64u) [[unlikely]] return; }
L_002EBC64:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBC70u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_007B(c, 90u, depth + 1u); else { c.pc = 0x002EC700u; return; } if (c.pc != 0x002EBC70u) [[unlikely]] return; }
L_002EBC70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EBCA0; } }
L_002EBC78:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBC84u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x002EBC84u) [[unlikely]] return; }
L_002EBC84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EBCA0; } }
    c.budget -= 1;
L_002EBC90:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBC9Cu); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x002EBC9Cu) [[unlikely]] return; }
L_002EBC9C:
    c.budget -= 1;
L_002EBCA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002EBD70; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_002EBCE8; } }
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.f[0]);  if (t) { goto L_002EBD10; } }
    c.budget -= 1;
L_002EBCE8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D230000u);
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.budget -= 10;
L_002EBD10:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBE2A0000u);
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.r[3].d[0] = c.r[3].d[0] | 43691ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002EBD50; } }
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002EBD50:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 12u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002EBD70; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002EBDB8; } }
    c.budget -= 1;
L_002EBD70:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EBD98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBD88u); set32(c.r[4], ld32((c.r[17].w[0] + 28u)));  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002EBD88u) [[unlikely]] return; }
L_002EBD88:
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBD94u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x002EBD94u) [[unlikely]] return; }
L_002EBD94:
    c.budget -= 1;
L_002EBD98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBDA0u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002EBDA0u) [[unlikely]] return; }
L_002EBDA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBDA8u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x002EBDA8u) [[unlikely]] return; }
L_002EBDA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBDB0u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002EBDB0u) [[unlikely]] return; }
L_002EBDB0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002EBDB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002EBDD0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002EBDE0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_002EBDF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 16u);
    st32((c.r[1].w[0] + 20288u), 0u);
    set32(c.r[3], c.r[4].w[0] + 304u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[9], c.r[29].w[0] + 20u);
    st32((c.r[1].w[0] + 20244u), c.r[5].w[0]);
    set32(c.r[8], c.r[29].w[0] + 24u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[5], c.r[5].w[0] - 15936u);
    st32((c.r[1].w[0] + 20252u), c.r[5].w[0]);
    set32(c.r[5], c.r[28].w[0] - 28688u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20260u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[5], c.r[5].w[0] - 15952u);
    st32((c.r[1].w[0] + 20256u), c.r[5].w[0]);
    set32(c.r[5], c.r[29].w[0] + 40u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20272u), c.r[5].w[0]);
    set32(c.r[5], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20280u), c.r[5].w[0]);
    set32(c.r[5], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st16((c.r[1].w[0] + 20284u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[5], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], 0u + 97u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x008F0000u);
    st16((c.r[29].w[0] + 40u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[5], 0u + 65u);
    st16((c.r[29].w[0] + 42u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[5], 0u + 158u);
    st16((c.r[29].w[0] + 44u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[5], 0u + 126u);
    st16((c.r[29].w[0] + 46u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[1].w[0] + 936u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20276u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 316u));
    c.budget -= 48;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[7], c.r[29].w[0] + 28u);  if (t) { goto L_002EBF60; } }
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[5].w[0];
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 16u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 36u));
    st32((c.r[9].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    st32((c.r[8].w[0]), c.f[1]);
    st32((c.r[7].w[0]), c.r[6].w[0]);
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 18;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EBF08; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EBF20; } }
L_002EBF08:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[1]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.budget -= 6;
L_002EBF20:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[28].w[0] - 28685u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[1].w[0] + 20268u), 0u);
    c.f[1] = ld32((c.r[4].w[0] + 112u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[1].w[0] + 20224u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 116u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 20224u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBF60u); st32((c.r[1].w[0] + 20228u), c.f[0]);  if (depth < kMaxDepth) unit_0067(c, 3u, depth + 1u); else { c.pc = 0x0029C020u; return; } if (c.pc != 0x002EBF60u) [[unlikely]] return; }
L_002EBF60:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002EBF70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBFA0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x002EBFA0u) [[unlikely]] return; }
L_002EBFA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_007B(c, 3u, depth); } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[4], 0u + 19u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[3] = ld32((c.r[18].w[0]));
    c.f[2] = ld32((c.r[18].w[0] + 4u));
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    c.f[0] = ld32((c.r[18].w[0] + 12u));
    st32((c.r[2].w[0] + 32u), c.f[3]);
    st32((c.r[2].w[0] + 36u), c.f[2]);
    st32((c.r[2].w[0] + 40u), c.f[1]);
    st32((c.r[2].w[0] + 44u), c.f[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 18;
    { const bool t = c.r[16].d[0] == 0ull; st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(0u));  if (t) { [[clang::musttail]] return unit_007B(c, 1u, depth); } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    st32((c.r[2].w[0] + 112u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 116u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_007B(c, 2u, depth); } }
    [[clang::musttail]] return unit_007B(c, 1u, depth);
}

}
